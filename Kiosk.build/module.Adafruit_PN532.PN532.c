/* Generated code for Python module 'Adafruit_PN532.PN532'
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

/* The "_module_Adafruit_PN532$PN532" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Adafruit_PN532$PN532;
PyDictObject *moduledict_Adafruit_PN532$PN532;

/* The declarations of module constants used, if any. */
static PyObject *const_int_pos_162;
static PyObject *const_str_plain_PN532_COMMAND_TGGETTARGETSTATUS;
static PyObject *const_int_pos_213;
extern PyObject *const_str_plain_set_clock_hz;
static PyObject *const_str_plain_PN532_COMMAND_RFREGULATIONTEST;
static PyObject *const_str_plain_PN532_GPIO_P35;
static PyObject *const_str_plain_PN532_WAKEUP;
static PyObject *const_tuple_str_digest_b5d7847d0522219be8f27713b7897698_tuple;
static PyObject *const_str_plain_PN532_HOSTTOPN532;
extern PyObject *const_str_plain_begin;
static PyObject *const_str_plain_PN532_GPIO_P31;
static PyObject *const_str_plain_PN532_COMMAND_INCOMMUNICATETHRU;
extern PyObject *const_int_pos_15;
static PyObject *const_str_plain_command;
static PyObject *const_int_pos_212;
static PyObject *const_tuple_3085c85ce63ff3a22c1527f7e7785a88_tuple;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_digest_8be43714b9714062e607be68ea44c6bc;
extern PyObject *const_str_plain_offset;
static PyObject *const_str_plain__spi;
extern PyObject *const_str_plain_gpio;
static PyObject *const_str_plain_uidlen;
static PyObject *const_str_plain_PN532_GPIO_P33;
static PyObject *const_int_pos_146;
static PyObject *const_str_digest_ce240b78260bbb1c8d5efeb7c6582dfd;
static PyObject *const_str_plain_PN532_GPIO_P34;
static PyObject *const_str_plain_NDEF_URIPREFIX_IMAP;
extern PyObject *const_str_plain_type;
static PyObject *const_str_plain_response_length;
static PyObject *const_tuple_c5a2e714fbe0a9f0688520014ec7116b_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_response_tuple;
static PyObject *const_int_pos_78;
extern PyObject *const_str_plain_miso;
static PyObject *const_tuple_c6226fb7382da6ea9b1c49ae52835401_tuple;
extern PyObject *const_tuple_str_plain_reduce_tuple;
extern PyObject *const_str_plain_mifare_classic_write_block;
static PyObject *const_str_plain_MIFARE_CMD_WRITE;
extern PyObject *const_int_pos_70;
extern PyObject *const_str_plain_read_passive_target;
static PyObject *const_int_pos_74;
extern PyObject *const_int_pos_75;
extern PyObject *const_str_plain_object;
static PyObject *const_str_plain_NDEF_URIPREFIX_SFTP;
static PyObject *const_tuple_str_plain_self_str_plain_ms_str_plain_start_str_plain_delta_tuple;
static PyObject *const_str_plain_PN532_GPIO_P32;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_start;
static PyObject *const_str_plain_NDEF_URIPREFIX_SIP;
extern PyObject *const_int_pos_50;
static PyObject *const_str_digest_4ce2af39fe16438307897170231dc573;
extern PyObject *const_str_plain_set_mode;
static PyObject *const_str_plain_get_firmware_version;
static PyObject *const_str_plain_PN532_COMMAND_WRITEGPIO;
extern PyObject *const_str_plain_data;
static PyObject *const_tuple_eb40a8b621dbf4240e4a93a6be544b8d_tuple;
extern PyObject *const_int_pos_33;
static PyObject *const_int_pos_96;
static PyObject *const_int_pos_97;
extern PyObject *const_float_1_0;
static PyObject *const_str_plain_NDEF_URIPREFIX_DAV;
static PyObject *const_str_plain_MIFARE_CMD_INCREMENT;
extern PyObject *const_str_plain_frame;
static PyObject *const_str_plain_NDEF_URIPREFIX_URN_NFC;
static PyObject *const_str_plain_PN532_COMMAND_GETFIRMWAREVERSION;
extern PyObject *const_str_plain_mifare_classic_read_block;
static PyObject *const_str_plain_PN532_COMMAND_SETPARAMETERS;
static PyObject *const_str_plain_PN532_COMMAND_GETGENERALSTATUS;
static PyObject *const_str_plain_card_baud;
static PyObject *const_str_plain_spi;
static PyObject *const_bytearray_ec582fb6017ddd701c0f4f67916a0410;
static PyObject *const_int_pos_192;
static PyObject *const_int_pos_193;
extern PyObject *const_str_plain_reduce;
static PyObject *const_str_plain_SPI;
extern PyObject *const_str_plain_debug;
static PyObject *const_int_pos_194;
extern PyObject *const_str_plain_format;
extern PyObject *const_int_pos_64;
static PyObject *const_int_pos_66;
static PyObject *const_str_plain_PN532_COMMAND_INATR;
static PyObject *const_str_plain_PN532_COMMAND_POWERDOWN;
static PyObject *const_str_plain_PN532_GPIO_P30;
static PyObject *const_str_plain_hexlify;
static PyObject *const_str_plain_PN532_SPI_READY;
extern PyObject *const_int_pos_25;
extern PyObject *const_int_pos_128;
extern PyObject *const_str_plain_write;
extern PyObject *const_str_plain_length;
static PyObject *const_int_pos_142;
extern PyObject *const_int_pos_1000000;
static PyObject *const_str_plain_PN532_COMMAND_TGSETMETADATA;
extern PyObject *const_int_neg_2;
extern PyObject *const_int_pos_82;
static PyObject *const_str_plain__wait_ready;
extern PyObject *const_int_neg_1;
static PyObject *const_int_pos_86;
static PyObject *const_int_pos_85;
static PyObject *const_int_pos_84;
static PyObject *const_str_plain_NDEF_URIPREFIX_BTL2CAP;
static PyObject *const_str_plain_PN532_COMMAND_TGRESPONSETOINITIATOR;
static PyObject *const_int_pos_88;
extern PyObject *const_str_plain_set_low;
static PyObject *const_str_digest_23dcc86cc4ad1c6760a299c49f2a4b96;
static PyObject *const_str_plain_PN532_COMMAND_INSELECT;
extern PyObject *const_int_pos_18;
extern PyObject *const_int_pos_19;
extern PyObject *const_str_plain_delta;
extern PyObject *const_int_pos_5;
extern PyObject *const_str_plain_count;
extern PyObject *const_int_pos_10;
extern PyObject *const_int_pos_11;
extern PyObject *const_int_pos_12;
extern PyObject *const_int_pos_13;
extern PyObject *const_int_pos_14;
extern PyObject *const_str_plain_set_bit_order;
extern PyObject *const_int_pos_16;
extern PyObject *const_int_pos_17;
static PyObject *const_str_digest_3a8a27fd69bbf4168c3ab26220a54da8;
extern PyObject *const_int_pos_22;
static PyObject *const_int_pos_134;
extern PyObject *const_tuple_int_0_tuple;
static PyObject *const_str_plain_PN532_COMMAND_RFCONFIGURATION;
static PyObject *const_str_plain_MIFARE_CMD_READ;
static PyObject *const_str_plain_MIFARE_ULTRALIGHT_CMD_WRITE;
extern PyObject *const_str_plain_cs;
extern PyObject *const_int_pos_68;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_plain_MIFARE_CMD_AUTH_A;
extern PyObject *const_str_plain_mifare_classic_authenticate_block;
static PyObject *const_str_plain_PN532_SPI_STATREAD;
static PyObject *const_str_plain_PN532_PREAMBLE;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_2138ad067c30482adeee40cacbff1eae_tuple;
static PyObject *const_str_plain_PN532_COMMAND_TGINITASTARGET;
static PyObject *const_str_digest_ca46f8f6fb70107a17da25f60e3d0829;
static PyObject *const_str_digest_b5d7847d0522219be8f27713b7897698;
extern PyObject *const_int_pos_6;
static PyObject *const_int_pos_65;
extern PyObject *const_int_pos_4;
static PyObject *const_str_plain__read_data;
static PyObject *const_str_plain_PN532_STARTCODE1;
extern PyObject *const_int_pos_3;
static PyObject *const_int_pos_136;
extern PyObject *const_int_pos_1;
static PyObject *const_int_pos_138;
static PyObject *const_str_plain_PN532_SPI_DATAREAD;
extern PyObject *const_str_plain___module__;
extern PyObject *const_int_pos_8;
extern PyObject *const_int_pos_9;
static PyObject *const_str_plain_NDEF_URIPREFIX_BTSPP;
static PyObject *const_str_plain_MIFARE_CMD_TRANSFER;
extern PyObject *const_str_digest_c075fd296c361ae8bea3c0da47584df0;
static PyObject *const_str_plain__busy_wait_ms;
static PyObject *const_str_plain_PN532_RESPONSE_INLISTPASSIVETARGET;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain_NDEF_URIPREFIX_SMB;
extern PyObject *const_tuple_str_plain_self_str_plain_a_str_plain_b_tuple;
static PyObject *const_str_digest_b50eaf5930b74368d4ccce91c9096cfc;
static PyObject *const_str_plain_PN532_COMMAND_TGSETDATA;
static PyObject *const_str_plain_NDEF_URIPREFIX_URN_EPC_ID;
static PyObject *const_str_plain_PN532_COMMAND_SETSERIALBAUDRATE;
extern PyObject *const_int_pos_80;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain_timeout_sec;
static PyObject *const_str_digest_518f73aa90bfb8be2b967cfa32f5be58;
extern PyObject *const_int_pos_34;
extern PyObject *const_str_plain_ms;
static PyObject *const_str_plain__uint8_add;
static PyObject *const_str_plain_checksum;
extern PyObject *const_int_pos_255;
static PyObject *const_str_plain_NDEF_URIPREFIX_POP;
static PyObject *const_dict_06af81f8c2c5ef38966aa89559e19724;
static PyObject *const_str_plain_PN532_STARTCODE2;
static PyObject *const_str_plain_NDEF_URIPREFIX_NONE;
extern PyObject *const_float_1000_0;
static PyObject *const_str_digest_cee585ac7de1d5a81114be787b9ec1d3;
extern PyObject *const_str_plain_params;
extern PyObject *const_str_plain_get_platform_gpio;
static PyObject *const_str_plain_PN532_COMMAND_INDATAEXCHANGE;
static PyObject *const_str_plain_PN532_COMMAND_INJUMPFORPSL;
static PyObject *const_int_pos_140;
static PyObject *const_str_digest_4a841286508ce17c25bfd2a6d363693c;
extern PyObject *const_tuple_float_1_0_tuple;
static PyObject *const_str_plain_NDEF_URIPREFIX_FTP_FTPDOT;
static PyObject *const_str_plain_NDEF_URIPREFIX_URN_EPC_TAG;
static PyObject *const_bytearray_85990578427778a0c18c152b02f4a74c;
static PyObject *const_int_pos_148;
static PyObject *const_str_plain_NDEF_URIPREFIX_RTSP;
extern PyObject *const_str_plain_time;
static PyObject *const_str_digest_2f149b302255b415d12609614715d0b9;
extern PyObject *const_str_plain_MIFARE_CMD_AUTH_B;
static PyObject *const_str_digest_37c1ca2bf8f1eac3ffda7ec7c4f29fcf;
static PyObject *const_str_plain_call_function;
static PyObject *const_str_plain_NDEF_URIPREFIX_FTPS;
static PyObject *const_tuple_d93cf044cbc086c8b4d6d29f3acdc3c4_tuple;
static PyObject *const_str_plain_PN532_COMMAND_TGGETINITIATORCOMMAND;
extern PyObject *const_int_pos_35;
extern PyObject *const_int_pos_32;
static PyObject *const_tuple_str_digest_df7a3bd1dd5620fff9378881785bcde2_tuple;
extern PyObject *const_int_pos_30;
extern PyObject *const_int_pos_31;
static PyObject *const_str_plain_MIFARE_CMD_STORE;
extern PyObject *const_str_plain_functools;
static PyObject *const_tuple_str_plain_self_str_plain_block_number_str_plain_response_tuple;
static PyObject *const_str_plain_PN532_COMMAND_READGPIO;
static PyObject *const_list_int_pos_1_int_pos_20_int_pos_1_list;
static PyObject *const_str_plain_PN532_COMMAND_DIAGNOSE;
static PyObject *const_str_plain_PN532_SPI_DATAWRITE;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_fa03d203f242ecd008e8159180e64e55;
static PyObject *const_str_plain_PN532_COMMAND_TGGETDATA;
static PyObject *const_str_plain_PN532_RESPONSE_INDATAEXCHANGE;
static PyObject *const_str_digest_8468930a61b764159cd3d21300522777;
extern PyObject *const_str_plain_sleep;
static PyObject *const_str_plain_NDEF_URIPREFIX_FILE;
static PyObject *const_str_plain_binascii;
static PyObject *const_str_plain_NDEF_URIPREFIX_IRDAOBEX;
extern PyObject *const_int_pos_7;
extern PyObject *const_str_plain_mosi;
static PyObject *const_str_plain_PN532_COMMAND_WRITEREGISTER;
static PyObject *const_str_plain_NDEF_URIPREFIX_URN;
extern PyObject *const_tuple_float_0_01_tuple;
static PyObject *const_str_plain_frame_len;
static PyObject *const_str_plain_NDEF_URIPREFIX_URN_EPC_PAT;
static PyObject *const_str_plain_MIFARE_CMD_DECREMENT;
static PyObject *const_tuple_5a8dacee2b1b296e30e82d11f55b42fa_tuple;
static PyObject *const_str_plain_PN532_COMMAND_TGSETGENERALBYTES;
static PyObject *const_str_plain_NDEF_URIPREFIX_HTTPS_WWWDOT;
static PyObject *const_str_plain_getLogger;
static PyObject *const_str_plain_NDEF_URIPREFIX_NFS;
extern PyObject *const_str_plain_PN532;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_OUT;
static PyObject *const_str_digest_33d72ae8e6195be80e39494cf6f233b4;
extern PyObject *const_int_pos_21;
extern PyObject *const_int_pos_20;
extern PyObject *const_int_pos_23;
extern PyObject *const_str_plain_LSBFIRST;
extern PyObject *const_int_pos_24;
extern PyObject *const_int_pos_27;
extern PyObject *const_int_pos_26;
extern PyObject *const_int_pos_29;
extern PyObject *const_int_pos_28;
static PyObject *const_str_plain_NDEF_URIPREFIX_SIPS;
static PyObject *const_str_plain_NDEF_URIPREFIX_TELNET;
static PyObject *const_str_plain_NDEF_URIPREFIX_NEWS;
extern PyObject *const_str_plain_response;
static PyObject *const_str_plain_PN532_COMMAND_SAMCONFIGURATION;
static PyObject *const_tuple_str_digest_534007f5d2927237d730c4ccecc81275_tuple;
extern PyObject *const_str_plain__gpio;
static PyObject *const_str_plain_NDEF_URIPREFIX_FTP_ANONAT;
static PyObject *const_str_plain_PN532_COMMAND_INLISTPASSIVETARGET;
static PyObject *const_str_plain_PN532_COMMAND_INJUMPFORDEP;
static PyObject *const_str_plain_NDEF_URIPREFIX_URN_EPC;
static PyObject *const_str_digest_c0a55fc4941035f8341af0bd1fa7ed16;
static PyObject *const_tuple_int_pos_1000000_tuple;
static PyObject *const_str_plain_PN532_COMMAND_INAUTOPOLL;
static PyObject *const_str_plain_logging;
static PyObject *const_str_plain_logger;
static PyObject *const_int_pos_160;
extern PyObject *const_str_plain_Adafruit_GPIO;
static PyObject *const_str_digest_d4e9cbaace5ccb5dd53d275fdec3f067;
static PyObject *const_str_plain_PN532_COMMAND_READREGISTER;
extern PyObject *const_str_plain_transfer;
static PyObject *const_str_plain__read_frame;
static PyObject *const_str_plain_PN532_PN532TOHOST;
extern PyObject *const_str_plain_False;
static PyObject *const_str_digest_df7a3bd1dd5620fff9378881785bcde2;
static PyObject *const_tuple_13277687607fc1894a5df390737bb62f_tuple;
static PyObject *const_str_digest_534007f5d2927237d730c4ccecc81275;
extern PyObject *const_str_plain_key;
static PyObject *const_str_plain_PN532_ACK;
static PyObject *const_str_plain_NDEF_URIPREFIX_HTTP;
static PyObject *const_str_digest_594da697bdefc5b2d639013596c6e677;
static PyObject *const_str_digest_4864b517fbd280b075870883323aaef3;
static PyObject *const_tuple_str_digest_594da697bdefc5b2d639013596c6e677_tuple;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_BitBang;
extern PyObject *const_str_plain_sclk;
static PyObject *const_str_plain_NDEF_URIPREFIX_TFTP;
static PyObject *const_bytearray_aa1d5432e8662f12b6e5dec92bfa7730;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_setup;
static PyObject *const_str_plain_NDEF_URIPREFIX_TEL;
static PyObject *const_tuple_40b4901f562a56b881d737634ffeae7a_tuple;
static PyObject *const_str_digest_b8bfa84c9b04b6055a199568e25fb9d6;
extern PyObject *const_tuple_none_none_none_none_none_tuple;
static PyObject *const_str_plain_PN532_MIFARE_ISO14443A;
static PyObject *const_str_digest_04f183a8ff020a0780da4548db274b4e;
static PyObject *const_str_plain_PN532_GPIO_VALIDATIONBIT;
static PyObject *const_str_plain_PN532_POSTAMBLE;
static PyObject *const_str_plain_NDEF_URIPREFIX_HTTPS;
extern PyObject *const_str_plain_SAM_configuration;
static PyObject *const_str_plain__cs;
extern PyObject *const_str_plain_b;
static PyObject *const_str_plain_PN532_COMMAND_INRELEASE;
static PyObject *const_str_plain_NDEF_URIPREFIX_URN_EPC_RAW;
static PyObject *const_str_plain_NDEF_URIPREFIX_BTGOEP;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_set_high;
static PyObject *const_int_pos_176;
static PyObject *const_str_plain_PN532_FRAME_START;
static PyObject *const_str_plain_NDEF_URIPREFIX_HTTP_WWWDOT;
extern PyObject *const_float_0_01;
static PyObject *const_str_digest_43dd3cba9854cba959345194898eb26e;
static PyObject *const_str_plain_NDEF_URIPREFIX_TCPOBEX;
extern PyObject *const_str_plain_GPIO;
static PyObject *const_tuple_str_digest_cee585ac7de1d5a81114be787b9ec1d3_tuple;
static PyObject *const_str_plain_block_number;
extern PyObject *const_str_plain_self;
extern PyObject *const_tuple_int_pos_2_tuple;
static PyObject *const_str_plain_NDEF_URIPREFIX_FTP;
extern PyObject *const_int_pos_144;
static PyObject *const_str_plain_keylen;
static PyObject *const_str_plain_key_number;
static PyObject *const_str_plain__write_frame;
extern PyObject *const_str_plain_uid;
static PyObject *const_str_plain_PN532_COMMAND_INDESELECT;
extern PyObject *const_int_pos_48;
static PyObject *const_str_plain_NDEF_URIPREFIX_MAILTO;
static PyObject *const_str_plain_PN532_COMMAND_INPSL;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_int_pos_162 = PyInt_FromLong( 162l );
    const_str_plain_PN532_COMMAND_TGGETTARGETSTATUS = UNSTREAM_STRING( &constant_bin[ 8834 ], 31, 1 );
    const_int_pos_213 = PyInt_FromLong( 213l );
    const_str_plain_PN532_COMMAND_RFREGULATIONTEST = UNSTREAM_STRING( &constant_bin[ 8865 ], 30, 1 );
    const_str_plain_PN532_GPIO_P35 = UNSTREAM_STRING( &constant_bin[ 8895 ], 14, 1 );
    const_str_plain_PN532_WAKEUP = UNSTREAM_STRING( &constant_bin[ 8909 ], 12, 1 );
    const_tuple_str_digest_b5d7847d0522219be8f27713b7897698_tuple = PyTuple_New( 1 );
    const_str_digest_b5d7847d0522219be8f27713b7897698 = UNSTREAM_STRING( &constant_bin[ 8921 ], 34, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b5d7847d0522219be8f27713b7897698_tuple, 0, const_str_digest_b5d7847d0522219be8f27713b7897698 ); Py_INCREF( const_str_digest_b5d7847d0522219be8f27713b7897698 );
    const_str_plain_PN532_HOSTTOPN532 = UNSTREAM_STRING( &constant_bin[ 8955 ], 17, 1 );
    const_str_plain_PN532_GPIO_P31 = UNSTREAM_STRING( &constant_bin[ 8972 ], 14, 1 );
    const_str_plain_PN532_COMMAND_INCOMMUNICATETHRU = UNSTREAM_STRING( &constant_bin[ 8986 ], 31, 1 );
    const_str_plain_command = UNSTREAM_STRING( &constant_bin[ 9017 ], 7, 1 );
    const_int_pos_212 = PyInt_FromLong( 212l );
    const_tuple_3085c85ce63ff3a22c1527f7e7785a88_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_3085c85ce63ff3a22c1527f7e7785a88_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_3085c85ce63ff3a22c1527f7e7785a88_tuple, 1, const_str_plain_count ); Py_INCREF( const_str_plain_count );
    PyTuple_SET_ITEM( const_tuple_3085c85ce63ff3a22c1527f7e7785a88_tuple, 2, const_str_plain_frame ); Py_INCREF( const_str_plain_frame );
    PyTuple_SET_ITEM( const_tuple_3085c85ce63ff3a22c1527f7e7785a88_tuple, 3, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    const_str_digest_8be43714b9714062e607be68ea44c6bc = UNSTREAM_STRING( &constant_bin[ 9024 ], 62, 0 );
    const_str_plain__spi = UNSTREAM_STRING( &constant_bin[ 9086 ], 4, 1 );
    const_str_plain_uidlen = UNSTREAM_STRING( &constant_bin[ 9090 ], 6, 1 );
    const_str_plain_PN532_GPIO_P33 = UNSTREAM_STRING( &constant_bin[ 9096 ], 14, 1 );
    const_int_pos_146 = PyInt_FromLong( 146l );
    const_str_digest_ce240b78260bbb1c8d5efeb7c6582dfd = UNSTREAM_STRING( &constant_bin[ 9110 ], 41, 0 );
    const_str_plain_PN532_GPIO_P34 = UNSTREAM_STRING( &constant_bin[ 9151 ], 14, 1 );
    const_str_plain_NDEF_URIPREFIX_IMAP = UNSTREAM_STRING( &constant_bin[ 9165 ], 19, 1 );
    const_str_plain_response_length = UNSTREAM_STRING( &constant_bin[ 9184 ], 15, 1 );
    const_tuple_c5a2e714fbe0a9f0688520014ec7116b_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_c5a2e714fbe0a9f0688520014ec7116b_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_c5a2e714fbe0a9f0688520014ec7116b_tuple, 1, const_str_plain_uid ); Py_INCREF( const_str_plain_uid );
    const_str_plain_block_number = UNSTREAM_STRING( &constant_bin[ 9199 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_c5a2e714fbe0a9f0688520014ec7116b_tuple, 2, const_str_plain_block_number ); Py_INCREF( const_str_plain_block_number );
    const_str_plain_key_number = UNSTREAM_STRING( &constant_bin[ 9211 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_c5a2e714fbe0a9f0688520014ec7116b_tuple, 3, const_str_plain_key_number ); Py_INCREF( const_str_plain_key_number );
    PyTuple_SET_ITEM( const_tuple_c5a2e714fbe0a9f0688520014ec7116b_tuple, 4, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_c5a2e714fbe0a9f0688520014ec7116b_tuple, 5, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    PyTuple_SET_ITEM( const_tuple_c5a2e714fbe0a9f0688520014ec7116b_tuple, 6, const_str_plain_uidlen ); Py_INCREF( const_str_plain_uidlen );
    const_str_plain_keylen = UNSTREAM_STRING( &constant_bin[ 9221 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_c5a2e714fbe0a9f0688520014ec7116b_tuple, 7, const_str_plain_keylen ); Py_INCREF( const_str_plain_keylen );
    PyTuple_SET_ITEM( const_tuple_c5a2e714fbe0a9f0688520014ec7116b_tuple, 8, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    const_tuple_str_plain_self_str_plain_response_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_response_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_response_tuple, 1, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    const_int_pos_78 = PyInt_FromLong( 78l );
    const_tuple_c6226fb7382da6ea9b1c49ae52835401_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_c6226fb7382da6ea9b1c49ae52835401_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_c6226fb7382da6ea9b1c49ae52835401_tuple, 1, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    const_str_plain_checksum = UNSTREAM_STRING( &constant_bin[ 9227 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_c6226fb7382da6ea9b1c49ae52835401_tuple, 2, const_str_plain_checksum ); Py_INCREF( const_str_plain_checksum );
    PyTuple_SET_ITEM( const_tuple_c6226fb7382da6ea9b1c49ae52835401_tuple, 3, const_str_plain_length ); Py_INCREF( const_str_plain_length );
    PyTuple_SET_ITEM( const_tuple_c6226fb7382da6ea9b1c49ae52835401_tuple, 4, const_str_plain_frame ); Py_INCREF( const_str_plain_frame );
    const_str_plain_MIFARE_CMD_WRITE = UNSTREAM_STRING( &constant_bin[ 9235 ], 16, 1 );
    const_int_pos_74 = PyInt_FromLong( 74l );
    const_str_plain_NDEF_URIPREFIX_SFTP = UNSTREAM_STRING( &constant_bin[ 9251 ], 19, 1 );
    const_tuple_str_plain_self_str_plain_ms_str_plain_start_str_plain_delta_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_ms_str_plain_start_str_plain_delta_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_ms_str_plain_start_str_plain_delta_tuple, 1, const_str_plain_ms ); Py_INCREF( const_str_plain_ms );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_ms_str_plain_start_str_plain_delta_tuple, 2, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_ms_str_plain_start_str_plain_delta_tuple, 3, const_str_plain_delta ); Py_INCREF( const_str_plain_delta );
    const_str_plain_PN532_GPIO_P32 = UNSTREAM_STRING( &constant_bin[ 9270 ], 14, 1 );
    const_str_plain_NDEF_URIPREFIX_SIP = UNSTREAM_STRING( &constant_bin[ 9284 ], 18, 1 );
    const_str_digest_4ce2af39fe16438307897170231dc573 = UNSTREAM_STRING( &constant_bin[ 9302 ], 47, 0 );
    const_str_plain_get_firmware_version = UNSTREAM_STRING( &constant_bin[ 9349 ], 20, 1 );
    const_str_plain_PN532_COMMAND_WRITEGPIO = UNSTREAM_STRING( &constant_bin[ 9369 ], 23, 1 );
    const_tuple_eb40a8b621dbf4240e4a93a6be544b8d_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_eb40a8b621dbf4240e4a93a6be544b8d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_eb40a8b621dbf4240e4a93a6be544b8d_tuple, 1, const_str_plain_length ); Py_INCREF( const_str_plain_length );
    const_str_plain_frame_len = UNSTREAM_STRING( &constant_bin[ 9392 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_eb40a8b621dbf4240e4a93a6be544b8d_tuple, 2, const_str_plain_frame_len ); Py_INCREF( const_str_plain_frame_len );
    PyTuple_SET_ITEM( const_tuple_eb40a8b621dbf4240e4a93a6be544b8d_tuple, 3, const_str_plain_checksum ); Py_INCREF( const_str_plain_checksum );
    PyTuple_SET_ITEM( const_tuple_eb40a8b621dbf4240e4a93a6be544b8d_tuple, 4, const_str_plain_offset ); Py_INCREF( const_str_plain_offset );
    PyTuple_SET_ITEM( const_tuple_eb40a8b621dbf4240e4a93a6be544b8d_tuple, 5, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    const_int_pos_96 = PyInt_FromLong( 96l );
    const_int_pos_97 = PyInt_FromLong( 97l );
    const_str_plain_NDEF_URIPREFIX_DAV = UNSTREAM_STRING( &constant_bin[ 9401 ], 18, 1 );
    const_str_plain_MIFARE_CMD_INCREMENT = UNSTREAM_STRING( &constant_bin[ 9419 ], 20, 1 );
    const_str_plain_NDEF_URIPREFIX_URN_NFC = UNSTREAM_STRING( &constant_bin[ 9439 ], 22, 1 );
    const_str_plain_PN532_COMMAND_GETFIRMWAREVERSION = UNSTREAM_STRING( &constant_bin[ 9461 ], 32, 1 );
    const_str_plain_PN532_COMMAND_SETPARAMETERS = UNSTREAM_STRING( &constant_bin[ 9493 ], 27, 1 );
    const_str_plain_PN532_COMMAND_GETGENERALSTATUS = UNSTREAM_STRING( &constant_bin[ 9520 ], 30, 1 );
    const_str_plain_card_baud = UNSTREAM_STRING( &constant_bin[ 9550 ], 9, 1 );
    const_str_plain_spi = UNSTREAM_STRING( &constant_bin[ 5426 ], 3, 1 );
    const_bytearray_ec582fb6017ddd701c0f4f67916a0410 = UNSTREAM_BYTEARRAY( &constant_bin[ 9559 ], 19 );
    const_int_pos_192 = PyInt_FromLong( 192l );
    const_int_pos_193 = PyInt_FromLong( 193l );
    const_str_plain_SPI = UNSTREAM_STRING( &constant_bin[ 5469 ], 3, 1 );
    const_int_pos_194 = PyInt_FromLong( 194l );
    const_int_pos_66 = PyInt_FromLong( 66l );
    const_str_plain_PN532_COMMAND_INATR = UNSTREAM_STRING( &constant_bin[ 9578 ], 19, 1 );
    const_str_plain_PN532_COMMAND_POWERDOWN = UNSTREAM_STRING( &constant_bin[ 9597 ], 23, 1 );
    const_str_plain_PN532_GPIO_P30 = UNSTREAM_STRING( &constant_bin[ 9620 ], 14, 1 );
    const_str_plain_hexlify = UNSTREAM_STRING( &constant_bin[ 9634 ], 7, 1 );
    const_str_plain_PN532_SPI_READY = UNSTREAM_STRING( &constant_bin[ 9641 ], 15, 1 );
    const_int_pos_142 = PyInt_FromLong( 142l );
    const_str_plain_PN532_COMMAND_TGSETMETADATA = UNSTREAM_STRING( &constant_bin[ 9656 ], 27, 1 );
    const_str_plain__wait_ready = UNSTREAM_STRING( &constant_bin[ 9683 ], 11, 1 );
    const_int_pos_86 = PyInt_FromLong( 86l );
    const_int_pos_85 = PyInt_FromLong( 85l );
    const_int_pos_84 = PyInt_FromLong( 84l );
    const_str_plain_NDEF_URIPREFIX_BTL2CAP = UNSTREAM_STRING( &constant_bin[ 9694 ], 22, 1 );
    const_str_plain_PN532_COMMAND_TGRESPONSETOINITIATOR = UNSTREAM_STRING( &constant_bin[ 9716 ], 35, 1 );
    const_int_pos_88 = PyInt_FromLong( 88l );
    const_str_digest_23dcc86cc4ad1c6760a299c49f2a4b96 = UNSTREAM_STRING( &constant_bin[ 9751 ], 124, 0 );
    const_str_plain_PN532_COMMAND_INSELECT = UNSTREAM_STRING( &constant_bin[ 9875 ], 22, 1 );
    const_str_digest_3a8a27fd69bbf4168c3ab26220a54da8 = UNSTREAM_STRING( &constant_bin[ 9897 ], 117, 0 );
    const_int_pos_134 = PyInt_FromLong( 134l );
    const_str_plain_PN532_COMMAND_RFCONFIGURATION = UNSTREAM_STRING( &constant_bin[ 10014 ], 29, 1 );
    const_str_plain_MIFARE_CMD_READ = UNSTREAM_STRING( &constant_bin[ 10043 ], 15, 1 );
    const_str_plain_MIFARE_ULTRALIGHT_CMD_WRITE = UNSTREAM_STRING( &constant_bin[ 10058 ], 27, 1 );
    const_str_plain_MIFARE_CMD_AUTH_A = UNSTREAM_STRING( &constant_bin[ 10085 ], 17, 1 );
    const_str_plain_PN532_SPI_STATREAD = UNSTREAM_STRING( &constant_bin[ 10102 ], 18, 1 );
    const_str_plain_PN532_PREAMBLE = UNSTREAM_STRING( &constant_bin[ 10120 ], 14, 1 );
    const_tuple_2138ad067c30482adeee40cacbff1eae_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_2138ad067c30482adeee40cacbff1eae_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_2138ad067c30482adeee40cacbff1eae_tuple, 1, const_str_plain_block_number ); Py_INCREF( const_str_plain_block_number );
    PyTuple_SET_ITEM( const_tuple_2138ad067c30482adeee40cacbff1eae_tuple, 2, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_2138ad067c30482adeee40cacbff1eae_tuple, 3, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    PyTuple_SET_ITEM( const_tuple_2138ad067c30482adeee40cacbff1eae_tuple, 4, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    const_str_plain_PN532_COMMAND_TGINITASTARGET = UNSTREAM_STRING( &constant_bin[ 10134 ], 28, 1 );
    const_str_digest_ca46f8f6fb70107a17da25f60e3d0829 = UNSTREAM_STRING( &constant_bin[ 10162 ], 61, 0 );
    const_int_pos_65 = PyInt_FromLong( 65l );
    const_str_plain__read_data = UNSTREAM_STRING( &constant_bin[ 10223 ], 10, 1 );
    const_str_plain_PN532_STARTCODE1 = UNSTREAM_STRING( &constant_bin[ 10233 ], 16, 1 );
    const_int_pos_136 = PyInt_FromLong( 136l );
    const_int_pos_138 = PyInt_FromLong( 138l );
    const_str_plain_PN532_SPI_DATAREAD = UNSTREAM_STRING( &constant_bin[ 10249 ], 18, 1 );
    const_str_plain_NDEF_URIPREFIX_BTSPP = UNSTREAM_STRING( &constant_bin[ 10267 ], 20, 1 );
    const_str_plain_MIFARE_CMD_TRANSFER = UNSTREAM_STRING( &constant_bin[ 10287 ], 19, 1 );
    const_str_plain__busy_wait_ms = UNSTREAM_STRING( &constant_bin[ 10306 ], 13, 1 );
    const_str_plain_PN532_RESPONSE_INLISTPASSIVETARGET = UNSTREAM_STRING( &constant_bin[ 10319 ], 34, 1 );
    const_str_plain_NDEF_URIPREFIX_SMB = UNSTREAM_STRING( &constant_bin[ 10353 ], 18, 1 );
    const_str_digest_b50eaf5930b74368d4ccce91c9096cfc = UNSTREAM_STRING( &constant_bin[ 10371 ], 446, 0 );
    const_str_plain_PN532_COMMAND_TGSETDATA = UNSTREAM_STRING( &constant_bin[ 10817 ], 23, 1 );
    const_str_plain_NDEF_URIPREFIX_URN_EPC_ID = UNSTREAM_STRING( &constant_bin[ 10840 ], 25, 1 );
    const_str_plain_PN532_COMMAND_SETSERIALBAUDRATE = UNSTREAM_STRING( &constant_bin[ 10865 ], 31, 1 );
    const_str_plain_timeout_sec = UNSTREAM_STRING( &constant_bin[ 10659 ], 11, 1 );
    const_str_digest_518f73aa90bfb8be2b967cfa32f5be58 = UNSTREAM_STRING( &constant_bin[ 10896 ], 51, 0 );
    const_str_plain__uint8_add = UNSTREAM_STRING( &constant_bin[ 10947 ], 10, 1 );
    const_str_plain_NDEF_URIPREFIX_POP = UNSTREAM_STRING( &constant_bin[ 10957 ], 18, 1 );
    const_dict_06af81f8c2c5ef38966aa89559e19724 = _PyDict_NewPresized( 1 );
    const_list_int_pos_1_int_pos_20_int_pos_1_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_int_pos_1_int_pos_20_int_pos_1_list, 0, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyList_SET_ITEM( const_list_int_pos_1_int_pos_20_int_pos_1_list, 1, const_int_pos_20 ); Py_INCREF( const_int_pos_20 );
    PyList_SET_ITEM( const_list_int_pos_1_int_pos_20_int_pos_1_list, 2, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyDict_SetItem( const_dict_06af81f8c2c5ef38966aa89559e19724, const_str_plain_params, const_list_int_pos_1_int_pos_20_int_pos_1_list );
    assert( PyDict_Size( const_dict_06af81f8c2c5ef38966aa89559e19724 ) == 1 );
    const_str_plain_PN532_STARTCODE2 = UNSTREAM_STRING( &constant_bin[ 10975 ], 16, 1 );
    const_str_plain_NDEF_URIPREFIX_NONE = UNSTREAM_STRING( &constant_bin[ 10991 ], 19, 1 );
    const_str_digest_cee585ac7de1d5a81114be787b9ec1d3 = UNSTREAM_STRING( &constant_bin[ 11010 ], 20, 0 );
    const_str_plain_PN532_COMMAND_INDATAEXCHANGE = UNSTREAM_STRING( &constant_bin[ 11030 ], 28, 1 );
    const_str_plain_PN532_COMMAND_INJUMPFORPSL = UNSTREAM_STRING( &constant_bin[ 11058 ], 26, 1 );
    const_int_pos_140 = PyInt_FromLong( 140l );
    const_str_digest_4a841286508ce17c25bfd2a6d363693c = UNSTREAM_STRING( &constant_bin[ 11084 ], 18, 0 );
    const_str_plain_NDEF_URIPREFIX_FTP_FTPDOT = UNSTREAM_STRING( &constant_bin[ 11102 ], 25, 1 );
    const_str_plain_NDEF_URIPREFIX_URN_EPC_TAG = UNSTREAM_STRING( &constant_bin[ 11127 ], 26, 1 );
    const_bytearray_85990578427778a0c18c152b02f4a74c = UNSTREAM_BYTEARRAY( &constant_bin[ 11153 ], 7 );
    const_int_pos_148 = PyInt_FromLong( 148l );
    const_str_plain_NDEF_URIPREFIX_RTSP = UNSTREAM_STRING( &constant_bin[ 11160 ], 19, 1 );
    const_str_digest_2f149b302255b415d12609614715d0b9 = UNSTREAM_STRING( &constant_bin[ 11179 ], 269, 0 );
    const_str_digest_37c1ca2bf8f1eac3ffda7ec7c4f29fcf = UNSTREAM_STRING( &constant_bin[ 11448 ], 44, 0 );
    const_str_plain_call_function = UNSTREAM_STRING( &constant_bin[ 11492 ], 13, 1 );
    const_str_plain_NDEF_URIPREFIX_FTPS = UNSTREAM_STRING( &constant_bin[ 11505 ], 19, 1 );
    const_tuple_d93cf044cbc086c8b4d6d29f3acdc3c4_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_d93cf044cbc086c8b4d6d29f3acdc3c4_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_d93cf044cbc086c8b4d6d29f3acdc3c4_tuple, 1, const_str_plain_command ); Py_INCREF( const_str_plain_command );
    PyTuple_SET_ITEM( const_tuple_d93cf044cbc086c8b4d6d29f3acdc3c4_tuple, 2, const_str_plain_response_length ); Py_INCREF( const_str_plain_response_length );
    PyTuple_SET_ITEM( const_tuple_d93cf044cbc086c8b4d6d29f3acdc3c4_tuple, 3, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    PyTuple_SET_ITEM( const_tuple_d93cf044cbc086c8b4d6d29f3acdc3c4_tuple, 4, const_str_plain_timeout_sec ); Py_INCREF( const_str_plain_timeout_sec );
    PyTuple_SET_ITEM( const_tuple_d93cf044cbc086c8b4d6d29f3acdc3c4_tuple, 5, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_d93cf044cbc086c8b4d6d29f3acdc3c4_tuple, 6, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    const_str_plain_PN532_COMMAND_TGGETINITIATORCOMMAND = UNSTREAM_STRING( &constant_bin[ 11524 ], 35, 1 );
    const_tuple_str_digest_df7a3bd1dd5620fff9378881785bcde2_tuple = PyTuple_New( 1 );
    const_str_digest_df7a3bd1dd5620fff9378881785bcde2 = UNSTREAM_STRING( &constant_bin[ 11559 ], 18, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_df7a3bd1dd5620fff9378881785bcde2_tuple, 0, const_str_digest_df7a3bd1dd5620fff9378881785bcde2 ); Py_INCREF( const_str_digest_df7a3bd1dd5620fff9378881785bcde2 );
    const_str_plain_MIFARE_CMD_STORE = UNSTREAM_STRING( &constant_bin[ 11577 ], 16, 1 );
    const_tuple_str_plain_self_str_plain_block_number_str_plain_response_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_block_number_str_plain_response_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_block_number_str_plain_response_tuple, 1, const_str_plain_block_number ); Py_INCREF( const_str_plain_block_number );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_block_number_str_plain_response_tuple, 2, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    const_str_plain_PN532_COMMAND_READGPIO = UNSTREAM_STRING( &constant_bin[ 11593 ], 22, 1 );
    const_str_plain_PN532_COMMAND_DIAGNOSE = UNSTREAM_STRING( &constant_bin[ 11615 ], 22, 1 );
    const_str_plain_PN532_SPI_DATAWRITE = UNSTREAM_STRING( &constant_bin[ 11637 ], 19, 1 );
    const_str_digest_fa03d203f242ecd008e8159180e64e55 = UNSTREAM_STRING( &constant_bin[ 11656 ], 233, 0 );
    const_str_plain_PN532_COMMAND_TGGETDATA = UNSTREAM_STRING( &constant_bin[ 11889 ], 23, 1 );
    const_str_plain_PN532_RESPONSE_INDATAEXCHANGE = UNSTREAM_STRING( &constant_bin[ 11912 ], 29, 1 );
    const_str_digest_8468930a61b764159cd3d21300522777 = UNSTREAM_STRING( &constant_bin[ 11941 ], 328, 0 );
    const_str_plain_NDEF_URIPREFIX_FILE = UNSTREAM_STRING( &constant_bin[ 12269 ], 19, 1 );
    const_str_plain_binascii = UNSTREAM_STRING( &constant_bin[ 12288 ], 8, 1 );
    const_str_plain_NDEF_URIPREFIX_IRDAOBEX = UNSTREAM_STRING( &constant_bin[ 12296 ], 23, 1 );
    const_str_plain_PN532_COMMAND_WRITEREGISTER = UNSTREAM_STRING( &constant_bin[ 12319 ], 27, 1 );
    const_str_plain_NDEF_URIPREFIX_URN = UNSTREAM_STRING( &constant_bin[ 9439 ], 18, 1 );
    const_str_plain_NDEF_URIPREFIX_URN_EPC_PAT = UNSTREAM_STRING( &constant_bin[ 12346 ], 26, 1 );
    const_str_plain_MIFARE_CMD_DECREMENT = UNSTREAM_STRING( &constant_bin[ 12372 ], 20, 1 );
    const_tuple_5a8dacee2b1b296e30e82d11f55b42fa_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_5a8dacee2b1b296e30e82d11f55b42fa_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_5a8dacee2b1b296e30e82d11f55b42fa_tuple, 1, const_str_plain_timeout_sec ); Py_INCREF( const_str_plain_timeout_sec );
    PyTuple_SET_ITEM( const_tuple_5a8dacee2b1b296e30e82d11f55b42fa_tuple, 2, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_5a8dacee2b1b296e30e82d11f55b42fa_tuple, 3, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    const_str_plain_PN532_COMMAND_TGSETGENERALBYTES = UNSTREAM_STRING( &constant_bin[ 12392 ], 31, 1 );
    const_str_plain_NDEF_URIPREFIX_HTTPS_WWWDOT = UNSTREAM_STRING( &constant_bin[ 12423 ], 27, 1 );
    const_str_plain_getLogger = UNSTREAM_STRING( &constant_bin[ 12450 ], 9, 1 );
    const_str_plain_NDEF_URIPREFIX_NFS = UNSTREAM_STRING( &constant_bin[ 12459 ], 18, 1 );
    const_str_digest_33d72ae8e6195be80e39494cf6f233b4 = UNSTREAM_STRING( &constant_bin[ 12477 ], 423, 0 );
    const_str_plain_NDEF_URIPREFIX_SIPS = UNSTREAM_STRING( &constant_bin[ 12900 ], 19, 1 );
    const_str_plain_NDEF_URIPREFIX_TELNET = UNSTREAM_STRING( &constant_bin[ 12919 ], 21, 1 );
    const_str_plain_NDEF_URIPREFIX_NEWS = UNSTREAM_STRING( &constant_bin[ 12940 ], 19, 1 );
    const_str_plain_PN532_COMMAND_SAMCONFIGURATION = UNSTREAM_STRING( &constant_bin[ 12959 ], 30, 1 );
    const_tuple_str_digest_534007f5d2927237d730c4ccecc81275_tuple = PyTuple_New( 1 );
    const_str_digest_534007f5d2927237d730c4ccecc81275 = UNSTREAM_STRING( &constant_bin[ 12989 ], 37, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_534007f5d2927237d730c4ccecc81275_tuple, 0, const_str_digest_534007f5d2927237d730c4ccecc81275 ); Py_INCREF( const_str_digest_534007f5d2927237d730c4ccecc81275 );
    const_str_plain_NDEF_URIPREFIX_FTP_ANONAT = UNSTREAM_STRING( &constant_bin[ 13026 ], 25, 1 );
    const_str_plain_PN532_COMMAND_INLISTPASSIVETARGET = UNSTREAM_STRING( &constant_bin[ 13051 ], 33, 1 );
    const_str_plain_PN532_COMMAND_INJUMPFORDEP = UNSTREAM_STRING( &constant_bin[ 13084 ], 26, 1 );
    const_str_plain_NDEF_URIPREFIX_URN_EPC = UNSTREAM_STRING( &constant_bin[ 10840 ], 22, 1 );
    const_str_digest_c0a55fc4941035f8341af0bd1fa7ed16 = UNSTREAM_STRING( &constant_bin[ 13110 ], 29, 0 );
    const_tuple_int_pos_1000000_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1000000_tuple, 0, const_int_pos_1000000 ); Py_INCREF( const_int_pos_1000000 );
    const_str_plain_PN532_COMMAND_INAUTOPOLL = UNSTREAM_STRING( &constant_bin[ 13139 ], 24, 1 );
    const_str_plain_logging = UNSTREAM_STRING( &constant_bin[ 13163 ], 7, 1 );
    const_str_plain_logger = UNSTREAM_STRING( &constant_bin[ 13170 ], 6, 1 );
    const_int_pos_160 = PyInt_FromLong( 160l );
    const_str_digest_d4e9cbaace5ccb5dd53d275fdec3f067 = UNSTREAM_STRING( &constant_bin[ 13176 ], 17, 0 );
    const_str_plain_PN532_COMMAND_READREGISTER = UNSTREAM_STRING( &constant_bin[ 13193 ], 26, 1 );
    const_str_plain__read_frame = UNSTREAM_STRING( &constant_bin[ 13219 ], 11, 1 );
    const_str_plain_PN532_PN532TOHOST = UNSTREAM_STRING( &constant_bin[ 13230 ], 17, 1 );
    const_tuple_13277687607fc1894a5df390737bb62f_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_13277687607fc1894a5df390737bb62f_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_13277687607fc1894a5df390737bb62f_tuple, 1, const_str_plain_cs ); Py_INCREF( const_str_plain_cs );
    PyTuple_SET_ITEM( const_tuple_13277687607fc1894a5df390737bb62f_tuple, 2, const_str_plain_sclk ); Py_INCREF( const_str_plain_sclk );
    PyTuple_SET_ITEM( const_tuple_13277687607fc1894a5df390737bb62f_tuple, 3, const_str_plain_mosi ); Py_INCREF( const_str_plain_mosi );
    PyTuple_SET_ITEM( const_tuple_13277687607fc1894a5df390737bb62f_tuple, 4, const_str_plain_miso ); Py_INCREF( const_str_plain_miso );
    PyTuple_SET_ITEM( const_tuple_13277687607fc1894a5df390737bb62f_tuple, 5, const_str_plain_gpio ); Py_INCREF( const_str_plain_gpio );
    PyTuple_SET_ITEM( const_tuple_13277687607fc1894a5df390737bb62f_tuple, 6, const_str_plain_spi ); Py_INCREF( const_str_plain_spi );
    const_str_plain_PN532_ACK = UNSTREAM_STRING( &constant_bin[ 13247 ], 9, 1 );
    const_str_plain_NDEF_URIPREFIX_HTTP = UNSTREAM_STRING( &constant_bin[ 12423 ], 19, 1 );
    const_str_digest_594da697bdefc5b2d639013596c6e677 = UNSTREAM_STRING( &constant_bin[ 13256 ], 19, 0 );
    const_str_digest_4864b517fbd280b075870883323aaef3 = UNSTREAM_STRING( &constant_bin[ 13275 ], 333, 0 );
    const_tuple_str_digest_594da697bdefc5b2d639013596c6e677_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_594da697bdefc5b2d639013596c6e677_tuple, 0, const_str_digest_594da697bdefc5b2d639013596c6e677 ); Py_INCREF( const_str_digest_594da697bdefc5b2d639013596c6e677 );
    const_str_plain_NDEF_URIPREFIX_TFTP = UNSTREAM_STRING( &constant_bin[ 13608 ], 19, 1 );
    const_bytearray_aa1d5432e8662f12b6e5dec92bfa7730 = UNSTREAM_BYTEARRAY( &constant_bin[ 11153 ], 4 );
    const_str_plain_NDEF_URIPREFIX_TEL = UNSTREAM_STRING( &constant_bin[ 12919 ], 18, 1 );
    const_tuple_40b4901f562a56b881d737634ffeae7a_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_40b4901f562a56b881d737634ffeae7a_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_40b4901f562a56b881d737634ffeae7a_tuple, 1, const_str_plain_card_baud ); Py_INCREF( const_str_plain_card_baud );
    PyTuple_SET_ITEM( const_tuple_40b4901f562a56b881d737634ffeae7a_tuple, 2, const_str_plain_timeout_sec ); Py_INCREF( const_str_plain_timeout_sec );
    PyTuple_SET_ITEM( const_tuple_40b4901f562a56b881d737634ffeae7a_tuple, 3, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    const_str_digest_b8bfa84c9b04b6055a199568e25fb9d6 = UNSTREAM_STRING( &constant_bin[ 13627 ], 284, 0 );
    const_str_plain_PN532_MIFARE_ISO14443A = UNSTREAM_STRING( &constant_bin[ 13911 ], 22, 1 );
    const_str_digest_04f183a8ff020a0780da4548db274b4e = UNSTREAM_STRING( &constant_bin[ 13933 ], 285, 0 );
    const_str_plain_PN532_GPIO_VALIDATIONBIT = UNSTREAM_STRING( &constant_bin[ 14218 ], 24, 1 );
    const_str_plain_PN532_POSTAMBLE = UNSTREAM_STRING( &constant_bin[ 14242 ], 15, 1 );
    const_str_plain_NDEF_URIPREFIX_HTTPS = UNSTREAM_STRING( &constant_bin[ 12423 ], 20, 1 );
    const_str_plain__cs = UNSTREAM_STRING( &constant_bin[ 14257 ], 3, 1 );
    const_str_plain_PN532_COMMAND_INRELEASE = UNSTREAM_STRING( &constant_bin[ 14260 ], 23, 1 );
    const_str_plain_NDEF_URIPREFIX_URN_EPC_RAW = UNSTREAM_STRING( &constant_bin[ 14283 ], 26, 1 );
    const_str_plain_NDEF_URIPREFIX_BTGOEP = UNSTREAM_STRING( &constant_bin[ 14309 ], 21, 1 );
    const_int_pos_176 = PyInt_FromLong( 176l );
    const_str_plain_PN532_FRAME_START = UNSTREAM_STRING( &constant_bin[ 14330 ], 17, 1 );
    const_str_plain_NDEF_URIPREFIX_HTTP_WWWDOT = UNSTREAM_STRING( &constant_bin[ 14347 ], 26, 1 );
    const_str_digest_43dd3cba9854cba959345194898eb26e = UNSTREAM_STRING( &constant_bin[ 14373 ], 268, 0 );
    const_str_plain_NDEF_URIPREFIX_TCPOBEX = UNSTREAM_STRING( &constant_bin[ 14641 ], 22, 1 );
    const_tuple_str_digest_cee585ac7de1d5a81114be787b9ec1d3_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_cee585ac7de1d5a81114be787b9ec1d3_tuple, 0, const_str_digest_cee585ac7de1d5a81114be787b9ec1d3 ); Py_INCREF( const_str_digest_cee585ac7de1d5a81114be787b9ec1d3 );
    const_str_plain_NDEF_URIPREFIX_FTP = UNSTREAM_STRING( &constant_bin[ 11102 ], 18, 1 );
    const_str_plain__write_frame = UNSTREAM_STRING( &constant_bin[ 14663 ], 12, 1 );
    const_str_plain_PN532_COMMAND_INDESELECT = UNSTREAM_STRING( &constant_bin[ 14675 ], 24, 1 );
    const_str_plain_NDEF_URIPREFIX_MAILTO = UNSTREAM_STRING( &constant_bin[ 14699 ], 21, 1 );
    const_str_plain_PN532_COMMAND_INPSL = UNSTREAM_STRING( &constant_bin[ 14720 ], 19, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Adafruit_PN532$PN532( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_aba3c3c2d4b66a1198ad6f335faeb4f5;
static PyCodeObject *codeobj_0ebafc6113eb05c0485c3b56b6065df4;
static PyCodeObject *codeobj_4f8eb83b055f996d6d6984fb5002f00f;
static PyCodeObject *codeobj_eb84a8eb61e19df0e90f2e27ff262bd2;
static PyCodeObject *codeobj_29ea49476a16b7c15c6a5fe2e8158e99;
static PyCodeObject *codeobj_b9c9cf25c4697c7fb5076ad3d2ce8123;
static PyCodeObject *codeobj_e5d4dd7fcff49e52d723afcd72d6764c;
static PyCodeObject *codeobj_473eb2619000a096e678a64bf279492b;
static PyCodeObject *codeobj_3b4cba3d1e78f35a572c2152412caeeb;
static PyCodeObject *codeobj_0bffc46c8b378dc91f82c968cb5f1ef4;
static PyCodeObject *codeobj_7134c43beb8ac529ee58ba47dcf2e749;
static PyCodeObject *codeobj_59cbafd365bcf4c8f5ee8414fca3fe29;
static PyCodeObject *codeobj_307d294348a0f5503ff478448d67a321;
static PyCodeObject *codeobj_81b795ce359e2fb70d9bfd02804fcded;
static PyCodeObject *codeobj_2def24bb00a069986b16fbf03fb850ed;
static PyCodeObject *codeobj_805f60a08b81938a35c5250cca88f131;
static PyCodeObject *codeobj_4493fe746a031495bd2d9a23d9e32c2c;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_8be43714b9714062e607be68ea44c6bc;
    codeobj_aba3c3c2d4b66a1198ad6f335faeb4f5 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_c0a55fc4941035f8341af0bd1fa7ed16, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_0ebafc6113eb05c0485c3b56b6065df4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_PN532, 148, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_4f8eb83b055f996d6d6984fb5002f00f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SAM_configuration, 356, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_eb84a8eb61e19df0e90f2e27ff262bd2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 155, const_tuple_13277687607fc1894a5df390737bb62f_tuple, 7, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_29ea49476a16b7c15c6a5fe2e8158e99 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__busy_wait_ms, 191, const_tuple_str_plain_self_str_plain_ms_str_plain_start_str_plain_delta_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b9c9cf25c4697c7fb5076ad3d2ce8123 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__read_data, 229, const_tuple_3085c85ce63ff3a22c1527f7e7785a88_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e5d4dd7fcff49e52d723afcd72d6764c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__read_frame, 241, const_tuple_eb40a8b621dbf4240e4a93a6be544b8d_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_473eb2619000a096e678a64bf279492b = MAKE_CODEOBJ( module_filename_obj, const_str_plain__uint8_add, 187, const_tuple_str_plain_self_str_plain_a_str_plain_b_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3b4cba3d1e78f35a572c2152412caeeb = MAKE_CODEOBJ( module_filename_obj, const_str_plain__wait_ready, 277, const_tuple_5a8dacee2b1b296e30e82d11f55b42fa_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0bffc46c8b378dc91f82c968cb5f1ef4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__write_frame, 198, const_tuple_c6226fb7382da6ea9b1c49ae52835401_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7134c43beb8ac529ee58ba47dcf2e749 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_begin, 334, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_59cbafd365bcf4c8f5ee8414fca3fe29 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_call_function, 302, const_tuple_d93cf044cbc086c8b4d6d29f3acdc3c4_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_307d294348a0f5503ff478448d67a321 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_firmware_version, 346, const_tuple_str_plain_self_str_plain_response_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_81b795ce359e2fb70d9bfd02804fcded = MAKE_CODEOBJ( module_filename_obj, const_str_plain_mifare_classic_authenticate_block, 387, const_tuple_c5a2e714fbe0a9f0688520014ec7116b_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2def24bb00a069986b16fbf03fb850ed = MAKE_CODEOBJ( module_filename_obj, const_str_plain_mifare_classic_read_block, 411, const_tuple_str_plain_self_str_plain_block_number_str_plain_response_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_805f60a08b81938a35c5250cca88f131 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_mifare_classic_write_block, 428, const_tuple_2138ad067c30482adeee40cacbff1eae_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4493fe746a031495bd2d9a23d9e32c2c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read_passive_target, 366, const_tuple_40b4901f562a56b881d737634ffeae7a_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_10_get_firmware_version(  );


static PyObject *MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_11_SAM_configuration(  );


static PyObject *MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_12_read_passive_target( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_13_mifare_classic_authenticate_block(  );


static PyObject *MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_14_mifare_classic_read_block(  );


static PyObject *MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_15_mifare_classic_write_block(  );


static PyObject *MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_2__uint8_add(  );


static PyObject *MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_3__busy_wait_ms(  );


static PyObject *MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_4__write_frame(  );


static PyObject *MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_5__read_data(  );


static PyObject *MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_6__read_frame(  );


static PyObject *MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_7__wait_ready( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_8_call_function( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_9_begin(  );


// The module function definitions.
static PyObject *impl_Adafruit_PN532$PN532$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_cs = python_pars[ 1 ];
    PyObject *par_sclk = python_pars[ 2 ];
    PyObject *par_mosi = python_pars[ 3 ];
    PyObject *par_miso = python_pars[ 4 ];
    PyObject *par_gpio = python_pars[ 5 ];
    PyObject *par_spi = python_pars[ 6 ];
    struct Nuitka_FrameObject *frame_eb84a8eb61e19df0e90f2e27ff262bd2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_eb84a8eb61e19df0e90f2e27ff262bd2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_eb84a8eb61e19df0e90f2e27ff262bd2, codeobj_eb84a8eb61e19df0e90f2e27ff262bd2, module_Adafruit_PN532$PN532, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_eb84a8eb61e19df0e90f2e27ff262bd2 = cache_frame_eb84a8eb61e19df0e90f2e27ff262bd2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_eb84a8eb61e19df0e90f2e27ff262bd2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_eb84a8eb61e19df0e90f2e27ff262bd2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_gpio );
        tmp_assattr_name_1 = par_gpio;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__gpio, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__gpio );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_1 );
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
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_assattr_target_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_GPIO );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GPIO );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "GPIO" );
                exception_tb = NULL;

                exception_lineno = 166;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            frame_eb84a8eb61e19df0e90f2e27ff262bd2->m_frame.f_lineno = 166;
            tmp_assattr_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_platform_gpio );
            if ( tmp_assattr_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__gpio, tmp_assattr_name_2 );
            Py_DECREF( tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_cs );
        tmp_assattr_name_3 = par_cs;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__cs, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__gpio );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_setup );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__cs );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 169;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_GPIO );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GPIO );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "GPIO" );
            exception_tb = NULL;

            exception_lineno = 169;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_2;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_OUT );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 169;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_eb84a8eb61e19df0e90f2e27ff262bd2->m_frame.f_lineno = 169;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_6;
        PyObject *tmp_source_name_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_8;
        CHECK_OBJECT( par_self );
        tmp_source_name_7 = par_self;
        tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__gpio );
        if ( tmp_source_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_set_high );
        Py_DECREF( tmp_source_name_6 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__cs );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 170;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_eb84a8eb61e19df0e90f2e27ff262bd2->m_frame.f_lineno = 170;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_spi );
        tmp_compexpr_left_2 = par_spi;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_call_result_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_logger );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logger );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "logger" );
                exception_tb = NULL;

                exception_lineno = 173;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_3;
            frame_eb84a8eb61e19df0e90f2e27ff262bd2->m_frame.f_lineno = 173;
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_debug, &PyTuple_GET_ITEM( const_tuple_str_digest_594da697bdefc5b2d639013596c6e677_tuple, 0 ) );

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 173;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        {
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_assattr_target_4;
            CHECK_OBJECT( par_spi );
            tmp_assattr_name_4 = par_spi;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_4 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__spi, tmp_assattr_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 175;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_source_name_9;
            PyObject *tmp_call_result_4;
            CHECK_OBJECT( par_self );
            tmp_source_name_9 = par_self;
            tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__spi );
            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 176;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_eb84a8eb61e19df0e90f2e27ff262bd2->m_frame.f_lineno = 176;
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_set_clock_hz, &PyTuple_GET_ITEM( const_tuple_int_pos_1000000_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_3 );
            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 176;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_call_result_5;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_logger );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logger );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "logger" );
                exception_tb = NULL;

                exception_lineno = 178;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_4 = tmp_mvar_value_4;
            frame_eb84a8eb61e19df0e90f2e27ff262bd2->m_frame.f_lineno = 178;
            tmp_call_result_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_debug, &PyTuple_GET_ITEM( const_tuple_str_digest_df7a3bd1dd5620fff9378881785bcde2_tuple, 0 ) );

            if ( tmp_call_result_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 178;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_5 );
        }
        {
            PyObject *tmp_assattr_name_5;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_10;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_11;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_assattr_target_5;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_SPI );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SPI );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "SPI" );
                exception_tb = NULL;

                exception_lineno = 182;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_10 = tmp_mvar_value_5;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_BitBang );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 182;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_11 = par_self;
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__gpio );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 182;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_sclk );
            tmp_args_element_name_5 = par_sclk;
            CHECK_OBJECT( par_mosi );
            tmp_args_element_name_6 = par_mosi;
            CHECK_OBJECT( par_miso );
            tmp_args_element_name_7 = par_miso;
            frame_eb84a8eb61e19df0e90f2e27ff262bd2->m_frame.f_lineno = 182;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
                tmp_assattr_name_5 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_assattr_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 182;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_5 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain__spi, tmp_assattr_name_5 );
            Py_DECREF( tmp_assattr_name_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 182;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_source_name_12;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT( par_self );
        tmp_source_name_12 = par_self;
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__spi );
        if ( tmp_called_instance_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_eb84a8eb61e19df0e90f2e27ff262bd2->m_frame.f_lineno = 184;
        tmp_call_result_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_set_mode, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_5 );
        if ( tmp_call_result_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_6 );
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_13;
        PyObject *tmp_source_name_14;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_source_name_15;
        PyObject *tmp_mvar_value_6;
        CHECK_OBJECT( par_self );
        tmp_source_name_14 = par_self;
        tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__spi );
        if ( tmp_source_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_set_bit_order );
        Py_DECREF( tmp_source_name_13 );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_SPI );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SPI );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "SPI" );
            exception_tb = NULL;

            exception_lineno = 185;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_15 = tmp_mvar_value_6;
        tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_LSBFIRST );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 185;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_eb84a8eb61e19df0e90f2e27ff262bd2->m_frame.f_lineno = 185;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_call_result_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_7 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb84a8eb61e19df0e90f2e27ff262bd2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb84a8eb61e19df0e90f2e27ff262bd2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_eb84a8eb61e19df0e90f2e27ff262bd2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_eb84a8eb61e19df0e90f2e27ff262bd2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_eb84a8eb61e19df0e90f2e27ff262bd2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_eb84a8eb61e19df0e90f2e27ff262bd2,
        type_description_1,
        par_self,
        par_cs,
        par_sclk,
        par_mosi,
        par_miso,
        par_gpio,
        par_spi
    );


    // Release cached frame.
    if ( frame_eb84a8eb61e19df0e90f2e27ff262bd2 == cache_frame_eb84a8eb61e19df0e90f2e27ff262bd2 )
    {
        Py_DECREF( frame_eb84a8eb61e19df0e90f2e27ff262bd2 );
    }
    cache_frame_eb84a8eb61e19df0e90f2e27ff262bd2 = NULL;

    assertFrameObject( frame_eb84a8eb61e19df0e90f2e27ff262bd2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_miso );
    Py_DECREF( par_miso );
    par_miso = NULL;

    CHECK_OBJECT( (PyObject *)par_sclk );
    Py_DECREF( par_sclk );
    par_sclk = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_mosi );
    Py_DECREF( par_mosi );
    par_mosi = NULL;

    CHECK_OBJECT( (PyObject *)par_spi );
    Py_DECREF( par_spi );
    par_spi = NULL;

    CHECK_OBJECT( (PyObject *)par_cs );
    Py_DECREF( par_cs );
    par_cs = NULL;

    CHECK_OBJECT( (PyObject *)par_gpio );
    Py_DECREF( par_gpio );
    par_gpio = NULL;

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

    CHECK_OBJECT( (PyObject *)par_miso );
    Py_DECREF( par_miso );
    par_miso = NULL;

    CHECK_OBJECT( (PyObject *)par_sclk );
    Py_DECREF( par_sclk );
    par_sclk = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_mosi );
    Py_DECREF( par_mosi );
    par_mosi = NULL;

    CHECK_OBJECT( (PyObject *)par_spi );
    Py_DECREF( par_spi );
    par_spi = NULL;

    CHECK_OBJECT( (PyObject *)par_cs );
    Py_DECREF( par_cs );
    par_cs = NULL;

    CHECK_OBJECT( (PyObject *)par_gpio );
    Py_DECREF( par_gpio );
    par_gpio = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_1___init__ );
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


