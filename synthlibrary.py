import pyaudio
from pylibpd import *
import time
from mpmath import *
import RPi.GPIO as GPIO
import signal
import threading
import subprocess
import Adafruit_PN532 as PN532
from ctypes import *
from contextlib import contextmanager
import os
import sys
FNULL = open(os.devnull, 'w')
sys.path.insert(0, '/usr/local/lib/python2.7/dist-packages')
subprocess.call(["amixer", "sset", "'Speaker'", "0%"], stdout=FNULL)
ERROR_HANDLER_FUNC = CFUNCTYPE(None, c_char_p, c_int, c_char_p, c_int, c_char_p)

def py_error_handler(filename, line, function, err, fmt):
    pass

c_error_handler = ERROR_HANDLER_FUNC(py_error_handler)

@contextmanager
def noalsaerr():
    asound = cdll.LoadLibrary('libasound.so')
    asound.snd_lib_error_set_handler(c_error_handler)
    yield
    asound.snd_lib_error_set_handler(None)

try_read = True
try_write = False
CLK = 32
MISO = 36
MOSI = 38
CS = (40,26)

VOLUME_MULTIPLIER = .5 #Number between 0 and 1
semitone_adjustment = 1

parameters = {
	'H01' : 1.00,
	'H02' : 1.00,
	'H03' : 1.00,
	'H04' : 1.00,
	'H05' : 1.00,
	'H06' : 1.00,
	'H07' : 1.00,
	'H08' : 1.00,
	'H09' : 1.00,
	'H10' : 1.00,
	'H11' : 1.00,
	'H12' : 1.00,
	'H13' : 1.00,
	'H14' : 1.00,
	'H15' : 1.00,
	'H16' : 1.00,
	'centerFreq' : 0.00,
	'Q' : 0.00,
	'filterMix' : 0.00,
	'attack' : 0.00,
	'sustain' : 0.00,
	'release' : 0.00,
	'LFOAmpRate' : 0.00,
	'LFOAmpDepth' : 0.00,
	'LFOPitchRate' : 0.00,
	'LFOPitchDepth' : 0.00,
	'reverbDecay' : 0.00,
	'reverbMix' : 0.00,
}
sortedParameterKeys = sorted(parameters)

pn532 = PN532.PN532(12, 22, 16, 18)
pn532.begin()
pn532.SAM_configuration()

CARD_KEY = [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF]

class GetAnalogInput(object):
	def __init__(self, pin, control, scale, debug=False):
		if pin < 8:
			self.pin = pin
			self.CS = CS[0]
		else:
			self.pin = pin - 8
			self.CS = CS[1]
		GPIO.setup((MOSI, CLK, self.CS), GPIO.OUT)
		GPIO.setup(MISO, GPIO.IN)
		self.control = control
		self.scale = scale
		self.debug = debug
		self.value = fdiv(readadc(self.pin, CLK, MOSI, MISO, self.CS), 1024.000) * self.scale
		#print self.value
		thread = threading.Thread(target=self.run, args=())
		thread.daemon = True
		thread.start()

	def run(self):
		while True:
			newValue = fdiv(readadc(self.pin, CLK, MOSI, MISO, self.CS), 1024.000) * self.scale
			if newValue == 0:
				newValue = 0.001
			if (self.value > 0):
				if (abs((newValue / self.value) - 1) > .03):
					self.value = newValue
			if self.debug:
				print("Input {0} has value {1}".format(self.control, self.value))
			libpd_float(self.control, float(self.value))
			time.sleep(.05)

