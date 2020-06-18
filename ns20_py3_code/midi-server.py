
import eel
import sounddevice as sd
import numpy as np
from pylibpd import *
import mysql.connector as mdb
import json
import threading
from time import sleep
import rtmidi
from rtmidi.midiutil import open_midiinput, open_midioutput
import random
import math
import sys

instrument = str(sys.argv[1])

class dbConn(object):
    def __init__(self):
        self.cnx = mdb.connect(user='ns-pi-synth', password='synthspex', host='24.56.166.219', database='SYNTH')
        self.queryInsert = "INSERT INTO synth_patches (code, patch) VALUES (%s, %s)"
        self.queryUpdate = "UPDATE synth_patches SET patch = %s WHERE code = %s"
        self.queryLoad = "SELECT patch FROM synth_patches WHERE code = %s"
        
        thread = threading.Thread(target=self.run, args=())
        thread.daemon = True
        thread.start()

    def run(self):
        while True:
            sleep(1)

    def initSave(self, queryData):
        self.cursor = self.cnx.cursor()
        print(self.cursor.execute(self.queryInsert, queryData))
        self.cnx.commit()
        
    def contSave(self, queryData):
        self.cursor = self.cnx.cursor()
        print(self.cursor.execute(self.queryUpdate, queryData))
        self.cnx.commit()
        
    def loadJSON(self, queryData):
        self.cursor = self.cnx.cursor()
        print(self.cursor.execute(self.queryLoad, queryData))
        result = self.cursor.fetchall()
        if len(result) == 0:
            print('no results')
            return 0
        else:
            return result[0][0]
        
db = dbConn();

identifierCode = "0000"

eel.init('web')

device = 0
start_idx = 0
samplerate = sd.query_devices(device, 'output')['default_samplerate']

constParameters = {
    'freq' : 0.00,
    'amp' : 0.50,
    'H01' : 1.00,
    'H02' : 0.60,
    'H03' : 0.00,
    'H04' : 0.00,
    'H05' : 0.00,
    'H06' : 0.00,
    'H07' : 0.00,
    'H08' : 0.00,
    'centerFreq' : 0.50,
    'Q' : 0.50,
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

parameters = {}
parameters.update(constParameters)

def pd_callback(outdata, frames, time, status):
    outp = m.process(data)
    t = np.frombuffer(outp, dtype='int16')
    t = t.reshape(-1, 1)
    outdata[:] = t * 3
    
def pdin(*s):
    global parameters
    print("pd just said that {0} is {1}".format(s[0], s[1]))
    parameters[s[0]] = s[1]
    
libpd_set_float_callback(pdin)
libpd_set_symbol_callback(pdin)
m = PdManager(0, 1, 44100, 1)
libpd_open_patch('play.pd', './')
data = np.arange(64)

for parameter in parameters:
    libpd_float(parameter, parameters[parameter])

@eel.expose
def printorama(a):
    print(a)
    
@eel.expose
def pd_bang(a):
    libpd_bang('pynote')
    print('i am banged')

@eel.expose
def pd_float(control, value):
    global parameters
    parameters[control] = "{:.2f}".format(value)
    print(libpd_float(str(control), float(value)))

@eel.expose
def getParamValue(param):
    #print(param, parameters[param])
    return parameters[param]
    
@eel.expose
def getJSONParameters(code):
    queryData = (code, )
    result = db.loadJSON(queryData)
    if result != 0:
        jsonResult = json.loads(result)
        for parameter in jsonResult:
            libpd_float(parameter, float(jsonResult[parameter]))
            print(parameter, float(jsonResult[parameter]))
    return result

@eel.expose
def initSettings(code):
    parameterDump = json.dumps(parameters)
    queryData = (code, parameterDump)
    db.initSave(queryData)
    
@eel.expose
def saveSettings(code):
    parameterDump = json.dumps(parameters)
    queryData = (parameterDump, code)
    db.contSave(queryData)
    
@eel.expose
def resetSettings():
    offsetOctave = 0
    offsetScale = 0
    parameters .update(constParameters)
    for parameter in parameters:
        libpd_float(parameter, parameters[parameter])

osc = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]