static PyObject *impl_Adafruit_PN532$PN532$$$function_2__uint8_add( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_a = python_pars[ 1 ];
    PyObject *par_b = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_473eb2619000a096e678a64bf279492b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_473eb2619000a096e678a64bf279492b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_473eb2619000a096e678a64bf279492b, codeobj_473eb2619000a096e678a64bf279492b, module_Adafruit_PN532$PN532, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_473eb2619000a096e678a64bf279492b = cache_frame_473eb2619000a096e678a64bf279492b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_473eb2619000a096e678a64bf279492b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_473eb2619000a096e678a64bf279492b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( par_a );
        tmp_left_name_3 = par_a;
        tmp_right_name_1 = const_int_pos_255;
        tmp_left_name_2 = BINARY_OPERATION( PyNumber_And, tmp_left_name_3, tmp_right_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_b );
        tmp_left_name_4 = par_b;
        tmp_right_name_3 = const_int_pos_255;
        tmp_right_name_2 = BINARY_OPERATION( PyNumber_And, tmp_left_name_4, tmp_right_name_3 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 189;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = const_int_pos_255;
        tmp_return_value = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_473eb2619000a096e678a64bf279492b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_473eb2619000a096e678a64bf279492b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_473eb2619000a096e678a64bf279492b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_473eb2619000a096e678a64bf279492b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_473eb2619000a096e678a64bf279492b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_473eb2619000a096e678a64bf279492b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_473eb2619000a096e678a64bf279492b,
        type_description_1,
        par_self,
        par_a,
        par_b
    );


    // Release cached frame.
    if ( frame_473eb2619000a096e678a64bf279492b == cache_frame_473eb2619000a096e678a64bf279492b )
    {
        Py_DECREF( frame_473eb2619000a096e678a64bf279492b );
    }
    cache_frame_473eb2619000a096e678a64bf279492b = NULL;

    assertFrameObject( frame_473eb2619000a096e678a64bf279492b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_2__uint8_add );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_2__uint8_add );
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


