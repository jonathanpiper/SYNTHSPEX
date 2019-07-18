from pylibpd import *
import time
import RPi.GPIO as GPIO
import signal
import threading
import os
import sys
sys.path.append(os.path.abspath("/home/pi/SYNTHSPEX"))
from synthlibrary import *

#Important variables are being set here. 
ALIVE = True
PATCH = 'SynthExhibit5-Envelope9.pd'

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
	GPIO.add_event_detect(button, GPIO.FALLING, callback=button_push, bouncetime=1000)

#Set up PD Wrapper.
libpd_open_patch(PATCH, '.')

libpd_subscribe('freq')
libpd_subscribe('A')
libpd_subscribe('D')

#Define the classes that control the Station.
#StationFeedback handles visual feedback. Optional first argument defines number of Status LED.
#Status LED pin defaults to 29.
#CardWriter handles the functionality of writing to the RFID card. This is split out to a
#separate subprocess because it is running nearly constantly.
#StationBrain handles initialization, first communication with the RFID reader, and up/down 
#volume and Status LED controls. StationBrain accepts three arguments:
#Nonoptional int stationnumber to control functionality needed by specific stations.
#Optional StationFeedback() instance, defaults to "Feedback."
#Optional StationCardWriter() instance, defaults to "CardWriter."
Feedback = StationFeedback()
CardWriter = StationCardWriter()
Station = StationBrain(5, Feedback, CardWriter)

#Define all analog inputs here. GetAnalogInput takes 4 arguments:
#Pin number 0-7 (or 0-15 for Stations with second MCP3008).
#Name of PD Receive object. Upper limit of input range. Optional debug flag to print values to console.
inputAttack = GetAnalogInput(6, "pyin_attack", 290)
inputDecay = GetAnalogInput(7, "pyin_decay", 290)

while stream.is_active() and ALIVE:
	time.sleep(2)