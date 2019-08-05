import pyaudio
from pylibpd import *
import time
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

VOLUME_MULTIPLIER = 0.6 #Number between 0 and 1
semitone_adjustment = 1

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
    'H09' : 0.00,
    'H10' : 0.00,
    'H11' : 0.00,
    'H12' : 0.00,
    'H13' : 0.00,
    'H14' : 0.00,
    'H15' : 0.00,
    'H16' : 0.00,
    'centerFreq' : 0.00,
    'Q' : 0.00,
    'filterMix' : 0.00,
    'attack' : 0.00,
    'sustain' : 0.00,
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
station2Parameters = [	'H01', 'H02', 'H03', 'H04', 'H05', 'H06', 'H07', 'H08', 'H09', 'H10', 'H11', 'H12', 'H13', 'H14', 'H15', 'H16' ]
station2Blocks = [ 5, 6, 8, 9 ]
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
    def __init__(self, pin, control, min=0.1, max=1, scale=1, debug=False):
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

        self.min = min
        self.max = max

        self.scale = scale

        self.value = ((fdiv(readadc(self.pin, CLK, MOSI, MISO, self.CS), 1024.000) - self.min) / (self.max - self.min )) * self.scale

        #print self.value
        thread = threading.Thread(target=self.run, args=())
        thread.daemon = True
        thread.start()

    def run(self):
        global parameters
        while True:
            newValue = fdiv(readadc(self.pin, CLK, MOSI, MISO, self.CS), 1024.000)

            # deadband and scale
            newValue = ((newValue - self.min) / (self.max - self.min )) * self.scale

            if newValue <= 0:
                newValue = 0.001

            # check if changed a certain amount
            if (abs((newValue / self.value) - 1) > .03):
                self.value = newValue
            if self.debug:
                print("Input {0} has value {1}".format(self.control, self.value))
            parameters[self.control] = self.value
            libpd_float(self.control, float(self.value))
            time.sleep(.05)

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
    '''	
    def readFromCard(self, uid):
        global parameters
        i = 0
        tmpdict = {}
        for key in sortedParameterKeys:
            sector = int(floor(i/3))
            block = i % 3
            computedblock = ((sector+1)*4) + block
            pn532.mifare_classic_authenticate_block(uid, computedblock, PN532.MIFARE_CMD_AUTH_B, CARD_KEY)
            tmpdata = pn532.mifare_classic_read_block(computedblock)
            if tmpdata is None:
                print('Failed to read block {0}!'.format(computedblock))
                break
            else:
                tmpdata = tmpdata[:tmpdata.find("#")]
                tmpdict[key] = float(tmpdata)
                #libpd_float(key, float(tmpdata))
            i += 1
        print("reading")
        print(tmpdict)
        for i in range (0, 10):
            for key in tmpdict:
                delta = parameters[key] - tmpdict[key]
                parameters[key] -= delta / 10
                libpd_float(key, float(parameters[key]))
                time.sleep(.01)
    '''
    def readFromCard(self, uid):
        global parameters, station1Parameters, station1Blocks, station2Parameters, station2Blocks, station3Parameters, station3Blocks, station4Parameters, station4Blocks, station5Parameters, station5Blocks, station6Parameters, station6Blocks
        station = 1
        #tmpdict = {}
        while station <= 6:
            stationParameters = eval("station" + str(station) + "Parameters")
            stationBlocks = eval("station" + str(station) + "Blocks")
            i = 0
            j = 0
            tmpdata = ''
            while i < len(stationBlocks):
                authenticated = pn532.mifare_classic_authenticate_block(uid, stationBlocks[i], PN532.MIFARE_CMD_AUTH_B, CARD_KEY)
                tmpdata += pn532.mifare_classic_read_block(stationBlocks[i]).split('#')[0]
                # print(tmpdata)
                i += 1
            for param in stationParameters:
                #print param
                parameters[param] = float(tmpdata[j*4:(j+1)*4])
                j += 1

                libpd_float(param, float(parameters[param]))
            station += 1
        #parameters = tmpdict
        #print parameters
        '''
        for i in range (0, 10):
            for param in parameters:
                if tmpdict[param]:
                    delta = parameters[param] - (parameters[param] - tmpdict[param])
                    parameters.update(param=delta)
                    libpd_float(param, float(parameters[param]))
                time.sleep(.01)
        i = 0
        tmpdict = {}
        tmpdata = ''
        tmpvalue = ''
        while i < 9:
            sector = int(floor(i/3))
            block = i % 3
            computedblock = ((sector+1)*4) + block
            authenticated = pn532.mifare_classic_authenticate_block(uid, computedblock, PN532.MIFARE_CMD_AUTH_B, CARD_KEY)
            tmpdata = pn532.mifare_classic_read_block(computedblock).split('#')[0]
            if tmpdata is None:
                print(('Failed to read block {0}!'.format(computedblock)))
                break
            else:
                for j in range(0, len(tmpdata) // 4):
                    tmpvalue = tmpdata[(j*4):((j*4)+4)]
                    tmpdict[param] = float(tmpvalue)
                    print(tmpdict[param])
            i += 1

        '''

    def readRGB(self, uid):
        global R, G, B, RGB_BLOCK
        pn532.mifare_classic_authenticate_block(uid, RGB_BLOCK, PN532.MIFARE_CMD_AUTH_B, CARD_KEY)
        tmpdata = pn532.mifare_classic_read_block(RGB_BLOCK)
        #print tmpdata
        if tmpdata is not None:
            R = float(tmpdata[0:4])
            G = float(tmpdata[4:8])
            B = float(tmpdata[8:12])
        #print('i just read {0}, {1}, {2}'.format(R, G, B))


class StationCardWriter(object):

    def writeToCard(self, uid, stationParameters, stationBlocks):
        global parameters
        i = 0
        writedata = ''
        print("writing")
        for param in stationParameters:
            writedata += "{0:.2f}".format(parameters[param])
        writedata = writedata.ljust(16, "#")
        while i < (len(writedata) // 16):
            writeblock =  writedata[(i*16):((i+1)*16)]
            print writeblock
            print stationBlocks[i]
            pn532.mifare_classic_authenticate_block(uid, stationBlocks[i], PN532.MIFARE_CMD_AUTH_B, CARD_KEY)
            if not pn532.mifare_classic_write_block(stationBlocks[i], writeblock):
                print('Error! Failed to write to block {0}.'.format(stationBlocks[i]))
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
            #print("lights at {0}, {1}, {2}".format((i*R), (i*G), i*B))
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
    #GPIO.cleanup()
    ALIVE = False
    stream.close()
    p.terminate()
    libpd_release()
    print "Ctrl+C captured, quitting."

def pd_callback(in_data,frame_count,time_info,status):
    outp = m.process(data)
    return (outp,pyaudio.paContinue)

def pdin(*s):
    global parameters
    #print("pd just said that {0} is {1}".format(s[0], s[1]))
    parameters[s[0]] = s[1]

with noalsaerr():
    p  = pyaudio.PyAudio()
bs = libpd_blocksize()
data=bytearray(array.array('B',[0]*bs))
stream = p.open(format = pyaudio.paInt16,
    channels = 1,
    rate = 48000,
    input = False,
    output = True,
    frames_per_buffer = bs,
    stream_callback=pd_callback)

m = PdManager(0, 1 , 48000, 1)

#libpd_set_print_callback(pdin)
libpd_set_float_callback(pdin)
#libpd_set_list_callback(pdin)
libpd_set_symbol_callback(pdin)
#libpd_set_noteon_callback(pdin)