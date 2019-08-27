import pygame
import numpy
from pylibpd import *
import time
import datetime
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
import random
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
CLK = 36
MISO = 38
MOSI = 40
CS = (22,32)

R = 0
G = 0
B = 0
RGB_BLOCK = 60

VOLUME_MULTIPLIER = 1 #Number between 0 and 1
BUFFERSIZE = 4096
SAMPLERATE = 48000
BLOCKSIZE = 64

parameters = {
    'freq' : 1.00,
    'amp' : 1.00,
    'H01' : 1.00,
    'H02' : 0.60,
    'H03' : 0.00,
    'H04' : 0.00,
    'H05' : 0.00,
    'H06' : 0.00,
    'H07' : 0.00,
    'H08' : 0.00,
    'centerFreq' : 0.00,
    'Q' : 0.00,
    'filterMix' : 0.00,
    'attack' : 0.00,
    'release' : 0.00,
    'LFOAmpRate' : 0.00,
    'LFOAmpDepth' : 0.00,
    'LFOPitchRate' : 0.00,
    'LFOPitchDepth' : 0.00,
    'reverbDecay' : 0.00,
    'reverbMix' : 0.00,
}

station1Parameters = [	'freq', 'amp' ]
station1Blocks = [ 4 ]
station2Parameters = [	'H01', 'H02', 'H03', 'H04', 'H05', 'H06', 'H07', 'H08' ]
station2Blocks = [ 5, 6 ]
station3Parameters = [	'centerFreq', 'Q', 'filterMix' ]
station3Blocks = [ 10 ]
station4Parameters = [	'attack', 'release' ]
station4Blocks = [ 12 ]
station5Parameters = [	'LFOAmpRate', 'LFOAmpDepth', 'LFOPitchRate', 'LFOPitchDepth' ]
station5Blocks = [ 13 ]
station6Parameters = [	'reverbDecay', 'reverbMix' ]
station6Blocks = [ 14 ]

pn532 = PN532.PN532(24, 23, 19, 21)
pn532.begin()
pn532.SAM_configuration()

CARD_KEY = [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF]

class GetAnalogInput(object):
    #min and max is to scale the value as the slider all the way down returns a value that is not close to 0.
    def __init__(self, pin, control, debug=False):
        if pin < 8:
            self.pin = pin
            self.CS = CS[0]
        else:
            self.pin = pin - 8
            self.CS = CS[1]
        GPIO.setup((MOSI, CLK, self.CS), GPIO.OUT)
        GPIO.setup(MISO, GPIO.IN)
        self.control = control
        # self.scale = scale
        self.debug = debug
        self.value = 0
        self.value = round(fdiv(readadc(self.pin, CLK, MOSI, MISO, self.CS), 1024.000), 2)
        if self.value == 0:
            self.value = 0.01
        if self.value > 1:
            self.value = 1

        #print self.value
        thread = threading.Thread(target=self.run, args=())
        thread.daemon = True
        thread.start()

    def run(self):
        global parameters
        top = 3
        while True:
            i = 0
            aveValue = 0
            tmpValue = self.value
            while i < top: 
                # print(fdiv(readadc(self.pin, CLK, MOSI, MISO, self.CS), 1024.000))
                newValue = round(fdiv(readadc(self.pin, CLK, MOSI, MISO, self.CS), 1024.000), 2)

                # check if changed a certain amount
                if newValue < 0.01:
                    newValue = 0.01
                #print "newValue{0} tmpValue{1}".format(newValue, tmpValue)
                if (abs(tmpValue - newValue)) < 0.2 and 0 <= newValue <= 1:
                    aveValue += newValue
                    tmpValue = newValue
                else:
                    aveValue += tmpValue
                i += 1
                time.sleep(.01)
            self.value = round(aveValue / top, 2)
            if self.debug:
                print("Input '{0}' has value {1}".format(self.control, self.value))
            parameters[self.control] = "{:.2f}".format(self.value)
            libpd_float(self.control, float(self.value))
