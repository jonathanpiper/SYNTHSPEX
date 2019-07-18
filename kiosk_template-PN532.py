from pylibpd import *
import time
import RPi.GPIO as GPIO
import signal
import threading
import os
import sys
sys.path.append(os.path.abspath("/home/pi/SYNTHSPEX"))
from synthlibraryPN532 import *

#Important variables are being set here. 
ALIVE = True
PATCH = 'b.pd'

subprocess.call(["amixer", "sset", "'Speaker'", "0%"])

#Various functions are being defined here.
signal.signal(signal.SIGINT, end_read)

#Set up GPIO.
GPIO.setwarnings(False)
GPIObuttonpins = [37]

def button_push(button):
	if button == 37:
		print ('You triggered a note!')
		libpd_bang('pyin_play_note')
	return

for button in GPIObuttonpins:
	GPIO.setup(button,GPIO.IN,pull_up_down=GPIO.PUD_UP)
	GPIO.add_event_detect(button, GPIO.FALLING, callback=button_push, bouncetime=500)

GPIO.setup((MOSI, CLK, CS), GPIO.OUT)
GPIO.setup(MISO, GPIO.IN)

#Set up PD Wrapper.
libpd_open_patch(PATCH, '.')

libpd_subscribe('freq')
#print('got this far!')
#WriteObject contains methods for writing to the RFID card. readObject contains methods for 
#reading from the RFID card and ramping up the status LED and system volume accordingly.
readObject = CardReader(11)
#time.sleep(1)
#writeOjbect = CardWriter()

#Define all analog inputs here.
potMix = GetAnalogInput(5, "pyin_decay", 90)
potDecay = GetAnalogInput(6, "pyin_mix", 100)

while stream.is_active() and ALIVE:
	time.sleep(2)