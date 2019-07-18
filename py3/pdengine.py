import pyaudio
from pylibpd import *
import time

def pd_callback(in_data,frame_count,time_info,status):
	outp = m.process(data)
	return (outp,pyaudio.paContinue)

def pdin(*s):
	global parameters
	#print("pd just said that {0} is {1}".format(s[0], s[1]))
	parameters[s[0]] = s[1]
'''
	if s[0] == 'pyout_frequency':
		frequency = round(s[1],2)
		#print('PD just reported that the current frequency is ' + str(s[1]) + '!')
	elif s[0] == 't1':
		f = s[1]
		print f
	elif s[0] == 'A':
		f = s[1]
		print f
	elif s[0] == 'D':
		f = s[1]
		print f
		'''

def hey(hey):
	return "hey"

def init():
	global m, data
	print("i've been summoned")
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
	libpd_set_float_callback(pdin)
	libpd_set_symbol_callback(pdin)

def pdEngineBang(destination):
	libpd_bang(str(destination))
	return True