'''
    def run(self):
        global parameters
        while True:
            # print(fdiv(readadc(self.pin, CLK, MOSI, MISO, self.CS), 1024.000))
            newValue = round(root(fdiv(readadc(self.pin, CLK, MOSI, MISO, self.CS), 1024.000), 1.2), 2)

            # check if changed a certain amount
            if newValue < 0.05:
                newValue = 0
            #print newValue
            if .02 < (abs(self.value - newValue)) < 0.15 and 0 <= newValue <= 1:
                self.value = newValue
            if self.debug:
                print("Input '{0}' has value {1}".format(self.control, self.value))
            parameters[self.control] = "{:.2f}".format(self.value)
            libpd_float(self.control, float(self.value))
            time.sleep(.05)
'''


class StationBrain(object):
    def __init__(self, stationnumber, feedback="Feedback", cardwriter="CardWriter"):
        global parameters
        self.stationnumber = stationnumber
        self.feedback = feedback
        self.cardwriter = cardwriter
        self.paramString = ''
        self.uid = ''
        thread = threading.Thread(target=self.run, args=())
        thread.daemon = True
        thread.start()

    def run(self):
        global try_read, STATUS_LED, CARD_KEY, R, G, B
        timeout_delay = 2
        check_uid = True
        tmp_timeout = timeout_delay
        stationParameters = eval("station" + str(self.stationnumber) + "Parameters")
        stationBlocks = eval("station" + str(self.stationnumber) + "Blocks")
        if self.stationnumber is not 1:
            while True:
                #print ("i'm trying to read a card!")
                uid = pn532.read_passive_target()
                if uid and check_uid:
                    check_uid = False
                    self.uid = uid
                if uid is not None:
                    tmp_timeout = timeout_delay
                    #print("i'm connected to the card, and there will be a light on.")
                    if try_read is False:
                        if pn532.read_passive_target() != self.uid:
                            check_uid = True
                            try_read = True
                            print("new card detected; reading parameters")
                            self.readRGB(uid)
                            self.feedback.jumpToRGB()
                            self.readFromCard(uid)
                        self.cardwriter.writeToCard(uid, stationParameters, stationBlocks)
                    elif try_read is True:
                        self.readRGB(uid)
                        if self.feedback.status:
                            self.feedback.jumpToRGB()
                        else:
                            self.feedback.up()
                        self.readFromCard(uid)
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
                time.sleep(.5)
        else:
            write_RGB = True
            init = False
            while True:
                uid = pn532.read_passive_target()
                if uid is not None:
                    if init is False:
                        self.cardwriter.writeInit(uid)
                        init = True
                    #print uid
                    tmp_timeout = timeout_delay
                    #print("i'm connected to the card, and there will be a light on.")
                    if write_RGB:
                        stringRGB = self.feedback.generateRGB()
                        self.cardwriter.writeRGB(uid, stringRGB)
                        if self.feedback.status:
                            self.feedback.jumpToRGB()
                        write_RGB = False
                    self.cardwriter.writeToCard(uid, stationParameters, stationBlocks)
                    if self.feedback.status is False and pn532.read_passive_target():
                        self.feedback.up()
                    #print write_RGB
                elif tmp_timeout > 0:
                    #print(tmp_timeout)
                    #print("i can't find any cards. i'm going to reset to default parameters in " + str(tmp_timeout*2) + " seconds.")
                    tmp_timeout -= 1
                    write_RGB = True
                    continue
                else:
                    #print("back to default parameters!")
                    #print(tmp_timeout)
                    if self.feedback.status is True:
                        self.feedback.down()
                    write_RGB = True
                    tmp_timeout = timeout_delay
                time.sleep(.5)

    def readFromCard(self, uid):
        global parameters, station1Parameters, station1Blocks, station2Parameters, station2Blocks, station3Parameters, station3Blocks, station4Parameters, station4Blocks, station5Parameters, station5Blocks, station6Parameters, station6Blocks
        print uid
        station = 1
        while station <= 6:
            stationParameters = eval("station" + str(station) + "Parameters")
            stationBlocks = eval("station" + str(station) + "Blocks")
            #print(len(stationBlocks))
            i = 0
            j = 0
            tmpdata = ''
            while i < len(stationBlocks):
                #print stationBlocks[i]
                authenticated = pn532.mifare_classic_authenticate_block(uid, stationBlocks[i], PN532.MIFARE_CMD_AUTH_B, CARD_KEY)
                if authenticated:
                    p = pn532.mifare_classic_read_block(stationBlocks[i])
                    if p is not None:
                        tmpdata += p.split('#')[0]
                    else:
                        break
                else:
                    print("no auth")
                #print(tmpdata)
                i += 1
                time.sleep(.01)
            for param in stationParameters:
                #print param
                #print tmpdata[j*4:(j+1)*4]
                if tmpdata[j*4:(j+1)*4] == '':
                    break
                parameters[param] = float(tmpdata[j*4:(j+1)*4])
                j += 1
                libpd_float(param, float(parameters[param]))
            station += 1

    def readRGB(self, uid):
        global R, G, B, RGB_BLOCK
        pn532.mifare_classic_authenticate_block(uid, RGB_BLOCK, PN532.MIFARE_CMD_AUTH_B, CARD_KEY)
        tmpdata = pn532.mifare_classic_read_block(RGB_BLOCK)
        #print tmpdata
        if tmpdata is not None:
            R = float(tmpdata[0:4])
            G = float(tmpdata[4:8])
            B = float(tmpdata[8:12])
        print('i just read {0}, {1}, {2}'.format(R, G, B))