static PyObject *impl_Adafruit_PN532$PN532$$$function_3__busy_wait_ms( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_ms = python_pars[ 1 ];
    PyObject *var_start = NULL;
    PyObject *var_delta = NULL;
    struct Nuitka_FrameObject *frame_29ea49476a16b7c15c6a5fe2e8158e99;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_29ea49476a16b7c15c6a5fe2e8158e99 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_29ea49476a16b7c15c6a5fe2e8158e99, codeobj_29ea49476a16b7c15c6a5fe2e8158e99, module_Adafruit_PN532$PN532, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_29ea49476a16b7c15c6a5fe2e8158e99 = cache_frame_29ea49476a16b7c15c6a5fe2e8158e99;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_29ea49476a16b7c15c6a5fe2e8158e99 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_29ea49476a16b7c15c6a5fe2e8158e99 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_time );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "time" );
            exception_tb = NULL;

            exception_lineno = 193;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_29ea49476a16b7c15c6a5fe2e8158e99->m_frame.f_lineno = 193;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_time );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_start == NULL );
        var_start = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_ms );
        tmp_left_name_1 = par_ms;
        tmp_right_name_1 = const_float_1000_0;
        tmp_assign_source_2 = BINARY_OPERATION_DIV( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_delta == NULL );
        var_delta = tmp_assign_source_2;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_right_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_time );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "time" );
            exception_tb = NULL;

            exception_lineno = 195;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        frame_29ea49476a16b7c15c6a5fe2e8158e99->m_frame.f_lineno = 195;
        tmp_left_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_time );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 195;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_start );
        tmp_right_name_2 = var_start;
        tmp_compexpr_left_1 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 195;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_delta );
        tmp_compexpr_right_1 = var_delta;
        tmp_operand_name_1 = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 195;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 195;
            type_description_1 = "oooo";
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
        goto loop_end_1;
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_29ea49476a16b7c15c6a5fe2e8158e99 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_29ea49476a16b7c15c6a5fe2e8158e99 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_29ea49476a16b7c15c6a5fe2e8158e99, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_29ea49476a16b7c15c6a5fe2e8158e99->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_29ea49476a16b7c15c6a5fe2e8158e99, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_29ea49476a16b7c15c6a5fe2e8158e99,
        type_description_1,
        par_self,
        par_ms,
        var_start,
        var_delta
    );


    // Release cached frame.
    if ( frame_29ea49476a16b7c15c6a5fe2e8158e99 == cache_frame_29ea49476a16b7c15c6a5fe2e8158e99 )
    {
        Py_DECREF( frame_29ea49476a16b7c15c6a5fe2e8158e99 );
    }
    cache_frame_29ea49476a16b7c15c6a5fe2e8158e99 = NULL;

    assertFrameObject( frame_29ea49476a16b7c15c6a5fe2e8158e99 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_3__busy_wait_ms );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_start );
    Py_DECREF( var_start );
    var_start = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_ms );
    Py_DECREF( par_ms );
    par_ms = NULL;

    CHECK_OBJECT( (PyObject *)var_delta );
    Py_DECREF( var_delta );
    var_delta = NULL;

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

    Py_XDECREF( var_start );
    var_start = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_ms );
    Py_DECREF( par_ms );
    par_ms = NULL;

    Py_XDECREF( var_delta );
    var_delta = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_3__busy_wait_ms );
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


