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
PATCH = 'SynthExhibit7-Reverb10.pd'

subprocess.call(["amixer", "sset", "'Speaker'", "0%"])

#Various functions are being defined here.
signal.signal(signal.SIGINT, end_read)

#Set up GPIO.
GPIO.setwarnings(False)
GPIObuttonpins = [37, 35]

for button in GPIObuttonpins:
	GPIO.setup(button,GPIO.IN,pull_up_down=GPIO.PUD_UP)
	GPIO.add_event_detect(button, GPIO.FALLING, callback=button_push, bouncetime=1000)

GPIO.setup((MOSI, CLK, CS), GPIO.OUT)
GPIO.setup(MISO, GPIO.IN)

#Set up PD Wrapper.
libpd_open_patch(PATCH, '.')

libpd_subscribe('freq')

#WriteObject contains methods for writing to the RFID card. readObject contains methods for 
#reading from the RFID card and ramping up the status LED and system volume accordingly.
writeOjbect = CardWriter()
readObject = CardReader(16)

#Define all analog inputs here.
potMix = GetAnalogInput(5, "pyin_decay", 90)
potDecay = GetAnalogInput(6, "pyin_mix", 100)

while stream.is_active() and ALIVE:
	time.sleep(2)