class StationCardWriter(object):

    def writeToCard(self, uid, stationParameters, stationBlocks):
        global parameters
        i = 0
        writedata = ''
        for param in stationParameters:
            writedata += "{0:.2f}".format(float(parameters[param]))
        writedata = writedata.ljust(16, "#")
        #print writedata
        while i < (len(writedata) // 16):
            writeblock =  writedata[(i*16):((i+1)*16)]
            #print writeblock
            #print stationBlocks[i]
            pn532.mifare_classic_authenticate_block(uid, stationBlocks[i], PN532.MIFARE_CMD_AUTH_B, CARD_KEY)
            if not pn532.mifare_classic_write_block(stationBlocks[i], writeblock):
                print('Error! Failed to write to block {0}.'.format(stationBlocks[i]))
            else:
                print('Successfully wrote {0} to Block {1} at {2}'.format(writeblock, stationBlocks[i], datetime.datetime.now()))
            i += 1

    def writeInit(self, uid):
        global parameters, station1Parameters, station1Blocks, station2Parameters, station2Blocks, station3Parameters, station3Blocks, station4Parameters, station4Blocks, station5Parameters, station5Blocks, station6Parameters, station6Blocks
        station = 1
        while station <= 6:
            writedata = ''
            i = 0
            #print station
            stationParameters = eval("station" + str(station) + "Parameters")
            #print stationParameters
            stationBlocks = eval("station" + str(station) + "Blocks")
            #block = stationBlocks[i]
            print("writing")
            for param in stationParameters:
                writedata += "{0:.2f}".format(parameters[param])
            writedata = writedata.ljust(16, "#")
            while i < (len(writedata) // 16):
                writeblock =  writedata[(i*16):((i+1)*16)]
                #print stationBlocks[i]
                pn532.mifare_classic_authenticate_block(uid, stationBlocks[i], PN532.MIFARE_CMD_AUTH_B, CARD_KEY)
                if not pn532.mifare_classic_write_block(stationBlocks[i], writeblock):
                    print('Error! Failed to write to block {0}.'.format(stationBlocks[i]))
                i += 1
            #writedata = writedata.ljust(16, "#")
            #print writedata

            writedata = ''
            station += 1

    def writeRGB(self, uid, RGB):
        global RGB_BLOCK
        pn532.mifare_classic_authenticate_block(uid, RGB_BLOCK, PN532.MIFARE_CMD_AUTH_B, CARD_KEY)
        if not pn532.mifare_classic_write_block(RGB_BLOCK, RGB):
            print('Error! Failed to write to block 60.')

class StationFeedback(object):
    def __init__(self, RED=29,GREEN=31,BLUE=33):
        self.RED = RED
        self.GREEN = GREEN
        self.BLUE = BLUE
        GPIO.setup(self.RED, GPIO.OUT)
        GPIO.setup(self.GREEN, GPIO.OUT)
        GPIO.setup(self.BLUE, GPIO.OUT)
        self.REDStatus = GPIO.PWM(self.RED, 100)
        self.GREENStatus = GPIO.PWM(self.GREEN, 100)
        self.BLUEStatus = GPIO.PWM(self.BLUE, 100)
        self.REDStatus.start(0)
        self.GREENStatus.start(0)
        self.BLUEStatus.start(0)
        self.status = False
        self.RGB = ''

    def up(self):
        global VOLUME_MULTIPLIER, R, G, B
        #libpd_bang('pyin_play')
        for i in range (0, 101, 2):
            volume = str(i*VOLUME_MULTIPLIER) + "%"
            subprocess.call(["amixer", "sset", "'Speaker'", volume], stdout=FNULL)
            self.REDStatus.ChangeDutyCycle(i*R)
            self.GREENStatus.ChangeDutyCycle(i*G)
            self.BLUEStatus.ChangeDutyCycle(i*B)
            # print("lights at {0}, {1}, {2}".format((i*R), (i*G), i*B))
            time.sleep(.01)
        self.status = True

    def down(self):
        global VOLUME_MULTIPLIER, R, G, B
        self.status = False
        for i in range (100, -1, -2):
            volume = str(i*VOLUME_MULTIPLIER) + "%"
            subprocess.call(["amixer", "sset", "'Speaker'", volume], stdout=FNULL)
            self.REDStatus.ChangeDutyCycle(i*R)
            self.GREENStatus.ChangeDutyCycle(i*G)
            self.BLUEStatus.ChangeDutyCycle(i*B)
            #print("lights at {0}, {1}, {2}".format((i*R), (i*G), i*B))
            time.sleep(.01)

    def generateRGB(self):
        global R, G, B
        R = round(random.random(),2)
        G = round(random.random(),2)
        B = round(random.random(),2)
        self.RGB = "{:.2f}".format(R) + "{:.2f}".format(G) + "{:.2f}".format(B)
        return self.RGB.ljust(16, "#")

    def jumpToRGB(self):
        global R, G, B
        print("RGB:", R, G, B)
        self.REDStatus.ChangeDutyCycle(100*R)
        self.GREENStatus.ChangeDutyCycle(100*G)
        self.BLUEStatus.ChangeDutyCycle(100*B)

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
    GPIO.cleanup()
    libpd_release()
    print "Ctrl+C captured, quitting."
    ALIVE = False

def pd_callback(in_data,frame_count,time_info,status):
    outp = m.process(data)
    return (outp,pyaudio.paContinue)

def pdin(*s):
    global parameters
    #print("pd just said that {0} is {1}".format(s[0], s[1]))
    parameters[s[0]] = s[1]

#Set up PD Wrapper.
m = PdManager(0, 2, SAMPLERATE, 1)
#libpd_open_patch(PATCH, '.')
pygame.mixer.init(frequency=SAMPLERATE)
inbuf = array.array('h', list(range(BLOCKSIZE)))
ch = pygame.mixer.Channel(0)
sounds = [pygame.mixer.Sound(numpy.zeros((BUFFERSIZE, 2), numpy.int16)) for s in range(2)]
samples = [pygame.sndarray.samples(s) for s in sounds]
selector = 0

#libpd_set_print_callback(pdin)
libpd_set_float_callback(pdin)
#libpd_set_list_callback(pdin)
libpd_set_symbol_callback(pdin)
#libpd_set_noteon_callback(pdin)