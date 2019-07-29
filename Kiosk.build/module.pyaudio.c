/* Generated code for Python module 'pyaudio'
 * created by Nuitka version 0.6.1.1
 *
 * This code is in part copyright 2018 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The "_module_pyaudio" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyaudio;
PyDictObject *moduledict_pyaudio;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_copy;
static PyObject *const_str_plain_input_device_index;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_digest_fe3e9591bc62eb2cca0b43b5499f9178;
static PyObject *const_str_plain_get_default_output_device;
static PyObject *const_str_plain_paInputUnderflow;
static PyObject *const_str_plain_paCustomFormat;
static PyObject *const_tuple_str_plain_self_str_plain_width_str_plain_unsigned_tuple;
static PyObject *const_str_plain_get_default_host_api;
extern PyObject *const_str_plain_type;
static PyObject *const_str_digest_42bb557d00682d8230475acd914988dc;
static PyObject *const_str_plain_paIncompatibleStreamHostApi;
static PyObject *const_str_plain_defaultHostApiIndex;
static PyObject *const_str_digest_fda3986dc3297c314544654e163c4942;
static PyObject *const_str_digest_73fa89fe36a4c35c88bde5aeca881f5c;
extern PyObject *const_str_plain_decode;
static PyObject *const_tuple_str_plain_width_str_plain_unsigned_tuple;
static PyObject *const_str_plain_get_version_text;
static PyObject *const_str_digest_4a20ad6a989fe14463e9f90ff1b847b1;
static PyObject *const_str_digest_d2483cc76376f751cbc20663988dfae6;
static PyObject *const_str_plain_paInputOverflowed;
static PyObject *const_tuple_str_plain_self_str_plain_defaultHostApiIndex_tuple;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
static PyObject *const_str_plain__make_host_api_dictionary;
extern PyObject *const_str_plain_pyaudio;
static PyObject *const_str_plain_paMacCoreFailIfConversionRequired;
static PyObject *const_str_plain_paMacCoreStreamInfo;
static PyObject *const_str_digest_943c8f1fd43dadfe1232d46f6739ff49;
extern PyObject *const_str_plain__format;
extern PyObject *const_str_plain_paContinue;
static PyObject *const_str_plain_paStreamIsNotStopped;
static PyObject *const_str_plain_deviceCount;
static PyObject *const_str_plain_get_stream_read_available;
static PyObject *const_tuple_str_plain_self_str_plain_format_tuple;
static PyObject *const_str_plain_stop_stream;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_plain_cp1252;
static PyObject *const_str_digest_5bf26b5f4297a7b729e575c408977abb;
extern PyObject *const_str_plain_frames_per_buffer;
static PyObject *const_str_plain_output_device;
static PyObject *const_str_plain_paUInt8;
static PyObject *const_str_plain__remove_stream;
extern PyObject *const_str_plain_args;
static PyObject *const_str_plain__stream;
extern PyObject *const_str_plain_remove;
static PyObject *const_tuple_str_plain_self_str_plain_index_str_plain_host_api_struct_tuple;
static PyObject *const_str_plain_paWDMKS;
static PyObject *const_str_digest_e299453d87904c0daecc865a9fef9227;
static PyObject *const_str_plain_get_stream_time;
static PyObject *const_str_plain_unsigned;
static PyObject *const_str_plain_get_default_host_api_info;
static PyObject *const_str_plain_get_version;
static PyObject *const_str_plain_structVersion;
static PyObject *const_str_plain_paFloat32;
static PyObject *const_str_plain_paPrimingOutput;
extern PyObject *const_str_plain_sys;
static PyObject *const_str_plain_paMacCoreMinimizeCPU;
static PyObject *const_str_plain_paASIO;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_False;
static PyObject *const_str_digest_5aca4ab2df6200b45ac7e0b6fcbfad5f;
static PyObject *const_str_digest_a4b7ef3ddad0fd31398c0f3ac10825e5;
static PyObject *const_str_plain_host_api_device_index;
static PyObject *const_str_plain_get_host_api_info_by_type;
static PyObject *const_str_digest_e0342649c805d5b2a8846c4a5318cb2f;
static PyObject *const_str_plain_hostApi;
static PyObject *const_str_plain_get_device_info_by_index;
static PyObject *const_str_digest_c2d764418c591637e102443ae0c9ed62;
extern PyObject *const_str_plain_close;
static PyObject *const_str_plain_outputLatency;
static PyObject *const_str_plain_paNotInitialized;
static PyObject *const_str_plain_num_frames;
static PyObject *const_str_plain_is_stopped;
extern PyObject *const_str_plain_input;
extern PyObject *const_str_plain_format;
static PyObject *const_str_digest_93d8017e12e320a1a86cfc2d79514aef;
static PyObject *const_str_digest_a49b3a75a6a005470450a99781d79d09;
static PyObject *const_str_digest_5e3893e349f405719f5d541bb77bd372;
static PyObject *const_str_plain_frames;
static PyObject *const_str_plain_paSoundManager;
static PyObject *const_str_digest_1c30b726ad616bcc4cf39de61fa28cb6;
extern PyObject *const_str_plain_stream_callback;
static PyObject *const_str_plain_get_write_available;
static PyObject *const_str_plain__channels;
static PyObject *const_str_plain_paBadStreamPtr;
static PyObject *const_str_plain_paBufferTooSmall;
static PyObject *const_str_plain_host_api_index;
extern PyObject *const_str_digest_e58b8e238daae7f316f45d0978267798;
static PyObject *const_tuple_737cf07545df64b2c89b7577ce619ebf_tuple;
static PyObject *const_str_plain_get_format_from_width;
static PyObject *const_tuple_00c8bce25bf07a426ea73e009552e889_tuple;
static PyObject *const_str_digest_8c90fbdbc28c9d6785f4e6bd5c785400;
static PyObject *const_str_plain_Stream;
static PyObject *const_str_digest_baacd0ce4d2d295b7b6c27a1c4ce039a;
static PyObject *const_str_plain_paMacCoreConversionQualityMedium;
static PyObject *const_str_digest_4b1299c95abffd0c90ebcce1293758b0;
static PyObject *const_str_plain_defaultHighInputLatency;
extern PyObject *const_tuple_none_false_tuple;
static PyObject *const_str_plain_paInvalidDevice;
static PyObject *const_str_plain_paInternalError;
static PyObject *const_tuple_83452485fafe1ffb95ff8824327c032a_tuple;
static PyObject *const_tuple_b206cddd2ec8ab02301cc4402aef8399_tuple;
static PyObject *const_str_plain_codec;
static PyObject *const_str_plain__frames_per_buffer;
static PyObject *const_str_digest_24ceb29058c0ce6946b9a699355fd3fd;
static PyObject *const_str_plain_host_api_type;
static PyObject *const_str_plain_write_stream;
static PyObject *const_str_digest_319283b4e7018199e73fe1561577745b;
static PyObject *const_str_plain_input_format;
static PyObject *const_str_digest_09fae457bab0599f0c4d917023788118;
static PyObject *const_str_plain_paMacCoreConversionQualityHigh;
static PyObject *const_str_plain_paCanNotReadFromAnOutputOnlyStream;
static PyObject *const_str_digest_482dcbc1774095a9ad23e31b5b0023bb;
extern PyObject *const_str_plain___docformat__;
static PyObject *const_str_plain_initialize;
static PyObject *const_str_plain_paMacCoreMinimizeCPUButPlayNice;
static PyObject *const_str_digest_d53904089212e788c866c7f431d12e4e;
static PyObject *const_str_plain_inputLatency;
static PyObject *const_str_plain_paCanNotWriteToAnInputOnlyStream;
static PyObject *const_str_plain_paOutputUnderflow;
static PyObject *const_str_plain_get_host_api_info;
static PyObject *const_str_plain_get_sample_size;
static PyObject *const_str_digest_7f0956d7ebb4a7c65d2a28295c626d5d;
static PyObject *const_str_plain_exception_on_underflow;
extern PyObject *const_tuple_none_none_none_none_none_none_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_input_channels;
static PyObject *const_str_plain_paMacCoreConversionQualityMax;
extern PyObject *const_str_plain_output;
static PyObject *const_str_plain_paMacCoreChangeDeviceParameters;
static PyObject *const_str_digest_cf1c455fa754d5d2217a8ad237bec174;
extern PyObject *const_int_pos_4;
static PyObject *const_str_plain_paInputOverflow;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
static PyObject *const_str_plain_input_host_api_specific_stream_info;
static PyObject *const_str_plain_read_stream;
static PyObject *const_str_plain_is_format_supported;
static PyObject *const_str_plain__is_output;
extern PyObject *const_str_plain___module__;
static PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_str_plain_cp1252_tuple;
static PyObject *const_str_digest_daa31478a56575074c4b544a167264dd;
extern PyObject *const_str_plain_rate;
static PyObject *const_str_plain_paInsufficientMemory;
static PyObject *const_tuple_str_plain_self_str_plain_host_api_index_tuple;
extern PyObject *const_str_plain_channels;
static PyObject *const_str_plain__is_running;
extern PyObject *const_tuple_true_tuple;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain_paOSS;
static PyObject *const_str_plain_get_default_output_device_info;
static PyObject *const_tuple_str_plain_self_str_plain_stream_tuple;
static PyObject *const_str_plain_paTimedOut;
static PyObject *const_str_plain_is_stream_stopped;
static PyObject *const_str_plain_paMacCoreConversionQualityMin;
extern PyObject *const_str_plain___author__;
static PyObject *const_str_plain_paBeOS;
static PyObject *const_str_digest_bcc7cc6ff84b95d18b14e1351b70e89a;
static PyObject *const_str_plain__l;
static PyObject *const_str_plain__rate;
static PyObject *const_str_plain_paInvalidHostApi;
static PyObject *const_str_plain_host_api_type_id_to_host_api_index;
static PyObject *const_str_plain_defaultLowInputLatency;
static PyObject *const_str_plain_get_host_api_info_by_index;
static PyObject *const_str_plain_paOutputOverflow;
static PyObject *const_str_plain_get_device_info;
static PyObject *const_str_plain_paDeviceUnavailable;
static PyObject *const_str_plain_paBadIODeviceCombination;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_paMME;
static PyObject *const_str_plain_paALSA;
static PyObject *const_str_plain_paInt8;
static PyObject *const_str_plain_defaultHighOutputLatency;
static PyObject *const_str_digest_f25a7fad4493d1251dc48b61c0ecd0d3;
static PyObject *const_str_plain_paCoreAudio;
static PyObject *const_str_digest_ff4cd58aae673e9b993096f8fb8182c3;
extern PyObject *const_str_plain_index;
extern PyObject *const_str_plain_arguments;
static PyObject *const_str_plain__streams;
extern PyObject *const_tuple_none_none_tuple;
static PyObject *const_str_digest_3911b9e6c746581f1c96db16ba78b789;
static PyObject *const_str_plain__get_host_api_stream_object;
static PyObject *const_str_plain_defaultOutputDevice;
static PyObject *const_str_digest_f31207aebb5430eebc6f1dd00a3eee10;
static PyObject *const_str_plain_paCanNotWriteToACallbackStream;
static PyObject *const_str_plain_paSampleFormatNotSupported;
static PyObject *const_str_digest_4b18c59355c8e650e76040b061b73634;
static PyObject *const_str_plain_paIncompatibleHostApiSpecificStreamInfo;
static PyObject *const_str_digest_599daefef685e6663fcdfd7a92d30803;
extern PyObject *const_str_plain_write;
static PyObject *const_str_plain_paInDevelopment;
static PyObject *const_str_plain_paNullCallback;
static PyObject *const_str_plain_long_method_name;
static PyObject *const_str_plain_paInt32;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_b740fb1ceba603bd0761329c6236770d;
static PyObject *const_str_plain_paAL;
static PyObject *const_str_plain_paDirectSound;
static PyObject *const_str_plain_maxInputChannels;
static PyObject *const_str_plain__is_input;
extern PyObject *const_str_plain_add;
static PyObject *const_str_plain_exception_on_overflow;
static PyObject *const_str_plain_get_device_info_by_host_api_device_index;
static PyObject *const_str_digest_b4db31866ed569214be8f56822bbe14e;
static PyObject *const_str_digest_ba79b7ac83e51ec5092474169df8a228;
static PyObject *const_str_digest_2b71fa5fe10e38c569f0517cd2ab89ee;
static PyObject *const_str_digest_cbb248795a5d9d0909396eca7f1a1ef5;
static PyObject *const_str_digest_bce7d43bff03cd7c912063d41988e042;
extern PyObject *const_str_plain_stream;
static PyObject *const_str_plain__output_latency;
static PyObject *const_str_plain_paInvalidFlag;
static PyObject *const_str_plain_paBufferTooBig;
static PyObject *const_str_plain_paOutputUnderflowed;
static PyObject *const_str_plain_start_stream;
static PyObject *const_str_plain_input_device;
static PyObject *const_str_plain_is_stream_active;
extern PyObject *const_str_plain_flags;
static PyObject *const_str_plain_get_default_input_device;
static PyObject *const_str_plain_paInvalidChannelCount;
extern PyObject *const_int_pos_1024;
static PyObject *const_str_plain_defaultSampleRate;
static PyObject *const_str_plain_get_stream_cpu_load;
extern PyObject *const_str_plain_width;
static PyObject *const_str_plain_paInt24;
static PyObject *const_str_plain_host_api_device_index_to_device_index;
extern PyObject *const_str_plain_open;
static PyObject *const_str_plain_maxOutputChannels;
extern PyObject *const_str_plain_PyAudio;
static PyObject *const_str_plain_device_index;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_read;
static PyObject *const_str_plain_get_flags;
static PyObject *const_str_plain_channel_map;
static PyObject *const_str_plain_get_default_input_device_info;
static PyObject *const_tuple_str_plain_self_str_plain_device_index_tuple;
static PyObject *const_str_plain_defaultLowOutputLatency;
static PyObject *const_str_digest_36dd9bde50a9cc50c2d9fd9cec678a2d;
static PyObject *const_str_digest_b278794067a4e9b621a77f5eed642652;
static PyObject *const_str_plain_get_read_available;
static PyObject *const_str_plain_get_portaudio_version;
static PyObject *const_str_digest_fed5eccd92e132886ed58314b5fa271a;
static PyObject *const_str_digest_f1f57422c35c00c5e7422818f03640bd;
static PyObject *const_str_plain__input_latency;
static PyObject *const_str_plain_output_channels;
static PyObject *const_str_digest_82ea73b32c67082303f09634dcadd2f8;
static PyObject *const_str_plain_paNoError;
static PyObject *const_str_plain_paNoDevice;
static PyObject *const_str_plain_paStreamIsStopped;
static PyObject *const_str_plain_get_device_count;
static PyObject *const_str_plain_paUnanticipatedHostError;
static PyObject *const_str_plain_paHostApiNotFound;
static PyObject *const_str_plain_device_name;
extern PyObject *const_str_plain_start;
static PyObject *const_str_plain_get_portaudio_version_text;
static PyObject *const_str_plain_paCanNotReadFromACallbackStream;
static PyObject *const_str_plain_PA_manager;
static PyObject *const_str_plain_output_host_api_specific_stream_info;
static PyObject *const_str_plain_paMacCoreConversionQualityLow;
static PyObject *const_str_digest_11cdda9e6321ecf61127a7cdb779c0ef;
static PyObject *const_str_digest_47c76d88a245478871314f2666e77135;
static PyObject *const_str_digest_75acb4f7c69fe729b2ae6435c2c868bc;
static PyObject *const_str_plain_defaultInputDevice;
static PyObject *const_str_plain__make_device_info_dictionary;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_pa;
static PyObject *const_str_plain_paWASAPI;
static PyObject *const_tuple_false_false_none_none_int_pos_1024_true_none_none_none_tuple;
static PyObject *const_str_plain__portaudio;
extern PyObject *const_str_plain_paInt16;
static PyObject *const_str_digest_03c1a49fa187cac50198ec4cb1f01e81;
static PyObject *const_str_plain_device_info;
static PyObject *const_str_digest_18f5f73dc99136b564c0401dbba834e9;
static PyObject *const_str_plain_get_cpu_load;
static PyObject *const_str_plain__paMacCoreStreamInfo;
extern PyObject *const_str_plain___version__;
static PyObject *const_str_plain_PaMacCoreStreamInfo;
static PyObject *const_tuple_776457d68140256d508c6ebee2c7637a_tuple;
static PyObject *const_str_plain_output_device_index;
static PyObject *const_str_plain_host_api_struct;
extern PyObject *const_tuple_str_plain_format_tuple;
static PyObject *const_str_plain__parent;
static PyObject *const_str_digest_1de5045a3bfa3e9c4d7835ba0892368c;
static PyObject *const_str_digest_ae4b9b282f9e728df8559a20a1fb0f2c;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_plain_paComplete;
static PyObject *const_str_plain_paMacCorePlayNice;
static PyObject *const_str_plain_paAbort;
static PyObject *const_str_plain_paJACK;
static PyObject *const_str_plain_output_format;
static PyObject *const_tuple_dce307028c7d54fa23ec466d55a4801f_tuple;
static PyObject *const_str_digest_6d2199feb85ac99b747a8f20969ffa6d;
static PyObject *const_str_plain_get_host_api_count;
static PyObject *const_str_plain_get_output_latency;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_get_channel_map;
extern PyObject *const_str_plain_is_active;
static PyObject *const_str_digest_4d65d5ed715ef796717d5a8d099bfaef;
extern PyObject *const_str_plain_terminate;
static PyObject *const_str_plain_get_stream_write_available;
static PyObject *const_str_plain_paInvalidSampleRate;
static PyObject *const_tuple_feba544304cd460c63fef08832b47e7a_tuple;
static PyObject *const_str_digest_633668cf1aacaa8a575894ff7d6505b5;
static PyObject *const_str_plain_get_input_latency;
static PyObject *const_tuple_str_plain_self_str_plain_host_api_type_str_plain_index_tuple;
static PyObject *const_str_plain_paMacCorePro;
static PyObject *const_str_plain_get_time;
static PyObject *const_tuple_f175d055cd0dae23b57bee2f6f9b3bb0_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_input_device_index = UNSTREAM_STRING( &constant_bin[ 2402324 ], 18, 1 );
    const_str_digest_fe3e9591bc62eb2cca0b43b5499f9178 = UNSTREAM_STRING( &constant_bin[ 2402342 ], 11, 0 );
    const_str_plain_get_default_output_device = UNSTREAM_STRING( &constant_bin[ 2402353 ], 25, 1 );
    const_str_plain_paInputUnderflow = UNSTREAM_STRING( &constant_bin[ 2402378 ], 16, 1 );
    const_str_plain_paCustomFormat = UNSTREAM_STRING( &constant_bin[ 2402394 ], 14, 1 );
    const_tuple_str_plain_self_str_plain_width_str_plain_unsigned_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_width_str_plain_unsigned_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_width_str_plain_unsigned_tuple, 1, const_str_plain_width ); Py_INCREF( const_str_plain_width );
    const_str_plain_unsigned = UNSTREAM_STRING( &constant_bin[ 11470 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_width_str_plain_unsigned_tuple, 2, const_str_plain_unsigned ); Py_INCREF( const_str_plain_unsigned );
    const_str_plain_get_default_host_api = UNSTREAM_STRING( &constant_bin[ 2402408 ], 20, 1 );
    const_str_digest_42bb557d00682d8230475acd914988dc = UNSTREAM_STRING( &constant_bin[ 2402428 ], 77, 0 );
    const_str_plain_paIncompatibleStreamHostApi = UNSTREAM_STRING( &constant_bin[ 2402505 ], 27, 1 );
    const_str_plain_defaultHostApiIndex = UNSTREAM_STRING( &constant_bin[ 2402532 ], 19, 1 );
    const_str_digest_fda3986dc3297c314544654e163c4942 = UNSTREAM_STRING( &constant_bin[ 2402551 ], 147, 0 );
    const_str_digest_73fa89fe36a4c35c88bde5aeca881f5c = UNSTREAM_STRING( &constant_bin[ 2402698 ], 204, 0 );
    const_tuple_str_plain_width_str_plain_unsigned_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_width_str_plain_unsigned_tuple, 0, const_str_plain_width ); Py_INCREF( const_str_plain_width );
    PyTuple_SET_ITEM( const_tuple_str_plain_width_str_plain_unsigned_tuple, 1, const_str_plain_unsigned ); Py_INCREF( const_str_plain_unsigned );
    const_str_plain_get_version_text = UNSTREAM_STRING( &constant_bin[ 2402902 ], 16, 1 );
    const_str_digest_4a20ad6a989fe14463e9f90ff1b847b1 = UNSTREAM_STRING( &constant_bin[ 2402918 ], 56, 0 );
    const_str_digest_d2483cc76376f751cbc20663988dfae6 = UNSTREAM_STRING( &constant_bin[ 2402974 ], 21, 0 );
    const_str_plain_paInputOverflowed = UNSTREAM_STRING( &constant_bin[ 2402995 ], 17, 1 );
    const_tuple_str_plain_self_str_plain_defaultHostApiIndex_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_defaultHostApiIndex_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_defaultHostApiIndex_tuple, 1, const_str_plain_defaultHostApiIndex ); Py_INCREF( const_str_plain_defaultHostApiIndex );
    const_str_plain__make_host_api_dictionary = UNSTREAM_STRING( &constant_bin[ 2403012 ], 25, 1 );
    const_str_plain_paMacCoreFailIfConversionRequired = UNSTREAM_STRING( &constant_bin[ 2403037 ], 33, 1 );
    const_str_plain_paMacCoreStreamInfo = UNSTREAM_STRING( &constant_bin[ 2403070 ], 19, 1 );
    const_str_digest_943c8f1fd43dadfe1232d46f6739ff49 = UNSTREAM_STRING( &constant_bin[ 2403089 ], 60, 0 );
    const_str_plain_paStreamIsNotStopped = UNSTREAM_STRING( &constant_bin[ 2403149 ], 20, 1 );
    const_str_plain_deviceCount = UNSTREAM_STRING( &constant_bin[ 2403169 ], 11, 1 );
    const_str_plain_get_stream_read_available = UNSTREAM_STRING( &constant_bin[ 2403180 ], 25, 1 );
    const_tuple_str_plain_self_str_plain_format_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_format_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_format_tuple, 1, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    const_str_plain_stop_stream = UNSTREAM_STRING( &constant_bin[ 2403205 ], 11, 1 );
    const_str_plain_cp1252 = UNSTREAM_STRING( &constant_bin[ 2403216 ], 6, 1 );
    const_str_digest_5bf26b5f4297a7b729e575c408977abb = UNSTREAM_STRING( &constant_bin[ 2403222 ], 51, 0 );
    const_str_plain_output_device = UNSTREAM_STRING( &constant_bin[ 2402365 ], 13, 1 );
    const_str_plain_paUInt8 = UNSTREAM_STRING( &constant_bin[ 2403273 ], 7, 1 );
    const_str_plain__remove_stream = UNSTREAM_STRING( &constant_bin[ 2403280 ], 14, 1 );
    const_str_plain__stream = UNSTREAM_STRING( &constant_bin[ 2403183 ], 7, 1 );
    const_tuple_str_plain_self_str_plain_index_str_plain_host_api_struct_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_index_str_plain_host_api_struct_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_index_str_plain_host_api_struct_tuple, 1, const_str_plain_index ); Py_INCREF( const_str_plain_index );
    const_str_plain_host_api_struct = UNSTREAM_STRING( &constant_bin[ 2403294 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_index_str_plain_host_api_struct_tuple, 2, const_str_plain_host_api_struct ); Py_INCREF( const_str_plain_host_api_struct );
    const_str_plain_paWDMKS = UNSTREAM_STRING( &constant_bin[ 2403309 ], 7, 1 );
    const_str_digest_e299453d87904c0daecc865a9fef9227 = UNSTREAM_STRING( &constant_bin[ 2403316 ], 105, 0 );
    const_str_plain_get_stream_time = UNSTREAM_STRING( &constant_bin[ 2403421 ], 15, 1 );
    const_str_plain_get_default_host_api_info = UNSTREAM_STRING( &constant_bin[ 2403436 ], 25, 1 );
    const_str_plain_get_version = UNSTREAM_STRING( &constant_bin[ 2402902 ], 11, 1 );
    const_str_plain_structVersion = UNSTREAM_STRING( &constant_bin[ 2403461 ], 13, 1 );
    const_str_plain_paFloat32 = UNSTREAM_STRING( &constant_bin[ 2403474 ], 9, 1 );
    const_str_plain_paPrimingOutput = UNSTREAM_STRING( &constant_bin[ 2403483 ], 15, 1 );
    const_str_plain_paMacCoreMinimizeCPU = UNSTREAM_STRING( &constant_bin[ 2403498 ], 20, 1 );
    const_str_plain_paASIO = UNSTREAM_STRING( &constant_bin[ 2403518 ], 6, 1 );
    const_str_digest_5aca4ab2df6200b45ac7e0b6fcbfad5f = UNSTREAM_STRING( &constant_bin[ 2403524 ], 21, 0 );
    const_str_digest_a4b7ef3ddad0fd31398c0f3ac10825e5 = UNSTREAM_STRING( &constant_bin[ 2403545 ], 163, 0 );
    const_str_plain_host_api_device_index = UNSTREAM_STRING( &constant_bin[ 2403708 ], 21, 1 );
    const_str_plain_get_host_api_info_by_type = UNSTREAM_STRING( &constant_bin[ 2403729 ], 25, 1 );
    const_str_digest_e0342649c805d5b2a8846c4a5318cb2f = UNSTREAM_STRING( &constant_bin[ 2403754 ], 116, 0 );
    const_str_plain_hostApi = UNSTREAM_STRING( &constant_bin[ 2403870 ], 7, 1 );
    const_str_plain_get_device_info_by_index = UNSTREAM_STRING( &constant_bin[ 2403877 ], 24, 1 );
    const_str_digest_c2d764418c591637e102443ae0c9ed62 = UNSTREAM_STRING( &constant_bin[ 2403901 ], 158, 0 );
    const_str_plain_outputLatency = UNSTREAM_STRING( &constant_bin[ 2404059 ], 13, 1 );
    const_str_plain_paNotInitialized = UNSTREAM_STRING( &constant_bin[ 2404072 ], 16, 1 );
    const_str_plain_num_frames = UNSTREAM_STRING( &constant_bin[ 2404088 ], 10, 1 );
    const_str_plain_is_stopped = UNSTREAM_STRING( &constant_bin[ 2404098 ], 10, 1 );
    const_str_digest_93d8017e12e320a1a86cfc2d79514aef = UNSTREAM_STRING( &constant_bin[ 2404108 ], 303, 0 );
    const_str_digest_a49b3a75a6a005470450a99781d79d09 = UNSTREAM_STRING( &constant_bin[ 2404411 ], 67, 0 );
    const_str_digest_5e3893e349f405719f5d541bb77bd372 = UNSTREAM_STRING( &constant_bin[ 2404478 ], 94, 0 );
    const_str_plain_frames = UNSTREAM_STRING( &constant_bin[ 2403784 ], 6, 1 );
    const_str_plain_paSoundManager = UNSTREAM_STRING( &constant_bin[ 2404572 ], 14, 1 );
    const_str_digest_1c30b726ad616bcc4cf39de61fa28cb6 = UNSTREAM_STRING( &constant_bin[ 2404586 ], 3051, 0 );
    const_str_plain_get_write_available = UNSTREAM_STRING( &constant_bin[ 2407637 ], 19, 1 );
    const_str_plain__channels = UNSTREAM_STRING( &constant_bin[ 2407656 ], 9, 1 );
    const_str_plain_paBadStreamPtr = UNSTREAM_STRING( &constant_bin[ 2406549 ], 14, 1 );
    const_str_plain_paBufferTooSmall = UNSTREAM_STRING( &constant_bin[ 2406491 ], 16, 1 );
    const_str_plain_host_api_index = UNSTREAM_STRING( &constant_bin[ 2407665 ], 14, 1 );
    const_tuple_737cf07545df64b2c89b7577ce619ebf_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_737cf07545df64b2c89b7577ce619ebf_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_737cf07545df64b2c89b7577ce619ebf_tuple, 1, const_str_plain_host_api_index ); Py_INCREF( const_str_plain_host_api_index );
    PyTuple_SET_ITEM( const_tuple_737cf07545df64b2c89b7577ce619ebf_tuple, 2, const_str_plain_host_api_device_index ); Py_INCREF( const_str_plain_host_api_device_index );
    const_str_plain_long_method_name = UNSTREAM_STRING( &constant_bin[ 2407679 ], 16, 1 );
    PyTuple_SET_ITEM( const_tuple_737cf07545df64b2c89b7577ce619ebf_tuple, 3, const_str_plain_long_method_name ); Py_INCREF( const_str_plain_long_method_name );
    const_str_plain_device_index = UNSTREAM_STRING( &constant_bin[ 2402330 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_737cf07545df64b2c89b7577ce619ebf_tuple, 4, const_str_plain_device_index ); Py_INCREF( const_str_plain_device_index );
    const_str_plain_get_format_from_width = UNSTREAM_STRING( &constant_bin[ 2405198 ], 21, 1 );
    const_tuple_00c8bce25bf07a426ea73e009552e889_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_00c8bce25bf07a426ea73e009552e889_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_00c8bce25bf07a426ea73e009552e889_tuple, 1, const_str_plain_index ); Py_INCREF( const_str_plain_index );
    const_str_plain_device_info = UNSTREAM_STRING( &constant_bin[ 2403881 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_00c8bce25bf07a426ea73e009552e889_tuple, 2, const_str_plain_device_info ); Py_INCREF( const_str_plain_device_info );
    const_str_plain_codec = UNSTREAM_STRING( &constant_bin[ 1002115 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_00c8bce25bf07a426ea73e009552e889_tuple, 3, const_str_plain_codec ); Py_INCREF( const_str_plain_codec );
    const_str_plain_device_name = UNSTREAM_STRING( &constant_bin[ 2407695 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_00c8bce25bf07a426ea73e009552e889_tuple, 4, const_str_plain_device_name ); Py_INCREF( const_str_plain_device_name );
    const_str_digest_8c90fbdbc28c9d6785f4e6bd5c785400 = UNSTREAM_STRING( &constant_bin[ 2407706 ], 409, 0 );
    const_str_plain_Stream = UNSTREAM_STRING( &constant_bin[ 943199 ], 6, 1 );
    const_str_digest_baacd0ce4d2d295b7b6c27a1c4ce039a = UNSTREAM_STRING( &constant_bin[ 2408115 ], 336, 0 );
    const_str_plain_paMacCoreConversionQualityMedium = UNSTREAM_STRING( &constant_bin[ 2408451 ], 32, 1 );
    const_str_digest_4b1299c95abffd0c90ebcce1293758b0 = UNSTREAM_STRING( &constant_bin[ 2408483 ], 49, 0 );
    const_str_plain_defaultHighInputLatency = UNSTREAM_STRING( &constant_bin[ 2408532 ], 23, 1 );
    const_str_plain_paInvalidDevice = UNSTREAM_STRING( &constant_bin[ 2406295 ], 15, 1 );
    const_str_plain_paInternalError = UNSTREAM_STRING( &constant_bin[ 2406601 ], 15, 1 );
    const_tuple_83452485fafe1ffb95ff8824327c032a_tuple = PyTuple_New( 16 );
    PyTuple_SET_ITEM( const_tuple_83452485fafe1ffb95ff8824327c032a_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_PA_manager = UNSTREAM_STRING( &constant_bin[ 2408555 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_83452485fafe1ffb95ff8824327c032a_tuple, 1, const_str_plain_PA_manager ); Py_INCREF( const_str_plain_PA_manager );
    PyTuple_SET_ITEM( const_tuple_83452485fafe1ffb95ff8824327c032a_tuple, 2, const_str_plain_rate ); Py_INCREF( const_str_plain_rate );
    PyTuple_SET_ITEM( const_tuple_83452485fafe1ffb95ff8824327c032a_tuple, 3, const_str_plain_channels ); Py_INCREF( const_str_plain_channels );
    PyTuple_SET_ITEM( const_tuple_83452485fafe1ffb95ff8824327c032a_tuple, 4, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    PyTuple_SET_ITEM( const_tuple_83452485fafe1ffb95ff8824327c032a_tuple, 5, const_str_plain_input ); Py_INCREF( const_str_plain_input );
    PyTuple_SET_ITEM( const_tuple_83452485fafe1ffb95ff8824327c032a_tuple, 6, const_str_plain_output ); Py_INCREF( const_str_plain_output );
    PyTuple_SET_ITEM( const_tuple_83452485fafe1ffb95ff8824327c032a_tuple, 7, const_str_plain_input_device_index ); Py_INCREF( const_str_plain_input_device_index );
    const_str_plain_output_device_index = UNSTREAM_STRING( &constant_bin[ 2408565 ], 19, 1 );
    PyTuple_SET_ITEM( const_tuple_83452485fafe1ffb95ff8824327c032a_tuple, 8, const_str_plain_output_device_index ); Py_INCREF( const_str_plain_output_device_index );
    PyTuple_SET_ITEM( const_tuple_83452485fafe1ffb95ff8824327c032a_tuple, 9, const_str_plain_frames_per_buffer ); Py_INCREF( const_str_plain_frames_per_buffer );
    PyTuple_SET_ITEM( const_tuple_83452485fafe1ffb95ff8824327c032a_tuple, 10, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    const_str_plain_input_host_api_specific_stream_info = UNSTREAM_STRING( &constant_bin[ 2408584 ], 35, 1 );
    PyTuple_SET_ITEM( const_tuple_83452485fafe1ffb95ff8824327c032a_tuple, 11, const_str_plain_input_host_api_specific_stream_info ); Py_INCREF( const_str_plain_input_host_api_specific_stream_info );
    const_str_plain_output_host_api_specific_stream_info = UNSTREAM_STRING( &constant_bin[ 2408619 ], 36, 1 );
    PyTuple_SET_ITEM( const_tuple_83452485fafe1ffb95ff8824327c032a_tuple, 12, const_str_plain_output_host_api_specific_stream_info ); Py_INCREF( const_str_plain_output_host_api_specific_stream_info );
    PyTuple_SET_ITEM( const_tuple_83452485fafe1ffb95ff8824327c032a_tuple, 13, const_str_plain_stream_callback ); Py_INCREF( const_str_plain_stream_callback );
    const_str_plain__l = UNSTREAM_STRING( &constant_bin[ 2561 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_83452485fafe1ffb95ff8824327c032a_tuple, 14, const_str_plain__l ); Py_INCREF( const_str_plain__l );
    PyTuple_SET_ITEM( const_tuple_83452485fafe1ffb95ff8824327c032a_tuple, 15, const_str_plain_arguments ); Py_INCREF( const_str_plain_arguments );
    const_tuple_b206cddd2ec8ab02301cc4402aef8399_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_b206cddd2ec8ab02301cc4402aef8399_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_b206cddd2ec8ab02301cc4402aef8399_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_b206cddd2ec8ab02301cc4402aef8399_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_b206cddd2ec8ab02301cc4402aef8399_tuple, 3, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    const_str_plain__frames_per_buffer = UNSTREAM_STRING( &constant_bin[ 2408655 ], 18, 1 );
    const_str_digest_24ceb29058c0ce6946b9a699355fd3fd = UNSTREAM_STRING( &constant_bin[ 2408673 ], 16, 0 );
    const_str_plain_host_api_type = UNSTREAM_STRING( &constant_bin[ 2408689 ], 13, 1 );
    const_str_plain_write_stream = UNSTREAM_STRING( &constant_bin[ 2408702 ], 12, 1 );
    const_str_digest_319283b4e7018199e73fe1561577745b = UNSTREAM_STRING( &constant_bin[ 2408714 ], 84, 0 );
    const_str_plain_input_format = UNSTREAM_STRING( &constant_bin[ 2408798 ], 12, 1 );
    const_str_digest_09fae457bab0599f0c4d917023788118 = UNSTREAM_STRING( &constant_bin[ 2408810 ], 111, 0 );
    const_str_plain_paMacCoreConversionQualityHigh = UNSTREAM_STRING( &constant_bin[ 2408921 ], 30, 1 );
    const_str_plain_paCanNotReadFromAnOutputOnlyStream = UNSTREAM_STRING( &constant_bin[ 2407000 ], 34, 1 );
    const_str_digest_482dcbc1774095a9ad23e31b5b0023bb = UNSTREAM_STRING( &constant_bin[ 2408951 ], 368, 0 );
    const_str_plain_initialize = UNSTREAM_STRING( &constant_bin[ 37155 ], 10, 1 );
    const_str_plain_paMacCoreMinimizeCPUButPlayNice = UNSTREAM_STRING( &constant_bin[ 2409319 ], 31, 1 );
    const_str_digest_d53904089212e788c866c7f431d12e4e = UNSTREAM_STRING( &constant_bin[ 2409350 ], 278, 0 );
    const_str_plain_inputLatency = UNSTREAM_STRING( &constant_bin[ 2409628 ], 12, 1 );
    const_str_plain_paCanNotWriteToAnInputOnlyStream = UNSTREAM_STRING( &constant_bin[ 2407049 ], 32, 1 );
    const_str_plain_paOutputUnderflow = UNSTREAM_STRING( &constant_bin[ 2406814 ], 17, 1 );
    const_str_plain_get_host_api_info = UNSTREAM_STRING( &constant_bin[ 2403729 ], 17, 1 );
    const_str_plain_get_sample_size = UNSTREAM_STRING( &constant_bin[ 2405170 ], 15, 1 );
    const_str_digest_7f0956d7ebb4a7c65d2a28295c626d5d = UNSTREAM_STRING( &constant_bin[ 2409640 ], 960, 0 );
    const_str_plain_exception_on_underflow = UNSTREAM_STRING( &constant_bin[ 2410600 ], 22, 1 );
    const_str_plain_input_channels = UNSTREAM_STRING( &constant_bin[ 2410622 ], 14, 1 );
    const_str_plain_paMacCoreConversionQualityMax = UNSTREAM_STRING( &constant_bin[ 2410636 ], 29, 1 );
    const_str_plain_paMacCoreChangeDeviceParameters = UNSTREAM_STRING( &constant_bin[ 2410665 ], 31, 1 );
    const_str_digest_cf1c455fa754d5d2217a8ad237bec174 = UNSTREAM_STRING( &constant_bin[ 2410696 ], 716, 0 );
    const_str_plain_paInputOverflow = UNSTREAM_STRING( &constant_bin[ 2402995 ], 15, 1 );
    const_str_plain_read_stream = UNSTREAM_STRING( &constant_bin[ 2411412 ], 11, 1 );
    const_str_plain_is_format_supported = UNSTREAM_STRING( &constant_bin[ 2410317 ], 19, 1 );
    const_str_plain__is_output = UNSTREAM_STRING( &constant_bin[ 2411423 ], 10, 1 );
    const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_str_plain_cp1252_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_str_plain_cp1252_tuple, 0, const_str_digest_c075052d723d6707083e869a0e3659bb ); Py_INCREF( const_str_digest_c075052d723d6707083e869a0e3659bb );
    PyTuple_SET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_str_plain_cp1252_tuple, 1, const_str_plain_cp1252 ); Py_INCREF( const_str_plain_cp1252 );
    const_str_digest_daa31478a56575074c4b544a167264dd = UNSTREAM_STRING( &constant_bin[ 2411433 ], 268, 0 );
    const_str_plain_paInsufficientMemory = UNSTREAM_STRING( &constant_bin[ 2406429 ], 20, 1 );
    const_tuple_str_plain_self_str_plain_host_api_index_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_host_api_index_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_host_api_index_tuple, 1, const_str_plain_host_api_index ); Py_INCREF( const_str_plain_host_api_index );
    const_str_plain__is_running = UNSTREAM_STRING( &constant_bin[ 2411701 ], 11, 1 );
    const_str_plain_paOSS = UNSTREAM_STRING( &constant_bin[ 2405862 ], 5, 1 );
    const_str_plain_get_default_output_device_info = UNSTREAM_STRING( &constant_bin[ 2410403 ], 30, 1 );
    const_tuple_str_plain_self_str_plain_stream_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_stream_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_stream_tuple, 1, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    const_str_plain_paTimedOut = UNSTREAM_STRING( &constant_bin[ 2406578 ], 10, 1 );
    const_str_plain_is_stream_stopped = UNSTREAM_STRING( &constant_bin[ 2411712 ], 17, 1 );
    const_str_plain_paMacCoreConversionQualityMin = UNSTREAM_STRING( &constant_bin[ 2411729 ], 29, 1 );
    const_str_plain_paBeOS = UNSTREAM_STRING( &constant_bin[ 2405916 ], 6, 1 );
    const_str_digest_bcc7cc6ff84b95d18b14e1351b70e89a = UNSTREAM_STRING( &constant_bin[ 2411758 ], 6, 0 );
    const_str_plain__rate = UNSTREAM_STRING( &constant_bin[ 1384370 ], 5, 1 );
    const_str_plain_paInvalidHostApi = UNSTREAM_STRING( &constant_bin[ 2406878 ], 16, 1 );
    const_str_plain_host_api_type_id_to_host_api_index = UNSTREAM_STRING( &constant_bin[ 2411764 ], 34, 1 );
    const_str_plain_defaultLowInputLatency = UNSTREAM_STRING( &constant_bin[ 2411798 ], 22, 1 );
    const_str_plain_get_host_api_info_by_index = UNSTREAM_STRING( &constant_bin[ 2410165 ], 26, 1 );
    const_str_plain_paOutputOverflow = UNSTREAM_STRING( &constant_bin[ 2407589 ], 16, 1 );
    const_str_plain_get_device_info = UNSTREAM_STRING( &constant_bin[ 2403877 ], 15, 1 );
    const_str_plain_paDeviceUnavailable = UNSTREAM_STRING( &constant_bin[ 2406631 ], 19, 1 );
    const_str_plain_paBadIODeviceCombination = UNSTREAM_STRING( &constant_bin[ 2406392 ], 24, 1 );
    const_str_plain_paMME = UNSTREAM_STRING( &constant_bin[ 2405770 ], 5, 1 );
    const_str_plain_paALSA = UNSTREAM_STRING( &constant_bin[ 2405880 ], 6, 1 );
    const_str_plain_paInt8 = UNSTREAM_STRING( &constant_bin[ 2405543 ], 6, 1 );
    const_str_plain_defaultHighOutputLatency = UNSTREAM_STRING( &constant_bin[ 2411820 ], 24, 1 );
    const_str_digest_f25a7fad4493d1251dc48b61c0ecd0d3 = UNSTREAM_STRING( &constant_bin[ 2411844 ], 270, 0 );
    const_str_plain_paCoreAudio = UNSTREAM_STRING( &constant_bin[ 2405836 ], 11, 1 );
    const_str_digest_ff4cd58aae673e9b993096f8fb8182c3 = UNSTREAM_STRING( &constant_bin[ 2412114 ], 576, 0 );
    const_str_plain__streams = UNSTREAM_STRING( &constant_bin[ 2412690 ], 8, 1 );
    const_str_digest_3911b9e6c746581f1c96db16ba78b789 = UNSTREAM_STRING( &constant_bin[ 2412698 ], 104, 0 );
    const_str_plain__get_host_api_stream_object = UNSTREAM_STRING( &constant_bin[ 2412802 ], 27, 1 );
    const_str_plain_defaultOutputDevice = UNSTREAM_STRING( &constant_bin[ 2412829 ], 19, 1 );
    const_str_digest_f31207aebb5430eebc6f1dd00a3eee10 = UNSTREAM_STRING( &constant_bin[ 2412848 ], 1244, 0 );
    const_str_plain_paCanNotWriteToACallbackStream = UNSTREAM_STRING( &constant_bin[ 2406955 ], 30, 1 );
    const_str_plain_paSampleFormatNotSupported = UNSTREAM_STRING( &constant_bin[ 2406351 ], 26, 1 );
    const_str_digest_4b18c59355c8e650e76040b061b73634 = UNSTREAM_STRING( &constant_bin[ 2414092 ], 66, 0 );
    const_str_plain_paIncompatibleHostApiSpecificStreamInfo = UNSTREAM_STRING( &constant_bin[ 2406665 ], 39, 1 );
    const_str_digest_599daefef685e6663fcdfd7a92d30803 = UNSTREAM_STRING( &constant_bin[ 2414158 ], 15, 0 );
    const_str_plain_paInDevelopment = UNSTREAM_STRING( &constant_bin[ 2405716 ], 15, 1 );
    const_str_plain_paNullCallback = UNSTREAM_STRING( &constant_bin[ 2406522 ], 14, 1 );
    const_str_plain_paInt32 = UNSTREAM_STRING( &constant_bin[ 2405481 ], 7, 1 );
    const_str_digest_b740fb1ceba603bd0761329c6236770d = UNSTREAM_STRING( &constant_bin[ 2414173 ], 17, 0 );
    const_str_plain_paAL = UNSTREAM_STRING( &constant_bin[ 2405880 ], 4, 1 );
    const_str_plain_paDirectSound = UNSTREAM_STRING( &constant_bin[ 2405744 ], 13, 1 );
    const_str_plain_maxInputChannels = UNSTREAM_STRING( &constant_bin[ 2414190 ], 16, 1 );
    const_str_plain__is_input = UNSTREAM_STRING( &constant_bin[ 2414206 ], 9, 1 );
    const_str_plain_exception_on_overflow = UNSTREAM_STRING( &constant_bin[ 2414215 ], 21, 1 );
    const_str_plain_get_device_info_by_host_api_device_index = UNSTREAM_STRING( &constant_bin[ 2410210 ], 40, 1 );
    const_str_digest_b4db31866ed569214be8f56822bbe14e = UNSTREAM_STRING( &constant_bin[ 2414236 ], 16, 0 );
    const_str_digest_ba79b7ac83e51ec5092474169df8a228 = UNSTREAM_STRING( &constant_bin[ 2414252 ], 19, 0 );
    const_str_digest_2b71fa5fe10e38c569f0517cd2ab89ee = UNSTREAM_STRING( &constant_bin[ 2414271 ], 122, 0 );
    const_str_digest_cbb248795a5d9d0909396eca7f1a1ef5 = UNSTREAM_STRING( &constant_bin[ 2414393 ], 370, 0 );
    const_str_digest_bce7d43bff03cd7c912063d41988e042 = UNSTREAM_STRING( &constant_bin[ 2414763 ], 149, 0 );
    const_str_plain__output_latency = UNSTREAM_STRING( &constant_bin[ 2412354 ], 15, 1 );
    const_str_plain_paInvalidFlag = UNSTREAM_STRING( &constant_bin[ 2406325 ], 13, 1 );
    const_str_plain_paBufferTooBig = UNSTREAM_STRING( &constant_bin[ 2406464 ], 14, 1 );
    const_str_plain_paOutputUnderflowed = UNSTREAM_STRING( &constant_bin[ 2406814 ], 19, 1 );
    const_str_plain_start_stream = UNSTREAM_STRING( &constant_bin[ 2412466 ], 12, 1 );
    const_str_plain_input_device = UNSTREAM_STRING( &constant_bin[ 2402324 ], 12, 1 );
    const_str_plain_is_stream_active = UNSTREAM_STRING( &constant_bin[ 2414912 ], 16, 1 );
    const_str_plain_get_default_input_device = UNSTREAM_STRING( &constant_bin[ 2410355 ], 24, 1 );
    const_str_plain_paInvalidChannelCount = UNSTREAM_STRING( &constant_bin[ 2406227 ], 21, 1 );
    const_str_plain_defaultSampleRate = UNSTREAM_STRING( &constant_bin[ 2414928 ], 17, 1 );
    const_str_plain_get_stream_cpu_load = UNSTREAM_STRING( &constant_bin[ 2414945 ], 19, 1 );
    const_str_plain_paInt24 = UNSTREAM_STRING( &constant_bin[ 2405501 ], 7, 1 );
    const_str_plain_host_api_device_index_to_device_index = UNSTREAM_STRING( &constant_bin[ 2414964 ], 37, 1 );
    const_str_plain_maxOutputChannels = UNSTREAM_STRING( &constant_bin[ 2415001 ], 17, 1 );
    const_str_plain_get_flags = UNSTREAM_STRING( &constant_bin[ 2414045 ], 9, 1 );
    const_str_plain_channel_map = UNSTREAM_STRING( &constant_bin[ 2414071 ], 11, 1 );
    const_str_plain_get_default_input_device_info = UNSTREAM_STRING( &constant_bin[ 2410355 ], 29, 1 );
    const_tuple_str_plain_self_str_plain_device_index_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_device_index_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_device_index_tuple, 1, const_str_plain_device_index ); Py_INCREF( const_str_plain_device_index );
    const_str_plain_defaultLowOutputLatency = UNSTREAM_STRING( &constant_bin[ 2415018 ], 23, 1 );
    const_str_digest_36dd9bde50a9cc50c2d9fd9cec678a2d = UNSTREAM_STRING( &constant_bin[ 2415041 ], 1103, 0 );
    const_str_digest_b278794067a4e9b621a77f5eed642652 = UNSTREAM_STRING( &constant_bin[ 2416144 ], 39, 0 );
    const_str_plain_get_read_available = UNSTREAM_STRING( &constant_bin[ 2412628 ], 18, 1 );
    const_str_plain_get_portaudio_version = UNSTREAM_STRING( &constant_bin[ 2405256 ], 21, 1 );
    const_str_digest_fed5eccd92e132886ed58314b5fa271a = UNSTREAM_STRING( &constant_bin[ 2416183 ], 53, 0 );
    const_str_digest_f1f57422c35c00c5e7422818f03640bd = UNSTREAM_STRING( &constant_bin[ 2416236 ], 327, 0 );
    const_str_plain__input_latency = UNSTREAM_STRING( &constant_bin[ 2412324 ], 14, 1 );
    const_str_plain_output_channels = UNSTREAM_STRING( &constant_bin[ 2415834 ], 15, 1 );
    const_str_digest_82ea73b32c67082303f09634dcadd2f8 = UNSTREAM_STRING( &constant_bin[ 2416563 ], 78, 0 );
    const_str_plain_paNoError = UNSTREAM_STRING( &constant_bin[ 2406137 ], 9, 1 );
    const_str_plain_paNoDevice = UNSTREAM_STRING( &constant_bin[ 2405999 ], 10, 1 );
    const_str_plain_paStreamIsStopped = UNSTREAM_STRING( &constant_bin[ 2406719 ], 17, 1 );
    const_str_plain_get_device_count = UNSTREAM_STRING( &constant_bin[ 2410288 ], 16, 1 );
    const_str_plain_paUnanticipatedHostError = UNSTREAM_STRING( &constant_bin[ 2406190 ], 24, 1 );
    const_str_plain_paHostApiNotFound = UNSTREAM_STRING( &constant_bin[ 2406848 ], 17, 1 );
    const_str_plain_get_portaudio_version_text = UNSTREAM_STRING( &constant_bin[ 2405290 ], 26, 1 );
    const_str_plain_paCanNotReadFromACallbackStream = UNSTREAM_STRING( &constant_bin[ 2406909 ], 31, 1 );
    const_str_plain_paMacCoreConversionQualityLow = UNSTREAM_STRING( &constant_bin[ 2413695 ], 29, 1 );
    const_str_digest_11cdda9e6321ecf61127a7cdb779c0ef = UNSTREAM_STRING( &constant_bin[ 2416641 ], 453, 0 );
    const_str_digest_47c76d88a245478871314f2666e77135 = UNSTREAM_STRING( &constant_bin[ 2417094 ], 17, 0 );
    const_str_digest_75acb4f7c69fe729b2ae6435c2c868bc = UNSTREAM_STRING( &constant_bin[ 2417111 ], 162, 0 );
    const_str_plain_defaultInputDevice = UNSTREAM_STRING( &constant_bin[ 2417273 ], 18, 1 );
    const_str_plain__make_device_info_dictionary = UNSTREAM_STRING( &constant_bin[ 2417291 ], 28, 1 );
    const_str_plain_pa = UNSTREAM_STRING( &constant_bin[ 52 ], 2, 1 );
    const_str_plain_paWASAPI = UNSTREAM_STRING( &constant_bin[ 2405976 ], 8, 1 );
    const_tuple_false_false_none_none_int_pos_1024_true_none_none_none_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_false_false_none_none_int_pos_1024_true_none_none_none_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_false_none_none_int_pos_1024_true_none_none_none_tuple, 1, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_false_none_none_int_pos_1024_true_none_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_false_none_none_int_pos_1024_true_none_none_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_false_none_none_int_pos_1024_true_none_none_none_tuple, 4, const_int_pos_1024 ); Py_INCREF( const_int_pos_1024 );
    PyTuple_SET_ITEM( const_tuple_false_false_none_none_int_pos_1024_true_none_none_none_tuple, 5, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_false_false_none_none_int_pos_1024_true_none_none_none_tuple, 6, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_false_none_none_int_pos_1024_true_none_none_none_tuple, 7, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_false_none_none_int_pos_1024_true_none_none_none_tuple, 8, Py_None ); Py_INCREF( Py_None );
    const_str_plain__portaudio = UNSTREAM_STRING( &constant_bin[ 2403261 ], 10, 1 );
    const_str_digest_03c1a49fa187cac50198ec4cb1f01e81 = UNSTREAM_STRING( &constant_bin[ 2417319 ], 485, 0 );
    const_str_digest_18f5f73dc99136b564c0401dbba834e9 = UNSTREAM_STRING( &constant_bin[ 2417804 ], 18, 0 );
    const_str_plain_get_cpu_load = UNSTREAM_STRING( &constant_bin[ 2412409 ], 12, 1 );
    const_str_plain__paMacCoreStreamInfo = UNSTREAM_STRING( &constant_bin[ 2417822 ], 20, 1 );
    const_str_plain_PaMacCoreStreamInfo = UNSTREAM_STRING( &constant_bin[ 2405092 ], 19, 1 );
    const_tuple_776457d68140256d508c6ebee2c7637a_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_776457d68140256d508c6ebee2c7637a_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_776457d68140256d508c6ebee2c7637a_tuple, 1, const_str_plain_num_frames ); Py_INCREF( const_str_plain_num_frames );
    PyTuple_SET_ITEM( const_tuple_776457d68140256d508c6ebee2c7637a_tuple, 2, const_str_plain_exception_on_overflow ); Py_INCREF( const_str_plain_exception_on_overflow );
    const_str_plain__parent = UNSTREAM_STRING( &constant_bin[ 2417842 ], 7, 1 );
    const_str_digest_1de5045a3bfa3e9c4d7835ba0892368c = UNSTREAM_STRING( &constant_bin[ 2417849 ], 4015, 0 );
    const_str_digest_ae4b9b282f9e728df8559a20a1fb0f2c = UNSTREAM_STRING( &constant_bin[ 2421864 ], 200, 0 );
    const_str_plain_paComplete = UNSTREAM_STRING( &constant_bin[ 2407324 ], 10, 1 );
    const_str_plain_paMacCorePlayNice = UNSTREAM_STRING( &constant_bin[ 2413852 ], 17, 1 );
    const_str_plain_paAbort = UNSTREAM_STRING( &constant_bin[ 2407347 ], 7, 1 );
    const_str_plain_paJACK = UNSTREAM_STRING( &constant_bin[ 2405957 ], 6, 1 );
    const_str_plain_output_format = UNSTREAM_STRING( &constant_bin[ 2415985 ], 13, 1 );
    const_tuple_dce307028c7d54fa23ec466d55a4801f_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_dce307028c7d54fa23ec466d55a4801f_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_dce307028c7d54fa23ec466d55a4801f_tuple, 1, const_str_plain_flags ); Py_INCREF( const_str_plain_flags );
    PyTuple_SET_ITEM( const_tuple_dce307028c7d54fa23ec466d55a4801f_tuple, 2, const_str_plain_channel_map ); Py_INCREF( const_str_plain_channel_map );
    PyTuple_SET_ITEM( const_tuple_dce307028c7d54fa23ec466d55a4801f_tuple, 3, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_digest_6d2199feb85ac99b747a8f20969ffa6d = UNSTREAM_STRING( &constant_bin[ 2422064 ], 93, 0 );
    const_str_plain_get_host_api_count = UNSTREAM_STRING( &constant_bin[ 2410046 ], 18, 1 );
    const_str_plain_get_output_latency = UNSTREAM_STRING( &constant_bin[ 2412351 ], 18, 1 );
    const_str_plain_get_channel_map = UNSTREAM_STRING( &constant_bin[ 2414067 ], 15, 1 );
    const_str_digest_4d65d5ed715ef796717d5a8d099bfaef = UNSTREAM_STRING( &constant_bin[ 2422157 ], 251, 0 );
    const_str_plain_get_stream_write_available = UNSTREAM_STRING( &constant_bin[ 2422408 ], 26, 1 );
    const_str_plain_paInvalidSampleRate = UNSTREAM_STRING( &constant_bin[ 2406263 ], 19, 1 );
    const_tuple_feba544304cd460c63fef08832b47e7a_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_feba544304cd460c63fef08832b47e7a_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_feba544304cd460c63fef08832b47e7a_tuple, 1, const_str_plain_rate ); Py_INCREF( const_str_plain_rate );
    PyTuple_SET_ITEM( const_tuple_feba544304cd460c63fef08832b47e7a_tuple, 2, const_str_plain_input_device ); Py_INCREF( const_str_plain_input_device );
    PyTuple_SET_ITEM( const_tuple_feba544304cd460c63fef08832b47e7a_tuple, 3, const_str_plain_input_channels ); Py_INCREF( const_str_plain_input_channels );
    PyTuple_SET_ITEM( const_tuple_feba544304cd460c63fef08832b47e7a_tuple, 4, const_str_plain_input_format ); Py_INCREF( const_str_plain_input_format );
    PyTuple_SET_ITEM( const_tuple_feba544304cd460c63fef08832b47e7a_tuple, 5, const_str_plain_output_device ); Py_INCREF( const_str_plain_output_device );
    PyTuple_SET_ITEM( const_tuple_feba544304cd460c63fef08832b47e7a_tuple, 6, const_str_plain_output_channels ); Py_INCREF( const_str_plain_output_channels );
    PyTuple_SET_ITEM( const_tuple_feba544304cd460c63fef08832b47e7a_tuple, 7, const_str_plain_output_format ); Py_INCREF( const_str_plain_output_format );
    PyTuple_SET_ITEM( const_tuple_feba544304cd460c63fef08832b47e7a_tuple, 8, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_digest_633668cf1aacaa8a575894ff7d6505b5 = UNSTREAM_STRING( &constant_bin[ 2422434 ], 73, 0 );
    const_str_plain_get_input_latency = UNSTREAM_STRING( &constant_bin[ 2412321 ], 17, 1 );
    const_tuple_str_plain_self_str_plain_host_api_type_str_plain_index_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_host_api_type_str_plain_index_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_host_api_type_str_plain_index_tuple, 1, const_str_plain_host_api_type ); Py_INCREF( const_str_plain_host_api_type );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_host_api_type_str_plain_index_tuple, 2, const_str_plain_index ); Py_INCREF( const_str_plain_index );
    const_str_plain_paMacCorePro = UNSTREAM_STRING( &constant_bin[ 2413892 ], 12, 1 );
    const_str_plain_get_time = UNSTREAM_STRING( &constant_bin[ 2412388 ], 8, 1 );
    const_tuple_f175d055cd0dae23b57bee2f6f9b3bb0_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_f175d055cd0dae23b57bee2f6f9b3bb0_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_f175d055cd0dae23b57bee2f6f9b3bb0_tuple, 1, const_str_plain_frames ); Py_INCREF( const_str_plain_frames );
    PyTuple_SET_ITEM( const_tuple_f175d055cd0dae23b57bee2f6f9b3bb0_tuple, 2, const_str_plain_num_frames ); Py_INCREF( const_str_plain_num_frames );
    PyTuple_SET_ITEM( const_tuple_f175d055cd0dae23b57bee2f6f9b3bb0_tuple, 3, const_str_plain_exception_on_underflow ); Py_INCREF( const_str_plain_exception_on_underflow );
    PyTuple_SET_ITEM( const_tuple_f175d055cd0dae23b57bee2f6f9b3bb0_tuple, 4, const_str_plain_width ); Py_INCREF( const_str_plain_width );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pyaudio( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_2c7187073e5bfc034c60cff922190a77;
static PyCodeObject *codeobj_2b3e849cf3b280654b643122de2dddfa;
static PyCodeObject *codeobj_450c5f56049f9e25bdd0760e7cec30cf;
static PyCodeObject *codeobj_15948b3f41e1daf89b6e58f6ab6d488c;
static PyCodeObject *codeobj_090a408a147316670a51ce9f8c5d7c8d;
static PyCodeObject *codeobj_6b4c8e69ba7b284e4aff99d80dd0cb89;
static PyCodeObject *codeobj_4d090f7c6289147cb14048e2c36dc6e9;
static PyCodeObject *codeobj_2ea891ba6e0ac4e65100a844a3db1e07;
static PyCodeObject *codeobj_8639ce5e58a75ca00c3515a68e17af1d;
static PyCodeObject *codeobj_953aa59d9e4d92863f887e41258a5635;
static PyCodeObject *codeobj_92282bbbd3e740d9d5ee6f3f84e9a786;
static PyCodeObject *codeobj_7543392384a37d52c32854883007e73d;
static PyCodeObject *codeobj_e2e18255e144f1a704c0e6b11af84392;
static PyCodeObject *codeobj_fede4e7eb9d64c1aad1b540dbcc2d97e;
static PyCodeObject *codeobj_232610de516b9d5c825ff2b3ea665d20;
static PyCodeObject *codeobj_b311f1040282d905bf417be8985b6243;
static PyCodeObject *codeobj_86c2124e59c118c137dd72d32d72f25e;
static PyCodeObject *codeobj_33de854a1972bb7b5db2a7211b9292d1;
static PyCodeObject *codeobj_046aafda5cdaacd620f72633efe2d4c5;
static PyCodeObject *codeobj_494c3537e37bc9ab7e52675d44acaad6;
static PyCodeObject *codeobj_35afe319b2e4e97f65ae9a01e9d0313c;
static PyCodeObject *codeobj_b9b38578cad24900f9b0e7ff96adf071;
static PyCodeObject *codeobj_1d6777ee32244e5d17839d8281e6e027;
static PyCodeObject *codeobj_2839d9a61054d166e97d16581c46a5c7;
static PyCodeObject *codeobj_b68b9a58e8fa6577d93223c180b46d5e;
static PyCodeObject *codeobj_1c4068e2c768b6a62135a397a18372a8;
static PyCodeObject *codeobj_b7dc29159249071c0799e5089a91938f;
static PyCodeObject *codeobj_ba4a35bdec8e76caba325331f269214b;
static PyCodeObject *codeobj_e6c4022f12f77f0611ed25a6ceab63ae;
static PyCodeObject *codeobj_3f8d16c6a5ac9b31ca30f3bdfb39b9c2;
static PyCodeObject *codeobj_105cdd2bc06bf2341d21f7c7deb179e9;
static PyCodeObject *codeobj_3b119aee9d5433efc2171659690249e4;
static PyCodeObject *codeobj_74e4e9818184a4748010470834660827;
static PyCodeObject *codeobj_22e6fd6808e1438310a36f1c4ff83f47;
static PyCodeObject *codeobj_94a3b95f5f7e65cbdd0f8e58e03a00eb;
static PyCodeObject *codeobj_36019a81609f261d806c24ffba4090df;
static PyCodeObject *codeobj_8485d31c0061b439fe9eb46a66aae56e;
static PyCodeObject *codeobj_80df74404a2aa065f662085e0361c344;
static PyCodeObject *codeobj_bfac27ea75f03229911c3760d682850d;
static PyCodeObject *codeobj_dd23df56f726376a9d519c89a3cd030c;
static PyCodeObject *codeobj_279f6042f5129d350d38f9802ba829d3;
static PyCodeObject *codeobj_f593ab6d3ed743788ae337910aece584;
static PyCodeObject *codeobj_281992c275f8403feab6be6b094885ce;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_4b1299c95abffd0c90ebcce1293758b0;
    codeobj_2c7187073e5bfc034c60cff922190a77 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_24ceb29058c0ce6946b9a699355fd3fd, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_2b3e849cf3b280654b643122de2dddfa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_PaMacCoreStreamInfo, 1031, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_450c5f56049f9e25bdd0760e7cec30cf = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 289, const_tuple_83452485fafe1ffb95ff8824327c032a_tuple, 14, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_15948b3f41e1daf89b6e58f6ab6d488c = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 674, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_090a408a147316670a51ce9f8c5d7c8d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 1075, const_tuple_dce307028c7d54fa23ec466d55a4801f_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6b4c8e69ba7b284e4aff99d80dd0cb89 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_host_api_stream_object, 1115, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4d090f7c6289147cb14048e2c36dc6e9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__make_device_info_dictionary, 983, const_tuple_00c8bce25bf07a426ea73e009552e889_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2ea891ba6e0ac4e65100a844a3db1e07 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__make_host_api_dictionary, 855, const_tuple_str_plain_self_str_plain_index_str_plain_host_api_struct_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8639ce5e58a75ca00c3515a68e17af1d = MAKE_CODEOBJ( module_filename_obj, const_str_plain__remove_stream, 767, const_tuple_str_plain_self_str_plain_stream_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_953aa59d9e4d92863f887e41258a5635 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close, 449, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_92282bbbd3e740d9d5ee6f3f84e9a786 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close, 754, const_tuple_str_plain_self_str_plain_stream_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7543392384a37d52c32854883007e73d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_channel_map, 1106, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e2e18255e144f1a704c0e6b11af84392 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_cpu_load, 490, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fede4e7eb9d64c1aad1b540dbcc2d97e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_default_host_api_info, 791, const_tuple_str_plain_self_str_plain_defaultHostApiIndex_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_232610de516b9d5c825ff2b3ea665d20 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_default_input_device_info, 939, const_tuple_str_plain_self_str_plain_device_index_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b311f1040282d905bf417be8985b6243 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_default_output_device_info, 952, const_tuple_str_plain_self_str_plain_device_index_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_86c2124e59c118c137dd72d32d72f25e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_device_count, 876, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_33de854a1972bb7b5db2a7211b9292d1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_device_info_by_host_api_device_index, 836, const_tuple_737cf07545df64b2c89b7577ce619ebf_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_046aafda5cdaacd620f72633efe2d4c5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_device_info_by_index, 966, const_tuple_str_plain_self_str_plain_device_index_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_494c3537e37bc9ab7e52675d44acaad6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_flags, 1097, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_35afe319b2e4e97f65ae9a01e9d0313c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_format_from_width, 214, const_tuple_str_plain_width_str_plain_unsigned_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b9b38578cad24900f9b0e7ff96adf071 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_format_from_width, 712, const_tuple_str_plain_self_str_plain_width_str_plain_unsigned_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1d6777ee32244e5d17839d8281e6e027 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_host_api_count, 782, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2839d9a61054d166e97d16581c46a5c7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_host_api_info_by_index, 819, const_tuple_str_plain_self_str_plain_host_api_index_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b68b9a58e8fa6577d93223c180b46d5e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_host_api_info_by_type, 804, const_tuple_str_plain_self_str_plain_host_api_type_str_plain_index_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1c4068e2c768b6a62135a397a18372a8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_input_latency, 463, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b7dc29159249071c0799e5089a91938f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_output_latency, 472, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ba4a35bdec8e76caba325331f269214b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_portaudio_version, 244, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e6c4022f12f77f0611ed25a6ceab63ae = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_portaudio_version_text, 253, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3f8d16c6a5ac9b31ca30f3bdfb39b9c2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_read_available, 610, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_105cdd2bc06bf2341d21f7c7deb179e9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_sample_size, 202, const_tuple_str_plain_format_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3b119aee9d5433efc2171659690249e4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_sample_size, 700, const_tuple_str_plain_self_str_plain_format_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_74e4e9818184a4748010470834660827 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_time, 481, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_22e6fd6808e1438310a36f1c4ff83f47 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_write_available, 620, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_94a3b95f5f7e65cbdd0f8e58e03a00eb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_active, 527, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_36019a81609f261d806c24ffba4090df = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_format_supported, 885, const_tuple_feba544304cd460c63fef08832b47e7a_tuple, 8, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8485d31c0061b439fe9eb46a66aae56e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_stopped, 536, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_80df74404a2aa065f662085e0361c344 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_open, 742, const_tuple_b206cddd2ec8ab02301cc4402aef8399_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_bfac27ea75f03229911c3760d682850d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read, 589, const_tuple_776457d68140256d508c6ebee2c7637a_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_dd23df56f726376a9d519c89a3cd030c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_start_stream, 505, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_279f6042f5129d350d38f9802ba829d3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_stop_stream, 514, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f593ab6d3ed743788ae337910aece584 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_terminate, 680, const_tuple_str_plain_self_str_plain_stream_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_281992c275f8403feab6be6b094885ce = MAKE_CODEOBJ( module_filename_obj, const_str_plain_write, 550, const_tuple_f175d055cd0dae23b57bee2f6f9b3bb0_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_9_complex_call_helper_pos_star_list_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_pos_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_10_get_cpu_load(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_11_start_stream(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_12_stop_stream(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_13_is_active(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_14_is_stopped(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_15_write( PyObject *defaults );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_16_read( PyObject *defaults );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_17_get_read_available(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_18_get_write_available(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_19___init__(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_1_get_sample_size(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_20_terminate(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_21_get_sample_size(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_22_get_format_from_width( PyObject *defaults );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_23_open(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_24_close(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_25__remove_stream(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_26_get_host_api_count(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_27_get_default_host_api_info(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_28_get_host_api_info_by_type(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_29_get_host_api_info_by_index(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_2_get_format_from_width( PyObject *defaults );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_30_get_device_info_by_host_api_device_index(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_31__make_host_api_dictionary(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_32_get_device_count(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_33_is_format_supported( PyObject *defaults );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_34_get_default_input_device_info(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_35_get_default_output_device_info(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_36_get_device_info_by_index(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_37__make_device_info_dictionary(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_38___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_39_get_flags(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_3_get_portaudio_version(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_40_get_channel_map(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_41__get_host_api_stream_object(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_4_get_portaudio_version_text(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_5___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_6_close(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_7_get_input_latency(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_8_get_output_latency(  );


static PyObject *MAKE_FUNCTION_pyaudio$$$function_9_get_time(  );


// The module function definitions.
static PyObject *impl_pyaudio$$$function_1_get_sample_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_format = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_105cdd2bc06bf2341d21f7c7deb179e9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_105cdd2bc06bf2341d21f7c7deb179e9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_105cdd2bc06bf2341d21f7c7deb179e9, codeobj_105cdd2bc06bf2341d21f7c7deb179e9, module_pyaudio, sizeof(void *) );
    frame_105cdd2bc06bf2341d21f7c7deb179e9 = cache_frame_105cdd2bc06bf2341d21f7c7deb179e9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_105cdd2bc06bf2341d21f7c7deb179e9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_105cdd2bc06bf2341d21f7c7deb179e9 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 212;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_format );
        tmp_args_element_name_1 = par_format;
        frame_105cdd2bc06bf2341d21f7c7deb179e9->m_frame.f_lineno = 212;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get_sample_size, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 212;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_105cdd2bc06bf2341d21f7c7deb179e9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_105cdd2bc06bf2341d21f7c7deb179e9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_105cdd2bc06bf2341d21f7c7deb179e9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_105cdd2bc06bf2341d21f7c7deb179e9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_105cdd2bc06bf2341d21f7c7deb179e9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_105cdd2bc06bf2341d21f7c7deb179e9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_105cdd2bc06bf2341d21f7c7deb179e9,
        type_description_1,
        par_format
    );


    // Release cached frame.
    if ( frame_105cdd2bc06bf2341d21f7c7deb179e9 == cache_frame_105cdd2bc06bf2341d21f7c7deb179e9 )
    {
        Py_DECREF( frame_105cdd2bc06bf2341d21f7c7deb179e9 );
    }
    cache_frame_105cdd2bc06bf2341d21f7c7deb179e9 = NULL;

    assertFrameObject( frame_105cdd2bc06bf2341d21f7c7deb179e9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_1_get_sample_size );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_1_get_sample_size );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_2_get_format_from_width( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_width = python_pars[ 0 ];
    PyObject *par_unsigned = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_35afe319b2e4e97f65ae9a01e9d0313c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_35afe319b2e4e97f65ae9a01e9d0313c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_35afe319b2e4e97f65ae9a01e9d0313c, codeobj_35afe319b2e4e97f65ae9a01e9d0313c, module_pyaudio, sizeof(void *)+sizeof(void *) );
    frame_35afe319b2e4e97f65ae9a01e9d0313c = cache_frame_35afe319b2e4e97f65ae9a01e9d0313c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_35afe319b2e4e97f65ae9a01e9d0313c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_35afe319b2e4e97f65ae9a01e9d0313c ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_width );
        tmp_compexpr_left_1 = par_width;
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 225;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            nuitka_bool tmp_condition_result_2;
            int tmp_truth_name_1;
            CHECK_OBJECT( par_unsigned );
            tmp_truth_name_1 = CHECK_IF_TRUE( par_unsigned );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 226;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            {
                PyObject *tmp_mvar_value_1;
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paUInt8 );

                if (unlikely( tmp_mvar_value_1 == NULL ))
                {
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_paUInt8 );
                }

                if ( tmp_mvar_value_1 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "paUInt8" );
                    exception_tb = NULL;

                    exception_lineno = 227;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }

                tmp_return_value = tmp_mvar_value_1;
                Py_INCREF( tmp_return_value );
                goto frame_return_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_mvar_value_2;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paInt8 );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_paInt8 );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "paInt8" );
                    exception_tb = NULL;

                    exception_lineno = 229;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }

                tmp_return_value = tmp_mvar_value_2;
                Py_INCREF( tmp_return_value );
                goto frame_return_exit_1;
            }
            branch_end_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( par_width );
            tmp_compexpr_left_2 = par_width;
            tmp_compexpr_right_2 = const_int_pos_2;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 230;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_3;
            }
            else
            {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_mvar_value_3;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paInt16 );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_paInt16 );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "paInt16" );
                    exception_tb = NULL;

                    exception_lineno = 231;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }

                tmp_return_value = tmp_mvar_value_3;
                Py_INCREF( tmp_return_value );
                goto frame_return_exit_1;
            }
            goto branch_end_3;
            branch_no_3:;
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                CHECK_OBJECT( par_width );
                tmp_compexpr_left_3 = par_width;
                tmp_compexpr_right_3 = const_int_pos_3;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 232;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_4;
                }
                else
                {
                    goto branch_no_4;
                }
                branch_yes_4:;
                {
                    PyObject *tmp_mvar_value_4;
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paInt24 );

                    if (unlikely( tmp_mvar_value_4 == NULL ))
                    {
                        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_paInt24 );
                    }

                    if ( tmp_mvar_value_4 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "paInt24" );
                        exception_tb = NULL;

                        exception_lineno = 233;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }

                    tmp_return_value = tmp_mvar_value_4;
                    Py_INCREF( tmp_return_value );
                    goto frame_return_exit_1;
                }
                goto branch_end_4;
                branch_no_4:;
                {
                    nuitka_bool tmp_condition_result_5;
                    PyObject *tmp_compexpr_left_4;
                    PyObject *tmp_compexpr_right_4;
                    CHECK_OBJECT( par_width );
                    tmp_compexpr_left_4 = par_width;
                    tmp_compexpr_right_4 = const_int_pos_4;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 234;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_5;
                    }
                    else
                    {
                        goto branch_no_5;
                    }
                    branch_yes_5:;
                    {
                        PyObject *tmp_mvar_value_5;
                        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paFloat32 );

                        if (unlikely( tmp_mvar_value_5 == NULL ))
                        {
                            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_paFloat32 );
                        }

                        if ( tmp_mvar_value_5 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyString_FromFormat( "global name '%s' is not defined", "paFloat32" );
                            exception_tb = NULL;

                            exception_lineno = 235;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }

                        tmp_return_value = tmp_mvar_value_5;
                        Py_INCREF( tmp_return_value );
                        goto frame_return_exit_1;
                    }
                    goto branch_end_5;
                    branch_no_5:;
                    {
                        PyObject *tmp_raise_type_1;
                        PyObject *tmp_make_exception_arg_1;
                        PyObject *tmp_left_name_1;
                        PyObject *tmp_right_name_1;
                        tmp_left_name_1 = const_str_digest_47c76d88a245478871314f2666e77135;
                        CHECK_OBJECT( par_width );
                        tmp_right_name_1 = par_width;
                        tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                        if ( tmp_make_exception_arg_1 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 237;
                            type_description_1 = "oo";
                            goto frame_exception_exit_1;
                        }
                        frame_35afe319b2e4e97f65ae9a01e9d0313c->m_frame.f_lineno = 237;
                        {
                            PyObject *call_args[] = { tmp_make_exception_arg_1 };
                            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                        }

                        Py_DECREF( tmp_make_exception_arg_1 );
                        assert( !(tmp_raise_type_1 == NULL) );
                        exception_type = tmp_raise_type_1;
                        exception_lineno = 237;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    branch_end_5:;
                }
                branch_end_4:;
            }
            branch_end_3:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_35afe319b2e4e97f65ae9a01e9d0313c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_35afe319b2e4e97f65ae9a01e9d0313c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_35afe319b2e4e97f65ae9a01e9d0313c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_35afe319b2e4e97f65ae9a01e9d0313c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_35afe319b2e4e97f65ae9a01e9d0313c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_35afe319b2e4e97f65ae9a01e9d0313c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_35afe319b2e4e97f65ae9a01e9d0313c,
        type_description_1,
        par_width,
        par_unsigned
    );


    // Release cached frame.
    if ( frame_35afe319b2e4e97f65ae9a01e9d0313c == cache_frame_35afe319b2e4e97f65ae9a01e9d0313c )
    {
        Py_DECREF( frame_35afe319b2e4e97f65ae9a01e9d0313c );
    }
    cache_frame_35afe319b2e4e97f65ae9a01e9d0313c = NULL;

    assertFrameObject( frame_35afe319b2e4e97f65ae9a01e9d0313c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_2_get_format_from_width );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_width );
    Py_DECREF( par_width );
    par_width = NULL;

    CHECK_OBJECT( (PyObject *)par_unsigned );
    Py_DECREF( par_unsigned );
    par_unsigned = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_width );
    Py_DECREF( par_width );
    par_width = NULL;

    CHECK_OBJECT( (PyObject *)par_unsigned );
    Py_DECREF( par_unsigned );
    par_unsigned = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_2_get_format_from_width );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_3_get_portaudio_version( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_ba4a35bdec8e76caba325331f269214b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ba4a35bdec8e76caba325331f269214b = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME( cache_frame_ba4a35bdec8e76caba325331f269214b, codeobj_ba4a35bdec8e76caba325331f269214b, module_pyaudio, 0 );
    frame_ba4a35bdec8e76caba325331f269214b = cache_frame_ba4a35bdec8e76caba325331f269214b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ba4a35bdec8e76caba325331f269214b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ba4a35bdec8e76caba325331f269214b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_ba4a35bdec8e76caba325331f269214b->m_frame.f_lineno = 251;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_version );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ba4a35bdec8e76caba325331f269214b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ba4a35bdec8e76caba325331f269214b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ba4a35bdec8e76caba325331f269214b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ba4a35bdec8e76caba325331f269214b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ba4a35bdec8e76caba325331f269214b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ba4a35bdec8e76caba325331f269214b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ba4a35bdec8e76caba325331f269214b,
        type_description_1
    );


    // Release cached frame.
    if ( frame_ba4a35bdec8e76caba325331f269214b == cache_frame_ba4a35bdec8e76caba325331f269214b )
    {
        Py_DECREF( frame_ba4a35bdec8e76caba325331f269214b );
    }
    cache_frame_ba4a35bdec8e76caba325331f269214b = NULL;

    assertFrameObject( frame_ba4a35bdec8e76caba325331f269214b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_3_get_portaudio_version );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_4_get_portaudio_version_text( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_e6c4022f12f77f0611ed25a6ceab63ae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e6c4022f12f77f0611ed25a6ceab63ae = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME( cache_frame_e6c4022f12f77f0611ed25a6ceab63ae, codeobj_e6c4022f12f77f0611ed25a6ceab63ae, module_pyaudio, 0 );
    frame_e6c4022f12f77f0611ed25a6ceab63ae = cache_frame_e6c4022f12f77f0611ed25a6ceab63ae;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e6c4022f12f77f0611ed25a6ceab63ae );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e6c4022f12f77f0611ed25a6ceab63ae ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 260;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_e6c4022f12f77f0611ed25a6ceab63ae->m_frame.f_lineno = 260;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_version_text );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 260;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e6c4022f12f77f0611ed25a6ceab63ae );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e6c4022f12f77f0611ed25a6ceab63ae );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e6c4022f12f77f0611ed25a6ceab63ae );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e6c4022f12f77f0611ed25a6ceab63ae, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e6c4022f12f77f0611ed25a6ceab63ae->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e6c4022f12f77f0611ed25a6ceab63ae, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e6c4022f12f77f0611ed25a6ceab63ae,
        type_description_1
    );


    // Release cached frame.
    if ( frame_e6c4022f12f77f0611ed25a6ceab63ae == cache_frame_e6c4022f12f77f0611ed25a6ceab63ae )
    {
        Py_DECREF( frame_e6c4022f12f77f0611ed25a6ceab63ae );
    }
    cache_frame_e6c4022f12f77f0611ed25a6ceab63ae = NULL;

    assertFrameObject( frame_e6c4022f12f77f0611ed25a6ceab63ae );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_4_get_portaudio_version_text );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_5___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_PA_manager = python_pars[ 1 ];
    PyObject *par_rate = python_pars[ 2 ];
    PyObject *par_channels = python_pars[ 3 ];
    PyObject *par_format = python_pars[ 4 ];
    PyObject *par_input = python_pars[ 5 ];
    PyObject *par_output = python_pars[ 6 ];
    PyObject *par_input_device_index = python_pars[ 7 ];
    PyObject *par_output_device_index = python_pars[ 8 ];
    PyObject *par_frames_per_buffer = python_pars[ 9 ];
    PyObject *par_start = python_pars[ 10 ];
    PyObject *par_input_host_api_specific_stream_info = python_pars[ 11 ];
    PyObject *par_output_host_api_specific_stream_info = python_pars[ 12 ];
    PyObject *par_stream_callback = python_pars[ 13 ];
    PyObject *var__l = NULL;
    PyObject *var_arguments = NULL;
    struct Nuitka_FrameObject *frame_450c5f56049f9e25bdd0760e7cec30cf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    static struct Nuitka_FrameObject *cache_frame_450c5f56049f9e25bdd0760e7cec30cf = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_450c5f56049f9e25bdd0760e7cec30cf, codeobj_450c5f56049f9e25bdd0760e7cec30cf, module_pyaudio, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_450c5f56049f9e25bdd0760e7cec30cf = cache_frame_450c5f56049f9e25bdd0760e7cec30cf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_450c5f56049f9e25bdd0760e7cec30cf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_450c5f56049f9e25bdd0760e7cec30cf ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        CHECK_OBJECT( par_input );
        tmp_or_left_value_1 = par_input;
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 396;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT( par_output );
        tmp_or_right_value_1 = par_output;
        tmp_operand_name_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_operand_name_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 396;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_b278794067a4e9b621a77f5eed642652;
            frame_450c5f56049f9e25bdd0760e7cec30cf->m_frame.f_lineno = 397;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 397;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_PA_manager );
        tmp_assattr_name_1 = par_PA_manager;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__parent, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 400;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_input );
        tmp_assattr_name_2 = par_input;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__is_input, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 403;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_output );
        tmp_assattr_name_3 = par_output;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__is_output, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 404;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( par_start );
        tmp_assattr_name_4 = par_start;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__is_running, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 407;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT( par_rate );
        tmp_assattr_name_5 = par_rate;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain__rate, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 410;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT( par_channels );
        tmp_assattr_name_6 = par_channels;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain__channels, tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 411;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT( par_format );
        tmp_assattr_name_7 = par_format;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain__format, tmp_assattr_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 412;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT( par_frames_per_buffer );
        tmp_assattr_name_8 = par_frames_per_buffer;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain__frames_per_buffer, tmp_assattr_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 413;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        CHECK_OBJECT( par_rate );
        tmp_dict_value_1 = par_rate;
        tmp_dict_key_1 = const_str_plain_rate;
        tmp_assign_source_1 = _PyDict_NewPresized( 8 );
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_channels );
        tmp_dict_value_2 = par_channels;
        tmp_dict_key_2 = const_str_plain_channels;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_format );
        tmp_dict_value_3 = par_format;
        tmp_dict_key_3 = const_str_plain_format;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_input );
        tmp_dict_value_4 = par_input;
        tmp_dict_key_4 = const_str_plain_input;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_output );
        tmp_dict_value_5 = par_output;
        tmp_dict_key_5 = const_str_plain_output;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_input_device_index );
        tmp_dict_value_6 = par_input_device_index;
        tmp_dict_key_6 = const_str_plain_input_device_index;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_output_device_index );
        tmp_dict_value_7 = par_output_device_index;
        tmp_dict_key_7 = const_str_plain_output_device_index;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_frames_per_buffer );
        tmp_dict_value_8 = par_frames_per_buffer;
        tmp_dict_key_8 = const_str_plain_frames_per_buffer;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        assert( var_arguments == NULL );
        var_arguments = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_input_host_api_specific_stream_info );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_input_host_api_specific_stream_info );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 425;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_2;
            CHECK_OBJECT( par_input_host_api_specific_stream_info );
            tmp_assign_source_2 = par_input_host_api_specific_stream_info;
            assert( var__l == NULL );
            Py_INCREF( tmp_assign_source_2 );
            var__l = tmp_assign_source_2;
        }
        {
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( var__l );
            tmp_called_instance_1 = var__l;
            frame_450c5f56049f9e25bdd0760e7cec30cf->m_frame.f_lineno = 429;
            tmp_dictset_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__get_host_api_stream_object );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 429;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_arguments );
            tmp_dictset_dict = var_arguments;
            tmp_dictset_key = const_str_plain_input_host_api_specific_stream_info;
            tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_output_host_api_specific_stream_info );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_output_host_api_specific_stream_info );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 431;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT( par_output_host_api_specific_stream_info );
            tmp_assign_source_3 = par_output_host_api_specific_stream_info;
            {
                PyObject *old = var__l;
                var__l = tmp_assign_source_3;
                Py_INCREF( var__l );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_called_instance_2;
            CHECK_OBJECT( var__l );
            tmp_called_instance_2 = var__l;
            frame_450c5f56049f9e25bdd0760e7cec30cf->m_frame.f_lineno = 435;
            tmp_dictset_value = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain__get_host_api_stream_object );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 435;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_arguments );
            tmp_dictset_dict = var_arguments;
            tmp_dictset_key = const_str_plain_output_host_api_specific_stream_info;
            tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_3;
        CHECK_OBJECT( par_stream_callback );
        tmp_truth_name_3 = CHECK_IF_TRUE( par_stream_callback );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 437;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        CHECK_OBJECT( par_stream_callback );
        tmp_dictset_value = par_stream_callback;
        CHECK_OBJECT( var_arguments );
        tmp_dictset_dict = var_arguments;
        tmp_dictset_key = const_str_plain_stream_callback;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        branch_no_4:;
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_assattr_target_9;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 441;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_open );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 441;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_arguments );
        tmp_dircall_arg2_1 = var_arguments;
        Py_INCREF( tmp_dircall_arg2_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assattr_name_9 = impl___internal__$$$function_4_complex_call_helper_star_dict( dir_call_args );
        }
        if ( tmp_assattr_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 441;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain__stream, tmp_assattr_name_9 );
        Py_DECREF( tmp_assattr_name_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 441;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__stream );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 443;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_inputLatency );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_assattr_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 443;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain__input_latency, tmp_assattr_name_10 );
        Py_DECREF( tmp_assattr_name_10 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 443;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__stream );
        if ( tmp_source_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 444;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_outputLatency );
        Py_DECREF( tmp_source_name_4 );
        if ( tmp_assattr_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 444;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain__output_latency, tmp_assattr_name_11 );
        Py_DECREF( tmp_assattr_name_11 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 444;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__is_running );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 446;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 446;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_8;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "pa" );
                exception_tb = NULL;

                exception_lineno = 447;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_7 = tmp_mvar_value_2;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_start_stream );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 447;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_8 = par_self;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__stream );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 447;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_450c5f56049f9e25bdd0760e7cec30cf->m_frame.f_lineno = 447;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 447;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_5:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_450c5f56049f9e25bdd0760e7cec30cf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_450c5f56049f9e25bdd0760e7cec30cf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_450c5f56049f9e25bdd0760e7cec30cf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_450c5f56049f9e25bdd0760e7cec30cf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_450c5f56049f9e25bdd0760e7cec30cf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_450c5f56049f9e25bdd0760e7cec30cf,
        type_description_1,
        par_self,
        par_PA_manager,
        par_rate,
        par_channels,
        par_format,
        par_input,
        par_output,
        par_input_device_index,
        par_output_device_index,
        par_frames_per_buffer,
        par_start,
        par_input_host_api_specific_stream_info,
        par_output_host_api_specific_stream_info,
        par_stream_callback,
        var__l,
        var_arguments
    );


    // Release cached frame.
    if ( frame_450c5f56049f9e25bdd0760e7cec30cf == cache_frame_450c5f56049f9e25bdd0760e7cec30cf )
    {
        Py_DECREF( frame_450c5f56049f9e25bdd0760e7cec30cf );
    }
    cache_frame_450c5f56049f9e25bdd0760e7cec30cf = NULL;

    assertFrameObject( frame_450c5f56049f9e25bdd0760e7cec30cf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_5___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_frames_per_buffer );
    Py_DECREF( par_frames_per_buffer );
    par_frames_per_buffer = NULL;

    CHECK_OBJECT( (PyObject *)par_PA_manager );
    Py_DECREF( par_PA_manager );
    par_PA_manager = NULL;

    CHECK_OBJECT( (PyObject *)par_stream_callback );
    Py_DECREF( par_stream_callback );
    par_stream_callback = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_input_host_api_specific_stream_info );
    Py_DECREF( par_input_host_api_specific_stream_info );
    par_input_host_api_specific_stream_info = NULL;

    CHECK_OBJECT( (PyObject *)par_channels );
    Py_DECREF( par_channels );
    par_channels = NULL;

    CHECK_OBJECT( (PyObject *)par_start );
    Py_DECREF( par_start );
    par_start = NULL;

    CHECK_OBJECT( (PyObject *)par_rate );
    Py_DECREF( par_rate );
    par_rate = NULL;

    Py_XDECREF( var__l );
    var__l = NULL;

    CHECK_OBJECT( (PyObject *)var_arguments );
    Py_DECREF( var_arguments );
    var_arguments = NULL;

    CHECK_OBJECT( (PyObject *)par_input_device_index );
    Py_DECREF( par_input_device_index );
    par_input_device_index = NULL;

    CHECK_OBJECT( (PyObject *)par_output );
    Py_DECREF( par_output );
    par_output = NULL;

    CHECK_OBJECT( (PyObject *)par_input );
    Py_DECREF( par_input );
    par_input = NULL;

    CHECK_OBJECT( (PyObject *)par_output_device_index );
    Py_DECREF( par_output_device_index );
    par_output_device_index = NULL;

    CHECK_OBJECT( (PyObject *)par_output_host_api_specific_stream_info );
    Py_DECREF( par_output_host_api_specific_stream_info );
    par_output_host_api_specific_stream_info = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_frames_per_buffer );
    Py_DECREF( par_frames_per_buffer );
    par_frames_per_buffer = NULL;

    CHECK_OBJECT( (PyObject *)par_PA_manager );
    Py_DECREF( par_PA_manager );
    par_PA_manager = NULL;

    CHECK_OBJECT( (PyObject *)par_stream_callback );
    Py_DECREF( par_stream_callback );
    par_stream_callback = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_input_host_api_specific_stream_info );
    Py_DECREF( par_input_host_api_specific_stream_info );
    par_input_host_api_specific_stream_info = NULL;

    CHECK_OBJECT( (PyObject *)par_channels );
    Py_DECREF( par_channels );
    par_channels = NULL;

    CHECK_OBJECT( (PyObject *)par_start );
    Py_DECREF( par_start );
    par_start = NULL;

    CHECK_OBJECT( (PyObject *)par_rate );
    Py_DECREF( par_rate );
    par_rate = NULL;

    Py_XDECREF( var__l );
    var__l = NULL;

    Py_XDECREF( var_arguments );
    var_arguments = NULL;

    CHECK_OBJECT( (PyObject *)par_input_device_index );
    Py_DECREF( par_input_device_index );
    par_input_device_index = NULL;

    CHECK_OBJECT( (PyObject *)par_output );
    Py_DECREF( par_output );
    par_output = NULL;

    CHECK_OBJECT( (PyObject *)par_input );
    Py_DECREF( par_input );
    par_input = NULL;

    CHECK_OBJECT( (PyObject *)par_output_device_index );
    Py_DECREF( par_output_device_index );
    par_output_device_index = NULL;

    CHECK_OBJECT( (PyObject *)par_output_host_api_specific_stream_info );
    Py_DECREF( par_output_host_api_specific_stream_info );
    par_output_host_api_specific_stream_info = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_5___init__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_6_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_953aa59d9e4d92863f887e41258a5635;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_953aa59d9e4d92863f887e41258a5635 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_953aa59d9e4d92863f887e41258a5635, codeobj_953aa59d9e4d92863f887e41258a5635, module_pyaudio, sizeof(void *) );
    frame_953aa59d9e4d92863f887e41258a5635 = cache_frame_953aa59d9e4d92863f887e41258a5635;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_953aa59d9e4d92863f887e41258a5635 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_953aa59d9e4d92863f887e41258a5635 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 452;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_close );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 452;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__stream );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 452;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_953aa59d9e4d92863f887e41258a5635->m_frame.f_lineno = 452;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 452;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = Py_False;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__is_running, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 454;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__parent );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 456;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_args_element_name_2 = par_self;
        frame_953aa59d9e4d92863f887e41258a5635->m_frame.f_lineno = 456;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__remove_stream, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 456;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_953aa59d9e4d92863f887e41258a5635 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_953aa59d9e4d92863f887e41258a5635 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_953aa59d9e4d92863f887e41258a5635, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_953aa59d9e4d92863f887e41258a5635->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_953aa59d9e4d92863f887e41258a5635, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_953aa59d9e4d92863f887e41258a5635,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_953aa59d9e4d92863f887e41258a5635 == cache_frame_953aa59d9e4d92863f887e41258a5635 )
    {
        Py_DECREF( frame_953aa59d9e4d92863f887e41258a5635 );
    }
    cache_frame_953aa59d9e4d92863f887e41258a5635 = NULL;

    assertFrameObject( frame_953aa59d9e4d92863f887e41258a5635 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_6_close );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_6_close );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_7_get_input_latency( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_1c4068e2c768b6a62135a397a18372a8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1c4068e2c768b6a62135a397a18372a8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1c4068e2c768b6a62135a397a18372a8, codeobj_1c4068e2c768b6a62135a397a18372a8, module_pyaudio, sizeof(void *) );
    frame_1c4068e2c768b6a62135a397a18372a8 = cache_frame_1c4068e2c768b6a62135a397a18372a8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1c4068e2c768b6a62135a397a18372a8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1c4068e2c768b6a62135a397a18372a8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__stream );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 470;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_inputLatency );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 470;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1c4068e2c768b6a62135a397a18372a8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1c4068e2c768b6a62135a397a18372a8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1c4068e2c768b6a62135a397a18372a8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1c4068e2c768b6a62135a397a18372a8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1c4068e2c768b6a62135a397a18372a8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1c4068e2c768b6a62135a397a18372a8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1c4068e2c768b6a62135a397a18372a8,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_1c4068e2c768b6a62135a397a18372a8 == cache_frame_1c4068e2c768b6a62135a397a18372a8 )
    {
        Py_DECREF( frame_1c4068e2c768b6a62135a397a18372a8 );
    }
    cache_frame_1c4068e2c768b6a62135a397a18372a8 = NULL;

    assertFrameObject( frame_1c4068e2c768b6a62135a397a18372a8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_7_get_input_latency );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_7_get_input_latency );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_8_get_output_latency( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_b7dc29159249071c0799e5089a91938f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b7dc29159249071c0799e5089a91938f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b7dc29159249071c0799e5089a91938f, codeobj_b7dc29159249071c0799e5089a91938f, module_pyaudio, sizeof(void *) );
    frame_b7dc29159249071c0799e5089a91938f = cache_frame_b7dc29159249071c0799e5089a91938f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b7dc29159249071c0799e5089a91938f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b7dc29159249071c0799e5089a91938f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__stream );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 479;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_outputLatency );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 479;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b7dc29159249071c0799e5089a91938f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b7dc29159249071c0799e5089a91938f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b7dc29159249071c0799e5089a91938f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b7dc29159249071c0799e5089a91938f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b7dc29159249071c0799e5089a91938f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b7dc29159249071c0799e5089a91938f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b7dc29159249071c0799e5089a91938f,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_b7dc29159249071c0799e5089a91938f == cache_frame_b7dc29159249071c0799e5089a91938f )
    {
        Py_DECREF( frame_b7dc29159249071c0799e5089a91938f );
    }
    cache_frame_b7dc29159249071c0799e5089a91938f = NULL;

    assertFrameObject( frame_b7dc29159249071c0799e5089a91938f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_8_get_output_latency );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_8_get_output_latency );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_9_get_time( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_74e4e9818184a4748010470834660827;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_74e4e9818184a4748010470834660827 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_74e4e9818184a4748010470834660827, codeobj_74e4e9818184a4748010470834660827, module_pyaudio, sizeof(void *) );
    frame_74e4e9818184a4748010470834660827 = cache_frame_74e4e9818184a4748010470834660827;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_74e4e9818184a4748010470834660827 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_74e4e9818184a4748010470834660827 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 488;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_stream_time );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 488;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__stream );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 488;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_74e4e9818184a4748010470834660827->m_frame.f_lineno = 488;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 488;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_74e4e9818184a4748010470834660827 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_74e4e9818184a4748010470834660827 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_74e4e9818184a4748010470834660827 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_74e4e9818184a4748010470834660827, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_74e4e9818184a4748010470834660827->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_74e4e9818184a4748010470834660827, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_74e4e9818184a4748010470834660827,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_74e4e9818184a4748010470834660827 == cache_frame_74e4e9818184a4748010470834660827 )
    {
        Py_DECREF( frame_74e4e9818184a4748010470834660827 );
    }
    cache_frame_74e4e9818184a4748010470834660827 = NULL;

    assertFrameObject( frame_74e4e9818184a4748010470834660827 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_9_get_time );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_9_get_time );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_10_get_cpu_load( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_e2e18255e144f1a704c0e6b11af84392;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e2e18255e144f1a704c0e6b11af84392 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e2e18255e144f1a704c0e6b11af84392, codeobj_e2e18255e144f1a704c0e6b11af84392, module_pyaudio, sizeof(void *) );
    frame_e2e18255e144f1a704c0e6b11af84392 = cache_frame_e2e18255e144f1a704c0e6b11af84392;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e2e18255e144f1a704c0e6b11af84392 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e2e18255e144f1a704c0e6b11af84392 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 498;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_stream_cpu_load );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 498;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__stream );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 498;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e2e18255e144f1a704c0e6b11af84392->m_frame.f_lineno = 498;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 498;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e2e18255e144f1a704c0e6b11af84392 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e2e18255e144f1a704c0e6b11af84392 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e2e18255e144f1a704c0e6b11af84392 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e2e18255e144f1a704c0e6b11af84392, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e2e18255e144f1a704c0e6b11af84392->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e2e18255e144f1a704c0e6b11af84392, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e2e18255e144f1a704c0e6b11af84392,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_e2e18255e144f1a704c0e6b11af84392 == cache_frame_e2e18255e144f1a704c0e6b11af84392 )
    {
        Py_DECREF( frame_e2e18255e144f1a704c0e6b11af84392 );
    }
    cache_frame_e2e18255e144f1a704c0e6b11af84392 = NULL;

    assertFrameObject( frame_e2e18255e144f1a704c0e6b11af84392 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_10_get_cpu_load );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_10_get_cpu_load );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_11_start_stream( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_dd23df56f726376a9d519c89a3cd030c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_dd23df56f726376a9d519c89a3cd030c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dd23df56f726376a9d519c89a3cd030c, codeobj_dd23df56f726376a9d519c89a3cd030c, module_pyaudio, sizeof(void *) );
    frame_dd23df56f726376a9d519c89a3cd030c = cache_frame_dd23df56f726376a9d519c89a3cd030c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dd23df56f726376a9d519c89a3cd030c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dd23df56f726376a9d519c89a3cd030c ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__is_running );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 508;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 508;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 511;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_start_stream );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 511;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__stream );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 511;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_dd23df56f726376a9d519c89a3cd030c->m_frame.f_lineno = 511;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 511;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = Py_True;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__is_running, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 512;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dd23df56f726376a9d519c89a3cd030c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dd23df56f726376a9d519c89a3cd030c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dd23df56f726376a9d519c89a3cd030c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dd23df56f726376a9d519c89a3cd030c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dd23df56f726376a9d519c89a3cd030c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dd23df56f726376a9d519c89a3cd030c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dd23df56f726376a9d519c89a3cd030c,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_dd23df56f726376a9d519c89a3cd030c == cache_frame_dd23df56f726376a9d519c89a3cd030c )
    {
        Py_DECREF( frame_dd23df56f726376a9d519c89a3cd030c );
    }
    cache_frame_dd23df56f726376a9d519c89a3cd030c = NULL;

    assertFrameObject( frame_dd23df56f726376a9d519c89a3cd030c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_11_start_stream );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_11_start_stream );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_12_stop_stream( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_279f6042f5129d350d38f9802ba829d3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_279f6042f5129d350d38f9802ba829d3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_279f6042f5129d350d38f9802ba829d3, codeobj_279f6042f5129d350d38f9802ba829d3, module_pyaudio, sizeof(void *) );
    frame_279f6042f5129d350d38f9802ba829d3 = cache_frame_279f6042f5129d350d38f9802ba829d3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_279f6042f5129d350d38f9802ba829d3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_279f6042f5129d350d38f9802ba829d3 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__is_running );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 521;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 521;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 524;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_stop_stream );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 524;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__stream );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 524;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_279f6042f5129d350d38f9802ba829d3->m_frame.f_lineno = 524;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 524;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = Py_False;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__is_running, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 525;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_279f6042f5129d350d38f9802ba829d3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_279f6042f5129d350d38f9802ba829d3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_279f6042f5129d350d38f9802ba829d3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_279f6042f5129d350d38f9802ba829d3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_279f6042f5129d350d38f9802ba829d3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_279f6042f5129d350d38f9802ba829d3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_279f6042f5129d350d38f9802ba829d3,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_279f6042f5129d350d38f9802ba829d3 == cache_frame_279f6042f5129d350d38f9802ba829d3 )
    {
        Py_DECREF( frame_279f6042f5129d350d38f9802ba829d3 );
    }
    cache_frame_279f6042f5129d350d38f9802ba829d3 = NULL;

    assertFrameObject( frame_279f6042f5129d350d38f9802ba829d3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_12_stop_stream );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_12_stop_stream );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_13_is_active( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_94a3b95f5f7e65cbdd0f8e58e03a00eb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_94a3b95f5f7e65cbdd0f8e58e03a00eb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_94a3b95f5f7e65cbdd0f8e58e03a00eb, codeobj_94a3b95f5f7e65cbdd0f8e58e03a00eb, module_pyaudio, sizeof(void *) );
    frame_94a3b95f5f7e65cbdd0f8e58e03a00eb = cache_frame_94a3b95f5f7e65cbdd0f8e58e03a00eb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_94a3b95f5f7e65cbdd0f8e58e03a00eb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_94a3b95f5f7e65cbdd0f8e58e03a00eb ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 534;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_stream_active );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 534;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__stream );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 534;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_94a3b95f5f7e65cbdd0f8e58e03a00eb->m_frame.f_lineno = 534;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 534;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_94a3b95f5f7e65cbdd0f8e58e03a00eb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_94a3b95f5f7e65cbdd0f8e58e03a00eb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_94a3b95f5f7e65cbdd0f8e58e03a00eb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_94a3b95f5f7e65cbdd0f8e58e03a00eb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_94a3b95f5f7e65cbdd0f8e58e03a00eb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_94a3b95f5f7e65cbdd0f8e58e03a00eb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_94a3b95f5f7e65cbdd0f8e58e03a00eb,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_94a3b95f5f7e65cbdd0f8e58e03a00eb == cache_frame_94a3b95f5f7e65cbdd0f8e58e03a00eb )
    {
        Py_DECREF( frame_94a3b95f5f7e65cbdd0f8e58e03a00eb );
    }
    cache_frame_94a3b95f5f7e65cbdd0f8e58e03a00eb = NULL;

    assertFrameObject( frame_94a3b95f5f7e65cbdd0f8e58e03a00eb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_13_is_active );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_13_is_active );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_14_is_stopped( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_8485d31c0061b439fe9eb46a66aae56e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8485d31c0061b439fe9eb46a66aae56e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8485d31c0061b439fe9eb46a66aae56e, codeobj_8485d31c0061b439fe9eb46a66aae56e, module_pyaudio, sizeof(void *) );
    frame_8485d31c0061b439fe9eb46a66aae56e = cache_frame_8485d31c0061b439fe9eb46a66aae56e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8485d31c0061b439fe9eb46a66aae56e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8485d31c0061b439fe9eb46a66aae56e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 543;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_stream_stopped );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 543;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__stream );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 543;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_8485d31c0061b439fe9eb46a66aae56e->m_frame.f_lineno = 543;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 543;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8485d31c0061b439fe9eb46a66aae56e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8485d31c0061b439fe9eb46a66aae56e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8485d31c0061b439fe9eb46a66aae56e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8485d31c0061b439fe9eb46a66aae56e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8485d31c0061b439fe9eb46a66aae56e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8485d31c0061b439fe9eb46a66aae56e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8485d31c0061b439fe9eb46a66aae56e,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_8485d31c0061b439fe9eb46a66aae56e == cache_frame_8485d31c0061b439fe9eb46a66aae56e )
    {
        Py_DECREF( frame_8485d31c0061b439fe9eb46a66aae56e );
    }
    cache_frame_8485d31c0061b439fe9eb46a66aae56e = NULL;

    assertFrameObject( frame_8485d31c0061b439fe9eb46a66aae56e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_14_is_stopped );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_14_is_stopped );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_15_write( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_frames = python_pars[ 1 ];
    PyObject *par_num_frames = python_pars[ 2 ];
    PyObject *par_exception_on_underflow = python_pars[ 3 ];
    PyObject *var_width = NULL;
    struct Nuitka_FrameObject *frame_281992c275f8403feab6be6b094885ce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_281992c275f8403feab6be6b094885ce = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_281992c275f8403feab6be6b094885ce, codeobj_281992c275f8403feab6be6b094885ce, module_pyaudio, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_281992c275f8403feab6be6b094885ce = cache_frame_281992c275f8403feab6be6b094885ce;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_281992c275f8403feab6be6b094885ce );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_281992c275f8403feab6be6b094885ce ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__is_output );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 575;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 575;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_make_exception_arg_2;
            PyObject *tmp_mvar_value_1;
            tmp_make_exception_arg_1 = const_str_digest_b740fb1ceba603bd0761329c6236770d;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paCanNotWriteToAnInputOnlyStream );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_paCanNotWriteToAnInputOnlyStream );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "paCanNotWriteToAnInputOnlyStream" );
                exception_tb = NULL;

                exception_lineno = 577;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_make_exception_arg_2 = tmp_mvar_value_1;
            frame_281992c275f8403feab6be6b094885ce->m_frame.f_lineno = 576;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1, tmp_make_exception_arg_2 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2( PyExc_IOError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 576;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_num_frames );
        tmp_compexpr_left_1 = par_num_frames;
        tmp_compexpr_right_1 = Py_None;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 579;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_get_sample_size );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_sample_size );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "get_sample_size" );
                exception_tb = NULL;

                exception_lineno = 581;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__format );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 581;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            frame_281992c275f8403feab6be6b094885ce->m_frame.f_lineno = 581;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 581;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_width == NULL );
            var_width = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_int_arg_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_len_arg_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( par_frames );
            tmp_len_arg_1 = par_frames;
            tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 582;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__channels );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 582;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_width );
            tmp_right_name_2 = var_width;
            tmp_right_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 582;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_int_arg_1 = BINARY_OPERATION_DIV( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_int_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 582;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = PyNumber_Int( tmp_int_arg_1 );
            Py_DECREF( tmp_int_arg_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 582;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_num_frames;
                assert( old != NULL );
                par_num_frames = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 585;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_write_stream );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 585;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__stream );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 585;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_frames );
        tmp_args_element_name_3 = par_frames;
        CHECK_OBJECT( par_num_frames );
        tmp_args_element_name_4 = par_num_frames;
        CHECK_OBJECT( par_exception_on_underflow );
        tmp_args_element_name_5 = par_exception_on_underflow;
        frame_281992c275f8403feab6be6b094885ce->m_frame.f_lineno = 585;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 585;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_281992c275f8403feab6be6b094885ce );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_281992c275f8403feab6be6b094885ce );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_281992c275f8403feab6be6b094885ce, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_281992c275f8403feab6be6b094885ce->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_281992c275f8403feab6be6b094885ce, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_281992c275f8403feab6be6b094885ce,
        type_description_1,
        par_self,
        par_frames,
        par_num_frames,
        par_exception_on_underflow,
        var_width
    );


    // Release cached frame.
    if ( frame_281992c275f8403feab6be6b094885ce == cache_frame_281992c275f8403feab6be6b094885ce )
    {
        Py_DECREF( frame_281992c275f8403feab6be6b094885ce );
    }
    cache_frame_281992c275f8403feab6be6b094885ce = NULL;

    assertFrameObject( frame_281992c275f8403feab6be6b094885ce );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_15_write );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_frames );
    Py_DECREF( par_frames );
    par_frames = NULL;

    Py_XDECREF( var_width );
    var_width = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_exception_on_underflow );
    Py_DECREF( par_exception_on_underflow );
    par_exception_on_underflow = NULL;

    CHECK_OBJECT( (PyObject *)par_num_frames );
    Py_DECREF( par_num_frames );
    par_num_frames = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_frames );
    Py_DECREF( par_frames );
    par_frames = NULL;

    Py_XDECREF( var_width );
    var_width = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_exception_on_underflow );
    Py_DECREF( par_exception_on_underflow );
    par_exception_on_underflow = NULL;

    Py_XDECREF( par_num_frames );
    par_num_frames = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_15_write );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_16_read( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_num_frames = python_pars[ 1 ];
    PyObject *par_exception_on_overflow = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_bfac27ea75f03229911c3760d682850d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bfac27ea75f03229911c3760d682850d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bfac27ea75f03229911c3760d682850d, codeobj_bfac27ea75f03229911c3760d682850d, module_pyaudio, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bfac27ea75f03229911c3760d682850d = cache_frame_bfac27ea75f03229911c3760d682850d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bfac27ea75f03229911c3760d682850d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bfac27ea75f03229911c3760d682850d ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__is_input );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 604;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 604;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_make_exception_arg_2;
            PyObject *tmp_mvar_value_1;
            tmp_make_exception_arg_1 = const_str_digest_b4db31866ed569214be8f56822bbe14e;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paCanNotReadFromAnOutputOnlyStream );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_paCanNotReadFromAnOutputOnlyStream );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "paCanNotReadFromAnOutputOnlyStream" );
                exception_tb = NULL;

                exception_lineno = 606;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_make_exception_arg_2 = tmp_mvar_value_1;
            frame_bfac27ea75f03229911c3760d682850d->m_frame.f_lineno = 605;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1, tmp_make_exception_arg_2 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2( PyExc_IOError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 605;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 608;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_read_stream );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 608;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__stream );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 608;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_num_frames );
        tmp_args_element_name_2 = par_num_frames;
        CHECK_OBJECT( par_exception_on_overflow );
        tmp_args_element_name_3 = par_exception_on_overflow;
        frame_bfac27ea75f03229911c3760d682850d->m_frame.f_lineno = 608;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 608;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bfac27ea75f03229911c3760d682850d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bfac27ea75f03229911c3760d682850d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bfac27ea75f03229911c3760d682850d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bfac27ea75f03229911c3760d682850d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bfac27ea75f03229911c3760d682850d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bfac27ea75f03229911c3760d682850d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bfac27ea75f03229911c3760d682850d,
        type_description_1,
        par_self,
        par_num_frames,
        par_exception_on_overflow
    );


    // Release cached frame.
    if ( frame_bfac27ea75f03229911c3760d682850d == cache_frame_bfac27ea75f03229911c3760d682850d )
    {
        Py_DECREF( frame_bfac27ea75f03229911c3760d682850d );
    }
    cache_frame_bfac27ea75f03229911c3760d682850d = NULL;

    assertFrameObject( frame_bfac27ea75f03229911c3760d682850d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_16_read );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_exception_on_overflow );
    Py_DECREF( par_exception_on_overflow );
    par_exception_on_overflow = NULL;

    CHECK_OBJECT( (PyObject *)par_num_frames );
    Py_DECREF( par_num_frames );
    par_num_frames = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_exception_on_overflow );
    Py_DECREF( par_exception_on_overflow );
    par_exception_on_overflow = NULL;

    CHECK_OBJECT( (PyObject *)par_num_frames );
    Py_DECREF( par_num_frames );
    par_num_frames = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_16_read );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_17_get_read_available( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_3f8d16c6a5ac9b31ca30f3bdfb39b9c2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3f8d16c6a5ac9b31ca30f3bdfb39b9c2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3f8d16c6a5ac9b31ca30f3bdfb39b9c2, codeobj_3f8d16c6a5ac9b31ca30f3bdfb39b9c2, module_pyaudio, sizeof(void *) );
    frame_3f8d16c6a5ac9b31ca30f3bdfb39b9c2 = cache_frame_3f8d16c6a5ac9b31ca30f3bdfb39b9c2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3f8d16c6a5ac9b31ca30f3bdfb39b9c2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3f8d16c6a5ac9b31ca30f3bdfb39b9c2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 617;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_stream_read_available );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 617;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__stream );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 617;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_3f8d16c6a5ac9b31ca30f3bdfb39b9c2->m_frame.f_lineno = 617;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 617;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3f8d16c6a5ac9b31ca30f3bdfb39b9c2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3f8d16c6a5ac9b31ca30f3bdfb39b9c2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3f8d16c6a5ac9b31ca30f3bdfb39b9c2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3f8d16c6a5ac9b31ca30f3bdfb39b9c2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3f8d16c6a5ac9b31ca30f3bdfb39b9c2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3f8d16c6a5ac9b31ca30f3bdfb39b9c2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3f8d16c6a5ac9b31ca30f3bdfb39b9c2,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_3f8d16c6a5ac9b31ca30f3bdfb39b9c2 == cache_frame_3f8d16c6a5ac9b31ca30f3bdfb39b9c2 )
    {
        Py_DECREF( frame_3f8d16c6a5ac9b31ca30f3bdfb39b9c2 );
    }
    cache_frame_3f8d16c6a5ac9b31ca30f3bdfb39b9c2 = NULL;

    assertFrameObject( frame_3f8d16c6a5ac9b31ca30f3bdfb39b9c2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_17_get_read_available );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_17_get_read_available );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_18_get_write_available( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_22e6fd6808e1438310a36f1c4ff83f47;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_22e6fd6808e1438310a36f1c4ff83f47 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_22e6fd6808e1438310a36f1c4ff83f47, codeobj_22e6fd6808e1438310a36f1c4ff83f47, module_pyaudio, sizeof(void *) );
    frame_22e6fd6808e1438310a36f1c4ff83f47 = cache_frame_22e6fd6808e1438310a36f1c4ff83f47;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_22e6fd6808e1438310a36f1c4ff83f47 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_22e6fd6808e1438310a36f1c4ff83f47 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 629;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_stream_write_available );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 629;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__stream );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 629;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_22e6fd6808e1438310a36f1c4ff83f47->m_frame.f_lineno = 629;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 629;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_22e6fd6808e1438310a36f1c4ff83f47 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_22e6fd6808e1438310a36f1c4ff83f47 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_22e6fd6808e1438310a36f1c4ff83f47 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_22e6fd6808e1438310a36f1c4ff83f47, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_22e6fd6808e1438310a36f1c4ff83f47->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_22e6fd6808e1438310a36f1c4ff83f47, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_22e6fd6808e1438310a36f1c4ff83f47,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_22e6fd6808e1438310a36f1c4ff83f47 == cache_frame_22e6fd6808e1438310a36f1c4ff83f47 )
    {
        Py_DECREF( frame_22e6fd6808e1438310a36f1c4ff83f47 );
    }
    cache_frame_22e6fd6808e1438310a36f1c4ff83f47 = NULL;

    assertFrameObject( frame_22e6fd6808e1438310a36f1c4ff83f47 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_18_get_write_available );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_18_get_write_available );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_19___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_15948b3f41e1daf89b6e58f6ab6d488c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_15948b3f41e1daf89b6e58f6ab6d488c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_15948b3f41e1daf89b6e58f6ab6d488c, codeobj_15948b3f41e1daf89b6e58f6ab6d488c, module_pyaudio, sizeof(void *) );
    frame_15948b3f41e1daf89b6e58f6ab6d488c = cache_frame_15948b3f41e1daf89b6e58f6ab6d488c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_15948b3f41e1daf89b6e58f6ab6d488c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_15948b3f41e1daf89b6e58f6ab6d488c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 677;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_15948b3f41e1daf89b6e58f6ab6d488c->m_frame.f_lineno = 677;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_initialize );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 677;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = PySet_New( NULL );
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__streams, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 678;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_15948b3f41e1daf89b6e58f6ab6d488c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_15948b3f41e1daf89b6e58f6ab6d488c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_15948b3f41e1daf89b6e58f6ab6d488c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_15948b3f41e1daf89b6e58f6ab6d488c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_15948b3f41e1daf89b6e58f6ab6d488c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_15948b3f41e1daf89b6e58f6ab6d488c,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_15948b3f41e1daf89b6e58f6ab6d488c == cache_frame_15948b3f41e1daf89b6e58f6ab6d488c )
    {
        Py_DECREF( frame_15948b3f41e1daf89b6e58f6ab6d488c );
    }
    cache_frame_15948b3f41e1daf89b6e58f6ab6d488c = NULL;

    assertFrameObject( frame_15948b3f41e1daf89b6e58f6ab6d488c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_19___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_19___init__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_20_terminate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_stream = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_f593ab6d3ed743788ae337910aece584;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_f593ab6d3ed743788ae337910aece584 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f593ab6d3ed743788ae337910aece584, codeobj_f593ab6d3ed743788ae337910aece584, module_pyaudio, sizeof(void *)+sizeof(void *) );
    frame_f593ab6d3ed743788ae337910aece584 = cache_frame_f593ab6d3ed743788ae337910aece584;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f593ab6d3ed743788ae337910aece584 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f593ab6d3ed743788ae337910aece584 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__streams );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 688;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_f593ab6d3ed743788ae337910aece584->m_frame.f_lineno = 688;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 688;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 688;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oo";
                exception_lineno = 688;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_stream;
            var_stream = tmp_assign_source_3;
            Py_INCREF( var_stream );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( var_stream );
        tmp_called_instance_2 = var_stream;
        frame_f593ab6d3ed743788ae337910aece584->m_frame.f_lineno = 689;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_close );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 689;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 688;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = PySet_New( NULL );
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__streams, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 691;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 693;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_1;
        frame_f593ab6d3ed743788ae337910aece584->m_frame.f_lineno = 693;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_terminate );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 693;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f593ab6d3ed743788ae337910aece584 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f593ab6d3ed743788ae337910aece584 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f593ab6d3ed743788ae337910aece584, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f593ab6d3ed743788ae337910aece584->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f593ab6d3ed743788ae337910aece584, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f593ab6d3ed743788ae337910aece584,
        type_description_1,
        par_self,
        var_stream
    );


    // Release cached frame.
    if ( frame_f593ab6d3ed743788ae337910aece584 == cache_frame_f593ab6d3ed743788ae337910aece584 )
    {
        Py_DECREF( frame_f593ab6d3ed743788ae337910aece584 );
    }
    cache_frame_f593ab6d3ed743788ae337910aece584 = NULL;

    assertFrameObject( frame_f593ab6d3ed743788ae337910aece584 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_20_terminate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_stream );
    var_stream = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_stream );
    var_stream = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_20_terminate );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_21_get_sample_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_format = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_3b119aee9d5433efc2171659690249e4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3b119aee9d5433efc2171659690249e4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3b119aee9d5433efc2171659690249e4, codeobj_3b119aee9d5433efc2171659690249e4, module_pyaudio, sizeof(void *)+sizeof(void *) );
    frame_3b119aee9d5433efc2171659690249e4 = cache_frame_3b119aee9d5433efc2171659690249e4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3b119aee9d5433efc2171659690249e4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3b119aee9d5433efc2171659690249e4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 710;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_format );
        tmp_args_element_name_1 = par_format;
        frame_3b119aee9d5433efc2171659690249e4->m_frame.f_lineno = 710;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get_sample_size, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 710;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b119aee9d5433efc2171659690249e4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b119aee9d5433efc2171659690249e4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b119aee9d5433efc2171659690249e4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3b119aee9d5433efc2171659690249e4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3b119aee9d5433efc2171659690249e4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3b119aee9d5433efc2171659690249e4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3b119aee9d5433efc2171659690249e4,
        type_description_1,
        par_self,
        par_format
    );


    // Release cached frame.
    if ( frame_3b119aee9d5433efc2171659690249e4 == cache_frame_3b119aee9d5433efc2171659690249e4 )
    {
        Py_DECREF( frame_3b119aee9d5433efc2171659690249e4 );
    }
    cache_frame_3b119aee9d5433efc2171659690249e4 = NULL;

    assertFrameObject( frame_3b119aee9d5433efc2171659690249e4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_21_get_sample_size );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_21_get_sample_size );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_22_get_format_from_width( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_width = python_pars[ 1 ];
    PyObject *par_unsigned = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_b9b38578cad24900f9b0e7ff96adf071;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b9b38578cad24900f9b0e7ff96adf071 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b9b38578cad24900f9b0e7ff96adf071, codeobj_b9b38578cad24900f9b0e7ff96adf071, module_pyaudio, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b9b38578cad24900f9b0e7ff96adf071 = cache_frame_b9b38578cad24900f9b0e7ff96adf071;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b9b38578cad24900f9b0e7ff96adf071 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b9b38578cad24900f9b0e7ff96adf071 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_width );
        tmp_compexpr_left_1 = par_width;
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 723;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            nuitka_bool tmp_condition_result_2;
            int tmp_truth_name_1;
            CHECK_OBJECT( par_unsigned );
            tmp_truth_name_1 = CHECK_IF_TRUE( par_unsigned );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 724;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            {
                PyObject *tmp_mvar_value_1;
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paUInt8 );

                if (unlikely( tmp_mvar_value_1 == NULL ))
                {
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_paUInt8 );
                }

                if ( tmp_mvar_value_1 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "paUInt8" );
                    exception_tb = NULL;

                    exception_lineno = 725;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }

                tmp_return_value = tmp_mvar_value_1;
                Py_INCREF( tmp_return_value );
                goto frame_return_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_mvar_value_2;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paInt8 );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_paInt8 );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "paInt8" );
                    exception_tb = NULL;

                    exception_lineno = 727;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }

                tmp_return_value = tmp_mvar_value_2;
                Py_INCREF( tmp_return_value );
                goto frame_return_exit_1;
            }
            branch_end_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( par_width );
            tmp_compexpr_left_2 = par_width;
            tmp_compexpr_right_2 = const_int_pos_2;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 728;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_3;
            }
            else
            {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_mvar_value_3;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paInt16 );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_paInt16 );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "paInt16" );
                    exception_tb = NULL;

                    exception_lineno = 729;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }

                tmp_return_value = tmp_mvar_value_3;
                Py_INCREF( tmp_return_value );
                goto frame_return_exit_1;
            }
            goto branch_end_3;
            branch_no_3:;
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                CHECK_OBJECT( par_width );
                tmp_compexpr_left_3 = par_width;
                tmp_compexpr_right_3 = const_int_pos_3;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 730;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_4;
                }
                else
                {
                    goto branch_no_4;
                }
                branch_yes_4:;
                {
                    PyObject *tmp_mvar_value_4;
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paInt24 );

                    if (unlikely( tmp_mvar_value_4 == NULL ))
                    {
                        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_paInt24 );
                    }

                    if ( tmp_mvar_value_4 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "paInt24" );
                        exception_tb = NULL;

                        exception_lineno = 731;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_return_value = tmp_mvar_value_4;
                    Py_INCREF( tmp_return_value );
                    goto frame_return_exit_1;
                }
                goto branch_end_4;
                branch_no_4:;
                {
                    nuitka_bool tmp_condition_result_5;
                    PyObject *tmp_compexpr_left_4;
                    PyObject *tmp_compexpr_right_4;
                    CHECK_OBJECT( par_width );
                    tmp_compexpr_left_4 = par_width;
                    tmp_compexpr_right_4 = const_int_pos_4;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 732;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_5;
                    }
                    else
                    {
                        goto branch_no_5;
                    }
                    branch_yes_5:;
                    {
                        PyObject *tmp_mvar_value_5;
                        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paFloat32 );

                        if (unlikely( tmp_mvar_value_5 == NULL ))
                        {
                            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_paFloat32 );
                        }

                        if ( tmp_mvar_value_5 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyString_FromFormat( "global name '%s' is not defined", "paFloat32" );
                            exception_tb = NULL;

                            exception_lineno = 733;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_return_value = tmp_mvar_value_5;
                        Py_INCREF( tmp_return_value );
                        goto frame_return_exit_1;
                    }
                    goto branch_end_5;
                    branch_no_5:;
                    {
                        PyObject *tmp_raise_type_1;
                        PyObject *tmp_make_exception_arg_1;
                        PyObject *tmp_left_name_1;
                        PyObject *tmp_right_name_1;
                        tmp_left_name_1 = const_str_digest_47c76d88a245478871314f2666e77135;
                        CHECK_OBJECT( par_width );
                        tmp_right_name_1 = par_width;
                        tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                        if ( tmp_make_exception_arg_1 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 735;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        frame_b9b38578cad24900f9b0e7ff96adf071->m_frame.f_lineno = 735;
                        {
                            PyObject *call_args[] = { tmp_make_exception_arg_1 };
                            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                        }

                        Py_DECREF( tmp_make_exception_arg_1 );
                        assert( !(tmp_raise_type_1 == NULL) );
                        exception_type = tmp_raise_type_1;
                        exception_lineno = 735;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    branch_end_5:;
                }
                branch_end_4:;
            }
            branch_end_3:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b9b38578cad24900f9b0e7ff96adf071 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b9b38578cad24900f9b0e7ff96adf071 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b9b38578cad24900f9b0e7ff96adf071 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b9b38578cad24900f9b0e7ff96adf071, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b9b38578cad24900f9b0e7ff96adf071->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b9b38578cad24900f9b0e7ff96adf071, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b9b38578cad24900f9b0e7ff96adf071,
        type_description_1,
        par_self,
        par_width,
        par_unsigned
    );


    // Release cached frame.
    if ( frame_b9b38578cad24900f9b0e7ff96adf071 == cache_frame_b9b38578cad24900f9b0e7ff96adf071 )
    {
        Py_DECREF( frame_b9b38578cad24900f9b0e7ff96adf071 );
    }
    cache_frame_b9b38578cad24900f9b0e7ff96adf071 = NULL;

    assertFrameObject( frame_b9b38578cad24900f9b0e7ff96adf071 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_22_get_format_from_width );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_width );
    Py_DECREF( par_width );
    par_width = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_unsigned );
    Py_DECREF( par_unsigned );
    par_unsigned = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_width );
    Py_DECREF( par_width );
    par_width = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_unsigned );
    Py_DECREF( par_unsigned );
    par_unsigned = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_22_get_format_from_width );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_23_open( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *var_stream = NULL;
    struct Nuitka_FrameObject *frame_80df74404a2aa065f662085e0361c344;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_80df74404a2aa065f662085e0361c344 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_80df74404a2aa065f662085e0361c344, codeobj_80df74404a2aa065f662085e0361c344, module_pyaudio, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_80df74404a2aa065f662085e0361c344 = cache_frame_80df74404a2aa065f662085e0361c344;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_80df74404a2aa065f662085e0361c344 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_80df74404a2aa065f662085e0361c344 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_Stream );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Stream );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "Stream" );
            exception_tb = NULL;

            exception_lineno = 750;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_tuple_element_1 = par_self;
        tmp_dircall_arg2_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_args );
        tmp_dircall_arg3_1 = par_args;
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg3_1 );
        Py_INCREF( tmp_dircall_arg4_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_assign_source_1 = impl___internal__$$$function_9_complex_call_helper_pos_star_list_star_dict( dir_call_args );
        }
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 750;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_stream == NULL );
        var_stream = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__streams );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 751;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_stream );
        tmp_args_element_name_1 = var_stream;
        frame_80df74404a2aa065f662085e0361c344->m_frame.f_lineno = 751;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_add, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 751;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_80df74404a2aa065f662085e0361c344 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_80df74404a2aa065f662085e0361c344 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_80df74404a2aa065f662085e0361c344, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_80df74404a2aa065f662085e0361c344->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_80df74404a2aa065f662085e0361c344, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_80df74404a2aa065f662085e0361c344,
        type_description_1,
        par_self,
        par_args,
        par_kwargs,
        var_stream
    );


    // Release cached frame.
    if ( frame_80df74404a2aa065f662085e0361c344 == cache_frame_80df74404a2aa065f662085e0361c344 )
    {
        Py_DECREF( frame_80df74404a2aa065f662085e0361c344 );
    }
    cache_frame_80df74404a2aa065f662085e0361c344 = NULL;

    assertFrameObject( frame_80df74404a2aa065f662085e0361c344 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_stream );
    tmp_return_value = var_stream;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_23_open );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)var_stream );
    Py_DECREF( var_stream );
    var_stream = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_stream );
    var_stream = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_23_open );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_24_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_stream = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_92282bbbd3e740d9d5ee6f3f84e9a786;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_92282bbbd3e740d9d5ee6f3f84e9a786 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_92282bbbd3e740d9d5ee6f3f84e9a786, codeobj_92282bbbd3e740d9d5ee6f3f84e9a786, module_pyaudio, sizeof(void *)+sizeof(void *) );
    frame_92282bbbd3e740d9d5ee6f3f84e9a786 = cache_frame_92282bbbd3e740d9d5ee6f3f84e9a786;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_92282bbbd3e740d9d5ee6f3f84e9a786 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_92282bbbd3e740d9d5ee6f3f84e9a786 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_stream );
        tmp_compexpr_left_1 = par_stream;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__streams );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 762;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 762;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_str_arg_1;
            tmp_left_name_1 = const_str_digest_d2483cc76376f751cbc20663988dfae6;
            CHECK_OBJECT( par_stream );
            tmp_str_arg_1 = par_stream;
            tmp_right_name_1 = PyObject_Str( tmp_str_arg_1 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 763;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 763;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_92282bbbd3e740d9d5ee6f3f84e9a786->m_frame.f_lineno = 763;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 763;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_stream );
        tmp_called_instance_1 = par_stream;
        frame_92282bbbd3e740d9d5ee6f3f84e9a786->m_frame.f_lineno = 765;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_close );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 765;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_92282bbbd3e740d9d5ee6f3f84e9a786 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_92282bbbd3e740d9d5ee6f3f84e9a786 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_92282bbbd3e740d9d5ee6f3f84e9a786, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_92282bbbd3e740d9d5ee6f3f84e9a786->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_92282bbbd3e740d9d5ee6f3f84e9a786, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_92282bbbd3e740d9d5ee6f3f84e9a786,
        type_description_1,
        par_self,
        par_stream
    );


    // Release cached frame.
    if ( frame_92282bbbd3e740d9d5ee6f3f84e9a786 == cache_frame_92282bbbd3e740d9d5ee6f3f84e9a786 )
    {
        Py_DECREF( frame_92282bbbd3e740d9d5ee6f3f84e9a786 );
    }
    cache_frame_92282bbbd3e740d9d5ee6f3f84e9a786 = NULL;

    assertFrameObject( frame_92282bbbd3e740d9d5ee6f3f84e9a786 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_24_close );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_24_close );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_25__remove_stream( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_stream = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_8639ce5e58a75ca00c3515a68e17af1d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_8639ce5e58a75ca00c3515a68e17af1d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8639ce5e58a75ca00c3515a68e17af1d, codeobj_8639ce5e58a75ca00c3515a68e17af1d, module_pyaudio, sizeof(void *)+sizeof(void *) );
    frame_8639ce5e58a75ca00c3515a68e17af1d = cache_frame_8639ce5e58a75ca00c3515a68e17af1d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8639ce5e58a75ca00c3515a68e17af1d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8639ce5e58a75ca00c3515a68e17af1d ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_stream );
        tmp_compexpr_left_1 = par_stream;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__streams );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 774;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 774;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__streams );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 775;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_stream );
            tmp_args_element_name_1 = par_stream;
            frame_8639ce5e58a75ca00c3515a68e17af1d->m_frame.f_lineno = 775;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_remove, call_args );
            }

            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 775;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8639ce5e58a75ca00c3515a68e17af1d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8639ce5e58a75ca00c3515a68e17af1d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8639ce5e58a75ca00c3515a68e17af1d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8639ce5e58a75ca00c3515a68e17af1d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8639ce5e58a75ca00c3515a68e17af1d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8639ce5e58a75ca00c3515a68e17af1d,
        type_description_1,
        par_self,
        par_stream
    );


    // Release cached frame.
    if ( frame_8639ce5e58a75ca00c3515a68e17af1d == cache_frame_8639ce5e58a75ca00c3515a68e17af1d )
    {
        Py_DECREF( frame_8639ce5e58a75ca00c3515a68e17af1d );
    }
    cache_frame_8639ce5e58a75ca00c3515a68e17af1d = NULL;

    assertFrameObject( frame_8639ce5e58a75ca00c3515a68e17af1d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_25__remove_stream );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_25__remove_stream );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_26_get_host_api_count( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_1d6777ee32244e5d17839d8281e6e027;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1d6777ee32244e5d17839d8281e6e027 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1d6777ee32244e5d17839d8281e6e027, codeobj_1d6777ee32244e5d17839d8281e6e027, module_pyaudio, sizeof(void *) );
    frame_1d6777ee32244e5d17839d8281e6e027 = cache_frame_1d6777ee32244e5d17839d8281e6e027;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1d6777ee32244e5d17839d8281e6e027 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1d6777ee32244e5d17839d8281e6e027 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 789;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_1d6777ee32244e5d17839d8281e6e027->m_frame.f_lineno = 789;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_host_api_count );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 789;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1d6777ee32244e5d17839d8281e6e027 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1d6777ee32244e5d17839d8281e6e027 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1d6777ee32244e5d17839d8281e6e027 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1d6777ee32244e5d17839d8281e6e027, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1d6777ee32244e5d17839d8281e6e027->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1d6777ee32244e5d17839d8281e6e027, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1d6777ee32244e5d17839d8281e6e027,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_1d6777ee32244e5d17839d8281e6e027 == cache_frame_1d6777ee32244e5d17839d8281e6e027 )
    {
        Py_DECREF( frame_1d6777ee32244e5d17839d8281e6e027 );
    }
    cache_frame_1d6777ee32244e5d17839d8281e6e027 = NULL;

    assertFrameObject( frame_1d6777ee32244e5d17839d8281e6e027 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_26_get_host_api_count );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_26_get_host_api_count );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_27_get_default_host_api_info( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_defaultHostApiIndex = NULL;
    struct Nuitka_FrameObject *frame_fede4e7eb9d64c1aad1b540dbcc2d97e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_fede4e7eb9d64c1aad1b540dbcc2d97e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fede4e7eb9d64c1aad1b540dbcc2d97e, codeobj_fede4e7eb9d64c1aad1b540dbcc2d97e, module_pyaudio, sizeof(void *)+sizeof(void *) );
    frame_fede4e7eb9d64c1aad1b540dbcc2d97e = cache_frame_fede4e7eb9d64c1aad1b540dbcc2d97e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fede4e7eb9d64c1aad1b540dbcc2d97e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fede4e7eb9d64c1aad1b540dbcc2d97e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 801;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_fede4e7eb9d64c1aad1b540dbcc2d97e->m_frame.f_lineno = 801;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_default_host_api );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 801;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_defaultHostApiIndex == NULL );
        var_defaultHostApiIndex = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT( var_defaultHostApiIndex );
        tmp_args_element_name_1 = var_defaultHostApiIndex;
        frame_fede4e7eb9d64c1aad1b540dbcc2d97e->m_frame.f_lineno = 802;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get_host_api_info_by_index, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 802;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fede4e7eb9d64c1aad1b540dbcc2d97e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fede4e7eb9d64c1aad1b540dbcc2d97e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fede4e7eb9d64c1aad1b540dbcc2d97e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fede4e7eb9d64c1aad1b540dbcc2d97e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fede4e7eb9d64c1aad1b540dbcc2d97e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fede4e7eb9d64c1aad1b540dbcc2d97e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fede4e7eb9d64c1aad1b540dbcc2d97e,
        type_description_1,
        par_self,
        var_defaultHostApiIndex
    );


    // Release cached frame.
    if ( frame_fede4e7eb9d64c1aad1b540dbcc2d97e == cache_frame_fede4e7eb9d64c1aad1b540dbcc2d97e )
    {
        Py_DECREF( frame_fede4e7eb9d64c1aad1b540dbcc2d97e );
    }
    cache_frame_fede4e7eb9d64c1aad1b540dbcc2d97e = NULL;

    assertFrameObject( frame_fede4e7eb9d64c1aad1b540dbcc2d97e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_27_get_default_host_api_info );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_defaultHostApiIndex );
    Py_DECREF( var_defaultHostApiIndex );
    var_defaultHostApiIndex = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_defaultHostApiIndex );
    var_defaultHostApiIndex = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_27_get_default_host_api_info );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_28_get_host_api_info_by_type( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_host_api_type = python_pars[ 1 ];
    PyObject *var_index = NULL;
    struct Nuitka_FrameObject *frame_b68b9a58e8fa6577d93223c180b46d5e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b68b9a58e8fa6577d93223c180b46d5e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b68b9a58e8fa6577d93223c180b46d5e, codeobj_b68b9a58e8fa6577d93223c180b46d5e, module_pyaudio, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b68b9a58e8fa6577d93223c180b46d5e = cache_frame_b68b9a58e8fa6577d93223c180b46d5e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b68b9a58e8fa6577d93223c180b46d5e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b68b9a58e8fa6577d93223c180b46d5e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 816;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_host_api_type );
        tmp_args_element_name_1 = par_host_api_type;
        frame_b68b9a58e8fa6577d93223c180b46d5e->m_frame.f_lineno = 816;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_host_api_type_id_to_host_api_index, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 816;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_index == NULL );
        var_index = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT( var_index );
        tmp_args_element_name_2 = var_index;
        frame_b68b9a58e8fa6577d93223c180b46d5e->m_frame.f_lineno = 817;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get_host_api_info_by_index, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 817;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b68b9a58e8fa6577d93223c180b46d5e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b68b9a58e8fa6577d93223c180b46d5e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b68b9a58e8fa6577d93223c180b46d5e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b68b9a58e8fa6577d93223c180b46d5e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b68b9a58e8fa6577d93223c180b46d5e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b68b9a58e8fa6577d93223c180b46d5e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b68b9a58e8fa6577d93223c180b46d5e,
        type_description_1,
        par_self,
        par_host_api_type,
        var_index
    );


    // Release cached frame.
    if ( frame_b68b9a58e8fa6577d93223c180b46d5e == cache_frame_b68b9a58e8fa6577d93223c180b46d5e )
    {
        Py_DECREF( frame_b68b9a58e8fa6577d93223c180b46d5e );
    }
    cache_frame_b68b9a58e8fa6577d93223c180b46d5e = NULL;

    assertFrameObject( frame_b68b9a58e8fa6577d93223c180b46d5e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_28_get_host_api_info_by_type );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_index );
    Py_DECREF( var_index );
    var_index = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_host_api_type );
    Py_DECREF( par_host_api_type );
    par_host_api_type = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_index );
    var_index = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_host_api_type );
    Py_DECREF( par_host_api_type );
    par_host_api_type = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_28_get_host_api_info_by_type );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_29_get_host_api_info_by_index( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_host_api_index = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_2839d9a61054d166e97d16581c46a5c7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2839d9a61054d166e97d16581c46a5c7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2839d9a61054d166e97d16581c46a5c7, codeobj_2839d9a61054d166e97d16581c46a5c7, module_pyaudio, sizeof(void *)+sizeof(void *) );
    frame_2839d9a61054d166e97d16581c46a5c7 = cache_frame_2839d9a61054d166e97d16581c46a5c7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2839d9a61054d166e97d16581c46a5c7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2839d9a61054d166e97d16581c46a5c7 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__make_host_api_dictionary );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 831;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_host_api_index );
        tmp_args_element_name_1 = par_host_api_index;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 833;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_host_api_index );
        tmp_args_element_name_3 = par_host_api_index;
        frame_2839d9a61054d166e97d16581c46a5c7->m_frame.f_lineno = 833;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get_host_api_info, call_args );
        }

        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 833;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_2839d9a61054d166e97d16581c46a5c7->m_frame.f_lineno = 831;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 831;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2839d9a61054d166e97d16581c46a5c7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2839d9a61054d166e97d16581c46a5c7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2839d9a61054d166e97d16581c46a5c7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2839d9a61054d166e97d16581c46a5c7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2839d9a61054d166e97d16581c46a5c7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2839d9a61054d166e97d16581c46a5c7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2839d9a61054d166e97d16581c46a5c7,
        type_description_1,
        par_self,
        par_host_api_index
    );


    // Release cached frame.
    if ( frame_2839d9a61054d166e97d16581c46a5c7 == cache_frame_2839d9a61054d166e97d16581c46a5c7 )
    {
        Py_DECREF( frame_2839d9a61054d166e97d16581c46a5c7 );
    }
    cache_frame_2839d9a61054d166e97d16581c46a5c7 = NULL;

    assertFrameObject( frame_2839d9a61054d166e97d16581c46a5c7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_29_get_host_api_info_by_index );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_host_api_index );
    Py_DECREF( par_host_api_index );
    par_host_api_index = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_host_api_index );
    Py_DECREF( par_host_api_index );
    par_host_api_index = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_29_get_host_api_info_by_index );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_30_get_device_info_by_host_api_device_index( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_host_api_index = python_pars[ 1 ];
    PyObject *par_host_api_device_index = python_pars[ 2 ];
    PyObject *var_long_method_name = NULL;
    PyObject *var_device_index = NULL;
    struct Nuitka_FrameObject *frame_33de854a1972bb7b5db2a7211b9292d1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_33de854a1972bb7b5db2a7211b9292d1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_33de854a1972bb7b5db2a7211b9292d1, codeobj_33de854a1972bb7b5db2a7211b9292d1, module_pyaudio, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_33de854a1972bb7b5db2a7211b9292d1 = cache_frame_33de854a1972bb7b5db2a7211b9292d1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_33de854a1972bb7b5db2a7211b9292d1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_33de854a1972bb7b5db2a7211b9292d1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 850;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_host_api_device_index_to_device_index );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 850;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_long_method_name == NULL );
        var_long_method_name = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( var_long_method_name );
        tmp_called_name_1 = var_long_method_name;
        CHECK_OBJECT( par_host_api_index );
        tmp_args_element_name_1 = par_host_api_index;
        CHECK_OBJECT( par_host_api_device_index );
        tmp_args_element_name_2 = par_host_api_device_index;
        frame_33de854a1972bb7b5db2a7211b9292d1->m_frame.f_lineno = 851;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 851;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_device_index == NULL );
        var_device_index = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( var_device_index );
        tmp_args_element_name_3 = var_device_index;
        frame_33de854a1972bb7b5db2a7211b9292d1->m_frame.f_lineno = 853;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get_device_info_by_index, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 853;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_33de854a1972bb7b5db2a7211b9292d1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_33de854a1972bb7b5db2a7211b9292d1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_33de854a1972bb7b5db2a7211b9292d1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_33de854a1972bb7b5db2a7211b9292d1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_33de854a1972bb7b5db2a7211b9292d1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_33de854a1972bb7b5db2a7211b9292d1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_33de854a1972bb7b5db2a7211b9292d1,
        type_description_1,
        par_self,
        par_host_api_index,
        par_host_api_device_index,
        var_long_method_name,
        var_device_index
    );


    // Release cached frame.
    if ( frame_33de854a1972bb7b5db2a7211b9292d1 == cache_frame_33de854a1972bb7b5db2a7211b9292d1 )
    {
        Py_DECREF( frame_33de854a1972bb7b5db2a7211b9292d1 );
    }
    cache_frame_33de854a1972bb7b5db2a7211b9292d1 = NULL;

    assertFrameObject( frame_33de854a1972bb7b5db2a7211b9292d1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_30_get_device_info_by_host_api_device_index );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_host_api_index );
    Py_DECREF( par_host_api_index );
    par_host_api_index = NULL;

    CHECK_OBJECT( (PyObject *)var_long_method_name );
    Py_DECREF( var_long_method_name );
    var_long_method_name = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_device_index );
    Py_DECREF( var_device_index );
    var_device_index = NULL;

    CHECK_OBJECT( (PyObject *)par_host_api_device_index );
    Py_DECREF( par_host_api_device_index );
    par_host_api_device_index = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_host_api_index );
    Py_DECREF( par_host_api_index );
    par_host_api_index = NULL;

    Py_XDECREF( var_long_method_name );
    var_long_method_name = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_device_index );
    var_device_index = NULL;

    CHECK_OBJECT( (PyObject *)par_host_api_device_index );
    Py_DECREF( par_host_api_device_index );
    par_host_api_device_index = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_30_get_device_info_by_host_api_device_index );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_31__make_host_api_dictionary( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_index = python_pars[ 1 ];
    PyObject *par_host_api_struct = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_2ea891ba6e0ac4e65100a844a3db1e07;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2ea891ba6e0ac4e65100a844a3db1e07 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2ea891ba6e0ac4e65100a844a3db1e07, codeobj_2ea891ba6e0ac4e65100a844a3db1e07, module_pyaudio, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2ea891ba6e0ac4e65100a844a3db1e07 = cache_frame_2ea891ba6e0ac4e65100a844a3db1e07;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2ea891ba6e0ac4e65100a844a3db1e07 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2ea891ba6e0ac4e65100a844a3db1e07 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_source_name_3;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_source_name_4;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_source_name_5;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( par_index );
        tmp_dict_value_1 = par_index;
        tmp_dict_key_1 = const_str_plain_index;
        tmp_return_value = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_host_api_struct );
        tmp_source_name_1 = par_host_api_struct;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_structVersion );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 864;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = const_str_plain_structVersion;
        tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_host_api_struct );
        tmp_source_name_2 = par_host_api_struct;
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_type );
        if ( tmp_dict_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 865;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_3 = const_str_plain_type;
        tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_host_api_struct );
        tmp_source_name_3 = par_host_api_struct;
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_name );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 866;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_4 = const_str_plain_name;
        tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_host_api_struct );
        tmp_source_name_4 = par_host_api_struct;
        tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_deviceCount );
        if ( tmp_dict_value_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 867;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_5 = const_str_plain_deviceCount;
        tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_host_api_struct );
        tmp_source_name_5 = par_host_api_struct;
        tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_defaultInputDevice );
        if ( tmp_dict_value_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 868;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_6 = const_str_plain_defaultInputDevice;
        tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_6, tmp_dict_value_6 );
        Py_DECREF( tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_host_api_struct );
        tmp_source_name_6 = par_host_api_struct;
        tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_defaultOutputDevice );
        if ( tmp_dict_value_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 869;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_7 = const_str_plain_defaultOutputDevice;
        tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_7, tmp_dict_value_7 );
        Py_DECREF( tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2ea891ba6e0ac4e65100a844a3db1e07 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2ea891ba6e0ac4e65100a844a3db1e07 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2ea891ba6e0ac4e65100a844a3db1e07 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2ea891ba6e0ac4e65100a844a3db1e07, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2ea891ba6e0ac4e65100a844a3db1e07->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2ea891ba6e0ac4e65100a844a3db1e07, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2ea891ba6e0ac4e65100a844a3db1e07,
        type_description_1,
        par_self,
        par_index,
        par_host_api_struct
    );


    // Release cached frame.
    if ( frame_2ea891ba6e0ac4e65100a844a3db1e07 == cache_frame_2ea891ba6e0ac4e65100a844a3db1e07 )
    {
        Py_DECREF( frame_2ea891ba6e0ac4e65100a844a3db1e07 );
    }
    cache_frame_2ea891ba6e0ac4e65100a844a3db1e07 = NULL;

    assertFrameObject( frame_2ea891ba6e0ac4e65100a844a3db1e07 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_31__make_host_api_dictionary );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_index );
    Py_DECREF( par_index );
    par_index = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_host_api_struct );
    Py_DECREF( par_host_api_struct );
    par_host_api_struct = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_index );
    Py_DECREF( par_index );
    par_index = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_host_api_struct );
    Py_DECREF( par_host_api_struct );
    par_host_api_struct = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_31__make_host_api_dictionary );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_32_get_device_count( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_86c2124e59c118c137dd72d32d72f25e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_86c2124e59c118c137dd72d32d72f25e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_86c2124e59c118c137dd72d32d72f25e, codeobj_86c2124e59c118c137dd72d32d72f25e, module_pyaudio, sizeof(void *) );
    frame_86c2124e59c118c137dd72d32d72f25e = cache_frame_86c2124e59c118c137dd72d32d72f25e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_86c2124e59c118c137dd72d32d72f25e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_86c2124e59c118c137dd72d32d72f25e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 883;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_86c2124e59c118c137dd72d32d72f25e->m_frame.f_lineno = 883;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_device_count );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 883;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_86c2124e59c118c137dd72d32d72f25e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_86c2124e59c118c137dd72d32d72f25e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_86c2124e59c118c137dd72d32d72f25e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_86c2124e59c118c137dd72d32d72f25e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_86c2124e59c118c137dd72d32d72f25e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_86c2124e59c118c137dd72d32d72f25e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_86c2124e59c118c137dd72d32d72f25e,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_86c2124e59c118c137dd72d32d72f25e == cache_frame_86c2124e59c118c137dd72d32d72f25e )
    {
        Py_DECREF( frame_86c2124e59c118c137dd72d32d72f25e );
    }
    cache_frame_86c2124e59c118c137dd72d32d72f25e = NULL;

    assertFrameObject( frame_86c2124e59c118c137dd72d32d72f25e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_32_get_device_count );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_32_get_device_count );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_33_is_format_supported( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_rate = python_pars[ 1 ];
    PyObject *par_input_device = python_pars[ 2 ];
    PyObject *par_input_channels = python_pars[ 3 ];
    PyObject *par_input_format = python_pars[ 4 ];
    PyObject *par_output_device = python_pars[ 5 ];
    PyObject *par_output_channels = python_pars[ 6 ];
    PyObject *par_output_format = python_pars[ 7 ];
    PyObject *var_kwargs = NULL;
    struct Nuitka_FrameObject *frame_36019a81609f261d806c24ffba4090df;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_36019a81609f261d806c24ffba4090df = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_36019a81609f261d806c24ffba4090df, codeobj_36019a81609f261d806c24ffba4090df, module_pyaudio, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_36019a81609f261d806c24ffba4090df = cache_frame_36019a81609f261d806c24ffba4090df;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_36019a81609f261d806c24ffba4090df );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_36019a81609f261d806c24ffba4090df ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_input_device );
        tmp_compexpr_left_1 = par_input_device;
        tmp_compexpr_right_1 = Py_None;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 921;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_1 == 1 )
        {
            goto and_right_1;
        }
        else
        {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT( par_output_device );
        tmp_compexpr_left_2 = par_output_device;
        tmp_compexpr_right_2 = Py_None;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 921;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_make_exception_arg_2;
            PyObject *tmp_mvar_value_1;
            tmp_make_exception_arg_1 = const_str_digest_fed5eccd92e132886ed58314b5fa271a;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paInvalidDevice );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_paInvalidDevice );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "paInvalidDevice" );
                exception_tb = NULL;

                exception_lineno = 923;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_make_exception_arg_2 = tmp_mvar_value_1;
            frame_36019a81609f261d806c24ffba4090df->m_frame.f_lineno = 922;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1, tmp_make_exception_arg_2 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 922;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_New();
        assert( var_kwargs == NULL );
        var_kwargs = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_input_device );
        tmp_compexpr_left_3 = par_input_device;
        tmp_compexpr_right_3 = Py_None;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 927;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        CHECK_OBJECT( par_input_device );
        tmp_dictset_value = par_input_device;
        CHECK_OBJECT( var_kwargs );
        tmp_dictset_dict = var_kwargs;
        tmp_dictset_key = const_str_plain_input_device;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_input_channels );
        tmp_dictset_value = par_input_channels;
        CHECK_OBJECT( var_kwargs );
        tmp_dictset_dict = var_kwargs;
        tmp_dictset_key = const_str_plain_input_channels;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_input_format );
        tmp_dictset_value = par_input_format;
        CHECK_OBJECT( var_kwargs );
        tmp_dictset_dict = var_kwargs;
        tmp_dictset_key = const_str_plain_input_format;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( par_output_device );
        tmp_compexpr_left_4 = par_output_device;
        tmp_compexpr_right_4 = Py_None;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 932;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        CHECK_OBJECT( par_output_device );
        tmp_dictset_value = par_output_device;
        CHECK_OBJECT( var_kwargs );
        tmp_dictset_dict = var_kwargs;
        tmp_dictset_key = const_str_plain_output_device;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_output_channels );
        tmp_dictset_value = par_output_channels;
        CHECK_OBJECT( var_kwargs );
        tmp_dictset_dict = var_kwargs;
        tmp_dictset_key = const_str_plain_output_channels;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_output_format );
        tmp_dictset_value = par_output_format;
        CHECK_OBJECT( var_kwargs );
        tmp_dictset_dict = var_kwargs;
        tmp_dictset_key = const_str_plain_output_format;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        branch_no_3:;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 937;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_format_supported );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 937;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rate );
        tmp_tuple_element_1 = par_rate;
        tmp_dircall_arg2_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_kwargs );
        tmp_dircall_arg3_1 = var_kwargs;
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 937;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_36019a81609f261d806c24ffba4090df );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_36019a81609f261d806c24ffba4090df );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_36019a81609f261d806c24ffba4090df );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_36019a81609f261d806c24ffba4090df, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_36019a81609f261d806c24ffba4090df->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_36019a81609f261d806c24ffba4090df, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_36019a81609f261d806c24ffba4090df,
        type_description_1,
        par_self,
        par_rate,
        par_input_device,
        par_input_channels,
        par_input_format,
        par_output_device,
        par_output_channels,
        par_output_format,
        var_kwargs
    );


    // Release cached frame.
    if ( frame_36019a81609f261d806c24ffba4090df == cache_frame_36019a81609f261d806c24ffba4090df )
    {
        Py_DECREF( frame_36019a81609f261d806c24ffba4090df );
    }
    cache_frame_36019a81609f261d806c24ffba4090df = NULL;

    assertFrameObject( frame_36019a81609f261d806c24ffba4090df );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_33_is_format_supported );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_input_channels );
    Py_DECREF( par_input_channels );
    par_input_channels = NULL;

    CHECK_OBJECT( (PyObject *)par_input_format );
    Py_DECREF( par_input_format );
    par_input_format = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_rate );
    Py_DECREF( par_rate );
    par_rate = NULL;

    CHECK_OBJECT( (PyObject *)par_output_device );
    Py_DECREF( par_output_device );
    par_output_device = NULL;

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)par_input_device );
    Py_DECREF( par_input_device );
    par_input_device = NULL;

    CHECK_OBJECT( (PyObject *)par_output_format );
    Py_DECREF( par_output_format );
    par_output_format = NULL;

    CHECK_OBJECT( (PyObject *)par_output_channels );
    Py_DECREF( par_output_channels );
    par_output_channels = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_input_channels );
    Py_DECREF( par_input_channels );
    par_input_channels = NULL;

    CHECK_OBJECT( (PyObject *)par_input_format );
    Py_DECREF( par_input_format );
    par_input_format = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_rate );
    Py_DECREF( par_rate );
    par_rate = NULL;

    CHECK_OBJECT( (PyObject *)par_output_device );
    Py_DECREF( par_output_device );
    par_output_device = NULL;

    Py_XDECREF( var_kwargs );
    var_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)par_input_device );
    Py_DECREF( par_input_device );
    par_input_device = NULL;

    CHECK_OBJECT( (PyObject *)par_output_format );
    Py_DECREF( par_output_format );
    par_output_format = NULL;

    CHECK_OBJECT( (PyObject *)par_output_channels );
    Py_DECREF( par_output_channels );
    par_output_channels = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_33_is_format_supported );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_34_get_default_input_device_info( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_device_index = NULL;
    struct Nuitka_FrameObject *frame_232610de516b9d5c825ff2b3ea665d20;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_232610de516b9d5c825ff2b3ea665d20 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_232610de516b9d5c825ff2b3ea665d20, codeobj_232610de516b9d5c825ff2b3ea665d20, module_pyaudio, sizeof(void *)+sizeof(void *) );
    frame_232610de516b9d5c825ff2b3ea665d20 = cache_frame_232610de516b9d5c825ff2b3ea665d20;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_232610de516b9d5c825ff2b3ea665d20 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_232610de516b9d5c825ff2b3ea665d20 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 949;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_232610de516b9d5c825ff2b3ea665d20->m_frame.f_lineno = 949;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_default_input_device );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 949;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_device_index == NULL );
        var_device_index = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT( var_device_index );
        tmp_args_element_name_1 = var_device_index;
        frame_232610de516b9d5c825ff2b3ea665d20->m_frame.f_lineno = 950;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get_device_info_by_index, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 950;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_232610de516b9d5c825ff2b3ea665d20 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_232610de516b9d5c825ff2b3ea665d20 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_232610de516b9d5c825ff2b3ea665d20 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_232610de516b9d5c825ff2b3ea665d20, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_232610de516b9d5c825ff2b3ea665d20->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_232610de516b9d5c825ff2b3ea665d20, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_232610de516b9d5c825ff2b3ea665d20,
        type_description_1,
        par_self,
        var_device_index
    );


    // Release cached frame.
    if ( frame_232610de516b9d5c825ff2b3ea665d20 == cache_frame_232610de516b9d5c825ff2b3ea665d20 )
    {
        Py_DECREF( frame_232610de516b9d5c825ff2b3ea665d20 );
    }
    cache_frame_232610de516b9d5c825ff2b3ea665d20 = NULL;

    assertFrameObject( frame_232610de516b9d5c825ff2b3ea665d20 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_34_get_default_input_device_info );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_device_index );
    Py_DECREF( var_device_index );
    var_device_index = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_device_index );
    var_device_index = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_34_get_default_input_device_info );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_35_get_default_output_device_info( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_device_index = NULL;
    struct Nuitka_FrameObject *frame_b311f1040282d905bf417be8985b6243;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b311f1040282d905bf417be8985b6243 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b311f1040282d905bf417be8985b6243, codeobj_b311f1040282d905bf417be8985b6243, module_pyaudio, sizeof(void *)+sizeof(void *) );
    frame_b311f1040282d905bf417be8985b6243 = cache_frame_b311f1040282d905bf417be8985b6243;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b311f1040282d905bf417be8985b6243 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b311f1040282d905bf417be8985b6243 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 962;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_b311f1040282d905bf417be8985b6243->m_frame.f_lineno = 962;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_default_output_device );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 962;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_device_index == NULL );
        var_device_index = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT( var_device_index );
        tmp_args_element_name_1 = var_device_index;
        frame_b311f1040282d905bf417be8985b6243->m_frame.f_lineno = 963;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get_device_info_by_index, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 963;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b311f1040282d905bf417be8985b6243 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b311f1040282d905bf417be8985b6243 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b311f1040282d905bf417be8985b6243 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b311f1040282d905bf417be8985b6243, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b311f1040282d905bf417be8985b6243->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b311f1040282d905bf417be8985b6243, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b311f1040282d905bf417be8985b6243,
        type_description_1,
        par_self,
        var_device_index
    );


    // Release cached frame.
    if ( frame_b311f1040282d905bf417be8985b6243 == cache_frame_b311f1040282d905bf417be8985b6243 )
    {
        Py_DECREF( frame_b311f1040282d905bf417be8985b6243 );
    }
    cache_frame_b311f1040282d905bf417be8985b6243 = NULL;

    assertFrameObject( frame_b311f1040282d905bf417be8985b6243 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_35_get_default_output_device_info );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_device_index );
    Py_DECREF( var_device_index );
    var_device_index = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_device_index );
    var_device_index = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_35_get_default_output_device_info );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_36_get_device_info_by_index( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_device_index = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_046aafda5cdaacd620f72633efe2d4c5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_046aafda5cdaacd620f72633efe2d4c5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_046aafda5cdaacd620f72633efe2d4c5, codeobj_046aafda5cdaacd620f72633efe2d4c5, module_pyaudio, sizeof(void *)+sizeof(void *) );
    frame_046aafda5cdaacd620f72633efe2d4c5 = cache_frame_046aafda5cdaacd620f72633efe2d4c5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_046aafda5cdaacd620f72633efe2d4c5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_046aafda5cdaacd620f72633efe2d4c5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__make_device_info_dictionary );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 978;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_device_index );
        tmp_args_element_name_1 = par_device_index;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 980;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_device_index );
        tmp_args_element_name_3 = par_device_index;
        frame_046aafda5cdaacd620f72633efe2d4c5->m_frame.f_lineno = 980;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get_device_info, call_args );
        }

        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 980;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_046aafda5cdaacd620f72633efe2d4c5->m_frame.f_lineno = 978;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 978;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_046aafda5cdaacd620f72633efe2d4c5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_046aafda5cdaacd620f72633efe2d4c5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_046aafda5cdaacd620f72633efe2d4c5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_046aafda5cdaacd620f72633efe2d4c5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_046aafda5cdaacd620f72633efe2d4c5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_046aafda5cdaacd620f72633efe2d4c5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_046aafda5cdaacd620f72633efe2d4c5,
        type_description_1,
        par_self,
        par_device_index
    );


    // Release cached frame.
    if ( frame_046aafda5cdaacd620f72633efe2d4c5 == cache_frame_046aafda5cdaacd620f72633efe2d4c5 )
    {
        Py_DECREF( frame_046aafda5cdaacd620f72633efe2d4c5 );
    }
    cache_frame_046aafda5cdaacd620f72633efe2d4c5 = NULL;

    assertFrameObject( frame_046aafda5cdaacd620f72633efe2d4c5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_36_get_device_info_by_index );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_device_index );
    Py_DECREF( par_device_index );
    par_device_index = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_device_index );
    Py_DECREF( par_device_index );
    par_device_index = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_36_get_device_info_by_index );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_37__make_device_info_dictionary( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_index = python_pars[ 1 ];
    PyObject *par_device_info = python_pars[ 2 ];
    PyObject *var_codec = NULL;
    PyObject *var_device_name = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_4d090f7c6289147cb14048e2c36dc6e9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4d090f7c6289147cb14048e2c36dc6e9 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4d090f7c6289147cb14048e2c36dc6e9, codeobj_4d090f7c6289147cb14048e2c36dc6e9, module_pyaudio, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4d090f7c6289147cb14048e2c36dc6e9 = cache_frame_4d090f7c6289147cb14048e2c36dc6e9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4d090f7c6289147cb14048e2c36dc6e9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4d090f7c6289147cb14048e2c36dc6e9 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_device_info );
        tmp_source_name_1 = par_device_info;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_name );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 991;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_device_name == NULL );
        var_device_name = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_str_plain_cp1252_tuple;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        assert( !(tmp_assign_source_2 == NULL) );
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooo";
                exception_lineno = 994;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_codec;
            var_codec = tmp_assign_source_4;
            Py_INCREF( var_codec );
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        if ( var_device_name == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "device_name" );
            exception_tb = NULL;

            exception_lineno = 996;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_1 = var_device_name;
        CHECK_OBJECT( var_codec );
        tmp_args_element_name_1 = var_codec;
        frame_4d090f7c6289147cb14048e2c36dc6e9->m_frame.f_lineno = 996;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_decode, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 996;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_device_name;
            var_device_name = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }
    goto loop_end_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_37__make_device_info_dictionary );
    return NULL;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_4d090f7c6289147cb14048e2c36dc6e9 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_4d090f7c6289147cb14048e2c36dc6e9, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_4d090f7c6289147cb14048e2c36dc6e9, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_37__make_device_info_dictionary );
    return NULL;
    // End of try:
    try_end_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 994;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_source_name_3;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_source_name_4;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_source_name_5;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_source_name_6;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_source_name_7;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_source_name_8;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_source_name_9;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_source_name_10;
        CHECK_OBJECT( par_index );
        tmp_dict_value_1 = par_index;
        tmp_dict_key_1 = const_str_plain_index;
        tmp_return_value = _PyDict_NewPresized( 11 );
        tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_device_info );
        tmp_source_name_2 = par_device_info;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_structVersion );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 1004;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = const_str_plain_structVersion;
        tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        if ( var_device_name == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "device_name" );
            exception_tb = NULL;

            exception_lineno = 1005;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_3 = var_device_name;
        tmp_dict_key_3 = const_str_plain_name;
        tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_device_info );
        tmp_source_name_3 = par_device_info;
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_hostApi );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 1006;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_4 = const_str_plain_hostApi;
        tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_device_info );
        tmp_source_name_4 = par_device_info;
        tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_maxInputChannels );
        if ( tmp_dict_value_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 1007;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_5 = const_str_plain_maxInputChannels;
        tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_device_info );
        tmp_source_name_5 = par_device_info;
        tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_maxOutputChannels );
        if ( tmp_dict_value_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 1008;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_6 = const_str_plain_maxOutputChannels;
        tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_6, tmp_dict_value_6 );
        Py_DECREF( tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_device_info );
        tmp_source_name_6 = par_device_info;
        tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_defaultLowInputLatency );
        if ( tmp_dict_value_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 1010;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_7 = const_str_plain_defaultLowInputLatency;
        tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_7, tmp_dict_value_7 );
        Py_DECREF( tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_device_info );
        tmp_source_name_7 = par_device_info;
        tmp_dict_value_8 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_defaultLowOutputLatency );
        if ( tmp_dict_value_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 1012;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_8 = const_str_plain_defaultLowOutputLatency;
        tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_8, tmp_dict_value_8 );
        Py_DECREF( tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_device_info );
        tmp_source_name_8 = par_device_info;
        tmp_dict_value_9 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_defaultHighInputLatency );
        if ( tmp_dict_value_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 1014;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_9 = const_str_plain_defaultHighInputLatency;
        tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_9, tmp_dict_value_9 );
        Py_DECREF( tmp_dict_value_9 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_device_info );
        tmp_source_name_9 = par_device_info;
        tmp_dict_value_10 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_defaultHighOutputLatency );
        if ( tmp_dict_value_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 1016;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_10 = const_str_plain_defaultHighOutputLatency;
        tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_10, tmp_dict_value_10 );
        Py_DECREF( tmp_dict_value_10 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_device_info );
        tmp_source_name_10 = par_device_info;
        tmp_dict_value_11 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_defaultSampleRate );
        if ( tmp_dict_value_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 1018;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_11 = const_str_plain_defaultSampleRate;
        tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_11, tmp_dict_value_11 );
        Py_DECREF( tmp_dict_value_11 );
        assert( !(tmp_res != 0) );
        goto frame_return_exit_1;
    }

#if 1
    RESTORE_FRAME_EXCEPTION( frame_4d090f7c6289147cb14048e2c36dc6e9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_4d090f7c6289147cb14048e2c36dc6e9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_4d090f7c6289147cb14048e2c36dc6e9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4d090f7c6289147cb14048e2c36dc6e9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4d090f7c6289147cb14048e2c36dc6e9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4d090f7c6289147cb14048e2c36dc6e9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4d090f7c6289147cb14048e2c36dc6e9,
        type_description_1,
        par_self,
        par_index,
        par_device_info,
        var_codec,
        var_device_name
    );


    // Release cached frame.
    if ( frame_4d090f7c6289147cb14048e2c36dc6e9 == cache_frame_4d090f7c6289147cb14048e2c36dc6e9 )
    {
        Py_DECREF( frame_4d090f7c6289147cb14048e2c36dc6e9 );
    }
    cache_frame_4d090f7c6289147cb14048e2c36dc6e9 = NULL;

    assertFrameObject( frame_4d090f7c6289147cb14048e2c36dc6e9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_37__make_device_info_dictionary );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_index );
    Py_DECREF( par_index );
    par_index = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_codec );
    var_codec = NULL;

    CHECK_OBJECT( (PyObject *)par_device_info );
    Py_DECREF( par_device_info );
    par_device_info = NULL;

    Py_XDECREF( var_device_name );
    var_device_name = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_index );
    Py_DECREF( par_index );
    par_index = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_codec );
    var_codec = NULL;

    CHECK_OBJECT( (PyObject *)par_device_info );
    Py_DECREF( par_device_info );
    par_device_info = NULL;

    Py_XDECREF( var_device_name );
    var_device_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_37__make_device_info_dictionary );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_38___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_flags = python_pars[ 1 ];
    PyObject *par_channel_map = python_pars[ 2 ];
    PyObject *var_kwargs = NULL;
    int tmp_res;
    struct Nuitka_FrameObject *frame_090a408a147316670a51ce9f8c5d7c8d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_090a408a147316670a51ce9f8c5d7c8d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        CHECK_OBJECT( par_flags );
        tmp_dict_value_1 = par_flags;
        tmp_dict_key_1 = const_str_plain_flags;
        tmp_assign_source_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_channel_map );
        tmp_dict_value_2 = par_channel_map;
        tmp_dict_key_2 = const_str_plain_channel_map;
        tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        assert( var_kwargs == NULL );
        var_kwargs = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_090a408a147316670a51ce9f8c5d7c8d, codeobj_090a408a147316670a51ce9f8c5d7c8d, module_pyaudio, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_090a408a147316670a51ce9f8c5d7c8d = cache_frame_090a408a147316670a51ce9f8c5d7c8d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_090a408a147316670a51ce9f8c5d7c8d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_090a408a147316670a51ce9f8c5d7c8d ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_flags );
        tmp_compexpr_left_1 = par_flags;
        tmp_compexpr_right_1 = Py_None;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1090;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        CHECK_OBJECT( var_kwargs );
        tmp_dictdel_dict = var_kwargs;
        tmp_dictdel_key = const_str_plain_flags;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1091;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_channel_map );
        tmp_compexpr_left_2 = par_channel_map;
        tmp_compexpr_right_2 = Py_None;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1092;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        CHECK_OBJECT( var_kwargs );
        tmp_dictdel_dict = var_kwargs;
        tmp_dictdel_key = const_str_plain_channel_map;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1093;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paMacCoreStreamInfo );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_paMacCoreStreamInfo );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "paMacCoreStreamInfo" );
            exception_tb = NULL;

            exception_lineno = 1095;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_kwargs );
        tmp_dircall_arg2_1 = var_kwargs;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg2_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assattr_name_1 = impl___internal__$$$function_4_complex_call_helper_star_dict( dir_call_args );
        }
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1095;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__paMacCoreStreamInfo, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1095;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_090a408a147316670a51ce9f8c5d7c8d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_090a408a147316670a51ce9f8c5d7c8d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_090a408a147316670a51ce9f8c5d7c8d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_090a408a147316670a51ce9f8c5d7c8d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_090a408a147316670a51ce9f8c5d7c8d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_090a408a147316670a51ce9f8c5d7c8d,
        type_description_1,
        par_self,
        par_flags,
        par_channel_map,
        var_kwargs
    );


    // Release cached frame.
    if ( frame_090a408a147316670a51ce9f8c5d7c8d == cache_frame_090a408a147316670a51ce9f8c5d7c8d )
    {
        Py_DECREF( frame_090a408a147316670a51ce9f8c5d7c8d );
    }
    cache_frame_090a408a147316670a51ce9f8c5d7c8d = NULL;

    assertFrameObject( frame_090a408a147316670a51ce9f8c5d7c8d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_38___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_flags );
    Py_DECREF( par_flags );
    par_flags = NULL;

    CHECK_OBJECT( (PyObject *)par_channel_map );
    Py_DECREF( par_channel_map );
    par_channel_map = NULL;

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_flags );
    Py_DECREF( par_flags );
    par_flags = NULL;

    CHECK_OBJECT( (PyObject *)par_channel_map );
    Py_DECREF( par_channel_map );
    par_channel_map = NULL;

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_38___init__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_39_get_flags( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_494c3537e37bc9ab7e52675d44acaad6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_494c3537e37bc9ab7e52675d44acaad6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_494c3537e37bc9ab7e52675d44acaad6, codeobj_494c3537e37bc9ab7e52675d44acaad6, module_pyaudio, sizeof(void *) );
    frame_494c3537e37bc9ab7e52675d44acaad6 = cache_frame_494c3537e37bc9ab7e52675d44acaad6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_494c3537e37bc9ab7e52675d44acaad6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_494c3537e37bc9ab7e52675d44acaad6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__paMacCoreStreamInfo );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1104;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_flags );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1104;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_494c3537e37bc9ab7e52675d44acaad6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_494c3537e37bc9ab7e52675d44acaad6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_494c3537e37bc9ab7e52675d44acaad6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_494c3537e37bc9ab7e52675d44acaad6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_494c3537e37bc9ab7e52675d44acaad6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_494c3537e37bc9ab7e52675d44acaad6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_494c3537e37bc9ab7e52675d44acaad6,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_494c3537e37bc9ab7e52675d44acaad6 == cache_frame_494c3537e37bc9ab7e52675d44acaad6 )
    {
        Py_DECREF( frame_494c3537e37bc9ab7e52675d44acaad6 );
    }
    cache_frame_494c3537e37bc9ab7e52675d44acaad6 = NULL;

    assertFrameObject( frame_494c3537e37bc9ab7e52675d44acaad6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_39_get_flags );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_39_get_flags );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_40_get_channel_map( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_7543392384a37d52c32854883007e73d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7543392384a37d52c32854883007e73d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7543392384a37d52c32854883007e73d, codeobj_7543392384a37d52c32854883007e73d, module_pyaudio, sizeof(void *) );
    frame_7543392384a37d52c32854883007e73d = cache_frame_7543392384a37d52c32854883007e73d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7543392384a37d52c32854883007e73d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7543392384a37d52c32854883007e73d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__paMacCoreStreamInfo );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1113;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_channel_map );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1113;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7543392384a37d52c32854883007e73d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7543392384a37d52c32854883007e73d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7543392384a37d52c32854883007e73d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7543392384a37d52c32854883007e73d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7543392384a37d52c32854883007e73d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7543392384a37d52c32854883007e73d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7543392384a37d52c32854883007e73d,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_7543392384a37d52c32854883007e73d == cache_frame_7543392384a37d52c32854883007e73d )
    {
        Py_DECREF( frame_7543392384a37d52c32854883007e73d );
    }
    cache_frame_7543392384a37d52c32854883007e73d = NULL;

    assertFrameObject( frame_7543392384a37d52c32854883007e73d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_40_get_channel_map );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_40_get_channel_map );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyaudio$$$function_41__get_host_api_stream_object( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_6b4c8e69ba7b284e4aff99d80dd0cb89;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6b4c8e69ba7b284e4aff99d80dd0cb89 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6b4c8e69ba7b284e4aff99d80dd0cb89, codeobj_6b4c8e69ba7b284e4aff99d80dd0cb89, module_pyaudio, sizeof(void *) );
    frame_6b4c8e69ba7b284e4aff99d80dd0cb89 = cache_frame_6b4c8e69ba7b284e4aff99d80dd0cb89;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6b4c8e69ba7b284e4aff99d80dd0cb89 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6b4c8e69ba7b284e4aff99d80dd0cb89 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__paMacCoreStreamInfo );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1118;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6b4c8e69ba7b284e4aff99d80dd0cb89 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6b4c8e69ba7b284e4aff99d80dd0cb89 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6b4c8e69ba7b284e4aff99d80dd0cb89 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6b4c8e69ba7b284e4aff99d80dd0cb89, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6b4c8e69ba7b284e4aff99d80dd0cb89->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6b4c8e69ba7b284e4aff99d80dd0cb89, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6b4c8e69ba7b284e4aff99d80dd0cb89,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_6b4c8e69ba7b284e4aff99d80dd0cb89 == cache_frame_6b4c8e69ba7b284e4aff99d80dd0cb89 )
    {
        Py_DECREF( frame_6b4c8e69ba7b284e4aff99d80dd0cb89 );
    }
    cache_frame_6b4c8e69ba7b284e4aff99d80dd0cb89 = NULL;

    assertFrameObject( frame_6b4c8e69ba7b284e4aff99d80dd0cb89 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_41__get_host_api_stream_object );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyaudio$$$function_41__get_host_api_stream_object );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_10_get_cpu_load(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_10_get_cpu_load,
        const_str_plain_get_cpu_load,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e2e18255e144f1a704c0e6b11af84392,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_09fae457bab0599f0c4d917023788118,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_11_start_stream(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_11_start_stream,
        const_str_plain_start_stream,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_dd23df56f726376a9d519c89a3cd030c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_ba79b7ac83e51ec5092474169df8a228,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_12_stop_stream(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_12_stop_stream,
        const_str_plain_stop_stream,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_279f6042f5129d350d38f9802ba829d3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_75acb4f7c69fe729b2ae6435c2c868bc,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_13_is_active(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_13_is_active,
        const_str_plain_is_active,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_94a3b95f5f7e65cbdd0f8e58e03a00eb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_42bb557d00682d8230475acd914988dc,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_14_is_stopped(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_14_is_stopped,
        const_str_plain_is_stopped,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8485d31c0061b439fe9eb46a66aae56e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_82ea73b32c67082303f09634dcadd2f8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_15_write( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_15_write,
        const_str_plain_write,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_281992c275f8403feab6be6b094885ce,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_cf1c455fa754d5d2217a8ad237bec174,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_16_read( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_16_read,
        const_str_plain_read,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bfac27ea75f03229911c3760d682850d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_03c1a49fa187cac50198ec4cb1f01e81,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_17_get_read_available(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_17_get_read_available,
        const_str_plain_get_read_available,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3f8d16c6a5ac9b31ca30f3bdfb39b9c2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_3911b9e6c746581f1c96db16ba78b789,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_18_get_write_available(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_18_get_write_available,
        const_str_plain_get_write_available,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_22e6fd6808e1438310a36f1c4ff83f47,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_e0342649c805d5b2a8846c4a5318cb2f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_19___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_19___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_15948b3f41e1daf89b6e58f6ab6d488c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_5aca4ab2df6200b45ac7e0b6fcbfad5f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_1_get_sample_size(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_1_get_sample_size,
        const_str_plain_get_sample_size,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_105cdd2bc06bf2341d21f7c7deb179e9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_ae4b9b282f9e728df8559a20a1fb0f2c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_20_terminate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_20_terminate,
        const_str_plain_terminate,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f593ab6d3ed743788ae337910aece584,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_a4b7ef3ddad0fd31398c0f3ac10825e5,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_21_get_sample_size(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_21_get_sample_size,
        const_str_plain_get_sample_size,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3b119aee9d5433efc2171659690249e4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_4d65d5ed715ef796717d5a8d099bfaef,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_22_get_format_from_width( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_22_get_format_from_width,
        const_str_plain_get_format_from_width,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b9b38578cad24900f9b0e7ff96adf071,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_f1f57422c35c00c5e7422818f03640bd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_23_open(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_23_open,
        const_str_plain_open,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_80df74404a2aa065f662085e0361c344,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_c2d764418c591637e102443ae0c9ed62,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_24_close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_24_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_92282bbbd3e740d9d5ee6f3f84e9a786,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_73fa89fe36a4c35c88bde5aeca881f5c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_25__remove_stream(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_25__remove_stream,
        const_str_plain__remove_stream,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8639ce5e58a75ca00c3515a68e17af1d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_2b71fa5fe10e38c569f0517cd2ab89ee,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_26_get_host_api_count(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_26_get_host_api_count,
        const_str_plain_get_host_api_count,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1d6777ee32244e5d17839d8281e6e027,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_5e3893e349f405719f5d541bb77bd372,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_27_get_default_host_api_info(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_27_get_default_host_api_info,
        const_str_plain_get_default_host_api_info,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fede4e7eb9d64c1aad1b540dbcc2d97e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_d53904089212e788c866c7f431d12e4e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_28_get_host_api_info_by_type(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_28_get_host_api_info_by_type,
        const_str_plain_get_host_api_info_by_type,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b68b9a58e8fa6577d93223c180b46d5e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_cbb248795a5d9d0909396eca7f1a1ef5,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_29_get_host_api_info_by_index(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_29_get_host_api_info_by_index,
        const_str_plain_get_host_api_info_by_index,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2839d9a61054d166e97d16581c46a5c7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_482dcbc1774095a9ad23e31b5b0023bb,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_2_get_format_from_width( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_2_get_format_from_width,
        const_str_plain_get_format_from_width,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_35afe319b2e4e97f65ae9a01e9d0313c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_93d8017e12e320a1a86cfc2d79514aef,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_30_get_device_info_by_host_api_device_index(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_30_get_device_info_by_host_api_device_index,
        const_str_plain_get_device_info_by_host_api_device_index,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_33de854a1972bb7b5db2a7211b9292d1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_8c90fbdbc28c9d6785f4e6bd5c785400,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_31__make_host_api_dictionary(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_31__make_host_api_dictionary,
        const_str_plain__make_host_api_dictionary,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2ea891ba6e0ac4e65100a844a3db1e07,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_fda3986dc3297c314544654e163c4942,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_32_get_device_count(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_32_get_device_count,
        const_str_plain_get_device_count,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_86c2124e59c118c137dd72d32d72f25e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_319283b4e7018199e73fe1561577745b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_33_is_format_supported( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_33_is_format_supported,
        const_str_plain_is_format_supported,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_36019a81609f261d806c24ffba4090df,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_36dd9bde50a9cc50c2d9fd9cec678a2d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_34_get_default_input_device_info(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_34_get_default_input_device_info,
        const_str_plain_get_default_input_device_info,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_232610de516b9d5c825ff2b3ea665d20,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_daa31478a56575074c4b544a167264dd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_35_get_default_output_device_info(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_35_get_default_output_device_info,
        const_str_plain_get_default_output_device_info,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b311f1040282d905bf417be8985b6243,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_f25a7fad4493d1251dc48b61c0ecd0d3,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_36_get_device_info_by_index(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_36_get_device_info_by_index,
        const_str_plain_get_device_info_by_index,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_046aafda5cdaacd620f72633efe2d4c5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_baacd0ce4d2d295b7b6c27a1c4ce039a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_37__make_device_info_dictionary(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_37__make_device_info_dictionary,
        const_str_plain__make_device_info_dictionary,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4d090f7c6289147cb14048e2c36dc6e9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_bce7d43bff03cd7c912063d41988e042,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_38___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_38___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_090a408a147316670a51ce9f8c5d7c8d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_11cdda9e6321ecf61127a7cdb779c0ef,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_39_get_flags(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_39_get_flags,
        const_str_plain_get_flags,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_494c3537e37bc9ab7e52675d44acaad6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_6d2199feb85ac99b747a8f20969ffa6d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_3_get_portaudio_version(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_3_get_portaudio_version,
        const_str_plain_get_portaudio_version,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ba4a35bdec8e76caba325331f269214b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_4a20ad6a989fe14463e9f90ff1b847b1,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_40_get_channel_map(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_40_get_channel_map,
        const_str_plain_get_channel_map,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7543392384a37d52c32854883007e73d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_e299453d87904c0daecc865a9fef9227,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_41__get_host_api_stream_object(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_41__get_host_api_stream_object,
        const_str_plain__get_host_api_stream_object,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6b4c8e69ba7b284e4aff99d80dd0cb89,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_599daefef685e6663fcdfd7a92d30803,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_4_get_portaudio_version_text(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_4_get_portaudio_version_text,
        const_str_plain_get_portaudio_version_text,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e6c4022f12f77f0611ed25a6ceab63ae,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_633668cf1aacaa8a575894ff7d6505b5,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_5___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_450c5f56049f9e25bdd0760e7cec30cf,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_1de5045a3bfa3e9c4d7835ba0892368c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_6_close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_6_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_953aa59d9e4d92863f887e41258a5635,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_18f5f73dc99136b564c0401dbba834e9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_7_get_input_latency(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_7_get_input_latency,
        const_str_plain_get_input_latency,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1c4068e2c768b6a62135a397a18372a8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_4b18c59355c8e650e76040b061b73634,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_8_get_output_latency(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_8_get_output_latency,
        const_str_plain_get_output_latency,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b7dc29159249071c0799e5089a91938f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_a49b3a75a6a005470450a99781d79d09,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyaudio$$$function_9_get_time(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyaudio$$$function_9_get_time,
        const_str_plain_get_time,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_74e4e9818184a4748010470834660827,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyaudio,
        const_str_digest_943c8f1fd43dadfe1232d46f6739ff49,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pyaudio =
{
    PyModuleDef_HEAD_INIT,
    "pyaudio",
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

extern PyObject *const_str_plain___package__;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;

extern PyObject *const_str_plain___loader__;
#endif

#if PYTHON_VERSION >= 340
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain__initializing;
extern PyObject *const_str_plain_submodule_search_locations;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

extern PyTypeObject Nuitka_Loader_Type;

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( pyaudio )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pyaudio );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    puts("pyaudio: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pyaudio: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pyaudio: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initpyaudio" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pyaudio = Py_InitModule4(
        "pyaudio",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_pyaudio = PyModule_Create( &mdef_pyaudio );
#endif

    moduledict_pyaudio = MODULE_DICT( module_pyaudio );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_pyaudio,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_pyaudio,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_pyaudio,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_pyaudio );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_plain_pyaudio, module_pyaudio );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain___name__ ),
            (PyObject *)&Nuitka_Loader_Type
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );
        Py_DECREF( module_spec_class );

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT( spec_value );

// For packages set the submodule search locations as well, even if to empty
// list, so investigating code will consider it a package.
#if 0
        SET_ATTRIBUTE( spec_value, const_str_plain_submodule_search_locations, PyList_New(0) );
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_3__class = NULL;
    PyObject *tmp_class_creation_3__class_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_locals_pyaudio_268_key___init__ = NULL;
    PyObject *tmp_locals_pyaudio_268_key_close = NULL;
    PyObject *tmp_locals_pyaudio_268_key_get_cpu_load = NULL;
    PyObject *tmp_locals_pyaudio_268_key_get_input_latency = NULL;
    PyObject *tmp_locals_pyaudio_268_key_get_output_latency = NULL;
    PyObject *tmp_locals_pyaudio_268_key_get_read_available = NULL;
    PyObject *tmp_locals_pyaudio_268_key_get_time = NULL;
    PyObject *tmp_locals_pyaudio_268_key_get_write_available = NULL;
    PyObject *tmp_locals_pyaudio_268_key_is_active = NULL;
    PyObject *tmp_locals_pyaudio_268_key_is_stopped = NULL;
    PyObject *tmp_locals_pyaudio_268_key_read = NULL;
    PyObject *tmp_locals_pyaudio_268_key_start_stream = NULL;
    PyObject *tmp_locals_pyaudio_268_key_stop_stream = NULL;
    PyObject *tmp_locals_pyaudio_268_key_write = NULL;
    PyObject *tmp_locals_pyaudio_637_key___init__ = NULL;
    PyObject *tmp_locals_pyaudio_637_key__make_device_info_dictionary = NULL;
    PyObject *tmp_locals_pyaudio_637_key__make_host_api_dictionary = NULL;
    PyObject *tmp_locals_pyaudio_637_key__remove_stream = NULL;
    PyObject *tmp_locals_pyaudio_637_key_close = NULL;
    PyObject *tmp_locals_pyaudio_637_key_get_default_host_api_info = NULL;
    PyObject *tmp_locals_pyaudio_637_key_get_default_input_device_info = NULL;
    PyObject *tmp_locals_pyaudio_637_key_get_default_output_device_info = NULL;
    PyObject *tmp_locals_pyaudio_637_key_get_device_count = NULL;
    PyObject *tmp_locals_pyaudio_637_key_get_device_info_by_host_api_device_index = NULL;
    PyObject *tmp_locals_pyaudio_637_key_get_device_info_by_index = NULL;
    PyObject *tmp_locals_pyaudio_637_key_get_format_from_width = NULL;
    PyObject *tmp_locals_pyaudio_637_key_get_host_api_count = NULL;
    PyObject *tmp_locals_pyaudio_637_key_get_host_api_info_by_index = NULL;
    PyObject *tmp_locals_pyaudio_637_key_get_host_api_info_by_type = NULL;
    PyObject *tmp_locals_pyaudio_637_key_get_sample_size = NULL;
    PyObject *tmp_locals_pyaudio_637_key_is_format_supported = NULL;
    PyObject *tmp_locals_pyaudio_637_key_open = NULL;
    PyObject *tmp_locals_pyaudio_637_key_terminate = NULL;
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_2c7187073e5bfc034c60cff922190a77;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *tmp_print_value;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_pyaudio_1031 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_2b3e849cf3b280654b643122de2dddfa_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_2b3e849cf3b280654b643122de2dddfa_2 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_1c30b726ad616bcc4cf39de61fa28cb6;
        UPDATE_STRING_DICT0( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_4b1299c95abffd0c90ebcce1293758b0;
        UPDATE_STRING_DICT0( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = const_str_digest_fe3e9591bc62eb2cca0b43b5499f9178;
        UPDATE_STRING_DICT0( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_str_digest_bcc7cc6ff84b95d18b14e1351b70e89a;
        UPDATE_STRING_DICT0( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = const_str_digest_e58b8e238daae7f316f45d0978267798;
        UPDATE_STRING_DICT0( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain___docformat__, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_plain_sys;
        tmp_globals_name_1 = (PyObject *)moduledict_pyaudio;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_assign_source_6 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        assert( !(tmp_assign_source_6 == NULL) );
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_6 );
    }
    // Frame without reuse.
    frame_2c7187073e5bfc034c60cff922190a77 = MAKE_MODULE_FRAME( codeobj_2c7187073e5bfc034c60cff922190a77, module_pyaudio );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_2c7187073e5bfc034c60cff922190a77 );
    assert( Py_REFCNT( frame_2c7187073e5bfc034c60cff922190a77 ) == 2 );

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        tmp_name_name_2 = const_str_plain__portaudio;
        tmp_globals_name_2 = (PyObject *)moduledict_pyaudio;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        frame_2c7187073e5bfc034c60cff922190a77->m_frame.f_lineno = 116;
        tmp_assign_source_7 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa, tmp_assign_source_7 );
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_2c7187073e5bfc034c60cff922190a77 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_2c7187073e5bfc034c60cff922190a77, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_2c7187073e5bfc034c60cff922190a77, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        tmp_print_value = const_str_digest_5bf26b5f4297a7b729e575c408977abb;
        tmp_result = PRINT_ITEM( tmp_print_value );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        if ( PRINT_NEW_LINE() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 119;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_2c7187073e5bfc034c60cff922190a77->m_frame) frame_2c7187073e5bfc034c60cff922190a77->m_frame.f_lineno = exception_tb->tb_lineno;

        goto frame_exception_exit_1;
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 115;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_2c7187073e5bfc034c60cff922190a77->m_frame) frame_2c7187073e5bfc034c60cff922190a77->m_frame.f_lineno = exception_tb->tb_lineno;

        goto frame_exception_exit_1;
        branch_end_1:;
    }
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        CHECK_OBJECT( tmp_mvar_value_1 );
        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_paFloat32 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paFloat32, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_paInt32 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paInt32, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_assign_source_10 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_paInt24 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paInt24, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_4;
        tmp_assign_source_11 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_paInt16 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paInt16, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 131;

            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_5;
        tmp_assign_source_12 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_paInt8 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paInt8, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 132;

            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_6;
        tmp_assign_source_13 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_paUInt8 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paUInt8, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 133;

            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_7;
        tmp_assign_source_14 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_paCustomFormat );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paCustomFormat, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 137;

            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_8;
        tmp_assign_source_15 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_paInDevelopment );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paInDevelopment, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_9;
        tmp_assign_source_16 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_paDirectSound );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paDirectSound, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_10;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 139;

            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_10;
        tmp_assign_source_17 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_paMME );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paMME, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_11;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 140;

            goto frame_exception_exit_1;
        }

        tmp_source_name_11 = tmp_mvar_value_11;
        tmp_assign_source_18 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_paASIO );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paASIO, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_12;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }

        tmp_source_name_12 = tmp_mvar_value_12;
        tmp_assign_source_19 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_paSoundManager );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paSoundManager, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_13;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 142;

            goto frame_exception_exit_1;
        }

        tmp_source_name_13 = tmp_mvar_value_13;
        tmp_assign_source_20 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_paCoreAudio );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paCoreAudio, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_source_name_14;
        PyObject *tmp_mvar_value_14;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 143;

            goto frame_exception_exit_1;
        }

        tmp_source_name_14 = tmp_mvar_value_14;
        tmp_assign_source_21 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_paOSS );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paOSS, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_source_name_15;
        PyObject *tmp_mvar_value_15;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_15 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }

        tmp_source_name_15 = tmp_mvar_value_15;
        tmp_assign_source_22 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_paALSA );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paALSA, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_source_name_16;
        PyObject *tmp_mvar_value_16;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_16 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 145;

            goto frame_exception_exit_1;
        }

        tmp_source_name_16 = tmp_mvar_value_16;
        tmp_assign_source_23 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_paAL );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paAL, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_source_name_17;
        PyObject *tmp_mvar_value_17;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_17 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 146;

            goto frame_exception_exit_1;
        }

        tmp_source_name_17 = tmp_mvar_value_17;
        tmp_assign_source_24 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_paBeOS );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paBeOS, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_source_name_18;
        PyObject *tmp_mvar_value_18;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_18 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 147;

            goto frame_exception_exit_1;
        }

        tmp_source_name_18 = tmp_mvar_value_18;
        tmp_assign_source_25 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_paWDMKS );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paWDMKS, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_source_name_19;
        PyObject *tmp_mvar_value_19;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_19 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 148;

            goto frame_exception_exit_1;
        }

        tmp_source_name_19 = tmp_mvar_value_19;
        tmp_assign_source_26 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_paJACK );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paJACK, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_source_name_20;
        PyObject *tmp_mvar_value_20;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_20 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }

        tmp_source_name_20 = tmp_mvar_value_20;
        tmp_assign_source_27 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_paWASAPI );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paWASAPI, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_source_name_21;
        PyObject *tmp_mvar_value_21;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_21 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 150;

            goto frame_exception_exit_1;
        }

        tmp_source_name_21 = tmp_mvar_value_21;
        tmp_assign_source_28 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_paNoDevice );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paNoDevice, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_source_name_22;
        PyObject *tmp_mvar_value_22;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_22 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 154;

            goto frame_exception_exit_1;
        }

        tmp_source_name_22 = tmp_mvar_value_22;
        tmp_assign_source_29 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_paNoError );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paNoError, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_source_name_23;
        PyObject *tmp_mvar_value_23;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_23 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 155;

            goto frame_exception_exit_1;
        }

        tmp_source_name_23 = tmp_mvar_value_23;
        tmp_assign_source_30 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_paNotInitialized );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paNotInitialized, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_source_name_24;
        PyObject *tmp_mvar_value_24;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_24 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }

        tmp_source_name_24 = tmp_mvar_value_24;
        tmp_assign_source_31 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_paUnanticipatedHostError );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paUnanticipatedHostError, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_source_name_25;
        PyObject *tmp_mvar_value_25;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_25 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }

        tmp_source_name_25 = tmp_mvar_value_25;
        tmp_assign_source_32 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_paInvalidChannelCount );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paInvalidChannelCount, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_source_name_26;
        PyObject *tmp_mvar_value_26;
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_26 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 158;

            goto frame_exception_exit_1;
        }

        tmp_source_name_26 = tmp_mvar_value_26;
        tmp_assign_source_33 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_paInvalidSampleRate );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paInvalidSampleRate, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_source_name_27;
        PyObject *tmp_mvar_value_27;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_27 == NULL ))
        {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_27 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 159;

            goto frame_exception_exit_1;
        }

        tmp_source_name_27 = tmp_mvar_value_27;
        tmp_assign_source_34 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_paInvalidDevice );
        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paInvalidDevice, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_source_name_28;
        PyObject *tmp_mvar_value_28;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_28 == NULL ))
        {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_28 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 160;

            goto frame_exception_exit_1;
        }

        tmp_source_name_28 = tmp_mvar_value_28;
        tmp_assign_source_35 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_paInvalidFlag );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paInvalidFlag, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_source_name_29;
        PyObject *tmp_mvar_value_29;
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_29 == NULL ))
        {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_29 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 161;

            goto frame_exception_exit_1;
        }

        tmp_source_name_29 = tmp_mvar_value_29;
        tmp_assign_source_36 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_paSampleFormatNotSupported );
        if ( tmp_assign_source_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paSampleFormatNotSupported, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_source_name_30;
        PyObject *tmp_mvar_value_30;
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_30 == NULL ))
        {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_30 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 162;

            goto frame_exception_exit_1;
        }

        tmp_source_name_30 = tmp_mvar_value_30;
        tmp_assign_source_37 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_paBadIODeviceCombination );
        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paBadIODeviceCombination, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_source_name_31;
        PyObject *tmp_mvar_value_31;
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_31 == NULL ))
        {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_31 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 163;

            goto frame_exception_exit_1;
        }

        tmp_source_name_31 = tmp_mvar_value_31;
        tmp_assign_source_38 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_paInsufficientMemory );
        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paInsufficientMemory, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_source_name_32;
        PyObject *tmp_mvar_value_32;
        tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_32 == NULL ))
        {
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_32 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 164;

            goto frame_exception_exit_1;
        }

        tmp_source_name_32 = tmp_mvar_value_32;
        tmp_assign_source_39 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_paBufferTooBig );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paBufferTooBig, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_source_name_33;
        PyObject *tmp_mvar_value_33;
        tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_33 == NULL ))
        {
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_33 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 165;

            goto frame_exception_exit_1;
        }

        tmp_source_name_33 = tmp_mvar_value_33;
        tmp_assign_source_40 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_paBufferTooSmall );
        if ( tmp_assign_source_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paBufferTooSmall, tmp_assign_source_40 );
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_source_name_34;
        PyObject *tmp_mvar_value_34;
        tmp_mvar_value_34 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_34 == NULL ))
        {
            tmp_mvar_value_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_34 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 166;

            goto frame_exception_exit_1;
        }

        tmp_source_name_34 = tmp_mvar_value_34;
        tmp_assign_source_41 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_paNullCallback );
        if ( tmp_assign_source_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paNullCallback, tmp_assign_source_41 );
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_source_name_35;
        PyObject *tmp_mvar_value_35;
        tmp_mvar_value_35 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_35 == NULL ))
        {
            tmp_mvar_value_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_35 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 167;

            goto frame_exception_exit_1;
        }

        tmp_source_name_35 = tmp_mvar_value_35;
        tmp_assign_source_42 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_paBadStreamPtr );
        if ( tmp_assign_source_42 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paBadStreamPtr, tmp_assign_source_42 );
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_source_name_36;
        PyObject *tmp_mvar_value_36;
        tmp_mvar_value_36 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_36 == NULL ))
        {
            tmp_mvar_value_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_36 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 168;

            goto frame_exception_exit_1;
        }

        tmp_source_name_36 = tmp_mvar_value_36;
        tmp_assign_source_43 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_paTimedOut );
        if ( tmp_assign_source_43 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paTimedOut, tmp_assign_source_43 );
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_source_name_37;
        PyObject *tmp_mvar_value_37;
        tmp_mvar_value_37 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_37 == NULL ))
        {
            tmp_mvar_value_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_37 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 169;

            goto frame_exception_exit_1;
        }

        tmp_source_name_37 = tmp_mvar_value_37;
        tmp_assign_source_44 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_paInternalError );
        if ( tmp_assign_source_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paInternalError, tmp_assign_source_44 );
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_source_name_38;
        PyObject *tmp_mvar_value_38;
        tmp_mvar_value_38 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_38 == NULL ))
        {
            tmp_mvar_value_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_38 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 170;

            goto frame_exception_exit_1;
        }

        tmp_source_name_38 = tmp_mvar_value_38;
        tmp_assign_source_45 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_paDeviceUnavailable );
        if ( tmp_assign_source_45 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paDeviceUnavailable, tmp_assign_source_45 );
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_source_name_39;
        PyObject *tmp_mvar_value_39;
        tmp_mvar_value_39 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_39 == NULL ))
        {
            tmp_mvar_value_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_39 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }

        tmp_source_name_39 = tmp_mvar_value_39;
        tmp_assign_source_46 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_paIncompatibleHostApiSpecificStreamInfo );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paIncompatibleHostApiSpecificStreamInfo, tmp_assign_source_46 );
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_source_name_40;
        PyObject *tmp_mvar_value_40;
        tmp_mvar_value_40 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_40 == NULL ))
        {
            tmp_mvar_value_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_40 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 172;

            goto frame_exception_exit_1;
        }

        tmp_source_name_40 = tmp_mvar_value_40;
        tmp_assign_source_47 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_paStreamIsStopped );
        if ( tmp_assign_source_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paStreamIsStopped, tmp_assign_source_47 );
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_source_name_41;
        PyObject *tmp_mvar_value_41;
        tmp_mvar_value_41 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_41 == NULL ))
        {
            tmp_mvar_value_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_41 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 173;

            goto frame_exception_exit_1;
        }

        tmp_source_name_41 = tmp_mvar_value_41;
        tmp_assign_source_48 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_paStreamIsNotStopped );
        if ( tmp_assign_source_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paStreamIsNotStopped, tmp_assign_source_48 );
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_source_name_42;
        PyObject *tmp_mvar_value_42;
        tmp_mvar_value_42 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_42 == NULL ))
        {
            tmp_mvar_value_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_42 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }

        tmp_source_name_42 = tmp_mvar_value_42;
        tmp_assign_source_49 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_paInputOverflowed );
        if ( tmp_assign_source_49 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paInputOverflowed, tmp_assign_source_49 );
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_source_name_43;
        PyObject *tmp_mvar_value_43;
        tmp_mvar_value_43 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_43 == NULL ))
        {
            tmp_mvar_value_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_43 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 175;

            goto frame_exception_exit_1;
        }

        tmp_source_name_43 = tmp_mvar_value_43;
        tmp_assign_source_50 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_paOutputUnderflowed );
        if ( tmp_assign_source_50 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paOutputUnderflowed, tmp_assign_source_50 );
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_source_name_44;
        PyObject *tmp_mvar_value_44;
        tmp_mvar_value_44 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_44 == NULL ))
        {
            tmp_mvar_value_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_44 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }

        tmp_source_name_44 = tmp_mvar_value_44;
        tmp_assign_source_51 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_paHostApiNotFound );
        if ( tmp_assign_source_51 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paHostApiNotFound, tmp_assign_source_51 );
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_source_name_45;
        PyObject *tmp_mvar_value_45;
        tmp_mvar_value_45 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_45 == NULL ))
        {
            tmp_mvar_value_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_45 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }

        tmp_source_name_45 = tmp_mvar_value_45;
        tmp_assign_source_52 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_paInvalidHostApi );
        if ( tmp_assign_source_52 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paInvalidHostApi, tmp_assign_source_52 );
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_source_name_46;
        PyObject *tmp_mvar_value_46;
        tmp_mvar_value_46 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_46 == NULL ))
        {
            tmp_mvar_value_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_46 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }

        tmp_source_name_46 = tmp_mvar_value_46;
        tmp_assign_source_53 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain_paCanNotReadFromACallbackStream );
        if ( tmp_assign_source_53 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paCanNotReadFromACallbackStream, tmp_assign_source_53 );
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_source_name_47;
        PyObject *tmp_mvar_value_47;
        tmp_mvar_value_47 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_47 == NULL ))
        {
            tmp_mvar_value_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_47 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }

        tmp_source_name_47 = tmp_mvar_value_47;
        tmp_assign_source_54 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain_paCanNotWriteToACallbackStream );
        if ( tmp_assign_source_54 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paCanNotWriteToACallbackStream, tmp_assign_source_54 );
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_source_name_48;
        PyObject *tmp_mvar_value_48;
        tmp_mvar_value_48 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_48 == NULL ))
        {
            tmp_mvar_value_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_48 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }

        tmp_source_name_48 = tmp_mvar_value_48;
        tmp_assign_source_55 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain_paCanNotReadFromAnOutputOnlyStream );
        if ( tmp_assign_source_55 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paCanNotReadFromAnOutputOnlyStream, tmp_assign_source_55 );
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_source_name_49;
        PyObject *tmp_mvar_value_49;
        tmp_mvar_value_49 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_49 == NULL ))
        {
            tmp_mvar_value_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_49 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }

        tmp_source_name_49 = tmp_mvar_value_49;
        tmp_assign_source_56 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain_paCanNotWriteToAnInputOnlyStream );
        if ( tmp_assign_source_56 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paCanNotWriteToAnInputOnlyStream, tmp_assign_source_56 );
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_source_name_50;
        PyObject *tmp_mvar_value_50;
        tmp_mvar_value_50 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_50 == NULL ))
        {
            tmp_mvar_value_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_50 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }

        tmp_source_name_50 = tmp_mvar_value_50;
        tmp_assign_source_57 = LOOKUP_ATTRIBUTE( tmp_source_name_50, const_str_plain_paIncompatibleStreamHostApi );
        if ( tmp_assign_source_57 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paIncompatibleStreamHostApi, tmp_assign_source_57 );
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_source_name_51;
        PyObject *tmp_mvar_value_51;
        tmp_mvar_value_51 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_51 == NULL ))
        {
            tmp_mvar_value_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_51 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }

        tmp_source_name_51 = tmp_mvar_value_51;
        tmp_assign_source_58 = LOOKUP_ATTRIBUTE( tmp_source_name_51, const_str_plain_paContinue );
        if ( tmp_assign_source_58 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paContinue, tmp_assign_source_58 );
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_source_name_52;
        PyObject *tmp_mvar_value_52;
        tmp_mvar_value_52 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_52 == NULL ))
        {
            tmp_mvar_value_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_52 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 187;

            goto frame_exception_exit_1;
        }

        tmp_source_name_52 = tmp_mvar_value_52;
        tmp_assign_source_59 = LOOKUP_ATTRIBUTE( tmp_source_name_52, const_str_plain_paComplete );
        if ( tmp_assign_source_59 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paComplete, tmp_assign_source_59 );
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_source_name_53;
        PyObject *tmp_mvar_value_53;
        tmp_mvar_value_53 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_53 == NULL ))
        {
            tmp_mvar_value_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_53 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 188;

            goto frame_exception_exit_1;
        }

        tmp_source_name_53 = tmp_mvar_value_53;
        tmp_assign_source_60 = LOOKUP_ATTRIBUTE( tmp_source_name_53, const_str_plain_paAbort );
        if ( tmp_assign_source_60 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paAbort, tmp_assign_source_60 );
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_source_name_54;
        PyObject *tmp_mvar_value_54;
        tmp_mvar_value_54 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_54 == NULL ))
        {
            tmp_mvar_value_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_54 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }

        tmp_source_name_54 = tmp_mvar_value_54;
        tmp_assign_source_61 = LOOKUP_ATTRIBUTE( tmp_source_name_54, const_str_plain_paInputUnderflow );
        if ( tmp_assign_source_61 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paInputUnderflow, tmp_assign_source_61 );
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_source_name_55;
        PyObject *tmp_mvar_value_55;
        tmp_mvar_value_55 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_55 == NULL ))
        {
            tmp_mvar_value_55 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_55 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 193;

            goto frame_exception_exit_1;
        }

        tmp_source_name_55 = tmp_mvar_value_55;
        tmp_assign_source_62 = LOOKUP_ATTRIBUTE( tmp_source_name_55, const_str_plain_paInputOverflow );
        if ( tmp_assign_source_62 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paInputOverflow, tmp_assign_source_62 );
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_source_name_56;
        PyObject *tmp_mvar_value_56;
        tmp_mvar_value_56 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_56 == NULL ))
        {
            tmp_mvar_value_56 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_56 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 194;

            goto frame_exception_exit_1;
        }

        tmp_source_name_56 = tmp_mvar_value_56;
        tmp_assign_source_63 = LOOKUP_ATTRIBUTE( tmp_source_name_56, const_str_plain_paOutputUnderflow );
        if ( tmp_assign_source_63 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paOutputUnderflow, tmp_assign_source_63 );
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_source_name_57;
        PyObject *tmp_mvar_value_57;
        tmp_mvar_value_57 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_57 == NULL ))
        {
            tmp_mvar_value_57 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_57 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }

        tmp_source_name_57 = tmp_mvar_value_57;
        tmp_assign_source_64 = LOOKUP_ATTRIBUTE( tmp_source_name_57, const_str_plain_paOutputOverflow );
        if ( tmp_assign_source_64 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paOutputOverflow, tmp_assign_source_64 );
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_source_name_58;
        PyObject *tmp_mvar_value_58;
        tmp_mvar_value_58 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_58 == NULL ))
        {
            tmp_mvar_value_58 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_58 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 196;

            goto frame_exception_exit_1;
        }

        tmp_source_name_58 = tmp_mvar_value_58;
        tmp_assign_source_65 = LOOKUP_ATTRIBUTE( tmp_source_name_58, const_str_plain_paPrimingOutput );
        if ( tmp_assign_source_65 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paPrimingOutput, tmp_assign_source_65 );
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = MAKE_FUNCTION_pyaudio$$$function_1_get_sample_size(  );



        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_get_sample_size, tmp_assign_source_66 );
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_true_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_67 = MAKE_FUNCTION_pyaudio$$$function_2_get_format_from_width( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_get_format_from_width, tmp_assign_source_67 );
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = MAKE_FUNCTION_pyaudio$$$function_3_get_portaudio_version(  );



        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_get_portaudio_version, tmp_assign_source_68 );
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = MAKE_FUNCTION_pyaudio$$$function_4_get_portaudio_version_text(  );



        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_get_portaudio_version_text, tmp_assign_source_69 );
    }
    {
        PyObject *tmp_assign_source_70;
        {
            PyObject *tmp_assign_source_71;
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_false_false_none_none_int_pos_1024_true_none_none_none_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_assign_source_71 = MAKE_FUNCTION_pyaudio$$$function_5___init__( tmp_defaults_2 );



            assert( tmp_locals_pyaudio_268_key___init__ == NULL );
            tmp_locals_pyaudio_268_key___init__ = tmp_assign_source_71;
        }
        {
            PyObject *tmp_assign_source_72;
            tmp_assign_source_72 = MAKE_FUNCTION_pyaudio$$$function_6_close(  );



            assert( tmp_locals_pyaudio_268_key_close == NULL );
            tmp_locals_pyaudio_268_key_close = tmp_assign_source_72;
        }
        {
            PyObject *tmp_assign_source_73;
            tmp_assign_source_73 = MAKE_FUNCTION_pyaudio$$$function_7_get_input_latency(  );



            assert( tmp_locals_pyaudio_268_key_get_input_latency == NULL );
            tmp_locals_pyaudio_268_key_get_input_latency = tmp_assign_source_73;
        }
        {
            PyObject *tmp_assign_source_74;
            tmp_assign_source_74 = MAKE_FUNCTION_pyaudio$$$function_8_get_output_latency(  );



            assert( tmp_locals_pyaudio_268_key_get_output_latency == NULL );
            tmp_locals_pyaudio_268_key_get_output_latency = tmp_assign_source_74;
        }
        {
            PyObject *tmp_assign_source_75;
            tmp_assign_source_75 = MAKE_FUNCTION_pyaudio$$$function_9_get_time(  );



            assert( tmp_locals_pyaudio_268_key_get_time == NULL );
            tmp_locals_pyaudio_268_key_get_time = tmp_assign_source_75;
        }
        {
            PyObject *tmp_assign_source_76;
            tmp_assign_source_76 = MAKE_FUNCTION_pyaudio$$$function_10_get_cpu_load(  );



            assert( tmp_locals_pyaudio_268_key_get_cpu_load == NULL );
            tmp_locals_pyaudio_268_key_get_cpu_load = tmp_assign_source_76;
        }
        {
            PyObject *tmp_assign_source_77;
            tmp_assign_source_77 = MAKE_FUNCTION_pyaudio$$$function_11_start_stream(  );



            assert( tmp_locals_pyaudio_268_key_start_stream == NULL );
            tmp_locals_pyaudio_268_key_start_stream = tmp_assign_source_77;
        }
        {
            PyObject *tmp_assign_source_78;
            tmp_assign_source_78 = MAKE_FUNCTION_pyaudio$$$function_12_stop_stream(  );



            assert( tmp_locals_pyaudio_268_key_stop_stream == NULL );
            tmp_locals_pyaudio_268_key_stop_stream = tmp_assign_source_78;
        }
        {
            PyObject *tmp_assign_source_79;
            tmp_assign_source_79 = MAKE_FUNCTION_pyaudio$$$function_13_is_active(  );



            assert( tmp_locals_pyaudio_268_key_is_active == NULL );
            tmp_locals_pyaudio_268_key_is_active = tmp_assign_source_79;
        }
        {
            PyObject *tmp_assign_source_80;
            tmp_assign_source_80 = MAKE_FUNCTION_pyaudio$$$function_14_is_stopped(  );



            assert( tmp_locals_pyaudio_268_key_is_stopped == NULL );
            tmp_locals_pyaudio_268_key_is_stopped = tmp_assign_source_80;
        }
        {
            PyObject *tmp_assign_source_81;
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = const_tuple_none_false_tuple;
            Py_INCREF( tmp_defaults_3 );
            tmp_assign_source_81 = MAKE_FUNCTION_pyaudio$$$function_15_write( tmp_defaults_3 );



            assert( tmp_locals_pyaudio_268_key_write == NULL );
            tmp_locals_pyaudio_268_key_write = tmp_assign_source_81;
        }
        {
            PyObject *tmp_assign_source_82;
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = const_tuple_true_tuple;
            Py_INCREF( tmp_defaults_4 );
            tmp_assign_source_82 = MAKE_FUNCTION_pyaudio$$$function_16_read( tmp_defaults_4 );



            assert( tmp_locals_pyaudio_268_key_read == NULL );
            tmp_locals_pyaudio_268_key_read = tmp_assign_source_82;
        }
        {
            PyObject *tmp_assign_source_83;
            tmp_assign_source_83 = MAKE_FUNCTION_pyaudio$$$function_17_get_read_available(  );



            assert( tmp_locals_pyaudio_268_key_get_read_available == NULL );
            tmp_locals_pyaudio_268_key_get_read_available = tmp_assign_source_83;
        }
        {
            PyObject *tmp_assign_source_84;
            tmp_assign_source_84 = MAKE_FUNCTION_pyaudio$$$function_18_get_write_available(  );



            assert( tmp_locals_pyaudio_268_key_get_write_available == NULL );
            tmp_locals_pyaudio_268_key_get_write_available = tmp_assign_source_84;
        }
        // Tried code:
        {
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            tmp_dict_value_1 = const_str_plain_pyaudio;
            tmp_dict_key_1 = const_str_plain___module__;
            tmp_assign_source_70 = _PyDict_NewPresized( 16 );
            tmp_res = PyDict_SetItem( tmp_assign_source_70, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_value_2 = const_str_digest_ff4cd58aae673e9b993096f8fb8182c3;
            tmp_dict_key_2 = const_str_plain___doc__;
            tmp_res = PyDict_SetItem( tmp_assign_source_70, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_268_key___init__ );
            tmp_dict_value_3 = tmp_locals_pyaudio_268_key___init__;
            tmp_dict_key_3 = const_str_plain___init__;
            tmp_res = PyDict_SetItem( tmp_assign_source_70, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_268_key_close );
            tmp_dict_value_4 = tmp_locals_pyaudio_268_key_close;
            tmp_dict_key_4 = const_str_plain_close;
            tmp_res = PyDict_SetItem( tmp_assign_source_70, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_268_key_get_input_latency );
            tmp_dict_value_5 = tmp_locals_pyaudio_268_key_get_input_latency;
            tmp_dict_key_5 = const_str_plain_get_input_latency;
            tmp_res = PyDict_SetItem( tmp_assign_source_70, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_268_key_get_output_latency );
            tmp_dict_value_6 = tmp_locals_pyaudio_268_key_get_output_latency;
            tmp_dict_key_6 = const_str_plain_get_output_latency;
            tmp_res = PyDict_SetItem( tmp_assign_source_70, tmp_dict_key_6, tmp_dict_value_6 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_268_key_get_time );
            tmp_dict_value_7 = tmp_locals_pyaudio_268_key_get_time;
            tmp_dict_key_7 = const_str_plain_get_time;
            tmp_res = PyDict_SetItem( tmp_assign_source_70, tmp_dict_key_7, tmp_dict_value_7 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_268_key_get_cpu_load );
            tmp_dict_value_8 = tmp_locals_pyaudio_268_key_get_cpu_load;
            tmp_dict_key_8 = const_str_plain_get_cpu_load;
            tmp_res = PyDict_SetItem( tmp_assign_source_70, tmp_dict_key_8, tmp_dict_value_8 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_268_key_start_stream );
            tmp_dict_value_9 = tmp_locals_pyaudio_268_key_start_stream;
            tmp_dict_key_9 = const_str_plain_start_stream;
            tmp_res = PyDict_SetItem( tmp_assign_source_70, tmp_dict_key_9, tmp_dict_value_9 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_268_key_stop_stream );
            tmp_dict_value_10 = tmp_locals_pyaudio_268_key_stop_stream;
            tmp_dict_key_10 = const_str_plain_stop_stream;
            tmp_res = PyDict_SetItem( tmp_assign_source_70, tmp_dict_key_10, tmp_dict_value_10 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_268_key_is_active );
            tmp_dict_value_11 = tmp_locals_pyaudio_268_key_is_active;
            tmp_dict_key_11 = const_str_plain_is_active;
            tmp_res = PyDict_SetItem( tmp_assign_source_70, tmp_dict_key_11, tmp_dict_value_11 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_268_key_is_stopped );
            tmp_dict_value_12 = tmp_locals_pyaudio_268_key_is_stopped;
            tmp_dict_key_12 = const_str_plain_is_stopped;
            tmp_res = PyDict_SetItem( tmp_assign_source_70, tmp_dict_key_12, tmp_dict_value_12 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_268_key_write );
            tmp_dict_value_13 = tmp_locals_pyaudio_268_key_write;
            tmp_dict_key_13 = const_str_plain_write;
            tmp_res = PyDict_SetItem( tmp_assign_source_70, tmp_dict_key_13, tmp_dict_value_13 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_268_key_read );
            tmp_dict_value_14 = tmp_locals_pyaudio_268_key_read;
            tmp_dict_key_14 = const_str_plain_read;
            tmp_res = PyDict_SetItem( tmp_assign_source_70, tmp_dict_key_14, tmp_dict_value_14 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_268_key_get_read_available );
            tmp_dict_value_15 = tmp_locals_pyaudio_268_key_get_read_available;
            tmp_dict_key_15 = const_str_plain_get_read_available;
            tmp_res = PyDict_SetItem( tmp_assign_source_70, tmp_dict_key_15, tmp_dict_value_15 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_268_key_get_write_available );
            tmp_dict_value_16 = tmp_locals_pyaudio_268_key_get_write_available;
            tmp_dict_key_16 = const_str_plain_get_write_available;
            tmp_res = PyDict_SetItem( tmp_assign_source_70, tmp_dict_key_16, tmp_dict_value_16 );
            assert( !(tmp_res != 0) );
            goto try_return_handler_2;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyaudio );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_268_key___init__ );
        Py_DECREF( tmp_locals_pyaudio_268_key___init__ );
        tmp_locals_pyaudio_268_key___init__ = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_268_key_close );
        Py_DECREF( tmp_locals_pyaudio_268_key_close );
        tmp_locals_pyaudio_268_key_close = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_268_key_get_input_latency );
        Py_DECREF( tmp_locals_pyaudio_268_key_get_input_latency );
        tmp_locals_pyaudio_268_key_get_input_latency = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_268_key_get_output_latency );
        Py_DECREF( tmp_locals_pyaudio_268_key_get_output_latency );
        tmp_locals_pyaudio_268_key_get_output_latency = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_268_key_get_time );
        Py_DECREF( tmp_locals_pyaudio_268_key_get_time );
        tmp_locals_pyaudio_268_key_get_time = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_268_key_get_cpu_load );
        Py_DECREF( tmp_locals_pyaudio_268_key_get_cpu_load );
        tmp_locals_pyaudio_268_key_get_cpu_load = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_268_key_start_stream );
        Py_DECREF( tmp_locals_pyaudio_268_key_start_stream );
        tmp_locals_pyaudio_268_key_start_stream = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_268_key_stop_stream );
        Py_DECREF( tmp_locals_pyaudio_268_key_stop_stream );
        tmp_locals_pyaudio_268_key_stop_stream = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_268_key_is_active );
        Py_DECREF( tmp_locals_pyaudio_268_key_is_active );
        tmp_locals_pyaudio_268_key_is_active = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_268_key_is_stopped );
        Py_DECREF( tmp_locals_pyaudio_268_key_is_stopped );
        tmp_locals_pyaudio_268_key_is_stopped = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_268_key_write );
        Py_DECREF( tmp_locals_pyaudio_268_key_write );
        tmp_locals_pyaudio_268_key_write = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_268_key_read );
        Py_DECREF( tmp_locals_pyaudio_268_key_read );
        tmp_locals_pyaudio_268_key_read = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_268_key_get_read_available );
        Py_DECREF( tmp_locals_pyaudio_268_key_get_read_available );
        tmp_locals_pyaudio_268_key_get_read_available = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_268_key_get_write_available );
        Py_DECREF( tmp_locals_pyaudio_268_key_get_write_available );
        tmp_locals_pyaudio_268_key_get_write_available = NULL;

        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( pyaudio );
        return MOD_RETURN_VALUE( NULL );
        outline_result_1:;
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_70;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_85;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        tmp_key_name_1 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_dict_name_1 = tmp_class_creation_1__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 268;

            goto try_except_handler_3;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_dict_name_2 = tmp_class_creation_1__class_dict;
        tmp_key_name_2 = const_str_plain___metaclass__;
        tmp_assign_source_85 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_assign_source_85 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 268;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        // Tried code:
        {
            PyObject *tmp_mvar_value_59;
            tmp_mvar_value_59 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain___metaclass__ );

            if (unlikely( tmp_mvar_value_59 == NULL ))
            {
                tmp_mvar_value_59 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___metaclass__ );
            }

            if ( tmp_mvar_value_59 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "__metaclass__" );
                exception_tb = NULL;

                exception_lineno = 268;

                goto try_except_handler_4;
            }

            tmp_assign_source_85 = tmp_mvar_value_59;
            Py_INCREF( tmp_assign_source_85 );
            goto outline_result_2;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyaudio );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( exception_keeper_type_2 );
        Py_XDECREF( exception_keeper_value_2 );
        Py_XDECREF( exception_keeper_tb_2 );
        tmp_assign_source_85 = (PyObject *)&PyClass_Type;
        Py_INCREF( tmp_assign_source_85 );
        goto outline_result_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( pyaudio );
        return MOD_RETURN_VALUE( NULL );
        outline_result_2:;
        condexpr_end_1:;
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_85;
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = const_str_plain_Stream;
        tmp_args_element_name_2 = const_tuple_empty;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_2c7187073e5bfc034c60cff922190a77->m_frame.f_lineno = 268;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_86 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_86 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 268;

            goto try_except_handler_3;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_86;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_87;
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_assign_source_87 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_Stream, tmp_assign_source_87 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    {
        PyObject *tmp_assign_source_88;
        {
            PyObject *tmp_assign_source_89;
            tmp_assign_source_89 = MAKE_FUNCTION_pyaudio$$$function_19___init__(  );



            assert( tmp_locals_pyaudio_637_key___init__ == NULL );
            tmp_locals_pyaudio_637_key___init__ = tmp_assign_source_89;
        }
        {
            PyObject *tmp_assign_source_90;
            tmp_assign_source_90 = MAKE_FUNCTION_pyaudio$$$function_20_terminate(  );



            assert( tmp_locals_pyaudio_637_key_terminate == NULL );
            tmp_locals_pyaudio_637_key_terminate = tmp_assign_source_90;
        }
        {
            PyObject *tmp_assign_source_91;
            tmp_assign_source_91 = MAKE_FUNCTION_pyaudio$$$function_21_get_sample_size(  );



            assert( tmp_locals_pyaudio_637_key_get_sample_size == NULL );
            tmp_locals_pyaudio_637_key_get_sample_size = tmp_assign_source_91;
        }
        {
            PyObject *tmp_assign_source_92;
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = const_tuple_true_tuple;
            Py_INCREF( tmp_defaults_5 );
            tmp_assign_source_92 = MAKE_FUNCTION_pyaudio$$$function_22_get_format_from_width( tmp_defaults_5 );



            assert( tmp_locals_pyaudio_637_key_get_format_from_width == NULL );
            tmp_locals_pyaudio_637_key_get_format_from_width = tmp_assign_source_92;
        }
        {
            PyObject *tmp_assign_source_93;
            tmp_assign_source_93 = MAKE_FUNCTION_pyaudio$$$function_23_open(  );



            assert( tmp_locals_pyaudio_637_key_open == NULL );
            tmp_locals_pyaudio_637_key_open = tmp_assign_source_93;
        }
        {
            PyObject *tmp_assign_source_94;
            tmp_assign_source_94 = MAKE_FUNCTION_pyaudio$$$function_24_close(  );



            assert( tmp_locals_pyaudio_637_key_close == NULL );
            tmp_locals_pyaudio_637_key_close = tmp_assign_source_94;
        }
        {
            PyObject *tmp_assign_source_95;
            tmp_assign_source_95 = MAKE_FUNCTION_pyaudio$$$function_25__remove_stream(  );



            assert( tmp_locals_pyaudio_637_key__remove_stream == NULL );
            tmp_locals_pyaudio_637_key__remove_stream = tmp_assign_source_95;
        }
        {
            PyObject *tmp_assign_source_96;
            tmp_assign_source_96 = MAKE_FUNCTION_pyaudio$$$function_26_get_host_api_count(  );



            assert( tmp_locals_pyaudio_637_key_get_host_api_count == NULL );
            tmp_locals_pyaudio_637_key_get_host_api_count = tmp_assign_source_96;
        }
        {
            PyObject *tmp_assign_source_97;
            tmp_assign_source_97 = MAKE_FUNCTION_pyaudio$$$function_27_get_default_host_api_info(  );



            assert( tmp_locals_pyaudio_637_key_get_default_host_api_info == NULL );
            tmp_locals_pyaudio_637_key_get_default_host_api_info = tmp_assign_source_97;
        }
        {
            PyObject *tmp_assign_source_98;
            tmp_assign_source_98 = MAKE_FUNCTION_pyaudio$$$function_28_get_host_api_info_by_type(  );



            assert( tmp_locals_pyaudio_637_key_get_host_api_info_by_type == NULL );
            tmp_locals_pyaudio_637_key_get_host_api_info_by_type = tmp_assign_source_98;
        }
        {
            PyObject *tmp_assign_source_99;
            tmp_assign_source_99 = MAKE_FUNCTION_pyaudio$$$function_29_get_host_api_info_by_index(  );



            assert( tmp_locals_pyaudio_637_key_get_host_api_info_by_index == NULL );
            tmp_locals_pyaudio_637_key_get_host_api_info_by_index = tmp_assign_source_99;
        }
        {
            PyObject *tmp_assign_source_100;
            tmp_assign_source_100 = MAKE_FUNCTION_pyaudio$$$function_30_get_device_info_by_host_api_device_index(  );



            assert( tmp_locals_pyaudio_637_key_get_device_info_by_host_api_device_index == NULL );
            tmp_locals_pyaudio_637_key_get_device_info_by_host_api_device_index = tmp_assign_source_100;
        }
        {
            PyObject *tmp_assign_source_101;
            tmp_assign_source_101 = MAKE_FUNCTION_pyaudio$$$function_31__make_host_api_dictionary(  );



            assert( tmp_locals_pyaudio_637_key__make_host_api_dictionary == NULL );
            tmp_locals_pyaudio_637_key__make_host_api_dictionary = tmp_assign_source_101;
        }
        {
            PyObject *tmp_assign_source_102;
            tmp_assign_source_102 = MAKE_FUNCTION_pyaudio$$$function_32_get_device_count(  );



            assert( tmp_locals_pyaudio_637_key_get_device_count == NULL );
            tmp_locals_pyaudio_637_key_get_device_count = tmp_assign_source_102;
        }
        {
            PyObject *tmp_assign_source_103;
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = const_tuple_none_none_none_none_none_none_tuple;
            Py_INCREF( tmp_defaults_6 );
            tmp_assign_source_103 = MAKE_FUNCTION_pyaudio$$$function_33_is_format_supported( tmp_defaults_6 );



            assert( tmp_locals_pyaudio_637_key_is_format_supported == NULL );
            tmp_locals_pyaudio_637_key_is_format_supported = tmp_assign_source_103;
        }
        {
            PyObject *tmp_assign_source_104;
            tmp_assign_source_104 = MAKE_FUNCTION_pyaudio$$$function_34_get_default_input_device_info(  );



            assert( tmp_locals_pyaudio_637_key_get_default_input_device_info == NULL );
            tmp_locals_pyaudio_637_key_get_default_input_device_info = tmp_assign_source_104;
        }
        {
            PyObject *tmp_assign_source_105;
            tmp_assign_source_105 = MAKE_FUNCTION_pyaudio$$$function_35_get_default_output_device_info(  );



            assert( tmp_locals_pyaudio_637_key_get_default_output_device_info == NULL );
            tmp_locals_pyaudio_637_key_get_default_output_device_info = tmp_assign_source_105;
        }
        {
            PyObject *tmp_assign_source_106;
            tmp_assign_source_106 = MAKE_FUNCTION_pyaudio$$$function_36_get_device_info_by_index(  );



            assert( tmp_locals_pyaudio_637_key_get_device_info_by_index == NULL );
            tmp_locals_pyaudio_637_key_get_device_info_by_index = tmp_assign_source_106;
        }
        {
            PyObject *tmp_assign_source_107;
            tmp_assign_source_107 = MAKE_FUNCTION_pyaudio$$$function_37__make_device_info_dictionary(  );



            assert( tmp_locals_pyaudio_637_key__make_device_info_dictionary == NULL );
            tmp_locals_pyaudio_637_key__make_device_info_dictionary = tmp_assign_source_107;
        }
        // Tried code:
        {
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            PyObject *tmp_dict_key_21;
            PyObject *tmp_dict_value_21;
            PyObject *tmp_dict_key_22;
            PyObject *tmp_dict_value_22;
            PyObject *tmp_dict_key_23;
            PyObject *tmp_dict_value_23;
            PyObject *tmp_dict_key_24;
            PyObject *tmp_dict_value_24;
            PyObject *tmp_dict_key_25;
            PyObject *tmp_dict_value_25;
            PyObject *tmp_dict_key_26;
            PyObject *tmp_dict_value_26;
            PyObject *tmp_dict_key_27;
            PyObject *tmp_dict_value_27;
            PyObject *tmp_dict_key_28;
            PyObject *tmp_dict_value_28;
            PyObject *tmp_dict_key_29;
            PyObject *tmp_dict_value_29;
            PyObject *tmp_dict_key_30;
            PyObject *tmp_dict_value_30;
            PyObject *tmp_dict_key_31;
            PyObject *tmp_dict_value_31;
            PyObject *tmp_dict_key_32;
            PyObject *tmp_dict_value_32;
            PyObject *tmp_dict_key_33;
            PyObject *tmp_dict_value_33;
            PyObject *tmp_dict_key_34;
            PyObject *tmp_dict_value_34;
            PyObject *tmp_dict_key_35;
            PyObject *tmp_dict_value_35;
            PyObject *tmp_dict_key_36;
            PyObject *tmp_dict_value_36;
            PyObject *tmp_dict_key_37;
            PyObject *tmp_dict_value_37;
            tmp_dict_value_17 = const_str_plain_pyaudio;
            tmp_dict_key_17 = const_str_plain___module__;
            tmp_assign_source_88 = _PyDict_NewPresized( 21 );
            tmp_res = PyDict_SetItem( tmp_assign_source_88, tmp_dict_key_17, tmp_dict_value_17 );
            assert( !(tmp_res != 0) );
            tmp_dict_value_18 = const_str_digest_7f0956d7ebb4a7c65d2a28295c626d5d;
            tmp_dict_key_18 = const_str_plain___doc__;
            tmp_res = PyDict_SetItem( tmp_assign_source_88, tmp_dict_key_18, tmp_dict_value_18 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_637_key___init__ );
            tmp_dict_value_19 = tmp_locals_pyaudio_637_key___init__;
            tmp_dict_key_19 = const_str_plain___init__;
            tmp_res = PyDict_SetItem( tmp_assign_source_88, tmp_dict_key_19, tmp_dict_value_19 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_637_key_terminate );
            tmp_dict_value_20 = tmp_locals_pyaudio_637_key_terminate;
            tmp_dict_key_20 = const_str_plain_terminate;
            tmp_res = PyDict_SetItem( tmp_assign_source_88, tmp_dict_key_20, tmp_dict_value_20 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_637_key_get_sample_size );
            tmp_dict_value_21 = tmp_locals_pyaudio_637_key_get_sample_size;
            tmp_dict_key_21 = const_str_plain_get_sample_size;
            tmp_res = PyDict_SetItem( tmp_assign_source_88, tmp_dict_key_21, tmp_dict_value_21 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_637_key_get_format_from_width );
            tmp_dict_value_22 = tmp_locals_pyaudio_637_key_get_format_from_width;
            tmp_dict_key_22 = const_str_plain_get_format_from_width;
            tmp_res = PyDict_SetItem( tmp_assign_source_88, tmp_dict_key_22, tmp_dict_value_22 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_637_key_open );
            tmp_dict_value_23 = tmp_locals_pyaudio_637_key_open;
            tmp_dict_key_23 = const_str_plain_open;
            tmp_res = PyDict_SetItem( tmp_assign_source_88, tmp_dict_key_23, tmp_dict_value_23 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_637_key_close );
            tmp_dict_value_24 = tmp_locals_pyaudio_637_key_close;
            tmp_dict_key_24 = const_str_plain_close;
            tmp_res = PyDict_SetItem( tmp_assign_source_88, tmp_dict_key_24, tmp_dict_value_24 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_637_key__remove_stream );
            tmp_dict_value_25 = tmp_locals_pyaudio_637_key__remove_stream;
            tmp_dict_key_25 = const_str_plain__remove_stream;
            tmp_res = PyDict_SetItem( tmp_assign_source_88, tmp_dict_key_25, tmp_dict_value_25 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_637_key_get_host_api_count );
            tmp_dict_value_26 = tmp_locals_pyaudio_637_key_get_host_api_count;
            tmp_dict_key_26 = const_str_plain_get_host_api_count;
            tmp_res = PyDict_SetItem( tmp_assign_source_88, tmp_dict_key_26, tmp_dict_value_26 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_637_key_get_default_host_api_info );
            tmp_dict_value_27 = tmp_locals_pyaudio_637_key_get_default_host_api_info;
            tmp_dict_key_27 = const_str_plain_get_default_host_api_info;
            tmp_res = PyDict_SetItem( tmp_assign_source_88, tmp_dict_key_27, tmp_dict_value_27 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_637_key_get_host_api_info_by_type );
            tmp_dict_value_28 = tmp_locals_pyaudio_637_key_get_host_api_info_by_type;
            tmp_dict_key_28 = const_str_plain_get_host_api_info_by_type;
            tmp_res = PyDict_SetItem( tmp_assign_source_88, tmp_dict_key_28, tmp_dict_value_28 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_637_key_get_host_api_info_by_index );
            tmp_dict_value_29 = tmp_locals_pyaudio_637_key_get_host_api_info_by_index;
            tmp_dict_key_29 = const_str_plain_get_host_api_info_by_index;
            tmp_res = PyDict_SetItem( tmp_assign_source_88, tmp_dict_key_29, tmp_dict_value_29 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_637_key_get_device_info_by_host_api_device_index );
            tmp_dict_value_30 = tmp_locals_pyaudio_637_key_get_device_info_by_host_api_device_index;
            tmp_dict_key_30 = const_str_plain_get_device_info_by_host_api_device_index;
            tmp_res = PyDict_SetItem( tmp_assign_source_88, tmp_dict_key_30, tmp_dict_value_30 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_637_key__make_host_api_dictionary );
            tmp_dict_value_31 = tmp_locals_pyaudio_637_key__make_host_api_dictionary;
            tmp_dict_key_31 = const_str_plain__make_host_api_dictionary;
            tmp_res = PyDict_SetItem( tmp_assign_source_88, tmp_dict_key_31, tmp_dict_value_31 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_637_key_get_device_count );
            tmp_dict_value_32 = tmp_locals_pyaudio_637_key_get_device_count;
            tmp_dict_key_32 = const_str_plain_get_device_count;
            tmp_res = PyDict_SetItem( tmp_assign_source_88, tmp_dict_key_32, tmp_dict_value_32 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_637_key_is_format_supported );
            tmp_dict_value_33 = tmp_locals_pyaudio_637_key_is_format_supported;
            tmp_dict_key_33 = const_str_plain_is_format_supported;
            tmp_res = PyDict_SetItem( tmp_assign_source_88, tmp_dict_key_33, tmp_dict_value_33 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_637_key_get_default_input_device_info );
            tmp_dict_value_34 = tmp_locals_pyaudio_637_key_get_default_input_device_info;
            tmp_dict_key_34 = const_str_plain_get_default_input_device_info;
            tmp_res = PyDict_SetItem( tmp_assign_source_88, tmp_dict_key_34, tmp_dict_value_34 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_637_key_get_default_output_device_info );
            tmp_dict_value_35 = tmp_locals_pyaudio_637_key_get_default_output_device_info;
            tmp_dict_key_35 = const_str_plain_get_default_output_device_info;
            tmp_res = PyDict_SetItem( tmp_assign_source_88, tmp_dict_key_35, tmp_dict_value_35 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_637_key_get_device_info_by_index );
            tmp_dict_value_36 = tmp_locals_pyaudio_637_key_get_device_info_by_index;
            tmp_dict_key_36 = const_str_plain_get_device_info_by_index;
            tmp_res = PyDict_SetItem( tmp_assign_source_88, tmp_dict_key_36, tmp_dict_value_36 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_pyaudio_637_key__make_device_info_dictionary );
            tmp_dict_value_37 = tmp_locals_pyaudio_637_key__make_device_info_dictionary;
            tmp_dict_key_37 = const_str_plain__make_device_info_dictionary;
            tmp_res = PyDict_SetItem( tmp_assign_source_88, tmp_dict_key_37, tmp_dict_value_37 );
            assert( !(tmp_res != 0) );
            goto try_return_handler_5;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyaudio );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_637_key___init__ );
        Py_DECREF( tmp_locals_pyaudio_637_key___init__ );
        tmp_locals_pyaudio_637_key___init__ = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_637_key_terminate );
        Py_DECREF( tmp_locals_pyaudio_637_key_terminate );
        tmp_locals_pyaudio_637_key_terminate = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_637_key_get_sample_size );
        Py_DECREF( tmp_locals_pyaudio_637_key_get_sample_size );
        tmp_locals_pyaudio_637_key_get_sample_size = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_637_key_get_format_from_width );
        Py_DECREF( tmp_locals_pyaudio_637_key_get_format_from_width );
        tmp_locals_pyaudio_637_key_get_format_from_width = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_637_key_open );
        Py_DECREF( tmp_locals_pyaudio_637_key_open );
        tmp_locals_pyaudio_637_key_open = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_637_key_close );
        Py_DECREF( tmp_locals_pyaudio_637_key_close );
        tmp_locals_pyaudio_637_key_close = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_637_key__remove_stream );
        Py_DECREF( tmp_locals_pyaudio_637_key__remove_stream );
        tmp_locals_pyaudio_637_key__remove_stream = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_637_key_get_host_api_count );
        Py_DECREF( tmp_locals_pyaudio_637_key_get_host_api_count );
        tmp_locals_pyaudio_637_key_get_host_api_count = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_637_key_get_default_host_api_info );
        Py_DECREF( tmp_locals_pyaudio_637_key_get_default_host_api_info );
        tmp_locals_pyaudio_637_key_get_default_host_api_info = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_637_key_get_host_api_info_by_type );
        Py_DECREF( tmp_locals_pyaudio_637_key_get_host_api_info_by_type );
        tmp_locals_pyaudio_637_key_get_host_api_info_by_type = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_637_key_get_host_api_info_by_index );
        Py_DECREF( tmp_locals_pyaudio_637_key_get_host_api_info_by_index );
        tmp_locals_pyaudio_637_key_get_host_api_info_by_index = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_637_key_get_device_info_by_host_api_device_index );
        Py_DECREF( tmp_locals_pyaudio_637_key_get_device_info_by_host_api_device_index );
        tmp_locals_pyaudio_637_key_get_device_info_by_host_api_device_index = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_637_key__make_host_api_dictionary );
        Py_DECREF( tmp_locals_pyaudio_637_key__make_host_api_dictionary );
        tmp_locals_pyaudio_637_key__make_host_api_dictionary = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_637_key_get_device_count );
        Py_DECREF( tmp_locals_pyaudio_637_key_get_device_count );
        tmp_locals_pyaudio_637_key_get_device_count = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_637_key_is_format_supported );
        Py_DECREF( tmp_locals_pyaudio_637_key_is_format_supported );
        tmp_locals_pyaudio_637_key_is_format_supported = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_637_key_get_default_input_device_info );
        Py_DECREF( tmp_locals_pyaudio_637_key_get_default_input_device_info );
        tmp_locals_pyaudio_637_key_get_default_input_device_info = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_637_key_get_default_output_device_info );
        Py_DECREF( tmp_locals_pyaudio_637_key_get_default_output_device_info );
        tmp_locals_pyaudio_637_key_get_default_output_device_info = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_637_key_get_device_info_by_index );
        Py_DECREF( tmp_locals_pyaudio_637_key_get_device_info_by_index );
        tmp_locals_pyaudio_637_key_get_device_info_by_index = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_pyaudio_637_key__make_device_info_dictionary );
        Py_DECREF( tmp_locals_pyaudio_637_key__make_device_info_dictionary );
        tmp_locals_pyaudio_637_key__make_device_info_dictionary = NULL;

        goto outline_result_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( pyaudio );
        return MOD_RETURN_VALUE( NULL );
        outline_result_3:;
        assert( tmp_class_creation_2__class_dict == NULL );
        tmp_class_creation_2__class_dict = tmp_assign_source_88;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_108;
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_name_3;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_key_name_4;
        tmp_key_name_3 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_2__class_dict );
        tmp_dict_name_3 = tmp_class_creation_2__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 637;

            goto try_except_handler_6;
        }
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_2;
        }
        else
        {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT( tmp_class_creation_2__class_dict );
        tmp_dict_name_4 = tmp_class_creation_2__class_dict;
        tmp_key_name_4 = const_str_plain___metaclass__;
        tmp_assign_source_108 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_assign_source_108 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 637;

            goto try_except_handler_6;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        // Tried code:
        {
            PyObject *tmp_mvar_value_60;
            tmp_mvar_value_60 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain___metaclass__ );

            if (unlikely( tmp_mvar_value_60 == NULL ))
            {
                tmp_mvar_value_60 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___metaclass__ );
            }

            if ( tmp_mvar_value_60 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "__metaclass__" );
                exception_tb = NULL;

                exception_lineno = 637;

                goto try_except_handler_7;
            }

            tmp_assign_source_108 = tmp_mvar_value_60;
            Py_INCREF( tmp_assign_source_108 );
            goto outline_result_4;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( pyaudio );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( exception_keeper_type_4 );
        Py_XDECREF( exception_keeper_value_4 );
        Py_XDECREF( exception_keeper_tb_4 );
        tmp_assign_source_108 = (PyObject *)&PyClass_Type;
        Py_INCREF( tmp_assign_source_108 );
        goto outline_result_4;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( pyaudio );
        return MOD_RETURN_VALUE( NULL );
        outline_result_4:;
        condexpr_end_2:;
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_108;
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_called_name_2 = tmp_class_creation_2__metaclass;
        tmp_args_element_name_4 = const_str_plain_PyAudio;
        tmp_args_element_name_5 = const_tuple_empty;
        CHECK_OBJECT( tmp_class_creation_2__class_dict );
        tmp_args_element_name_6 = tmp_class_creation_2__class_dict;
        frame_2c7187073e5bfc034c60cff922190a77->m_frame.f_lineno = 637;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_109 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_109 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 637;

            goto try_except_handler_6;
        }
        assert( tmp_class_creation_2__class == NULL );
        tmp_class_creation_2__class = tmp_assign_source_109;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_dict );
    Py_DECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_110;
        CHECK_OBJECT( tmp_class_creation_2__class );
        tmp_assign_source_110 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_PyAudio, tmp_assign_source_110 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class );
    Py_DECREF( tmp_class_creation_2__class );
    tmp_class_creation_2__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_dict );
    Py_DECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    {
        nuitka_bool tmp_assign_source_111;
        tmp_assign_source_111 = NUITKA_BOOL_TRUE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_111;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_source_name_59;
        PyObject *tmp_mvar_value_61;
        tmp_mvar_value_61 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

        if (unlikely( tmp_mvar_value_61 == NULL ))
        {
            tmp_mvar_value_61 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
        }

        if ( tmp_mvar_value_61 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
            exception_tb = NULL;

            exception_lineno = 1027;

            goto try_except_handler_9;
        }

        tmp_source_name_59 = tmp_mvar_value_61;
        tmp_assign_source_112 = LOOKUP_ATTRIBUTE( tmp_source_name_59, const_str_plain_paMacCoreStreamInfo );
        if ( tmp_assign_source_112 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1027;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_paMacCoreStreamInfo, tmp_assign_source_112 );
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        nuitka_bool tmp_assign_source_113;
        tmp_assign_source_113 = NUITKA_BOOL_FALSE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_113;
    }
    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_2c7187073e5bfc034c60cff922190a77 );
    if ( exception_keeper_tb_6 == NULL )
    {
        exception_keeper_tb_6 = MAKE_TRACEBACK( frame_2c7187073e5bfc034c60cff922190a77, exception_keeper_lineno_6 );
    }
    else if ( exception_keeper_lineno_6 != 0 )
    {
        exception_keeper_tb_6 = ADD_TRACEBACK( exception_keeper_tb_6, frame_2c7187073e5bfc034c60cff922190a77, exception_keeper_lineno_6 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    PUBLISH_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1028;

            goto try_except_handler_8;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1028;

            goto try_except_handler_8;
        }
        tmp_condition_result_4 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 1026;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_2c7187073e5bfc034c60cff922190a77->m_frame) frame_2c7187073e5bfc034c60cff922190a77->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_8;
        branch_no_2:;
    }
    goto try_end_4;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyaudio );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_4:;
    {
        nuitka_bool tmp_condition_result_5;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert( tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_try_except_1__unhandled_indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        // Tried code:
        {
            PyObject *tmp_assign_source_114;
            {
                PyObject *tmp_set_locals_1;
                tmp_set_locals_1 = PyDict_New();
                locals_pyaudio_1031 = tmp_set_locals_1;
            }
            tmp_dictset_value = const_str_plain_pyaudio;
            tmp_res = PyDict_SetItem( locals_pyaudio_1031, const_str_plain___module__, tmp_dictset_value );
            assert( !(tmp_res != 0) );
            tmp_dictset_value = const_str_digest_f31207aebb5430eebc6f1dd00a3eee10;
            tmp_res = PyDict_SetItem( locals_pyaudio_1031, const_str_plain___doc__, tmp_dictset_value );
            assert( !(tmp_res != 0) );
            // Tried code:
            MAKE_OR_REUSE_FRAME( cache_frame_2b3e849cf3b280654b643122de2dddfa_2, codeobj_2b3e849cf3b280654b643122de2dddfa, module_pyaudio, 0 );
            frame_2b3e849cf3b280654b643122de2dddfa_2 = cache_frame_2b3e849cf3b280654b643122de2dddfa_2;

            // Push the new frame as the currently active one.
            pushFrameStack( frame_2b3e849cf3b280654b643122de2dddfa_2 );

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert( Py_REFCNT( frame_2b3e849cf3b280654b643122de2dddfa_2 ) == 2 ); // Frame stack

            // Framed code:
            {
                PyObject *tmp_source_name_60;
                PyObject *tmp_mvar_value_62;
                tmp_mvar_value_62 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

                if (unlikely( tmp_mvar_value_62 == NULL ))
                {
                    tmp_mvar_value_62 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
                }

                if ( tmp_mvar_value_62 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
                    exception_tb = NULL;

                    exception_lineno = 1063;

                    goto frame_exception_exit_2;
                }

                tmp_source_name_60 = tmp_mvar_value_62;
                tmp_dictset_value = LOOKUP_ATTRIBUTE( tmp_source_name_60, const_str_plain_paMacCoreChangeDeviceParameters );
                if ( tmp_dictset_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1063;

                    goto frame_exception_exit_2;
                }
                tmp_res = PyDict_SetItem( locals_pyaudio_1031, const_str_plain_paMacCoreChangeDeviceParameters, tmp_dictset_value );
                Py_DECREF( tmp_dictset_value );
                if ( tmp_res != 0 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1063;

                    goto frame_exception_exit_2;
                }
            }
            {
                PyObject *tmp_source_name_61;
                PyObject *tmp_mvar_value_63;
                tmp_mvar_value_63 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

                if (unlikely( tmp_mvar_value_63 == NULL ))
                {
                    tmp_mvar_value_63 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
                }

                if ( tmp_mvar_value_63 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
                    exception_tb = NULL;

                    exception_lineno = 1064;

                    goto frame_exception_exit_2;
                }

                tmp_source_name_61 = tmp_mvar_value_63;
                tmp_dictset_value = LOOKUP_ATTRIBUTE( tmp_source_name_61, const_str_plain_paMacCoreFailIfConversionRequired );
                if ( tmp_dictset_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1064;

                    goto frame_exception_exit_2;
                }
                tmp_res = PyDict_SetItem( locals_pyaudio_1031, const_str_plain_paMacCoreFailIfConversionRequired, tmp_dictset_value );
                Py_DECREF( tmp_dictset_value );
                if ( tmp_res != 0 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1064;

                    goto frame_exception_exit_2;
                }
            }
            {
                PyObject *tmp_source_name_62;
                PyObject *tmp_mvar_value_64;
                tmp_mvar_value_64 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

                if (unlikely( tmp_mvar_value_64 == NULL ))
                {
                    tmp_mvar_value_64 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
                }

                if ( tmp_mvar_value_64 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
                    exception_tb = NULL;

                    exception_lineno = 1065;

                    goto frame_exception_exit_2;
                }

                tmp_source_name_62 = tmp_mvar_value_64;
                tmp_dictset_value = LOOKUP_ATTRIBUTE( tmp_source_name_62, const_str_plain_paMacCoreConversionQualityMin );
                if ( tmp_dictset_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1065;

                    goto frame_exception_exit_2;
                }
                tmp_res = PyDict_SetItem( locals_pyaudio_1031, const_str_plain_paMacCoreConversionQualityMin, tmp_dictset_value );
                Py_DECREF( tmp_dictset_value );
                if ( tmp_res != 0 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1065;

                    goto frame_exception_exit_2;
                }
            }
            {
                PyObject *tmp_source_name_63;
                PyObject *tmp_mvar_value_65;
                tmp_mvar_value_65 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

                if (unlikely( tmp_mvar_value_65 == NULL ))
                {
                    tmp_mvar_value_65 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
                }

                if ( tmp_mvar_value_65 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
                    exception_tb = NULL;

                    exception_lineno = 1066;

                    goto frame_exception_exit_2;
                }

                tmp_source_name_63 = tmp_mvar_value_65;
                tmp_dictset_value = LOOKUP_ATTRIBUTE( tmp_source_name_63, const_str_plain_paMacCoreConversionQualityMedium );
                if ( tmp_dictset_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1066;

                    goto frame_exception_exit_2;
                }
                tmp_res = PyDict_SetItem( locals_pyaudio_1031, const_str_plain_paMacCoreConversionQualityMedium, tmp_dictset_value );
                Py_DECREF( tmp_dictset_value );
                if ( tmp_res != 0 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1066;

                    goto frame_exception_exit_2;
                }
            }
            {
                PyObject *tmp_source_name_64;
                PyObject *tmp_mvar_value_66;
                tmp_mvar_value_66 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

                if (unlikely( tmp_mvar_value_66 == NULL ))
                {
                    tmp_mvar_value_66 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
                }

                if ( tmp_mvar_value_66 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
                    exception_tb = NULL;

                    exception_lineno = 1067;

                    goto frame_exception_exit_2;
                }

                tmp_source_name_64 = tmp_mvar_value_66;
                tmp_dictset_value = LOOKUP_ATTRIBUTE( tmp_source_name_64, const_str_plain_paMacCoreConversionQualityLow );
                if ( tmp_dictset_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1067;

                    goto frame_exception_exit_2;
                }
                tmp_res = PyDict_SetItem( locals_pyaudio_1031, const_str_plain_paMacCoreConversionQualityLow, tmp_dictset_value );
                Py_DECREF( tmp_dictset_value );
                if ( tmp_res != 0 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1067;

                    goto frame_exception_exit_2;
                }
            }
            {
                PyObject *tmp_source_name_65;
                PyObject *tmp_mvar_value_67;
                tmp_mvar_value_67 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

                if (unlikely( tmp_mvar_value_67 == NULL ))
                {
                    tmp_mvar_value_67 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
                }

                if ( tmp_mvar_value_67 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
                    exception_tb = NULL;

                    exception_lineno = 1068;

                    goto frame_exception_exit_2;
                }

                tmp_source_name_65 = tmp_mvar_value_67;
                tmp_dictset_value = LOOKUP_ATTRIBUTE( tmp_source_name_65, const_str_plain_paMacCoreConversionQualityHigh );
                if ( tmp_dictset_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1068;

                    goto frame_exception_exit_2;
                }
                tmp_res = PyDict_SetItem( locals_pyaudio_1031, const_str_plain_paMacCoreConversionQualityHigh, tmp_dictset_value );
                Py_DECREF( tmp_dictset_value );
                if ( tmp_res != 0 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1068;

                    goto frame_exception_exit_2;
                }
            }
            {
                PyObject *tmp_source_name_66;
                PyObject *tmp_mvar_value_68;
                tmp_mvar_value_68 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

                if (unlikely( tmp_mvar_value_68 == NULL ))
                {
                    tmp_mvar_value_68 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
                }

                if ( tmp_mvar_value_68 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
                    exception_tb = NULL;

                    exception_lineno = 1069;

                    goto frame_exception_exit_2;
                }

                tmp_source_name_66 = tmp_mvar_value_68;
                tmp_dictset_value = LOOKUP_ATTRIBUTE( tmp_source_name_66, const_str_plain_paMacCoreConversionQualityMax );
                if ( tmp_dictset_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1069;

                    goto frame_exception_exit_2;
                }
                tmp_res = PyDict_SetItem( locals_pyaudio_1031, const_str_plain_paMacCoreConversionQualityMax, tmp_dictset_value );
                Py_DECREF( tmp_dictset_value );
                if ( tmp_res != 0 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1069;

                    goto frame_exception_exit_2;
                }
            }
            {
                PyObject *tmp_source_name_67;
                PyObject *tmp_mvar_value_69;
                tmp_mvar_value_69 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

                if (unlikely( tmp_mvar_value_69 == NULL ))
                {
                    tmp_mvar_value_69 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
                }

                if ( tmp_mvar_value_69 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
                    exception_tb = NULL;

                    exception_lineno = 1070;

                    goto frame_exception_exit_2;
                }

                tmp_source_name_67 = tmp_mvar_value_69;
                tmp_dictset_value = LOOKUP_ATTRIBUTE( tmp_source_name_67, const_str_plain_paMacCorePlayNice );
                if ( tmp_dictset_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1070;

                    goto frame_exception_exit_2;
                }
                tmp_res = PyDict_SetItem( locals_pyaudio_1031, const_str_plain_paMacCorePlayNice, tmp_dictset_value );
                Py_DECREF( tmp_dictset_value );
                if ( tmp_res != 0 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1070;

                    goto frame_exception_exit_2;
                }
            }
            {
                PyObject *tmp_source_name_68;
                PyObject *tmp_mvar_value_70;
                tmp_mvar_value_70 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

                if (unlikely( tmp_mvar_value_70 == NULL ))
                {
                    tmp_mvar_value_70 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
                }

                if ( tmp_mvar_value_70 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
                    exception_tb = NULL;

                    exception_lineno = 1071;

                    goto frame_exception_exit_2;
                }

                tmp_source_name_68 = tmp_mvar_value_70;
                tmp_dictset_value = LOOKUP_ATTRIBUTE( tmp_source_name_68, const_str_plain_paMacCorePro );
                if ( tmp_dictset_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1071;

                    goto frame_exception_exit_2;
                }
                tmp_res = PyDict_SetItem( locals_pyaudio_1031, const_str_plain_paMacCorePro, tmp_dictset_value );
                Py_DECREF( tmp_dictset_value );
                if ( tmp_res != 0 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1071;

                    goto frame_exception_exit_2;
                }
            }
            {
                PyObject *tmp_source_name_69;
                PyObject *tmp_mvar_value_71;
                tmp_mvar_value_71 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

                if (unlikely( tmp_mvar_value_71 == NULL ))
                {
                    tmp_mvar_value_71 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
                }

                if ( tmp_mvar_value_71 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
                    exception_tb = NULL;

                    exception_lineno = 1072;

                    goto frame_exception_exit_2;
                }

                tmp_source_name_69 = tmp_mvar_value_71;
                tmp_dictset_value = LOOKUP_ATTRIBUTE( tmp_source_name_69, const_str_plain_paMacCoreMinimizeCPUButPlayNice );
                if ( tmp_dictset_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1072;

                    goto frame_exception_exit_2;
                }
                tmp_res = PyDict_SetItem( locals_pyaudio_1031, const_str_plain_paMacCoreMinimizeCPUButPlayNice, tmp_dictset_value );
                Py_DECREF( tmp_dictset_value );
                if ( tmp_res != 0 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1072;

                    goto frame_exception_exit_2;
                }
            }
            {
                PyObject *tmp_source_name_70;
                PyObject *tmp_mvar_value_72;
                tmp_mvar_value_72 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_pa );

                if (unlikely( tmp_mvar_value_72 == NULL ))
                {
                    tmp_mvar_value_72 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pa );
                }

                if ( tmp_mvar_value_72 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "name '%s' is not defined", "pa" );
                    exception_tb = NULL;

                    exception_lineno = 1073;

                    goto frame_exception_exit_2;
                }

                tmp_source_name_70 = tmp_mvar_value_72;
                tmp_dictset_value = LOOKUP_ATTRIBUTE( tmp_source_name_70, const_str_plain_paMacCoreMinimizeCPU );
                if ( tmp_dictset_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1073;

                    goto frame_exception_exit_2;
                }
                tmp_res = PyDict_SetItem( locals_pyaudio_1031, const_str_plain_paMacCoreMinimizeCPU, tmp_dictset_value );
                Py_DECREF( tmp_dictset_value );
                if ( tmp_res != 0 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1073;

                    goto frame_exception_exit_2;
                }
            }

#if 0
            RESTORE_FRAME_EXCEPTION( frame_2b3e849cf3b280654b643122de2dddfa_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_1;

            frame_exception_exit_2:;

#if 0
            RESTORE_FRAME_EXCEPTION( frame_2b3e849cf3b280654b643122de2dddfa_2 );
#endif

            if ( exception_tb == NULL )
            {
                exception_tb = MAKE_TRACEBACK( frame_2b3e849cf3b280654b643122de2dddfa_2, exception_lineno );
            }
            else if ( exception_tb->tb_frame != &frame_2b3e849cf3b280654b643122de2dddfa_2->m_frame )
            {
                exception_tb = ADD_TRACEBACK( exception_tb, frame_2b3e849cf3b280654b643122de2dddfa_2, exception_lineno );
            }

            // Attachs locals to frame if any.
            Nuitka_Frame_AttachLocals(
                (struct Nuitka_FrameObject *)frame_2b3e849cf3b280654b643122de2dddfa_2,
                type_description_2
            );


            // Release cached frame.
            if ( frame_2b3e849cf3b280654b643122de2dddfa_2 == cache_frame_2b3e849cf3b280654b643122de2dddfa_2 )
            {
                Py_DECREF( frame_2b3e849cf3b280654b643122de2dddfa_2 );
            }
            cache_frame_2b3e849cf3b280654b643122de2dddfa_2 = NULL;

            assertFrameObject( frame_2b3e849cf3b280654b643122de2dddfa_2 );

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_1;

            frame_no_exception_1:;
            goto skip_nested_handling_1;
            nested_frame_exit_1:;

            goto try_except_handler_11;
            skip_nested_handling_1:;
            {
                PyObject *tmp_defaults_7;
                tmp_defaults_7 = const_tuple_none_none_tuple;
                Py_INCREF( tmp_defaults_7 );
                tmp_dictset_value = MAKE_FUNCTION_pyaudio$$$function_38___init__( tmp_defaults_7 );



                tmp_res = PyDict_SetItem( locals_pyaudio_1031, const_str_plain___init__, tmp_dictset_value );
                Py_DECREF( tmp_dictset_value );
                assert( !(tmp_res != 0) );
            }
            tmp_dictset_value = MAKE_FUNCTION_pyaudio$$$function_39_get_flags(  );



            tmp_res = PyDict_SetItem( locals_pyaudio_1031, const_str_plain_get_flags, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
            tmp_dictset_value = MAKE_FUNCTION_pyaudio$$$function_40_get_channel_map(  );



            tmp_res = PyDict_SetItem( locals_pyaudio_1031, const_str_plain_get_channel_map, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
            tmp_dictset_value = MAKE_FUNCTION_pyaudio$$$function_41__get_host_api_stream_object(  );



            tmp_res = PyDict_SetItem( locals_pyaudio_1031, const_str_plain__get_host_api_stream_object, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
            tmp_assign_source_114 = locals_pyaudio_1031;
            Py_INCREF( tmp_assign_source_114 );
            goto try_return_handler_11;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( pyaudio );
            return MOD_RETURN_VALUE( NULL );
            // Return handler code:
            try_return_handler_11:;
            Py_DECREF( locals_pyaudio_1031 );
            locals_pyaudio_1031 = NULL;
            goto outline_result_5;
            // Exception handler code:
            try_except_handler_11:;
            exception_keeper_type_7 = exception_type;
            exception_keeper_value_7 = exception_value;
            exception_keeper_tb_7 = exception_tb;
            exception_keeper_lineno_7 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_DECREF( locals_pyaudio_1031 );
            locals_pyaudio_1031 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_7;
            exception_value = exception_keeper_value_7;
            exception_tb = exception_keeper_tb_7;
            exception_lineno = exception_keeper_lineno_7;

            goto outline_exception_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( pyaudio );
            return MOD_RETURN_VALUE( NULL );
            outline_exception_1:;
            exception_lineno = 1031;
            goto try_except_handler_10;
            outline_result_5:;
            assert( tmp_class_creation_3__class_dict == NULL );
            tmp_class_creation_3__class_dict = tmp_assign_source_114;
        }
        {
            PyObject *tmp_assign_source_115;
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_key_name_5;
            PyObject *tmp_dict_name_5;
            PyObject *tmp_dict_name_6;
            PyObject *tmp_key_name_6;
            tmp_key_name_5 = const_str_plain___metaclass__;
            CHECK_OBJECT( tmp_class_creation_3__class_dict );
            tmp_dict_name_5 = tmp_class_creation_3__class_dict;
            tmp_res = PyDict_Contains( tmp_dict_name_5, tmp_key_name_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1031;

                goto try_except_handler_10;
            }
            tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_3;
            }
            else
            {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            CHECK_OBJECT( tmp_class_creation_3__class_dict );
            tmp_dict_name_6 = tmp_class_creation_3__class_dict;
            tmp_key_name_6 = const_str_plain___metaclass__;
            tmp_assign_source_115 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
            if ( tmp_assign_source_115 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1031;

                goto try_except_handler_10;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            // Tried code:
            {
                PyObject *tmp_mvar_value_73;
                tmp_mvar_value_73 = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain___metaclass__ );

                if (unlikely( tmp_mvar_value_73 == NULL ))
                {
                    tmp_mvar_value_73 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___metaclass__ );
                }

                if ( tmp_mvar_value_73 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "name '%s' is not defined", "__metaclass__" );
                    exception_tb = NULL;

                    exception_lineno = 1031;

                    goto try_except_handler_12;
                }

                tmp_assign_source_115 = tmp_mvar_value_73;
                Py_INCREF( tmp_assign_source_115 );
                goto outline_result_6;
            }
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( pyaudio );
            return MOD_RETURN_VALUE( NULL );
            // Exception handler code:
            try_except_handler_12:;
            exception_keeper_type_8 = exception_type;
            exception_keeper_value_8 = exception_value;
            exception_keeper_tb_8 = exception_tb;
            exception_keeper_lineno_8 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_DECREF( exception_keeper_type_8 );
            Py_XDECREF( exception_keeper_value_8 );
            Py_XDECREF( exception_keeper_tb_8 );
            tmp_assign_source_115 = (PyObject *)&PyClass_Type;
            Py_INCREF( tmp_assign_source_115 );
            goto outline_result_6;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( pyaudio );
            return MOD_RETURN_VALUE( NULL );
            outline_result_6:;
            condexpr_end_3:;
            assert( tmp_class_creation_3__metaclass == NULL );
            tmp_class_creation_3__metaclass = tmp_assign_source_115;
        }
        {
            PyObject *tmp_assign_source_116;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_args_element_name_9;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_called_name_3 = tmp_class_creation_3__metaclass;
            tmp_args_element_name_7 = const_str_plain_PaMacCoreStreamInfo;
            tmp_args_element_name_8 = const_tuple_empty;
            CHECK_OBJECT( tmp_class_creation_3__class_dict );
            tmp_args_element_name_9 = tmp_class_creation_3__class_dict;
            frame_2c7187073e5bfc034c60cff922190a77->m_frame.f_lineno = 1031;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
                tmp_assign_source_116 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
            }

            if ( tmp_assign_source_116 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1031;

                goto try_except_handler_10;
            }
            assert( tmp_class_creation_3__class == NULL );
            tmp_class_creation_3__class = tmp_assign_source_116;
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_class_creation_3__class_dict );
        tmp_class_creation_3__class_dict = NULL;

        Py_XDECREF( tmp_class_creation_3__metaclass );
        tmp_class_creation_3__metaclass = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_8;
        // End of try:
        try_end_5:;
        {
            PyObject *tmp_assign_source_117;
            CHECK_OBJECT( tmp_class_creation_3__class );
            tmp_assign_source_117 = tmp_class_creation_3__class;
            UPDATE_STRING_DICT0( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain_PaMacCoreStreamInfo, tmp_assign_source_117 );
        }
        CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class );
        Py_DECREF( tmp_class_creation_3__class );
        tmp_class_creation_3__class = NULL;

        CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_dict );
        Py_DECREF( tmp_class_creation_3__class_dict );
        tmp_class_creation_3__class_dict = NULL;

        CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
        Py_DECREF( tmp_class_creation_3__metaclass );
        tmp_class_creation_3__metaclass = NULL;

        branch_no_3:;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_2c7187073e5bfc034c60cff922190a77 );
#endif
    popFrameStack();

    assertFrameObject( frame_2c7187073e5bfc034c60cff922190a77 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_2c7187073e5bfc034c60cff922190a77 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2c7187073e5bfc034c60cff922190a77, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2c7187073e5bfc034c60cff922190a77->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2c7187073e5bfc034c60cff922190a77, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_pyaudio, (Nuitka_StringObject *)const_str_plain___path__ );

        if (path_value && PyList_CheckExact(path_value) && PyList_Size(path_value) > 0)
        {
            PyObject *path_element = PyList_GetItem( path_value, 0 );

            PyObject *path_importer_cache = PySys_GetObject((char *)"path_importer_cache");
            CHECK_OBJECT( path_importer_cache );

            int res = PyDict_SetItem( path_importer_cache, path_element, (PyObject *)&Nuitka_Loader_Type );
            assert( res == 0 );
        }
    }
#endif
#endif

    return MOD_RETURN_VALUE( module_pyaudio );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