#MIDI FUNCTIONALITY FOR THE ROLI SEABOARD
def midi_callback_roli(midi, time_stamp):
    global osc, parameters
    if len(midi[0]) == 3:
        message, button, velocity = midi[0]
        if message != 176:
            print(midi[0])
    else:
        message, volume = midi[0]
        #print(message, "volume",volume)
    if message == 208:
        libpd_float("volume", ((42 + volume/1.5)/127))    
    elif message == 144 and button >= 36:
        i = 0
        while i < len(osc):
            if osc[i] == 0:
                #print i
                #print message[1], message[2]
                libpd_float(("midi" + str(i + 1)), button)
                osc[i] = button
                break
            i = i + 1
        if velocity > 0:
            libpd_float(("note" + str(i + 1)), 1)
    elif message == 128:
        if button in osc:
            i = osc.index(button)
            libpd_float(("note" + str(i + 1)), 0)
            osc[i] = 0
    elif message == 176 and button == 113:
        libpd_float("centerFreq", (velocity / 127))
    elif message == 176 and button == 114:
        libpd_float("Q", (velocity / 127))
    elif message == 224 and velocity == 63:
        i = 0
        while i < len(osc):
            if osc[i] != 0:
                libpd_float(("midi" + str(i + 1)), osc[i] - abs((127 - button)/255))
            i = i + 1
    elif message == 224 and velocity == 64:
        i = 0
        while i < len(osc):
            if osc[i] != 0:
                libpd_float(("midi" + str(i + 1)), osc[i] + (button/255))
            i = i + 1
    eel.receiveNoteTrigger()


#MIDI FUNCTIONALITY FOR THE M-AUDIO KEYSTATION
def midi_callback_maudio(midi, time_stamp):
    global osc
    print(midi[0])
    if len(midi[0]) == 3:
        message, button, velocity = midi[0]
    
    if message == 144 and button >= 36:
        i = 0
        while i < len(osc):
            if osc[i] == 0:
                #print i
                #print message[1], message[2]
                libpd_float(("midi" + str(i + 1)), button)
                libpd_float(("vel" + str(i + 1)), (42 + velocity)/169)
                osc[i] = button
                break
            i = i + 1
        if velocity > 0:
            libpd_float(("note" + str(i + 1)), 1)
    elif message == 128:
        if button in osc:
            i = osc.index(button)
            libpd_float(("note" + str(i + 1)), 0)
            osc[i] = 0
    elif message == 224 and button == 0:
        i = 0
        while i < len(osc):
            if osc[i] != 0:
                libpd_float(("midi" + str(i + 1)), osc[i] + ((velocity)/127))
            i = i + 1
    elif message == 176 and button == 1:
        libpd_float("centerFreq", (velocity / 127))
    elif message == 176 and button == 7:
        libpd_float("volume", (velocity / 96))        
    eel.receiveNoteTrigger()

#MIDI FUNCTIONALITY FOR THE NOVATION LAUNCHPAD
colors = [37, 84, 85, 57, 33, 53]
octaveColors = [71, 117, 118, 119]
offsetOctave = 0
offsetScale = 0
scalesSet = [
    [0],
    [0, 2, 4, 5, 7, 9, 10, 11],
    [0, 2, 3, 5, 7, 8, 10, 11],
    [0, 2, 3, 5, 6, 7, 8, 10],
    [0, 2, 3, 6, 7, 8, 9, 10],
    [0, 2, 4, 6, 7, 9, 10, 11]
]
scalesAvailable = len(scalesSet) - 1