static PyObject *impl_Adafruit_PN532$PN532$$$function_4__write_frame( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *var_checksum = NULL;
    PyObject *var_length = NULL;
    PyObject *var_frame = NULL;
    nuitka_bool tmp_comparison_chain_1__comparison_result = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    struct Nuitka_FrameObject *frame_0bffc46c8b378dc91f82c968cb5f1ef4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_0bffc46c8b378dc91f82c968cb5f1ef4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0bffc46c8b378dc91f82c968cb5f1ef4, codeobj_0bffc46c8b378dc91f82c968cb5f1ef4, module_Adafruit_PN532$PN532, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0bffc46c8b378dc91f82c968cb5f1ef4 = cache_frame_0bffc46c8b378dc91f82c968cb5f1ef4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0bffc46c8b378dc91f82c968cb5f1ef4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0bffc46c8b378dc91f82c968cb5f1ef4 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_data );
        tmp_compexpr_left_1 = par_data;
        tmp_compexpr_right_1 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == 1 )
        {
            goto and_right_1;
        }
        else
        {
            goto and_left_1;
        }
        and_right_1:;
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_len_arg_1;
            CHECK_OBJECT( par_data );
            tmp_len_arg_1 = par_data;
            tmp_assign_source_1 = BUILTIN_LEN( tmp_len_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            assert( tmp_comparison_chain_1__operand_2 == NULL );
            tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
        }
        {
            nuitka_bool tmp_assign_source_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            tmp_compexpr_left_2 = const_int_0;
            CHECK_OBJECT( tmp_comparison_chain_1__operand_2 );
            tmp_compexpr_right_2 = tmp_comparison_chain_1__operand_2;
            tmp_res = RICH_COMPARE_BOOL_LT_INT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            assert( !(tmp_res == -1) );
            tmp_assign_source_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_2;
            assert( tmp_comparison_chain_1__comparison_result != NUITKA_BOOL_UNASSIGNED);
            tmp_operand_name_2 = ( tmp_comparison_chain_1__comparison_result == NUITKA_BOOL_TRUE ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            assert( tmp_comparison_chain_1__comparison_result != NUITKA_BOOL_UNASSIGNED);
            tmp_and_right_value_1 = ( tmp_comparison_chain_1__comparison_result == NUITKA_BOOL_TRUE ) ? Py_True : Py_False;
            Py_INCREF( tmp_and_right_value_1 );
            goto try_return_handler_2;
            branch_no_2:;
        }
        {
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( tmp_comparison_chain_1__operand_2 );
            tmp_compexpr_left_3 = tmp_comparison_chain_1__operand_2;
            tmp_compexpr_right_3 = const_int_pos_255;
            tmp_and_right_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            assert( !(tmp_and_right_value_1 == NULL) );
            goto try_return_handler_2;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_4__write_frame );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
        Py_DECREF( tmp_comparison_chain_1__operand_2 );
        tmp_comparison_chain_1__operand_2 = NULL;

        goto outline_result_1;
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

        Py_XDECREF( tmp_comparison_chain_1__operand_2 );
        tmp_comparison_chain_1__operand_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_4__write_frame );
        return NULL;
        outline_result_1:;
        tmp_operand_name_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF( tmp_and_left_value_1 );
        tmp_operand_name_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
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
            PyObject *tmp_raise_value_1;
            tmp_raise_type_1 = PyExc_AssertionError;
            tmp_raise_value_1 = const_tuple_str_digest_534007f5d2927237d730c4ccecc81275_tuple;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_value = tmp_raise_value_1;
            Py_INCREF( tmp_raise_value_1 );
            exception_lineno = 200;
            RAISE_EXCEPTION_WITH_VALUE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT( par_data );
        tmp_len_arg_2 = par_data;
        tmp_assign_source_3 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_length == NULL );
        var_length = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_bytearray_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( var_length );
        tmp_left_name_1 = var_length;
        tmp_right_name_1 = const_int_pos_8;
        tmp_bytearray_arg_1 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_1, tmp_right_name_1 );
        assert( !(tmp_bytearray_arg_1 == NULL) );
        tmp_assign_source_4 = BUILTIN_BYTEARRAY1( tmp_bytearray_arg_1 );
        Py_DECREF( tmp_bytearray_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_frame == NULL );
        var_frame = tmp_assign_source_4;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_SPI_DATAWRITE );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PN532_SPI_DATAWRITE );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PN532_SPI_DATAWRITE" );
            exception_tb = NULL;

            exception_lineno = 212;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_frame );
        tmp_ass_subscribed_1 = var_frame;
        tmp_ass_subscript_1 = const_int_0;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
        if ( tmp_ass_subscript_res_1 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 212;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_PREAMBLE );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PN532_PREAMBLE );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PN532_PREAMBLE" );
            exception_tb = NULL;

            exception_lineno = 213;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_frame );
        tmp_ass_subscribed_2 = var_frame;
        tmp_ass_subscript_2 = const_int_pos_1;
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_2, tmp_ass_subscript_2, 1, tmp_ass_subvalue_2 );
        if ( tmp_ass_subscript_res_2 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        int tmp_ass_subscript_res_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_STARTCODE1 );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PN532_STARTCODE1 );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PN532_STARTCODE1" );
            exception_tb = NULL;

            exception_lineno = 214;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_3 = tmp_mvar_value_3;
        CHECK_OBJECT( var_frame );
        tmp_ass_subscribed_3 = var_frame;
        tmp_ass_subscript_3 = const_int_pos_2;
        tmp_ass_subscript_res_3 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_3, tmp_ass_subscript_3, 2, tmp_ass_subvalue_3 );
        if ( tmp_ass_subscript_res_3 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 214;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        int tmp_ass_subscript_res_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_STARTCODE2 );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PN532_STARTCODE2 );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PN532_STARTCODE2" );
            exception_tb = NULL;

            exception_lineno = 215;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_4 = tmp_mvar_value_4;
        CHECK_OBJECT( var_frame );
        tmp_ass_subscribed_4 = var_frame;
        tmp_ass_subscript_4 = const_int_pos_3;
        tmp_ass_subscript_res_4 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_4, tmp_ass_subscript_4, 3, tmp_ass_subvalue_4 );
        if ( tmp_ass_subscript_res_4 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        int tmp_ass_subscript_res_5;
        CHECK_OBJECT( var_length );
        tmp_left_name_2 = var_length;
        tmp_right_name_2 = const_int_pos_255;
        tmp_ass_subvalue_5 = BINARY_OPERATION( PyNumber_And, tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_ass_subvalue_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_frame );
        tmp_ass_subscribed_5 = var_frame;
        tmp_ass_subscript_5 = const_int_pos_4;
        tmp_ass_subscript_res_5 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_5, tmp_ass_subscript_5, 4, tmp_ass_subvalue_5 );
        Py_DECREF( tmp_ass_subvalue_5 );
        if ( tmp_ass_subscript_res_5 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        int tmp_ass_subscript_res_6;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__uint8_add );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_length );
        tmp_operand_name_3 = var_length;
        tmp_args_element_name_1 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_3 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 217;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = const_int_pos_1;
        frame_0bffc46c8b378dc91f82c968cb5f1ef4->m_frame.f_lineno = 217;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_ass_subvalue_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_ass_subvalue_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_frame );
        tmp_ass_subscribed_6 = var_frame;
        tmp_ass_subscript_6 = const_int_pos_5;
        tmp_ass_subscript_res_6 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_6, tmp_ass_subscript_6, 5, tmp_ass_subvalue_6 );
        Py_DECREF( tmp_ass_subvalue_6 );
        if ( tmp_ass_subscript_res_6 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_sliceass_value_1;
        PyObject *tmp_sliceass_target_1;
        Py_ssize_t tmp_sliceassslicedel_index_lower_1;
        Py_ssize_t tmp_sliceass_index_upper_1;
        CHECK_OBJECT( par_data );
        tmp_sliceass_value_1 = par_data;
        CHECK_OBJECT( var_frame );
        tmp_sliceass_target_1 = var_frame;
        tmp_sliceassslicedel_index_lower_1 = 6;
        tmp_sliceass_index_upper_1 = -2;
        tmp_result = SET_INDEX_SLICE( tmp_sliceass_target_1, tmp_sliceassslicedel_index_lower_1, tmp_sliceass_index_upper_1, tmp_sliceass_value_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_reduce );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_reduce );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "reduce" );
            exception_tb = NULL;

            exception_lineno = 219;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_5;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__uint8_add );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_data );
        tmp_args_element_name_4 = par_data;
        tmp_args_element_name_5 = const_int_pos_255;
        frame_0bffc46c8b378dc91f82c968cb5f1ef4->m_frame.f_lineno = 219;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_checksum == NULL );
        var_checksum = tmp_assign_source_5;
    }
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_left_name_3;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_ass_subscript_7;
        int tmp_ass_subscript_res_7;
        CHECK_OBJECT( var_checksum );
        tmp_operand_name_4 = var_checksum;
        tmp_left_name_3 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_4 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = const_int_pos_255;
        tmp_ass_subvalue_7 = BINARY_OPERATION( PyNumber_And, tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_ass_subvalue_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_frame );
        tmp_ass_subscribed_7 = var_frame;
        tmp_ass_subscript_7 = const_int_neg_2;
        tmp_ass_subscript_res_7 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_7, tmp_ass_subscript_7, -2, tmp_ass_subvalue_7 );
        Py_DECREF( tmp_ass_subvalue_7 );
        if ( tmp_ass_subscript_res_7 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_8;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_ass_subscribed_8;
        PyObject *tmp_ass_subscript_8;
        int tmp_ass_subscript_res_8;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_POSTAMBLE );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PN532_POSTAMBLE );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PN532_POSTAMBLE" );
            exception_tb = NULL;

            exception_lineno = 221;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_8 = tmp_mvar_value_6;
        CHECK_OBJECT( var_frame );
        tmp_ass_subscribed_8 = var_frame;
        tmp_ass_subscript_8 = const_int_neg_1;
        tmp_ass_subscript_res_8 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_8, tmp_ass_subscript_8, -1, tmp_ass_subvalue_8 );
        if ( tmp_ass_subscript_res_8 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_logger );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logger );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "logger" );
            exception_tb = NULL;

            exception_lineno = 223;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_7;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_debug );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 223;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_4 = const_str_digest_4a841286508ce17c25bfd2a6d363693c;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_format );
        assert( !(tmp_called_name_4 == NULL) );
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_binascii );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_binascii );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_called_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "binascii" );
            exception_tb = NULL;

            exception_lineno = 223;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_8;
        CHECK_OBJECT( var_frame );
        tmp_args_element_name_8 = var_frame;
        frame_0bffc46c8b378dc91f82c968cb5f1ef4->m_frame.f_lineno = 223;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_args_element_name_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_hexlify, call_args );
        }

        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 223;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_0bffc46c8b378dc91f82c968cb5f1ef4->m_frame.f_lineno = 223;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 223;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_0bffc46c8b378dc91f82c968cb5f1ef4->m_frame.f_lineno = 223;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 223;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__gpio );
        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 224;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_set_low );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 224;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_7 = par_self;
        tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__cs );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 224;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_0bffc46c8b378dc91f82c968cb5f1ef4->m_frame.f_lineno = 224;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 224;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        frame_0bffc46c8b378dc91f82c968cb5f1ef4->m_frame.f_lineno = 225;
        tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__busy_wait_ms, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 225;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_source_name_8;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_10;
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__spi );
        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_frame );
        tmp_args_element_name_10 = var_frame;
        frame_0bffc46c8b378dc91f82c968cb5f1ef4->m_frame.f_lineno = 226;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_write, call_args );
        }

        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_4 );
    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_9;
        PyObject *tmp_source_name_10;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_source_name_11;
        CHECK_OBJECT( par_self );
        tmp_source_name_10 = par_self;
        tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__gpio );
        if ( tmp_source_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_set_high );
        Py_DECREF( tmp_source_name_9 );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_11 = par_self;
        tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__cs );
        if ( tmp_args_element_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 227;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_0bffc46c8b378dc91f82c968cb5f1ef4->m_frame.f_lineno = 227;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_11 );
        if ( tmp_call_result_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_5 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0bffc46c8b378dc91f82c968cb5f1ef4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0bffc46c8b378dc91f82c968cb5f1ef4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0bffc46c8b378dc91f82c968cb5f1ef4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0bffc46c8b378dc91f82c968cb5f1ef4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0bffc46c8b378dc91f82c968cb5f1ef4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0bffc46c8b378dc91f82c968cb5f1ef4,
        type_description_1,
        par_self,
        par_data,
        var_checksum,
        var_length,
        var_frame
    );


    // Release cached frame.
    if ( frame_0bffc46c8b378dc91f82c968cb5f1ef4 == cache_frame_0bffc46c8b378dc91f82c968cb5f1ef4 )
    {
        Py_DECREF( frame_0bffc46c8b378dc91f82c968cb5f1ef4 );
    }
    cache_frame_0bffc46c8b378dc91f82c968cb5f1ef4 = NULL;

    assertFrameObject( frame_0bffc46c8b378dc91f82c968cb5f1ef4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_4__write_frame );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_checksum );
    Py_DECREF( var_checksum );
    var_checksum = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)var_length );
    Py_DECREF( var_length );
    var_length = NULL;

    CHECK_OBJECT( (PyObject *)var_frame );
    Py_DECREF( var_frame );
    var_frame = NULL;

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

    Py_XDECREF( var_checksum );
    var_checksum = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    Py_XDECREF( var_length );
    var_length = NULL;

    Py_XDECREF( var_frame );
    var_frame = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_4__write_frame );
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


