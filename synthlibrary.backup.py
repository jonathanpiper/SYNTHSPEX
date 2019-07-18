import pyaudio
from pylibpd import *
import time
from mpmath import *
import RPi.GPIO as GPIO
import signal
import threading
import subprocess
import Adafruit_PN532 as PN532
import binascii
import sys

reader = SimpleMFRC522()
try_read = True
try_write = False
CLK = 32
MISO = 36
MOSI = 38
CS = 40
GPIO.setup((MOSI, CLK, CS), GPIO.OUT)
GPIO.setup(MISO, GPIO.IN)

VOLUME_MULTIPLIER = 1 #Number between 0 and 1
reference_frequency = 440.0
frequency = reference_frequency
semitone_adjustment = 1

class GetAnalogInput(object):
	def __init__(self, pin, control, scale):
		self.pin = pin
		self.control = control
		self.scale = scale
		self.value = fdiv(readadc(self.pin, CLK, MOSI, MISO, CS), 1024.000) * self.scale
		#print self.value
		thread = threading.Thread(target=self.run, args=())
		thread.daemon = True
		thread.start()

	def run(self):
		while True:
			newValue = fdiv(readadc(self.pin, CLK, MOSI, MISO, CS), 1024.000) * self.scale
			if newValue == 0:
				newValue = 0.001
			if (self.value > 0):
				if (abs((newValue / self.value) - 1) > .03):
					self.value = newValue
			libpd_float(self.control, float(self.value))
			time.sleep(.05)

class CardReader(object):
	def __init__(self, LEDpin):
		self.status = False
		self.LEDpin = LEDpin
		GPIO.setup(self.LEDpin, GPIO.OUT)
		self.ledStatus = GPIO.PWM(self.LEDpin, 100)
		self.ledStatus.start(0)		
		thread = threading.Thread(target=self.run, args=())
		thread.daemon = True
		thread.start()

	def run(self):
		global frequency, reference_frequency, try_read, STATUS_LED
		timeout_delay = 10
		tmp_timeout = timeout_delay
		while True:
			#print ("i'm trying to read a card!")
			id, tmp_frequency = reader.read_no_block()
			reader.READER.MFRC522_Read(8)
			if id is not None:
				#print("i'm connected to the card, and there will be a light on.")
				tmp_timeout = timeout_delay
				if try_read:
					self.up()
					frequency = round(float(tmp_frequency), 1)
					libpd_float('pyin_set_freq', float(frequency))
					try_read = False
			elif tmp_timeout > 0:
				#print("i can't find any cards. i'm going to reset to default parameters in " + str(tmp_timeout*2) + " seconds.")
				tmp_timeout -= 1
			else:
				#print("back to default parameters!")
				if self.status:
					self.down()
				try_read = True
				tmp_timeout = timeout_delay
				libpd_float('pyin_set_freq', float(reference_frequency))
			time.sleep(1)

	def up(self):
		global VOLUME_MULTIPLIER
		for i in range (0, 101, 2):
			volume = str(i*VOLUME_MULTIPLIER) + "%"
			subprocess.call(["amixer", "sset", "'Speaker'", volume])
			self.ledStatus.ChangeDutyCycle(i)
			time.sleep(.05)
		self.status = True

	def down(self):
		global VOLUME_MULTIPLIER
		for i in range (100, -1, -2):
			volume = str(i*VOLUME_MULTIPLIER) + "%"
			subprocess.call(["amixer", "sset", "'Speaker'", volume])
			self.ledStatus.ChangeDutyCycle(i)
			time.sleep(.05)
		self.status = False

class CardWriter(object):
	def __init__(self):
		thread = threading.Thread(target=self.run, args=())
		thread.daemon = True
		thread.start()

	def write_to_RFID(self, freq):
		write = None
		write = reader.write_no_block(str(freq))[0]
		if write is not None:
			print('just wrote ' + str(freq) + ' to the card.')
		reader.READER.MFRC522_Read(8)
		return

	def run(self):
		global frequency
		while True:
			self.write_to_RFID(round(float(frequency),1))
			time.sleep(1)

def readadc(adcnum, clockpin, mosipin, misopin, cspin):
	if ((adcnum > 7) or (adcnum < 0)):
			return -1
	GPIO.output(cspin, True)

	GPIO.output(clockpin, False)  # start clock low
	GPIO.output(cspin, False)     # bring CS low

	commandout = adcnum
	commandout |= 0x18  # start bit + single-ended bit
	commandout <<= 3    # we only need to send 5 bits here
	for i in range(5):
			if (commandout & 0x80):
					GPIO.output(mosipin, True)
			else:
					GPIO.output(mosipin, False)
			commandout <<= 1
			GPIO.output(clockpin, True)
			GPIO.output(clockpin, False)

	adcout = 0
	# read in one empty bit, one null bit and 10 ADC bits
	for i in range(12):
			GPIO.output(clockpin, True)
			GPIO.output(clockpin, False)
			adcout <<= 1
			if (GPIO.input(misopin)):
					adcout |= 0x1

	GPIO.output(cspin, True)
	
	adcout >>= 1       # first bit is 'null' so drop it
	return adcout	

def scalar_frequency_adjustment(semitones):
	global frequency
	f = round((frequency * pow(root(2, 12), semitones)) - frequency, 1)
	return f

def end_read(signal,frame):
	global ALIVE
	#GPIO.cleanup()
	ALIVE = False
	stream.close()
	p.terminate()
	libpd_release()
	print "Ctrl+C captured, quitting."

def pd_callback(in_data,frame_count,time_info,status):
	outp = m.process(data)
	return (outp,pyaudio.paContinue)

def pdin(*s):
	global frequency
	#print s
	if s[0] == 'pyout_frequency':
		frequency = s[1]
		#print('PD just reported that the current frequency is ' + str(s[1]) + '!')
	elif s[0] == 't1':
		f = s[1]
		print f
	elif s[0] == 'A':
		f = s[1]
		print f
	elif s[0] == 'D':
		f = s[1]
		print f

p  = pyaudio.PyAudio()
bs = libpd_blocksize()
data=bytearray(array.array('B',[0]*bs))
stream = p.open(format = pyaudio.paInt16,
	channels = 1,
	rate = 48000,
	input = False,
	output = True,
	frames_per_buffer = bs,
	stream_callback=pd_callback)

m = PdManager(0, 1 , 48000, 1)

libpd_set_print_callback(pdin)
libpd_set_float_callback(pdin)
libpd_set_list_callback(pdin)
libpd_set_symbol_callback(pdin)
libpd_set_noteon_callback(pdin)