from pylibpd import *
import rtmidi_python as rtmidi
import time
import RPi.GPIO as GPIO
import signal
import threading
import os
import sys
sys.path.append(os.path.abspath("/home/pi/"))
from synthlibrary import *

#Important variables are being set here. 
STATION_NUMBER = str(sys.argv[1])
print("Station {0} is active!".format(STATION_NUMBER))
ALIVE = True

if STATION_NUMBER == "Piano" or "Push":
	PATCH = 'Piano20.pd'
elif STATION_NUMBER == "Theremin":
	PATCH = 'Theremin14.pd'

signal.signal(signal.SIGINT, end_read)

#Set up GPIO.
GPIO.setwarnings(False)
GPIObuttonpins = [18]

def button_push(button):
	if button is not 0:
		print ('You triggered a note! {0}'.format(button))
		libpd_bang('pynote')
	return

for button in GPIObuttonpins:
	GPIO.setmode(GPIO.BOARD)
	GPIO.setup(button,GPIO.IN,pull_up_down=GPIO.PUD_UP)
	GPIO.add_event_detect(button, GPIO.BOTH, callback=button_push, bouncetime=50)

#Set up PD Wrapper.
libpd_open_patch(PATCH, '/home/pi/RTM/')

inputVol = GetAnalogInput(0, "volume")

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
Feedback = StationFeedback(29, 33, 31)
#CardWriter = StationCardWriter()
Station = StationBrain(STATION_NUMBER, Feedback)

def midi_callback_poly(message, time_stamp):
    global osc
    #print len(osc)
    #print message
    if message[0] == 144:
        i = 0
        while i < len(osc):
            if osc[i] == 0:
                #print i
                #print message[1], message[2]
                libpd_float(("midi" + str(i + 1)), message[1])
                osc[i] = message[1]
                break
            i = i + 1
        if message[2] > 0:
            libpd_float(("note" + str(i + 1)), 1)
    elif message[0] == 128:
        if message[1] in osc:
            i = osc.index(message[1])
            libpd_float(("note" + str(i + 1)), 0)
            osc[i] = 0

def midi_callback_theremin(message, time_stamp):
	if message[1] == 20:
		libpd_float("midi", message[2] + 12)
	elif message[1] == 2 and message[2] > 0:
		libpd_float("note", 1)
	elif message[1] == 2 and message[2] == 0:
		libpd_float("note", 0)

midi_in = rtmidi.MidiIn()
#print ('hey', STATION_NUMBER)
if STATION_NUMBER == 'Piano' or STATION_NUMBER == 'Push':
    midi_in.callback = midi_callback_poly
elif STATION_NUMBER == 'Theremin':
    #print 'hi'
    midi_in.callback = midi_callback_theremin
midi_in.open_port(1)

while ALIVE == True:
	time.sleep(2)