static PyObject *impl_Adafruit_PN532$PN532$$$function_5__read_data( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_count = python_pars[ 1 ];
    PyObject *var_frame = NULL;
    PyObject *var_response = NULL;
    struct Nuitka_FrameObject *frame_b9c9cf25c4697c7fb5076ad3d2ce8123;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b9c9cf25c4697c7fb5076ad3d2ce8123 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b9c9cf25c4697c7fb5076ad3d2ce8123, codeobj_b9c9cf25c4697c7fb5076ad3d2ce8123, module_Adafruit_PN532$PN532, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b9c9cf25c4697c7fb5076ad3d2ce8123 = cache_frame_b9c9cf25c4697c7fb5076ad3d2ce8123;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b9c9cf25c4697c7fb5076ad3d2ce8123 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b9c9cf25c4697c7fb5076ad3d2ce8123 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_bytearray_arg_1;
        CHECK_OBJECT( par_count );
        tmp_bytearray_arg_1 = par_count;
        tmp_assign_source_1 = BUILTIN_BYTEARRAY1( tmp_bytearray_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 232;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_frame == NULL );
        var_frame = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_SPI_DATAREAD );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PN532_SPI_DATAREAD );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PN532_SPI_DATAREAD" );
            exception_tb = NULL;

            exception_lineno = 233;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_frame );
        tmp_ass_subscribed_1 = var_frame;
        tmp_ass_subscript_1 = const_int_0;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
        if ( tmp_ass_subscript_res_1 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__gpio );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_set_low );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__cs );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 235;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_b9c9cf25c4697c7fb5076ad3d2ce8123->m_frame.f_lineno = 235;
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


            exception_lineno = 235;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_b9c9cf25c4697c7fb5076ad3d2ce8123->m_frame.f_lineno = 236;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__busy_wait_ms, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__spi );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_frame );
        tmp_args_element_name_2 = var_frame;
        frame_b9c9cf25c4697c7fb5076ad3d2ce8123->m_frame.f_lineno = 237;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_transfer, call_args );
        }

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_response == NULL );
        var_response = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__gpio );
        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 238;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_set_high );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 238;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_7 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__cs );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 238;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_b9c9cf25c4697c7fb5076ad3d2ce8123->m_frame.f_lineno = 238;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 238;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b9c9cf25c4697c7fb5076ad3d2ce8123 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b9c9cf25c4697c7fb5076ad3d2ce8123 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b9c9cf25c4697c7fb5076ad3d2ce8123, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b9c9cf25c4697c7fb5076ad3d2ce8123->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b9c9cf25c4697c7fb5076ad3d2ce8123, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b9c9cf25c4697c7fb5076ad3d2ce8123,
        type_description_1,
        par_self,
        par_count,
        var_frame,
        var_response
    );


    // Release cached frame.
    if ( frame_b9c9cf25c4697c7fb5076ad3d2ce8123 == cache_frame_b9c9cf25c4697c7fb5076ad3d2ce8123 )
    {
        Py_DECREF( frame_b9c9cf25c4697c7fb5076ad3d2ce8123 );
    }
    cache_frame_b9c9cf25c4697c7fb5076ad3d2ce8123 = NULL;

    assertFrameObject( frame_b9c9cf25c4697c7fb5076ad3d2ce8123 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_response );
    tmp_return_value = var_response;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_5__read_data );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_count );
    Py_DECREF( par_count );
    par_count = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_frame );
    Py_DECREF( var_frame );
    var_frame = NULL;

    CHECK_OBJECT( (PyObject *)var_response );
    Py_DECREF( var_response );
    var_response = NULL;

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

    CHECK_OBJECT( (PyObject *)par_count );
    Py_DECREF( par_count );
    par_count = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_frame );
    var_frame = NULL;

    Py_XDECREF( var_response );
    var_response = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_5__read_data );
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


static PyObject *impl_Adafruit_PN532$PN532$$$function_6__read_frame( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_length = python_pars[ 1 ];
    PyObject *var_frame_len = NULL;
    PyObject *var_checksum = NULL;
    PyObject *var_offset = NULL;
    PyObject *var_response = NULL;
    struct Nuitka_FrameObject *frame_e5d4dd7fcff49e52d723afcd72d6764c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e5d4dd7fcff49e52d723afcd72d6764c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e5d4dd7fcff49e52d723afcd72d6764c, codeobj_e5d4dd7fcff49e52d723afcd72d6764c, module_Adafruit_PN532$PN532, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e5d4dd7fcff49e52d723afcd72d6764c = cache_frame_e5d4dd7fcff49e52d723afcd72d6764c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e5d4dd7fcff49e52d723afcd72d6764c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e5d4dd7fcff49e52d723afcd72d6764c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__read_data );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_length );
        tmp_left_name_1 = par_length;
        tmp_right_name_1 = const_int_pos_8;
        tmp_args_element_name_1 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 248;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_e5d4dd7fcff49e52d723afcd72d6764c->m_frame.f_lineno = 248;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_response == NULL );
        var_response = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_logger );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logger );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "logger" );
            exception_tb = NULL;

            exception_lineno = 249;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_debug );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_3 = const_str_digest_d4e9cbaace5ccb5dd53d275fdec3f067;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_format );
        assert( !(tmp_called_name_3 == NULL) );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_binascii );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_binascii );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_called_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "binascii" );
            exception_tb = NULL;

            exception_lineno = 249;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( var_response );
        tmp_args_element_name_4 = var_response;
        frame_e5d4dd7fcff49e52d723afcd72d6764c->m_frame.f_lineno = 249;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_args_element_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_hexlify, call_args );
        }

        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 249;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_e5d4dd7fcff49e52d723afcd72d6764c->m_frame.f_lineno = 249;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 249;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_e5d4dd7fcff49e52d723afcd72d6764c->m_frame.f_lineno = 249;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_int_pos_1;
        assert( var_offset == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_offset = tmp_assign_source_2;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_response );
        tmp_subscribed_name_1 = var_response;
        CHECK_OBJECT( var_offset );
        tmp_subscript_name_1 = var_offset;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_operand_name_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;
            type_description_1 = "oooooo";
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
        goto loop_end_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_offset );
        tmp_left_name_2 = var_offset;
        tmp_right_name_2 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_INT_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 257;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_left_name_2;
        var_offset = tmp_assign_source_3;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( var_offset );
        tmp_left_name_3 = var_offset;
        tmp_right_name_3 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_INT_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = tmp_left_name_3;
        var_offset = tmp_assign_source_4;

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( var_response );
        tmp_subscribed_name_2 = var_response;
        CHECK_OBJECT( var_offset );
        tmp_subscript_name_2 = var_offset;
        tmp_assign_source_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 266;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_frame_len == NULL );
        var_frame_len = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_slice_source_1;
        PyObject *tmp_slice_lower_1;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_slice_upper_1;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        PyObject *tmp_right_name_7;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_reduce );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_reduce );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "reduce" );
            exception_tb = NULL;

            exception_lineno = 270;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__uint8_add );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_response );
        tmp_slice_source_1 = var_response;
        CHECK_OBJECT( var_offset );
        tmp_left_name_4 = var_offset;
        tmp_right_name_4 = const_int_pos_2;
        tmp_slice_lower_1 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_slice_lower_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 270;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_offset );
        tmp_left_name_7 = var_offset;
        tmp_right_name_5 = const_int_pos_2;
        tmp_left_name_6 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_7, tmp_right_name_5 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_slice_lower_1 );

            exception_lineno = 270;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_frame_len );
        tmp_right_name_6 = var_frame_len;
        tmp_left_name_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_6 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_slice_lower_1 );

            exception_lineno = 270;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_7 = const_int_pos_1;
        tmp_slice_upper_1 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_5, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_5 );
        if ( tmp_slice_upper_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_slice_lower_1 );

            exception_lineno = 270;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = LOOKUP_SLICE( tmp_slice_source_1, tmp_slice_lower_1, tmp_slice_upper_1 );
        Py_DECREF( tmp_slice_lower_1 );
        Py_DECREF( tmp_slice_upper_1 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 270;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_7 = const_int_0;
        frame_e5d4dd7fcff49e52d723afcd72d6764c->m_frame.f_lineno = 270;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_5 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_checksum == NULL );
        var_checksum = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_response );
        tmp_compexpr_left_2 = var_response;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_slice_source_2;
            PyObject *tmp_slice_lower_2;
            PyObject *tmp_left_name_8;
            PyObject *tmp_right_name_8;
            PyObject *tmp_slice_upper_2;
            PyObject *tmp_left_name_9;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_9;
            PyObject *tmp_right_name_10;
            CHECK_OBJECT( var_response );
            tmp_slice_source_2 = var_response;
            CHECK_OBJECT( var_offset );
            tmp_left_name_8 = var_offset;
            tmp_right_name_8 = const_int_pos_2;
            tmp_slice_lower_2 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_8, tmp_right_name_8 );
            if ( tmp_slice_lower_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 275;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_offset );
            tmp_left_name_10 = var_offset;
            tmp_right_name_9 = const_int_pos_2;
            tmp_left_name_9 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_10, tmp_right_name_9 );
            if ( tmp_left_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_slice_lower_2 );

                exception_lineno = 275;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_frame_len );
            tmp_right_name_10 = var_frame_len;
            tmp_slice_upper_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_10 );
            Py_DECREF( tmp_left_name_9 );
            if ( tmp_slice_upper_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_slice_lower_2 );

                exception_lineno = 275;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = LOOKUP_SLICE( tmp_slice_source_2, tmp_slice_lower_2, tmp_slice_upper_2 );
            Py_DECREF( tmp_slice_lower_2 );
            Py_DECREF( tmp_slice_upper_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 275;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e5d4dd7fcff49e52d723afcd72d6764c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e5d4dd7fcff49e52d723afcd72d6764c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e5d4dd7fcff49e52d723afcd72d6764c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e5d4dd7fcff49e52d723afcd72d6764c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e5d4dd7fcff49e52d723afcd72d6764c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e5d4dd7fcff49e52d723afcd72d6764c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e5d4dd7fcff49e52d723afcd72d6764c,
        type_description_1,
        par_self,
        par_length,
        var_frame_len,
        var_checksum,
        var_offset,
        var_response
    );


    // Release cached frame.
    if ( frame_e5d4dd7fcff49e52d723afcd72d6764c == cache_frame_e5d4dd7fcff49e52d723afcd72d6764c )
    {
        Py_DECREF( frame_e5d4dd7fcff49e52d723afcd72d6764c );
    }
    cache_frame_e5d4dd7fcff49e52d723afcd72d6764c = NULL;

    assertFrameObject( frame_e5d4dd7fcff49e52d723afcd72d6764c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_6__read_frame );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_frame_len );
    Py_DECREF( var_frame_len );
    var_frame_len = NULL;

    CHECK_OBJECT( (PyObject *)var_checksum );
    Py_DECREF( var_checksum );
    var_checksum = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_length );
    Py_DECREF( par_length );
    par_length = NULL;

    CHECK_OBJECT( (PyObject *)var_offset );
    Py_DECREF( var_offset );
    var_offset = NULL;

    CHECK_OBJECT( (PyObject *)var_response );
    Py_DECREF( var_response );
    var_response = NULL;

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

    Py_XDECREF( var_frame_len );
    var_frame_len = NULL;

    Py_XDECREF( var_checksum );
    var_checksum = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_length );
    Py_DECREF( par_length );
    par_length = NULL;

    Py_XDECREF( var_offset );
    var_offset = NULL;

    Py_XDECREF( var_response );
    var_response = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_6__read_frame );
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


static PyObject *impl_Adafruit_PN532$PN532$$$function_7__wait_ready( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_timeout_sec = python_pars[ 1 ];
    PyObject *var_start = NULL;
    PyObject *var_response = NULL;
    struct Nuitka_FrameObject *frame_3b4cba3d1e78f35a572c2152412caeeb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3b4cba3d1e78f35a572c2152412caeeb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3b4cba3d1e78f35a572c2152412caeeb, codeobj_3b4cba3d1e78f35a572c2152412caeeb, module_Adafruit_PN532$PN532, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3b4cba3d1e78f35a572c2152412caeeb = cache_frame_3b4cba3d1e78f35a572c2152412caeeb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3b4cba3d1e78f35a572c2152412caeeb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3b4cba3d1e78f35a572c2152412caeeb ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_time );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "time" );
            exception_tb = NULL;

            exception_lineno = 283;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_3b4cba3d1e78f35a572c2152412caeeb->m_frame.f_lineno = 283;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_time );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 283;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_start == NULL );
        var_start = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__gpio );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 285;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_set_low );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 285;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__cs );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 285;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_3b4cba3d1e78f35a572c2152412caeeb->m_frame.f_lineno = 285;
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


            exception_lineno = 285;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        frame_3b4cba3d1e78f35a572c2152412caeeb->m_frame.f_lineno = 286;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__busy_wait_ms, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 286;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_list_element_1;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__spi );
        if ( tmp_source_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 287;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_transfer );
        Py_DECREF( tmp_source_name_4 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 287;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_SPI_STATREAD );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PN532_SPI_STATREAD );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PN532_SPI_STATREAD" );
            exception_tb = NULL;

            exception_lineno = 287;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_list_element_1 = tmp_mvar_value_2;
        tmp_args_element_name_2 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_2, 0, tmp_list_element_1 );
        tmp_list_element_1 = const_int_0;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_2, 1, tmp_list_element_1 );
        frame_3b4cba3d1e78f35a572c2152412caeeb->m_frame.f_lineno = 287;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 287;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_response == NULL );
        var_response = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_6;
        PyObject *tmp_source_name_7;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_8;
        CHECK_OBJECT( par_self );
        tmp_source_name_7 = par_self;
        tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__gpio );
        if ( tmp_source_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 288;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_set_high );
        Py_DECREF( tmp_source_name_6 );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 288;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__cs );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 288;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_3b4cba3d1e78f35a572c2152412caeeb->m_frame.f_lineno = 288;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 288;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT( var_response );
        tmp_subscribed_name_1 = var_response;
        tmp_subscript_name_1 = const_int_pos_1;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 290;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_SPI_READY );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PN532_SPI_READY );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PN532_SPI_READY" );
            exception_tb = NULL;

            exception_lineno = 290;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_3;
        tmp_operand_name_1 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 290;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 290;
            type_description_1 = "oooo";
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
        goto loop_end_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_time );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "time" );
            exception_tb = NULL;

            exception_lineno = 292;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_4;
        frame_3b4cba3d1e78f35a572c2152412caeeb->m_frame.f_lineno = 292;
        tmp_left_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_time );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 292;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_start );
        tmp_right_name_1 = var_start;
        tmp_compexpr_left_2 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 292;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_timeout_sec );
        tmp_compexpr_right_2 = par_timeout_sec;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 292;
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
        tmp_return_value = Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_2:;
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_call_result_4;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_time );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "time" );
            exception_tb = NULL;

            exception_lineno = 295;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_5;
        frame_3b4cba3d1e78f35a572c2152412caeeb->m_frame.f_lineno = 295;
        tmp_call_result_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_sleep, &PyTuple_GET_ITEM( const_tuple_float_0_01_tuple, 0 ) );

        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 295;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_4 );
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_9;
        PyObject *tmp_source_name_10;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_11;
        CHECK_OBJECT( par_self );
        tmp_source_name_10 = par_self;
        tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__gpio );
        if ( tmp_source_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 296;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_set_low );
        Py_DECREF( tmp_source_name_9 );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 296;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_11 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__cs );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 296;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_3b4cba3d1e78f35a572c2152412caeeb->m_frame.f_lineno = 296;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_call_result_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 296;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_5 );
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT( par_self );
        tmp_called_instance_5 = par_self;
        frame_3b4cba3d1e78f35a572c2152412caeeb->m_frame.f_lineno = 297;
        tmp_call_result_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain__busy_wait_ms, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

        if ( tmp_call_result_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 297;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_6 );
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_12;
        PyObject *tmp_source_name_13;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_list_element_2;
        PyObject *tmp_mvar_value_6;
        CHECK_OBJECT( par_self );
        tmp_source_name_13 = par_self;
        tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__spi );
        if ( tmp_source_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 298;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_transfer );
        Py_DECREF( tmp_source_name_12 );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 298;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_SPI_STATREAD );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PN532_SPI_STATREAD );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PN532_SPI_STATREAD" );
            exception_tb = NULL;

            exception_lineno = 298;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_list_element_2 = tmp_mvar_value_6;
        tmp_args_element_name_5 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_2 );
        PyList_SET_ITEM( tmp_args_element_name_5, 0, tmp_list_element_2 );
        tmp_list_element_2 = const_int_0;
        Py_INCREF( tmp_list_element_2 );
        PyList_SET_ITEM( tmp_args_element_name_5, 1, tmp_list_element_2 );
        frame_3b4cba3d1e78f35a572c2152412caeeb->m_frame.f_lineno = 298;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 298;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_response;
            assert( old != NULL );
            var_response = tmp_assign_source_3;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_14;
        PyObject *tmp_source_name_15;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_16;
        CHECK_OBJECT( par_self );
        tmp_source_name_15 = par_self;
        tmp_source_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain__gpio );
        if ( tmp_source_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 299;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_set_high );
        Py_DECREF( tmp_source_name_14 );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 299;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_16 = par_self;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__cs );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 299;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_3b4cba3d1e78f35a572c2152412caeeb->m_frame.f_lineno = 299;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_call_result_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 299;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_7 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b4cba3d1e78f35a572c2152412caeeb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b4cba3d1e78f35a572c2152412caeeb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b4cba3d1e78f35a572c2152412caeeb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3b4cba3d1e78f35a572c2152412caeeb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3b4cba3d1e78f35a572c2152412caeeb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3b4cba3d1e78f35a572c2152412caeeb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3b4cba3d1e78f35a572c2152412caeeb,
        type_description_1,
        par_self,
        par_timeout_sec,
        var_start,
        var_response
    );


    // Release cached frame.
    if ( frame_3b4cba3d1e78f35a572c2152412caeeb == cache_frame_3b4cba3d1e78f35a572c2152412caeeb )
    {
        Py_DECREF( frame_3b4cba3d1e78f35a572c2152412caeeb );
    }
    cache_frame_3b4cba3d1e78f35a572c2152412caeeb = NULL;

    assertFrameObject( frame_3b4cba3d1e78f35a572c2152412caeeb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_7__wait_ready );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_timeout_sec );
    Py_DECREF( par_timeout_sec );
    par_timeout_sec = NULL;

    CHECK_OBJECT( (PyObject *)var_start );
    Py_DECREF( var_start );
    var_start = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_response );
    Py_DECREF( var_response );
    var_response = NULL;

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

    CHECK_OBJECT( (PyObject *)par_timeout_sec );
    Py_DECREF( par_timeout_sec );
    par_timeout_sec = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_response );
    var_response = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_7__wait_ready );
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