class StationBrain(object):
	def __init__(self, stationnumber, feedback="Feedback", cardwriter="CardWriter"):
		global parameters
		self.stationnumber = stationnumber
		self.feedback = feedback
		self.cardwriter = cardwriter
		self.paramString = ''
		thread = threading.Thread(target=self.run, args=())
		thread.daemon = True
		thread.start()

	def run(self):
		global try_read, STATUS_LED, CARD_KEY
		timeout_delay = 5
		tmp_timeout = timeout_delay
		if self.stationnumber is not 1:
			while True:
				#print ("i'm trying to read a card!")
				uid = pn532.read_passive_target()
				if uid is not None:
					tmp_timeout = timeout_delay
					#print("i'm connected to the card, and there will be a light on.")
					if try_read is False:
						if pn532.read_passive_target() != uid:
							#print("new card detected; reading parameters")
							self.readFromCard(uid)
							continue
						self.cardwriter.writeToCard(uid)
					elif try_read is True:
						self.readFromCard(uid)
						self.feedback.up()
						try_read = False
				elif tmp_timeout > 0:
					#print(tmp_timeout)
					#print("i can't find any cards. i'm going to reset to default parameters in " + str(tmp_timeout*2) + " seconds.")
					tmp_timeout -= 1
				else:
					#print("back to default parameters!")
					if self.feedback.status is True:
						self.feedback.down()
					try_read = True
					tmp_timeout = timeout_delay
				time.sleep(.7)
		else:
			while True:
				uid = pn532.read_passive_target()
				if uid is not None:
					#print uid
					tmp_timeout = timeout_delay
					#print("i'm connected to the card, and there will be a light on.")
					self.cardwriter.writeToCard(uid)
					if self.feedback.status is False:
						self.feedback.up()
				elif tmp_timeout > 0:
					#print(tmp_timeout)
					#print("i can't find any cards. i'm going to reset to default parameters in " + str(tmp_timeout*2) + " seconds.")
					tmp_timeout -= 1
				else:
					#print("back to default parameters!")
					#print(tmp_timeout)
					if self.feedback.status is True:
						self.feedback.down()
					try_read = True
					tmp_timeout = timeout_delay
				time.sleep(.7)
	
	def readFromCard(self, uid):
		global parameters, sortedParameterKeys
		i = 0
		for key in sortedParameterKeys:
			sector = int(floor(i/3))
			block = i % 3
			computedblock = ((sector+1)*4) + block
			pn532.mifare_classic_authenticate_block(uid, computedblock, PN532.MIFARE_CMD_AUTH_B,
												[0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF])
			tmpdata = pn532.mifare_classic_read_block(computedblock)
			if tmpdata is None:
				print('Failed to read block ',block,'!')
			else:
				tmpdata = tmpdata[:tmpdata.find("#")]
				parameters[key] = tmpdata
				libpd_float(key, float(tmpdata))
			i += 1

class StationCardWriter(object):
	def __init__(self):
		thread = threading.Thread(target=self.run, args=())
		thread.daemon = True
		thread.start()
	
	def run(self):
		while True:
			time.sleep(1)

	def writeToCard(self, uid):
		global parameters, sortedParameterKeys
		i = 0
		for key in sortedParameterKeys:
			sector = int(floor(i/3))
			block = i % 3
			computedblock = ((sector+1)*4) + block
			writedata = str(parameters[key]).ljust(16,'#')
			#print writedata
			#time.sleep(.1)
			if not pn532.mifare_classic_authenticate_block(uid, computedblock, PN532.MIFARE_CMD_AUTH_B,
												CARD_KEY):
				print('Authorization for block {0} failed.'.format(computedblock))
			if not pn532.mifare_classic_write_block(computedblock, writedata):
				print('Error! Failed to write to block {0}.'.format(computedblock))
			i += 1

class StationFeedback(object):
	def __init__(self, LEDpin=29):
		self.LEDpin = LEDpin
		GPIO.setup(self.LEDpin, GPIO.OUT)
		self.ledStatus = GPIO.PWM(self.LEDpin, 100)
		self.ledStatus.start(0)
		self.status = False
		thread = threading.Thread(target=self.run, args=())
		thread.daemon = True
		thread.start()

	def run(self):
		while True:
			time.sleep(1)

	def up(self):
		global VOLUME_MULTIPLIER
		for i in range (0, 101, 2):
			volume = str(i*VOLUME_MULTIPLIER) + "%"
			subprocess.call(["amixer", "sset", "'Speaker'", volume], stdout=FNULL)
			self.ledStatus.ChangeDutyCycle(i)
			self.status = True
			time.sleep(.01)

	def down(self):
		global VOLUME_MULTIPLIER
		for i in range (100, -1, -2):
			volume = str(i*VOLUME_MULTIPLIER) + "%"
			subprocess.call(["amixer", "sset", "'Speaker'", volume], stdout=FNULL)
			self.ledStatus.ChangeDutyCycle(i)
			self.status = False
			time.sleep(.03)	

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
	global parameters
	#print("pd just said that {0} is {1}".format(s[0], s[1]))
	parameters[s[0]] = s[1]
'''
	if s[0] == 'pyout_frequency':
		frequency = round(s[1],2)
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
		'''

with noalsaerr():
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

#libpd_set_print_callback(pdin)
libpd_set_float_callback(pdin)
#libpd_set_list_callback(pdin)
libpd_set_symbol_callback(pdin)
#libpd_set_noteon_callback(pdin)