def midi_callback_nlp(midi, time_stamp):
    global osc, colors, midiout, offsetOctave, offsetScale, octaveColors
    excludedButtons = [19, 29, 39, 49, 59, 69, 79, 89]
    message, button, velocity = midi[0]
    print(midi[0])
    if button not in excludedButtons:
        if button == 104 and velocity == 127 and offsetOctave < 3:
            offsetOctave += 1
            offsetScale = 0
            midiout.send_message([176, 104, octaveColors[offsetOctave]])
            midiout.send_message([176, 105, octaveColors[offsetOctave]]) 
            midiout.send_message([176, 106, colors[offsetScale]])
            midiout.send_message([176, 107, colors[offsetScale]])                       
        if button == 105 and velocity == 127 and offsetOctave > 0:
            offsetOctave -= 1
            offsetScale = 0            
            midiout.send_message([176, 104, octaveColors[offsetOctave]])
            midiout.send_message([176, 105, octaveColors[offsetOctave]]) 
            midiout.send_message([176, 106, colors[offsetScale]])
            midiout.send_message([176, 107, colors[offsetScale]])                        
        if button == 106 and velocity == 127 and offsetScale > 0:
            offsetScale -= 1
            offsetOctave = 0
            midiout.send_message([176, 104, octaveColors[offsetOctave]])
            midiout.send_message([176, 105, octaveColors[offsetOctave]])     
            midiout.send_message([176, 106, colors[offsetScale]])
            midiout.send_message([176, 107, colors[offsetScale]]) 
        if button == 107 and velocity == 127 and offsetScale < scalesAvailable:
            offsetScale += 1
            offsetOctave = 0
            midiout.send_message([176, 104, octaveColors[offsetOctave]])
            midiout.send_message([176, 105, octaveColors[offsetOctave]])
            midiout.send_message([176, 106, colors[offsetScale]])
            midiout.send_message([176, 107, colors[offsetScale]]) 
        note = (17 + button - 2 * math.floor((button - 10)/10))
        #print((22 + offsetOctave * 12 + scalesSet[1][button % 10 - 1] + 12 * math.floor((button - 10)/10)), offsetScale)
        if offsetScale != 1:
            computedNote = (note - 31)
        if message == 144 and velocity == 127:
            i = 0
            while i < len(osc):
                if osc[i] == 0:
                    #print i
                    midiout.send_message([144, button, random.choice(colors)])
                    if offsetScale == 0:
                        libpd_float(("midi" + str(i + 1)), note + offsetOctave * 12)
                    else:
                        libpd_float(("midi" + str(i + 1)), (22 + offsetOctave * 12 + scalesSet[offsetScale][button % 10 - 1] + 12 * math.floor((button - 10)/10)))
                    libpd_float(("vel" + str(i + 1)), 1)
                    libpd_float(("note" + str(i + 1)), 1)
                    osc[i] = note
                    break
                i = i + 1
        elif velocity == 0:
            if note in osc:
                i = osc.index(note)
                midiout.send_message([128, button, 0])
                libpd_float(("note" + str(i + 1)), 0)
                osc[i] = 0
        if button == 111 and velocity == 127:
            i = 0
            while i < len(osc):
                libpd_float(("note" + str(i + 1)), 0) 
                osc[i] = 0
                i = i + 1
            i = 0
            while i < 128:
                midiout.send_message([144, i, 0]) 
                i = i + 1
        eel.receiveNoteTrigger()
            
	#if message[0][0] == 144:
	#	print("on", message[0][1])
    #    libpd_float("midi", message[0][1])
	#if message[0][0] == 128:
	#	print("off", message[0][1])       
    #if message[1] == 20:
    #    note = math.floor(message[2]/3.55555555) + 48
    #    #print note
    #    libpd_float("midi", note)
    #elif message[1] == 2:
    #    libpd_float("vol", message[2])
    #    #print message[2]
    #    libpd_float("note", 1)
    #elif message[1] == 2 and message[2] == 0:
    #    libpd_float("note", 0)

@eel.expose
def initMidi():
    global instrument, midiin, midiout
    libpd_float("volume", 2.5) 
    if 'midiin' in globals():
        try:
            midiin.close_port()
        finally:
            del midiin
    if 'midiout' in globals():
        del midiout
    globals()['midiin'], globals()['portin'] = open_midiinput(1)
    if instrument == 'roli':
        midiin.set_callback(midi_callback_roli)
        i = 0
        while i < len(osc):
            libpd_float(("vel" + str(i + 1)), 1)
            i = i + 1
    if instrument == 'nlp':
        midiin.set_callback(midi_callback_nlp)
        globals()['midiout'], globals()['portout'] = open_midioutput(1)
        midiout.send_message([176, 104, octaveColors[offsetOctave]])
        midiout.send_message([176, 105, octaveColors[offsetOctave]])
        midiout.send_message([176, 106, colors[offsetScale]])
        midiout.send_message([176, 107, colors[offsetScale]])   
    if instrument == 'maudio':
        midiin.set_callback(midi_callback_maudio)

initMidi()

libpd_float("volume", 1)
with sd.OutputStream(device=device, dtype='int16', channels=1, callback=pd_callback, samplerate=samplerate, blocksize=64):
    eel.start('main.html')#, cmdline_args=['--kiosk'])
    #while True:
    #    sleep(2)