static PyObject *impl_Adafruit_PN532$PN532$$$function_8_call_function( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_command = python_pars[ 1 ];
    PyObject *par_response_length = python_pars[ 2 ];
    PyObject *par_params = python_pars[ 3 ];
    PyObject *par_timeout_sec = python_pars[ 4 ];
    PyObject *var_data = NULL;
    PyObject *var_response = NULL;
    struct Nuitka_FrameObject *frame_59cbafd365bcf4c8f5ee8414fca3fe29;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_59cbafd365bcf4c8f5ee8414fca3fe29 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_59cbafd365bcf4c8f5ee8414fca3fe29, codeobj_59cbafd365bcf4c8f5ee8414fca3fe29, module_Adafruit_PN532$PN532, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_59cbafd365bcf4c8f5ee8414fca3fe29 = cache_frame_59cbafd365bcf4c8f5ee8414fca3fe29;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_59cbafd365bcf4c8f5ee8414fca3fe29 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_59cbafd365bcf4c8f5ee8414fca3fe29 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_bytearray_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_len_arg_1;
        tmp_left_name_1 = const_int_pos_2;
        CHECK_OBJECT( par_params );
        tmp_len_arg_1 = par_params;
        tmp_right_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 311;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_bytearray_arg_1 = BINARY_OPERATION_ADD_INT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        assert( !(tmp_bytearray_arg_1 == NULL) );
        tmp_assign_source_1 = BUILTIN_BYTEARRAY1( tmp_bytearray_arg_1 );
        Py_DECREF( tmp_bytearray_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 311;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_data == NULL );
        var_data = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_HOSTTOPN532 );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PN532_HOSTTOPN532 );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PN532_HOSTTOPN532" );
            exception_tb = NULL;

            exception_lineno = 312;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_data );
        tmp_ass_subscribed_1 = var_data;
        tmp_ass_subscript_1 = const_int_0;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
        if ( tmp_ass_subscript_res_1 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_2;
        CHECK_OBJECT( par_command );
        tmp_left_name_2 = par_command;
        tmp_right_name_2 = const_int_pos_255;
        tmp_ass_subvalue_2 = BINARY_OPERATION( PyNumber_And, tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 313;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_data );
        tmp_ass_subscribed_2 = var_data;
        tmp_ass_subscript_2 = const_int_pos_1;
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_2, tmp_ass_subscript_2, 1, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_ass_subscript_res_2 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 313;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_sliceass_value_1;
        PyObject *tmp_sliceass_target_1;
        Py_ssize_t tmp_sliceassslicedel_index_lower_1;
        Py_ssize_t tmp_sliceass_index_upper_1;
        CHECK_OBJECT( par_params );
        tmp_sliceass_value_1 = par_params;
        CHECK_OBJECT( var_data );
        tmp_sliceass_target_1 = var_data;
        tmp_sliceassslicedel_index_lower_1 = 2;
        tmp_sliceass_index_upper_1 = PY_SSIZE_T_MAX;
        tmp_result = SET_INDEX_SLICE( tmp_sliceass_target_1, tmp_sliceassslicedel_index_lower_1, tmp_sliceass_index_upper_1, tmp_sliceass_value_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 314;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( var_data );
        tmp_args_element_name_1 = var_data;
        frame_59cbafd365bcf4c8f5ee8414fca3fe29->m_frame.f_lineno = 316;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__write_frame, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 316;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT( par_timeout_sec );
        tmp_args_element_name_2 = par_timeout_sec;
        frame_59cbafd365bcf4c8f5ee8414fca3fe29->m_frame.f_lineno = 317;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_operand_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__wait_ready, call_args );
        }

        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 317;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 317;
            type_description_1 = "ooooooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__read_data );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 320;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_ACK );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PN532_ACK );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PN532_ACK" );
            exception_tb = NULL;

            exception_lineno = 320;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_2 = tmp_mvar_value_2;
        tmp_args_element_name_3 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 320;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_59cbafd365bcf4c8f5ee8414fca3fe29->m_frame.f_lineno = 320;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 320;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_response == NULL );
        var_response = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( par_self );
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT( par_timeout_sec );
        tmp_args_element_name_4 = par_timeout_sec;
        frame_59cbafd365bcf4c8f5ee8414fca3fe29->m_frame.f_lineno = 323;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_operand_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain__wait_ready, call_args );
        }

        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 323;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 323;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__read_frame );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 326;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_response_length );
        tmp_left_name_3 = par_response_length;
        tmp_right_name_3 = const_int_pos_2;
        tmp_args_element_name_5 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 326;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_59cbafd365bcf4c8f5ee8414fca3fe29->m_frame.f_lineno = 326;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 326;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_response;
            assert( old != NULL );
            var_response = tmp_assign_source_3;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_response );
        tmp_compexpr_left_1 = var_response;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            Py_ssize_t tmp_sliceslicedel_index_lower_1;
            Py_ssize_t tmp_slice_index_upper_1;
            PyObject *tmp_slice_source_1;
            tmp_sliceslicedel_index_lower_1 = 2;
            tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
            CHECK_OBJECT( var_response );
            tmp_slice_source_1 = var_response;
            tmp_return_value = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 332;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_3:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_59cbafd365bcf4c8f5ee8414fca3fe29 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_59cbafd365bcf4c8f5ee8414fca3fe29 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_59cbafd365bcf4c8f5ee8414fca3fe29 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_59cbafd365bcf4c8f5ee8414fca3fe29, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_59cbafd365bcf4c8f5ee8414fca3fe29->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_59cbafd365bcf4c8f5ee8414fca3fe29, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_59cbafd365bcf4c8f5ee8414fca3fe29,
        type_description_1,
        par_self,
        par_command,
        par_response_length,
        par_params,
        par_timeout_sec,
        var_data,
        var_response
    );


    // Release cached frame.
    if ( frame_59cbafd365bcf4c8f5ee8414fca3fe29 == cache_frame_59cbafd365bcf4c8f5ee8414fca3fe29 )
    {
        Py_DECREF( frame_59cbafd365bcf4c8f5ee8414fca3fe29 );
    }
    cache_frame_59cbafd365bcf4c8f5ee8414fca3fe29 = NULL;

    assertFrameObject( frame_59cbafd365bcf4c8f5ee8414fca3fe29 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_8_call_function );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_timeout_sec );
    Py_DECREF( par_timeout_sec );
    par_timeout_sec = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_params );
    Py_DECREF( par_params );
    par_params = NULL;

    CHECK_OBJECT( (PyObject *)par_command );
    Py_DECREF( par_command );
    par_command = NULL;

    CHECK_OBJECT( (PyObject *)par_response_length );
    Py_DECREF( par_response_length );
    par_response_length = NULL;

    CHECK_OBJECT( (PyObject *)var_data );
    Py_DECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_response );
    var_response = NULL;

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

    CHECK_OBJECT( (PyObject *)par_timeout_sec );
    Py_DECREF( par_timeout_sec );
    par_timeout_sec = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_params );
    Py_DECREF( par_params );
    par_params = NULL;

    CHECK_OBJECT( (PyObject *)par_command );
    Py_DECREF( par_command );
    par_command = NULL;

    CHECK_OBJECT( (PyObject *)par_response_length );
    Py_DECREF( par_response_length );
    par_response_length = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_response );
    var_response = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_8_call_function );
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


static PyObject *impl_Adafruit_PN532$PN532$$$function_9_begin( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_7134c43beb8ac529ee58ba47dcf2e749;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7134c43beb8ac529ee58ba47dcf2e749 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7134c43beb8ac529ee58ba47dcf2e749, codeobj_7134c43beb8ac529ee58ba47dcf2e749, module_Adafruit_PN532$PN532, sizeof(void *) );
    frame_7134c43beb8ac529ee58ba47dcf2e749 = cache_frame_7134c43beb8ac529ee58ba47dcf2e749;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7134c43beb8ac529ee58ba47dcf2e749 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7134c43beb8ac529ee58ba47dcf2e749 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__gpio );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 339;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_set_low );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 339;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__cs );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 339;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7134c43beb8ac529ee58ba47dcf2e749->m_frame.f_lineno = 339;
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


            exception_lineno = 339;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_time );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "time" );
            exception_tb = NULL;

            exception_lineno = 340;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_7134c43beb8ac529ee58ba47dcf2e749->m_frame.f_lineno = 340;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_sleep, &PyTuple_GET_ITEM( const_tuple_float_1_0_tuple, 0 ) );

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 340;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        frame_7134c43beb8ac529ee58ba47dcf2e749->m_frame.f_lineno = 343;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_get_firmware_version );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 343;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__gpio );
        if ( tmp_source_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_set_high );
        Py_DECREF( tmp_source_name_4 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__cs );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 344;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7134c43beb8ac529ee58ba47dcf2e749->m_frame.f_lineno = 344;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_4 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7134c43beb8ac529ee58ba47dcf2e749 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7134c43beb8ac529ee58ba47dcf2e749 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7134c43beb8ac529ee58ba47dcf2e749, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7134c43beb8ac529ee58ba47dcf2e749->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7134c43beb8ac529ee58ba47dcf2e749, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7134c43beb8ac529ee58ba47dcf2e749,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_7134c43beb8ac529ee58ba47dcf2e749 == cache_frame_7134c43beb8ac529ee58ba47dcf2e749 )
    {
        Py_DECREF( frame_7134c43beb8ac529ee58ba47dcf2e749 );
    }
    cache_frame_7134c43beb8ac529ee58ba47dcf2e749 = NULL;

    assertFrameObject( frame_7134c43beb8ac529ee58ba47dcf2e749 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_9_begin );
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
    NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_9_begin );
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


static PyObject *impl_Adafruit_PN532$PN532$$$function_10_get_firmware_version( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_response = NULL;
    struct Nuitka_FrameObject *frame_307d294348a0f5503ff478448d67a321;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_307d294348a0f5503ff478448d67a321 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_307d294348a0f5503ff478448d67a321, codeobj_307d294348a0f5503ff478448d67a321, module_Adafruit_PN532$PN532, sizeof(void *)+sizeof(void *) );
    frame_307d294348a0f5503ff478448d67a321 = cache_frame_307d294348a0f5503ff478448d67a321;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_307d294348a0f5503ff478448d67a321 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_307d294348a0f5503ff478448d67a321 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_call_function );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_GETFIRMWAREVERSION );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_GETFIRMWAREVERSION );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PN532_COMMAND_GETFIRMWAREVERSION" );
            exception_tb = NULL;

            exception_lineno = 350;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_1;
        tmp_args_element_name_2 = const_int_pos_4;
        frame_307d294348a0f5503ff478448d67a321->m_frame.f_lineno = 350;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_response == NULL );
        var_response = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_response );
        tmp_compexpr_left_1 = var_response;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            CHECK_OBJECT( var_response );
            tmp_subscribed_name_1 = var_response;
            tmp_subscript_name_1 = const_int_0;
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 354;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = PyTuple_New( 4 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_response );
            tmp_subscribed_name_2 = var_response;
            tmp_subscript_name_2 = const_int_pos_1;
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 1 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 354;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( var_response );
            tmp_subscribed_name_3 = var_response;
            tmp_subscript_name_3 = const_int_pos_2;
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 2 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 354;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
            CHECK_OBJECT( var_response );
            tmp_subscribed_name_4 = var_response;
            tmp_subscript_name_4 = const_int_pos_3;
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 3 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 354;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_1 );
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_307d294348a0f5503ff478448d67a321 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_307d294348a0f5503ff478448d67a321 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_307d294348a0f5503ff478448d67a321 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_307d294348a0f5503ff478448d67a321, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_307d294348a0f5503ff478448d67a321->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_307d294348a0f5503ff478448d67a321, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_307d294348a0f5503ff478448d67a321,
        type_description_1,
        par_self,
        var_response
    );


    // Release cached frame.
    if ( frame_307d294348a0f5503ff478448d67a321 == cache_frame_307d294348a0f5503ff478448d67a321 )
    {
        Py_DECREF( frame_307d294348a0f5503ff478448d67a321 );
    }
    cache_frame_307d294348a0f5503ff478448d67a321 = NULL;

    assertFrameObject( frame_307d294348a0f5503ff478448d67a321 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_10_get_firmware_version );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_response );
    Py_DECREF( var_response );
    var_response = NULL;

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

    Py_XDECREF( var_response );
    var_response = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_10_get_firmware_version );
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


static PyObject *impl_Adafruit_PN532$PN532$$$function_11_SAM_configuration( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_4f8eb83b055f996d6d6984fb5002f00f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4f8eb83b055f996d6d6984fb5002f00f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4f8eb83b055f996d6d6984fb5002f00f, codeobj_4f8eb83b055f996d6d6984fb5002f00f, module_Adafruit_PN532$PN532, sizeof(void *) );
    frame_4f8eb83b055f996d6d6984fb5002f00f = cache_frame_4f8eb83b055f996d6d6984fb5002f00f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4f8eb83b055f996d6d6984fb5002f00f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4f8eb83b055f996d6d6984fb5002f00f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_call_function );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 364;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_SAMCONFIGURATION );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_SAMCONFIGURATION );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PN532_COMMAND_SAMCONFIGURATION" );
            exception_tb = NULL;

            exception_lineno = 364;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_1;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = DEEP_COPY( const_dict_06af81f8c2c5ef38966aa89559e19724 );
        frame_4f8eb83b055f996d6d6984fb5002f00f->m_frame.f_lineno = 364;
        tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 364;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f8eb83b055f996d6d6984fb5002f00f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f8eb83b055f996d6d6984fb5002f00f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4f8eb83b055f996d6d6984fb5002f00f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4f8eb83b055f996d6d6984fb5002f00f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4f8eb83b055f996d6d6984fb5002f00f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4f8eb83b055f996d6d6984fb5002f00f,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_4f8eb83b055f996d6d6984fb5002f00f == cache_frame_4f8eb83b055f996d6d6984fb5002f00f )
    {
        Py_DECREF( frame_4f8eb83b055f996d6d6984fb5002f00f );
    }
    cache_frame_4f8eb83b055f996d6d6984fb5002f00f = NULL;

    assertFrameObject( frame_4f8eb83b055f996d6d6984fb5002f00f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_11_SAM_configuration );
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
    NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_11_SAM_configuration );
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


static PyObject *impl_Adafruit_PN532$PN532$$$function_12_read_passive_target( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_card_baud = python_pars[ 1 ];
    PyObject *par_timeout_sec = python_pars[ 2 ];
    PyObject *var_response = NULL;
    struct Nuitka_FrameObject *frame_4493fe746a031495bd2d9a23d9e32c2c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4493fe746a031495bd2d9a23d9e32c2c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4493fe746a031495bd2d9a23d9e32c2c, codeobj_4493fe746a031495bd2d9a23d9e32c2c, module_Adafruit_PN532$PN532, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4493fe746a031495bd2d9a23d9e32c2c = cache_frame_4493fe746a031495bd2d9a23d9e32c2c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4493fe746a031495bd2d9a23d9e32c2c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4493fe746a031495bd2d9a23d9e32c2c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_call_function );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 372;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_INLISTPASSIVETARGET );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_INLISTPASSIVETARGET );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PN532_COMMAND_INLISTPASSIVETARGET" );
            exception_tb = NULL;

            exception_lineno = 372;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_1;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_list_element_1 = const_int_pos_1;
        tmp_dict_value_1 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_dict_value_1, 0, tmp_list_element_1 );
        CHECK_OBJECT( par_card_baud );
        tmp_list_element_1 = par_card_baud;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_dict_value_1, 1, tmp_list_element_1 );
        tmp_dict_key_1 = const_str_plain_params;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_2 = const_int_pos_17;
        tmp_dict_key_2 = const_str_plain_response_length;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_4493fe746a031495bd2d9a23d9e32c2c->m_frame.f_lineno = 372;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 372;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_response == NULL );
        var_response = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_response );
        tmp_compexpr_left_1 = var_response;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_response );
        tmp_compexpr_left_2 = var_response;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_slice_source_1;
            PyObject *tmp_slice_lower_1;
            PyObject *tmp_slice_upper_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( var_response );
            tmp_slice_source_1 = var_response;
            tmp_slice_lower_1 = const_int_pos_6;
            tmp_left_name_1 = const_int_pos_6;
            CHECK_OBJECT( var_response );
            tmp_subscribed_name_1 = var_response;
            tmp_subscript_name_1 = const_int_pos_5;
            tmp_right_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 5 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 385;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_slice_upper_1 = BINARY_OPERATION_ADD_INT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_slice_upper_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 385;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = LOOKUP_SLICE( tmp_slice_source_1, tmp_slice_lower_1, tmp_slice_upper_1 );
            Py_DECREF( tmp_slice_upper_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 385;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4493fe746a031495bd2d9a23d9e32c2c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4493fe746a031495bd2d9a23d9e32c2c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4493fe746a031495bd2d9a23d9e32c2c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4493fe746a031495bd2d9a23d9e32c2c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4493fe746a031495bd2d9a23d9e32c2c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4493fe746a031495bd2d9a23d9e32c2c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4493fe746a031495bd2d9a23d9e32c2c,
        type_description_1,
        par_self,
        par_card_baud,
        par_timeout_sec,
        var_response
    );


    // Release cached frame.
    if ( frame_4493fe746a031495bd2d9a23d9e32c2c == cache_frame_4493fe746a031495bd2d9a23d9e32c2c )
    {
        Py_DECREF( frame_4493fe746a031495bd2d9a23d9e32c2c );
    }
    cache_frame_4493fe746a031495bd2d9a23d9e32c2c = NULL;

    assertFrameObject( frame_4493fe746a031495bd2d9a23d9e32c2c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_12_read_passive_target );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_timeout_sec );
    Py_DECREF( par_timeout_sec );
    par_timeout_sec = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_card_baud );
    Py_DECREF( par_card_baud );
    par_card_baud = NULL;

    CHECK_OBJECT( (PyObject *)var_response );
    Py_DECREF( var_response );
    var_response = NULL;

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

    CHECK_OBJECT( (PyObject *)par_timeout_sec );
    Py_DECREF( par_timeout_sec );
    par_timeout_sec = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_card_baud );
    Py_DECREF( par_card_baud );
    par_card_baud = NULL;

    Py_XDECREF( var_response );
    var_response = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_12_read_passive_target );
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


