import RPi.GPIO as GPIO
import sys

light = str(sys.argv[1])

GPIO.setmode(GPIO.BOARD)
GPIO.setwarnings(False)
RED = 29
GREEN = 31
BLUE = 33
GPIO.setup(RED, GPIO.OUT)
GPIO.setup(GREEN, GPIO.OUT)
GPIO.setup(BLUE, GPIO.OUT)
REDStatus = GPIO.PWM(RED, 100)
GREENStatus = GPIO.PWM(GREEN, 100)
BLUEStatus = GPIO.PWM(BLUE, 100)


REDStatus.start(0)
GREENStatus.start(0)
BLUEStatus.start(0)

while True:
    if light == 'red':
        REDStatus.ChangeDutyCycle(100)
    elif light == 'green':
        GREENStatus.ChangeDutyCycle(100)
    elif light == 'blue':
        BLUEStatus.ChangeDutyCycle(100)
    elif light == 'white':
        BLUEStatus.ChangeDutyCycle(50) 
        GREENStatus.ChangeDutyCycle(50)     
        REDStatus.ChangeDutyCycle(50)
    elif light == 'purple':
        BLUEStatus.ChangeDutyCycle(100)   
        REDStatus.ChangeDutyCycle(100)        