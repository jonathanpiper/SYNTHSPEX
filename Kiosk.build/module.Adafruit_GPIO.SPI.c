/* Generated code for Python module 'Adafruit_GPIO.SPI'
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

/* The "_module_Adafruit_GPIO$SPI" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Adafruit_GPIO$SPI;
PyDictObject *moduledict_Adafruit_GPIO$SPI;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_spidev;
extern PyObject *const_str_plain_set_clock_hz;
extern PyObject *const_tuple_type_object_tuple;
static PyObject *const_str_digest_09f0b026d025e5d65b5f6d945dc266ac;
extern PyObject *const_str_plain_data;
static PyObject *const_str_plain_MSBFIRST;
static PyObject *const_str_plain__clock_base;
extern PyObject *const_tuple_str_plain_self_str_plain_data_tuple;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_output;
extern PyObject *const_tuple_str_plain_self_str_plain_order_tuple;
static PyObject *const_tuple_4de1891ea285582c97e9b4364759524f_tuple;
static PyObject *const_str_plain__read_shift;
extern PyObject *const_str_plain_None;
static PyObject *const_tuple_ecd9ad689320cf7fee46020753846f63_tuple;
extern PyObject *const_str_plain_read;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_length;
extern PyObject *const_str_plain_set_mode;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain__write_shift;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_HIGH;
extern PyObject *const_str_plain_frequency;
static PyObject *const_str_plain__ss;
static PyObject *const_str_digest_cd7591f9e1d4d3df0b37e1fc4ea6988e;
static PyObject *const_str_digest_d3924328486127820748b70cbc0e1ac9;
extern PyObject *const_int_pos_128;
static PyObject *const_str_digest_daa01129ce3f270fa5c3269703b17f83;
static PyObject *const_str_digest_354590337e48e9ad0366ded974cba254;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_rshift;
static PyObject *const_tuple_str_plain_self_str_plain_mode_tuple;
static PyObject *const_str_digest_8a2db60d8d74ac04422f111b1132a5f7;
extern PyObject *const_str_plain_set_low;
extern PyObject *const_str_plain_IN;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_digest_28246e871af22a5e310eef713d64fb99;
extern PyObject *const_str_plain_set_bit_order;
static PyObject *const_tuple_int_pos_500000_tuple;
static PyObject *const_str_plain_lsbfirst;
extern PyObject *const_tuple_int_0_tuple;
static PyObject *const_str_plain_readbytes;
extern PyObject *const_str_plain_time;
extern PyObject *const_tuple_true_true_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_4d46aac39a3e6b3c6f45e115614c5b1c_tuple;
extern PyObject *const_int_pos_6;
extern PyObject *const_int_pos_7;
extern PyObject *const_int_pos_4;
static PyObject *const_str_digest_b465f4aeda2dc4be8d9fefe6de3c7da1;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_496401c47bd0f1a510376ff8cd34e51c;
extern PyObject *const_str_digest_c075fd296c361ae8bea3c0da47584df0;
extern PyObject *const_tuple_true_tuple;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_digest_30f2a7f6b62704b5a1f8f9e5fde9063e;
extern PyObject *const_int_pos_5;
static PyObject *const_str_digest_e21db5ba4c676b5eac206dc221b45e2b;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_mode;
static PyObject *const_str_plain__mosi;
static PyObject *const_str_plain_assert_ss;
static PyObject *const_str_plain_deassert_ss;
static PyObject *const_tuple_str_plain_self_str_plain_hz_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_length_tuple;
extern PyObject *const_str_plain_mraa;
extern PyObject *const_str_plain_LOW;
static PyObject *const_str_digest_74b03445703f50389cc717225a1b609e;
static PyObject *const_str_digest_8073f3b6bf43bc9a5b69830526ca44d1;
extern PyObject *const_str_plain_write;
static PyObject *const_str_plain_lsbmode;
extern PyObject *const_str_plain_lshift;
static PyObject *const_str_digest_d98e4db757898737d6dea9f9be72e5d1;
extern PyObject *const_str_plain_device;
extern PyObject *const_str_plain_order;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain_byte;
static PyObject *const_str_digest_b35547265edd2bbe6a8f3413be950a29;
static PyObject *const_tuple_74cd8b3e9a15d638f032c79ff4818f63_tuple;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_j;
extern PyObject *const_str_plain_OUT;
static PyObject *const_str_digest_3477f2e660bc9d80d8d1e288fe7362b1;
extern PyObject *const_str_plain_LSBFIRST;
static PyObject *const_str_plain__sclk;
extern PyObject *const_str_plain_open;
static PyObject *const_str_plain_SpiDev;
extern PyObject *const_str_plain_is_high;
extern PyObject *const_str_plain__mask;
extern PyObject *const_str_plain__gpio;
static PyObject *const_str_digest_757b85d02089f057dbca9f804a8b5782;
static PyObject *const_tuple_f8f11028bf2a911333c995532bd20bf5_tuple;
static PyObject *const_str_plain__miso;
extern PyObject *const_str_plain_Adafruit_GPIO;
static PyObject *const_tuple_852138b7e43376e4d3b98dd6e94d8c8a_tuple;
extern PyObject *const_str_plain_transfer;
extern PyObject *const_str_plain_False;
static PyObject *const_str_digest_b18ed25f476c376890a0b252b5bd76ac;
extern PyObject *const_str_plain_ss;
static PyObject *const_str_plain_max_speed_hz;
static PyObject *const_str_plain__device;
static PyObject *const_int_pos_500000;
extern PyObject *const_str_plain_miso;
static PyObject *const_str_plain_Spi;
static PyObject *const_str_plain_writebytes;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_BitBang;
extern PyObject *const_str_plain_sclk;
extern PyObject *const_int_0;
static PyObject *const_str_plain_port;
extern PyObject *const_str_plain_setup;
static PyObject *const_str_digest_7de3257bb69c5674d11ee510791cc0b2;
static PyObject *const_tuple_736f5ea4e07c8093bdd7be5d6e04652c_tuple;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_str_plain_mosi;
extern PyObject *const_str_plain_set_high;
static PyObject *const_str_digest_cc945a62148b127f2cb2538bbd86b99c;
static PyObject *const_str_digest_eb5423e764f7e23aa5e265c7612181ad;
extern PyObject *const_str_plain_GPIO;
extern PyObject *const_str_plain_gpio;
static PyObject *const_str_digest_2673f409f95a8b047a2a657da8472f4b;
static PyObject *const_str_digest_f62ea64577d0f8084314313c332cfbba;
static PyObject *const_str_plain__read_leading;
extern PyObject *const_tuple_false_tuple;
static PyObject *const_str_plain_hz;
static PyObject *const_str_plain_xfer2;
static PyObject *const_str_plain_SpiDevMraa;
extern PyObject *const_str_plain_operator;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_spidev = UNSTREAM_STRING( &constant_bin[ 5426 ], 6, 1 );
    const_str_digest_09f0b026d025e5d65b5f6d945dc266ac = UNSTREAM_STRING( &constant_bin[ 5432 ], 65, 0 );
    const_str_plain_MSBFIRST = UNSTREAM_STRING( &constant_bin[ 5497 ], 8, 1 );
    const_str_plain__clock_base = UNSTREAM_STRING( &constant_bin[ 5505 ], 11, 1 );
    const_tuple_4de1891ea285582c97e9b4364759524f_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_4de1891ea285582c97e9b4364759524f_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_4de1891ea285582c97e9b4364759524f_tuple, 1, const_str_plain_length ); Py_INCREF( const_str_plain_length );
    const_str_plain_assert_ss = UNSTREAM_STRING( &constant_bin[ 5516 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_4de1891ea285582c97e9b4364759524f_tuple, 2, const_str_plain_assert_ss ); Py_INCREF( const_str_plain_assert_ss );
    const_str_plain_deassert_ss = UNSTREAM_STRING( &constant_bin[ 5525 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_4de1891ea285582c97e9b4364759524f_tuple, 3, const_str_plain_deassert_ss ); Py_INCREF( const_str_plain_deassert_ss );
    PyTuple_SET_ITEM( const_tuple_4de1891ea285582c97e9b4364759524f_tuple, 4, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_4de1891ea285582c97e9b4364759524f_tuple, 5, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    PyTuple_SET_ITEM( const_tuple_4de1891ea285582c97e9b4364759524f_tuple, 6, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_str_plain__read_shift = UNSTREAM_STRING( &constant_bin[ 5536 ], 11, 1 );
    const_tuple_ecd9ad689320cf7fee46020753846f63_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_ecd9ad689320cf7fee46020753846f63_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_ecd9ad689320cf7fee46020753846f63_tuple, 1, const_str_plain_gpio ); Py_INCREF( const_str_plain_gpio );
    PyTuple_SET_ITEM( const_tuple_ecd9ad689320cf7fee46020753846f63_tuple, 2, const_str_plain_sclk ); Py_INCREF( const_str_plain_sclk );
    PyTuple_SET_ITEM( const_tuple_ecd9ad689320cf7fee46020753846f63_tuple, 3, const_str_plain_mosi ); Py_INCREF( const_str_plain_mosi );
    PyTuple_SET_ITEM( const_tuple_ecd9ad689320cf7fee46020753846f63_tuple, 4, const_str_plain_miso ); Py_INCREF( const_str_plain_miso );
    PyTuple_SET_ITEM( const_tuple_ecd9ad689320cf7fee46020753846f63_tuple, 5, const_str_plain_ss ); Py_INCREF( const_str_plain_ss );
    const_str_plain__write_shift = UNSTREAM_STRING( &constant_bin[ 5547 ], 12, 1 );
    const_str_plain__ss = UNSTREAM_STRING( &constant_bin[ 5522 ], 3, 1 );
    const_str_digest_cd7591f9e1d4d3df0b37e1fc4ea6988e = UNSTREAM_STRING( &constant_bin[ 5559 ], 65, 0 );
    const_str_digest_d3924328486127820748b70cbc0e1ac9 = UNSTREAM_STRING( &constant_bin[ 5624 ], 138, 0 );
    const_str_digest_daa01129ce3f270fa5c3269703b17f83 = UNSTREAM_STRING( &constant_bin[ 5762 ], 148, 0 );
    const_str_digest_354590337e48e9ad0366ded974cba254 = UNSTREAM_STRING( &constant_bin[ 5910 ], 40, 0 );
    const_tuple_str_plain_self_str_plain_mode_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_mode_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_mode_tuple, 1, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    const_str_digest_8a2db60d8d74ac04422f111b1132a5f7 = UNSTREAM_STRING( &constant_bin[ 5950 ], 35, 0 );
    const_str_digest_28246e871af22a5e310eef713d64fb99 = UNSTREAM_STRING( &constant_bin[ 5985 ], 26, 0 );
    const_tuple_int_pos_500000_tuple = PyTuple_New( 1 );
    const_int_pos_500000 = PyInt_FromLong( 500000l );
    PyTuple_SET_ITEM( const_tuple_int_pos_500000_tuple, 0, const_int_pos_500000 ); Py_INCREF( const_int_pos_500000 );
    const_str_plain_lsbfirst = UNSTREAM_STRING( &constant_bin[ 6011 ], 8, 1 );
    const_str_plain_readbytes = UNSTREAM_STRING( &constant_bin[ 6019 ], 9, 1 );
    const_tuple_4d46aac39a3e6b3c6f45e115614c5b1c_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_4d46aac39a3e6b3c6f45e115614c5b1c_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_4d46aac39a3e6b3c6f45e115614c5b1c_tuple, 1, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_4d46aac39a3e6b3c6f45e115614c5b1c_tuple, 2, const_str_plain_assert_ss ); Py_INCREF( const_str_plain_assert_ss );
    PyTuple_SET_ITEM( const_tuple_4d46aac39a3e6b3c6f45e115614c5b1c_tuple, 3, const_str_plain_deassert_ss ); Py_INCREF( const_str_plain_deassert_ss );
    PyTuple_SET_ITEM( const_tuple_4d46aac39a3e6b3c6f45e115614c5b1c_tuple, 4, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_4d46aac39a3e6b3c6f45e115614c5b1c_tuple, 5, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    PyTuple_SET_ITEM( const_tuple_4d46aac39a3e6b3c6f45e115614c5b1c_tuple, 6, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_str_digest_b465f4aeda2dc4be8d9fefe6de3c7da1 = UNSTREAM_STRING( &constant_bin[ 6028 ], 104, 0 );
    const_str_digest_496401c47bd0f1a510376ff8cd34e51c = UNSTREAM_STRING( &constant_bin[ 6132 ], 64, 0 );
    const_str_digest_30f2a7f6b62704b5a1f8f9e5fde9063e = UNSTREAM_STRING( &constant_bin[ 6196 ], 298, 0 );
    const_str_digest_e21db5ba4c676b5eac206dc221b45e2b = UNSTREAM_STRING( &constant_bin[ 6494 ], 225, 0 );
    const_str_plain__mosi = UNSTREAM_STRING( &constant_bin[ 6719 ], 5, 1 );
    const_tuple_str_plain_self_str_plain_hz_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_hz_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_hz = UNSTREAM_STRING( &constant_bin[ 6724 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_hz_tuple, 1, const_str_plain_hz ); Py_INCREF( const_str_plain_hz );
    const_tuple_str_plain_self_str_plain_length_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_length_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_length_tuple, 1, const_str_plain_length ); Py_INCREF( const_str_plain_length );
    const_str_digest_74b03445703f50389cc717225a1b609e = UNSTREAM_STRING( &constant_bin[ 6726 ], 418, 0 );
    const_str_digest_8073f3b6bf43bc9a5b69830526ca44d1 = UNSTREAM_STRING( &constant_bin[ 7144 ], 59, 0 );
    const_str_plain_lsbmode = UNSTREAM_STRING( &constant_bin[ 7203 ], 7, 1 );
    const_str_digest_d98e4db757898737d6dea9f9be72e5d1 = UNSTREAM_STRING( &constant_bin[ 7210 ], 35, 0 );
    const_str_digest_b35547265edd2bbe6a8f3413be950a29 = UNSTREAM_STRING( &constant_bin[ 7245 ], 216, 0 );
    const_tuple_74cd8b3e9a15d638f032c79ff4818f63_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_74cd8b3e9a15d638f032c79ff4818f63_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_74cd8b3e9a15d638f032c79ff4818f63_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_74cd8b3e9a15d638f032c79ff4818f63_tuple, 2, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    PyTuple_SET_ITEM( const_tuple_74cd8b3e9a15d638f032c79ff4818f63_tuple, 3, const_int_pos_3 ); Py_INCREF( const_int_pos_3 );
    PyTuple_SET_ITEM( const_tuple_74cd8b3e9a15d638f032c79ff4818f63_tuple, 4, const_int_pos_4 ); Py_INCREF( const_int_pos_4 );
    PyTuple_SET_ITEM( const_tuple_74cd8b3e9a15d638f032c79ff4818f63_tuple, 5, const_int_pos_5 ); Py_INCREF( const_int_pos_5 );
    PyTuple_SET_ITEM( const_tuple_74cd8b3e9a15d638f032c79ff4818f63_tuple, 6, const_int_pos_6 ); Py_INCREF( const_int_pos_6 );
    PyTuple_SET_ITEM( const_tuple_74cd8b3e9a15d638f032c79ff4818f63_tuple, 7, const_int_pos_7 ); Py_INCREF( const_int_pos_7 );
    const_str_digest_3477f2e660bc9d80d8d1e288fe7362b1 = UNSTREAM_STRING( &constant_bin[ 7461 ], 43, 0 );
    const_str_plain__sclk = UNSTREAM_STRING( &constant_bin[ 7504 ], 5, 1 );
    const_str_plain_SpiDev = UNSTREAM_STRING( &constant_bin[ 7509 ], 6, 1 );
    const_str_digest_757b85d02089f057dbca9f804a8b5782 = UNSTREAM_STRING( &constant_bin[ 7515 ], 233, 0 );
    const_tuple_f8f11028bf2a911333c995532bd20bf5_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_f8f11028bf2a911333c995532bd20bf5_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_port = UNSTREAM_STRING( &constant_bin[ 1536 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_f8f11028bf2a911333c995532bd20bf5_tuple, 1, const_str_plain_port ); Py_INCREF( const_str_plain_port );
    PyTuple_SET_ITEM( const_tuple_f8f11028bf2a911333c995532bd20bf5_tuple, 2, const_str_plain_device ); Py_INCREF( const_str_plain_device );
    const_str_plain_max_speed_hz = UNSTREAM_STRING( &constant_bin[ 7748 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_f8f11028bf2a911333c995532bd20bf5_tuple, 3, const_str_plain_max_speed_hz ); Py_INCREF( const_str_plain_max_speed_hz );
    PyTuple_SET_ITEM( const_tuple_f8f11028bf2a911333c995532bd20bf5_tuple, 4, const_str_plain_mraa ); Py_INCREF( const_str_plain_mraa );
    const_str_plain__miso = UNSTREAM_STRING( &constant_bin[ 7760 ], 5, 1 );
    const_tuple_852138b7e43376e4d3b98dd6e94d8c8a_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_852138b7e43376e4d3b98dd6e94d8c8a_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_852138b7e43376e4d3b98dd6e94d8c8a_tuple, 1, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_852138b7e43376e4d3b98dd6e94d8c8a_tuple, 2, const_str_plain_assert_ss ); Py_INCREF( const_str_plain_assert_ss );
    PyTuple_SET_ITEM( const_tuple_852138b7e43376e4d3b98dd6e94d8c8a_tuple, 3, const_str_plain_deassert_ss ); Py_INCREF( const_str_plain_deassert_ss );
    PyTuple_SET_ITEM( const_tuple_852138b7e43376e4d3b98dd6e94d8c8a_tuple, 4, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_852138b7e43376e4d3b98dd6e94d8c8a_tuple, 5, const_str_plain_byte ); Py_INCREF( const_str_plain_byte );
    const_str_digest_b18ed25f476c376890a0b252b5bd76ac = UNSTREAM_STRING( &constant_bin[ 7765 ], 175, 0 );
    const_str_plain__device = UNSTREAM_STRING( &constant_bin[ 7940 ], 7, 1 );
    const_str_plain_Spi = UNSTREAM_STRING( &constant_bin[ 7509 ], 3, 1 );
    const_str_plain_writebytes = UNSTREAM_STRING( &constant_bin[ 7947 ], 10, 1 );
    const_str_digest_7de3257bb69c5674d11ee510791cc0b2 = UNSTREAM_STRING( &constant_bin[ 7957 ], 357, 0 );
    const_tuple_736f5ea4e07c8093bdd7be5d6e04652c_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_736f5ea4e07c8093bdd7be5d6e04652c_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_736f5ea4e07c8093bdd7be5d6e04652c_tuple, 1, const_str_plain_port ); Py_INCREF( const_str_plain_port );
    PyTuple_SET_ITEM( const_tuple_736f5ea4e07c8093bdd7be5d6e04652c_tuple, 2, const_str_plain_device ); Py_INCREF( const_str_plain_device );
    PyTuple_SET_ITEM( const_tuple_736f5ea4e07c8093bdd7be5d6e04652c_tuple, 3, const_str_plain_max_speed_hz ); Py_INCREF( const_str_plain_max_speed_hz );
    PyTuple_SET_ITEM( const_tuple_736f5ea4e07c8093bdd7be5d6e04652c_tuple, 4, const_str_plain_spidev ); Py_INCREF( const_str_plain_spidev );
    const_str_digest_cc945a62148b127f2cb2538bbd86b99c = UNSTREAM_STRING( &constant_bin[ 8314 ], 183, 0 );
    const_str_digest_eb5423e764f7e23aa5e265c7612181ad = UNSTREAM_STRING( &constant_bin[ 8497 ], 61, 0 );
    const_str_digest_2673f409f95a8b047a2a657da8472f4b = UNSTREAM_STRING( &constant_bin[ 8558 ], 118, 0 );
    const_str_digest_f62ea64577d0f8084314313c332cfbba = UNSTREAM_STRING( &constant_bin[ 8676 ], 42, 0 );
    const_str_plain__read_leading = UNSTREAM_STRING( &constant_bin[ 8718 ], 13, 1 );
    const_str_plain_xfer2 = UNSTREAM_STRING( &constant_bin[ 8731 ], 5, 1 );
    const_str_plain_SpiDevMraa = UNSTREAM_STRING( &constant_bin[ 8736 ], 10, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Adafruit_GPIO$SPI( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_b9f7a0b564a408fcab1dffe1494895db;
static PyCodeObject *codeobj_3719687e0e7e6f94a346da9a33ffea88;
static PyCodeObject *codeobj_24ad3ee21d32521d03e0cda6bb069a94;
static PyCodeObject *codeobj_8f204841be164e2b5a99c640056db8ee;
static PyCodeObject *codeobj_0ff1d64f5fcba1a2810615977fa31b41;
static PyCodeObject *codeobj_58e28656329ef40761fd5c586a75f57a;
static PyCodeObject *codeobj_d0e7169d20d9bbc637cc916fd9f971df;
static PyCodeObject *codeobj_adf56645e482874719093651e271960d;
static PyCodeObject *codeobj_2da45923e4fa3b46b5d903508579a732;
static PyCodeObject *codeobj_ba3f94abb9063be28ccd9f39b8c5fd08;
static PyCodeObject *codeobj_b8883ddcb559ba85741dd1893a6e5b35;
static PyCodeObject *codeobj_f2126dea8feb0d3bb61bcf264890a3d4;
static PyCodeObject *codeobj_c8d16e402653f33f79f90b1a6fa32dc1;
static PyCodeObject *codeobj_3f953e47577fd7ccae260ccf05c63113;
static PyCodeObject *codeobj_b05d72b380d4bfe8bb14b7c96132d145;
static PyCodeObject *codeobj_e010a1132d5252a8fb8672e57e12f6e5;
static PyCodeObject *codeobj_928d44cff1c6ddfafec44af776555a99;
static PyCodeObject *codeobj_89e63737097a7f9aceedc3ec618bac22;
static PyCodeObject *codeobj_2cfa498fc82ce2c6f1faf8159743e4ca;
static PyCodeObject *codeobj_af88baaecad6c5474a45a493a2e76467;
static PyCodeObject *codeobj_240c850aec85b9bc63824f9178caf471;
static PyCodeObject *codeobj_a699ebcae7226a1efe368d9ddcbc321c;
static PyCodeObject *codeobj_3574e35c2f65a209e96b1e15c334eb1d;
static PyCodeObject *codeobj_a73a11336a0a2e15030208c54f4a420b;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_8073f3b6bf43bc9a5b69830526ca44d1;
    codeobj_b9f7a0b564a408fcab1dffe1494895db = MAKE_CODEOBJ( module_filename_obj, const_str_digest_28246e871af22a5e310eef713d64fb99, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_3719687e0e7e6f94a346da9a33ffea88 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 35, const_tuple_736f5ea4e07c8093bdd7be5d6e04652c_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_24ad3ee21d32521d03e0cda6bb069a94 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 99, const_tuple_f8f11028bf2a911333c995532bd20bf5_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8f204841be164e2b5a99c640056db8ee = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 153, const_tuple_ecd9ad689320cf7fee46020753846f63_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0ff1d64f5fcba1a2810615977fa31b41 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close, 74, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_58e28656329ef40761fd5c586a75f57a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close, 140, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d0e7169d20d9bbc637cc916fd9f971df = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close, 228, const_tuple_str_plain_self_tuple, 1, CO_NOFREE );
    codeobj_adf56645e482874719093651e271960d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read, 84, const_tuple_str_plain_self_str_plain_length_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2da45923e4fa3b46b5d903508579a732 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read, 256, const_tuple_4de1891ea285582c97e9b4364759524f_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ba3f94abb9063be28ccd9f39b8c5fd08 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_bit_order, 62, const_tuple_str_plain_self_str_plain_order_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b8883ddcb559ba85741dd1893a6e5b35 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_bit_order, 128, const_tuple_str_plain_self_str_plain_order_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f2126dea8feb0d3bb61bcf264890a3d4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_bit_order, 209, const_tuple_str_plain_self_str_plain_order_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c8d16e402653f33f79f90b1a6fa32dc1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_clock_hz, 47, const_tuple_str_plain_self_str_plain_hz_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3f953e47577fd7ccae260ccf05c63113 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_clock_hz, 104, const_tuple_str_plain_self_str_plain_hz_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b05d72b380d4bfe8bb14b7c96132d145 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_clock_hz, 181, const_tuple_str_plain_self_str_plain_hz_tuple, 2, CO_NOFREE );
    codeobj_e010a1132d5252a8fb8672e57e12f6e5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_mode, 53, const_tuple_str_plain_self_str_plain_mode_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_928d44cff1c6ddfafec44af776555a99 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_mode, 110, const_tuple_str_plain_self_str_plain_mode_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_89e63737097a7f9aceedc3ec618bac22 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_mode, 119, const_tuple_str_plain_self_str_plain_mode_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2cfa498fc82ce2c6f1faf8159743e4ca = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_mode, 187, const_tuple_str_plain_self_str_plain_mode_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_af88baaecad6c5474a45a493a2e76467 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_transfer, 90, const_tuple_str_plain_self_str_plain_data_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_240c850aec85b9bc63824f9178caf471 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_transfer, 293, const_tuple_4d46aac39a3e6b3c6f45e115614c5b1c_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a699ebcae7226a1efe368d9ddcbc321c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_write, 78, const_tuple_str_plain_self_str_plain_data_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3574e35c2f65a209e96b1e15c334eb1d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_write, 144, const_tuple_str_plain_self_str_plain_data_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a73a11336a0a2e15030208c54f4a420b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_write, 232, const_tuple_852138b7e43376e4d3b98dd6e94d8c8a_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_10_set_clock_hz(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_11_set_mode(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_12_set_mode(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_13_set_bit_order(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_14_close(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_15_write(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_16___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_17_set_clock_hz(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_18_set_mode(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_19_set_bit_order(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_20_close(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_21_write( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_22_read( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_23_transfer( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_2_set_clock_hz(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_3_set_mode(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_4_set_bit_order(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_5_close(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_6_write(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_7_read(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_8_transfer(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_9___init__( PyObject *defaults );


// The module function definitions.
static PyObject *impl_Adafruit_GPIO$SPI$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_port = python_pars[ 1 ];
    PyObject *par_device = python_pars[ 2 ];
    PyObject *par_max_speed_hz = python_pars[ 3 ];
    PyObject *var_spidev = NULL;
    struct Nuitka_FrameObject *frame_3719687e0e7e6f94a346da9a33ffea88;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_3719687e0e7e6f94a346da9a33ffea88 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3719687e0e7e6f94a346da9a33ffea88, codeobj_3719687e0e7e6f94a346da9a33ffea88, module_Adafruit_GPIO$SPI, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3719687e0e7e6f94a346da9a33ffea88 = cache_frame_3719687e0e7e6f94a346da9a33ffea88;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3719687e0e7e6f94a346da9a33ffea88 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3719687e0e7e6f94a346da9a33ffea88 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_plain_spidev;
        tmp_globals_name_1 = (PyObject *)moduledict_Adafruit_GPIO$SPI;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        frame_3719687e0e7e6f94a346da9a33ffea88->m_frame.f_lineno = 40;
        tmp_assign_source_1 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_spidev == NULL );
        var_spidev = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( var_spidev );
        tmp_called_instance_1 = var_spidev;
        frame_3719687e0e7e6f94a346da9a33ffea88->m_frame.f_lineno = 41;
        tmp_assattr_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_SpiDev );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__device, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__device );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_port );
        tmp_args_element_name_1 = par_port;
        CHECK_OBJECT( par_device );
        tmp_args_element_name_2 = par_device;
        frame_3719687e0e7e6f94a346da9a33ffea88->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_open, call_args );
        }

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_max_speed_hz );
        tmp_assattr_name_2 = par_max_speed_hz;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_assattr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__device );
        if ( tmp_assattr_target_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_max_speed_hz, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_target_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_source_name_3;
        tmp_assattr_name_3 = const_int_0;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__device );
        if ( tmp_assattr_target_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_mode, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_target_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3719687e0e7e6f94a346da9a33ffea88 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3719687e0e7e6f94a346da9a33ffea88 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3719687e0e7e6f94a346da9a33ffea88, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3719687e0e7e6f94a346da9a33ffea88->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3719687e0e7e6f94a346da9a33ffea88, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3719687e0e7e6f94a346da9a33ffea88,
        type_description_1,
        par_self,
        par_port,
        par_device,
        par_max_speed_hz,
        var_spidev
    );


    // Release cached frame.
    if ( frame_3719687e0e7e6f94a346da9a33ffea88 == cache_frame_3719687e0e7e6f94a346da9a33ffea88 )
    {
        Py_DECREF( frame_3719687e0e7e6f94a346da9a33ffea88 );
    }
    cache_frame_3719687e0e7e6f94a346da9a33ffea88 = NULL;

    assertFrameObject( frame_3719687e0e7e6f94a346da9a33ffea88 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_device );
    Py_DECREF( par_device );
    par_device = NULL;

    CHECK_OBJECT( (PyObject *)var_spidev );
    Py_DECREF( var_spidev );
    var_spidev = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_port );
    Py_DECREF( par_port );
    par_port = NULL;

    CHECK_OBJECT( (PyObject *)par_max_speed_hz );
    Py_DECREF( par_max_speed_hz );
    par_max_speed_hz = NULL;

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

    CHECK_OBJECT( (PyObject *)par_device );
    Py_DECREF( par_device );
    par_device = NULL;

    Py_XDECREF( var_spidev );
    var_spidev = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_port );
    Py_DECREF( par_port );
    par_port = NULL;

    CHECK_OBJECT( (PyObject *)par_max_speed_hz );
    Py_DECREF( par_max_speed_hz );
    par_max_speed_hz = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_1___init__ );
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


static PyObject *impl_Adafruit_GPIO$SPI$$$function_2_set_clock_hz( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_hz = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_c8d16e402653f33f79f90b1a6fa32dc1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_c8d16e402653f33f79f90b1a6fa32dc1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c8d16e402653f33f79f90b1a6fa32dc1, codeobj_c8d16e402653f33f79f90b1a6fa32dc1, module_Adafruit_GPIO$SPI, sizeof(void *)+sizeof(void *) );
    frame_c8d16e402653f33f79f90b1a6fa32dc1 = cache_frame_c8d16e402653f33f79f90b1a6fa32dc1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c8d16e402653f33f79f90b1a6fa32dc1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c8d16e402653f33f79f90b1a6fa32dc1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_hz );
        tmp_assattr_name_1 = par_hz;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__device );
        if ( tmp_assattr_target_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_max_speed_hz, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_target_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c8d16e402653f33f79f90b1a6fa32dc1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c8d16e402653f33f79f90b1a6fa32dc1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c8d16e402653f33f79f90b1a6fa32dc1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c8d16e402653f33f79f90b1a6fa32dc1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c8d16e402653f33f79f90b1a6fa32dc1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c8d16e402653f33f79f90b1a6fa32dc1,
        type_description_1,
        par_self,
        par_hz
    );


    // Release cached frame.
    if ( frame_c8d16e402653f33f79f90b1a6fa32dc1 == cache_frame_c8d16e402653f33f79f90b1a6fa32dc1 )
    {
        Py_DECREF( frame_c8d16e402653f33f79f90b1a6fa32dc1 );
    }
    cache_frame_c8d16e402653f33f79f90b1a6fa32dc1 = NULL;

    assertFrameObject( frame_c8d16e402653f33f79f90b1a6fa32dc1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_2_set_clock_hz );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_hz );
    Py_DECREF( par_hz );
    par_hz = NULL;

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

    CHECK_OBJECT( (PyObject *)par_hz );
    Py_DECREF( par_hz );
    par_hz = NULL;

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
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_2_set_clock_hz );
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


static PyObject *impl_Adafruit_GPIO$SPI$$$function_3_set_mode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_mode = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_e010a1132d5252a8fb8672e57e12f6e5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e010a1132d5252a8fb8672e57e12f6e5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e010a1132d5252a8fb8672e57e12f6e5, codeobj_e010a1132d5252a8fb8672e57e12f6e5, module_Adafruit_GPIO$SPI, sizeof(void *)+sizeof(void *) );
    frame_e010a1132d5252a8fb8672e57e12f6e5 = cache_frame_e010a1132d5252a8fb8672e57e12f6e5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e010a1132d5252a8fb8672e57e12f6e5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e010a1132d5252a8fb8672e57e12f6e5 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_mode );
        tmp_compexpr_left_1 = par_mode;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT( par_mode );
        tmp_compexpr_left_2 = par_mode;
        tmp_compexpr_right_2 = const_int_pos_3;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
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
            tmp_make_exception_arg_1 = const_str_digest_d98e4db757898737d6dea9f9be72e5d1;
            frame_e010a1132d5252a8fb8672e57e12f6e5->m_frame.f_lineno = 59;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 59;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_mode );
        tmp_assattr_name_1 = par_mode;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__device );
        if ( tmp_assattr_target_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_mode, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_target_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e010a1132d5252a8fb8672e57e12f6e5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e010a1132d5252a8fb8672e57e12f6e5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e010a1132d5252a8fb8672e57e12f6e5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e010a1132d5252a8fb8672e57e12f6e5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e010a1132d5252a8fb8672e57e12f6e5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e010a1132d5252a8fb8672e57e12f6e5,
        type_description_1,
        par_self,
        par_mode
    );


    // Release cached frame.
    if ( frame_e010a1132d5252a8fb8672e57e12f6e5 == cache_frame_e010a1132d5252a8fb8672e57e12f6e5 )
    {
        Py_DECREF( frame_e010a1132d5252a8fb8672e57e12f6e5 );
    }
    cache_frame_e010a1132d5252a8fb8672e57e12f6e5 = NULL;

    assertFrameObject( frame_e010a1132d5252a8fb8672e57e12f6e5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_3_set_mode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

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

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_3_set_mode );
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


static PyObject *impl_Adafruit_GPIO$SPI$$$function_4_set_bit_order( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_order = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_ba3f94abb9063be28ccd9f39b8c5fd08;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_ba3f94abb9063be28ccd9f39b8c5fd08 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ba3f94abb9063be28ccd9f39b8c5fd08, codeobj_ba3f94abb9063be28ccd9f39b8c5fd08, module_Adafruit_GPIO$SPI, sizeof(void *)+sizeof(void *) );
    frame_ba3f94abb9063be28ccd9f39b8c5fd08 = cache_frame_ba3f94abb9063be28ccd9f39b8c5fd08;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ba3f94abb9063be28ccd9f39b8c5fd08 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ba3f94abb9063be28ccd9f39b8c5fd08 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_order );
        tmp_compexpr_left_1 = par_order;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain_MSBFIRST );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSBFIRST );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "MSBFIRST" );
            exception_tb = NULL;

            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            PyObject *tmp_source_name_1;
            tmp_assattr_name_1 = Py_False;
            CHECK_OBJECT( par_self );
            tmp_source_name_1 = par_self;
            tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__device );
            if ( tmp_assattr_target_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 68;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_lsbfirst, tmp_assattr_name_1 );
            Py_DECREF( tmp_assattr_target_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 68;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_mvar_value_2;
            CHECK_OBJECT( par_order );
            tmp_compexpr_left_2 = par_order;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain_LSBFIRST );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LSBFIRST );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "LSBFIRST" );
                exception_tb = NULL;

                exception_lineno = 69;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_2 = tmp_mvar_value_2;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;
                type_description_1 = "oo";
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
                PyObject *tmp_assattr_name_2;
                PyObject *tmp_assattr_target_2;
                PyObject *tmp_source_name_2;
                tmp_assattr_name_2 = Py_True;
                CHECK_OBJECT( par_self );
                tmp_source_name_2 = par_self;
                tmp_assattr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__device );
                if ( tmp_assattr_target_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 70;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_lsbfirst, tmp_assattr_name_2 );
                Py_DECREF( tmp_assattr_target_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 70;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                tmp_make_exception_arg_1 = const_str_digest_8a2db60d8d74ac04422f111b1132a5f7;
                frame_ba3f94abb9063be28ccd9f39b8c5fd08->m_frame.f_lineno = 72;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 72;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ba3f94abb9063be28ccd9f39b8c5fd08 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ba3f94abb9063be28ccd9f39b8c5fd08 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ba3f94abb9063be28ccd9f39b8c5fd08, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ba3f94abb9063be28ccd9f39b8c5fd08->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ba3f94abb9063be28ccd9f39b8c5fd08, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ba3f94abb9063be28ccd9f39b8c5fd08,
        type_description_1,
        par_self,
        par_order
    );


    // Release cached frame.
    if ( frame_ba3f94abb9063be28ccd9f39b8c5fd08 == cache_frame_ba3f94abb9063be28ccd9f39b8c5fd08 )
    {
        Py_DECREF( frame_ba3f94abb9063be28ccd9f39b8c5fd08 );
    }
    cache_frame_ba3f94abb9063be28ccd9f39b8c5fd08 = NULL;

    assertFrameObject( frame_ba3f94abb9063be28ccd9f39b8c5fd08 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_4_set_bit_order );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

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

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_4_set_bit_order );
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


static PyObject *impl_Adafruit_GPIO$SPI$$$function_5_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_0ff1d64f5fcba1a2810615977fa31b41;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0ff1d64f5fcba1a2810615977fa31b41 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0ff1d64f5fcba1a2810615977fa31b41, codeobj_0ff1d64f5fcba1a2810615977fa31b41, module_Adafruit_GPIO$SPI, sizeof(void *) );
    frame_0ff1d64f5fcba1a2810615977fa31b41 = cache_frame_0ff1d64f5fcba1a2810615977fa31b41;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0ff1d64f5fcba1a2810615977fa31b41 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0ff1d64f5fcba1a2810615977fa31b41 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__device );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_0ff1d64f5fcba1a2810615977fa31b41->m_frame.f_lineno = 76;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_close );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0ff1d64f5fcba1a2810615977fa31b41 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0ff1d64f5fcba1a2810615977fa31b41 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0ff1d64f5fcba1a2810615977fa31b41, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0ff1d64f5fcba1a2810615977fa31b41->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0ff1d64f5fcba1a2810615977fa31b41, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0ff1d64f5fcba1a2810615977fa31b41,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_0ff1d64f5fcba1a2810615977fa31b41 == cache_frame_0ff1d64f5fcba1a2810615977fa31b41 )
    {
        Py_DECREF( frame_0ff1d64f5fcba1a2810615977fa31b41 );
    }
    cache_frame_0ff1d64f5fcba1a2810615977fa31b41 = NULL;

    assertFrameObject( frame_0ff1d64f5fcba1a2810615977fa31b41 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_5_close );
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
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_5_close );
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


static PyObject *impl_Adafruit_GPIO$SPI$$$function_6_write( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_a699ebcae7226a1efe368d9ddcbc321c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a699ebcae7226a1efe368d9ddcbc321c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a699ebcae7226a1efe368d9ddcbc321c, codeobj_a699ebcae7226a1efe368d9ddcbc321c, module_Adafruit_GPIO$SPI, sizeof(void *)+sizeof(void *) );
    frame_a699ebcae7226a1efe368d9ddcbc321c = cache_frame_a699ebcae7226a1efe368d9ddcbc321c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a699ebcae7226a1efe368d9ddcbc321c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a699ebcae7226a1efe368d9ddcbc321c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__device );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_data );
        tmp_args_element_name_1 = par_data;
        frame_a699ebcae7226a1efe368d9ddcbc321c->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_writebytes, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a699ebcae7226a1efe368d9ddcbc321c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a699ebcae7226a1efe368d9ddcbc321c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a699ebcae7226a1efe368d9ddcbc321c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a699ebcae7226a1efe368d9ddcbc321c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a699ebcae7226a1efe368d9ddcbc321c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a699ebcae7226a1efe368d9ddcbc321c,
        type_description_1,
        par_self,
        par_data
    );


    // Release cached frame.
    if ( frame_a699ebcae7226a1efe368d9ddcbc321c == cache_frame_a699ebcae7226a1efe368d9ddcbc321c )
    {
        Py_DECREF( frame_a699ebcae7226a1efe368d9ddcbc321c );
    }
    cache_frame_a699ebcae7226a1efe368d9ddcbc321c = NULL;

    assertFrameObject( frame_a699ebcae7226a1efe368d9ddcbc321c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_6_write );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

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

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_6_write );
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


static PyObject *impl_Adafruit_GPIO$SPI$$$function_7_read( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_length = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_adf56645e482874719093651e271960d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_adf56645e482874719093651e271960d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_adf56645e482874719093651e271960d, codeobj_adf56645e482874719093651e271960d, module_Adafruit_GPIO$SPI, sizeof(void *)+sizeof(void *) );
    frame_adf56645e482874719093651e271960d = cache_frame_adf56645e482874719093651e271960d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_adf56645e482874719093651e271960d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_adf56645e482874719093651e271960d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_bytearray_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__device );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_length );
        tmp_args_element_name_1 = par_length;
        frame_adf56645e482874719093651e271960d->m_frame.f_lineno = 88;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_bytearray_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_readbytes, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_bytearray_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BUILTIN_BYTEARRAY1( tmp_bytearray_arg_1 );
        Py_DECREF( tmp_bytearray_arg_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_adf56645e482874719093651e271960d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_adf56645e482874719093651e271960d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_adf56645e482874719093651e271960d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_adf56645e482874719093651e271960d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_adf56645e482874719093651e271960d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_adf56645e482874719093651e271960d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_adf56645e482874719093651e271960d,
        type_description_1,
        par_self,
        par_length
    );


    // Release cached frame.
    if ( frame_adf56645e482874719093651e271960d == cache_frame_adf56645e482874719093651e271960d )
    {
        Py_DECREF( frame_adf56645e482874719093651e271960d );
    }
    cache_frame_adf56645e482874719093651e271960d = NULL;

    assertFrameObject( frame_adf56645e482874719093651e271960d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_7_read );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_length );
    Py_DECREF( par_length );
    par_length = NULL;

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

    CHECK_OBJECT( (PyObject *)par_length );
    Py_DECREF( par_length );
    par_length = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_7_read );
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


static PyObject *impl_Adafruit_GPIO$SPI$$$function_8_transfer( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_af88baaecad6c5474a45a493a2e76467;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_af88baaecad6c5474a45a493a2e76467 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_af88baaecad6c5474a45a493a2e76467, codeobj_af88baaecad6c5474a45a493a2e76467, module_Adafruit_GPIO$SPI, sizeof(void *)+sizeof(void *) );
    frame_af88baaecad6c5474a45a493a2e76467 = cache_frame_af88baaecad6c5474a45a493a2e76467;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_af88baaecad6c5474a45a493a2e76467 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_af88baaecad6c5474a45a493a2e76467 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_bytearray_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__device );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_data );
        tmp_args_element_name_1 = par_data;
        frame_af88baaecad6c5474a45a493a2e76467->m_frame.f_lineno = 95;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_bytearray_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_xfer2, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_bytearray_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BUILTIN_BYTEARRAY1( tmp_bytearray_arg_1 );
        Py_DECREF( tmp_bytearray_arg_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_af88baaecad6c5474a45a493a2e76467 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_af88baaecad6c5474a45a493a2e76467 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_af88baaecad6c5474a45a493a2e76467 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_af88baaecad6c5474a45a493a2e76467, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_af88baaecad6c5474a45a493a2e76467->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_af88baaecad6c5474a45a493a2e76467, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_af88baaecad6c5474a45a493a2e76467,
        type_description_1,
        par_self,
        par_data
    );


    // Release cached frame.
    if ( frame_af88baaecad6c5474a45a493a2e76467 == cache_frame_af88baaecad6c5474a45a493a2e76467 )
    {
        Py_DECREF( frame_af88baaecad6c5474a45a493a2e76467 );
    }
    cache_frame_af88baaecad6c5474a45a493a2e76467 = NULL;

    assertFrameObject( frame_af88baaecad6c5474a45a493a2e76467 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_8_transfer );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

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

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_8_transfer );
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


static PyObject *impl_Adafruit_GPIO$SPI$$$function_9___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_port = python_pars[ 1 ];
    PyObject *par_device = python_pars[ 2 ];
    PyObject *par_max_speed_hz = python_pars[ 3 ];
    PyObject *var_mraa = NULL;
    struct Nuitka_FrameObject *frame_24ad3ee21d32521d03e0cda6bb069a94;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_24ad3ee21d32521d03e0cda6bb069a94 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_24ad3ee21d32521d03e0cda6bb069a94, codeobj_24ad3ee21d32521d03e0cda6bb069a94, module_Adafruit_GPIO$SPI, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_24ad3ee21d32521d03e0cda6bb069a94 = cache_frame_24ad3ee21d32521d03e0cda6bb069a94;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_24ad3ee21d32521d03e0cda6bb069a94 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_24ad3ee21d32521d03e0cda6bb069a94 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_plain_mraa;
        tmp_globals_name_1 = (PyObject *)moduledict_Adafruit_GPIO$SPI;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        frame_24ad3ee21d32521d03e0cda6bb069a94->m_frame.f_lineno = 100;
        tmp_assign_source_1 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_mraa == NULL );
        var_mraa = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( var_mraa );
        tmp_called_instance_1 = var_mraa;
        frame_24ad3ee21d32521d03e0cda6bb069a94->m_frame.f_lineno = 101;
        tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_Spi, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__device, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__device );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_24ad3ee21d32521d03e0cda6bb069a94->m_frame.f_lineno = 102;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_mode, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_24ad3ee21d32521d03e0cda6bb069a94 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_24ad3ee21d32521d03e0cda6bb069a94 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_24ad3ee21d32521d03e0cda6bb069a94, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_24ad3ee21d32521d03e0cda6bb069a94->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_24ad3ee21d32521d03e0cda6bb069a94, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_24ad3ee21d32521d03e0cda6bb069a94,
        type_description_1,
        par_self,
        par_port,
        par_device,
        par_max_speed_hz,
        var_mraa
    );


    // Release cached frame.
    if ( frame_24ad3ee21d32521d03e0cda6bb069a94 == cache_frame_24ad3ee21d32521d03e0cda6bb069a94 )
    {
        Py_DECREF( frame_24ad3ee21d32521d03e0cda6bb069a94 );
    }
    cache_frame_24ad3ee21d32521d03e0cda6bb069a94 = NULL;

    assertFrameObject( frame_24ad3ee21d32521d03e0cda6bb069a94 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_9___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_device );
    Py_DECREF( par_device );
    par_device = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_mraa );
    Py_DECREF( var_mraa );
    var_mraa = NULL;

    CHECK_OBJECT( (PyObject *)par_port );
    Py_DECREF( par_port );
    par_port = NULL;

    CHECK_OBJECT( (PyObject *)par_max_speed_hz );
    Py_DECREF( par_max_speed_hz );
    par_max_speed_hz = NULL;

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

    CHECK_OBJECT( (PyObject *)par_device );
    Py_DECREF( par_device );
    par_device = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_mraa );
    var_mraa = NULL;

    CHECK_OBJECT( (PyObject *)par_port );
    Py_DECREF( par_port );
    par_port = NULL;

    CHECK_OBJECT( (PyObject *)par_max_speed_hz );
    Py_DECREF( par_max_speed_hz );
    par_max_speed_hz = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_9___init__ );
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


static PyObject *impl_Adafruit_GPIO$SPI$$$function_10_set_clock_hz( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_hz = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_3f953e47577fd7ccae260ccf05c63113;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3f953e47577fd7ccae260ccf05c63113 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3f953e47577fd7ccae260ccf05c63113, codeobj_3f953e47577fd7ccae260ccf05c63113, module_Adafruit_GPIO$SPI, sizeof(void *)+sizeof(void *) );
    frame_3f953e47577fd7ccae260ccf05c63113 = cache_frame_3f953e47577fd7ccae260ccf05c63113;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3f953e47577fd7ccae260ccf05c63113 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3f953e47577fd7ccae260ccf05c63113 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__device );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_hz );
        tmp_args_element_name_1 = par_hz;
        frame_3f953e47577fd7ccae260ccf05c63113->m_frame.f_lineno = 108;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_frequency, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3f953e47577fd7ccae260ccf05c63113 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3f953e47577fd7ccae260ccf05c63113 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3f953e47577fd7ccae260ccf05c63113, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3f953e47577fd7ccae260ccf05c63113->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3f953e47577fd7ccae260ccf05c63113, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3f953e47577fd7ccae260ccf05c63113,
        type_description_1,
        par_self,
        par_hz
    );


    // Release cached frame.
    if ( frame_3f953e47577fd7ccae260ccf05c63113 == cache_frame_3f953e47577fd7ccae260ccf05c63113 )
    {
        Py_DECREF( frame_3f953e47577fd7ccae260ccf05c63113 );
    }
    cache_frame_3f953e47577fd7ccae260ccf05c63113 = NULL;

    assertFrameObject( frame_3f953e47577fd7ccae260ccf05c63113 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_10_set_clock_hz );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_hz );
    Py_DECREF( par_hz );
    par_hz = NULL;

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

    CHECK_OBJECT( (PyObject *)par_hz );
    Py_DECREF( par_hz );
    par_hz = NULL;

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
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_10_set_clock_hz );
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


static PyObject *impl_Adafruit_GPIO$SPI$$$function_11_set_mode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_mode = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_928d44cff1c6ddfafec44af776555a99;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_928d44cff1c6ddfafec44af776555a99 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_928d44cff1c6ddfafec44af776555a99, codeobj_928d44cff1c6ddfafec44af776555a99, module_Adafruit_GPIO$SPI, sizeof(void *)+sizeof(void *) );
    frame_928d44cff1c6ddfafec44af776555a99 = cache_frame_928d44cff1c6ddfafec44af776555a99;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_928d44cff1c6ddfafec44af776555a99 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_928d44cff1c6ddfafec44af776555a99 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_mode );
        tmp_compexpr_left_1 = par_mode;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT( par_mode );
        tmp_compexpr_left_2 = par_mode;
        tmp_compexpr_right_2 = const_int_pos_3;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
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
            tmp_make_exception_arg_1 = const_str_digest_d98e4db757898737d6dea9f9be72e5d1;
            frame_928d44cff1c6ddfafec44af776555a99->m_frame.f_lineno = 116;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 116;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__device );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_mode );
        tmp_args_element_name_1 = par_mode;
        frame_928d44cff1c6ddfafec44af776555a99->m_frame.f_lineno = 117;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_mode, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_928d44cff1c6ddfafec44af776555a99 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_928d44cff1c6ddfafec44af776555a99 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_928d44cff1c6ddfafec44af776555a99, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_928d44cff1c6ddfafec44af776555a99->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_928d44cff1c6ddfafec44af776555a99, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_928d44cff1c6ddfafec44af776555a99,
        type_description_1,
        par_self,
        par_mode
    );


    // Release cached frame.
    if ( frame_928d44cff1c6ddfafec44af776555a99 == cache_frame_928d44cff1c6ddfafec44af776555a99 )
    {
        Py_DECREF( frame_928d44cff1c6ddfafec44af776555a99 );
    }
    cache_frame_928d44cff1c6ddfafec44af776555a99 = NULL;

    assertFrameObject( frame_928d44cff1c6ddfafec44af776555a99 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_11_set_mode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

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

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_11_set_mode );
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


static PyObject *impl_Adafruit_GPIO$SPI$$$function_12_set_mode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_mode = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_89e63737097a7f9aceedc3ec618bac22;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_89e63737097a7f9aceedc3ec618bac22 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_89e63737097a7f9aceedc3ec618bac22, codeobj_89e63737097a7f9aceedc3ec618bac22, module_Adafruit_GPIO$SPI, sizeof(void *)+sizeof(void *) );
    frame_89e63737097a7f9aceedc3ec618bac22 = cache_frame_89e63737097a7f9aceedc3ec618bac22;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_89e63737097a7f9aceedc3ec618bac22 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_89e63737097a7f9aceedc3ec618bac22 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_mode );
        tmp_compexpr_left_1 = par_mode;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT( par_mode );
        tmp_compexpr_left_2 = par_mode;
        tmp_compexpr_right_2 = const_int_pos_3;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
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
            tmp_make_exception_arg_1 = const_str_digest_d98e4db757898737d6dea9f9be72e5d1;
            frame_89e63737097a7f9aceedc3ec618bac22->m_frame.f_lineno = 125;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 125;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__device );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_mode );
        tmp_args_element_name_1 = par_mode;
        frame_89e63737097a7f9aceedc3ec618bac22->m_frame.f_lineno = 126;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_mode, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_89e63737097a7f9aceedc3ec618bac22 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_89e63737097a7f9aceedc3ec618bac22 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_89e63737097a7f9aceedc3ec618bac22, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_89e63737097a7f9aceedc3ec618bac22->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_89e63737097a7f9aceedc3ec618bac22, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_89e63737097a7f9aceedc3ec618bac22,
        type_description_1,
        par_self,
        par_mode
    );


    // Release cached frame.
    if ( frame_89e63737097a7f9aceedc3ec618bac22 == cache_frame_89e63737097a7f9aceedc3ec618bac22 )
    {
        Py_DECREF( frame_89e63737097a7f9aceedc3ec618bac22 );
    }
    cache_frame_89e63737097a7f9aceedc3ec618bac22 = NULL;

    assertFrameObject( frame_89e63737097a7f9aceedc3ec618bac22 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_12_set_mode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

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

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_12_set_mode );
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


static PyObject *impl_Adafruit_GPIO$SPI$$$function_13_set_bit_order( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_order = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_b8883ddcb559ba85741dd1893a6e5b35;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_b8883ddcb559ba85741dd1893a6e5b35 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b8883ddcb559ba85741dd1893a6e5b35, codeobj_b8883ddcb559ba85741dd1893a6e5b35, module_Adafruit_GPIO$SPI, sizeof(void *)+sizeof(void *) );
    frame_b8883ddcb559ba85741dd1893a6e5b35 = cache_frame_b8883ddcb559ba85741dd1893a6e5b35;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b8883ddcb559ba85741dd1893a6e5b35 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b8883ddcb559ba85741dd1893a6e5b35 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_order );
        tmp_compexpr_left_1 = par_order;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain_MSBFIRST );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSBFIRST );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "MSBFIRST" );
            exception_tb = NULL;

            exception_lineno = 133;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_1 = par_self;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__device );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 134;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_b8883ddcb559ba85741dd1893a6e5b35->m_frame.f_lineno = 134;
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_lsbmode, &PyTuple_GET_ITEM( const_tuple_false_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 134;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_mvar_value_2;
            CHECK_OBJECT( par_order );
            tmp_compexpr_left_2 = par_order;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain_LSBFIRST );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LSBFIRST );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "LSBFIRST" );
                exception_tb = NULL;

                exception_lineno = 135;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_2 = tmp_mvar_value_2;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 135;
                type_description_1 = "oo";
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
                PyObject *tmp_called_instance_2;
                PyObject *tmp_source_name_2;
                PyObject *tmp_call_result_2;
                CHECK_OBJECT( par_self );
                tmp_source_name_2 = par_self;
                tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__device );
                if ( tmp_called_instance_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 136;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                frame_b8883ddcb559ba85741dd1893a6e5b35->m_frame.f_lineno = 136;
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_lsbmode, &PyTuple_GET_ITEM( const_tuple_true_tuple, 0 ) );

                Py_DECREF( tmp_called_instance_2 );
                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 136;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                tmp_make_exception_arg_1 = const_str_digest_8a2db60d8d74ac04422f111b1132a5f7;
                frame_b8883ddcb559ba85741dd1893a6e5b35->m_frame.f_lineno = 138;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 138;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b8883ddcb559ba85741dd1893a6e5b35 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b8883ddcb559ba85741dd1893a6e5b35 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b8883ddcb559ba85741dd1893a6e5b35, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b8883ddcb559ba85741dd1893a6e5b35->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b8883ddcb559ba85741dd1893a6e5b35, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b8883ddcb559ba85741dd1893a6e5b35,
        type_description_1,
        par_self,
        par_order
    );


    // Release cached frame.
    if ( frame_b8883ddcb559ba85741dd1893a6e5b35 == cache_frame_b8883ddcb559ba85741dd1893a6e5b35 )
    {
        Py_DECREF( frame_b8883ddcb559ba85741dd1893a6e5b35 );
    }
    cache_frame_b8883ddcb559ba85741dd1893a6e5b35 = NULL;

    assertFrameObject( frame_b8883ddcb559ba85741dd1893a6e5b35 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_13_set_bit_order );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

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

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_13_set_bit_order );
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


static PyObject *impl_Adafruit_GPIO$SPI$$$function_14_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_58e28656329ef40761fd5c586a75f57a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_58e28656329ef40761fd5c586a75f57a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_58e28656329ef40761fd5c586a75f57a, codeobj_58e28656329ef40761fd5c586a75f57a, module_Adafruit_GPIO$SPI, sizeof(void *) );
    frame_58e28656329ef40761fd5c586a75f57a = cache_frame_58e28656329ef40761fd5c586a75f57a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_58e28656329ef40761fd5c586a75f57a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_58e28656329ef40761fd5c586a75f57a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__device );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_58e28656329ef40761fd5c586a75f57a->m_frame.f_lineno = 142;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_Spi );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_58e28656329ef40761fd5c586a75f57a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_58e28656329ef40761fd5c586a75f57a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_58e28656329ef40761fd5c586a75f57a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_58e28656329ef40761fd5c586a75f57a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_58e28656329ef40761fd5c586a75f57a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_58e28656329ef40761fd5c586a75f57a,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_58e28656329ef40761fd5c586a75f57a == cache_frame_58e28656329ef40761fd5c586a75f57a )
    {
        Py_DECREF( frame_58e28656329ef40761fd5c586a75f57a );
    }
    cache_frame_58e28656329ef40761fd5c586a75f57a = NULL;

    assertFrameObject( frame_58e28656329ef40761fd5c586a75f57a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_14_close );
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
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_14_close );
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


static PyObject *impl_Adafruit_GPIO$SPI$$$function_15_write( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_3574e35c2f65a209e96b1e15c334eb1d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3574e35c2f65a209e96b1e15c334eb1d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3574e35c2f65a209e96b1e15c334eb1d, codeobj_3574e35c2f65a209e96b1e15c334eb1d, module_Adafruit_GPIO$SPI, sizeof(void *)+sizeof(void *) );
    frame_3574e35c2f65a209e96b1e15c334eb1d = cache_frame_3574e35c2f65a209e96b1e15c334eb1d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3574e35c2f65a209e96b1e15c334eb1d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3574e35c2f65a209e96b1e15c334eb1d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_bytearray_arg_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__device );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_write );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_data );
        tmp_bytearray_arg_1 = par_data;
        tmp_args_element_name_1 = BUILTIN_BYTEARRAY1( tmp_bytearray_arg_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3574e35c2f65a209e96b1e15c334eb1d->m_frame.f_lineno = 148;
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


            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3574e35c2f65a209e96b1e15c334eb1d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3574e35c2f65a209e96b1e15c334eb1d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3574e35c2f65a209e96b1e15c334eb1d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3574e35c2f65a209e96b1e15c334eb1d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3574e35c2f65a209e96b1e15c334eb1d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3574e35c2f65a209e96b1e15c334eb1d,
        type_description_1,
        par_self,
        par_data
    );


    // Release cached frame.
    if ( frame_3574e35c2f65a209e96b1e15c334eb1d == cache_frame_3574e35c2f65a209e96b1e15c334eb1d )
    {
        Py_DECREF( frame_3574e35c2f65a209e96b1e15c334eb1d );
    }
    cache_frame_3574e35c2f65a209e96b1e15c334eb1d = NULL;

    assertFrameObject( frame_3574e35c2f65a209e96b1e15c334eb1d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_15_write );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

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

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_15_write );
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


static PyObject *impl_Adafruit_GPIO$SPI$$$function_16___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_gpio = python_pars[ 1 ];
    PyObject *par_sclk = python_pars[ 2 ];
    PyObject *par_mosi = python_pars[ 3 ];
    PyObject *par_miso = python_pars[ 4 ];
    PyObject *par_ss = python_pars[ 5 ];
    struct Nuitka_FrameObject *frame_8f204841be164e2b5a99c640056db8ee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8f204841be164e2b5a99c640056db8ee = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8f204841be164e2b5a99c640056db8ee, codeobj_8f204841be164e2b5a99c640056db8ee, module_Adafruit_GPIO$SPI, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8f204841be164e2b5a99c640056db8ee = cache_frame_8f204841be164e2b5a99c640056db8ee;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8f204841be164e2b5a99c640056db8ee );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8f204841be164e2b5a99c640056db8ee ) == 2 ); // Frame stack

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


            exception_lineno = 161;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_sclk );
        tmp_assattr_name_2 = par_sclk;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__sclk, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_mosi );
        tmp_assattr_name_3 = par_mosi;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__mosi, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( par_miso );
        tmp_assattr_name_4 = par_miso;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__miso, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT( par_ss );
        tmp_assattr_name_5 = par_ss;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain__ss, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_gpio );
        tmp_source_name_1 = par_gpio;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_setup );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_sclk );
        tmp_args_element_name_1 = par_sclk;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain_GPIO );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GPIO );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "GPIO" );
            exception_tb = NULL;

            exception_lineno = 167;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_OUT );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 167;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_8f204841be164e2b5a99c640056db8ee->m_frame.f_lineno = 167;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_mosi );
        tmp_compexpr_left_1 = par_mosi;
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_2;
            CHECK_OBJECT( par_gpio );
            tmp_source_name_3 = par_gpio;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_setup );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 169;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_mosi );
            tmp_args_element_name_3 = par_mosi;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain_GPIO );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GPIO );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "GPIO" );
                exception_tb = NULL;

                exception_lineno = 169;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_2;
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_OUT );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 169;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_8f204841be164e2b5a99c640056db8ee->m_frame.f_lineno = 169;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 169;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_miso );
        tmp_compexpr_left_2 = par_miso;
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
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_5;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_3;
            CHECK_OBJECT( par_gpio );
            tmp_source_name_5 = par_gpio;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_setup );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_miso );
            tmp_args_element_name_5 = par_miso;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain_GPIO );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GPIO );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "GPIO" );
                exception_tb = NULL;

                exception_lineno = 171;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_3;
            tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_IN );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 171;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_8f204841be164e2b5a99c640056db8ee->m_frame.f_lineno = 171;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_ss );
        tmp_compexpr_left_3 = par_ss;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_7;
            PyObject *tmp_call_result_4;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_4;
            CHECK_OBJECT( par_gpio );
            tmp_source_name_7 = par_gpio;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_setup );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 173;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_ss );
            tmp_args_element_name_7 = par_ss;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain_GPIO );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GPIO );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_called_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "GPIO" );
                exception_tb = NULL;

                exception_lineno = 173;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_4;
            tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_OUT );
            if ( tmp_args_element_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 173;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_8f204841be164e2b5a99c640056db8ee->m_frame.f_lineno = 173;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_8 );
            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 173;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_5;
            PyObject *tmp_args_element_name_9;
            CHECK_OBJECT( par_gpio );
            tmp_called_instance_1 = par_gpio;
            CHECK_OBJECT( par_ss );
            tmp_args_element_name_9 = par_ss;
            frame_8f204841be164e2b5a99c640056db8ee->m_frame.f_lineno = 175;
            {
                PyObject *call_args[] = { tmp_args_element_name_9 };
                tmp_call_result_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_set_high, call_args );
            }

            if ( tmp_call_result_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 175;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_5 );
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        frame_8f204841be164e2b5a99c640056db8ee->m_frame.f_lineno = 177;
        tmp_call_result_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_set_mode, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

        if ( tmp_call_result_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_6 );
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_9;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_mvar_value_5;
        CHECK_OBJECT( par_self );
        tmp_source_name_9 = par_self;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_set_bit_order );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain_MSBFIRST );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSBFIRST );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "MSBFIRST" );
            exception_tb = NULL;

            exception_lineno = 179;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_10 = tmp_mvar_value_5;
        frame_8f204841be164e2b5a99c640056db8ee->m_frame.f_lineno = 179;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        if ( tmp_call_result_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_7 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8f204841be164e2b5a99c640056db8ee );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8f204841be164e2b5a99c640056db8ee );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8f204841be164e2b5a99c640056db8ee, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8f204841be164e2b5a99c640056db8ee->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8f204841be164e2b5a99c640056db8ee, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8f204841be164e2b5a99c640056db8ee,
        type_description_1,
        par_self,
        par_gpio,
        par_sclk,
        par_mosi,
        par_miso,
        par_ss
    );


    // Release cached frame.
    if ( frame_8f204841be164e2b5a99c640056db8ee == cache_frame_8f204841be164e2b5a99c640056db8ee )
    {
        Py_DECREF( frame_8f204841be164e2b5a99c640056db8ee );
    }
    cache_frame_8f204841be164e2b5a99c640056db8ee = NULL;

    assertFrameObject( frame_8f204841be164e2b5a99c640056db8ee );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_16___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_miso );
    Py_DECREF( par_miso );
    par_miso = NULL;

    CHECK_OBJECT( (PyObject *)par_ss );
    Py_DECREF( par_ss );
    par_ss = NULL;

    CHECK_OBJECT( (PyObject *)par_sclk );
    Py_DECREF( par_sclk );
    par_sclk = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_mosi );
    Py_DECREF( par_mosi );
    par_mosi = NULL;

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

    CHECK_OBJECT( (PyObject *)par_ss );
    Py_DECREF( par_ss );
    par_ss = NULL;

    CHECK_OBJECT( (PyObject *)par_sclk );
    Py_DECREF( par_sclk );
    par_sclk = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_mosi );
    Py_DECREF( par_mosi );
    par_mosi = NULL;

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
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_16___init__ );
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


static PyObject *impl_Adafruit_GPIO$SPI$$$function_17_set_clock_hz( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_hz = python_pars[ 1 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_17_set_clock_hz );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_hz );
    Py_DECREF( par_hz );
    par_hz = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_hz );
    Py_DECREF( par_hz );
    par_hz = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_17_set_clock_hz );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_Adafruit_GPIO$SPI$$$function_18_set_mode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_mode = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_2cfa498fc82ce2c6f1faf8159743e4ca;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_2cfa498fc82ce2c6f1faf8159743e4ca = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2cfa498fc82ce2c6f1faf8159743e4ca, codeobj_2cfa498fc82ce2c6f1faf8159743e4ca, module_Adafruit_GPIO$SPI, sizeof(void *)+sizeof(void *) );
    frame_2cfa498fc82ce2c6f1faf8159743e4ca = cache_frame_2cfa498fc82ce2c6f1faf8159743e4ca;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2cfa498fc82ce2c6f1faf8159743e4ca );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2cfa498fc82ce2c6f1faf8159743e4ca ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_mode );
        tmp_compexpr_left_1 = par_mode;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT( par_mode );
        tmp_compexpr_left_2 = par_mode;
        tmp_compexpr_right_2 = const_int_pos_3;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
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
            tmp_make_exception_arg_1 = const_str_digest_d98e4db757898737d6dea9f9be72e5d1;
            frame_2cfa498fc82ce2c6f1faf8159743e4ca->m_frame.f_lineno = 193;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 193;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_op_bitand_res_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_mode );
        tmp_left_name_1 = par_mode;
        tmp_right_name_1 = const_int_pos_2;
        tmp_op_bitand_res_1 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_op_bitand_res_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_op_bitand_res_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_op_bitand_res_1 );

            exception_lineno = 194;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_op_bitand_res_1 );
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_assattr_target_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain_GPIO );

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

                exception_lineno = 196;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_1;
            tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_HIGH );
            if ( tmp_assattr_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 196;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__clock_base, tmp_assattr_name_1 );
            Py_DECREF( tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 196;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_assattr_target_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain_GPIO );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GPIO );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "GPIO" );
                exception_tb = NULL;

                exception_lineno = 199;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_assattr_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_LOW );
            if ( tmp_assattr_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 199;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__clock_base, tmp_assattr_name_2 );
            Py_DECREF( tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 199;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        branch_end_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_op_bitand_res_2;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_mode );
        tmp_left_name_2 = par_mode;
        tmp_right_name_2 = const_int_pos_1;
        tmp_op_bitand_res_2 = BINARY_OPERATION( PyNumber_And, tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_op_bitand_res_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_op_bitand_res_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_op_bitand_res_2 );

            exception_lineno = 200;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_op_bitand_res_2 );
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
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_assattr_target_3;
            tmp_assattr_name_3 = Py_False;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_3 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__read_leading, tmp_assattr_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 202;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_assattr_target_4;
            tmp_assattr_name_4 = Py_True;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_4 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__read_leading, tmp_assattr_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 205;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        branch_end_3:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__gpio );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_output );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__sclk );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__clock_base );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_2cfa498fc82ce2c6f1faf8159743e4ca->m_frame.f_lineno = 207;
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


            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2cfa498fc82ce2c6f1faf8159743e4ca );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2cfa498fc82ce2c6f1faf8159743e4ca );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2cfa498fc82ce2c6f1faf8159743e4ca, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2cfa498fc82ce2c6f1faf8159743e4ca->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2cfa498fc82ce2c6f1faf8159743e4ca, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2cfa498fc82ce2c6f1faf8159743e4ca,
        type_description_1,
        par_self,
        par_mode
    );


    // Release cached frame.
    if ( frame_2cfa498fc82ce2c6f1faf8159743e4ca == cache_frame_2cfa498fc82ce2c6f1faf8159743e4ca )
    {
        Py_DECREF( frame_2cfa498fc82ce2c6f1faf8159743e4ca );
    }
    cache_frame_2cfa498fc82ce2c6f1faf8159743e4ca = NULL;

    assertFrameObject( frame_2cfa498fc82ce2c6f1faf8159743e4ca );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_18_set_mode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

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

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_18_set_mode );
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


static PyObject *impl_Adafruit_GPIO$SPI$$$function_19_set_bit_order( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_order = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_f2126dea8feb0d3bb61bcf264890a3d4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_f2126dea8feb0d3bb61bcf264890a3d4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f2126dea8feb0d3bb61bcf264890a3d4, codeobj_f2126dea8feb0d3bb61bcf264890a3d4, module_Adafruit_GPIO$SPI, sizeof(void *)+sizeof(void *) );
    frame_f2126dea8feb0d3bb61bcf264890a3d4 = cache_frame_f2126dea8feb0d3bb61bcf264890a3d4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f2126dea8feb0d3bb61bcf264890a3d4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f2126dea8feb0d3bb61bcf264890a3d4 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_order );
        tmp_compexpr_left_1 = par_order;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain_MSBFIRST );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSBFIRST );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "MSBFIRST" );
            exception_tb = NULL;

            exception_lineno = 217;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            tmp_assattr_name_1 = const_int_pos_128;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__mask, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 218;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_assattr_target_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain_operator );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_operator );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "operator" );
                exception_tb = NULL;

                exception_lineno = 219;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_2;
            tmp_assattr_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_lshift );
            if ( tmp_assattr_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 219;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__write_shift, tmp_assattr_name_2 );
            Py_DECREF( tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 219;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_assattr_target_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain_operator );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_operator );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "operator" );
                exception_tb = NULL;

                exception_lineno = 220;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_3;
            tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_rshift );
            if ( tmp_assattr_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 220;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_3 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__read_shift, tmp_assattr_name_3 );
            Py_DECREF( tmp_assattr_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 220;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_mvar_value_4;
            CHECK_OBJECT( par_order );
            tmp_compexpr_left_2 = par_order;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain_LSBFIRST );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LSBFIRST );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "LSBFIRST" );
                exception_tb = NULL;

                exception_lineno = 221;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_2 = tmp_mvar_value_4;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 221;
                type_description_1 = "oo";
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
                PyObject *tmp_assattr_name_4;
                PyObject *tmp_assattr_target_4;
                tmp_assattr_name_4 = const_int_pos_1;
                CHECK_OBJECT( par_self );
                tmp_assattr_target_4 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__mask, tmp_assattr_name_4 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 222;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_assattr_name_5;
                PyObject *tmp_source_name_3;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_assattr_target_5;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain_operator );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_operator );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "operator" );
                    exception_tb = NULL;

                    exception_lineno = 223;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_3 = tmp_mvar_value_5;
                tmp_assattr_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_rshift );
                if ( tmp_assattr_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 223;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_assattr_target_5 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain__write_shift, tmp_assattr_name_5 );
                Py_DECREF( tmp_assattr_name_5 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 223;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_assattr_name_6;
                PyObject *tmp_source_name_4;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_assattr_target_6;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain_operator );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_operator );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "operator" );
                    exception_tb = NULL;

                    exception_lineno = 224;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_4 = tmp_mvar_value_6;
                tmp_assattr_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_lshift );
                if ( tmp_assattr_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 224;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_assattr_target_6 = par_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain__read_shift, tmp_assattr_name_6 );
                Py_DECREF( tmp_assattr_name_6 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 224;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                tmp_make_exception_arg_1 = const_str_digest_8a2db60d8d74ac04422f111b1132a5f7;
                frame_f2126dea8feb0d3bb61bcf264890a3d4->m_frame.f_lineno = 226;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 226;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f2126dea8feb0d3bb61bcf264890a3d4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f2126dea8feb0d3bb61bcf264890a3d4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f2126dea8feb0d3bb61bcf264890a3d4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f2126dea8feb0d3bb61bcf264890a3d4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f2126dea8feb0d3bb61bcf264890a3d4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f2126dea8feb0d3bb61bcf264890a3d4,
        type_description_1,
        par_self,
        par_order
    );


    // Release cached frame.
    if ( frame_f2126dea8feb0d3bb61bcf264890a3d4 == cache_frame_f2126dea8feb0d3bb61bcf264890a3d4 )
    {
        Py_DECREF( frame_f2126dea8feb0d3bb61bcf264890a3d4 );
    }
    cache_frame_f2126dea8feb0d3bb61bcf264890a3d4 = NULL;

    assertFrameObject( frame_f2126dea8feb0d3bb61bcf264890a3d4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_19_set_bit_order );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

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

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_19_set_bit_order );
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


static PyObject *impl_Adafruit_GPIO$SPI$$$function_20_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_20_close );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_20_close );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_Adafruit_GPIO$SPI$$$function_21_write( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *par_assert_ss = python_pars[ 2 ];
    PyObject *par_deassert_ss = python_pars[ 3 ];
    PyObject *var_i = NULL;
    PyObject *var_byte = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_a73a11336a0a2e15030208c54f4a420b;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_a73a11336a0a2e15030208c54f4a420b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a73a11336a0a2e15030208c54f4a420b, codeobj_a73a11336a0a2e15030208c54f4a420b, module_Adafruit_GPIO$SPI, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a73a11336a0a2e15030208c54f4a420b = cache_frame_a73a11336a0a2e15030208c54f4a420b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a73a11336a0a2e15030208c54f4a420b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a73a11336a0a2e15030208c54f4a420b ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__mosi );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 238;
            type_description_1 = "oooooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_3477f2e660bc9d80d8d1e288fe7362b1;
            frame_a73a11336a0a2e15030208c54f4a420b->m_frame.f_lineno = 239;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 239;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_assert_ss );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_assert_ss );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__ss );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = Py_None;
        tmp_and_right_value_1 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_2 );
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__gpio );
            if ( tmp_source_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 241;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_set_low );
            Py_DECREF( tmp_source_name_3 );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 241;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__ss );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 241;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_a73a11336a0a2e15030208c54f4a420b->m_frame.f_lineno = 241;
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


                exception_lineno = 241;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_data );
        tmp_iter_arg_1 = par_data;
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 242;
            type_description_1 = "oooooo";
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
                type_description_1 = "oooooo";
                exception_lineno = 242;
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
            PyObject *old = var_byte;
            var_byte = tmp_assign_source_3;
            Py_INCREF( var_byte );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        tmp_iter_arg_2 = const_tuple_74cd8b3e9a15d638f032c79ff4818f63_tuple;
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_2 );
        assert( !(tmp_assign_source_4 == NULL) );
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooo";
                exception_lineno = 243;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_for_loop_2__iter_value );
        tmp_assign_source_6 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_6;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_6;
        PyObject *tmp_op_bitand_res_1;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( var_byte );
        tmp_args_element_name_2 = var_byte;
        CHECK_OBJECT( var_i );
        tmp_args_element_name_3 = var_i;
        frame_a73a11336a0a2e15030208c54f4a420b->m_frame.f_lineno = 245;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_left_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain__write_shift, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 245;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__mask );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 245;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_op_bitand_res_1 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_op_bitand_res_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 245;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_op_bitand_res_1 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_op_bitand_res_1 );

            exception_lineno = 245;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_op_bitand_res_1 );
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_7;
            PyObject *tmp_source_name_8;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_9;
            CHECK_OBJECT( par_self );
            tmp_source_name_8 = par_self;
            tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__gpio );
            if ( tmp_source_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 246;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_set_high );
            Py_DECREF( tmp_source_name_7 );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 246;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_9 = par_self;
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__mosi );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 246;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            frame_a73a11336a0a2e15030208c54f4a420b->m_frame.f_lineno = 246;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 246;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_10;
            PyObject *tmp_source_name_11;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_source_name_12;
            CHECK_OBJECT( par_self );
            tmp_source_name_11 = par_self;
            tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__gpio );
            if ( tmp_source_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 248;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_set_low );
            Py_DECREF( tmp_source_name_10 );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 248;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_12 = par_self;
            tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__mosi );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 248;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            frame_a73a11336a0a2e15030208c54f4a420b->m_frame.f_lineno = 248;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 248;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_end_3:;
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_13;
        PyObject *tmp_source_name_14;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_15;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_16;
        CHECK_OBJECT( par_self );
        tmp_source_name_14 = par_self;
        tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__gpio );
        if ( tmp_source_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_output );
        Py_DECREF( tmp_source_name_13 );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_15 = par_self;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain__sclk );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 250;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_16 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__clock_base );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 250;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 250;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_args_element_name_7 = ( tmp_res == 0 ) ? Py_True : Py_False;
        frame_a73a11336a0a2e15030208c54f4a420b->m_frame.f_lineno = 250;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        Py_DECREF( tmp_call_result_4 );
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_17;
        PyObject *tmp_source_name_18;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_source_name_19;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_source_name_20;
        CHECK_OBJECT( par_self );
        tmp_source_name_18 = par_self;
        tmp_source_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain__gpio );
        if ( tmp_source_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 252;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_output );
        Py_DECREF( tmp_source_name_17 );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 252;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_19 = par_self;
        tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain__sclk );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 252;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_20 = par_self;
        tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain__clock_base );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_8 );

            exception_lineno = 252;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        frame_a73a11336a0a2e15030208c54f4a420b->m_frame.f_lineno = 252;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_8 );
        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_call_result_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 252;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        Py_DECREF( tmp_call_result_5 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 243;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_1;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        type_description_1 = "oooooo";
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
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_21;
        CHECK_OBJECT( par_deassert_ss );
        tmp_truth_name_3 = CHECK_IF_TRUE( par_deassert_ss );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_2 == 1 )
        {
            goto and_right_2;
        }
        else
        {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT( par_self );
        tmp_source_name_21 = par_self;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain__ss );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = Py_None;
        tmp_and_right_value_2 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_3 );
        tmp_condition_result_4 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_4 = tmp_and_left_value_2;
        and_end_2:;
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
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_22;
            PyObject *tmp_source_name_23;
            PyObject *tmp_call_result_6;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_source_name_24;
            CHECK_OBJECT( par_self );
            tmp_source_name_23 = par_self;
            tmp_source_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain__gpio );
            if ( tmp_source_name_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 254;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_set_high );
            Py_DECREF( tmp_source_name_22 );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 254;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_24 = par_self;
            tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain__ss );
            if ( tmp_args_element_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 254;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_a73a11336a0a2e15030208c54f4a420b->m_frame.f_lineno = 254;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_10 );
            if ( tmp_call_result_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 254;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_6 );
        }
        branch_no_4:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a73a11336a0a2e15030208c54f4a420b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a73a11336a0a2e15030208c54f4a420b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a73a11336a0a2e15030208c54f4a420b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a73a11336a0a2e15030208c54f4a420b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a73a11336a0a2e15030208c54f4a420b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a73a11336a0a2e15030208c54f4a420b,
        type_description_1,
        par_self,
        par_data,
        par_assert_ss,
        par_deassert_ss,
        var_i,
        var_byte
    );


    // Release cached frame.
    if ( frame_a73a11336a0a2e15030208c54f4a420b == cache_frame_a73a11336a0a2e15030208c54f4a420b )
    {
        Py_DECREF( frame_a73a11336a0a2e15030208c54f4a420b );
    }
    cache_frame_a73a11336a0a2e15030208c54f4a420b = NULL;

    assertFrameObject( frame_a73a11336a0a2e15030208c54f4a420b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_21_write );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_assert_ss );
    Py_DECREF( par_assert_ss );
    par_assert_ss = NULL;

    CHECK_OBJECT( (PyObject *)par_deassert_ss );
    Py_DECREF( par_deassert_ss );
    par_deassert_ss = NULL;

    Py_XDECREF( var_byte );
    var_byte = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

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

    Py_XDECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_assert_ss );
    Py_DECREF( par_assert_ss );
    par_assert_ss = NULL;

    CHECK_OBJECT( (PyObject *)par_deassert_ss );
    Py_DECREF( par_deassert_ss );
    par_deassert_ss = NULL;

    Py_XDECREF( var_byte );
    var_byte = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_21_write );
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


static PyObject *impl_Adafruit_GPIO$SPI$$$function_22_read( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_length = python_pars[ 1 ];
    PyObject *par_assert_ss = python_pars[ 2 ];
    PyObject *par_deassert_ss = python_pars[ 3 ];
    PyObject *var_i = NULL;
    PyObject *var_j = NULL;
    PyObject *var_result = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_2__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_2__target = NULL;
    PyObject *tmp_inplace_assign_subscr_3__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_3__target = NULL;
    PyObject *tmp_inplace_assign_subscr_4__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_4__target = NULL;
    struct Nuitka_FrameObject *frame_2da45923e4fa3b46b5d903508579a732;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
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
    static struct Nuitka_FrameObject *cache_frame_2da45923e4fa3b46b5d903508579a732 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2da45923e4fa3b46b5d903508579a732, codeobj_2da45923e4fa3b46b5d903508579a732, module_Adafruit_GPIO$SPI, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2da45923e4fa3b46b5d903508579a732 = cache_frame_2da45923e4fa3b46b5d903508579a732;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2da45923e4fa3b46b5d903508579a732 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2da45923e4fa3b46b5d903508579a732 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__miso );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_f62ea64577d0f8084314313c332cfbba;
            frame_2da45923e4fa3b46b5d903508579a732->m_frame.f_lineno = 263;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 263;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_assert_ss );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_assert_ss );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 264;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__ss );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 264;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = Py_None;
        tmp_and_right_value_1 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_2 );
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__gpio );
            if ( tmp_source_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 265;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_set_low );
            Py_DECREF( tmp_source_name_3 );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 265;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__ss );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 265;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_2da45923e4fa3b46b5d903508579a732->m_frame.f_lineno = 265;
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


                exception_lineno = 265;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_bytearray_arg_1;
        CHECK_OBJECT( par_length );
        tmp_bytearray_arg_1 = par_length;
        tmp_assign_source_1 = BUILTIN_BYTEARRAY1( tmp_bytearray_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 266;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_result == NULL );
        var_result = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_range_arg_1;
        CHECK_OBJECT( par_length );
        tmp_range_arg_1 = par_length;
        tmp_iter_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 267;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 267;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
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
                type_description_1 = "ooooooo";
                exception_lineno = 267;
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
            PyObject *old = var_i;
            var_i = tmp_assign_source_4;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        tmp_iter_arg_2 = const_tuple_74cd8b3e9a15d638f032c79ff4818f63_tuple;
        tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
        assert( !(tmp_assign_source_5 == NULL) );
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT( tmp_next_source_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooo";
                exception_lineno = 268;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_for_loop_2__iter_value );
        tmp_assign_source_7 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_7;
            Py_INCREF( var_j );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_6;
        PyObject *tmp_source_name_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_8;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT( par_self );
        tmp_source_name_7 = par_self;
        tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__gpio );
        if ( tmp_source_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_output );
        Py_DECREF( tmp_source_name_6 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__sclk );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 270;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_9 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__clock_base );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 270;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 270;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_args_element_name_3 = ( tmp_res == 0 ) ? Py_True : Py_False;
        frame_2da45923e4fa3b46b5d903508579a732->m_frame.f_lineno = 270;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_source_name_10;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_10 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__read_leading );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 272;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 272;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_11;
            PyObject *tmp_source_name_12;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_13;
            int tmp_truth_name_3;
            CHECK_OBJECT( par_self );
            tmp_source_name_12 = par_self;
            tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__gpio );
            if ( tmp_source_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 273;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_is_high );
            Py_DECREF( tmp_source_name_11 );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 273;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_13 = par_self;
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__miso );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 273;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            frame_2da45923e4fa3b46b5d903508579a732->m_frame.f_lineno = 273;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 273;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_3 );
            if ( tmp_truth_name_3 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_3 );

                exception_lineno = 273;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            tmp_condition_result_4 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_3 );
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
                PyObject *tmp_assign_source_8;
                CHECK_OBJECT( var_result );
                tmp_assign_source_8 = var_result;
                {
                    PyObject *old = tmp_inplace_assign_subscr_1__target;
                    tmp_inplace_assign_subscr_1__target = tmp_assign_source_8;
                    Py_INCREF( tmp_inplace_assign_subscr_1__target );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_9;
                CHECK_OBJECT( var_i );
                tmp_assign_source_9 = var_i;
                {
                    PyObject *old = tmp_inplace_assign_subscr_1__subscript;
                    tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_9;
                    Py_INCREF( tmp_inplace_assign_subscr_1__subscript );
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_ass_subvalue_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_subscript_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_called_name_4;
                PyObject *tmp_source_name_14;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_source_name_15;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_ass_subscribed_1;
                PyObject *tmp_ass_subscript_1;
                CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
                tmp_subscribed_name_1 = tmp_inplace_assign_subscr_1__target;
                CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
                tmp_subscript_name_1 = tmp_inplace_assign_subscr_1__subscript;
                tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
                if ( tmp_left_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 275;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_14 = par_self;
                tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__read_shift );
                if ( tmp_called_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_1 );

                    exception_lineno = 275;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_15 = par_self;
                tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain__mask );
                if ( tmp_args_element_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_1 );
                    Py_DECREF( tmp_called_name_4 );

                    exception_lineno = 275;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( var_j );
                tmp_args_element_name_6 = var_j;
                frame_2da45923e4fa3b46b5d903508579a732->m_frame.f_lineno = 275;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                    tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
                }

                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_element_name_5 );
                if ( tmp_right_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_1 );

                    exception_lineno = 275;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
                tmp_ass_subvalue_1 = BINARY_OPERATION( PyNumber_InPlaceOr, tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_left_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_ass_subvalue_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 275;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
                tmp_ass_subscribed_1 = tmp_inplace_assign_subscr_1__target;
                CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
                tmp_ass_subscript_1 = tmp_inplace_assign_subscr_1__subscript;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
                Py_DECREF( tmp_ass_subvalue_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 275;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
            }
            goto try_end_1;
            // Exception handler code:
            try_except_handler_4:;
            exception_keeper_type_1 = exception_type;
            exception_keeper_value_1 = exception_value;
            exception_keeper_tb_1 = exception_tb;
            exception_keeper_lineno_1 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
            Py_DECREF( tmp_inplace_assign_subscr_1__target );
            tmp_inplace_assign_subscr_1__target = NULL;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
            Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
            tmp_inplace_assign_subscr_1__subscript = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_1;
            exception_value = exception_keeper_value_1;
            exception_tb = exception_keeper_tb_1;
            exception_lineno = exception_keeper_lineno_1;

            goto try_except_handler_3;
            // End of try:
            try_end_1:;
            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
            Py_DECREF( tmp_inplace_assign_subscr_1__target );
            tmp_inplace_assign_subscr_1__target = NULL;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
            Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
            tmp_inplace_assign_subscr_1__subscript = NULL;

            goto branch_end_4;
            branch_no_4:;
            {
                PyObject *tmp_assign_source_10;
                CHECK_OBJECT( var_result );
                tmp_assign_source_10 = var_result;
                {
                    PyObject *old = tmp_inplace_assign_subscr_2__target;
                    tmp_inplace_assign_subscr_2__target = tmp_assign_source_10;
                    Py_INCREF( tmp_inplace_assign_subscr_2__target );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_11;
                CHECK_OBJECT( var_i );
                tmp_assign_source_11 = var_i;
                {
                    PyObject *old = tmp_inplace_assign_subscr_2__subscript;
                    tmp_inplace_assign_subscr_2__subscript = tmp_assign_source_11;
                    Py_INCREF( tmp_inplace_assign_subscr_2__subscript );
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_ass_subvalue_2;
                PyObject *tmp_left_name_2;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_subscript_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_operand_name_2;
                PyObject *tmp_called_name_5;
                PyObject *tmp_source_name_16;
                PyObject *tmp_args_element_name_7;
                PyObject *tmp_source_name_17;
                PyObject *tmp_args_element_name_8;
                PyObject *tmp_ass_subscribed_2;
                PyObject *tmp_ass_subscript_2;
                CHECK_OBJECT( tmp_inplace_assign_subscr_2__target );
                tmp_subscribed_name_2 = tmp_inplace_assign_subscr_2__target;
                CHECK_OBJECT( tmp_inplace_assign_subscr_2__subscript );
                tmp_subscript_name_2 = tmp_inplace_assign_subscr_2__subscript;
                tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
                if ( tmp_left_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 278;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_16 = par_self;
                tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__read_shift );
                if ( tmp_called_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_2 );

                    exception_lineno = 278;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_17 = par_self;
                tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain__mask );
                if ( tmp_args_element_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_2 );
                    Py_DECREF( tmp_called_name_5 );

                    exception_lineno = 278;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }
                CHECK_OBJECT( var_j );
                tmp_args_element_name_8 = var_j;
                frame_2da45923e4fa3b46b5d903508579a732->m_frame.f_lineno = 278;
                {
                    PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                    tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
                }

                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_args_element_name_7 );
                if ( tmp_operand_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_2 );

                    exception_lineno = 278;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }
                tmp_right_name_2 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_2 );
                Py_DECREF( tmp_operand_name_2 );
                if ( tmp_right_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_2 );

                    exception_lineno = 278;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }
                tmp_ass_subvalue_2 = BINARY_OPERATION( PyNumber_InPlaceAnd, tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_left_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_ass_subvalue_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 278;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }
                CHECK_OBJECT( tmp_inplace_assign_subscr_2__target );
                tmp_ass_subscribed_2 = tmp_inplace_assign_subscr_2__target;
                CHECK_OBJECT( tmp_inplace_assign_subscr_2__subscript );
                tmp_ass_subscript_2 = tmp_inplace_assign_subscr_2__subscript;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
                Py_DECREF( tmp_ass_subvalue_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 278;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }
            }
            goto try_end_2;
            // Exception handler code:
            try_except_handler_5:;
            exception_keeper_type_2 = exception_type;
            exception_keeper_value_2 = exception_value;
            exception_keeper_tb_2 = exception_tb;
            exception_keeper_lineno_2 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__target );
            Py_DECREF( tmp_inplace_assign_subscr_2__target );
            tmp_inplace_assign_subscr_2__target = NULL;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__subscript );
            Py_DECREF( tmp_inplace_assign_subscr_2__subscript );
            tmp_inplace_assign_subscr_2__subscript = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto try_except_handler_3;
            // End of try:
            try_end_2:;
            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__target );
            Py_DECREF( tmp_inplace_assign_subscr_2__target );
            tmp_inplace_assign_subscr_2__target = NULL;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__subscript );
            Py_DECREF( tmp_inplace_assign_subscr_2__subscript );
            tmp_inplace_assign_subscr_2__subscript = NULL;

            branch_end_4:;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_18;
        PyObject *tmp_source_name_19;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_source_name_20;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_source_name_21;
        CHECK_OBJECT( par_self );
        tmp_source_name_19 = par_self;
        tmp_source_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain__gpio );
        if ( tmp_source_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 280;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_output );
        Py_DECREF( tmp_source_name_18 );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 280;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_20 = par_self;
        tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain__sclk );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 280;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_21 = par_self;
        tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain__clock_base );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_9 );

            exception_lineno = 280;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        frame_2da45923e4fa3b46b5d903508579a732->m_frame.f_lineno = 280;
        {
            PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_9 );
        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 280;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF( tmp_call_result_4 );
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_source_name_22;
        CHECK_OBJECT( par_self );
        tmp_source_name_22 = par_self;
        tmp_operand_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain__read_leading );
        if ( tmp_operand_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        Py_DECREF( tmp_operand_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_5 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_23;
            PyObject *tmp_source_name_24;
            PyObject *tmp_call_result_5;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_source_name_25;
            int tmp_truth_name_4;
            CHECK_OBJECT( par_self );
            tmp_source_name_24 = par_self;
            tmp_source_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain__gpio );
            if ( tmp_source_name_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 283;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_is_high );
            Py_DECREF( tmp_source_name_23 );
            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 283;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_25 = par_self;
            tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain__miso );
            if ( tmp_args_element_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );

                exception_lineno = 283;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            frame_2da45923e4fa3b46b5d903508579a732->m_frame.f_lineno = 283;
            {
                PyObject *call_args[] = { tmp_args_element_name_11 };
                tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_11 );
            if ( tmp_call_result_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 283;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            tmp_truth_name_4 = CHECK_IF_TRUE( tmp_call_result_5 );
            if ( tmp_truth_name_4 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_5 );

                exception_lineno = 283;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            tmp_condition_result_6 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_5 );
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_6;
            }
            else
            {
                goto branch_no_6;
            }
            branch_yes_6:;
            {
                PyObject *tmp_assign_source_12;
                CHECK_OBJECT( var_result );
                tmp_assign_source_12 = var_result;
                {
                    PyObject *old = tmp_inplace_assign_subscr_3__target;
                    tmp_inplace_assign_subscr_3__target = tmp_assign_source_12;
                    Py_INCREF( tmp_inplace_assign_subscr_3__target );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_13;
                CHECK_OBJECT( var_i );
                tmp_assign_source_13 = var_i;
                {
                    PyObject *old = tmp_inplace_assign_subscr_3__subscript;
                    tmp_inplace_assign_subscr_3__subscript = tmp_assign_source_13;
                    Py_INCREF( tmp_inplace_assign_subscr_3__subscript );
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_ass_subvalue_3;
                PyObject *tmp_left_name_3;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_subscript_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_called_name_8;
                PyObject *tmp_source_name_26;
                PyObject *tmp_args_element_name_12;
                PyObject *tmp_source_name_27;
                PyObject *tmp_args_element_name_13;
                PyObject *tmp_ass_subscribed_3;
                PyObject *tmp_ass_subscript_3;
                CHECK_OBJECT( tmp_inplace_assign_subscr_3__target );
                tmp_subscribed_name_3 = tmp_inplace_assign_subscr_3__target;
                CHECK_OBJECT( tmp_inplace_assign_subscr_3__subscript );
                tmp_subscript_name_3 = tmp_inplace_assign_subscr_3__subscript;
                tmp_left_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
                if ( tmp_left_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 285;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_6;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_26 = par_self;
                tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain__read_shift );
                if ( tmp_called_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_3 );

                    exception_lineno = 285;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_6;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_27 = par_self;
                tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain__mask );
                if ( tmp_args_element_name_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_3 );
                    Py_DECREF( tmp_called_name_8 );

                    exception_lineno = 285;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_6;
                }
                CHECK_OBJECT( var_j );
                tmp_args_element_name_13 = var_j;
                frame_2da45923e4fa3b46b5d903508579a732->m_frame.f_lineno = 285;
                {
                    PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
                    tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
                }

                Py_DECREF( tmp_called_name_8 );
                Py_DECREF( tmp_args_element_name_12 );
                if ( tmp_right_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_3 );

                    exception_lineno = 285;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_6;
                }
                tmp_ass_subvalue_3 = BINARY_OPERATION( PyNumber_InPlaceOr, tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_left_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_ass_subvalue_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 285;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_6;
                }
                CHECK_OBJECT( tmp_inplace_assign_subscr_3__target );
                tmp_ass_subscribed_3 = tmp_inplace_assign_subscr_3__target;
                CHECK_OBJECT( tmp_inplace_assign_subscr_3__subscript );
                tmp_ass_subscript_3 = tmp_inplace_assign_subscr_3__subscript;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
                Py_DECREF( tmp_ass_subvalue_3 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 285;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_6;
                }
            }
            goto try_end_3;
            // Exception handler code:
            try_except_handler_6:;
            exception_keeper_type_3 = exception_type;
            exception_keeper_value_3 = exception_value;
            exception_keeper_tb_3 = exception_tb;
            exception_keeper_lineno_3 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_3__target );
            Py_DECREF( tmp_inplace_assign_subscr_3__target );
            tmp_inplace_assign_subscr_3__target = NULL;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_3__subscript );
            Py_DECREF( tmp_inplace_assign_subscr_3__subscript );
            tmp_inplace_assign_subscr_3__subscript = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_3;
            exception_value = exception_keeper_value_3;
            exception_tb = exception_keeper_tb_3;
            exception_lineno = exception_keeper_lineno_3;

            goto try_except_handler_3;
            // End of try:
            try_end_3:;
            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_3__target );
            Py_DECREF( tmp_inplace_assign_subscr_3__target );
            tmp_inplace_assign_subscr_3__target = NULL;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_3__subscript );
            Py_DECREF( tmp_inplace_assign_subscr_3__subscript );
            tmp_inplace_assign_subscr_3__subscript = NULL;

            goto branch_end_6;
            branch_no_6:;
            {
                PyObject *tmp_assign_source_14;
                CHECK_OBJECT( var_result );
                tmp_assign_source_14 = var_result;
                {
                    PyObject *old = tmp_inplace_assign_subscr_4__target;
                    tmp_inplace_assign_subscr_4__target = tmp_assign_source_14;
                    Py_INCREF( tmp_inplace_assign_subscr_4__target );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_15;
                CHECK_OBJECT( var_i );
                tmp_assign_source_15 = var_i;
                {
                    PyObject *old = tmp_inplace_assign_subscr_4__subscript;
                    tmp_inplace_assign_subscr_4__subscript = tmp_assign_source_15;
                    Py_INCREF( tmp_inplace_assign_subscr_4__subscript );
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_ass_subvalue_4;
                PyObject *tmp_left_name_4;
                PyObject *tmp_subscribed_name_4;
                PyObject *tmp_subscript_name_4;
                PyObject *tmp_right_name_4;
                PyObject *tmp_operand_name_4;
                PyObject *tmp_called_name_9;
                PyObject *tmp_source_name_28;
                PyObject *tmp_args_element_name_14;
                PyObject *tmp_source_name_29;
                PyObject *tmp_args_element_name_15;
                PyObject *tmp_ass_subscribed_4;
                PyObject *tmp_ass_subscript_4;
                CHECK_OBJECT( tmp_inplace_assign_subscr_4__target );
                tmp_subscribed_name_4 = tmp_inplace_assign_subscr_4__target;
                CHECK_OBJECT( tmp_inplace_assign_subscr_4__subscript );
                tmp_subscript_name_4 = tmp_inplace_assign_subscr_4__subscript;
                tmp_left_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
                if ( tmp_left_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 288;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_7;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_28 = par_self;
                tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain__read_shift );
                if ( tmp_called_name_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_4 );

                    exception_lineno = 288;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_7;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_29 = par_self;
                tmp_args_element_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain__mask );
                if ( tmp_args_element_name_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_4 );
                    Py_DECREF( tmp_called_name_9 );

                    exception_lineno = 288;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_7;
                }
                CHECK_OBJECT( var_j );
                tmp_args_element_name_15 = var_j;
                frame_2da45923e4fa3b46b5d903508579a732->m_frame.f_lineno = 288;
                {
                    PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
                    tmp_operand_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
                }

                Py_DECREF( tmp_called_name_9 );
                Py_DECREF( tmp_args_element_name_14 );
                if ( tmp_operand_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_4 );

                    exception_lineno = 288;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_7;
                }
                tmp_right_name_4 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_4 );
                Py_DECREF( tmp_operand_name_4 );
                if ( tmp_right_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_4 );

                    exception_lineno = 288;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_7;
                }
                tmp_ass_subvalue_4 = BINARY_OPERATION( PyNumber_InPlaceAnd, tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_left_name_4 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_ass_subvalue_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 288;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_7;
                }
                CHECK_OBJECT( tmp_inplace_assign_subscr_4__target );
                tmp_ass_subscribed_4 = tmp_inplace_assign_subscr_4__target;
                CHECK_OBJECT( tmp_inplace_assign_subscr_4__subscript );
                tmp_ass_subscript_4 = tmp_inplace_assign_subscr_4__subscript;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
                Py_DECREF( tmp_ass_subvalue_4 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 288;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_7;
                }
            }
            goto try_end_4;
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

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_4__target );
            Py_DECREF( tmp_inplace_assign_subscr_4__target );
            tmp_inplace_assign_subscr_4__target = NULL;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_4__subscript );
            Py_DECREF( tmp_inplace_assign_subscr_4__subscript );
            tmp_inplace_assign_subscr_4__subscript = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_4;
            exception_value = exception_keeper_value_4;
            exception_tb = exception_keeper_tb_4;
            exception_lineno = exception_keeper_lineno_4;

            goto try_except_handler_3;
            // End of try:
            try_end_4:;
            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_4__target );
            Py_DECREF( tmp_inplace_assign_subscr_4__target );
            tmp_inplace_assign_subscr_4__target = NULL;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_4__subscript );
            Py_DECREF( tmp_inplace_assign_subscr_4__subscript );
            tmp_inplace_assign_subscr_4__subscript = NULL;

            branch_end_6:;
        }
        branch_no_5:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_2;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 267;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_7;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_5;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_30;
        CHECK_OBJECT( par_deassert_ss );
        tmp_truth_name_5 = CHECK_IF_TRUE( par_deassert_ss );
        if ( tmp_truth_name_5 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 289;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_2 == 1 )
        {
            goto and_right_2;
        }
        else
        {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT( par_self );
        tmp_source_name_30 = par_self;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain__ss );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 289;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = Py_None;
        tmp_and_right_value_2 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_3 );
        tmp_condition_result_7 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_7 = tmp_and_left_value_2;
        and_end_2:;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        {
            PyObject *tmp_called_name_10;
            PyObject *tmp_source_name_31;
            PyObject *tmp_source_name_32;
            PyObject *tmp_call_result_6;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_source_name_33;
            CHECK_OBJECT( par_self );
            tmp_source_name_32 = par_self;
            tmp_source_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain__gpio );
            if ( tmp_source_name_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 290;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_set_high );
            Py_DECREF( tmp_source_name_31 );
            if ( tmp_called_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 290;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_33 = par_self;
            tmp_args_element_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain__ss );
            if ( tmp_args_element_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_10 );

                exception_lineno = 290;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_2da45923e4fa3b46b5d903508579a732->m_frame.f_lineno = 290;
            {
                PyObject *call_args[] = { tmp_args_element_name_16 };
                tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
            }

            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_args_element_name_16 );
            if ( tmp_call_result_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 290;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_6 );
        }
        branch_no_7:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2da45923e4fa3b46b5d903508579a732 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2da45923e4fa3b46b5d903508579a732 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2da45923e4fa3b46b5d903508579a732, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2da45923e4fa3b46b5d903508579a732->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2da45923e4fa3b46b5d903508579a732, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2da45923e4fa3b46b5d903508579a732,
        type_description_1,
        par_self,
        par_length,
        par_assert_ss,
        par_deassert_ss,
        var_i,
        var_j,
        var_result
    );


    // Release cached frame.
    if ( frame_2da45923e4fa3b46b5d903508579a732 == cache_frame_2da45923e4fa3b46b5d903508579a732 )
    {
        Py_DECREF( frame_2da45923e4fa3b46b5d903508579a732 );
    }
    cache_frame_2da45923e4fa3b46b5d903508579a732 = NULL;

    assertFrameObject( frame_2da45923e4fa3b46b5d903508579a732 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_result );
    tmp_return_value = var_result;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_22_read );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    CHECK_OBJECT( (PyObject *)par_length );
    Py_DECREF( par_length );
    par_length = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

    CHECK_OBJECT( (PyObject *)par_assert_ss );
    Py_DECREF( par_assert_ss );
    par_assert_ss = NULL;

    CHECK_OBJECT( (PyObject *)par_deassert_ss );
    Py_DECREF( par_deassert_ss );
    par_deassert_ss = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    CHECK_OBJECT( (PyObject *)par_length );
    Py_DECREF( par_length );
    par_length = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    CHECK_OBJECT( (PyObject *)par_assert_ss );
    Py_DECREF( par_assert_ss );
    par_assert_ss = NULL;

    CHECK_OBJECT( (PyObject *)par_deassert_ss );
    Py_DECREF( par_deassert_ss );
    par_deassert_ss = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_22_read );
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


static PyObject *impl_Adafruit_GPIO$SPI$$$function_23_transfer( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *par_assert_ss = python_pars[ 2 ];
    PyObject *par_deassert_ss = python_pars[ 3 ];
    PyObject *var_i = NULL;
    PyObject *var_j = NULL;
    PyObject *var_result = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_2__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_2__target = NULL;
    PyObject *tmp_inplace_assign_subscr_3__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_3__target = NULL;
    PyObject *tmp_inplace_assign_subscr_4__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_4__target = NULL;
    struct Nuitka_FrameObject *frame_240c850aec85b9bc63824f9178caf471;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
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
    static struct Nuitka_FrameObject *cache_frame_240c850aec85b9bc63824f9178caf471 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_240c850aec85b9bc63824f9178caf471, codeobj_240c850aec85b9bc63824f9178caf471, module_Adafruit_GPIO$SPI, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_240c850aec85b9bc63824f9178caf471 = cache_frame_240c850aec85b9bc63824f9178caf471;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_240c850aec85b9bc63824f9178caf471 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_240c850aec85b9bc63824f9178caf471 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__mosi );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 300;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_3477f2e660bc9d80d8d1e288fe7362b1;
            frame_240c850aec85b9bc63824f9178caf471->m_frame.f_lineno = 301;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 301;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__mosi );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 302;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_2 );
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_f62ea64577d0f8084314313c332cfbba;
            frame_240c850aec85b9bc63824f9178caf471->m_frame.f_lineno = 303;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 303;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_assert_ss );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_assert_ss );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 304;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__ss );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 304;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = Py_None;
        tmp_and_right_value_1 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_3 );
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__gpio );
            if ( tmp_source_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 305;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_set_low );
            Py_DECREF( tmp_source_name_4 );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 305;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__ss );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 305;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_240c850aec85b9bc63824f9178caf471->m_frame.f_lineno = 305;
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


                exception_lineno = 305;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_bytearray_arg_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_data );
        tmp_len_arg_1 = par_data;
        tmp_bytearray_arg_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_bytearray_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 306;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BUILTIN_BYTEARRAY1( tmp_bytearray_arg_1 );
        Py_DECREF( tmp_bytearray_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 306;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_result == NULL );
        var_result = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_range_arg_1;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT( par_data );
        tmp_len_arg_2 = par_data;
        tmp_range_arg_1 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_range_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 307;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
        Py_DECREF( tmp_range_arg_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 307;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 307;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
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
                type_description_1 = "ooooooo";
                exception_lineno = 307;
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
            PyObject *old = var_i;
            var_i = tmp_assign_source_4;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        tmp_iter_arg_2 = const_tuple_74cd8b3e9a15d638f032c79ff4818f63_tuple;
        tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
        assert( !(tmp_assign_source_5 == NULL) );
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT( tmp_next_source_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooo";
                exception_lineno = 308;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_for_loop_2__iter_value );
        tmp_assign_source_7 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_7;
            Py_INCREF( var_j );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_7;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_8;
        PyObject *tmp_op_bitand_res_1;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_7 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__write_shift );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 310;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( par_data );
        tmp_subscribed_name_1 = par_data;
        CHECK_OBJECT( var_i );
        tmp_subscript_name_1 = var_i;
        tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 310;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( var_j );
        tmp_args_element_name_3 = var_j;
        frame_240c850aec85b9bc63824f9178caf471->m_frame.f_lineno = 310;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 310;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__mask );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 310;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_op_bitand_res_1 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_op_bitand_res_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 310;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_op_bitand_res_1 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_op_bitand_res_1 );

            exception_lineno = 310;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_op_bitand_res_1 );
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
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_9;
            PyObject *tmp_source_name_10;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_11;
            CHECK_OBJECT( par_self );
            tmp_source_name_10 = par_self;
            tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__gpio );
            if ( tmp_source_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 311;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_set_high );
            Py_DECREF( tmp_source_name_9 );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 311;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_11 = par_self;
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__mosi );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 311;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            frame_240c850aec85b9bc63824f9178caf471->m_frame.f_lineno = 311;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 311;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        goto branch_end_4;
        branch_no_4:;
        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_12;
            PyObject *tmp_source_name_13;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_source_name_14;
            CHECK_OBJECT( par_self );
            tmp_source_name_13 = par_self;
            tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__gpio );
            if ( tmp_source_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 313;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_set_low );
            Py_DECREF( tmp_source_name_12 );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 313;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_14 = par_self;
            tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__mosi );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 313;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            frame_240c850aec85b9bc63824f9178caf471->m_frame.f_lineno = 313;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 313;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_end_4:;
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_15;
        PyObject *tmp_source_name_16;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_17;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_18;
        CHECK_OBJECT( par_self );
        tmp_source_name_16 = par_self;
        tmp_source_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__gpio );
        if ( tmp_source_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_output );
        Py_DECREF( tmp_source_name_15 );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_17 = par_self;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain__sclk );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 315;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_18 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain__clock_base );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 315;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 315;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_args_element_name_7 = ( tmp_res == 0 ) ? Py_True : Py_False;
        frame_240c850aec85b9bc63824f9178caf471->m_frame.f_lineno = 315;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF( tmp_call_result_4 );
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_source_name_19;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_19 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain__read_leading );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 317;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 317;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_5 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_20;
            PyObject *tmp_source_name_21;
            PyObject *tmp_call_result_5;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_source_name_22;
            int tmp_truth_name_4;
            CHECK_OBJECT( par_self );
            tmp_source_name_21 = par_self;
            tmp_source_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain__gpio );
            if ( tmp_source_name_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 318;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_is_high );
            Py_DECREF( tmp_source_name_20 );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 318;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_22 = par_self;
            tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain__miso );
            if ( tmp_args_element_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 318;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            frame_240c850aec85b9bc63824f9178caf471->m_frame.f_lineno = 318;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_8 );
            if ( tmp_call_result_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 318;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            tmp_truth_name_4 = CHECK_IF_TRUE( tmp_call_result_5 );
            if ( tmp_truth_name_4 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_5 );

                exception_lineno = 318;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            tmp_condition_result_6 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_5 );
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_6;
            }
            else
            {
                goto branch_no_6;
            }
            branch_yes_6:;
            {
                PyObject *tmp_assign_source_8;
                CHECK_OBJECT( var_result );
                tmp_assign_source_8 = var_result;
                {
                    PyObject *old = tmp_inplace_assign_subscr_1__target;
                    tmp_inplace_assign_subscr_1__target = tmp_assign_source_8;
                    Py_INCREF( tmp_inplace_assign_subscr_1__target );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_9;
                CHECK_OBJECT( var_i );
                tmp_assign_source_9 = var_i;
                {
                    PyObject *old = tmp_inplace_assign_subscr_1__subscript;
                    tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_9;
                    Py_INCREF( tmp_inplace_assign_subscr_1__subscript );
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_ass_subvalue_1;
                PyObject *tmp_left_name_2;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_subscript_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_called_name_7;
                PyObject *tmp_source_name_23;
                PyObject *tmp_args_element_name_9;
                PyObject *tmp_source_name_24;
                PyObject *tmp_args_element_name_10;
                PyObject *tmp_ass_subscribed_1;
                PyObject *tmp_ass_subscript_1;
                CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
                tmp_subscribed_name_2 = tmp_inplace_assign_subscr_1__target;
                CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
                tmp_subscript_name_2 = tmp_inplace_assign_subscr_1__subscript;
                tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
                if ( tmp_left_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 320;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_23 = par_self;
                tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain__read_shift );
                if ( tmp_called_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_2 );

                    exception_lineno = 320;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_24 = par_self;
                tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain__mask );
                if ( tmp_args_element_name_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_2 );
                    Py_DECREF( tmp_called_name_7 );

                    exception_lineno = 320;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( var_j );
                tmp_args_element_name_10 = var_j;
                frame_240c850aec85b9bc63824f9178caf471->m_frame.f_lineno = 320;
                {
                    PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
                    tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
                }

                Py_DECREF( tmp_called_name_7 );
                Py_DECREF( tmp_args_element_name_9 );
                if ( tmp_right_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_2 );

                    exception_lineno = 320;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
                tmp_ass_subvalue_1 = BINARY_OPERATION( PyNumber_InPlaceOr, tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_left_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_ass_subvalue_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 320;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
                tmp_ass_subscribed_1 = tmp_inplace_assign_subscr_1__target;
                CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
                tmp_ass_subscript_1 = tmp_inplace_assign_subscr_1__subscript;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
                Py_DECREF( tmp_ass_subvalue_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 320;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
            }
            goto try_end_1;
            // Exception handler code:
            try_except_handler_4:;
            exception_keeper_type_1 = exception_type;
            exception_keeper_value_1 = exception_value;
            exception_keeper_tb_1 = exception_tb;
            exception_keeper_lineno_1 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
            Py_DECREF( tmp_inplace_assign_subscr_1__target );
            tmp_inplace_assign_subscr_1__target = NULL;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
            Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
            tmp_inplace_assign_subscr_1__subscript = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_1;
            exception_value = exception_keeper_value_1;
            exception_tb = exception_keeper_tb_1;
            exception_lineno = exception_keeper_lineno_1;

            goto try_except_handler_3;
            // End of try:
            try_end_1:;
            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
            Py_DECREF( tmp_inplace_assign_subscr_1__target );
            tmp_inplace_assign_subscr_1__target = NULL;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
            Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
            tmp_inplace_assign_subscr_1__subscript = NULL;

            goto branch_end_6;
            branch_no_6:;
            {
                PyObject *tmp_assign_source_10;
                CHECK_OBJECT( var_result );
                tmp_assign_source_10 = var_result;
                {
                    PyObject *old = tmp_inplace_assign_subscr_2__target;
                    tmp_inplace_assign_subscr_2__target = tmp_assign_source_10;
                    Py_INCREF( tmp_inplace_assign_subscr_2__target );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_11;
                CHECK_OBJECT( var_i );
                tmp_assign_source_11 = var_i;
                {
                    PyObject *old = tmp_inplace_assign_subscr_2__subscript;
                    tmp_inplace_assign_subscr_2__subscript = tmp_assign_source_11;
                    Py_INCREF( tmp_inplace_assign_subscr_2__subscript );
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_ass_subvalue_2;
                PyObject *tmp_left_name_3;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_subscript_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_operand_name_2;
                PyObject *tmp_called_name_8;
                PyObject *tmp_source_name_25;
                PyObject *tmp_args_element_name_11;
                PyObject *tmp_source_name_26;
                PyObject *tmp_args_element_name_12;
                PyObject *tmp_ass_subscribed_2;
                PyObject *tmp_ass_subscript_2;
                CHECK_OBJECT( tmp_inplace_assign_subscr_2__target );
                tmp_subscribed_name_3 = tmp_inplace_assign_subscr_2__target;
                CHECK_OBJECT( tmp_inplace_assign_subscr_2__subscript );
                tmp_subscript_name_3 = tmp_inplace_assign_subscr_2__subscript;
                tmp_left_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
                if ( tmp_left_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 323;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_25 = par_self;
                tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain__read_shift );
                if ( tmp_called_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_3 );

                    exception_lineno = 323;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_26 = par_self;
                tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain__mask );
                if ( tmp_args_element_name_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_3 );
                    Py_DECREF( tmp_called_name_8 );

                    exception_lineno = 323;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }
                CHECK_OBJECT( var_j );
                tmp_args_element_name_12 = var_j;
                frame_240c850aec85b9bc63824f9178caf471->m_frame.f_lineno = 323;
                {
                    PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
                    tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
                }

                Py_DECREF( tmp_called_name_8 );
                Py_DECREF( tmp_args_element_name_11 );
                if ( tmp_operand_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_3 );

                    exception_lineno = 323;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }
                tmp_right_name_3 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_2 );
                Py_DECREF( tmp_operand_name_2 );
                if ( tmp_right_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_3 );

                    exception_lineno = 323;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }
                tmp_ass_subvalue_2 = BINARY_OPERATION( PyNumber_InPlaceAnd, tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_left_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_ass_subvalue_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 323;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }
                CHECK_OBJECT( tmp_inplace_assign_subscr_2__target );
                tmp_ass_subscribed_2 = tmp_inplace_assign_subscr_2__target;
                CHECK_OBJECT( tmp_inplace_assign_subscr_2__subscript );
                tmp_ass_subscript_2 = tmp_inplace_assign_subscr_2__subscript;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
                Py_DECREF( tmp_ass_subvalue_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 323;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }
            }
            goto try_end_2;
            // Exception handler code:
            try_except_handler_5:;
            exception_keeper_type_2 = exception_type;
            exception_keeper_value_2 = exception_value;
            exception_keeper_tb_2 = exception_tb;
            exception_keeper_lineno_2 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__target );
            Py_DECREF( tmp_inplace_assign_subscr_2__target );
            tmp_inplace_assign_subscr_2__target = NULL;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__subscript );
            Py_DECREF( tmp_inplace_assign_subscr_2__subscript );
            tmp_inplace_assign_subscr_2__subscript = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto try_except_handler_3;
            // End of try:
            try_end_2:;
            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__target );
            Py_DECREF( tmp_inplace_assign_subscr_2__target );
            tmp_inplace_assign_subscr_2__target = NULL;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__subscript );
            Py_DECREF( tmp_inplace_assign_subscr_2__subscript );
            tmp_inplace_assign_subscr_2__subscript = NULL;

            branch_end_6:;
        }
        branch_no_5:;
    }
    {
        PyObject *tmp_called_name_9;
        PyObject *tmp_source_name_27;
        PyObject *tmp_source_name_28;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_source_name_29;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_source_name_30;
        CHECK_OBJECT( par_self );
        tmp_source_name_28 = par_self;
        tmp_source_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain__gpio );
        if ( tmp_source_name_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 325;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_output );
        Py_DECREF( tmp_source_name_27 );
        if ( tmp_called_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 325;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_29 = par_self;
        tmp_args_element_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain__sclk );
        if ( tmp_args_element_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );

            exception_lineno = 325;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_30 = par_self;
        tmp_args_element_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain__clock_base );
        if ( tmp_args_element_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_13 );

            exception_lineno = 325;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        frame_240c850aec85b9bc63824f9178caf471->m_frame.f_lineno = 325;
        {
            PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_13 );
        Py_DECREF( tmp_args_element_name_14 );
        if ( tmp_call_result_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 325;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF( tmp_call_result_6 );
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_source_name_31;
        CHECK_OBJECT( par_self );
        tmp_source_name_31 = par_self;
        tmp_operand_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain__read_leading );
        if ( tmp_operand_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        Py_DECREF( tmp_operand_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_7 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_name_10;
            PyObject *tmp_source_name_32;
            PyObject *tmp_source_name_33;
            PyObject *tmp_call_result_7;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_source_name_34;
            int tmp_truth_name_5;
            CHECK_OBJECT( par_self );
            tmp_source_name_33 = par_self;
            tmp_source_name_32 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain__gpio );
            if ( tmp_source_name_32 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 328;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_is_high );
            Py_DECREF( tmp_source_name_32 );
            if ( tmp_called_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 328;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_34 = par_self;
            tmp_args_element_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain__miso );
            if ( tmp_args_element_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_10 );

                exception_lineno = 328;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            frame_240c850aec85b9bc63824f9178caf471->m_frame.f_lineno = 328;
            {
                PyObject *call_args[] = { tmp_args_element_name_15 };
                tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
            }

            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_args_element_name_15 );
            if ( tmp_call_result_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 328;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            tmp_truth_name_5 = CHECK_IF_TRUE( tmp_call_result_7 );
            if ( tmp_truth_name_5 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_7 );

                exception_lineno = 328;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            tmp_condition_result_8 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_7 );
            if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_8;
            }
            else
            {
                goto branch_no_8;
            }
            branch_yes_8:;
            {
                PyObject *tmp_assign_source_12;
                CHECK_OBJECT( var_result );
                tmp_assign_source_12 = var_result;
                {
                    PyObject *old = tmp_inplace_assign_subscr_3__target;
                    tmp_inplace_assign_subscr_3__target = tmp_assign_source_12;
                    Py_INCREF( tmp_inplace_assign_subscr_3__target );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_13;
                CHECK_OBJECT( var_i );
                tmp_assign_source_13 = var_i;
                {
                    PyObject *old = tmp_inplace_assign_subscr_3__subscript;
                    tmp_inplace_assign_subscr_3__subscript = tmp_assign_source_13;
                    Py_INCREF( tmp_inplace_assign_subscr_3__subscript );
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_ass_subvalue_3;
                PyObject *tmp_left_name_4;
                PyObject *tmp_subscribed_name_4;
                PyObject *tmp_subscript_name_4;
                PyObject *tmp_right_name_4;
                PyObject *tmp_called_name_11;
                PyObject *tmp_source_name_35;
                PyObject *tmp_args_element_name_16;
                PyObject *tmp_source_name_36;
                PyObject *tmp_args_element_name_17;
                PyObject *tmp_ass_subscribed_3;
                PyObject *tmp_ass_subscript_3;
                CHECK_OBJECT( tmp_inplace_assign_subscr_3__target );
                tmp_subscribed_name_4 = tmp_inplace_assign_subscr_3__target;
                CHECK_OBJECT( tmp_inplace_assign_subscr_3__subscript );
                tmp_subscript_name_4 = tmp_inplace_assign_subscr_3__subscript;
                tmp_left_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
                if ( tmp_left_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 330;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_6;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_35 = par_self;
                tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain__read_shift );
                if ( tmp_called_name_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_4 );

                    exception_lineno = 330;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_6;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_36 = par_self;
                tmp_args_element_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain__mask );
                if ( tmp_args_element_name_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_4 );
                    Py_DECREF( tmp_called_name_11 );

                    exception_lineno = 330;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_6;
                }
                CHECK_OBJECT( var_j );
                tmp_args_element_name_17 = var_j;
                frame_240c850aec85b9bc63824f9178caf471->m_frame.f_lineno = 330;
                {
                    PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17 };
                    tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, call_args );
                }

                Py_DECREF( tmp_called_name_11 );
                Py_DECREF( tmp_args_element_name_16 );
                if ( tmp_right_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_4 );

                    exception_lineno = 330;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_6;
                }
                tmp_ass_subvalue_3 = BINARY_OPERATION( PyNumber_InPlaceOr, tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_left_name_4 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_ass_subvalue_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 330;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_6;
                }
                CHECK_OBJECT( tmp_inplace_assign_subscr_3__target );
                tmp_ass_subscribed_3 = tmp_inplace_assign_subscr_3__target;
                CHECK_OBJECT( tmp_inplace_assign_subscr_3__subscript );
                tmp_ass_subscript_3 = tmp_inplace_assign_subscr_3__subscript;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
                Py_DECREF( tmp_ass_subvalue_3 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 330;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_6;
                }
            }
            goto try_end_3;
            // Exception handler code:
            try_except_handler_6:;
            exception_keeper_type_3 = exception_type;
            exception_keeper_value_3 = exception_value;
            exception_keeper_tb_3 = exception_tb;
            exception_keeper_lineno_3 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_3__target );
            Py_DECREF( tmp_inplace_assign_subscr_3__target );
            tmp_inplace_assign_subscr_3__target = NULL;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_3__subscript );
            Py_DECREF( tmp_inplace_assign_subscr_3__subscript );
            tmp_inplace_assign_subscr_3__subscript = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_3;
            exception_value = exception_keeper_value_3;
            exception_tb = exception_keeper_tb_3;
            exception_lineno = exception_keeper_lineno_3;

            goto try_except_handler_3;
            // End of try:
            try_end_3:;
            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_3__target );
            Py_DECREF( tmp_inplace_assign_subscr_3__target );
            tmp_inplace_assign_subscr_3__target = NULL;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_3__subscript );
            Py_DECREF( tmp_inplace_assign_subscr_3__subscript );
            tmp_inplace_assign_subscr_3__subscript = NULL;

            goto branch_end_8;
            branch_no_8:;
            {
                PyObject *tmp_assign_source_14;
                CHECK_OBJECT( var_result );
                tmp_assign_source_14 = var_result;
                {
                    PyObject *old = tmp_inplace_assign_subscr_4__target;
                    tmp_inplace_assign_subscr_4__target = tmp_assign_source_14;
                    Py_INCREF( tmp_inplace_assign_subscr_4__target );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_15;
                CHECK_OBJECT( var_i );
                tmp_assign_source_15 = var_i;
                {
                    PyObject *old = tmp_inplace_assign_subscr_4__subscript;
                    tmp_inplace_assign_subscr_4__subscript = tmp_assign_source_15;
                    Py_INCREF( tmp_inplace_assign_subscr_4__subscript );
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_ass_subvalue_4;
                PyObject *tmp_left_name_5;
                PyObject *tmp_subscribed_name_5;
                PyObject *tmp_subscript_name_5;
                PyObject *tmp_right_name_5;
                PyObject *tmp_operand_name_4;
                PyObject *tmp_called_name_12;
                PyObject *tmp_source_name_37;
                PyObject *tmp_args_element_name_18;
                PyObject *tmp_source_name_38;
                PyObject *tmp_args_element_name_19;
                PyObject *tmp_ass_subscribed_4;
                PyObject *tmp_ass_subscript_4;
                CHECK_OBJECT( tmp_inplace_assign_subscr_4__target );
                tmp_subscribed_name_5 = tmp_inplace_assign_subscr_4__target;
                CHECK_OBJECT( tmp_inplace_assign_subscr_4__subscript );
                tmp_subscript_name_5 = tmp_inplace_assign_subscr_4__subscript;
                tmp_left_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
                if ( tmp_left_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 333;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_7;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_37 = par_self;
                tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain__read_shift );
                if ( tmp_called_name_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_5 );

                    exception_lineno = 333;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_7;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_38 = par_self;
                tmp_args_element_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain__mask );
                if ( tmp_args_element_name_18 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_5 );
                    Py_DECREF( tmp_called_name_12 );

                    exception_lineno = 333;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_7;
                }
                CHECK_OBJECT( var_j );
                tmp_args_element_name_19 = var_j;
                frame_240c850aec85b9bc63824f9178caf471->m_frame.f_lineno = 333;
                {
                    PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19 };
                    tmp_operand_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
                }

                Py_DECREF( tmp_called_name_12 );
                Py_DECREF( tmp_args_element_name_18 );
                if ( tmp_operand_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_5 );

                    exception_lineno = 333;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_7;
                }
                tmp_right_name_5 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_4 );
                Py_DECREF( tmp_operand_name_4 );
                if ( tmp_right_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_5 );

                    exception_lineno = 333;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_7;
                }
                tmp_ass_subvalue_4 = BINARY_OPERATION( PyNumber_InPlaceAnd, tmp_left_name_5, tmp_right_name_5 );
                Py_DECREF( tmp_left_name_5 );
                Py_DECREF( tmp_right_name_5 );
                if ( tmp_ass_subvalue_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 333;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_7;
                }
                CHECK_OBJECT( tmp_inplace_assign_subscr_4__target );
                tmp_ass_subscribed_4 = tmp_inplace_assign_subscr_4__target;
                CHECK_OBJECT( tmp_inplace_assign_subscr_4__subscript );
                tmp_ass_subscript_4 = tmp_inplace_assign_subscr_4__subscript;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
                Py_DECREF( tmp_ass_subvalue_4 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 333;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_7;
                }
            }
            goto try_end_4;
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

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_4__target );
            Py_DECREF( tmp_inplace_assign_subscr_4__target );
            tmp_inplace_assign_subscr_4__target = NULL;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_4__subscript );
            Py_DECREF( tmp_inplace_assign_subscr_4__subscript );
            tmp_inplace_assign_subscr_4__subscript = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_4;
            exception_value = exception_keeper_value_4;
            exception_tb = exception_keeper_tb_4;
            exception_lineno = exception_keeper_lineno_4;

            goto try_except_handler_3;
            // End of try:
            try_end_4:;
            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_4__target );
            Py_DECREF( tmp_inplace_assign_subscr_4__target );
            tmp_inplace_assign_subscr_4__target = NULL;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_4__subscript );
            Py_DECREF( tmp_inplace_assign_subscr_4__subscript );
            tmp_inplace_assign_subscr_4__subscript = NULL;

            branch_end_8:;
        }
        branch_no_7:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_2;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 307;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_9;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_6;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_source_name_39;
        CHECK_OBJECT( par_deassert_ss );
        tmp_truth_name_6 = CHECK_IF_TRUE( par_deassert_ss );
        if ( tmp_truth_name_6 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 334;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_2 == 1 )
        {
            goto and_right_2;
        }
        else
        {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT( par_self );
        tmp_source_name_39 = par_self;
        tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain__ss );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 334;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = Py_None;
        tmp_and_right_value_2 = ( tmp_compexpr_left_4 != tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_4 );
        tmp_condition_result_9 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_9 = tmp_and_left_value_2;
        and_end_2:;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_9;
        }
        else
        {
            goto branch_no_9;
        }
        branch_yes_9:;
        {
            PyObject *tmp_called_name_13;
            PyObject *tmp_source_name_40;
            PyObject *tmp_source_name_41;
            PyObject *tmp_call_result_8;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_source_name_42;
            CHECK_OBJECT( par_self );
            tmp_source_name_41 = par_self;
            tmp_source_name_40 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain__gpio );
            if ( tmp_source_name_40 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 335;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_set_high );
            Py_DECREF( tmp_source_name_40 );
            if ( tmp_called_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 335;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_42 = par_self;
            tmp_args_element_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain__ss );
            if ( tmp_args_element_name_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_13 );

                exception_lineno = 335;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_240c850aec85b9bc63824f9178caf471->m_frame.f_lineno = 335;
            {
                PyObject *call_args[] = { tmp_args_element_name_20 };
                tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
            }

            Py_DECREF( tmp_called_name_13 );
            Py_DECREF( tmp_args_element_name_20 );
            if ( tmp_call_result_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 335;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_8 );
        }
        branch_no_9:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_240c850aec85b9bc63824f9178caf471 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_240c850aec85b9bc63824f9178caf471 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_240c850aec85b9bc63824f9178caf471, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_240c850aec85b9bc63824f9178caf471->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_240c850aec85b9bc63824f9178caf471, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_240c850aec85b9bc63824f9178caf471,
        type_description_1,
        par_self,
        par_data,
        par_assert_ss,
        par_deassert_ss,
        var_i,
        var_j,
        var_result
    );


    // Release cached frame.
    if ( frame_240c850aec85b9bc63824f9178caf471 == cache_frame_240c850aec85b9bc63824f9178caf471 )
    {
        Py_DECREF( frame_240c850aec85b9bc63824f9178caf471 );
    }
    cache_frame_240c850aec85b9bc63824f9178caf471 = NULL;

    assertFrameObject( frame_240c850aec85b9bc63824f9178caf471 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_result );
    tmp_return_value = var_result;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_23_transfer );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

    CHECK_OBJECT( (PyObject *)par_assert_ss );
    Py_DECREF( par_assert_ss );
    par_assert_ss = NULL;

    CHECK_OBJECT( (PyObject *)par_deassert_ss );
    Py_DECREF( par_deassert_ss );
    par_deassert_ss = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    CHECK_OBJECT( (PyObject *)par_assert_ss );
    Py_DECREF( par_assert_ss );
    par_assert_ss = NULL;

    CHECK_OBJECT( (PyObject *)par_deassert_ss );
    Py_DECREF( par_deassert_ss );
    par_deassert_ss = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI$$$function_23_transfer );
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



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_10_set_clock_hz(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$SPI$$$function_10_set_clock_hz,
        const_str_plain_set_clock_hz,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3f953e47577fd7ccae260ccf05c63113,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$SPI,
        const_str_digest_daa01129ce3f270fa5c3269703b17f83,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_11_set_mode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$SPI$$$function_11_set_mode,
        const_str_plain_set_mode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_928d44cff1c6ddfafec44af776555a99,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$SPI,
        const_str_digest_e21db5ba4c676b5eac206dc221b45e2b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_12_set_mode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$SPI$$$function_12_set_mode,
        const_str_plain_set_mode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_89e63737097a7f9aceedc3ec618bac22,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$SPI,
        const_str_digest_e21db5ba4c676b5eac206dc221b45e2b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_13_set_bit_order(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$SPI$$$function_13_set_bit_order,
        const_str_plain_set_bit_order,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b8883ddcb559ba85741dd1893a6e5b35,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$SPI,
        const_str_digest_b18ed25f476c376890a0b252b5bd76ac,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_14_close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$SPI$$$function_14_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_58e28656329ef40761fd5c586a75f57a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$SPI,
        const_str_digest_354590337e48e9ad0366ded974cba254,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_15_write(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$SPI$$$function_15_write,
        const_str_plain_write,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3574e35c2f65a209e96b1e15c334eb1d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$SPI,
        const_str_digest_b465f4aeda2dc4be8d9fefe6de3c7da1,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_16___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$SPI$$$function_16___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8f204841be164e2b5a99c640056db8ee,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$SPI,
        const_str_digest_74b03445703f50389cc717225a1b609e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_17_set_clock_hz(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$SPI$$$function_17_set_clock_hz,
        const_str_plain_set_clock_hz,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b05d72b380d4bfe8bb14b7c96132d145,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$SPI,
        const_str_digest_2673f409f95a8b047a2a657da8472f4b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_18_set_mode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$SPI$$$function_18_set_mode,
        const_str_plain_set_mode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2cfa498fc82ce2c6f1faf8159743e4ca,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$SPI,
        const_str_digest_e21db5ba4c676b5eac206dc221b45e2b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_19_set_bit_order(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$SPI$$$function_19_set_bit_order,
        const_str_plain_set_bit_order,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f2126dea8feb0d3bb61bcf264890a3d4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$SPI,
        const_str_digest_b18ed25f476c376890a0b252b5bd76ac,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_1___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$SPI$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3719687e0e7e6f94a346da9a33ffea88,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$SPI,
        const_str_digest_cc945a62148b127f2cb2538bbd86b99c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_20_close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$SPI$$$function_20_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d0e7169d20d9bbc637cc916fd9f971df,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$SPI,
        const_str_digest_cd7591f9e1d4d3df0b37e1fc4ea6988e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_21_write( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$SPI$$$function_21_write,
        const_str_plain_write,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a73a11336a0a2e15030208c54f4a420b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$SPI,
        const_str_digest_b35547265edd2bbe6a8f3413be950a29,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_22_read( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$SPI$$$function_22_read,
        const_str_plain_read,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2da45923e4fa3b46b5d903508579a732,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$SPI,
        const_str_digest_30f2a7f6b62704b5a1f8f9e5fde9063e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_23_transfer( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$SPI$$$function_23_transfer,
        const_str_plain_transfer,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_240c850aec85b9bc63824f9178caf471,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$SPI,
        const_str_digest_7de3257bb69c5674d11ee510791cc0b2,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_2_set_clock_hz(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$SPI$$$function_2_set_clock_hz,
        const_str_plain_set_clock_hz,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c8d16e402653f33f79f90b1a6fa32dc1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$SPI,
        const_str_digest_daa01129ce3f270fa5c3269703b17f83,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_3_set_mode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$SPI$$$function_3_set_mode,
        const_str_plain_set_mode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e010a1132d5252a8fb8672e57e12f6e5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$SPI,
        const_str_digest_e21db5ba4c676b5eac206dc221b45e2b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_4_set_bit_order(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$SPI$$$function_4_set_bit_order,
        const_str_plain_set_bit_order,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ba3f94abb9063be28ccd9f39b8c5fd08,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$SPI,
        const_str_digest_b18ed25f476c376890a0b252b5bd76ac,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_5_close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$SPI$$$function_5_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0ff1d64f5fcba1a2810615977fa31b41,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$SPI,
        const_str_digest_354590337e48e9ad0366ded974cba254,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_6_write(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$SPI$$$function_6_write,
        const_str_plain_write,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a699ebcae7226a1efe368d9ddcbc321c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$SPI,
        const_str_digest_b465f4aeda2dc4be8d9fefe6de3c7da1,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_7_read(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$SPI$$$function_7_read,
        const_str_plain_read,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_adf56645e482874719093651e271960d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$SPI,
        const_str_digest_d3924328486127820748b70cbc0e1ac9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_8_transfer(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$SPI$$$function_8_transfer,
        const_str_plain_transfer,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_af88baaecad6c5474a45a493a2e76467,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$SPI,
        const_str_digest_757b85d02089f057dbca9f804a8b5782,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_9___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$SPI$$$function_9___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_24ad3ee21d32521d03e0cda6bb069a94,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$SPI,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Adafruit_GPIO$SPI =
{
    PyModuleDef_HEAD_INIT,
    "Adafruit_GPIO.SPI",
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

MOD_INIT_DECL( Adafruit_GPIO$SPI )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Adafruit_GPIO$SPI );
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
    puts("Adafruit_GPIO.SPI: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Adafruit_GPIO.SPI: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Adafruit_GPIO.SPI: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initAdafruit_GPIO$SPI" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Adafruit_GPIO$SPI = Py_InitModule4(
        "Adafruit_GPIO.SPI",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_Adafruit_GPIO$SPI = PyModule_Create( &mdef_Adafruit_GPIO$SPI );
#endif

    moduledict_Adafruit_GPIO$SPI = MODULE_DICT( module_Adafruit_GPIO$SPI );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_Adafruit_GPIO$SPI,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_Adafruit_GPIO$SPI,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_Adafruit_GPIO$SPI,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_Adafruit_GPIO$SPI );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_c075fd296c361ae8bea3c0da47584df0, module_Adafruit_GPIO$SPI );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
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
    PyObject *tmp_locals_Adafruit_GPIO$SPI_150_key___init__ = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$SPI_150_key_close = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$SPI_150_key_read = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$SPI_150_key_set_bit_order = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$SPI_150_key_set_clock_hz = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$SPI_150_key_set_mode = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$SPI_150_key_transfer = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$SPI_150_key_write = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$SPI_32_key___init__ = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$SPI_32_key_close = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$SPI_32_key_read = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$SPI_32_key_set_bit_order = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$SPI_32_key_set_clock_hz = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$SPI_32_key_set_mode = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$SPI_32_key_transfer = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$SPI_32_key_write = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$SPI_97_key___init__ = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$SPI_97_key_close = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$SPI_97_key_set_bit_order = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$SPI_97_key_set_clock_hz = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$SPI_97_key_set_mode = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$SPI_97_key_write = NULL;
    struct Nuitka_FrameObject *frame_b9f7a0b564a408fcab1dffe1494895db;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_8073f3b6bf43bc9a5b69830526ca44d1;
        UPDATE_STRING_DICT0( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_plain_operator;
        tmp_globals_name_1 = (PyObject *)moduledict_Adafruit_GPIO$SPI;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_assign_source_3 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        assert( !(tmp_assign_source_3 == NULL) );
        UPDATE_STRING_DICT1( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain_operator, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        tmp_name_name_2 = const_str_plain_time;
        tmp_globals_name_2 = (PyObject *)moduledict_Adafruit_GPIO$SPI;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_assign_source_4 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
        assert( !(tmp_assign_source_4 == NULL) );
        UPDATE_STRING_DICT1( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_4 );
    }
    // Frame without reuse.
    frame_b9f7a0b564a408fcab1dffe1494895db = MAKE_MODULE_FRAME( codeobj_b9f7a0b564a408fcab1dffe1494895db, module_Adafruit_GPIO$SPI );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_b9f7a0b564a408fcab1dffe1494895db );
    assert( Py_REFCNT( frame_b9f7a0b564a408fcab1dffe1494895db ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        tmp_name_name_3 = const_str_plain_Adafruit_GPIO;
        tmp_globals_name_3 = (PyObject *)moduledict_Adafruit_GPIO$SPI;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        frame_b9f7a0b564a408fcab1dffe1494895db->m_frame.f_lineno = 25;
        tmp_assign_source_5 = IMPORT_MODULE4( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain_GPIO, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = const_int_0;
        UPDATE_STRING_DICT0( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain_MSBFIRST, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = const_int_pos_1;
        UPDATE_STRING_DICT0( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain_LSBFIRST, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_int_pos_500000_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_assign_source_9 = MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_1___init__( tmp_defaults_1 );



            assert( tmp_locals_Adafruit_GPIO$SPI_32_key___init__ == NULL );
            tmp_locals_Adafruit_GPIO$SPI_32_key___init__ = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_2_set_clock_hz(  );



            assert( tmp_locals_Adafruit_GPIO$SPI_32_key_set_clock_hz == NULL );
            tmp_locals_Adafruit_GPIO$SPI_32_key_set_clock_hz = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_3_set_mode(  );



            assert( tmp_locals_Adafruit_GPIO$SPI_32_key_set_mode == NULL );
            tmp_locals_Adafruit_GPIO$SPI_32_key_set_mode = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_4_set_bit_order(  );



            assert( tmp_locals_Adafruit_GPIO$SPI_32_key_set_bit_order == NULL );
            tmp_locals_Adafruit_GPIO$SPI_32_key_set_bit_order = tmp_assign_source_12;
        }
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_5_close(  );



            assert( tmp_locals_Adafruit_GPIO$SPI_32_key_close == NULL );
            tmp_locals_Adafruit_GPIO$SPI_32_key_close = tmp_assign_source_13;
        }
        {
            PyObject *tmp_assign_source_14;
            tmp_assign_source_14 = MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_6_write(  );



            assert( tmp_locals_Adafruit_GPIO$SPI_32_key_write == NULL );
            tmp_locals_Adafruit_GPIO$SPI_32_key_write = tmp_assign_source_14;
        }
        {
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_7_read(  );



            assert( tmp_locals_Adafruit_GPIO$SPI_32_key_read == NULL );
            tmp_locals_Adafruit_GPIO$SPI_32_key_read = tmp_assign_source_15;
        }
        {
            PyObject *tmp_assign_source_16;
            tmp_assign_source_16 = MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_8_transfer(  );



            assert( tmp_locals_Adafruit_GPIO$SPI_32_key_transfer == NULL );
            tmp_locals_Adafruit_GPIO$SPI_32_key_transfer = tmp_assign_source_16;
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
            tmp_dict_value_1 = const_str_digest_c075fd296c361ae8bea3c0da47584df0;
            tmp_dict_key_1 = const_str_plain___module__;
            tmp_assign_source_8 = _PyDict_NewPresized( 10 );
            tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_value_2 = const_str_digest_eb5423e764f7e23aa5e265c7612181ad;
            tmp_dict_key_2 = const_str_plain___doc__;
            tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$SPI_32_key___init__ );
            tmp_dict_value_3 = tmp_locals_Adafruit_GPIO$SPI_32_key___init__;
            tmp_dict_key_3 = const_str_plain___init__;
            tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$SPI_32_key_set_clock_hz );
            tmp_dict_value_4 = tmp_locals_Adafruit_GPIO$SPI_32_key_set_clock_hz;
            tmp_dict_key_4 = const_str_plain_set_clock_hz;
            tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$SPI_32_key_set_mode );
            tmp_dict_value_5 = tmp_locals_Adafruit_GPIO$SPI_32_key_set_mode;
            tmp_dict_key_5 = const_str_plain_set_mode;
            tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$SPI_32_key_set_bit_order );
            tmp_dict_value_6 = tmp_locals_Adafruit_GPIO$SPI_32_key_set_bit_order;
            tmp_dict_key_6 = const_str_plain_set_bit_order;
            tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_6, tmp_dict_value_6 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$SPI_32_key_close );
            tmp_dict_value_7 = tmp_locals_Adafruit_GPIO$SPI_32_key_close;
            tmp_dict_key_7 = const_str_plain_close;
            tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_7, tmp_dict_value_7 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$SPI_32_key_write );
            tmp_dict_value_8 = tmp_locals_Adafruit_GPIO$SPI_32_key_write;
            tmp_dict_key_8 = const_str_plain_write;
            tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_8, tmp_dict_value_8 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$SPI_32_key_read );
            tmp_dict_value_9 = tmp_locals_Adafruit_GPIO$SPI_32_key_read;
            tmp_dict_key_9 = const_str_plain_read;
            tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_9, tmp_dict_value_9 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$SPI_32_key_transfer );
            tmp_dict_value_10 = tmp_locals_Adafruit_GPIO$SPI_32_key_transfer;
            tmp_dict_key_10 = const_str_plain_transfer;
            tmp_res = PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_10, tmp_dict_value_10 );
            assert( !(tmp_res != 0) );
            goto try_return_handler_1;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$SPI_32_key___init__ );
        Py_DECREF( tmp_locals_Adafruit_GPIO$SPI_32_key___init__ );
        tmp_locals_Adafruit_GPIO$SPI_32_key___init__ = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$SPI_32_key_set_clock_hz );
        Py_DECREF( tmp_locals_Adafruit_GPIO$SPI_32_key_set_clock_hz );
        tmp_locals_Adafruit_GPIO$SPI_32_key_set_clock_hz = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$SPI_32_key_set_mode );
        Py_DECREF( tmp_locals_Adafruit_GPIO$SPI_32_key_set_mode );
        tmp_locals_Adafruit_GPIO$SPI_32_key_set_mode = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$SPI_32_key_set_bit_order );
        Py_DECREF( tmp_locals_Adafruit_GPIO$SPI_32_key_set_bit_order );
        tmp_locals_Adafruit_GPIO$SPI_32_key_set_bit_order = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$SPI_32_key_close );
        Py_DECREF( tmp_locals_Adafruit_GPIO$SPI_32_key_close );
        tmp_locals_Adafruit_GPIO$SPI_32_key_close = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$SPI_32_key_write );
        Py_DECREF( tmp_locals_Adafruit_GPIO$SPI_32_key_write );
        tmp_locals_Adafruit_GPIO$SPI_32_key_write = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$SPI_32_key_read );
        Py_DECREF( tmp_locals_Adafruit_GPIO$SPI_32_key_read );
        tmp_locals_Adafruit_GPIO$SPI_32_key_read = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$SPI_32_key_transfer );
        Py_DECREF( tmp_locals_Adafruit_GPIO$SPI_32_key_transfer );
        tmp_locals_Adafruit_GPIO$SPI_32_key_transfer = NULL;

        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI );
        return MOD_RETURN_VALUE( NULL );
        outline_result_1:;
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
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


            exception_lineno = 32;

            goto try_except_handler_2;
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
        tmp_assign_source_17 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_17 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_17 );
        condexpr_end_1:;
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = const_str_plain_SpiDev;
        tmp_args_element_name_2 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_b9f7a0b564a408fcab1dffe1494895db->m_frame.f_lineno = 32;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_18;
    }
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_assign_source_19 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain_SpiDev, tmp_assign_source_19 );
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
        PyObject *tmp_assign_source_20;
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_int_pos_500000_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_assign_source_21 = MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_9___init__( tmp_defaults_2 );



            assert( tmp_locals_Adafruit_GPIO$SPI_97_key___init__ == NULL );
            tmp_locals_Adafruit_GPIO$SPI_97_key___init__ = tmp_assign_source_21;
        }
        {
            PyObject *tmp_assign_source_22;
            tmp_assign_source_22 = MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_10_set_clock_hz(  );



            assert( tmp_locals_Adafruit_GPIO$SPI_97_key_set_clock_hz == NULL );
            tmp_locals_Adafruit_GPIO$SPI_97_key_set_clock_hz = tmp_assign_source_22;
        }
        {
            PyObject *tmp_assign_source_23;
            tmp_assign_source_23 = MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_11_set_mode(  );



            assert( tmp_locals_Adafruit_GPIO$SPI_97_key_set_mode == NULL );
            tmp_locals_Adafruit_GPIO$SPI_97_key_set_mode = tmp_assign_source_23;
        }
        {
            PyObject *tmp_assign_source_24;
            tmp_assign_source_24 = MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_12_set_mode(  );



            {
                PyObject *old = tmp_locals_Adafruit_GPIO$SPI_97_key_set_mode;
                assert( old != NULL );
                tmp_locals_Adafruit_GPIO$SPI_97_key_set_mode = tmp_assign_source_24;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_25;
            tmp_assign_source_25 = MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_13_set_bit_order(  );



            assert( tmp_locals_Adafruit_GPIO$SPI_97_key_set_bit_order == NULL );
            tmp_locals_Adafruit_GPIO$SPI_97_key_set_bit_order = tmp_assign_source_25;
        }
        {
            PyObject *tmp_assign_source_26;
            tmp_assign_source_26 = MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_14_close(  );



            assert( tmp_locals_Adafruit_GPIO$SPI_97_key_close == NULL );
            tmp_locals_Adafruit_GPIO$SPI_97_key_close = tmp_assign_source_26;
        }
        {
            PyObject *tmp_assign_source_27;
            tmp_assign_source_27 = MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_15_write(  );



            assert( tmp_locals_Adafruit_GPIO$SPI_97_key_write == NULL );
            tmp_locals_Adafruit_GPIO$SPI_97_key_write = tmp_assign_source_27;
        }
        // Tried code:
        {
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
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            tmp_dict_value_11 = const_str_digest_c075fd296c361ae8bea3c0da47584df0;
            tmp_dict_key_11 = const_str_plain___module__;
            tmp_assign_source_20 = _PyDict_NewPresized( 8 );
            tmp_res = PyDict_SetItem( tmp_assign_source_20, tmp_dict_key_11, tmp_dict_value_11 );
            assert( !(tmp_res != 0) );
            tmp_dict_value_12 = const_str_digest_496401c47bd0f1a510376ff8cd34e51c;
            tmp_dict_key_12 = const_str_plain___doc__;
            tmp_res = PyDict_SetItem( tmp_assign_source_20, tmp_dict_key_12, tmp_dict_value_12 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$SPI_97_key___init__ );
            tmp_dict_value_13 = tmp_locals_Adafruit_GPIO$SPI_97_key___init__;
            tmp_dict_key_13 = const_str_plain___init__;
            tmp_res = PyDict_SetItem( tmp_assign_source_20, tmp_dict_key_13, tmp_dict_value_13 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$SPI_97_key_set_clock_hz );
            tmp_dict_value_14 = tmp_locals_Adafruit_GPIO$SPI_97_key_set_clock_hz;
            tmp_dict_key_14 = const_str_plain_set_clock_hz;
            tmp_res = PyDict_SetItem( tmp_assign_source_20, tmp_dict_key_14, tmp_dict_value_14 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$SPI_97_key_set_mode );
            tmp_dict_value_15 = tmp_locals_Adafruit_GPIO$SPI_97_key_set_mode;
            tmp_dict_key_15 = const_str_plain_set_mode;
            tmp_res = PyDict_SetItem( tmp_assign_source_20, tmp_dict_key_15, tmp_dict_value_15 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$SPI_97_key_set_bit_order );
            tmp_dict_value_16 = tmp_locals_Adafruit_GPIO$SPI_97_key_set_bit_order;
            tmp_dict_key_16 = const_str_plain_set_bit_order;
            tmp_res = PyDict_SetItem( tmp_assign_source_20, tmp_dict_key_16, tmp_dict_value_16 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$SPI_97_key_close );
            tmp_dict_value_17 = tmp_locals_Adafruit_GPIO$SPI_97_key_close;
            tmp_dict_key_17 = const_str_plain_close;
            tmp_res = PyDict_SetItem( tmp_assign_source_20, tmp_dict_key_17, tmp_dict_value_17 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$SPI_97_key_write );
            tmp_dict_value_18 = tmp_locals_Adafruit_GPIO$SPI_97_key_write;
            tmp_dict_key_18 = const_str_plain_write;
            tmp_res = PyDict_SetItem( tmp_assign_source_20, tmp_dict_key_18, tmp_dict_value_18 );
            assert( !(tmp_res != 0) );
            goto try_return_handler_3;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$SPI_97_key___init__ );
        Py_DECREF( tmp_locals_Adafruit_GPIO$SPI_97_key___init__ );
        tmp_locals_Adafruit_GPIO$SPI_97_key___init__ = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$SPI_97_key_set_clock_hz );
        Py_DECREF( tmp_locals_Adafruit_GPIO$SPI_97_key_set_clock_hz );
        tmp_locals_Adafruit_GPIO$SPI_97_key_set_clock_hz = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$SPI_97_key_set_mode );
        Py_DECREF( tmp_locals_Adafruit_GPIO$SPI_97_key_set_mode );
        tmp_locals_Adafruit_GPIO$SPI_97_key_set_mode = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$SPI_97_key_set_bit_order );
        Py_DECREF( tmp_locals_Adafruit_GPIO$SPI_97_key_set_bit_order );
        tmp_locals_Adafruit_GPIO$SPI_97_key_set_bit_order = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$SPI_97_key_close );
        Py_DECREF( tmp_locals_Adafruit_GPIO$SPI_97_key_close );
        tmp_locals_Adafruit_GPIO$SPI_97_key_close = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$SPI_97_key_write );
        Py_DECREF( tmp_locals_Adafruit_GPIO$SPI_97_key_write );
        tmp_locals_Adafruit_GPIO$SPI_97_key_write = NULL;

        goto outline_result_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI );
        return MOD_RETURN_VALUE( NULL );
        outline_result_2:;
        assert( tmp_class_creation_2__class_dict == NULL );
        tmp_class_creation_2__class_dict = tmp_assign_source_20;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        nuitka_bool tmp_condition_result_2;
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


            exception_lineno = 97;

            goto try_except_handler_4;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
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
        tmp_assign_source_28 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;

            goto try_except_handler_4;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_assign_source_28 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_28 );
        condexpr_end_2:;
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_called_name_2 = tmp_class_creation_2__metaclass;
        tmp_args_element_name_4 = const_str_plain_SpiDevMraa;
        tmp_args_element_name_5 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_2__class_dict );
        tmp_args_element_name_6 = tmp_class_creation_2__class_dict;
        frame_b9f7a0b564a408fcab1dffe1494895db->m_frame.f_lineno = 97;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_2__class == NULL );
        tmp_class_creation_2__class = tmp_assign_source_29;
    }
    goto try_end_2;
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_dict );
    Py_DECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT( tmp_class_creation_2__class );
        tmp_assign_source_30 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain_SpiDevMraa, tmp_assign_source_30 );
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
        PyObject *tmp_assign_source_31;
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = const_tuple_none_none_none_tuple;
            Py_INCREF( tmp_defaults_3 );
            tmp_assign_source_32 = MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_16___init__( tmp_defaults_3 );



            assert( tmp_locals_Adafruit_GPIO$SPI_150_key___init__ == NULL );
            tmp_locals_Adafruit_GPIO$SPI_150_key___init__ = tmp_assign_source_32;
        }
        {
            PyObject *tmp_assign_source_33;
            tmp_assign_source_33 = MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_17_set_clock_hz(  );



            assert( tmp_locals_Adafruit_GPIO$SPI_150_key_set_clock_hz == NULL );
            tmp_locals_Adafruit_GPIO$SPI_150_key_set_clock_hz = tmp_assign_source_33;
        }
        {
            PyObject *tmp_assign_source_34;
            tmp_assign_source_34 = MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_18_set_mode(  );



            assert( tmp_locals_Adafruit_GPIO$SPI_150_key_set_mode == NULL );
            tmp_locals_Adafruit_GPIO$SPI_150_key_set_mode = tmp_assign_source_34;
        }
        {
            PyObject *tmp_assign_source_35;
            tmp_assign_source_35 = MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_19_set_bit_order(  );



            assert( tmp_locals_Adafruit_GPIO$SPI_150_key_set_bit_order == NULL );
            tmp_locals_Adafruit_GPIO$SPI_150_key_set_bit_order = tmp_assign_source_35;
        }
        {
            PyObject *tmp_assign_source_36;
            tmp_assign_source_36 = MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_20_close(  );



            assert( tmp_locals_Adafruit_GPIO$SPI_150_key_close == NULL );
            tmp_locals_Adafruit_GPIO$SPI_150_key_close = tmp_assign_source_36;
        }
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = const_tuple_true_true_tuple;
            Py_INCREF( tmp_defaults_4 );
            tmp_assign_source_37 = MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_21_write( tmp_defaults_4 );



            assert( tmp_locals_Adafruit_GPIO$SPI_150_key_write == NULL );
            tmp_locals_Adafruit_GPIO$SPI_150_key_write = tmp_assign_source_37;
        }
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = const_tuple_true_true_tuple;
            Py_INCREF( tmp_defaults_5 );
            tmp_assign_source_38 = MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_22_read( tmp_defaults_5 );



            assert( tmp_locals_Adafruit_GPIO$SPI_150_key_read == NULL );
            tmp_locals_Adafruit_GPIO$SPI_150_key_read = tmp_assign_source_38;
        }
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = const_tuple_true_true_tuple;
            Py_INCREF( tmp_defaults_6 );
            tmp_assign_source_39 = MAKE_FUNCTION_Adafruit_GPIO$SPI$$$function_23_transfer( tmp_defaults_6 );



            assert( tmp_locals_Adafruit_GPIO$SPI_150_key_transfer == NULL );
            tmp_locals_Adafruit_GPIO$SPI_150_key_transfer = tmp_assign_source_39;
        }
        // Tried code:
        {
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
            tmp_dict_value_19 = const_str_digest_c075fd296c361ae8bea3c0da47584df0;
            tmp_dict_key_19 = const_str_plain___module__;
            tmp_assign_source_31 = _PyDict_NewPresized( 10 );
            tmp_res = PyDict_SetItem( tmp_assign_source_31, tmp_dict_key_19, tmp_dict_value_19 );
            assert( !(tmp_res != 0) );
            tmp_dict_value_20 = const_str_digest_09f0b026d025e5d65b5f6d945dc266ac;
            tmp_dict_key_20 = const_str_plain___doc__;
            tmp_res = PyDict_SetItem( tmp_assign_source_31, tmp_dict_key_20, tmp_dict_value_20 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$SPI_150_key___init__ );
            tmp_dict_value_21 = tmp_locals_Adafruit_GPIO$SPI_150_key___init__;
            tmp_dict_key_21 = const_str_plain___init__;
            tmp_res = PyDict_SetItem( tmp_assign_source_31, tmp_dict_key_21, tmp_dict_value_21 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$SPI_150_key_set_clock_hz );
            tmp_dict_value_22 = tmp_locals_Adafruit_GPIO$SPI_150_key_set_clock_hz;
            tmp_dict_key_22 = const_str_plain_set_clock_hz;
            tmp_res = PyDict_SetItem( tmp_assign_source_31, tmp_dict_key_22, tmp_dict_value_22 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$SPI_150_key_set_mode );
            tmp_dict_value_23 = tmp_locals_Adafruit_GPIO$SPI_150_key_set_mode;
            tmp_dict_key_23 = const_str_plain_set_mode;
            tmp_res = PyDict_SetItem( tmp_assign_source_31, tmp_dict_key_23, tmp_dict_value_23 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$SPI_150_key_set_bit_order );
            tmp_dict_value_24 = tmp_locals_Adafruit_GPIO$SPI_150_key_set_bit_order;
            tmp_dict_key_24 = const_str_plain_set_bit_order;
            tmp_res = PyDict_SetItem( tmp_assign_source_31, tmp_dict_key_24, tmp_dict_value_24 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$SPI_150_key_close );
            tmp_dict_value_25 = tmp_locals_Adafruit_GPIO$SPI_150_key_close;
            tmp_dict_key_25 = const_str_plain_close;
            tmp_res = PyDict_SetItem( tmp_assign_source_31, tmp_dict_key_25, tmp_dict_value_25 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$SPI_150_key_write );
            tmp_dict_value_26 = tmp_locals_Adafruit_GPIO$SPI_150_key_write;
            tmp_dict_key_26 = const_str_plain_write;
            tmp_res = PyDict_SetItem( tmp_assign_source_31, tmp_dict_key_26, tmp_dict_value_26 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$SPI_150_key_read );
            tmp_dict_value_27 = tmp_locals_Adafruit_GPIO$SPI_150_key_read;
            tmp_dict_key_27 = const_str_plain_read;
            tmp_res = PyDict_SetItem( tmp_assign_source_31, tmp_dict_key_27, tmp_dict_value_27 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$SPI_150_key_transfer );
            tmp_dict_value_28 = tmp_locals_Adafruit_GPIO$SPI_150_key_transfer;
            tmp_dict_key_28 = const_str_plain_transfer;
            tmp_res = PyDict_SetItem( tmp_assign_source_31, tmp_dict_key_28, tmp_dict_value_28 );
            assert( !(tmp_res != 0) );
            goto try_return_handler_5;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$SPI_150_key___init__ );
        Py_DECREF( tmp_locals_Adafruit_GPIO$SPI_150_key___init__ );
        tmp_locals_Adafruit_GPIO$SPI_150_key___init__ = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$SPI_150_key_set_clock_hz );
        Py_DECREF( tmp_locals_Adafruit_GPIO$SPI_150_key_set_clock_hz );
        tmp_locals_Adafruit_GPIO$SPI_150_key_set_clock_hz = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$SPI_150_key_set_mode );
        Py_DECREF( tmp_locals_Adafruit_GPIO$SPI_150_key_set_mode );
        tmp_locals_Adafruit_GPIO$SPI_150_key_set_mode = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$SPI_150_key_set_bit_order );
        Py_DECREF( tmp_locals_Adafruit_GPIO$SPI_150_key_set_bit_order );
        tmp_locals_Adafruit_GPIO$SPI_150_key_set_bit_order = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$SPI_150_key_close );
        Py_DECREF( tmp_locals_Adafruit_GPIO$SPI_150_key_close );
        tmp_locals_Adafruit_GPIO$SPI_150_key_close = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$SPI_150_key_write );
        Py_DECREF( tmp_locals_Adafruit_GPIO$SPI_150_key_write );
        tmp_locals_Adafruit_GPIO$SPI_150_key_write = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$SPI_150_key_read );
        Py_DECREF( tmp_locals_Adafruit_GPIO$SPI_150_key_read );
        tmp_locals_Adafruit_GPIO$SPI_150_key_read = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$SPI_150_key_transfer );
        Py_DECREF( tmp_locals_Adafruit_GPIO$SPI_150_key_transfer );
        tmp_locals_Adafruit_GPIO$SPI_150_key_transfer = NULL;

        goto outline_result_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$SPI );
        return MOD_RETURN_VALUE( NULL );
        outline_result_3:;
        assert( tmp_class_creation_3__class_dict == NULL );
        tmp_class_creation_3__class_dict = tmp_assign_source_31;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_40;
        nuitka_bool tmp_condition_result_3;
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


            exception_lineno = 150;

            goto try_except_handler_6;
        }
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
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
        tmp_assign_source_40 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
        if ( tmp_assign_source_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;

            goto try_except_handler_6;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_assign_source_40 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_40 );
        condexpr_end_3:;
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_called_name_3 = tmp_class_creation_3__metaclass;
        tmp_args_element_name_7 = const_str_plain_BitBang;
        tmp_args_element_name_8 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_3__class_dict );
        tmp_args_element_name_9 = tmp_class_creation_3__class_dict;
        frame_b9f7a0b564a408fcab1dffe1494895db->m_frame.f_lineno = 150;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;

            goto try_except_handler_6;
        }
        assert( tmp_class_creation_3__class == NULL );
        tmp_class_creation_3__class = tmp_assign_source_41;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_dict );
    Py_DECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b9f7a0b564a408fcab1dffe1494895db );
#endif
    popFrameStack();

    assertFrameObject( frame_b9f7a0b564a408fcab1dffe1494895db );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b9f7a0b564a408fcab1dffe1494895db );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b9f7a0b564a408fcab1dffe1494895db, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b9f7a0b564a408fcab1dffe1494895db->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b9f7a0b564a408fcab1dffe1494895db, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_42;
        CHECK_OBJECT( tmp_class_creation_3__class );
        tmp_assign_source_42 = tmp_class_creation_3__class;
        UPDATE_STRING_DICT0( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain_BitBang, tmp_assign_source_42 );
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


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$SPI, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_Adafruit_GPIO$SPI );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