static PyObject *impl_Adafruit_PN532$PN532$$$function_13_mifare_classic_authenticate_block( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_uid = python_pars[ 1 ];
    PyObject *par_block_number = python_pars[ 2 ];
    PyObject *par_key_number = python_pars[ 3 ];
    PyObject *par_key = python_pars[ 4 ];
    PyObject *var_params = NULL;
    PyObject *var_uidlen = NULL;
    PyObject *var_keylen = NULL;
    PyObject *var_response = NULL;
    struct Nuitka_FrameObject *frame_81b795ce359e2fb70d9bfd02804fcded;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_81b795ce359e2fb70d9bfd02804fcded = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_81b795ce359e2fb70d9bfd02804fcded, codeobj_81b795ce359e2fb70d9bfd02804fcded, module_Adafruit_PN532$PN532, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_81b795ce359e2fb70d9bfd02804fcded = cache_frame_81b795ce359e2fb70d9bfd02804fcded;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_81b795ce359e2fb70d9bfd02804fcded );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_81b795ce359e2fb70d9bfd02804fcded ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_uid );
        tmp_len_arg_1 = par_uid;
        tmp_assign_source_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 396;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_uidlen == NULL );
        var_uidlen = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT( par_key );
        tmp_len_arg_2 = par_key;
        tmp_assign_source_2 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_keylen == NULL );
        var_keylen = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_bytearray_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        tmp_left_name_2 = const_int_pos_3;
        CHECK_OBJECT( var_uidlen );
        tmp_right_name_1 = var_uidlen;
        tmp_left_name_1 = BINARY_OPERATION_ADD_INT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        assert( !(tmp_left_name_1 == NULL) );
        CHECK_OBJECT( var_keylen );
        tmp_right_name_2 = var_keylen;
        tmp_bytearray_arg_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        assert( !(tmp_bytearray_arg_1 == NULL) );
        tmp_assign_source_3 = BUILTIN_BYTEARRAY1( tmp_bytearray_arg_1 );
        Py_DECREF( tmp_bytearray_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 398;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_params == NULL );
        var_params = tmp_assign_source_3;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        tmp_ass_subvalue_1 = const_int_pos_1;
        CHECK_OBJECT( var_params );
        tmp_ass_subscribed_1 = var_params;
        tmp_ass_subscript_1 = const_int_0;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
        if ( tmp_ass_subscript_res_1 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 399;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_2;
        CHECK_OBJECT( par_key_number );
        tmp_left_name_3 = par_key_number;
        tmp_right_name_3 = const_int_pos_255;
        tmp_ass_subvalue_2 = BINARY_OPERATION( PyNumber_And, tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 400;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_params );
        tmp_ass_subscribed_2 = var_params;
        tmp_ass_subscript_2 = const_int_pos_1;
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_2, tmp_ass_subscript_2, 1, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_ass_subscript_res_2 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 400;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        int tmp_ass_subscript_res_3;
        CHECK_OBJECT( par_block_number );
        tmp_left_name_4 = par_block_number;
        tmp_right_name_4 = const_int_pos_255;
        tmp_ass_subvalue_3 = BINARY_OPERATION( PyNumber_And, tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 401;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_params );
        tmp_ass_subscribed_3 = var_params;
        tmp_ass_subscript_3 = const_int_pos_2;
        tmp_ass_subscript_res_3 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_3, tmp_ass_subscript_3, 2, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_ass_subscript_res_3 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 401;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_sliceass_value_1;
        PyObject *tmp_sliceass_target_1;
        PyObject *tmp_sliceass_lower_1;
        PyObject *tmp_sliceass_upper_1;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( par_key );
        tmp_sliceass_value_1 = par_key;
        CHECK_OBJECT( var_params );
        tmp_sliceass_target_1 = var_params;
        tmp_sliceass_lower_1 = const_int_pos_3;
        tmp_left_name_5 = const_int_pos_3;
        CHECK_OBJECT( var_keylen );
        tmp_right_name_5 = var_keylen;
        tmp_sliceass_upper_1 = BINARY_OPERATION_ADD_INT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        assert( !(tmp_sliceass_upper_1 == NULL) );
        tmp_result = SET_SLICE( tmp_sliceass_target_1, tmp_sliceass_lower_1, tmp_sliceass_upper_1, tmp_sliceass_value_1 );
        Py_DECREF( tmp_sliceass_upper_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 402;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_sliceass_value_2;
        PyObject *tmp_sliceass_target_2;
        PyObject *tmp_sliceass_lower_2;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( par_uid );
        tmp_sliceass_value_2 = par_uid;
        CHECK_OBJECT( var_params );
        tmp_sliceass_target_2 = var_params;
        tmp_left_name_6 = const_int_pos_3;
        CHECK_OBJECT( var_keylen );
        tmp_right_name_6 = var_keylen;
        tmp_sliceass_lower_2 = BINARY_OPERATION_ADD_INT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        assert( !(tmp_sliceass_lower_2 == NULL) );
        tmp_result = SET_SLICE( tmp_sliceass_target_2, tmp_sliceass_lower_2, Py_None, tmp_sliceass_value_2 );
        Py_DECREF( tmp_sliceass_lower_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 403;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_call_function );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 405;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_INDATAEXCHANGE );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_INDATAEXCHANGE );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PN532_COMMAND_INDATAEXCHANGE" );
            exception_tb = NULL;

            exception_lineno = 405;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_1;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_params );
        tmp_dict_value_1 = var_params;
        tmp_dict_key_1 = const_str_plain_params;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_2 = const_int_pos_1;
        tmp_dict_key_2 = const_str_plain_response_length;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_81b795ce359e2fb70d9bfd02804fcded->m_frame.f_lineno = 405;
        tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 405;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_response == NULL );
        var_response = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_response );
        tmp_compexpr_left_1 = var_response;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( var_response );
            tmp_subscribed_name_1 = var_response;
            tmp_subscript_name_1 = const_int_0;
            tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 409;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = const_int_0;
            tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 409;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_81b795ce359e2fb70d9bfd02804fcded );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_81b795ce359e2fb70d9bfd02804fcded );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_81b795ce359e2fb70d9bfd02804fcded );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_81b795ce359e2fb70d9bfd02804fcded, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_81b795ce359e2fb70d9bfd02804fcded->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_81b795ce359e2fb70d9bfd02804fcded, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_81b795ce359e2fb70d9bfd02804fcded,
        type_description_1,
        par_self,
        par_uid,
        par_block_number,
        par_key_number,
        par_key,
        var_params,
        var_uidlen,
        var_keylen,
        var_response
    );


    // Release cached frame.
    if ( frame_81b795ce359e2fb70d9bfd02804fcded == cache_frame_81b795ce359e2fb70d9bfd02804fcded )
    {
        Py_DECREF( frame_81b795ce359e2fb70d9bfd02804fcded );
    }
    cache_frame_81b795ce359e2fb70d9bfd02804fcded = NULL;

    assertFrameObject( frame_81b795ce359e2fb70d9bfd02804fcded );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_13_mifare_classic_authenticate_block );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_block_number );
    Py_DECREF( par_block_number );
    par_block_number = NULL;

    CHECK_OBJECT( (PyObject *)par_uid );
    Py_DECREF( par_uid );
    par_uid = NULL;

    CHECK_OBJECT( (PyObject *)par_key_number );
    Py_DECREF( par_key_number );
    par_key_number = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_params );
    Py_DECREF( var_params );
    var_params = NULL;

    CHECK_OBJECT( (PyObject *)var_uidlen );
    Py_DECREF( var_uidlen );
    var_uidlen = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    CHECK_OBJECT( (PyObject *)var_keylen );
    Py_DECREF( var_keylen );
    var_keylen = NULL;

    CHECK_OBJECT( (PyObject *)var_response );
    Py_DECREF( var_response );
    var_response = NULL;

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

    CHECK_OBJECT( (PyObject *)par_block_number );
    Py_DECREF( par_block_number );
    par_block_number = NULL;

    CHECK_OBJECT( (PyObject *)par_uid );
    Py_DECREF( par_uid );
    par_uid = NULL;

    CHECK_OBJECT( (PyObject *)par_key_number );
    Py_DECREF( par_key_number );
    par_key_number = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_params );
    var_params = NULL;

    Py_XDECREF( var_uidlen );
    var_uidlen = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    Py_XDECREF( var_keylen );
    var_keylen = NULL;

    Py_XDECREF( var_response );
    var_response = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_13_mifare_classic_authenticate_block );
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


static PyObject *impl_Adafruit_PN532$PN532$$$function_14_mifare_classic_read_block( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_block_number = python_pars[ 1 ];
    PyObject *var_response = NULL;
    struct Nuitka_FrameObject *frame_2def24bb00a069986b16fbf03fb850ed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2def24bb00a069986b16fbf03fb850ed = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2def24bb00a069986b16fbf03fb850ed, codeobj_2def24bb00a069986b16fbf03fb850ed, module_Adafruit_PN532$PN532, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2def24bb00a069986b16fbf03fb850ed = cache_frame_2def24bb00a069986b16fbf03fb850ed;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2def24bb00a069986b16fbf03fb850ed );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2def24bb00a069986b16fbf03fb850ed ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_call_function );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 418;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_INDATAEXCHANGE );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_INDATAEXCHANGE );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PN532_COMMAND_INDATAEXCHANGE" );
            exception_tb = NULL;

            exception_lineno = 418;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_1;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_list_element_1 = const_int_pos_1;
        tmp_dict_value_1 = PyList_New( 3 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_dict_value_1, 0, tmp_list_element_1 );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_MIFARE_CMD_READ );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MIFARE_CMD_READ );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_dict_value_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "MIFARE_CMD_READ" );
            exception_tb = NULL;

            exception_lineno = 419;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_list_element_1 = tmp_mvar_value_2;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_dict_value_1, 1, tmp_list_element_1 );
        CHECK_OBJECT( par_block_number );
        tmp_left_name_1 = par_block_number;
        tmp_right_name_1 = const_int_pos_255;
        tmp_list_element_1 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_dict_value_1 );

            exception_lineno = 419;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_dict_value_1, 2, tmp_list_element_1 );
        tmp_dict_key_1 = const_str_plain_params;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_2 = const_int_pos_17;
        tmp_dict_key_2 = const_str_plain_response_length;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_2def24bb00a069986b16fbf03fb850ed->m_frame.f_lineno = 418;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 418;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_response == NULL );
        var_response = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_response );
        tmp_subscribed_name_1 = var_response;
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 422;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 422;
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
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_response );
        tmp_compexpr_left_2 = var_response;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            Py_ssize_t tmp_sliceslicedel_index_lower_1;
            Py_ssize_t tmp_slice_index_upper_1;
            PyObject *tmp_slice_source_1;
            tmp_sliceslicedel_index_lower_1 = 1;
            tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
            CHECK_OBJECT( var_response );
            tmp_slice_source_1 = var_response;
            tmp_return_value = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 426;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2def24bb00a069986b16fbf03fb850ed );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2def24bb00a069986b16fbf03fb850ed );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2def24bb00a069986b16fbf03fb850ed );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2def24bb00a069986b16fbf03fb850ed, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2def24bb00a069986b16fbf03fb850ed->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2def24bb00a069986b16fbf03fb850ed, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2def24bb00a069986b16fbf03fb850ed,
        type_description_1,
        par_self,
        par_block_number,
        var_response
    );


    // Release cached frame.
    if ( frame_2def24bb00a069986b16fbf03fb850ed == cache_frame_2def24bb00a069986b16fbf03fb850ed )
    {
        Py_DECREF( frame_2def24bb00a069986b16fbf03fb850ed );
    }
    cache_frame_2def24bb00a069986b16fbf03fb850ed = NULL;

    assertFrameObject( frame_2def24bb00a069986b16fbf03fb850ed );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_14_mifare_classic_read_block );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_block_number );
    Py_DECREF( par_block_number );
    par_block_number = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_response );
    Py_DECREF( var_response );
    var_response = NULL;

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

    CHECK_OBJECT( (PyObject *)par_block_number );
    Py_DECREF( par_block_number );
    par_block_number = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_response );
    var_response = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_14_mifare_classic_read_block );
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


static PyObject *impl_Adafruit_PN532$PN532$$$function_15_mifare_classic_write_block( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_block_number = python_pars[ 1 ];
    PyObject *par_data = python_pars[ 2 ];
    PyObject *var_response = NULL;
    PyObject *var_params = NULL;
    struct Nuitka_FrameObject *frame_805f60a08b81938a35c5250cca88f131;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_805f60a08b81938a35c5250cca88f131 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_805f60a08b81938a35c5250cca88f131, codeobj_805f60a08b81938a35c5250cca88f131, module_Adafruit_PN532$PN532, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_805f60a08b81938a35c5250cca88f131 = cache_frame_805f60a08b81938a35c5250cca88f131;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_805f60a08b81938a35c5250cca88f131 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_805f60a08b81938a35c5250cca88f131 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_data );
        tmp_compexpr_left_1 = par_data;
        tmp_compexpr_right_1 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == 1 )
        {
            goto and_right_1;
        }
        else
        {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT( par_data );
        tmp_len_arg_1 = par_data;
        tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 434;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_pos_16;
        tmp_and_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        assert( !(tmp_and_right_value_1 == NULL) );
        tmp_operand_name_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF( tmp_and_left_value_1 );
        tmp_operand_name_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 434;
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
            PyObject *tmp_raise_value_1;
            tmp_raise_type_1 = PyExc_AssertionError;
            tmp_raise_value_1 = const_tuple_str_digest_b5d7847d0522219be8f27713b7897698_tuple;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_value = tmp_raise_value_1;
            Py_INCREF( tmp_raise_value_1 );
            exception_lineno = 434;
            RAISE_EXCEPTION_WITH_VALUE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = BYTEARRAY_COPY( const_bytearray_ec582fb6017ddd701c0f4f67916a0410 );
        assert( var_params == NULL );
        var_params = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        tmp_ass_subvalue_1 = const_int_pos_1;
        CHECK_OBJECT( var_params );
        tmp_ass_subscribed_1 = var_params;
        tmp_ass_subscript_1 = const_int_0;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
        if ( tmp_ass_subscript_res_1 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 437;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_MIFARE_CMD_WRITE );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MIFARE_CMD_WRITE );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "MIFARE_CMD_WRITE" );
            exception_tb = NULL;

            exception_lineno = 438;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_2 = tmp_mvar_value_1;
        CHECK_OBJECT( var_params );
        tmp_ass_subscribed_2 = var_params;
        tmp_ass_subscript_2 = const_int_pos_1;
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_2, tmp_ass_subscript_2, 1, tmp_ass_subvalue_2 );
        if ( tmp_ass_subscript_res_2 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 438;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        int tmp_ass_subscript_res_3;
        CHECK_OBJECT( par_block_number );
        tmp_left_name_1 = par_block_number;
        tmp_right_name_1 = const_int_pos_255;
        tmp_ass_subvalue_3 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 439;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_params );
        tmp_ass_subscribed_3 = var_params;
        tmp_ass_subscript_3 = const_int_pos_2;
        tmp_ass_subscript_res_3 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_3, tmp_ass_subscript_3, 2, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_ass_subscript_res_3 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 439;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_sliceass_value_1;
        PyObject *tmp_sliceass_target_1;
        Py_ssize_t tmp_sliceassslicedel_index_lower_1;
        Py_ssize_t tmp_sliceass_index_upper_1;
        CHECK_OBJECT( par_data );
        tmp_sliceass_value_1 = par_data;
        CHECK_OBJECT( var_params );
        tmp_sliceass_target_1 = var_params;
        tmp_sliceassslicedel_index_lower_1 = 3;
        tmp_sliceass_index_upper_1 = PY_SSIZE_T_MAX;
        tmp_result = SET_INDEX_SLICE( tmp_sliceass_target_1, tmp_sliceassslicedel_index_lower_1, tmp_sliceass_index_upper_1, tmp_sliceass_value_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 440;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_call_function );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 442;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_INDATAEXCHANGE );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_INDATAEXCHANGE );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PN532_COMMAND_INDATAEXCHANGE" );
            exception_tb = NULL;

            exception_lineno = 442;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_2;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_params );
        tmp_dict_value_1 = var_params;
        tmp_dict_key_1 = const_str_plain_params;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_2 = const_int_pos_1;
        tmp_dict_key_2 = const_str_plain_response_length;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_805f60a08b81938a35c5250cca88f131->m_frame.f_lineno = 442;
        tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 442;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_response == NULL );
        var_response = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_response );
        tmp_compexpr_left_3 = var_response;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( var_response );
            tmp_subscribed_name_1 = var_response;
            tmp_subscript_name_1 = const_int_0;
            tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_compexpr_left_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 446;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_4 = const_int_0;
            tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_left_4 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 446;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_805f60a08b81938a35c5250cca88f131 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_805f60a08b81938a35c5250cca88f131 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_805f60a08b81938a35c5250cca88f131 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_805f60a08b81938a35c5250cca88f131, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_805f60a08b81938a35c5250cca88f131->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_805f60a08b81938a35c5250cca88f131, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_805f60a08b81938a35c5250cca88f131,
        type_description_1,
        par_self,
        par_block_number,
        par_data,
        var_response,
        var_params
    );


    // Release cached frame.
    if ( frame_805f60a08b81938a35c5250cca88f131 == cache_frame_805f60a08b81938a35c5250cca88f131 )
    {
        Py_DECREF( frame_805f60a08b81938a35c5250cca88f131 );
    }
    cache_frame_805f60a08b81938a35c5250cca88f131 = NULL;

    assertFrameObject( frame_805f60a08b81938a35c5250cca88f131 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_15_mifare_classic_write_block );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_block_number );
    Py_DECREF( par_block_number );
    par_block_number = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)var_response );
    Py_DECREF( var_response );
    var_response = NULL;

    CHECK_OBJECT( (PyObject *)var_params );
    Py_DECREF( var_params );
    var_params = NULL;

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

    CHECK_OBJECT( (PyObject *)par_block_number );
    Py_DECREF( par_block_number );
    par_block_number = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    Py_XDECREF( var_response );
    var_response = NULL;

    Py_XDECREF( var_params );
    var_params = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532$$$function_15_mifare_classic_write_block );
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



