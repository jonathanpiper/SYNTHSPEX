from pylibpd import *
import rtmidi_python as rtmidi
from time import sleep
import RPi.GPIO as GPIO
import signal
import threading
import os
import sys
sys.path.append(os.path.abspath("/home/pi/"))
from synthlibrary import *
import random
import math

#Important variables are being set here. 
STATION_NUMBER = str(sys.argv[1])
print("Station {0} is active!".format(STATION_NUMBER))
ALIVE = True
MIDICON = False

if STATION_NUMBER == "Piano":
	PATCH = 'Piano20.pd'
elif STATION_NUMBER == "Push":
    PATCH = 'Piano20.pd'
elif STATION_NUMBER == "Guitar":
    PATCH = 'Guitar22.pd'
elif STATION_NUMBER == "Theremin":
	PATCH = 'Theremin20.pd'

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
libpd_open_patch(PATCH, '/home/pi/RTM')

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

colors = [
    20,
    125,
    126,
    115,
    120,
    101,
    55,
    124,
]

def midi_callback_poly(message, time_stamp):
    global osc, midi_out, colors, STATION_NUMBER
    #print len(osc)
    #print message
    if message[0] == 144 and message[1] >= 36:
        i = 0
        while i < len(osc):
            if osc[i] == 0:
                #print i
                #print message[1], message[2]
                libpd_float(("midi" + str(i + 1)), message[1])
                osc[i] = message[1]
                if STATION_NUMBER == "Push":
                    midi_out.send_message([144, message[1], random.choice(colors)])
                break
            i = i + 1
        if message[2] > 0:
            libpd_float(("note" + str(i + 1)), 1)
    elif message[0] == 128:
        if message[1] in osc:
            i = osc.index(message[1])
            libpd_float(("note" + str(i + 1)), 0)
            midi_out.send_message([128, message[1], 125])
            osc[i] = 0

def midi_callback_guitar(message, time_stamp):
    global g_osc
    #print len(osc)
    #print message
    if message[0] == 144:
        i = 0
        while i < len(g_osc):
            if g_osc[i] == 0:
                #print i
                #print message[1], message[2]
                libpd_float(("midi" + str(i + 1)), message[1])
                g_osc[i] = message[1]
                break
            i = i + 1
        if message[2] > 0:
            libpd_float(("note" + str(i + 1)), 1)
    elif message[0] == 128:
        if message[1] in g_osc:
            i = g_osc.index(message[1])
            libpd_float(("note" + str(i + 1)), 0)
            g_osc[i] = 0

def midi_callback_theremin(message, time_stamp):
	#print message
    if message[1] == 20:
        note = math.floor(message[2]/3.55555555) + 48
        #print note
        libpd_float("midi", note)
    elif message[1] == 2:
        libpd_float("vol", message[2])
        #print message[2]
        libpd_float("note", 1)
    elif message[1] == 2 and message[2] == 0:
        libpd_float("note", 0)

midi_in = rtmidi.MidiIn()
if STATION_NUMBER == "Push":
    midi_out = rtmidi.MidiOut()
#print ('hey', STATION_NUMBER)
if STATION_NUMBER == 'Piano' or STATION_NUMBER == 'Push':
    midi_in.callback = midi_callback_poly
elif STATION_NUMBER == 'Guitar':
    midi_in.callback = midi_callback_guitar
elif STATION_NUMBER == 'Theremin':
    #print 'hi'
    midi_in.callback = midi_callback_theremin



while MIDICON == False:
    if len(midi_in.ports) > 1:
        midi_in.open_port(1)
        if STATION_NUMBER == "Push":
            midi_out.open_port(1)
        MIDICON = True
    else:
        print("Unable to connect to MIDI device. Check all cables!")
        sleep(5)

while ALIVE == True:
	sleep(2)