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
PATCH = 'SynthExhibit3-AdditiveSynthesis19.pd'

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
	GPIO.add_event_detect(button, GPIO.FALLING, callback=button_push, bouncetime=300)

#Set up PD Wrapper.
libpd_open_patch(PATCH, '.')

libpd_subscribe('t1')
libpd_subscribe('t2')
libpd_subscribe('t3')
libpd_subscribe('t4')
libpd_subscribe('t5')
libpd_subscribe('t6')
libpd_subscribe('t7')
libpd_subscribe('t8')
libpd_subscribe('H9')
libpd_subscribe('H10')
libpd_subscribe('H11')
libpd_subscribe('H12')
libpd_subscribe('H13')
libpd_subscribe('H14')
libpd_subscribe('H15')
libpd_subscribe('H16')

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
Station = StationBrain(6, Feedback, CardWriter)

#Define all analog inputs here. GetAnalogInput takes 4 arguments:
#Pin number 0-7 (or 0-15 for Stations with second MCP3008).
#Name of PD Receive object. Upper limit of input range. Optional debug flag to print values to console.
inputH1 = GetAnalogInput(0, "f1", 1)
inputH2 = GetAnalogInput(1, "f2", 1)
inputH3 = GetAnalogInput(2, "f3", 1)
inputH4 = GetAnalogInput(3, "f4", 1)
inputH5 = GetAnalogInput(4, "f5", 1)
inputH6 = GetAnalogInput(5, "f6", 1)
inputH7 = GetAnalogInput(6, "f7", 1)
inputH8 = GetAnalogInput(7, "f8", 1)
inputH9 = GetAnalogInput(8, "f9", 1)

while stream.is_active() and ALIVE:
	time.sleep(2)