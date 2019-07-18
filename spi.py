import time
from mpmath import *
import RPi.GPIO as GPIO

GPIO.setwarnings(False)
GPIO.setmode(GPIO.BOARD)
clockpin = 32
misopin = 36
mosipin = 38
cspin = 40

GPIO.setup((mosipin, clockpin, cspin), GPIO.OUT)
GPIO.setup(misopin, GPIO.IN)

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

while True:
	#for i in range (0,15):
	#	print i, ": ", readadc(i)
	for x in range (0,8):
		print x, ":", readadc(x, 32, 38, 36, 40)
		time.sleep(.2)