static PyObject *MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_10_get_firmware_version(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_PN532$PN532$$$function_10_get_firmware_version,
        const_str_plain_get_firmware_version,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_307d294348a0f5503ff478448d67a321,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_PN532$PN532,
        const_str_digest_3a8a27fd69bbf4168c3ab26220a54da8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_11_SAM_configuration(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_PN532$PN532$$$function_11_SAM_configuration,
        const_str_plain_SAM_configuration,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4f8eb83b055f996d6d6984fb5002f00f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_PN532$PN532,
        const_str_digest_ce240b78260bbb1c8d5efeb7c6582dfd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_12_read_passive_target( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_PN532$PN532$$$function_12_read_passive_target,
        const_str_plain_read_passive_target,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4493fe746a031495bd2d9a23d9e32c2c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_PN532$PN532,
        const_str_digest_fa03d203f242ecd008e8159180e64e55,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_13_mifare_classic_authenticate_block(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_PN532$PN532$$$function_13_mifare_classic_authenticate_block,
        const_str_plain_mifare_classic_authenticate_block,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_81b795ce359e2fb70d9bfd02804fcded,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_PN532$PN532,
        const_str_digest_33d72ae8e6195be80e39494cf6f233b4,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_14_mifare_classic_read_block(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_PN532$PN532$$$function_14_mifare_classic_read_block,
        const_str_plain_mifare_classic_read_block,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2def24bb00a069986b16fbf03fb850ed,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_PN532$PN532,
        const_str_digest_04f183a8ff020a0780da4548db274b4e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_15_mifare_classic_write_block(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_PN532$PN532$$$function_15_mifare_classic_write_block,
        const_str_plain_mifare_classic_write_block,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_805f60a08b81938a35c5250cca88f131,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_PN532$PN532,
        const_str_digest_43dd3cba9854cba959345194898eb26e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_1___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_PN532$PN532$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_eb84a8eb61e19df0e90f2e27ff262bd2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_PN532$PN532,
        const_str_digest_4864b517fbd280b075870883323aaef3,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_2__uint8_add(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_PN532$PN532$$$function_2__uint8_add,
        const_str_plain__uint8_add,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_473eb2619000a096e678a64bf279492b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_PN532$PN532,
        const_str_digest_37c1ca2bf8f1eac3ffda7ec7c4f29fcf,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_3__busy_wait_ms(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_PN532$PN532$$$function_3__busy_wait_ms,
        const_str_plain__busy_wait_ms,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_29ea49476a16b7c15c6a5fe2e8158e99,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_PN532$PN532,
        const_str_digest_518f73aa90bfb8be2b967cfa32f5be58,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_4__write_frame(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_PN532$PN532$$$function_4__write_frame,
        const_str_plain__write_frame,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0bffc46c8b378dc91f82c968cb5f1ef4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_PN532$PN532,
        const_str_digest_ca46f8f6fb70107a17da25f60e3d0829,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_5__read_data(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_PN532$PN532$$$function_5__read_data,
        const_str_plain__read_data,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b9c9cf25c4697c7fb5076ad3d2ce8123,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_PN532$PN532,
        const_str_digest_4ce2af39fe16438307897170231dc573,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_6__read_frame(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_PN532$PN532$$$function_6__read_frame,
        const_str_plain__read_frame,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e5d4dd7fcff49e52d723afcd72d6764c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_PN532$PN532,
        const_str_digest_2f149b302255b415d12609614715d0b9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_7__wait_ready( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_PN532$PN532$$$function_7__wait_ready,
        const_str_plain__wait_ready,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3b4cba3d1e78f35a572c2152412caeeb,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_PN532$PN532,
        const_str_digest_b8bfa84c9b04b6055a199568e25fb9d6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_8_call_function( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_PN532$PN532$$$function_8_call_function,
        const_str_plain_call_function,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_59cbafd365bcf4c8f5ee8414fca3fe29,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_PN532$PN532,
        const_str_digest_b50eaf5930b74368d4ccce91c9096cfc,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_9_begin(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_PN532$PN532$$$function_9_begin,
        const_str_plain_begin,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7134c43beb8ac529ee58ba47dcf2e749,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_PN532$PN532,
        const_str_digest_23dcc86cc4ad1c6760a299c49f2a4b96,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Adafruit_PN532$PN532 =
{
    PyModuleDef_HEAD_INIT,
    "Adafruit_PN532.PN532",
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

MOD_INIT_DECL( Adafruit_PN532$PN532 )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Adafruit_PN532$PN532 );
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
    puts("Adafruit_PN532.PN532: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Adafruit_PN532.PN532: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Adafruit_PN532.PN532: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initAdafruit_PN532$PN532" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Adafruit_PN532$PN532 = Py_InitModule4(
        "Adafruit_PN532.PN532",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_Adafruit_PN532$PN532 = PyModule_Create( &mdef_Adafruit_PN532$PN532 );
#endif

    moduledict_Adafruit_PN532$PN532 = MODULE_DICT( module_Adafruit_PN532$PN532 );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_Adafruit_PN532$PN532,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_Adafruit_PN532$PN532,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_Adafruit_PN532$PN532,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_Adafruit_PN532$PN532 );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_cee585ac7de1d5a81114be787b9ec1d3, module_Adafruit_PN532$PN532 );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    struct Nuitka_FrameObject *frame_aba3c3c2d4b66a1198ad6f335faeb4f5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_Adafruit_PN532$PN532_148 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_0ebafc6113eb05c0485c3b56b6065df4_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_0ebafc6113eb05c0485c3b56b6065df4_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_8be43714b9714062e607be68ea44c6bc;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_plain_binascii;
        tmp_globals_name_1 = (PyObject *)moduledict_Adafruit_PN532$PN532;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_assign_source_3 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        assert( !(tmp_assign_source_3 == NULL) );
        UPDATE_STRING_DICT1( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_binascii, tmp_assign_source_3 );
    }
    // Frame without reuse.
    frame_aba3c3c2d4b66a1198ad6f335faeb4f5 = MAKE_MODULE_FRAME( codeobj_aba3c3c2d4b66a1198ad6f335faeb4f5, module_Adafruit_PN532$PN532 );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_aba3c3c2d4b66a1198ad6f335faeb4f5 );
    assert( Py_REFCNT( frame_aba3c3c2d4b66a1198ad6f335faeb4f5 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        tmp_name_name_2 = const_str_plain_functools;
        tmp_globals_name_2 = (PyObject *)moduledict_Adafruit_PN532$PN532;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_reduce_tuple;
        frame_aba3c3c2d4b66a1198ad6f335faeb4f5->m_frame.f_lineno = 23;
        tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_reduce );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_reduce, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        tmp_name_name_3 = const_str_plain_logging;
        tmp_globals_name_3 = (PyObject *)moduledict_Adafruit_PN532$PN532;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        frame_aba3c3c2d4b66a1198ad6f335faeb4f5->m_frame.f_lineno = 24;
        tmp_assign_source_5 = IMPORT_MODULE4( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        tmp_name_name_4 = const_str_plain_time;
        tmp_globals_name_4 = (PyObject *)moduledict_Adafruit_PN532$PN532;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        frame_aba3c3c2d4b66a1198ad6f335faeb4f5->m_frame.f_lineno = 25;
        tmp_assign_source_6 = IMPORT_MODULE4( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4 );
        assert( !(tmp_assign_source_6 == NULL) );
        UPDATE_STRING_DICT1( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        tmp_name_name_5 = const_str_plain_Adafruit_GPIO;
        tmp_globals_name_5 = (PyObject *)moduledict_Adafruit_PN532$PN532;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = Py_None;
        frame_aba3c3c2d4b66a1198ad6f335faeb4f5->m_frame.f_lineno = 27;
        tmp_assign_source_7 = IMPORT_MODULE4( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_GPIO, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        tmp_name_name_6 = const_str_digest_c075fd296c361ae8bea3c0da47584df0;
        tmp_globals_name_6 = (PyObject *)moduledict_Adafruit_PN532$PN532;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = Py_None;
        frame_aba3c3c2d4b66a1198ad6f335faeb4f5->m_frame.f_lineno = 28;
        tmp_import_name_from_2 = IMPORT_MODULE4( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_SPI );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_SPI, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = const_int_0;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_PREAMBLE, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = const_int_0;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_STARTCODE1, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = const_int_pos_255;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_STARTCODE2, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = const_int_0;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_POSTAMBLE, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = const_int_pos_212;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_HOSTTOPN532, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = const_int_pos_213;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_PN532TOHOST, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = const_int_0;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_DIAGNOSE, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = const_int_pos_2;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_GETFIRMWAREVERSION, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = const_int_pos_4;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_GETGENERALSTATUS, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = const_int_pos_6;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_READREGISTER, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = const_int_pos_8;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_WRITEREGISTER, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = const_int_pos_12;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_READGPIO, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = const_int_pos_14;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_WRITEGPIO, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = const_int_pos_16;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_SETSERIALBAUDRATE, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = const_int_pos_18;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_SETPARAMETERS, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = const_int_pos_20;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_SAMCONFIGURATION, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = const_int_pos_22;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_POWERDOWN, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = const_int_pos_50;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_RFCONFIGURATION, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = const_int_pos_88;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_RFREGULATIONTEST, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = const_int_pos_86;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_INJUMPFORDEP, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = const_int_pos_70;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_INJUMPFORPSL, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = const_int_pos_74;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_INLISTPASSIVETARGET, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = const_int_pos_80;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_INATR, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = const_int_pos_78;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_INPSL, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = const_int_pos_64;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_INDATAEXCHANGE, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = const_int_pos_66;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_INCOMMUNICATETHRU, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = const_int_pos_68;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_INDESELECT, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = const_int_pos_82;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_INRELEASE, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = const_int_pos_84;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_INSELECT, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = const_int_pos_96;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_INAUTOPOLL, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = const_int_pos_140;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_TGINITASTARGET, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = const_int_pos_146;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_TGSETGENERALBYTES, tmp_assign_source_40 );
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = const_int_pos_134;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_TGGETDATA, tmp_assign_source_41 );
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = const_int_pos_142;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_TGSETDATA, tmp_assign_source_42 );
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = const_int_pos_148;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_TGSETMETADATA, tmp_assign_source_43 );
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = const_int_pos_136;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_TGGETINITIATORCOMMAND, tmp_assign_source_44 );
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = const_int_pos_144;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_TGRESPONSETOINITIATOR, tmp_assign_source_45 );
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = const_int_pos_138;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_COMMAND_TGGETTARGETSTATUS, tmp_assign_source_46 );
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = const_int_pos_65;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_RESPONSE_INDATAEXCHANGE, tmp_assign_source_47 );
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = const_int_pos_75;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_RESPONSE_INLISTPASSIVETARGET, tmp_assign_source_48 );
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = const_int_pos_85;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_WAKEUP, tmp_assign_source_49 );
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = const_int_pos_2;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_SPI_STATREAD, tmp_assign_source_50 );
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = const_int_pos_1;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_SPI_DATAWRITE, tmp_assign_source_51 );
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = const_int_pos_3;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_SPI_DATAREAD, tmp_assign_source_52 );
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = const_int_pos_1;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_SPI_READY, tmp_assign_source_53 );
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = const_int_0;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_MIFARE_ISO14443A, tmp_assign_source_54 );
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = const_int_pos_96;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_MIFARE_CMD_AUTH_A, tmp_assign_source_55 );
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = const_int_pos_97;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_MIFARE_CMD_AUTH_B, tmp_assign_source_56 );
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = const_int_pos_48;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_MIFARE_CMD_READ, tmp_assign_source_57 );
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = const_int_pos_160;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_MIFARE_CMD_WRITE, tmp_assign_source_58 );
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = const_int_pos_176;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_MIFARE_CMD_TRANSFER, tmp_assign_source_59 );
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = const_int_pos_192;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_MIFARE_CMD_DECREMENT, tmp_assign_source_60 );
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = const_int_pos_193;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_MIFARE_CMD_INCREMENT, tmp_assign_source_61 );
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = const_int_pos_194;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_MIFARE_CMD_STORE, tmp_assign_source_62 );
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = const_int_pos_162;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_MIFARE_ULTRALIGHT_CMD_WRITE, tmp_assign_source_63 );
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = const_int_0;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_NONE, tmp_assign_source_64 );
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = const_int_pos_1;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_HTTP_WWWDOT, tmp_assign_source_65 );
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = const_int_pos_2;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_HTTPS_WWWDOT, tmp_assign_source_66 );
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = const_int_pos_3;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_HTTP, tmp_assign_source_67 );
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = const_int_pos_4;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_HTTPS, tmp_assign_source_68 );
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = const_int_pos_5;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_TEL, tmp_assign_source_69 );
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = const_int_pos_6;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_MAILTO, tmp_assign_source_70 );
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = const_int_pos_7;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_FTP_ANONAT, tmp_assign_source_71 );
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = const_int_pos_8;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_FTP_FTPDOT, tmp_assign_source_72 );
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = const_int_pos_9;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_FTPS, tmp_assign_source_73 );
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = const_int_pos_10;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_SFTP, tmp_assign_source_74 );
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = const_int_pos_11;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_SMB, tmp_assign_source_75 );
    }
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = const_int_pos_12;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_NFS, tmp_assign_source_76 );
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = const_int_pos_13;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_FTP, tmp_assign_source_77 );
    }
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = const_int_pos_14;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_DAV, tmp_assign_source_78 );
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = const_int_pos_15;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_NEWS, tmp_assign_source_79 );
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = const_int_pos_16;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_TELNET, tmp_assign_source_80 );
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = const_int_pos_17;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_IMAP, tmp_assign_source_81 );
    }
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = const_int_pos_18;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_RTSP, tmp_assign_source_82 );
    }
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = const_int_pos_19;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_URN, tmp_assign_source_83 );
    }
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = const_int_pos_20;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_POP, tmp_assign_source_84 );
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = const_int_pos_21;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_SIP, tmp_assign_source_85 );
    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = const_int_pos_22;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_SIPS, tmp_assign_source_86 );
    }
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = const_int_pos_23;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_TFTP, tmp_assign_source_87 );
    }
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = const_int_pos_24;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_BTSPP, tmp_assign_source_88 );
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = const_int_pos_25;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_BTL2CAP, tmp_assign_source_89 );
    }
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = const_int_pos_26;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_BTGOEP, tmp_assign_source_90 );
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = const_int_pos_27;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_TCPOBEX, tmp_assign_source_91 );
    }
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = const_int_pos_28;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_IRDAOBEX, tmp_assign_source_92 );
    }
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = const_int_pos_29;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_FILE, tmp_assign_source_93 );
    }
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = const_int_pos_30;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_URN_EPC_ID, tmp_assign_source_94 );
    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = const_int_pos_31;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_URN_EPC_TAG, tmp_assign_source_95 );
    }
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = const_int_pos_32;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_URN_EPC_PAT, tmp_assign_source_96 );
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = const_int_pos_33;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_URN_EPC_RAW, tmp_assign_source_97 );
    }
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = const_int_pos_34;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_URN_EPC, tmp_assign_source_98 );
    }
    {
        PyObject *tmp_assign_source_99;
        tmp_assign_source_99 = const_int_pos_35;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_NDEF_URIPREFIX_URN_NFC, tmp_assign_source_99 );
    }
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = const_int_pos_128;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_GPIO_VALIDATIONBIT, tmp_assign_source_100 );
    }
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = const_int_0;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_GPIO_P30, tmp_assign_source_101 );
    }
    {
        PyObject *tmp_assign_source_102;
        tmp_assign_source_102 = const_int_pos_1;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_GPIO_P31, tmp_assign_source_102 );
    }
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = const_int_pos_2;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_GPIO_P32, tmp_assign_source_103 );
    }
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = const_int_pos_3;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_GPIO_P33, tmp_assign_source_104 );
    }
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = const_int_pos_4;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_GPIO_P34, tmp_assign_source_105 );
    }
    {
        PyObject *tmp_assign_source_106;
        tmp_assign_source_106 = const_int_pos_5;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_GPIO_P35, tmp_assign_source_106 );
    }
    {
        PyObject *tmp_assign_source_107;
        tmp_assign_source_107 = BYTEARRAY_COPY( const_bytearray_85990578427778a0c18c152b02f4a74c );
        UPDATE_STRING_DICT1( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_ACK, tmp_assign_source_107 );
    }
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = BYTEARRAY_COPY( const_bytearray_aa1d5432e8662f12b6e5dec92bfa7730 );
        UPDATE_STRING_DICT1( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_FRAME_START, tmp_assign_source_108 );
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_logging );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "logging" );
            exception_tb = NULL;

            exception_lineno = 145;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_aba3c3c2d4b66a1198ad6f335faeb4f5->m_frame.f_lineno = 145;
        tmp_assign_source_109 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM( const_tuple_str_digest_cee585ac7de1d5a81114be787b9ec1d3_tuple, 0 ) );

        if ( tmp_assign_source_109 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_logger, tmp_assign_source_109 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_110;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_Adafruit_PN532$PN532_148 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_cee585ac7de1d5a81114be787b9ec1d3;
        tmp_res = PyDict_SetItem( locals_Adafruit_PN532$PN532_148, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_8468930a61b764159cd3d21300522777;
        tmp_res = PyDict_SetItem( locals_Adafruit_PN532$PN532_148, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_none_none_none_none_none_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_1___init__( tmp_defaults_1 );



            tmp_res = PyDict_SetItem( locals_Adafruit_PN532$PN532_148, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        tmp_dictset_value = MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_2__uint8_add(  );



        tmp_res = PyDict_SetItem( locals_Adafruit_PN532$PN532_148, const_str_plain__uint8_add, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_3__busy_wait_ms(  );



        tmp_res = PyDict_SetItem( locals_Adafruit_PN532$PN532_148, const_str_plain__busy_wait_ms, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_4__write_frame(  );



        tmp_res = PyDict_SetItem( locals_Adafruit_PN532$PN532_148, const_str_plain__write_frame, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_5__read_data(  );



        tmp_res = PyDict_SetItem( locals_Adafruit_PN532$PN532_148, const_str_plain__read_data, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_6__read_frame(  );



        tmp_res = PyDict_SetItem( locals_Adafruit_PN532$PN532_148, const_str_plain__read_frame, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_int_pos_1_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_dictset_value = MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_7__wait_ready( tmp_defaults_2 );



            tmp_res = PyDict_SetItem( locals_Adafruit_PN532$PN532_148, const_str_plain__wait_ready, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        {
            PyObject *tmp_defaults_3;
            PyObject *tmp_tuple_element_1;
            tmp_tuple_element_1 = const_int_0;
            tmp_defaults_3 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_defaults_3, 0, tmp_tuple_element_1 );
            tmp_tuple_element_1 = PyList_New( 0 );
            PyTuple_SET_ITEM( tmp_defaults_3, 1, tmp_tuple_element_1 );
            tmp_tuple_element_1 = const_int_pos_1;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_defaults_3, 2, tmp_tuple_element_1 );
            tmp_dictset_value = MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_8_call_function( tmp_defaults_3 );



            tmp_res = PyDict_SetItem( locals_Adafruit_PN532$PN532_148, const_str_plain_call_function, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        tmp_dictset_value = MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_9_begin(  );



        tmp_res = PyDict_SetItem( locals_Adafruit_PN532$PN532_148, const_str_plain_begin, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_10_get_firmware_version(  );



        tmp_res = PyDict_SetItem( locals_Adafruit_PN532$PN532_148, const_str_plain_get_firmware_version, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_11_SAM_configuration(  );



        tmp_res = PyDict_SetItem( locals_Adafruit_PN532$PN532_148, const_str_plain_SAM_configuration, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_0ebafc6113eb05c0485c3b56b6065df4_2, codeobj_0ebafc6113eb05c0485c3b56b6065df4, module_Adafruit_PN532$PN532, 0 );
        frame_0ebafc6113eb05c0485c3b56b6065df4_2 = cache_frame_0ebafc6113eb05c0485c3b56b6065df4_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_0ebafc6113eb05c0485c3b56b6065df4_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_0ebafc6113eb05c0485c3b56b6065df4_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_4;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532_MIFARE_ISO14443A );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PN532_MIFARE_ISO14443A );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "PN532_MIFARE_ISO14443A" );
                exception_tb = NULL;

                exception_lineno = 366;

                goto frame_exception_exit_2;
            }

            tmp_tuple_element_2 = tmp_mvar_value_2;
            tmp_defaults_4 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_defaults_4, 0, tmp_tuple_element_2 );
            tmp_tuple_element_2 = const_int_pos_1;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_defaults_4, 1, tmp_tuple_element_2 );
            tmp_dictset_value = MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_12_read_passive_target( tmp_defaults_4 );



            tmp_res = PyDict_SetItem( locals_Adafruit_PN532$PN532_148, const_str_plain_read_passive_target, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 366;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_0ebafc6113eb05c0485c3b56b6065df4_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_0ebafc6113eb05c0485c3b56b6065df4_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_0ebafc6113eb05c0485c3b56b6065df4_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_0ebafc6113eb05c0485c3b56b6065df4_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_0ebafc6113eb05c0485c3b56b6065df4_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_0ebafc6113eb05c0485c3b56b6065df4_2,
            type_description_2
        );


        // Release cached frame.
        if ( frame_0ebafc6113eb05c0485c3b56b6065df4_2 == cache_frame_0ebafc6113eb05c0485c3b56b6065df4_2 )
        {
            Py_DECREF( frame_0ebafc6113eb05c0485c3b56b6065df4_2 );
        }
        cache_frame_0ebafc6113eb05c0485c3b56b6065df4_2 = NULL;

        assertFrameObject( frame_0ebafc6113eb05c0485c3b56b6065df4_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_2;
        skip_nested_handling_1:;
        tmp_dictset_value = MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_13_mifare_classic_authenticate_block(  );



        tmp_res = PyDict_SetItem( locals_Adafruit_PN532$PN532_148, const_str_plain_mifare_classic_authenticate_block, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_14_mifare_classic_read_block(  );



        tmp_res = PyDict_SetItem( locals_Adafruit_PN532$PN532_148, const_str_plain_mifare_classic_read_block, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_Adafruit_PN532$PN532$$$function_15_mifare_classic_write_block(  );



        tmp_res = PyDict_SetItem( locals_Adafruit_PN532$PN532_148, const_str_plain_mifare_classic_write_block, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_assign_source_110 = locals_Adafruit_PN532$PN532_148;
        Py_INCREF( tmp_assign_source_110 );
        goto try_return_handler_2;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532 );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_2:;
        Py_DECREF( locals_Adafruit_PN532$PN532_148 );
        locals_Adafruit_PN532$PN532_148 = NULL;
        goto outline_result_1;
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

        Py_DECREF( locals_Adafruit_PN532$PN532_148 );
        locals_Adafruit_PN532$PN532_148 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( Adafruit_PN532$PN532 );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 148;
        goto try_except_handler_1;
        outline_result_1:;
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_110;
    }
    {
        PyObject *tmp_assign_source_111;
        nuitka_bool tmp_condition_result_1;
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


            exception_lineno = 148;

            goto try_except_handler_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
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
        tmp_assign_source_111 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_assign_source_111 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_111 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_111 );
        condexpr_end_1:;
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_111;
    }
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = const_str_plain_PN532;
        tmp_args_element_name_2 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_aba3c3c2d4b66a1198ad6f335faeb4f5->m_frame.f_lineno = 148;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_112 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_112 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_112;
    }
    goto try_end_1;
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

    Py_XDECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_aba3c3c2d4b66a1198ad6f335faeb4f5 );
#endif
    popFrameStack();

    assertFrameObject( frame_aba3c3c2d4b66a1198ad6f335faeb4f5 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_aba3c3c2d4b66a1198ad6f335faeb4f5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_aba3c3c2d4b66a1198ad6f335faeb4f5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_aba3c3c2d4b66a1198ad6f335faeb4f5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_aba3c3c2d4b66a1198ad6f335faeb4f5, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_113;
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_assign_source_113 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain_PN532, tmp_assign_source_113 );
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


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_Adafruit_PN532$PN532, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_Adafruit_PN532$PN532 );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
