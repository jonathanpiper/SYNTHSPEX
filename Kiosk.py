from pylibpd import *
import time
import RPi.GPIO as GPIO
import signal
import threading
import sys
from synthlibrary import *

#Important variables are being set here. 
STATION_NUMBER = int(sys.argv[1])
print("Station {0} is active!".format(STATION_NUMBER))
ALIVE = True
PATCH = 'SynthEngine15.pd'

signal.signal(signal.SIGINT, end_read)
 
#Set up GPIO.
GPIO.setwarnings(False)
GPIObuttonpins = [37]

def button_push(button):
	if button == 37:
		print ('You triggered a note!')
		libpd_bang('pyin_play')
	return

for button in GPIObuttonpins:
	GPIO.setup(button,GPIO.IN,pull_up_down=GPIO.PUD_UP)
	GPIO.add_event_detect(button, GPIO.FALLING, callback=button_push, bouncetime=100)

#Set up PD Wrapper.
libpd_open_patch(PATCH, '.')

if STATION_NUMBER == 1:
	pass
elif STATION_NUMBER == 2:
	libpd_subscribe('H01')
	libpd_subscribe('H02')
	libpd_subscribe('H03')
	libpd_subscribe('H04')
	libpd_subscribe('H05')
	libpd_subscribe('H06')
	libpd_subscribe('H07')
	libpd_subscribe('H08')
	libpd_subscribe('H09')
	libpd_subscribe('H10')
	libpd_subscribe('H11')
	libpd_subscribe('H12')
	libpd_subscribe('H13')
	libpd_subscribe('H14')
	libpd_subscribe('H15')
	libpd_subscribe('H16')
	inputH01 = GetAnalogInput(0, "H01", 1)
	inputH02 = GetAnalogInput(1, "H02", 1)
	inputH03 = GetAnalogInput(2, "H03", 1)
	inputH04 = GetAnalogInput(3, "H04", 1)
	inputH05 = GetAnalogInput(4, "H05", 1)
	inputH06 = GetAnalogInput(5, "H06", 1)
	inputH07 = GetAnalogInput(6, "H07", 1)
	inputH08 = GetAnalogInput(7, "H08", 1)
	inputH09 = GetAnalogInput(8, "H09", 1)
elif STATION_NUMBER == 3:
	libpd_subscribe('centerFreq')
	libpd_subscribe('Q')
	inputCenterFrequency = GetAnalogInput(0, "centerFreq", 1)
	inputQuality = GetAnalogInput(1, "Q", 1)
elif STATION_NUMBER == 4:
	libpd_subscribe('attack')
	libpd_subscribe('sustain')
	libpd_subscribe('release')
	inputAttack = GetAnalogInput(0, "attack", 1)
	inputSustain = GetAnalogInput(1, "sustain", 1)
	inputRelease = GetAnalogInput(2, "release", 1)
elif STATION_NUMBER == 5:
	libpd_subscribe('LFOAmpRate')
	libpd_subscribe('LFOAmpDepth')
	libpd_subscribe('LFOPitchRate')
	libpd_subscribe('LFOPitchDepth')
	inputLFOAmpRate = GetAnalogInput(0, "LFOAmpRate", 1)
	inputLFOAmpDepth = GetAnalogInput(1, "LFOAmpDepth", 1)
	inputLFOPitchRate = GetAnalogInput(2, "LFOPitchRate", 1)
	inputLFOPitchDepth = GetAnalogInput(3, "LFOPitchDepth", 1)
elif STATION_NUMBER == 6:
	libpd_subscribe('reverbDecay')
	libpd_subscribe('reverbMix')
	inputreverbDecay = GetAnalogInput(0, "reverbDecay", 1)
	inputreverbMix = GetAnalogInput(1, "reverbMix", 1)
elif STATION_NUMBER == 7:
	pass

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
Station = StationBrain(STATION_NUMBER, Feedback, CardWriter)

while stream.is_active() and ALIVE:
	time.sleep(2)