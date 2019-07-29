/* Generated code for Python module 'Adafruit_GPIO.GPIO'
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

/* The "_module_Adafruit_GPIO$GPIO" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Adafruit_GPIO$GPIO;
PyDictObject *moduledict_Adafruit_GPIO$GPIO;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_113df5663eba6cc44581d61f4b216a64;
static PyObject *const_str_plain_MODE_STRONG;
static PyObject *const_str_plain_BCM;
extern PyObject *const_tuple_type_object_tuple;
static PyObject *const_str_plain_MODE_PULLDOWN;
static PyObject *const_str_digest_ce6274aaa409b6940aa2b3bba293fee3;
static PyObject *const_tuple_str_plain_self_str_plain_src_str_plain_bit_str_plain_val_tuple;
static PyObject *const_str_digest_ba3414778baf964f6b59d902ec3b755b;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_pull_up_down;
static PyObject *const_tuple_none_int_neg_1_tuple;
static PyObject *const_str_digest_e56cf319199b44a9c7b5adf68e6632f6;
static PyObject *const_str_plain__validate_pin;
extern PyObject *const_str_plain_output;
static PyObject *const_str_digest_0b80155a8f89e71a13312a78e9495dc9;
static PyObject *const_tuple_str_plain_self_str_plain_pin_str_plain_edge_tuple;
static PyObject *const_str_digest_183d1b74763deed644af481b485ab6cc;
static PyObject *const_str_digest_2916df7f4f2c0f1246a5a88700130961;
extern PyObject *const_str_plain_LOW;
extern PyObject *const_str_digest_49797bf29503761b116e94d134df9c96;
static PyObject *const_str_plain_BaseGPIO;
static PyObject *const_str_plain_DIR_OUT;
extern PyObject *const_str_plain_read;
static PyObject *const_tuple_str_plain_self_str_plain_pin_str_plain_mode_tuple;
static PyObject *const_str_plain_EDGE_FALLING;
static PyObject *const_str_plain_pins;
static PyObject *const_str_digest_dfadbe9ae0c1c944d3bffe911b53bf6e;
static PyObject *const_str_digest_aea68454c38201ca311efebafa467138;
static PyObject *const_tuple_str_plain_self_str_plain_mraa_gpio_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_bbio_gpio_tuple;
static PyObject *const_str_digest_eb413152b9817bb2e0f12fff9d2037d0;
static PyObject *const_str_digest_200b41a84b3d319f2316dcb113f4bbe0;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_val;
static PyObject *const_tuple_str_plain_self_str_plain_rpi_gpio_str_plain_mode_tuple;
static PyObject *const_str_digest_fbf657fa72f4a1bfa38e5d4cea47177e;
extern PyObject *const_str_plain_HIGH;
extern PyObject *const_str_plain_input;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_plat;
static PyObject *const_str_plain_Gpio;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_write;
static PyObject *const_str_plain_output_pins;
extern PyObject *const_int_neg_1;
static PyObject *const_str_digest_6b99443974da1532b1b6cb87869b70f2;
static PyObject *const_str_plain_AdafruitBBIOAdapter;
extern PyObject *const_str_plain_FALLING;
static PyObject *const_tuple_str_plain_self_str_plain_pin_tuple;
extern PyObject *const_str_plain_set_low;
extern PyObject *const_str_plain_IN;
static PyObject *const_tuple_8e9ab1f6b4de183aef8a3caa8462bb00_tuple;
static PyObject *const_str_plain_Platform;
extern PyObject *const_str_plain_dir;
static PyObject *const_tuple_21b6fc018824a78c94adeb710482b825_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_pin_str_plain_value_tuple;
static PyObject *const_str_digest_29e6d94e6d10a0a7295bc861218eb312;
static PyObject *const_str_plain_wait_for_edge;
static PyObject *const_tuple_str_plain_self_str_plain_pins_str_plain_pin_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_setmode;
static PyObject *const_str_digest_0956fd3048c0a48300405fe7075f05b4;
static PyObject *const_str_digest_b0c19b8409f94eca5b0e77959946b86b;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_digest_7515ad4066178aa9c8812587d34965fb;
static PyObject *const_str_digest_7ed94800bdf73a41e4b464bb7da39fe7;
extern PyObject *const_str_plain___module__;
extern PyObject *const_tuple_int_neg_1_tuple;
static PyObject *const_str_digest_35306c8f3ac8788c5db970206a3c0705;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_UNKNOWN;
static PyObject *const_str_plain_cleanup;
static PyObject *const_str_digest_766d599cb7f71be3f24c07eef63244dc;
static PyObject *const_str_plain_EDGE_BOTH;
extern PyObject *const_str_plain_edge;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_plain_BOTH;
static PyObject *const_str_plain_is_low;
extern PyObject *const_str_digest_665d7950d7e2bef00127bfe8f69bc326;
static PyObject *const_str_plain_MODE_HIZ;
static PyObject *const_str_plain__edge_mapping;
extern PyObject *const_str_plain_items;
static PyObject *const_str_digest_ab30fd682a92ac82222dc523d80b4632;
static PyObject *const_tuple_afb4ca9e2e3311e25b1726ccf3d85ac4_tuple;
static PyObject *const_str_digest_6f7f24051f8519b1410c8b713d66e020;
extern PyObject *const_str_plain_get_platform_gpio;
extern PyObject *const_str_plain_set_high;
static PyObject *const_tuple_str_plain_self_str_plain_pin_str_plain_callback_tuple;
extern PyObject *const_str_plain_mraa;
extern PyObject *const_str_plain_RASPBERRY_PI;
static PyObject *const_str_plain_rpi_gpio;
static PyObject *const_str_digest_b7221a85ed184fa8248703a333f0a101;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_str_plain__pud_mapping;
static PyObject *const_str_plain_isr;
static PyObject *const_str_digest_12f63504e09bf07d0cc6a9269846bb87;
static PyObject *const_str_plain_setup_pins;
static PyObject *const_str_digest_30fd58195374785ca35bd0b0d3c917be;
static PyObject *const_tuple_str_plain_self_str_plain_pins_str_plain_value_str_plain_pin_tuple;
static PyObject *const_str_digest_448d719204bd32de6afb28f67b5c8013;
static PyObject *const_str_plain_remove_event_detect;
static PyObject *const_str_digest_288d139b6bc50cb797d009ea84436294;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_66a8643016f56fd86cd0fb180e80f7e8;
static PyObject *const_str_plain__dir_mapping;
static PyObject *const_str_plain_EDGE_RISING;
extern PyObject *const_str_plain_platform_detect;
extern PyObject *const_str_plain_pin;
extern PyObject *const_str_plain_PUD_UP;
extern PyObject *const_str_plain_RPi;
static PyObject *const_str_plain_PUD_DOWN;
static PyObject *const_str_plain__bit2;
extern PyObject *const_str_plain_src;
static PyObject *const_str_plain_NUM_GPIO;
static PyObject *const_str_plain_RPiGPIOAdapter;
static PyObject *const_str_plain_PUD_OFF;
static PyObject *const_str_plain_mraa_gpio;
static PyObject *const_str_plain_RISING;
extern PyObject *const_str_plain_add_event_detect;
static PyObject *const_str_digest_6a255027fbf5bb5c9bb8e3879029704f;
extern PyObject *const_str_plain_OUT;
static PyObject *const_str_plain_BOARD;
extern PyObject *const_str_plain_MINNOWBOARD;
static PyObject *const_str_plain_DIR_IN;
extern PyObject *const_str_plain_BEAGLEBONE_BLACK;
static PyObject *const_str_plain_input_pins;
extern PyObject *const_str_plain_object;
static PyObject *const_str_digest_9dc56bc868ffa7d373ef2d66362238c8;
extern PyObject *const_str_plain_is_high;
extern PyObject *const_str_plain_bouncetime;
static PyObject *const_str_plain_Adafruit_BBIO;
static PyObject *const_str_digest_657424a55757e074a05c8e43cdfae442;
extern PyObject *const_str_plain_keywords;
static PyObject *const_str_plain_add_event_callback;
static PyObject *const_str_plain_bbio_gpio;
extern PyObject *const_str_plain_bit;
extern PyObject *const_str_plain_setwarnings;
static PyObject *const_str_plain_AdafruitMinnowAdapter;
static PyObject *const_str_plain_event_detected;
static PyObject *const_str_digest_dd2d54ef85917c1ce2ae4a1af50d840e;
static PyObject *const_str_digest_18a90e0efffabc9b97bfb0fc8b8f674d;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_setup;
static PyObject *const_str_digest_138c4d93dd3fc67e3d044c6756bdec45;
static PyObject *const_str_digest_ed4c955e7ecb8ebece6bf85a9160b130;
static PyObject *const_str_digest_04d5e5ad42d580feb0680af20b481abe;
static PyObject *const_str_digest_6eb17c0ee325cfe4710746def5c0a93b;
extern PyObject *const_str_plain_callback;
static PyObject *const_str_digest_0b046fc1a18ad8b1121e21e8509230b2;
static PyObject *const_str_digest_d6309f0c933653df91144b078d091324;
extern PyObject *const_str_plain_mode;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_GPIO;
static PyObject *const_tuple_10d38d3ee6b34c8b5efbdb0288f1294a_tuple;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_isrExit;
extern PyObject *const_tuple_false_tuple;
extern PyObject *const_tuple_none_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_113df5663eba6cc44581d61f4b216a64 = UNSTREAM_STRING( &constant_bin[ 138 ], 174, 0 );
    const_str_plain_MODE_STRONG = UNSTREAM_STRING( &constant_bin[ 312 ], 11, 1 );
    const_str_plain_BCM = UNSTREAM_STRING( &constant_bin[ 323 ], 3, 1 );
    const_str_plain_MODE_PULLDOWN = UNSTREAM_STRING( &constant_bin[ 326 ], 13, 1 );
    const_str_digest_ce6274aaa409b6940aa2b3bba293fee3 = UNSTREAM_STRING( &constant_bin[ 339 ], 115, 0 );
    const_tuple_str_plain_self_str_plain_src_str_plain_bit_str_plain_val_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_src_str_plain_bit_str_plain_val_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_src_str_plain_bit_str_plain_val_tuple, 1, const_str_plain_src ); Py_INCREF( const_str_plain_src );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_src_str_plain_bit_str_plain_val_tuple, 2, const_str_plain_bit ); Py_INCREF( const_str_plain_bit );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_src_str_plain_bit_str_plain_val_tuple, 3, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    const_str_digest_ba3414778baf964f6b59d902ec3b755b = UNSTREAM_STRING( &constant_bin[ 454 ], 199, 0 );
    const_tuple_none_int_neg_1_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_none_int_neg_1_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_int_neg_1_tuple, 1, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    const_str_digest_e56cf319199b44a9c7b5adf68e6632f6 = UNSTREAM_STRING( &constant_bin[ 653 ], 170, 0 );
    const_str_plain__validate_pin = UNSTREAM_STRING( &constant_bin[ 823 ], 13, 1 );
    const_str_digest_0b80155a8f89e71a13312a78e9495dc9 = UNSTREAM_STRING( &constant_bin[ 836 ], 140, 0 );
    const_tuple_str_plain_self_str_plain_pin_str_plain_edge_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pin_str_plain_edge_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pin_str_plain_edge_tuple, 1, const_str_plain_pin ); Py_INCREF( const_str_plain_pin );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pin_str_plain_edge_tuple, 2, const_str_plain_edge ); Py_INCREF( const_str_plain_edge );
    const_str_digest_183d1b74763deed644af481b485ab6cc = UNSTREAM_STRING( &constant_bin[ 339 ], 106, 0 );
    const_str_digest_2916df7f4f2c0f1246a5a88700130961 = UNSTREAM_STRING( &constant_bin[ 976 ], 48, 0 );
    const_str_plain_BaseGPIO = UNSTREAM_STRING( &constant_bin[ 1024 ], 8, 1 );
    const_str_plain_DIR_OUT = UNSTREAM_STRING( &constant_bin[ 1032 ], 7, 1 );
    const_tuple_str_plain_self_str_plain_pin_str_plain_mode_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pin_str_plain_mode_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pin_str_plain_mode_tuple, 1, const_str_plain_pin ); Py_INCREF( const_str_plain_pin );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pin_str_plain_mode_tuple, 2, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    const_str_plain_EDGE_FALLING = UNSTREAM_STRING( &constant_bin[ 1039 ], 12, 1 );
    const_str_plain_pins = UNSTREAM_STRING( &constant_bin[ 467 ], 4, 1 );
    const_str_digest_dfadbe9ae0c1c944d3bffe911b53bf6e = UNSTREAM_STRING( &constant_bin[ 1051 ], 252, 0 );
    const_str_digest_aea68454c38201ca311efebafa467138 = UNSTREAM_STRING( &constant_bin[ 1303 ], 60, 0 );
    const_tuple_str_plain_self_str_plain_mraa_gpio_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_mraa_gpio_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_mraa_gpio = UNSTREAM_STRING( &constant_bin[ 1363 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_mraa_gpio_tuple, 1, const_str_plain_mraa_gpio ); Py_INCREF( const_str_plain_mraa_gpio );
    const_tuple_str_plain_self_str_plain_bbio_gpio_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_bbio_gpio_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_bbio_gpio = UNSTREAM_STRING( &constant_bin[ 1372 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_bbio_gpio_tuple, 1, const_str_plain_bbio_gpio ); Py_INCREF( const_str_plain_bbio_gpio );
    const_str_digest_eb413152b9817bb2e0f12fff9d2037d0 = UNSTREAM_STRING( &constant_bin[ 1381 ], 49, 0 );
    const_str_digest_200b41a84b3d319f2316dcb113f4bbe0 = UNSTREAM_STRING( &constant_bin[ 1430 ], 372, 0 );
    const_tuple_str_plain_self_str_plain_rpi_gpio_str_plain_mode_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_rpi_gpio_str_plain_mode_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_rpi_gpio = UNSTREAM_STRING( &constant_bin[ 1802 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_rpi_gpio_str_plain_mode_tuple, 1, const_str_plain_rpi_gpio ); Py_INCREF( const_str_plain_rpi_gpio );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_rpi_gpio_str_plain_mode_tuple, 2, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    const_str_digest_fbf657fa72f4a1bfa38e5d4cea47177e = UNSTREAM_STRING( &constant_bin[ 1810 ], 106, 0 );
    const_str_plain_Gpio = UNSTREAM_STRING( &constant_bin[ 1916 ], 4, 1 );
    const_str_plain_output_pins = UNSTREAM_STRING( &constant_bin[ 1920 ], 11, 1 );
    const_str_digest_6b99443974da1532b1b6cb87869b70f2 = UNSTREAM_STRING( &constant_bin[ 1931 ], 18, 0 );
    const_str_plain_AdafruitBBIOAdapter = UNSTREAM_STRING( &constant_bin[ 1949 ], 19, 1 );
    const_tuple_str_plain_self_str_plain_pin_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pin_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pin_tuple, 1, const_str_plain_pin ); Py_INCREF( const_str_plain_pin );
    const_tuple_8e9ab1f6b4de183aef8a3caa8462bb00_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_8e9ab1f6b4de183aef8a3caa8462bb00_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_8e9ab1f6b4de183aef8a3caa8462bb00_tuple, 1, const_str_plain_pin ); Py_INCREF( const_str_plain_pin );
    PyTuple_SET_ITEM( const_tuple_8e9ab1f6b4de183aef8a3caa8462bb00_tuple, 2, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    PyTuple_SET_ITEM( const_tuple_8e9ab1f6b4de183aef8a3caa8462bb00_tuple, 3, const_str_plain_pull_up_down ); Py_INCREF( const_str_plain_pull_up_down );
    const_str_plain_Platform = UNSTREAM_STRING( &constant_bin[ 1968 ], 8, 1 );
    const_tuple_21b6fc018824a78c94adeb710482b825_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_21b6fc018824a78c94adeb710482b825_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_21b6fc018824a78c94adeb710482b825_tuple, 1, const_str_plain_pin ); Py_INCREF( const_str_plain_pin );
    PyTuple_SET_ITEM( const_tuple_21b6fc018824a78c94adeb710482b825_tuple, 2, const_str_plain_callback ); Py_INCREF( const_str_plain_callback );
    PyTuple_SET_ITEM( const_tuple_21b6fc018824a78c94adeb710482b825_tuple, 3, const_str_plain_bouncetime ); Py_INCREF( const_str_plain_bouncetime );
    PyTuple_SET_ITEM( const_tuple_21b6fc018824a78c94adeb710482b825_tuple, 4, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_tuple_str_plain_self_str_plain_pin_str_plain_value_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pin_str_plain_value_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pin_str_plain_value_tuple, 1, const_str_plain_pin ); Py_INCREF( const_str_plain_pin );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pin_str_plain_value_tuple, 2, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_str_digest_29e6d94e6d10a0a7295bc861218eb312 = UNSTREAM_STRING( &constant_bin[ 1976 ], 108, 0 );
    const_str_plain_wait_for_edge = UNSTREAM_STRING( &constant_bin[ 2084 ], 13, 1 );
    const_tuple_str_plain_self_str_plain_pins_str_plain_pin_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pins_str_plain_pin_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pins_str_plain_pin_tuple, 1, const_str_plain_pins ); Py_INCREF( const_str_plain_pins );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pins_str_plain_pin_tuple, 2, const_str_plain_pin ); Py_INCREF( const_str_plain_pin );
    const_str_plain_setmode = UNSTREAM_STRING( &constant_bin[ 2097 ], 7, 1 );
    const_str_digest_0956fd3048c0a48300405fe7075f05b4 = UNSTREAM_STRING( &constant_bin[ 2104 ], 46, 0 );
    const_str_digest_b0c19b8409f94eca5b0e77959946b86b = UNSTREAM_STRING( &constant_bin[ 2150 ], 128, 0 );
    const_str_digest_7ed94800bdf73a41e4b464bb7da39fe7 = UNSTREAM_STRING( &constant_bin[ 2278 ], 168, 0 );
    const_str_digest_35306c8f3ac8788c5db970206a3c0705 = UNSTREAM_STRING( &constant_bin[ 2446 ], 68, 0 );
    const_str_plain_cleanup = UNSTREAM_STRING( &constant_bin[ 2514 ], 7, 1 );
    const_str_digest_766d599cb7f71be3f24c07eef63244dc = UNSTREAM_STRING( &constant_bin[ 2521 ], 29, 0 );
    const_str_plain_EDGE_BOTH = UNSTREAM_STRING( &constant_bin[ 2550 ], 9, 1 );
    const_str_plain_BOTH = UNSTREAM_STRING( &constant_bin[ 962 ], 4, 1 );
    const_str_plain_is_low = UNSTREAM_STRING( &constant_bin[ 2559 ], 6, 1 );
    const_str_plain_MODE_HIZ = UNSTREAM_STRING( &constant_bin[ 2565 ], 8, 1 );
    const_str_plain__edge_mapping = UNSTREAM_STRING( &constant_bin[ 2573 ], 13, 1 );
    const_str_digest_ab30fd682a92ac82222dc523d80b4632 = UNSTREAM_STRING( &constant_bin[ 2586 ], 68, 0 );
    const_tuple_afb4ca9e2e3311e25b1726ccf3d85ac4_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_afb4ca9e2e3311e25b1726ccf3d85ac4_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_afb4ca9e2e3311e25b1726ccf3d85ac4_tuple, 1, const_str_plain_pin ); Py_INCREF( const_str_plain_pin );
    PyTuple_SET_ITEM( const_tuple_afb4ca9e2e3311e25b1726ccf3d85ac4_tuple, 2, const_str_plain_edge ); Py_INCREF( const_str_plain_edge );
    PyTuple_SET_ITEM( const_tuple_afb4ca9e2e3311e25b1726ccf3d85ac4_tuple, 3, const_str_plain_callback ); Py_INCREF( const_str_plain_callback );
    PyTuple_SET_ITEM( const_tuple_afb4ca9e2e3311e25b1726ccf3d85ac4_tuple, 4, const_str_plain_bouncetime ); Py_INCREF( const_str_plain_bouncetime );
    PyTuple_SET_ITEM( const_tuple_afb4ca9e2e3311e25b1726ccf3d85ac4_tuple, 5, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_digest_6f7f24051f8519b1410c8b713d66e020 = UNSTREAM_STRING( &constant_bin[ 2654 ], 190, 0 );
    const_tuple_str_plain_self_str_plain_pin_str_plain_callback_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pin_str_plain_callback_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pin_str_plain_callback_tuple, 1, const_str_plain_pin ); Py_INCREF( const_str_plain_pin );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pin_str_plain_callback_tuple, 2, const_str_plain_callback ); Py_INCREF( const_str_plain_callback );
    const_str_digest_b7221a85ed184fa8248703a333f0a101 = UNSTREAM_STRING( &constant_bin[ 2844 ], 109, 0 );
    const_str_plain__pud_mapping = UNSTREAM_STRING( &constant_bin[ 2953 ], 12, 1 );
    const_str_plain_isr = UNSTREAM_STRING( &constant_bin[ 2965 ], 3, 1 );
    const_str_digest_12f63504e09bf07d0cc6a9269846bb87 = UNSTREAM_STRING( &constant_bin[ 2968 ], 86, 0 );
    const_str_plain_setup_pins = UNSTREAM_STRING( &constant_bin[ 3054 ], 10, 1 );
    const_str_digest_30fd58195374785ca35bd0b0d3c917be = UNSTREAM_STRING( &constant_bin[ 2150 ], 119, 0 );
    const_tuple_str_plain_self_str_plain_pins_str_plain_value_str_plain_pin_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pins_str_plain_value_str_plain_pin_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pins_str_plain_value_str_plain_pin_tuple, 1, const_str_plain_pins ); Py_INCREF( const_str_plain_pins );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pins_str_plain_value_str_plain_pin_tuple, 2, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pins_str_plain_value_str_plain_pin_tuple, 3, const_str_plain_pin ); Py_INCREF( const_str_plain_pin );
    const_str_digest_448d719204bd32de6afb28f67b5c8013 = UNSTREAM_STRING( &constant_bin[ 3064 ], 98, 0 );
    const_str_plain_remove_event_detect = UNSTREAM_STRING( &constant_bin[ 3162 ], 19, 1 );
    const_str_digest_288d139b6bc50cb797d009ea84436294 = UNSTREAM_STRING( &constant_bin[ 3181 ], 251, 0 );
    const_str_digest_66a8643016f56fd86cd0fb180e80f7e8 = UNSTREAM_STRING( &constant_bin[ 3432 ], 26, 0 );
    const_str_plain__dir_mapping = UNSTREAM_STRING( &constant_bin[ 3458 ], 12, 1 );
    const_str_plain_EDGE_RISING = UNSTREAM_STRING( &constant_bin[ 3470 ], 11, 1 );
    const_str_plain_PUD_DOWN = UNSTREAM_STRING( &constant_bin[ 3481 ], 8, 1 );
    const_str_plain__bit2 = UNSTREAM_STRING( &constant_bin[ 3489 ], 5, 1 );
    const_str_plain_NUM_GPIO = UNSTREAM_STRING( &constant_bin[ 3494 ], 8, 1 );
    const_str_plain_RPiGPIOAdapter = UNSTREAM_STRING( &constant_bin[ 3502 ], 14, 1 );
    const_str_plain_PUD_OFF = UNSTREAM_STRING( &constant_bin[ 3516 ], 7, 1 );
    const_str_plain_RISING = UNSTREAM_STRING( &constant_bin[ 943 ], 6, 1 );
    const_str_digest_6a255027fbf5bb5c9bb8e3879029704f = UNSTREAM_STRING( &constant_bin[ 3523 ], 27, 0 );
    const_str_plain_BOARD = UNSTREAM_STRING( &constant_bin[ 1417 ], 5, 1 );
    const_str_plain_DIR_IN = UNSTREAM_STRING( &constant_bin[ 2057 ], 6, 1 );
    const_str_plain_input_pins = UNSTREAM_STRING( &constant_bin[ 3550 ], 10, 1 );
    const_str_digest_9dc56bc868ffa7d373ef2d66362238c8 = UNSTREAM_STRING( &constant_bin[ 3560 ], 47, 0 );
    const_str_plain_Adafruit_BBIO = UNSTREAM_STRING( &constant_bin[ 1626 ], 13, 1 );
    const_str_digest_657424a55757e074a05c8e43cdfae442 = UNSTREAM_STRING( &constant_bin[ 3607 ], 171, 0 );
    const_str_plain_add_event_callback = UNSTREAM_STRING( &constant_bin[ 3778 ], 18, 1 );
    const_str_plain_AdafruitMinnowAdapter = UNSTREAM_STRING( &constant_bin[ 3796 ], 21, 1 );
    const_str_plain_event_detected = UNSTREAM_STRING( &constant_bin[ 3817 ], 14, 1 );
    const_str_digest_dd2d54ef85917c1ce2ae4a1af50d840e = UNSTREAM_STRING( &constant_bin[ 3831 ], 99, 0 );
    const_str_digest_18a90e0efffabc9b97bfb0fc8b8f674d = UNSTREAM_STRING( &constant_bin[ 3930 ], 90, 0 );
    const_str_digest_138c4d93dd3fc67e3d044c6756bdec45 = UNSTREAM_STRING( &constant_bin[ 4020 ], 91, 0 );
    const_str_digest_ed4c955e7ecb8ebece6bf85a9160b130 = UNSTREAM_STRING( &constant_bin[ 4111 ], 139, 0 );
    const_str_digest_04d5e5ad42d580feb0680af20b481abe = UNSTREAM_STRING( &constant_bin[ 4250 ], 126, 0 );
    const_str_digest_6eb17c0ee325cfe4710746def5c0a93b = UNSTREAM_STRING( &constant_bin[ 4376 ], 93, 0 );
    const_str_digest_0b046fc1a18ad8b1121e21e8509230b2 = UNSTREAM_STRING( &constant_bin[ 4469 ], 99, 0 );
    const_str_digest_d6309f0c933653df91144b078d091324 = UNSTREAM_STRING( &constant_bin[ 4568 ], 27, 0 );
    const_tuple_10d38d3ee6b34c8b5efbdb0288f1294a_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_10d38d3ee6b34c8b5efbdb0288f1294a_tuple, 0, const_str_plain_keywords ); Py_INCREF( const_str_plain_keywords );
    PyTuple_SET_ITEM( const_tuple_10d38d3ee6b34c8b5efbdb0288f1294a_tuple, 1, const_str_plain_RPi ); Py_INCREF( const_str_plain_RPi );
    PyTuple_SET_ITEM( const_tuple_10d38d3ee6b34c8b5efbdb0288f1294a_tuple, 2, const_str_plain_mraa ); Py_INCREF( const_str_plain_mraa );
    PyTuple_SET_ITEM( const_tuple_10d38d3ee6b34c8b5efbdb0288f1294a_tuple, 3, const_str_plain_Adafruit_BBIO ); Py_INCREF( const_str_plain_Adafruit_BBIO );
    PyTuple_SET_ITEM( const_tuple_10d38d3ee6b34c8b5efbdb0288f1294a_tuple, 4, const_str_plain_plat ); Py_INCREF( const_str_plain_plat );
    const_str_plain_isrExit = UNSTREAM_STRING( &constant_bin[ 4595 ], 7, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Adafruit_GPIO$GPIO( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_184e6829715b0b3771096887af652a7b;
static PyCodeObject *codeobj_4e795516d571ef70d886637781051b2f;
static PyCodeObject *codeobj_e89fe4547f8ad6eacfdf20a5811df72f;
static PyCodeObject *codeobj_920e083cf00a4ca9334cd06d62e761ec;
static PyCodeObject *codeobj_41d2ee926f918859dc41ff8b5560d987;
static PyCodeObject *codeobj_2907e91a8a3a38d923f89bb4592f03be;
static PyCodeObject *codeobj_86c77260dd62c1c6b72c1f9c0e346056;
static PyCodeObject *codeobj_c9e4c55d6b49c4a6a64f5a7137ba3245;
static PyCodeObject *codeobj_cdd48fb151971ffd0ff695cd8642d18d;
static PyCodeObject *codeobj_09d774ef3b9c5d5dd50650bd4b67c283;
static PyCodeObject *codeobj_eb58221d606ecf50d37bb3c39c01f13b;
static PyCodeObject *codeobj_e91ecb7e4e3ea0e19afd5eca1ea7e32e;
static PyCodeObject *codeobj_7ffd371efa89c01ac98b2a0467800fdb;
static PyCodeObject *codeobj_28b637ee4abaab5e4538704b4a580be9;
static PyCodeObject *codeobj_2c1a7e65e7bdb39fa939d416722f6fec;
static PyCodeObject *codeobj_238036aa62f8096e13158345cf23ce0c;
static PyCodeObject *codeobj_1fcf203f399affbc2990e0fccd3877e4;
static PyCodeObject *codeobj_425dd2042b0b2769d8a690bb6765ee3e;
static PyCodeObject *codeobj_6fff311c82798a322bafc962745c1898;
static PyCodeObject *codeobj_fc0219a2d3291dbcf799260a92da4e27;
static PyCodeObject *codeobj_c9013c4fd4db903a839b3a99e6450893;
static PyCodeObject *codeobj_111c602ee4a77d5febad84b706a18d4b;
static PyCodeObject *codeobj_c7700a4be0a4502c9502cb2cc6522285;
static PyCodeObject *codeobj_179acf82a8ca17f50f7a809ed6883d7f;
static PyCodeObject *codeobj_d0efe90b516e11bd365c297d57eb8660;
static PyCodeObject *codeobj_43cbb40ac6e6b07f3e3fc425603186a8;
static PyCodeObject *codeobj_eb99542769a517d70ac17dd27949a754;
static PyCodeObject *codeobj_6996b7aed6af7873f28db084db070718;
static PyCodeObject *codeobj_89aaf7fdccf3149d5160c4c5b0b322b8;
static PyCodeObject *codeobj_2025f6f2cb3e7a20aad28d4aa34bde7b;
static PyCodeObject *codeobj_97e5299434f8b28029845a99a6bd65da;
static PyCodeObject *codeobj_a893672a1adbe43a5079bca1e5a26f52;
static PyCodeObject *codeobj_c970828ad0625418f96f48066ef193d2;
static PyCodeObject *codeobj_7cf151e9d78eba26d96743e3164d9fe7;
static PyCodeObject *codeobj_5163ca3646c6d1c40f895c893b983698;
static PyCodeObject *codeobj_45512e46bb1472d6cd78ba275eb4381e;
static PyCodeObject *codeobj_2a241e6e07c14d092adf87cd61a502a0;
static PyCodeObject *codeobj_2b33c697b083ff7a8360ede3e8a442cf;
static PyCodeObject *codeobj_27d739d0c6f2c9d84fef80b185ae7b6f;
static PyCodeObject *codeobj_acc1230906b1a5d3f466c6931ad275d4;
static PyCodeObject *codeobj_02e40b1ccb74e7c97769e2af4b609735;
static PyCodeObject *codeobj_5ca534f63d8570168b2ffa712e66e92c;
static PyCodeObject *codeobj_5287d51b1f7148d3a913dd995c66875a;
static PyCodeObject *codeobj_2183439eedca5a5b4bee128e897ee187;
static PyCodeObject *codeobj_d26b5bdaca42810aadb65760bff26b88;
static PyCodeObject *codeobj_c50608961db699aacda65761a4e0b635;
static PyCodeObject *codeobj_29fadeda87e7af67a7bb3b8d36f5817d;
static PyCodeObject *codeobj_d8ffa8837ff680b8c5814b6e732e3dec;
static PyCodeObject *codeobj_867202d8d8231adf78b747f8730479ea;
static PyCodeObject *codeobj_2402ec2b4f4acc992e70ebbe2c45dff7;
static PyCodeObject *codeobj_a30eca6b51f46cd71a9f07469f24ca0e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_aea68454c38201ca311efebafa467138;
    codeobj_184e6829715b0b3771096887af652a7b = MAKE_CODEOBJ( module_filename_obj, const_str_digest_d6309f0c933653df91144b078d091324, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_4e795516d571ef70d886637781051b2f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_AdafruitBBIOAdapter, 256, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_e89fe4547f8ad6eacfdf20a5811df72f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_RPiGPIOAdapter, 158, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_920e083cf00a4ca9334cd06d62e761ec = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 161, const_tuple_str_plain_self_str_plain_rpi_gpio_str_plain_mode_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_41d2ee926f918859dc41ff8b5560d987 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 261, const_tuple_str_plain_self_str_plain_bbio_gpio_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2907e91a8a3a38d923f89bb4592f03be = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 353, const_tuple_str_plain_self_str_plain_mraa_gpio_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_86c77260dd62c1c6b72c1f9c0e346056 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__bit2, 153, const_tuple_str_plain_self_str_plain_src_str_plain_bit_str_plain_val_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c9e4c55d6b49c4a6a64f5a7137ba3245 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__validate_pin, 148, const_tuple_str_plain_self_str_plain_pin_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cdd48fb151971ffd0ff695cd8642d18d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_event_callback, 121, const_tuple_str_plain_self_str_plain_pin_str_plain_callback_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_09d774ef3b9c5d5dd50650bd4b67c283 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_event_callback, 228, const_tuple_str_plain_self_str_plain_pin_str_plain_callback_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_eb58221d606ecf50d37bb3c39c01f13b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_event_callback, 318, const_tuple_21b6fc018824a78c94adeb710482b825_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e91ecb7e4e3ea0e19afd5eca1ea7e32e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_event_detect, 109, const_tuple_str_plain_self_str_plain_pin_str_plain_edge_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7ffd371efa89c01ac98b2a0467800fdb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_event_detect, 209, const_tuple_afb4ca9e2e3311e25b1726ccf3d85ac4_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_28b637ee4abaab5e4538704b4a580be9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_event_detect, 299, const_tuple_afb4ca9e2e3311e25b1726ccf3d85ac4_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2c1a7e65e7bdb39fa939d416722f6fec = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_event_detect, 383, const_tuple_afb4ca9e2e3311e25b1726ccf3d85ac4_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_238036aa62f8096e13158345cf23ce0c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cleanup, 139, const_tuple_str_plain_self_str_plain_pin_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1fcf203f399affbc2990e0fccd3877e4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cleanup, 247, const_tuple_str_plain_self_str_plain_pin_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_425dd2042b0b2769d8a690bb6765ee3e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cleanup, 341, const_tuple_str_plain_self_str_plain_pin_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6fff311c82798a322bafc962745c1898 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_event_detected, 127, const_tuple_str_plain_self_str_plain_pin_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fc0219a2d3291dbcf799260a92da4e27 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_event_detected, 234, const_tuple_str_plain_self_str_plain_pin_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c9013c4fd4db903a839b3a99e6450893 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_event_detected, 328, const_tuple_str_plain_self_str_plain_pin_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_111c602ee4a77d5febad84b706a18d4b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_platform_gpio, 408, const_tuple_10d38d3ee6b34c8b5efbdb0288f1294a_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_c7700a4be0a4502c9502cb2cc6522285 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_input, 53, const_tuple_str_plain_self_str_plain_pin_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_179acf82a8ca17f50f7a809ed6883d7f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_input, 196, const_tuple_str_plain_self_str_plain_pin_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d0efe90b516e11bd365c297d57eb8660 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_input, 286, const_tuple_str_plain_self_str_plain_pin_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_43cbb40ac6e6b07f3e3fc425603186a8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_input, 377, const_tuple_str_plain_self_str_plain_pin_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_eb99542769a517d70ac17dd27949a754 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_input_pins, 101, const_tuple_str_plain_self_str_plain_pins_str_plain_pin_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6996b7aed6af7873f28db084db070718 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_input_pins, 202, const_tuple_str_plain_self_str_plain_pins_str_plain_pin_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_89aaf7fdccf3149d5160c4c5b0b322b8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_input_pins, 292, const_tuple_str_plain_self_str_plain_pins_str_plain_pin_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2025f6f2cb3e7a20aad28d4aa34bde7b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_high, 66, const_tuple_str_plain_self_str_plain_pin_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_97e5299434f8b28029845a99a6bd65da = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_low, 70, const_tuple_str_plain_self_str_plain_pin_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a893672a1adbe43a5079bca1e5a26f52 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_output, 48, const_tuple_str_plain_self_str_plain_pin_str_plain_value_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c970828ad0625418f96f48066ef193d2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_output, 190, const_tuple_str_plain_self_str_plain_pin_str_plain_value_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7cf151e9d78eba26d96743e3164d9fe7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_output, 280, const_tuple_str_plain_self_str_plain_pin_str_plain_value_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5163ca3646c6d1c40f895c893b983698 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_output, 371, const_tuple_str_plain_self_str_plain_pin_str_plain_value_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_45512e46bb1472d6cd78ba275eb4381e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_output_pins, 81, const_tuple_str_plain_self_str_plain_pins_str_plain_value_str_plain_pin_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2a241e6e07c14d092adf87cd61a502a0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_remove_event_detect, 115, const_tuple_str_plain_self_str_plain_pin_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2b33c697b083ff7a8360ede3e8a442cf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_remove_event_detect, 222, const_tuple_str_plain_self_str_plain_pin_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_27d739d0c6f2c9d84fef80b185ae7b6f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_remove_event_detect, 312, const_tuple_str_plain_self_str_plain_pin_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_acc1230906b1a5d3f466c6931ad275d4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_remove_event_detect, 396, const_tuple_str_plain_self_str_plain_pin_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_02e40b1ccb74e7c97769e2af4b609735 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_high, 58, const_tuple_str_plain_self_str_plain_pin_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5ca534f63d8570168b2ffa712e66e92c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_low, 62, const_tuple_str_plain_self_str_plain_pin_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5287d51b1f7148d3a913dd995c66875a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_setup, 43, const_tuple_8e9ab1f6b4de183aef8a3caa8462bb00_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2183439eedca5a5b4bee128e897ee187 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_setup, 183, const_tuple_8e9ab1f6b4de183aef8a3caa8462bb00_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d26b5bdaca42810aadb65760bff26b88 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_setup, 273, const_tuple_8e9ab1f6b4de183aef8a3caa8462bb00_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c50608961db699aacda65761a4e0b635 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_setup, 365, const_tuple_str_plain_self_str_plain_pin_str_plain_mode_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_29fadeda87e7af67a7bb3b8d36f5817d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_setup_pins, 93, const_tuple_str_plain_self_str_plain_pins_str_plain_value_str_plain_pin_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d8ffa8837ff680b8c5814b6e732e3dec = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wait_for_edge, 134, const_tuple_str_plain_self_str_plain_pin_str_plain_edge_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_867202d8d8231adf78b747f8730479ea = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wait_for_edge, 241, const_tuple_str_plain_self_str_plain_pin_str_plain_edge_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2402ec2b4f4acc992e70ebbe2c45dff7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wait_for_edge, 335, const_tuple_str_plain_self_str_plain_pin_str_plain_edge_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a30eca6b51f46cd71a9f07469f24ca0e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wait_for_edge, 402, const_tuple_str_plain_self_str_plain_pin_str_plain_edge_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_pos_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_10_input_pins(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_11_add_event_detect(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_12_remove_event_detect(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_13_add_event_callback(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_14_event_detected(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_15_wait_for_edge(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_16_cleanup( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_17__validate_pin(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_18__bit2(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_19___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_1_setup( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_20_setup( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_21_output(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_22_input(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_23_input_pins(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_24_add_event_detect( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_25_remove_event_detect(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_26_add_event_callback(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_27_event_detected(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_28_wait_for_edge(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_29_cleanup( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_2_output(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_30___init__(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_31_setup( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_32_output(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_33_input(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_34_input_pins(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_35_add_event_detect( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_36_remove_event_detect(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_37_add_event_callback( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_38_event_detected(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_39_wait_for_edge(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_3_input(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_40_cleanup( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_41___init__(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_42_setup(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_43_output(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_44_input(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_45_add_event_detect( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_46_remove_event_detect(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_47_wait_for_edge(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_48_get_platform_gpio(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_4_set_high(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_5_set_low(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_6_is_high(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_7_is_low(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_8_output_pins(  );


static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_9_setup_pins(  );


// The module function definitions.
static PyObject *impl_Adafruit_GPIO$GPIO$$$function_1_setup( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    PyObject *par_mode = python_pars[ 2 ];
    PyObject *par_pull_up_down = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_5287d51b1f7148d3a913dd995c66875a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5287d51b1f7148d3a913dd995c66875a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5287d51b1f7148d3a913dd995c66875a, codeobj_5287d51b1f7148d3a913dd995c66875a, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5287d51b1f7148d3a913dd995c66875a = cache_frame_5287d51b1f7148d3a913dd995c66875a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5287d51b1f7148d3a913dd995c66875a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5287d51b1f7148d3a913dd995c66875a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF( tmp_raise_type_1 );
        exception_lineno = 46;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5287d51b1f7148d3a913dd995c66875a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5287d51b1f7148d3a913dd995c66875a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5287d51b1f7148d3a913dd995c66875a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5287d51b1f7148d3a913dd995c66875a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5287d51b1f7148d3a913dd995c66875a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5287d51b1f7148d3a913dd995c66875a,
        type_description_1,
        par_self,
        par_pin,
        par_mode,
        par_pull_up_down
    );


    // Release cached frame.
    if ( frame_5287d51b1f7148d3a913dd995c66875a == cache_frame_5287d51b1f7148d3a913dd995c66875a )
    {
        Py_DECREF( frame_5287d51b1f7148d3a913dd995c66875a );
    }
    cache_frame_5287d51b1f7148d3a913dd995c66875a = NULL;

    assertFrameObject( frame_5287d51b1f7148d3a913dd995c66875a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_1_setup );
    return NULL;
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

    CHECK_OBJECT( (PyObject *)par_pull_up_down );
    Py_DECREF( par_pull_up_down );
    par_pull_up_down = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_1_setup );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_2_output( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    PyObject *par_value = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_a893672a1adbe43a5079bca1e5a26f52;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a893672a1adbe43a5079bca1e5a26f52 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a893672a1adbe43a5079bca1e5a26f52, codeobj_a893672a1adbe43a5079bca1e5a26f52, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a893672a1adbe43a5079bca1e5a26f52 = cache_frame_a893672a1adbe43a5079bca1e5a26f52;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a893672a1adbe43a5079bca1e5a26f52 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a893672a1adbe43a5079bca1e5a26f52 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF( tmp_raise_type_1 );
        exception_lineno = 51;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a893672a1adbe43a5079bca1e5a26f52 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a893672a1adbe43a5079bca1e5a26f52 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a893672a1adbe43a5079bca1e5a26f52, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a893672a1adbe43a5079bca1e5a26f52->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a893672a1adbe43a5079bca1e5a26f52, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a893672a1adbe43a5079bca1e5a26f52,
        type_description_1,
        par_self,
        par_pin,
        par_value
    );


    // Release cached frame.
    if ( frame_a893672a1adbe43a5079bca1e5a26f52 == cache_frame_a893672a1adbe43a5079bca1e5a26f52 )
    {
        Py_DECREF( frame_a893672a1adbe43a5079bca1e5a26f52 );
    }
    cache_frame_a893672a1adbe43a5079bca1e5a26f52 = NULL;

    assertFrameObject( frame_a893672a1adbe43a5079bca1e5a26f52 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_2_output );
    return NULL;
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

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_2_output );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_3_input( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_c7700a4be0a4502c9502cb2cc6522285;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c7700a4be0a4502c9502cb2cc6522285 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c7700a4be0a4502c9502cb2cc6522285, codeobj_c7700a4be0a4502c9502cb2cc6522285, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *) );
    frame_c7700a4be0a4502c9502cb2cc6522285 = cache_frame_c7700a4be0a4502c9502cb2cc6522285;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c7700a4be0a4502c9502cb2cc6522285 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c7700a4be0a4502c9502cb2cc6522285 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF( tmp_raise_type_1 );
        exception_lineno = 56;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c7700a4be0a4502c9502cb2cc6522285 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c7700a4be0a4502c9502cb2cc6522285 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c7700a4be0a4502c9502cb2cc6522285, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c7700a4be0a4502c9502cb2cc6522285->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c7700a4be0a4502c9502cb2cc6522285, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c7700a4be0a4502c9502cb2cc6522285,
        type_description_1,
        par_self,
        par_pin
    );


    // Release cached frame.
    if ( frame_c7700a4be0a4502c9502cb2cc6522285 == cache_frame_c7700a4be0a4502c9502cb2cc6522285 )
    {
        Py_DECREF( frame_c7700a4be0a4502c9502cb2cc6522285 );
    }
    cache_frame_c7700a4be0a4502c9502cb2cc6522285 = NULL;

    assertFrameObject( frame_c7700a4be0a4502c9502cb2cc6522285 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_3_input );
    return NULL;
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

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_3_input );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_4_set_high( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_02e40b1ccb74e7c97769e2af4b609735;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_02e40b1ccb74e7c97769e2af4b609735 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_02e40b1ccb74e7c97769e2af4b609735, codeobj_02e40b1ccb74e7c97769e2af4b609735, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *) );
    frame_02e40b1ccb74e7c97769e2af4b609735 = cache_frame_02e40b1ccb74e7c97769e2af4b609735;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_02e40b1ccb74e7c97769e2af4b609735 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_02e40b1ccb74e7c97769e2af4b609735 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_output );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pin );
        tmp_args_element_name_1 = par_pin;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_HIGH );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HIGH );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "HIGH" );
            exception_tb = NULL;

            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_1;
        frame_02e40b1ccb74e7c97769e2af4b609735->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_02e40b1ccb74e7c97769e2af4b609735 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_02e40b1ccb74e7c97769e2af4b609735 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_02e40b1ccb74e7c97769e2af4b609735, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_02e40b1ccb74e7c97769e2af4b609735->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_02e40b1ccb74e7c97769e2af4b609735, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_02e40b1ccb74e7c97769e2af4b609735,
        type_description_1,
        par_self,
        par_pin
    );


    // Release cached frame.
    if ( frame_02e40b1ccb74e7c97769e2af4b609735 == cache_frame_02e40b1ccb74e7c97769e2af4b609735 )
    {
        Py_DECREF( frame_02e40b1ccb74e7c97769e2af4b609735 );
    }
    cache_frame_02e40b1ccb74e7c97769e2af4b609735 = NULL;

    assertFrameObject( frame_02e40b1ccb74e7c97769e2af4b609735 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_4_set_high );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_4_set_high );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_5_set_low( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_5ca534f63d8570168b2ffa712e66e92c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5ca534f63d8570168b2ffa712e66e92c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5ca534f63d8570168b2ffa712e66e92c, codeobj_5ca534f63d8570168b2ffa712e66e92c, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *) );
    frame_5ca534f63d8570168b2ffa712e66e92c = cache_frame_5ca534f63d8570168b2ffa712e66e92c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5ca534f63d8570168b2ffa712e66e92c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5ca534f63d8570168b2ffa712e66e92c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_output );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pin );
        tmp_args_element_name_1 = par_pin;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_LOW );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LOW );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "LOW" );
            exception_tb = NULL;

            exception_lineno = 64;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_1;
        frame_5ca534f63d8570168b2ffa712e66e92c->m_frame.f_lineno = 64;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5ca534f63d8570168b2ffa712e66e92c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5ca534f63d8570168b2ffa712e66e92c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5ca534f63d8570168b2ffa712e66e92c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5ca534f63d8570168b2ffa712e66e92c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5ca534f63d8570168b2ffa712e66e92c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5ca534f63d8570168b2ffa712e66e92c,
        type_description_1,
        par_self,
        par_pin
    );


    // Release cached frame.
    if ( frame_5ca534f63d8570168b2ffa712e66e92c == cache_frame_5ca534f63d8570168b2ffa712e66e92c )
    {
        Py_DECREF( frame_5ca534f63d8570168b2ffa712e66e92c );
    }
    cache_frame_5ca534f63d8570168b2ffa712e66e92c = NULL;

    assertFrameObject( frame_5ca534f63d8570168b2ffa712e66e92c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_5_set_low );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_5_set_low );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_6_is_high( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_2025f6f2cb3e7a20aad28d4aa34bde7b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2025f6f2cb3e7a20aad28d4aa34bde7b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2025f6f2cb3e7a20aad28d4aa34bde7b, codeobj_2025f6f2cb3e7a20aad28d4aa34bde7b, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *) );
    frame_2025f6f2cb3e7a20aad28d4aa34bde7b = cache_frame_2025f6f2cb3e7a20aad28d4aa34bde7b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2025f6f2cb3e7a20aad28d4aa34bde7b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2025f6f2cb3e7a20aad28d4aa34bde7b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_pin );
        tmp_args_element_name_1 = par_pin;
        frame_2025f6f2cb3e7a20aad28d4aa34bde7b->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_compexpr_left_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_input, call_args );
        }

        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_HIGH );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HIGH );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "HIGH" );
            exception_tb = NULL;

            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2025f6f2cb3e7a20aad28d4aa34bde7b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2025f6f2cb3e7a20aad28d4aa34bde7b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2025f6f2cb3e7a20aad28d4aa34bde7b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2025f6f2cb3e7a20aad28d4aa34bde7b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2025f6f2cb3e7a20aad28d4aa34bde7b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2025f6f2cb3e7a20aad28d4aa34bde7b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2025f6f2cb3e7a20aad28d4aa34bde7b,
        type_description_1,
        par_self,
        par_pin
    );


    // Release cached frame.
    if ( frame_2025f6f2cb3e7a20aad28d4aa34bde7b == cache_frame_2025f6f2cb3e7a20aad28d4aa34bde7b )
    {
        Py_DECREF( frame_2025f6f2cb3e7a20aad28d4aa34bde7b );
    }
    cache_frame_2025f6f2cb3e7a20aad28d4aa34bde7b = NULL;

    assertFrameObject( frame_2025f6f2cb3e7a20aad28d4aa34bde7b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_6_is_high );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_6_is_high );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_7_is_low( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_97e5299434f8b28029845a99a6bd65da;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_97e5299434f8b28029845a99a6bd65da = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_97e5299434f8b28029845a99a6bd65da, codeobj_97e5299434f8b28029845a99a6bd65da, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *) );
    frame_97e5299434f8b28029845a99a6bd65da = cache_frame_97e5299434f8b28029845a99a6bd65da;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_97e5299434f8b28029845a99a6bd65da );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_97e5299434f8b28029845a99a6bd65da ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_pin );
        tmp_args_element_name_1 = par_pin;
        frame_97e5299434f8b28029845a99a6bd65da->m_frame.f_lineno = 72;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_compexpr_left_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_input, call_args );
        }

        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_LOW );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LOW );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "LOW" );
            exception_tb = NULL;

            exception_lineno = 72;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_97e5299434f8b28029845a99a6bd65da );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_97e5299434f8b28029845a99a6bd65da );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_97e5299434f8b28029845a99a6bd65da );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_97e5299434f8b28029845a99a6bd65da, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_97e5299434f8b28029845a99a6bd65da->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_97e5299434f8b28029845a99a6bd65da, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_97e5299434f8b28029845a99a6bd65da,
        type_description_1,
        par_self,
        par_pin
    );


    // Release cached frame.
    if ( frame_97e5299434f8b28029845a99a6bd65da == cache_frame_97e5299434f8b28029845a99a6bd65da )
    {
        Py_DECREF( frame_97e5299434f8b28029845a99a6bd65da );
    }
    cache_frame_97e5299434f8b28029845a99a6bd65da = NULL;

    assertFrameObject( frame_97e5299434f8b28029845a99a6bd65da );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_7_is_low );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_7_is_low );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_8_output_pins( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pins = python_pars[ 1 ];
    PyObject *var_value = NULL;
    PyObject *var_pin = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_45512e46bb1472d6cd78ba275eb4381e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
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
    static struct Nuitka_FrameObject *cache_frame_45512e46bb1472d6cd78ba275eb4381e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_45512e46bb1472d6cd78ba275eb4381e, codeobj_45512e46bb1472d6cd78ba275eb4381e, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_45512e46bb1472d6cd78ba275eb4381e = cache_frame_45512e46bb1472d6cd78ba275eb4381e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_45512e46bb1472d6cd78ba275eb4381e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_45512e46bb1472d6cd78ba275eb4381e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_pins );
        tmp_called_instance_1 = par_pins;
        frame_45512e46bb1472d6cd78ba275eb4381e->m_frame.f_lineno = 90;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_items );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "oooo";
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
                type_description_1 = "oooo";
                exception_lineno = 90;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0 );
        if ( tmp_assign_source_4 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oooo";
            exception_lineno = 90;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1 );
        if ( tmp_assign_source_5 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oooo";
            exception_lineno = 90;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( tmp_iterator_attempt == NULL ))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if ( error != NULL )
            {
                if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                {
                    CLEAR_ERROR_OCCURRED();
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "oooo";
                    exception_lineno = 90;
                    goto try_except_handler_4;
                }
            }
        }
        else
        {
            Py_DECREF( tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooo";
            exception_lineno = 90;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_pin;
            var_pin = tmp_assign_source_6;
            Py_INCREF( var_pin );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_value;
            var_value = tmp_assign_source_7;
            Py_INCREF( var_value );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT( var_pin );
        tmp_args_element_name_1 = var_pin;
        CHECK_OBJECT( var_value );
        tmp_args_element_name_2 = var_value;
        frame_45512e46bb1472d6cd78ba275eb4381e->m_frame.f_lineno = 91;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_output, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_45512e46bb1472d6cd78ba275eb4381e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_45512e46bb1472d6cd78ba275eb4381e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_45512e46bb1472d6cd78ba275eb4381e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_45512e46bb1472d6cd78ba275eb4381e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_45512e46bb1472d6cd78ba275eb4381e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_45512e46bb1472d6cd78ba275eb4381e,
        type_description_1,
        par_self,
        par_pins,
        var_value,
        var_pin
    );


    // Release cached frame.
    if ( frame_45512e46bb1472d6cd78ba275eb4381e == cache_frame_45512e46bb1472d6cd78ba275eb4381e )
    {
        Py_DECREF( frame_45512e46bb1472d6cd78ba275eb4381e );
    }
    cache_frame_45512e46bb1472d6cd78ba275eb4381e = NULL;

    assertFrameObject( frame_45512e46bb1472d6cd78ba275eb4381e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_8_output_pins );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_pins );
    Py_DECREF( par_pins );
    par_pins = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_pin );
    var_pin = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_pins );
    Py_DECREF( par_pins );
    par_pins = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_pin );
    var_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_8_output_pins );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_9_setup_pins( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pins = python_pars[ 1 ];
    PyObject *var_value = NULL;
    PyObject *var_pin = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_29fadeda87e7af67a7bb3b8d36f5817d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
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
    static struct Nuitka_FrameObject *cache_frame_29fadeda87e7af67a7bb3b8d36f5817d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_29fadeda87e7af67a7bb3b8d36f5817d, codeobj_29fadeda87e7af67a7bb3b8d36f5817d, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_29fadeda87e7af67a7bb3b8d36f5817d = cache_frame_29fadeda87e7af67a7bb3b8d36f5817d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_29fadeda87e7af67a7bb3b8d36f5817d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_29fadeda87e7af67a7bb3b8d36f5817d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_pins );
        tmp_called_instance_1 = par_pins;
        frame_29fadeda87e7af67a7bb3b8d36f5817d->m_frame.f_lineno = 98;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_items );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "oooo";
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
                type_description_1 = "oooo";
                exception_lineno = 98;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0 );
        if ( tmp_assign_source_4 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oooo";
            exception_lineno = 98;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1 );
        if ( tmp_assign_source_5 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oooo";
            exception_lineno = 98;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( tmp_iterator_attempt == NULL ))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if ( error != NULL )
            {
                if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                {
                    CLEAR_ERROR_OCCURRED();
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "oooo";
                    exception_lineno = 98;
                    goto try_except_handler_4;
                }
            }
        }
        else
        {
            Py_DECREF( tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooo";
            exception_lineno = 98;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_pin;
            var_pin = tmp_assign_source_6;
            Py_INCREF( var_pin );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_value;
            var_value = tmp_assign_source_7;
            Py_INCREF( var_value );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT( var_pin );
        tmp_args_element_name_1 = var_pin;
        CHECK_OBJECT( var_value );
        tmp_args_element_name_2 = var_value;
        frame_29fadeda87e7af67a7bb3b8d36f5817d->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_setup, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_29fadeda87e7af67a7bb3b8d36f5817d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_29fadeda87e7af67a7bb3b8d36f5817d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_29fadeda87e7af67a7bb3b8d36f5817d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_29fadeda87e7af67a7bb3b8d36f5817d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_29fadeda87e7af67a7bb3b8d36f5817d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_29fadeda87e7af67a7bb3b8d36f5817d,
        type_description_1,
        par_self,
        par_pins,
        var_value,
        var_pin
    );


    // Release cached frame.
    if ( frame_29fadeda87e7af67a7bb3b8d36f5817d == cache_frame_29fadeda87e7af67a7bb3b8d36f5817d )
    {
        Py_DECREF( frame_29fadeda87e7af67a7bb3b8d36f5817d );
    }
    cache_frame_29fadeda87e7af67a7bb3b8d36f5817d = NULL;

    assertFrameObject( frame_29fadeda87e7af67a7bb3b8d36f5817d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_9_setup_pins );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_pins );
    Py_DECREF( par_pins );
    par_pins = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_pin );
    var_pin = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_pins );
    Py_DECREF( par_pins );
    par_pins = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_pin );
    var_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_9_setup_pins );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_10_input_pins( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pins = python_pars[ 1 ];
    PyObject *var_pin = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_eb99542769a517d70ac17dd27949a754;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_eb99542769a517d70ac17dd27949a754 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_eb99542769a517d70ac17dd27949a754, codeobj_eb99542769a517d70ac17dd27949a754, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_eb99542769a517d70ac17dd27949a754 = cache_frame_eb99542769a517d70ac17dd27949a754;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_eb99542769a517d70ac17dd27949a754 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_eb99542769a517d70ac17dd27949a754 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_pins );
        tmp_iter_arg_1 = par_pins;
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 106;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert( tmp_list_contraction_1__$0 == NULL );
        tmp_list_contraction_1__$0 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyList_New( 0 );
        assert( tmp_list_contraction_1__contraction_result == NULL );
        tmp_list_contraction_1__contraction_result = tmp_assign_source_2;
    }
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_list_contraction_1__$0 );
        tmp_next_source_1 = tmp_list_contraction_1__$0;
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
                type_description_1 = "ooo";
                exception_lineno = 106;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_list_contraction_1__iter_value_0;
            tmp_list_contraction_1__iter_value_0 = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_list_contraction_1__iter_value_0 );
        tmp_assign_source_4 = tmp_list_contraction_1__iter_value_0;
        {
            PyObject *old = var_pin;
            var_pin = tmp_assign_source_4;
            Py_INCREF( var_pin );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
        tmp_append_list_1 = tmp_list_contraction_1__contraction_result;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( var_pin );
        tmp_args_element_name_1 = var_pin;
        frame_eb99542769a517d70ac17dd27949a754->m_frame.f_lineno = 106;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_append_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_input, call_args );
        }

        if ( tmp_append_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 106;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert( PyList_Check( tmp_append_list_1 ) );
        tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
        Py_DECREF( tmp_append_value_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 106;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
    tmp_return_value = tmp_list_contraction_1__contraction_result;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_10_input_pins );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__$0 );
    Py_DECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__contraction_result );
    Py_DECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

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

    Py_XDECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    Py_XDECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_10_input_pins );
    return NULL;
    outline_result_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb99542769a517d70ac17dd27949a754 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb99542769a517d70ac17dd27949a754 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb99542769a517d70ac17dd27949a754 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_eb99542769a517d70ac17dd27949a754, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_eb99542769a517d70ac17dd27949a754->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_eb99542769a517d70ac17dd27949a754, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_eb99542769a517d70ac17dd27949a754,
        type_description_1,
        par_self,
        par_pins,
        var_pin
    );


    // Release cached frame.
    if ( frame_eb99542769a517d70ac17dd27949a754 == cache_frame_eb99542769a517d70ac17dd27949a754 )
    {
        Py_DECREF( frame_eb99542769a517d70ac17dd27949a754 );
    }
    cache_frame_eb99542769a517d70ac17dd27949a754 = NULL;

    assertFrameObject( frame_eb99542769a517d70ac17dd27949a754 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_10_input_pins );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_pins );
    Py_DECREF( par_pins );
    par_pins = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_pin );
    var_pin = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pins );
    Py_DECREF( par_pins );
    par_pins = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_pin );
    var_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_10_input_pins );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_11_add_event_detect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    PyObject *par_edge = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_e91ecb7e4e3ea0e19afd5eca1ea7e32e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e91ecb7e4e3ea0e19afd5eca1ea7e32e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e91ecb7e4e3ea0e19afd5eca1ea7e32e, codeobj_e91ecb7e4e3ea0e19afd5eca1ea7e32e, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e91ecb7e4e3ea0e19afd5eca1ea7e32e = cache_frame_e91ecb7e4e3ea0e19afd5eca1ea7e32e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e91ecb7e4e3ea0e19afd5eca1ea7e32e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e91ecb7e4e3ea0e19afd5eca1ea7e32e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF( tmp_raise_type_1 );
        exception_lineno = 113;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e91ecb7e4e3ea0e19afd5eca1ea7e32e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e91ecb7e4e3ea0e19afd5eca1ea7e32e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e91ecb7e4e3ea0e19afd5eca1ea7e32e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e91ecb7e4e3ea0e19afd5eca1ea7e32e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e91ecb7e4e3ea0e19afd5eca1ea7e32e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e91ecb7e4e3ea0e19afd5eca1ea7e32e,
        type_description_1,
        par_self,
        par_pin,
        par_edge
    );


    // Release cached frame.
    if ( frame_e91ecb7e4e3ea0e19afd5eca1ea7e32e == cache_frame_e91ecb7e4e3ea0e19afd5eca1ea7e32e )
    {
        Py_DECREF( frame_e91ecb7e4e3ea0e19afd5eca1ea7e32e );
    }
    cache_frame_e91ecb7e4e3ea0e19afd5eca1ea7e32e = NULL;

    assertFrameObject( frame_e91ecb7e4e3ea0e19afd5eca1ea7e32e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_11_add_event_detect );
    return NULL;
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

    CHECK_OBJECT( (PyObject *)par_edge );
    Py_DECREF( par_edge );
    par_edge = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_11_add_event_detect );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_12_remove_event_detect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_2a241e6e07c14d092adf87cd61a502a0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2a241e6e07c14d092adf87cd61a502a0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2a241e6e07c14d092adf87cd61a502a0, codeobj_2a241e6e07c14d092adf87cd61a502a0, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *) );
    frame_2a241e6e07c14d092adf87cd61a502a0 = cache_frame_2a241e6e07c14d092adf87cd61a502a0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2a241e6e07c14d092adf87cd61a502a0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2a241e6e07c14d092adf87cd61a502a0 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF( tmp_raise_type_1 );
        exception_lineno = 119;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2a241e6e07c14d092adf87cd61a502a0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2a241e6e07c14d092adf87cd61a502a0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2a241e6e07c14d092adf87cd61a502a0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2a241e6e07c14d092adf87cd61a502a0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2a241e6e07c14d092adf87cd61a502a0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2a241e6e07c14d092adf87cd61a502a0,
        type_description_1,
        par_self,
        par_pin
    );


    // Release cached frame.
    if ( frame_2a241e6e07c14d092adf87cd61a502a0 == cache_frame_2a241e6e07c14d092adf87cd61a502a0 )
    {
        Py_DECREF( frame_2a241e6e07c14d092adf87cd61a502a0 );
    }
    cache_frame_2a241e6e07c14d092adf87cd61a502a0 = NULL;

    assertFrameObject( frame_2a241e6e07c14d092adf87cd61a502a0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_12_remove_event_detect );
    return NULL;
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

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_12_remove_event_detect );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_13_add_event_callback( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    PyObject *par_callback = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_cdd48fb151971ffd0ff695cd8642d18d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cdd48fb151971ffd0ff695cd8642d18d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cdd48fb151971ffd0ff695cd8642d18d, codeobj_cdd48fb151971ffd0ff695cd8642d18d, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cdd48fb151971ffd0ff695cd8642d18d = cache_frame_cdd48fb151971ffd0ff695cd8642d18d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cdd48fb151971ffd0ff695cd8642d18d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cdd48fb151971ffd0ff695cd8642d18d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF( tmp_raise_type_1 );
        exception_lineno = 125;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cdd48fb151971ffd0ff695cd8642d18d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cdd48fb151971ffd0ff695cd8642d18d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cdd48fb151971ffd0ff695cd8642d18d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cdd48fb151971ffd0ff695cd8642d18d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cdd48fb151971ffd0ff695cd8642d18d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cdd48fb151971ffd0ff695cd8642d18d,
        type_description_1,
        par_self,
        par_pin,
        par_callback
    );


    // Release cached frame.
    if ( frame_cdd48fb151971ffd0ff695cd8642d18d == cache_frame_cdd48fb151971ffd0ff695cd8642d18d )
    {
        Py_DECREF( frame_cdd48fb151971ffd0ff695cd8642d18d );
    }
    cache_frame_cdd48fb151971ffd0ff695cd8642d18d = NULL;

    assertFrameObject( frame_cdd48fb151971ffd0ff695cd8642d18d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_13_add_event_callback );
    return NULL;
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

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_13_add_event_callback );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_14_event_detected( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_6fff311c82798a322bafc962745c1898;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6fff311c82798a322bafc962745c1898 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6fff311c82798a322bafc962745c1898, codeobj_6fff311c82798a322bafc962745c1898, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *) );
    frame_6fff311c82798a322bafc962745c1898 = cache_frame_6fff311c82798a322bafc962745c1898;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6fff311c82798a322bafc962745c1898 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6fff311c82798a322bafc962745c1898 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF( tmp_raise_type_1 );
        exception_lineno = 132;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6fff311c82798a322bafc962745c1898 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6fff311c82798a322bafc962745c1898 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6fff311c82798a322bafc962745c1898, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6fff311c82798a322bafc962745c1898->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6fff311c82798a322bafc962745c1898, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6fff311c82798a322bafc962745c1898,
        type_description_1,
        par_self,
        par_pin
    );


    // Release cached frame.
    if ( frame_6fff311c82798a322bafc962745c1898 == cache_frame_6fff311c82798a322bafc962745c1898 )
    {
        Py_DECREF( frame_6fff311c82798a322bafc962745c1898 );
    }
    cache_frame_6fff311c82798a322bafc962745c1898 = NULL;

    assertFrameObject( frame_6fff311c82798a322bafc962745c1898 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_14_event_detected );
    return NULL;
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

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_14_event_detected );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_15_wait_for_edge( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    PyObject *par_edge = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_d8ffa8837ff680b8c5814b6e732e3dec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d8ffa8837ff680b8c5814b6e732e3dec = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d8ffa8837ff680b8c5814b6e732e3dec, codeobj_d8ffa8837ff680b8c5814b6e732e3dec, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d8ffa8837ff680b8c5814b6e732e3dec = cache_frame_d8ffa8837ff680b8c5814b6e732e3dec;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d8ffa8837ff680b8c5814b6e732e3dec );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d8ffa8837ff680b8c5814b6e732e3dec ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF( tmp_raise_type_1 );
        exception_lineno = 137;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d8ffa8837ff680b8c5814b6e732e3dec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d8ffa8837ff680b8c5814b6e732e3dec );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d8ffa8837ff680b8c5814b6e732e3dec, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d8ffa8837ff680b8c5814b6e732e3dec->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d8ffa8837ff680b8c5814b6e732e3dec, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d8ffa8837ff680b8c5814b6e732e3dec,
        type_description_1,
        par_self,
        par_pin,
        par_edge
    );


    // Release cached frame.
    if ( frame_d8ffa8837ff680b8c5814b6e732e3dec == cache_frame_d8ffa8837ff680b8c5814b6e732e3dec )
    {
        Py_DECREF( frame_d8ffa8837ff680b8c5814b6e732e3dec );
    }
    cache_frame_d8ffa8837ff680b8c5814b6e732e3dec = NULL;

    assertFrameObject( frame_d8ffa8837ff680b8c5814b6e732e3dec );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_15_wait_for_edge );
    return NULL;
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

    CHECK_OBJECT( (PyObject *)par_edge );
    Py_DECREF( par_edge );
    par_edge = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_15_wait_for_edge );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_16_cleanup( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_238036aa62f8096e13158345cf23ce0c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_238036aa62f8096e13158345cf23ce0c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_238036aa62f8096e13158345cf23ce0c, codeobj_238036aa62f8096e13158345cf23ce0c, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *) );
    frame_238036aa62f8096e13158345cf23ce0c = cache_frame_238036aa62f8096e13158345cf23ce0c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_238036aa62f8096e13158345cf23ce0c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_238036aa62f8096e13158345cf23ce0c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF( tmp_raise_type_1 );
        exception_lineno = 143;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_238036aa62f8096e13158345cf23ce0c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_238036aa62f8096e13158345cf23ce0c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_238036aa62f8096e13158345cf23ce0c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_238036aa62f8096e13158345cf23ce0c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_238036aa62f8096e13158345cf23ce0c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_238036aa62f8096e13158345cf23ce0c,
        type_description_1,
        par_self,
        par_pin
    );


    // Release cached frame.
    if ( frame_238036aa62f8096e13158345cf23ce0c == cache_frame_238036aa62f8096e13158345cf23ce0c )
    {
        Py_DECREF( frame_238036aa62f8096e13158345cf23ce0c );
    }
    cache_frame_238036aa62f8096e13158345cf23ce0c = NULL;

    assertFrameObject( frame_238036aa62f8096e13158345cf23ce0c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_16_cleanup );
    return NULL;
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

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_16_cleanup );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_17__validate_pin( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_c9e4c55d6b49c4a6a64f5a7137ba3245;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c9e4c55d6b49c4a6a64f5a7137ba3245 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c9e4c55d6b49c4a6a64f5a7137ba3245, codeobj_c9e4c55d6b49c4a6a64f5a7137ba3245, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *) );
    frame_c9e4c55d6b49c4a6a64f5a7137ba3245 = cache_frame_c9e4c55d6b49c4a6a64f5a7137ba3245;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c9e4c55d6b49c4a6a64f5a7137ba3245 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c9e4c55d6b49c4a6a64f5a7137ba3245 ) == 2 ); // Frame stack

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
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_pin );
        tmp_compexpr_left_1 = par_pin;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
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
        CHECK_OBJECT( par_pin );
        tmp_compexpr_left_2 = par_pin;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_NUM_GPIO );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_3;
            tmp_source_name_2 = const_str_digest_0956fd3048c0a48300405fe7075f05b4;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_format );
            assert( !(tmp_called_name_1 == NULL) );
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_NUM_GPIO );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 151;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_c9e4c55d6b49c4a6a64f5a7137ba3245->m_frame.f_lineno = 151;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 151;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_c9e4c55d6b49c4a6a64f5a7137ba3245->m_frame.f_lineno = 151;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 151;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c9e4c55d6b49c4a6a64f5a7137ba3245 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c9e4c55d6b49c4a6a64f5a7137ba3245 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c9e4c55d6b49c4a6a64f5a7137ba3245, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c9e4c55d6b49c4a6a64f5a7137ba3245->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c9e4c55d6b49c4a6a64f5a7137ba3245, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c9e4c55d6b49c4a6a64f5a7137ba3245,
        type_description_1,
        par_self,
        par_pin
    );


    // Release cached frame.
    if ( frame_c9e4c55d6b49c4a6a64f5a7137ba3245 == cache_frame_c9e4c55d6b49c4a6a64f5a7137ba3245 )
    {
        Py_DECREF( frame_c9e4c55d6b49c4a6a64f5a7137ba3245 );
    }
    cache_frame_c9e4c55d6b49c4a6a64f5a7137ba3245 = NULL;

    assertFrameObject( frame_c9e4c55d6b49c4a6a64f5a7137ba3245 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_17__validate_pin );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_17__validate_pin );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_18__bit2( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_src = python_pars[ 1 ];
    PyObject *par_bit = python_pars[ 2 ];
    PyObject *par_val = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_86c77260dd62c1c6b72c1f9c0e346056;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_86c77260dd62c1c6b72c1f9c0e346056 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_86c77260dd62c1c6b72c1f9c0e346056, codeobj_86c77260dd62c1c6b72c1f9c0e346056, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_86c77260dd62c1c6b72c1f9c0e346056 = cache_frame_86c77260dd62c1c6b72c1f9c0e346056;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_86c77260dd62c1c6b72c1f9c0e346056 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_86c77260dd62c1c6b72c1f9c0e346056 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = const_int_pos_1;
        CHECK_OBJECT( par_bit );
        tmp_right_name_1 = par_bit;
        tmp_assign_source_1 = BINARY_OPERATION( PyNumber_Lshift, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 154;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_bit;
            assert( old != NULL );
            par_bit = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( par_val );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_val );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT( par_src );
        tmp_left_name_2 = par_src;
        CHECK_OBJECT( par_bit );
        tmp_right_name_2 = par_bit;
        tmp_return_value = BINARY_OPERATION( PyNumber_Or, tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( par_src );
        tmp_left_name_3 = par_src;
        CHECK_OBJECT( par_bit );
        tmp_operand_name_1 = par_bit;
        tmp_right_name_3 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_1 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION( PyNumber_And, tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_86c77260dd62c1c6b72c1f9c0e346056 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_86c77260dd62c1c6b72c1f9c0e346056 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_86c77260dd62c1c6b72c1f9c0e346056 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_86c77260dd62c1c6b72c1f9c0e346056, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_86c77260dd62c1c6b72c1f9c0e346056->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_86c77260dd62c1c6b72c1f9c0e346056, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_86c77260dd62c1c6b72c1f9c0e346056,
        type_description_1,
        par_self,
        par_src,
        par_bit,
        par_val
    );


    // Release cached frame.
    if ( frame_86c77260dd62c1c6b72c1f9c0e346056 == cache_frame_86c77260dd62c1c6b72c1f9c0e346056 )
    {
        Py_DECREF( frame_86c77260dd62c1c6b72c1f9c0e346056 );
    }
    cache_frame_86c77260dd62c1c6b72c1f9c0e346056 = NULL;

    assertFrameObject( frame_86c77260dd62c1c6b72c1f9c0e346056 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_18__bit2 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_src );
    Py_DECREF( par_src );
    par_src = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_bit );
    Py_DECREF( par_bit );
    par_bit = NULL;

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

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

    CHECK_OBJECT( (PyObject *)par_src );
    Py_DECREF( par_src );
    par_src = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_bit );
    Py_DECREF( par_bit );
    par_bit = NULL;

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_18__bit2 );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_19___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_rpi_gpio = python_pars[ 1 ];
    PyObject *par_mode = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_920e083cf00a4ca9334cd06d62e761ec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_920e083cf00a4ca9334cd06d62e761ec = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_920e083cf00a4ca9334cd06d62e761ec, codeobj_920e083cf00a4ca9334cd06d62e761ec, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_920e083cf00a4ca9334cd06d62e761ec = cache_frame_920e083cf00a4ca9334cd06d62e761ec;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_920e083cf00a4ca9334cd06d62e761ec );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_920e083cf00a4ca9334cd06d62e761ec ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_rpi_gpio );
        tmp_assattr_name_1 = par_rpi_gpio;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_rpi_gpio, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_rpi_gpio );
        tmp_called_instance_1 = par_rpi_gpio;
        frame_920e083cf00a4ca9334cd06d62e761ec->m_frame.f_lineno = 164;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_setwarnings, &PyTuple_GET_ITEM( const_tuple_false_tuple, 0 ) );

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_mode );
        tmp_compexpr_left_1 = par_mode;
        CHECK_OBJECT( par_rpi_gpio );
        tmp_source_name_1 = par_rpi_gpio;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_BOARD );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "ooo";
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
        CHECK_OBJECT( par_rpi_gpio );
        tmp_source_name_2 = par_rpi_gpio;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_BCM );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "ooo";
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( par_rpi_gpio );
            tmp_called_instance_2 = par_rpi_gpio;
            CHECK_OBJECT( par_mode );
            tmp_args_element_name_1 = par_mode;
            frame_920e083cf00a4ca9334cd06d62e761ec->m_frame.f_lineno = 167;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_setmode, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 167;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( par_mode );
            tmp_compexpr_left_3 = par_mode;
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                tmp_make_exception_arg_1 = const_str_digest_eb413152b9817bb2e0f12fff9d2037d0;
                frame_920e083cf00a4ca9334cd06d62e761ec->m_frame.f_lineno = 169;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 169;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_3;
                PyObject *tmp_call_result_3;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_source_name_4;
                CHECK_OBJECT( par_rpi_gpio );
                tmp_source_name_3 = par_rpi_gpio;
                tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_setmode );
                if ( tmp_called_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 172;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_rpi_gpio );
                tmp_source_name_4 = par_rpi_gpio;
                tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_BOARD );
                if ( tmp_args_element_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_1 );

                    exception_lineno = 172;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                frame_920e083cf00a4ca9334cd06d62e761ec->m_frame.f_lineno = 172;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2 };
                    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                }

                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_2 );
                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 172;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_3 );
            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_rpi_gpio );
        tmp_source_name_5 = par_rpi_gpio;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_OUT );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 174;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_OUT );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OUT );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_dict_value_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "OUT" );
            exception_tb = NULL;

            exception_lineno = 174;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_key_1 = tmp_mvar_value_1;
        tmp_assattr_name_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_assattr_name_2, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_2 );

            exception_lineno = 174;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rpi_gpio );
        tmp_source_name_6 = par_rpi_gpio;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_IN );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_2 );

            exception_lineno = 175;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_IN );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IN );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_assattr_name_2 );
            Py_DECREF( tmp_dict_value_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "IN" );
            exception_tb = NULL;

            exception_lineno = 175;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_key_2 = tmp_mvar_value_2;
        tmp_res = PyDict_SetItem( tmp_assattr_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_2 );

            exception_lineno = 174;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__dir_mapping, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 174;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_rpi_gpio );
        tmp_source_name_7 = par_rpi_gpio;
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_PUD_OFF );
        if ( tmp_dict_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_PUD_OFF );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PUD_OFF );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_dict_value_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PUD_OFF" );
            exception_tb = NULL;

            exception_lineno = 176;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_key_3 = tmp_mvar_value_3;
        tmp_assattr_name_3 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_assattr_name_3, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_3 );

            exception_lineno = 176;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rpi_gpio );
        tmp_source_name_8 = par_rpi_gpio;
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_PUD_DOWN );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_3 );

            exception_lineno = 177;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_PUD_DOWN );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PUD_DOWN );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_assattr_name_3 );
            Py_DECREF( tmp_dict_value_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PUD_DOWN" );
            exception_tb = NULL;

            exception_lineno = 177;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_key_4 = tmp_mvar_value_4;
        tmp_res = PyDict_SetItem( tmp_assattr_name_3, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_3 );

            exception_lineno = 176;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rpi_gpio );
        tmp_source_name_9 = par_rpi_gpio;
        tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_PUD_UP );
        if ( tmp_dict_value_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_3 );

            exception_lineno = 178;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_PUD_UP );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PUD_UP );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_assattr_name_3 );
            Py_DECREF( tmp_dict_value_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PUD_UP" );
            exception_tb = NULL;

            exception_lineno = 178;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_key_5 = tmp_mvar_value_5;
        tmp_res = PyDict_SetItem( tmp_assattr_name_3, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_value_5 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_3 );

            exception_lineno = 176;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__pud_mapping, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( par_rpi_gpio );
        tmp_source_name_10 = par_rpi_gpio;
        tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_RISING );
        if ( tmp_dict_value_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_RISING );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RISING );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_dict_value_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "RISING" );
            exception_tb = NULL;

            exception_lineno = 179;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_key_6 = tmp_mvar_value_6;
        tmp_assattr_name_4 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_assattr_name_4, tmp_dict_key_6, tmp_dict_value_6 );
        Py_DECREF( tmp_dict_value_6 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_4 );

            exception_lineno = 179;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rpi_gpio );
        tmp_source_name_11 = par_rpi_gpio;
        tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_FALLING );
        if ( tmp_dict_value_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_4 );

            exception_lineno = 180;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_FALLING );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FALLING );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_assattr_name_4 );
            Py_DECREF( tmp_dict_value_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "FALLING" );
            exception_tb = NULL;

            exception_lineno = 180;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_key_7 = tmp_mvar_value_7;
        tmp_res = PyDict_SetItem( tmp_assattr_name_4, tmp_dict_key_7, tmp_dict_value_7 );
        Py_DECREF( tmp_dict_value_7 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_4 );

            exception_lineno = 179;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rpi_gpio );
        tmp_source_name_12 = par_rpi_gpio;
        tmp_dict_value_8 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_BOTH );
        if ( tmp_dict_value_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_4 );

            exception_lineno = 181;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_BOTH );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOTH );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_assattr_name_4 );
            Py_DECREF( tmp_dict_value_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "BOTH" );
            exception_tb = NULL;

            exception_lineno = 181;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_key_8 = tmp_mvar_value_8;
        tmp_res = PyDict_SetItem( tmp_assattr_name_4, tmp_dict_key_8, tmp_dict_value_8 );
        Py_DECREF( tmp_dict_value_8 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_4 );

            exception_lineno = 179;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__edge_mapping, tmp_assattr_name_4 );
        Py_DECREF( tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_920e083cf00a4ca9334cd06d62e761ec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_920e083cf00a4ca9334cd06d62e761ec );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_920e083cf00a4ca9334cd06d62e761ec, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_920e083cf00a4ca9334cd06d62e761ec->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_920e083cf00a4ca9334cd06d62e761ec, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_920e083cf00a4ca9334cd06d62e761ec,
        type_description_1,
        par_self,
        par_rpi_gpio,
        par_mode
    );


    // Release cached frame.
    if ( frame_920e083cf00a4ca9334cd06d62e761ec == cache_frame_920e083cf00a4ca9334cd06d62e761ec )
    {
        Py_DECREF( frame_920e083cf00a4ca9334cd06d62e761ec );
    }
    cache_frame_920e083cf00a4ca9334cd06d62e761ec = NULL;

    assertFrameObject( frame_920e083cf00a4ca9334cd06d62e761ec );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_19___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_rpi_gpio );
    Py_DECREF( par_rpi_gpio );
    par_rpi_gpio = NULL;

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

    CHECK_OBJECT( (PyObject *)par_rpi_gpio );
    Py_DECREF( par_rpi_gpio );
    par_rpi_gpio = NULL;

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
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_19___init__ );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_20_setup( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    PyObject *par_mode = python_pars[ 2 ];
    PyObject *par_pull_up_down = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_2183439eedca5a5b4bee128e897ee187;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_2183439eedca5a5b4bee128e897ee187 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2183439eedca5a5b4bee128e897ee187, codeobj_2183439eedca5a5b4bee128e897ee187, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2183439eedca5a5b4bee128e897ee187 = cache_frame_2183439eedca5a5b4bee128e897ee187;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2183439eedca5a5b4bee128e897ee187 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2183439eedca5a5b4bee128e897ee187 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_rpi_gpio );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_setup );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pin );
        tmp_tuple_element_1 = par_pin;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__dir_mapping );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 187;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_mode );
        tmp_subscript_name_1 = par_mode;
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 187;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__pud_mapping );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 188;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pull_up_down );
        tmp_subscript_name_2 = par_pull_up_down;
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 188;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain_pull_up_down;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_2183439eedca5a5b4bee128e897ee187->m_frame.f_lineno = 187;
        tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2183439eedca5a5b4bee128e897ee187 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2183439eedca5a5b4bee128e897ee187 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2183439eedca5a5b4bee128e897ee187, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2183439eedca5a5b4bee128e897ee187->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2183439eedca5a5b4bee128e897ee187, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2183439eedca5a5b4bee128e897ee187,
        type_description_1,
        par_self,
        par_pin,
        par_mode,
        par_pull_up_down
    );


    // Release cached frame.
    if ( frame_2183439eedca5a5b4bee128e897ee187 == cache_frame_2183439eedca5a5b4bee128e897ee187 )
    {
        Py_DECREF( frame_2183439eedca5a5b4bee128e897ee187 );
    }
    cache_frame_2183439eedca5a5b4bee128e897ee187 = NULL;

    assertFrameObject( frame_2183439eedca5a5b4bee128e897ee187 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_20_setup );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_pull_up_down );
    Py_DECREF( par_pull_up_down );
    par_pull_up_down = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pull_up_down );
    Py_DECREF( par_pull_up_down );
    par_pull_up_down = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_20_setup );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_21_output( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    PyObject *par_value = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_c970828ad0625418f96f48066ef193d2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c970828ad0625418f96f48066ef193d2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c970828ad0625418f96f48066ef193d2, codeobj_c970828ad0625418f96f48066ef193d2, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c970828ad0625418f96f48066ef193d2 = cache_frame_c970828ad0625418f96f48066ef193d2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c970828ad0625418f96f48066ef193d2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c970828ad0625418f96f48066ef193d2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_rpi_gpio );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pin );
        tmp_args_element_name_1 = par_pin;
        CHECK_OBJECT( par_value );
        tmp_args_element_name_2 = par_value;
        frame_c970828ad0625418f96f48066ef193d2->m_frame.f_lineno = 194;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_output, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c970828ad0625418f96f48066ef193d2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c970828ad0625418f96f48066ef193d2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c970828ad0625418f96f48066ef193d2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c970828ad0625418f96f48066ef193d2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c970828ad0625418f96f48066ef193d2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c970828ad0625418f96f48066ef193d2,
        type_description_1,
        par_self,
        par_pin,
        par_value
    );


    // Release cached frame.
    if ( frame_c970828ad0625418f96f48066ef193d2 == cache_frame_c970828ad0625418f96f48066ef193d2 )
    {
        Py_DECREF( frame_c970828ad0625418f96f48066ef193d2 );
    }
    cache_frame_c970828ad0625418f96f48066ef193d2 = NULL;

    assertFrameObject( frame_c970828ad0625418f96f48066ef193d2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_21_output );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

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

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_21_output );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_22_input( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_179acf82a8ca17f50f7a809ed6883d7f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_179acf82a8ca17f50f7a809ed6883d7f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_179acf82a8ca17f50f7a809ed6883d7f, codeobj_179acf82a8ca17f50f7a809ed6883d7f, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *) );
    frame_179acf82a8ca17f50f7a809ed6883d7f = cache_frame_179acf82a8ca17f50f7a809ed6883d7f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_179acf82a8ca17f50f7a809ed6883d7f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_179acf82a8ca17f50f7a809ed6883d7f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_rpi_gpio );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pin );
        tmp_args_element_name_1 = par_pin;
        frame_179acf82a8ca17f50f7a809ed6883d7f->m_frame.f_lineno = 200;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_input, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_179acf82a8ca17f50f7a809ed6883d7f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_179acf82a8ca17f50f7a809ed6883d7f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_179acf82a8ca17f50f7a809ed6883d7f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_179acf82a8ca17f50f7a809ed6883d7f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_179acf82a8ca17f50f7a809ed6883d7f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_179acf82a8ca17f50f7a809ed6883d7f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_179acf82a8ca17f50f7a809ed6883d7f,
        type_description_1,
        par_self,
        par_pin
    );


    // Release cached frame.
    if ( frame_179acf82a8ca17f50f7a809ed6883d7f == cache_frame_179acf82a8ca17f50f7a809ed6883d7f )
    {
        Py_DECREF( frame_179acf82a8ca17f50f7a809ed6883d7f );
    }
    cache_frame_179acf82a8ca17f50f7a809ed6883d7f = NULL;

    assertFrameObject( frame_179acf82a8ca17f50f7a809ed6883d7f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_22_input );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_22_input );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_23_input_pins( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pins = python_pars[ 1 ];
    PyObject *var_pin = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_6996b7aed6af7873f28db084db070718;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_6996b7aed6af7873f28db084db070718 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6996b7aed6af7873f28db084db070718, codeobj_6996b7aed6af7873f28db084db070718, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6996b7aed6af7873f28db084db070718 = cache_frame_6996b7aed6af7873f28db084db070718;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6996b7aed6af7873f28db084db070718 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6996b7aed6af7873f28db084db070718 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_pins );
        tmp_iter_arg_1 = par_pins;
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert( tmp_list_contraction_1__$0 == NULL );
        tmp_list_contraction_1__$0 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyList_New( 0 );
        assert( tmp_list_contraction_1__contraction_result == NULL );
        tmp_list_contraction_1__contraction_result = tmp_assign_source_2;
    }
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_list_contraction_1__$0 );
        tmp_next_source_1 = tmp_list_contraction_1__$0;
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
                type_description_1 = "ooo";
                exception_lineno = 207;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_list_contraction_1__iter_value_0;
            tmp_list_contraction_1__iter_value_0 = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_list_contraction_1__iter_value_0 );
        tmp_assign_source_4 = tmp_list_contraction_1__iter_value_0;
        {
            PyObject *old = var_pin;
            var_pin = tmp_assign_source_4;
            Py_INCREF( var_pin );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
        tmp_append_list_1 = tmp_list_contraction_1__contraction_result;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_rpi_gpio );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_pin );
        tmp_args_element_name_1 = var_pin;
        frame_6996b7aed6af7873f28db084db070718->m_frame.f_lineno = 207;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_append_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_input, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_append_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert( PyList_Check( tmp_append_list_1 ) );
        tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
        Py_DECREF( tmp_append_value_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
    tmp_return_value = tmp_list_contraction_1__contraction_result;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_23_input_pins );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__$0 );
    Py_DECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__contraction_result );
    Py_DECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

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

    Py_XDECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    Py_XDECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_23_input_pins );
    return NULL;
    outline_result_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6996b7aed6af7873f28db084db070718 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6996b7aed6af7873f28db084db070718 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6996b7aed6af7873f28db084db070718 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6996b7aed6af7873f28db084db070718, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6996b7aed6af7873f28db084db070718->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6996b7aed6af7873f28db084db070718, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6996b7aed6af7873f28db084db070718,
        type_description_1,
        par_self,
        par_pins,
        var_pin
    );


    // Release cached frame.
    if ( frame_6996b7aed6af7873f28db084db070718 == cache_frame_6996b7aed6af7873f28db084db070718 )
    {
        Py_DECREF( frame_6996b7aed6af7873f28db084db070718 );
    }
    cache_frame_6996b7aed6af7873f28db084db070718 = NULL;

    assertFrameObject( frame_6996b7aed6af7873f28db084db070718 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_23_input_pins );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_pins );
    Py_DECREF( par_pins );
    par_pins = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_pin );
    var_pin = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pins );
    Py_DECREF( par_pins );
    par_pins = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_pin );
    var_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_23_input_pins );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_24_add_event_detect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    PyObject *par_edge = python_pars[ 2 ];
    PyObject *par_callback = python_pars[ 3 ];
    PyObject *par_bouncetime = python_pars[ 4 ];
    PyObject *var_kwargs = NULL;
    struct Nuitka_FrameObject *frame_7ffd371efa89c01ac98b2a0467800fdb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_7ffd371efa89c01ac98b2a0467800fdb = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_New();
        assert( var_kwargs == NULL );
        var_kwargs = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7ffd371efa89c01ac98b2a0467800fdb, codeobj_7ffd371efa89c01ac98b2a0467800fdb, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7ffd371efa89c01ac98b2a0467800fdb = cache_frame_7ffd371efa89c01ac98b2a0467800fdb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7ffd371efa89c01ac98b2a0467800fdb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7ffd371efa89c01ac98b2a0467800fdb ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_callback );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_callback );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        CHECK_OBJECT( par_callback );
        tmp_dictset_value = par_callback;
        CHECK_OBJECT( var_kwargs );
        tmp_dictset_dict = var_kwargs;
        tmp_dictset_key = const_str_plain_callback;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_bouncetime );
        tmp_compexpr_left_1 = par_bouncetime;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "oooooo";
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
        CHECK_OBJECT( par_bouncetime );
        tmp_dictset_value = par_bouncetime;
        CHECK_OBJECT( var_kwargs );
        tmp_dictset_dict = var_kwargs;
        tmp_dictset_key = const_str_plain_bouncetime;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        branch_no_2:;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_rpi_gpio );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add_event_detect );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pin );
        tmp_tuple_element_1 = par_pin;
        tmp_dircall_arg2_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__edge_mapping );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );

            exception_lineno = 220;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_edge );
        tmp_subscript_name_1 = par_edge;
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );

            exception_lineno = 220;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( var_kwargs );
        tmp_dircall_arg3_1 = var_kwargs;
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ffd371efa89c01ac98b2a0467800fdb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ffd371efa89c01ac98b2a0467800fdb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7ffd371efa89c01ac98b2a0467800fdb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7ffd371efa89c01ac98b2a0467800fdb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7ffd371efa89c01ac98b2a0467800fdb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7ffd371efa89c01ac98b2a0467800fdb,
        type_description_1,
        par_self,
        par_pin,
        par_edge,
        par_callback,
        par_bouncetime,
        var_kwargs
    );


    // Release cached frame.
    if ( frame_7ffd371efa89c01ac98b2a0467800fdb == cache_frame_7ffd371efa89c01ac98b2a0467800fdb )
    {
        Py_DECREF( frame_7ffd371efa89c01ac98b2a0467800fdb );
    }
    cache_frame_7ffd371efa89c01ac98b2a0467800fdb = NULL;

    assertFrameObject( frame_7ffd371efa89c01ac98b2a0467800fdb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_24_add_event_detect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    CHECK_OBJECT( (PyObject *)par_bouncetime );
    Py_DECREF( par_bouncetime );
    par_bouncetime = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par_edge );
    Py_DECREF( par_edge );
    par_edge = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    CHECK_OBJECT( (PyObject *)par_bouncetime );
    Py_DECREF( par_bouncetime );
    par_bouncetime = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par_edge );
    Py_DECREF( par_edge );
    par_edge = NULL;

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
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_24_add_event_detect );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_25_remove_event_detect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_2b33c697b083ff7a8360ede3e8a442cf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2b33c697b083ff7a8360ede3e8a442cf = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2b33c697b083ff7a8360ede3e8a442cf, codeobj_2b33c697b083ff7a8360ede3e8a442cf, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *) );
    frame_2b33c697b083ff7a8360ede3e8a442cf = cache_frame_2b33c697b083ff7a8360ede3e8a442cf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2b33c697b083ff7a8360ede3e8a442cf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2b33c697b083ff7a8360ede3e8a442cf ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_rpi_gpio );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pin );
        tmp_args_element_name_1 = par_pin;
        frame_2b33c697b083ff7a8360ede3e8a442cf->m_frame.f_lineno = 226;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_remove_event_detect, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2b33c697b083ff7a8360ede3e8a442cf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2b33c697b083ff7a8360ede3e8a442cf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2b33c697b083ff7a8360ede3e8a442cf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2b33c697b083ff7a8360ede3e8a442cf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2b33c697b083ff7a8360ede3e8a442cf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2b33c697b083ff7a8360ede3e8a442cf,
        type_description_1,
        par_self,
        par_pin
    );


    // Release cached frame.
    if ( frame_2b33c697b083ff7a8360ede3e8a442cf == cache_frame_2b33c697b083ff7a8360ede3e8a442cf )
    {
        Py_DECREF( frame_2b33c697b083ff7a8360ede3e8a442cf );
    }
    cache_frame_2b33c697b083ff7a8360ede3e8a442cf = NULL;

    assertFrameObject( frame_2b33c697b083ff7a8360ede3e8a442cf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_25_remove_event_detect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_25_remove_event_detect );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_26_add_event_callback( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    PyObject *par_callback = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_09d774ef3b9c5d5dd50650bd4b67c283;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_09d774ef3b9c5d5dd50650bd4b67c283 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_09d774ef3b9c5d5dd50650bd4b67c283, codeobj_09d774ef3b9c5d5dd50650bd4b67c283, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_09d774ef3b9c5d5dd50650bd4b67c283 = cache_frame_09d774ef3b9c5d5dd50650bd4b67c283;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_09d774ef3b9c5d5dd50650bd4b67c283 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_09d774ef3b9c5d5dd50650bd4b67c283 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_rpi_gpio );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 232;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pin );
        tmp_args_element_name_1 = par_pin;
        CHECK_OBJECT( par_callback );
        tmp_args_element_name_2 = par_callback;
        frame_09d774ef3b9c5d5dd50650bd4b67c283->m_frame.f_lineno = 232;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_add_event_callback, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 232;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_09d774ef3b9c5d5dd50650bd4b67c283 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_09d774ef3b9c5d5dd50650bd4b67c283 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_09d774ef3b9c5d5dd50650bd4b67c283, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_09d774ef3b9c5d5dd50650bd4b67c283->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_09d774ef3b9c5d5dd50650bd4b67c283, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_09d774ef3b9c5d5dd50650bd4b67c283,
        type_description_1,
        par_self,
        par_pin,
        par_callback
    );


    // Release cached frame.
    if ( frame_09d774ef3b9c5d5dd50650bd4b67c283 == cache_frame_09d774ef3b9c5d5dd50650bd4b67c283 )
    {
        Py_DECREF( frame_09d774ef3b9c5d5dd50650bd4b67c283 );
    }
    cache_frame_09d774ef3b9c5d5dd50650bd4b67c283 = NULL;

    assertFrameObject( frame_09d774ef3b9c5d5dd50650bd4b67c283 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_26_add_event_callback );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

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

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_26_add_event_callback );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_27_event_detected( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_fc0219a2d3291dbcf799260a92da4e27;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fc0219a2d3291dbcf799260a92da4e27 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fc0219a2d3291dbcf799260a92da4e27, codeobj_fc0219a2d3291dbcf799260a92da4e27, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *) );
    frame_fc0219a2d3291dbcf799260a92da4e27 = cache_frame_fc0219a2d3291dbcf799260a92da4e27;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fc0219a2d3291dbcf799260a92da4e27 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fc0219a2d3291dbcf799260a92da4e27 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_rpi_gpio );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 239;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pin );
        tmp_args_element_name_1 = par_pin;
        frame_fc0219a2d3291dbcf799260a92da4e27->m_frame.f_lineno = 239;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_event_detected, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 239;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fc0219a2d3291dbcf799260a92da4e27 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fc0219a2d3291dbcf799260a92da4e27 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fc0219a2d3291dbcf799260a92da4e27 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fc0219a2d3291dbcf799260a92da4e27, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fc0219a2d3291dbcf799260a92da4e27->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fc0219a2d3291dbcf799260a92da4e27, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fc0219a2d3291dbcf799260a92da4e27,
        type_description_1,
        par_self,
        par_pin
    );


    // Release cached frame.
    if ( frame_fc0219a2d3291dbcf799260a92da4e27 == cache_frame_fc0219a2d3291dbcf799260a92da4e27 )
    {
        Py_DECREF( frame_fc0219a2d3291dbcf799260a92da4e27 );
    }
    cache_frame_fc0219a2d3291dbcf799260a92da4e27 = NULL;

    assertFrameObject( frame_fc0219a2d3291dbcf799260a92da4e27 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_27_event_detected );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_27_event_detected );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_28_wait_for_edge( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    PyObject *par_edge = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_867202d8d8231adf78b747f8730479ea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_867202d8d8231adf78b747f8730479ea = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_867202d8d8231adf78b747f8730479ea, codeobj_867202d8d8231adf78b747f8730479ea, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_867202d8d8231adf78b747f8730479ea = cache_frame_867202d8d8231adf78b747f8730479ea;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_867202d8d8231adf78b747f8730479ea );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_867202d8d8231adf78b747f8730479ea ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_rpi_gpio );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 245;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_wait_for_edge );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 245;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pin );
        tmp_args_element_name_1 = par_pin;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__edge_mapping );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 245;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_edge );
        tmp_subscript_name_1 = par_edge;
        tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 245;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_867202d8d8231adf78b747f8730479ea->m_frame.f_lineno = 245;
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


            exception_lineno = 245;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_867202d8d8231adf78b747f8730479ea );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_867202d8d8231adf78b747f8730479ea );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_867202d8d8231adf78b747f8730479ea, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_867202d8d8231adf78b747f8730479ea->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_867202d8d8231adf78b747f8730479ea, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_867202d8d8231adf78b747f8730479ea,
        type_description_1,
        par_self,
        par_pin,
        par_edge
    );


    // Release cached frame.
    if ( frame_867202d8d8231adf78b747f8730479ea == cache_frame_867202d8d8231adf78b747f8730479ea )
    {
        Py_DECREF( frame_867202d8d8231adf78b747f8730479ea );
    }
    cache_frame_867202d8d8231adf78b747f8730479ea = NULL;

    assertFrameObject( frame_867202d8d8231adf78b747f8730479ea );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_28_wait_for_edge );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_edge );
    Py_DECREF( par_edge );
    par_edge = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

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

    CHECK_OBJECT( (PyObject *)par_edge );
    Py_DECREF( par_edge );
    par_edge = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_28_wait_for_edge );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_29_cleanup( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_1fcf203f399affbc2990e0fccd3877e4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1fcf203f399affbc2990e0fccd3877e4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1fcf203f399affbc2990e0fccd3877e4, codeobj_1fcf203f399affbc2990e0fccd3877e4, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *) );
    frame_1fcf203f399affbc2990e0fccd3877e4 = cache_frame_1fcf203f399affbc2990e0fccd3877e4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1fcf203f399affbc2990e0fccd3877e4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1fcf203f399affbc2990e0fccd3877e4 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_pin );
        tmp_compexpr_left_1 = par_pin;
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
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_1 = par_self;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_rpi_gpio );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 252;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_1fcf203f399affbc2990e0fccd3877e4->m_frame.f_lineno = 252;
            tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_cleanup );
            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 252;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_rpi_gpio );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 254;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_pin );
            tmp_args_element_name_1 = par_pin;
            frame_1fcf203f399affbc2990e0fccd3877e4->m_frame.f_lineno = 254;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_cleanup, call_args );
            }

            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 254;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1fcf203f399affbc2990e0fccd3877e4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1fcf203f399affbc2990e0fccd3877e4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1fcf203f399affbc2990e0fccd3877e4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1fcf203f399affbc2990e0fccd3877e4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1fcf203f399affbc2990e0fccd3877e4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1fcf203f399affbc2990e0fccd3877e4,
        type_description_1,
        par_self,
        par_pin
    );


    // Release cached frame.
    if ( frame_1fcf203f399affbc2990e0fccd3877e4 == cache_frame_1fcf203f399affbc2990e0fccd3877e4 )
    {
        Py_DECREF( frame_1fcf203f399affbc2990e0fccd3877e4 );
    }
    cache_frame_1fcf203f399affbc2990e0fccd3877e4 = NULL;

    assertFrameObject( frame_1fcf203f399affbc2990e0fccd3877e4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_29_cleanup );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_29_cleanup );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_30___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_bbio_gpio = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_41d2ee926f918859dc41ff8b5560d987;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_41d2ee926f918859dc41ff8b5560d987 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_41d2ee926f918859dc41ff8b5560d987, codeobj_41d2ee926f918859dc41ff8b5560d987, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *) );
    frame_41d2ee926f918859dc41ff8b5560d987 = cache_frame_41d2ee926f918859dc41ff8b5560d987;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_41d2ee926f918859dc41ff8b5560d987 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_41d2ee926f918859dc41ff8b5560d987 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_bbio_gpio );
        tmp_assattr_name_1 = par_bbio_gpio;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_bbio_gpio, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_bbio_gpio );
        tmp_source_name_1 = par_bbio_gpio;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_OUT );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 264;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_OUT );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OUT );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_dict_value_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "OUT" );
            exception_tb = NULL;

            exception_lineno = 264;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_dict_key_1 = tmp_mvar_value_1;
        tmp_assattr_name_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_assattr_name_2, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_2 );

            exception_lineno = 264;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_bbio_gpio );
        tmp_source_name_2 = par_bbio_gpio;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_IN );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_2 );

            exception_lineno = 265;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_IN );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IN );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_assattr_name_2 );
            Py_DECREF( tmp_dict_value_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "IN" );
            exception_tb = NULL;

            exception_lineno = 265;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_dict_key_2 = tmp_mvar_value_2;
        tmp_res = PyDict_SetItem( tmp_assattr_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_2 );

            exception_lineno = 264;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__dir_mapping, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 264;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_bbio_gpio );
        tmp_source_name_3 = par_bbio_gpio;
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_PUD_OFF );
        if ( tmp_dict_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 266;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_PUD_OFF );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PUD_OFF );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_dict_value_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PUD_OFF" );
            exception_tb = NULL;

            exception_lineno = 266;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_dict_key_3 = tmp_mvar_value_3;
        tmp_assattr_name_3 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_assattr_name_3, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_3 );

            exception_lineno = 266;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_bbio_gpio );
        tmp_source_name_4 = par_bbio_gpio;
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_PUD_DOWN );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_3 );

            exception_lineno = 267;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_PUD_DOWN );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PUD_DOWN );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_assattr_name_3 );
            Py_DECREF( tmp_dict_value_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PUD_DOWN" );
            exception_tb = NULL;

            exception_lineno = 267;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_dict_key_4 = tmp_mvar_value_4;
        tmp_res = PyDict_SetItem( tmp_assattr_name_3, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_3 );

            exception_lineno = 266;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_bbio_gpio );
        tmp_source_name_5 = par_bbio_gpio;
        tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_PUD_UP );
        if ( tmp_dict_value_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_3 );

            exception_lineno = 268;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_PUD_UP );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PUD_UP );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_assattr_name_3 );
            Py_DECREF( tmp_dict_value_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PUD_UP" );
            exception_tb = NULL;

            exception_lineno = 268;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_dict_key_5 = tmp_mvar_value_5;
        tmp_res = PyDict_SetItem( tmp_assattr_name_3, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_value_5 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_3 );

            exception_lineno = 266;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__pud_mapping, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 266;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( par_bbio_gpio );
        tmp_source_name_6 = par_bbio_gpio;
        tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_RISING );
        if ( tmp_dict_value_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_RISING );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RISING );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_dict_value_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "RISING" );
            exception_tb = NULL;

            exception_lineno = 269;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_dict_key_6 = tmp_mvar_value_6;
        tmp_assattr_name_4 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_assattr_name_4, tmp_dict_key_6, tmp_dict_value_6 );
        Py_DECREF( tmp_dict_value_6 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_4 );

            exception_lineno = 269;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_bbio_gpio );
        tmp_source_name_7 = par_bbio_gpio;
        tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_FALLING );
        if ( tmp_dict_value_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_4 );

            exception_lineno = 270;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_FALLING );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FALLING );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_assattr_name_4 );
            Py_DECREF( tmp_dict_value_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "FALLING" );
            exception_tb = NULL;

            exception_lineno = 270;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_dict_key_7 = tmp_mvar_value_7;
        tmp_res = PyDict_SetItem( tmp_assattr_name_4, tmp_dict_key_7, tmp_dict_value_7 );
        Py_DECREF( tmp_dict_value_7 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_4 );

            exception_lineno = 269;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_bbio_gpio );
        tmp_source_name_8 = par_bbio_gpio;
        tmp_dict_value_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_BOTH );
        if ( tmp_dict_value_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_4 );

            exception_lineno = 271;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_BOTH );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOTH );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_assattr_name_4 );
            Py_DECREF( tmp_dict_value_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "BOTH" );
            exception_tb = NULL;

            exception_lineno = 271;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_dict_key_8 = tmp_mvar_value_8;
        tmp_res = PyDict_SetItem( tmp_assattr_name_4, tmp_dict_key_8, tmp_dict_value_8 );
        Py_DECREF( tmp_dict_value_8 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_4 );

            exception_lineno = 269;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__edge_mapping, tmp_assattr_name_4 );
        Py_DECREF( tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_41d2ee926f918859dc41ff8b5560d987 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_41d2ee926f918859dc41ff8b5560d987 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_41d2ee926f918859dc41ff8b5560d987, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_41d2ee926f918859dc41ff8b5560d987->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_41d2ee926f918859dc41ff8b5560d987, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_41d2ee926f918859dc41ff8b5560d987,
        type_description_1,
        par_self,
        par_bbio_gpio
    );


    // Release cached frame.
    if ( frame_41d2ee926f918859dc41ff8b5560d987 == cache_frame_41d2ee926f918859dc41ff8b5560d987 )
    {
        Py_DECREF( frame_41d2ee926f918859dc41ff8b5560d987 );
    }
    cache_frame_41d2ee926f918859dc41ff8b5560d987 = NULL;

    assertFrameObject( frame_41d2ee926f918859dc41ff8b5560d987 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_30___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_bbio_gpio );
    Py_DECREF( par_bbio_gpio );
    par_bbio_gpio = NULL;

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

    CHECK_OBJECT( (PyObject *)par_bbio_gpio );
    Py_DECREF( par_bbio_gpio );
    par_bbio_gpio = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_30___init__ );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_31_setup( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    PyObject *par_mode = python_pars[ 2 ];
    PyObject *par_pull_up_down = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_d26b5bdaca42810aadb65760bff26b88;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_d26b5bdaca42810aadb65760bff26b88 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d26b5bdaca42810aadb65760bff26b88, codeobj_d26b5bdaca42810aadb65760bff26b88, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d26b5bdaca42810aadb65760bff26b88 = cache_frame_d26b5bdaca42810aadb65760bff26b88;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d26b5bdaca42810aadb65760bff26b88 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d26b5bdaca42810aadb65760bff26b88 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_bbio_gpio );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 277;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_setup );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 277;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pin );
        tmp_tuple_element_1 = par_pin;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__dir_mapping );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 277;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_mode );
        tmp_subscript_name_1 = par_mode;
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 277;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__pud_mapping );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 278;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pull_up_down );
        tmp_subscript_name_2 = par_pull_up_down;
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 278;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain_pull_up_down;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_d26b5bdaca42810aadb65760bff26b88->m_frame.f_lineno = 277;
        tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 277;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d26b5bdaca42810aadb65760bff26b88 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d26b5bdaca42810aadb65760bff26b88 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d26b5bdaca42810aadb65760bff26b88, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d26b5bdaca42810aadb65760bff26b88->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d26b5bdaca42810aadb65760bff26b88, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d26b5bdaca42810aadb65760bff26b88,
        type_description_1,
        par_self,
        par_pin,
        par_mode,
        par_pull_up_down
    );


    // Release cached frame.
    if ( frame_d26b5bdaca42810aadb65760bff26b88 == cache_frame_d26b5bdaca42810aadb65760bff26b88 )
    {
        Py_DECREF( frame_d26b5bdaca42810aadb65760bff26b88 );
    }
    cache_frame_d26b5bdaca42810aadb65760bff26b88 = NULL;

    assertFrameObject( frame_d26b5bdaca42810aadb65760bff26b88 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_31_setup );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_pull_up_down );
    Py_DECREF( par_pull_up_down );
    par_pull_up_down = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pull_up_down );
    Py_DECREF( par_pull_up_down );
    par_pull_up_down = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_31_setup );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_32_output( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    PyObject *par_value = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_7cf151e9d78eba26d96743e3164d9fe7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7cf151e9d78eba26d96743e3164d9fe7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7cf151e9d78eba26d96743e3164d9fe7, codeobj_7cf151e9d78eba26d96743e3164d9fe7, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7cf151e9d78eba26d96743e3164d9fe7 = cache_frame_7cf151e9d78eba26d96743e3164d9fe7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7cf151e9d78eba26d96743e3164d9fe7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7cf151e9d78eba26d96743e3164d9fe7 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_bbio_gpio );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 284;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pin );
        tmp_args_element_name_1 = par_pin;
        CHECK_OBJECT( par_value );
        tmp_args_element_name_2 = par_value;
        frame_7cf151e9d78eba26d96743e3164d9fe7->m_frame.f_lineno = 284;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_output, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 284;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7cf151e9d78eba26d96743e3164d9fe7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7cf151e9d78eba26d96743e3164d9fe7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7cf151e9d78eba26d96743e3164d9fe7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7cf151e9d78eba26d96743e3164d9fe7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7cf151e9d78eba26d96743e3164d9fe7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7cf151e9d78eba26d96743e3164d9fe7,
        type_description_1,
        par_self,
        par_pin,
        par_value
    );


    // Release cached frame.
    if ( frame_7cf151e9d78eba26d96743e3164d9fe7 == cache_frame_7cf151e9d78eba26d96743e3164d9fe7 )
    {
        Py_DECREF( frame_7cf151e9d78eba26d96743e3164d9fe7 );
    }
    cache_frame_7cf151e9d78eba26d96743e3164d9fe7 = NULL;

    assertFrameObject( frame_7cf151e9d78eba26d96743e3164d9fe7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_32_output );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

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

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_32_output );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_33_input( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_d0efe90b516e11bd365c297d57eb8660;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d0efe90b516e11bd365c297d57eb8660 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d0efe90b516e11bd365c297d57eb8660, codeobj_d0efe90b516e11bd365c297d57eb8660, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *) );
    frame_d0efe90b516e11bd365c297d57eb8660 = cache_frame_d0efe90b516e11bd365c297d57eb8660;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d0efe90b516e11bd365c297d57eb8660 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d0efe90b516e11bd365c297d57eb8660 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_bbio_gpio );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 290;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pin );
        tmp_args_element_name_1 = par_pin;
        frame_d0efe90b516e11bd365c297d57eb8660->m_frame.f_lineno = 290;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_input, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 290;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0efe90b516e11bd365c297d57eb8660 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0efe90b516e11bd365c297d57eb8660 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0efe90b516e11bd365c297d57eb8660 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d0efe90b516e11bd365c297d57eb8660, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d0efe90b516e11bd365c297d57eb8660->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d0efe90b516e11bd365c297d57eb8660, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d0efe90b516e11bd365c297d57eb8660,
        type_description_1,
        par_self,
        par_pin
    );


    // Release cached frame.
    if ( frame_d0efe90b516e11bd365c297d57eb8660 == cache_frame_d0efe90b516e11bd365c297d57eb8660 )
    {
        Py_DECREF( frame_d0efe90b516e11bd365c297d57eb8660 );
    }
    cache_frame_d0efe90b516e11bd365c297d57eb8660 = NULL;

    assertFrameObject( frame_d0efe90b516e11bd365c297d57eb8660 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_33_input );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_33_input );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_34_input_pins( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pins = python_pars[ 1 ];
    PyObject *var_pin = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_89aaf7fdccf3149d5160c4c5b0b322b8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_89aaf7fdccf3149d5160c4c5b0b322b8 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_89aaf7fdccf3149d5160c4c5b0b322b8, codeobj_89aaf7fdccf3149d5160c4c5b0b322b8, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_89aaf7fdccf3149d5160c4c5b0b322b8 = cache_frame_89aaf7fdccf3149d5160c4c5b0b322b8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_89aaf7fdccf3149d5160c4c5b0b322b8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_89aaf7fdccf3149d5160c4c5b0b322b8 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_pins );
        tmp_iter_arg_1 = par_pins;
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 297;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert( tmp_list_contraction_1__$0 == NULL );
        tmp_list_contraction_1__$0 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyList_New( 0 );
        assert( tmp_list_contraction_1__contraction_result == NULL );
        tmp_list_contraction_1__contraction_result = tmp_assign_source_2;
    }
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_list_contraction_1__$0 );
        tmp_next_source_1 = tmp_list_contraction_1__$0;
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
                type_description_1 = "ooo";
                exception_lineno = 297;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_list_contraction_1__iter_value_0;
            tmp_list_contraction_1__iter_value_0 = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_list_contraction_1__iter_value_0 );
        tmp_assign_source_4 = tmp_list_contraction_1__iter_value_0;
        {
            PyObject *old = var_pin;
            var_pin = tmp_assign_source_4;
            Py_INCREF( var_pin );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
        tmp_append_list_1 = tmp_list_contraction_1__contraction_result;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_bbio_gpio );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 297;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_pin );
        tmp_args_element_name_1 = var_pin;
        frame_89aaf7fdccf3149d5160c4c5b0b322b8->m_frame.f_lineno = 297;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_append_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_input, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_append_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 297;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert( PyList_Check( tmp_append_list_1 ) );
        tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
        Py_DECREF( tmp_append_value_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 297;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 297;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
    tmp_return_value = tmp_list_contraction_1__contraction_result;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_34_input_pins );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__$0 );
    Py_DECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__contraction_result );
    Py_DECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

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

    Py_XDECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    Py_XDECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_34_input_pins );
    return NULL;
    outline_result_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_89aaf7fdccf3149d5160c4c5b0b322b8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_89aaf7fdccf3149d5160c4c5b0b322b8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_89aaf7fdccf3149d5160c4c5b0b322b8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_89aaf7fdccf3149d5160c4c5b0b322b8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_89aaf7fdccf3149d5160c4c5b0b322b8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_89aaf7fdccf3149d5160c4c5b0b322b8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_89aaf7fdccf3149d5160c4c5b0b322b8,
        type_description_1,
        par_self,
        par_pins,
        var_pin
    );


    // Release cached frame.
    if ( frame_89aaf7fdccf3149d5160c4c5b0b322b8 == cache_frame_89aaf7fdccf3149d5160c4c5b0b322b8 )
    {
        Py_DECREF( frame_89aaf7fdccf3149d5160c4c5b0b322b8 );
    }
    cache_frame_89aaf7fdccf3149d5160c4c5b0b322b8 = NULL;

    assertFrameObject( frame_89aaf7fdccf3149d5160c4c5b0b322b8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_34_input_pins );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_pins );
    Py_DECREF( par_pins );
    par_pins = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_pin );
    var_pin = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pins );
    Py_DECREF( par_pins );
    par_pins = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_pin );
    var_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_34_input_pins );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_35_add_event_detect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    PyObject *par_edge = python_pars[ 2 ];
    PyObject *par_callback = python_pars[ 3 ];
    PyObject *par_bouncetime = python_pars[ 4 ];
    PyObject *var_kwargs = NULL;
    struct Nuitka_FrameObject *frame_28b637ee4abaab5e4538704b4a580be9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_28b637ee4abaab5e4538704b4a580be9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_New();
        assert( var_kwargs == NULL );
        var_kwargs = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_28b637ee4abaab5e4538704b4a580be9, codeobj_28b637ee4abaab5e4538704b4a580be9, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_28b637ee4abaab5e4538704b4a580be9 = cache_frame_28b637ee4abaab5e4538704b4a580be9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_28b637ee4abaab5e4538704b4a580be9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_28b637ee4abaab5e4538704b4a580be9 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_callback );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_callback );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 306;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        CHECK_OBJECT( par_callback );
        tmp_dictset_value = par_callback;
        CHECK_OBJECT( var_kwargs );
        tmp_dictset_dict = var_kwargs;
        tmp_dictset_key = const_str_plain_callback;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_bouncetime );
        tmp_compexpr_left_1 = par_bouncetime;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 308;
            type_description_1 = "oooooo";
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
        CHECK_OBJECT( par_bouncetime );
        tmp_dictset_value = par_bouncetime;
        CHECK_OBJECT( var_kwargs );
        tmp_dictset_dict = var_kwargs;
        tmp_dictset_key = const_str_plain_bouncetime;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        branch_no_2:;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_bbio_gpio );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 310;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add_event_detect );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 310;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pin );
        tmp_tuple_element_1 = par_pin;
        tmp_dircall_arg2_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__edge_mapping );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );

            exception_lineno = 310;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_edge );
        tmp_subscript_name_1 = par_edge;
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );

            exception_lineno = 310;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( var_kwargs );
        tmp_dircall_arg3_1 = var_kwargs;
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 310;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_28b637ee4abaab5e4538704b4a580be9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_28b637ee4abaab5e4538704b4a580be9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_28b637ee4abaab5e4538704b4a580be9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_28b637ee4abaab5e4538704b4a580be9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_28b637ee4abaab5e4538704b4a580be9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_28b637ee4abaab5e4538704b4a580be9,
        type_description_1,
        par_self,
        par_pin,
        par_edge,
        par_callback,
        par_bouncetime,
        var_kwargs
    );


    // Release cached frame.
    if ( frame_28b637ee4abaab5e4538704b4a580be9 == cache_frame_28b637ee4abaab5e4538704b4a580be9 )
    {
        Py_DECREF( frame_28b637ee4abaab5e4538704b4a580be9 );
    }
    cache_frame_28b637ee4abaab5e4538704b4a580be9 = NULL;

    assertFrameObject( frame_28b637ee4abaab5e4538704b4a580be9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_35_add_event_detect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    CHECK_OBJECT( (PyObject *)par_bouncetime );
    Py_DECREF( par_bouncetime );
    par_bouncetime = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par_edge );
    Py_DECREF( par_edge );
    par_edge = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    CHECK_OBJECT( (PyObject *)par_bouncetime );
    Py_DECREF( par_bouncetime );
    par_bouncetime = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par_edge );
    Py_DECREF( par_edge );
    par_edge = NULL;

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
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_35_add_event_detect );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_36_remove_event_detect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_27d739d0c6f2c9d84fef80b185ae7b6f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_27d739d0c6f2c9d84fef80b185ae7b6f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_27d739d0c6f2c9d84fef80b185ae7b6f, codeobj_27d739d0c6f2c9d84fef80b185ae7b6f, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *) );
    frame_27d739d0c6f2c9d84fef80b185ae7b6f = cache_frame_27d739d0c6f2c9d84fef80b185ae7b6f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_27d739d0c6f2c9d84fef80b185ae7b6f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_27d739d0c6f2c9d84fef80b185ae7b6f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_bbio_gpio );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 316;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pin );
        tmp_args_element_name_1 = par_pin;
        frame_27d739d0c6f2c9d84fef80b185ae7b6f->m_frame.f_lineno = 316;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_remove_event_detect, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 316;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_27d739d0c6f2c9d84fef80b185ae7b6f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_27d739d0c6f2c9d84fef80b185ae7b6f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_27d739d0c6f2c9d84fef80b185ae7b6f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_27d739d0c6f2c9d84fef80b185ae7b6f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_27d739d0c6f2c9d84fef80b185ae7b6f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_27d739d0c6f2c9d84fef80b185ae7b6f,
        type_description_1,
        par_self,
        par_pin
    );


    // Release cached frame.
    if ( frame_27d739d0c6f2c9d84fef80b185ae7b6f == cache_frame_27d739d0c6f2c9d84fef80b185ae7b6f )
    {
        Py_DECREF( frame_27d739d0c6f2c9d84fef80b185ae7b6f );
    }
    cache_frame_27d739d0c6f2c9d84fef80b185ae7b6f = NULL;

    assertFrameObject( frame_27d739d0c6f2c9d84fef80b185ae7b6f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_36_remove_event_detect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_36_remove_event_detect );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_37_add_event_callback( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    PyObject *par_callback = python_pars[ 2 ];
    PyObject *par_bouncetime = python_pars[ 3 ];
    PyObject *var_kwargs = NULL;
    struct Nuitka_FrameObject *frame_eb58221d606ecf50d37bb3c39c01f13b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    static struct Nuitka_FrameObject *cache_frame_eb58221d606ecf50d37bb3c39c01f13b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_New();
        assert( var_kwargs == NULL );
        var_kwargs = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_eb58221d606ecf50d37bb3c39c01f13b, codeobj_eb58221d606ecf50d37bb3c39c01f13b, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_eb58221d606ecf50d37bb3c39c01f13b = cache_frame_eb58221d606ecf50d37bb3c39c01f13b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_eb58221d606ecf50d37bb3c39c01f13b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_eb58221d606ecf50d37bb3c39c01f13b ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_bouncetime );
        tmp_compexpr_left_1 = par_bouncetime;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 324;
            type_description_1 = "ooooo";
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
        CHECK_OBJECT( par_bouncetime );
        tmp_dictset_value = par_bouncetime;
        CHECK_OBJECT( var_kwargs );
        tmp_dictset_dict = var_kwargs;
        tmp_dictset_key = const_str_plain_bouncetime;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        branch_no_1:;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_bbio_gpio );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 326;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add_event_callback );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 326;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pin );
        tmp_tuple_element_1 = par_pin;
        tmp_dircall_arg2_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_callback );
        tmp_tuple_element_1 = par_callback;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( var_kwargs );
        tmp_dircall_arg3_1 = var_kwargs;
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 326;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb58221d606ecf50d37bb3c39c01f13b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb58221d606ecf50d37bb3c39c01f13b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_eb58221d606ecf50d37bb3c39c01f13b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_eb58221d606ecf50d37bb3c39c01f13b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_eb58221d606ecf50d37bb3c39c01f13b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_eb58221d606ecf50d37bb3c39c01f13b,
        type_description_1,
        par_self,
        par_pin,
        par_callback,
        par_bouncetime,
        var_kwargs
    );


    // Release cached frame.
    if ( frame_eb58221d606ecf50d37bb3c39c01f13b == cache_frame_eb58221d606ecf50d37bb3c39c01f13b )
    {
        Py_DECREF( frame_eb58221d606ecf50d37bb3c39c01f13b );
    }
    cache_frame_eb58221d606ecf50d37bb3c39c01f13b = NULL;

    assertFrameObject( frame_eb58221d606ecf50d37bb3c39c01f13b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_37_add_event_callback );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    CHECK_OBJECT( (PyObject *)par_bouncetime );
    Py_DECREF( par_bouncetime );
    par_bouncetime = NULL;

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

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    CHECK_OBJECT( (PyObject *)par_bouncetime );
    Py_DECREF( par_bouncetime );
    par_bouncetime = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_37_add_event_callback );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_38_event_detected( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_c9013c4fd4db903a839b3a99e6450893;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c9013c4fd4db903a839b3a99e6450893 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c9013c4fd4db903a839b3a99e6450893, codeobj_c9013c4fd4db903a839b3a99e6450893, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *) );
    frame_c9013c4fd4db903a839b3a99e6450893 = cache_frame_c9013c4fd4db903a839b3a99e6450893;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c9013c4fd4db903a839b3a99e6450893 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c9013c4fd4db903a839b3a99e6450893 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_bbio_gpio );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 333;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pin );
        tmp_args_element_name_1 = par_pin;
        frame_c9013c4fd4db903a839b3a99e6450893->m_frame.f_lineno = 333;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_event_detected, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 333;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c9013c4fd4db903a839b3a99e6450893 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c9013c4fd4db903a839b3a99e6450893 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c9013c4fd4db903a839b3a99e6450893 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c9013c4fd4db903a839b3a99e6450893, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c9013c4fd4db903a839b3a99e6450893->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c9013c4fd4db903a839b3a99e6450893, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c9013c4fd4db903a839b3a99e6450893,
        type_description_1,
        par_self,
        par_pin
    );


    // Release cached frame.
    if ( frame_c9013c4fd4db903a839b3a99e6450893 == cache_frame_c9013c4fd4db903a839b3a99e6450893 )
    {
        Py_DECREF( frame_c9013c4fd4db903a839b3a99e6450893 );
    }
    cache_frame_c9013c4fd4db903a839b3a99e6450893 = NULL;

    assertFrameObject( frame_c9013c4fd4db903a839b3a99e6450893 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_38_event_detected );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_38_event_detected );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_39_wait_for_edge( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    PyObject *par_edge = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_2402ec2b4f4acc992e70ebbe2c45dff7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2402ec2b4f4acc992e70ebbe2c45dff7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2402ec2b4f4acc992e70ebbe2c45dff7, codeobj_2402ec2b4f4acc992e70ebbe2c45dff7, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2402ec2b4f4acc992e70ebbe2c45dff7 = cache_frame_2402ec2b4f4acc992e70ebbe2c45dff7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2402ec2b4f4acc992e70ebbe2c45dff7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2402ec2b4f4acc992e70ebbe2c45dff7 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_bbio_gpio );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 339;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_wait_for_edge );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 339;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pin );
        tmp_args_element_name_1 = par_pin;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__edge_mapping );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 339;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_edge );
        tmp_subscript_name_1 = par_edge;
        tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 339;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_2402ec2b4f4acc992e70ebbe2c45dff7->m_frame.f_lineno = 339;
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


            exception_lineno = 339;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2402ec2b4f4acc992e70ebbe2c45dff7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2402ec2b4f4acc992e70ebbe2c45dff7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2402ec2b4f4acc992e70ebbe2c45dff7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2402ec2b4f4acc992e70ebbe2c45dff7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2402ec2b4f4acc992e70ebbe2c45dff7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2402ec2b4f4acc992e70ebbe2c45dff7,
        type_description_1,
        par_self,
        par_pin,
        par_edge
    );


    // Release cached frame.
    if ( frame_2402ec2b4f4acc992e70ebbe2c45dff7 == cache_frame_2402ec2b4f4acc992e70ebbe2c45dff7 )
    {
        Py_DECREF( frame_2402ec2b4f4acc992e70ebbe2c45dff7 );
    }
    cache_frame_2402ec2b4f4acc992e70ebbe2c45dff7 = NULL;

    assertFrameObject( frame_2402ec2b4f4acc992e70ebbe2c45dff7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_39_wait_for_edge );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_edge );
    Py_DECREF( par_edge );
    par_edge = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

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

    CHECK_OBJECT( (PyObject *)par_edge );
    Py_DECREF( par_edge );
    par_edge = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_39_wait_for_edge );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_40_cleanup( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_425dd2042b0b2769d8a690bb6765ee3e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_425dd2042b0b2769d8a690bb6765ee3e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_425dd2042b0b2769d8a690bb6765ee3e, codeobj_425dd2042b0b2769d8a690bb6765ee3e, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *) );
    frame_425dd2042b0b2769d8a690bb6765ee3e = cache_frame_425dd2042b0b2769d8a690bb6765ee3e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_425dd2042b0b2769d8a690bb6765ee3e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_425dd2042b0b2769d8a690bb6765ee3e ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_pin );
        tmp_compexpr_left_1 = par_pin;
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
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_1 = par_self;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_bbio_gpio );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 346;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_425dd2042b0b2769d8a690bb6765ee3e->m_frame.f_lineno = 346;
            tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_cleanup );
            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 346;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_bbio_gpio );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 348;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_pin );
            tmp_args_element_name_1 = par_pin;
            frame_425dd2042b0b2769d8a690bb6765ee3e->m_frame.f_lineno = 348;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_cleanup, call_args );
            }

            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 348;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_425dd2042b0b2769d8a690bb6765ee3e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_425dd2042b0b2769d8a690bb6765ee3e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_425dd2042b0b2769d8a690bb6765ee3e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_425dd2042b0b2769d8a690bb6765ee3e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_425dd2042b0b2769d8a690bb6765ee3e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_425dd2042b0b2769d8a690bb6765ee3e,
        type_description_1,
        par_self,
        par_pin
    );


    // Release cached frame.
    if ( frame_425dd2042b0b2769d8a690bb6765ee3e == cache_frame_425dd2042b0b2769d8a690bb6765ee3e )
    {
        Py_DECREF( frame_425dd2042b0b2769d8a690bb6765ee3e );
    }
    cache_frame_425dd2042b0b2769d8a690bb6765ee3e = NULL;

    assertFrameObject( frame_425dd2042b0b2769d8a690bb6765ee3e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_40_cleanup );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_40_cleanup );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_41___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_mraa_gpio = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_2907e91a8a3a38d923f89bb4592f03be;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_2907e91a8a3a38d923f89bb4592f03be = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2907e91a8a3a38d923f89bb4592f03be, codeobj_2907e91a8a3a38d923f89bb4592f03be, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *) );
    frame_2907e91a8a3a38d923f89bb4592f03be = cache_frame_2907e91a8a3a38d923f89bb4592f03be;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2907e91a8a3a38d923f89bb4592f03be );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2907e91a8a3a38d923f89bb4592f03be ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_mraa_gpio );
        tmp_assattr_name_1 = par_mraa_gpio;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_mraa_gpio, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 354;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_mraa_gpio );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 356;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_DIR_OUT );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 356;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_OUT );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OUT );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_dict_value_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "OUT" );
            exception_tb = NULL;

            exception_lineno = 356;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_dict_key_1 = tmp_mvar_value_1;
        tmp_assattr_name_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_assattr_name_2, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_2 );

            exception_lineno = 356;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_mraa_gpio );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_2 );

            exception_lineno = 357;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_DIR_IN );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_2 );

            exception_lineno = 357;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_IN );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IN );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_assattr_name_2 );
            Py_DECREF( tmp_dict_value_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "IN" );
            exception_tb = NULL;

            exception_lineno = 357;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_dict_key_2 = tmp_mvar_value_2;
        tmp_res = PyDict_SetItem( tmp_assattr_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_2 );

            exception_lineno = 356;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__dir_mapping, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 356;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_source_name_7;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_source_name_9;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_mraa_gpio );
        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 358;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_MODE_STRONG );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_dict_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 358;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_PUD_OFF );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PUD_OFF );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_dict_value_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PUD_OFF" );
            exception_tb = NULL;

            exception_lineno = 358;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_dict_key_3 = tmp_mvar_value_3;
        tmp_assattr_name_3 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_assattr_name_3, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_3 );

            exception_lineno = 358;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_mraa_gpio );
        if ( tmp_source_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_3 );

            exception_lineno = 359;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_MODE_HIZ );
        Py_DECREF( tmp_source_name_7 );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_3 );

            exception_lineno = 359;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_PUD_UP );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PUD_UP );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_assattr_name_3 );
            Py_DECREF( tmp_dict_value_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PUD_UP" );
            exception_tb = NULL;

            exception_lineno = 359;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_dict_key_4 = tmp_mvar_value_4;
        tmp_res = PyDict_SetItem( tmp_assattr_name_3, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_3 );

            exception_lineno = 358;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_10 = par_self;
        tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_mraa_gpio );
        if ( tmp_source_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_3 );

            exception_lineno = 360;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_MODE_PULLDOWN );
        Py_DECREF( tmp_source_name_9 );
        if ( tmp_dict_value_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_3 );

            exception_lineno = 360;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_PUD_DOWN );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PUD_DOWN );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_assattr_name_3 );
            Py_DECREF( tmp_dict_value_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PUD_DOWN" );
            exception_tb = NULL;

            exception_lineno = 360;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_dict_key_5 = tmp_mvar_value_5;
        tmp_res = PyDict_SetItem( tmp_assattr_name_3, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_value_5 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_3 );

            exception_lineno = 358;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__pud_mapping, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 358;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_source_name_11;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_source_name_13;
        PyObject *tmp_source_name_14;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_source_name_15;
        PyObject *tmp_source_name_16;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_12 = par_self;
        tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_mraa_gpio );
        if ( tmp_source_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 361;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_EDGE_RISING );
        Py_DECREF( tmp_source_name_11 );
        if ( tmp_dict_value_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 361;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_RISING );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RISING );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_dict_value_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "RISING" );
            exception_tb = NULL;

            exception_lineno = 361;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_dict_key_6 = tmp_mvar_value_6;
        tmp_assattr_name_4 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_assattr_name_4, tmp_dict_key_6, tmp_dict_value_6 );
        Py_DECREF( tmp_dict_value_6 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_4 );

            exception_lineno = 361;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_14 = par_self;
        tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_mraa_gpio );
        if ( tmp_source_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_4 );

            exception_lineno = 362;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_EDGE_FALLING );
        Py_DECREF( tmp_source_name_13 );
        if ( tmp_dict_value_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_4 );

            exception_lineno = 362;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_FALLING );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FALLING );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_assattr_name_4 );
            Py_DECREF( tmp_dict_value_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "FALLING" );
            exception_tb = NULL;

            exception_lineno = 362;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_dict_key_7 = tmp_mvar_value_7;
        tmp_res = PyDict_SetItem( tmp_assattr_name_4, tmp_dict_key_7, tmp_dict_value_7 );
        Py_DECREF( tmp_dict_value_7 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_4 );

            exception_lineno = 361;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_16 = par_self;
        tmp_source_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_mraa_gpio );
        if ( tmp_source_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_4 );

            exception_lineno = 363;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_8 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_EDGE_BOTH );
        Py_DECREF( tmp_source_name_15 );
        if ( tmp_dict_value_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_4 );

            exception_lineno = 363;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_BOTH );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOTH );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_assattr_name_4 );
            Py_DECREF( tmp_dict_value_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "BOTH" );
            exception_tb = NULL;

            exception_lineno = 363;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_dict_key_8 = tmp_mvar_value_8;
        tmp_res = PyDict_SetItem( tmp_assattr_name_4, tmp_dict_key_8, tmp_dict_value_8 );
        Py_DECREF( tmp_dict_value_8 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_4 );

            exception_lineno = 361;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__edge_mapping, tmp_assattr_name_4 );
        Py_DECREF( tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 361;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2907e91a8a3a38d923f89bb4592f03be );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2907e91a8a3a38d923f89bb4592f03be );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2907e91a8a3a38d923f89bb4592f03be, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2907e91a8a3a38d923f89bb4592f03be->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2907e91a8a3a38d923f89bb4592f03be, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2907e91a8a3a38d923f89bb4592f03be,
        type_description_1,
        par_self,
        par_mraa_gpio
    );


    // Release cached frame.
    if ( frame_2907e91a8a3a38d923f89bb4592f03be == cache_frame_2907e91a8a3a38d923f89bb4592f03be )
    {
        Py_DECREF( frame_2907e91a8a3a38d923f89bb4592f03be );
    }
    cache_frame_2907e91a8a3a38d923f89bb4592f03be = NULL;

    assertFrameObject( frame_2907e91a8a3a38d923f89bb4592f03be );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_41___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_mraa_gpio );
    Py_DECREF( par_mraa_gpio );
    par_mraa_gpio = NULL;

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

    CHECK_OBJECT( (PyObject *)par_mraa_gpio );
    Py_DECREF( par_mraa_gpio );
    par_mraa_gpio = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_41___init__ );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_42_setup( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    PyObject *par_mode = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_c50608961db699aacda65761a4e0b635;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c50608961db699aacda65761a4e0b635 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c50608961db699aacda65761a4e0b635, codeobj_c50608961db699aacda65761a4e0b635, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c50608961db699aacda65761a4e0b635 = cache_frame_c50608961db699aacda65761a4e0b635;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c50608961db699aacda65761a4e0b635 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c50608961db699aacda65761a4e0b635 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_mraa_gpio );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 369;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Gpio );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 369;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dir );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 369;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_mraa_gpio );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 369;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pin );
        tmp_args_element_name_2 = par_pin;
        frame_c50608961db699aacda65761a4e0b635->m_frame.f_lineno = 369;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_Gpio, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 369;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__dir_mapping );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 369;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_mode );
        tmp_subscript_name_1 = par_mode;
        tmp_args_element_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 369;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c50608961db699aacda65761a4e0b635->m_frame.f_lineno = 369;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 369;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c50608961db699aacda65761a4e0b635 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c50608961db699aacda65761a4e0b635 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c50608961db699aacda65761a4e0b635, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c50608961db699aacda65761a4e0b635->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c50608961db699aacda65761a4e0b635, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c50608961db699aacda65761a4e0b635,
        type_description_1,
        par_self,
        par_pin,
        par_mode
    );


    // Release cached frame.
    if ( frame_c50608961db699aacda65761a4e0b635 == cache_frame_c50608961db699aacda65761a4e0b635 )
    {
        Py_DECREF( frame_c50608961db699aacda65761a4e0b635 );
    }
    cache_frame_c50608961db699aacda65761a4e0b635 = NULL;

    assertFrameObject( frame_c50608961db699aacda65761a4e0b635 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_42_setup );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_42_setup );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_43_output( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    PyObject *par_value = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_5163ca3646c6d1c40f895c893b983698;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5163ca3646c6d1c40f895c893b983698 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5163ca3646c6d1c40f895c893b983698, codeobj_5163ca3646c6d1c40f895c893b983698, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5163ca3646c6d1c40f895c893b983698 = cache_frame_5163ca3646c6d1c40f895c893b983698;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5163ca3646c6d1c40f895c893b983698 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5163ca3646c6d1c40f895c893b983698 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_mraa_gpio );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 375;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Gpio );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 375;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_write );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 375;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_mraa_gpio );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 375;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pin );
        tmp_args_element_name_2 = par_pin;
        frame_5163ca3646c6d1c40f895c893b983698->m_frame.f_lineno = 375;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_Gpio, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 375;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_value );
        tmp_args_element_name_3 = par_value;
        frame_5163ca3646c6d1c40f895c893b983698->m_frame.f_lineno = 375;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 375;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5163ca3646c6d1c40f895c893b983698 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5163ca3646c6d1c40f895c893b983698 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5163ca3646c6d1c40f895c893b983698, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5163ca3646c6d1c40f895c893b983698->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5163ca3646c6d1c40f895c893b983698, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5163ca3646c6d1c40f895c893b983698,
        type_description_1,
        par_self,
        par_pin,
        par_value
    );


    // Release cached frame.
    if ( frame_5163ca3646c6d1c40f895c893b983698 == cache_frame_5163ca3646c6d1c40f895c893b983698 )
    {
        Py_DECREF( frame_5163ca3646c6d1c40f895c893b983698 );
    }
    cache_frame_5163ca3646c6d1c40f895c893b983698 = NULL;

    assertFrameObject( frame_5163ca3646c6d1c40f895c893b983698 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_43_output );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

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

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_43_output );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_44_input( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_43cbb40ac6e6b07f3e3fc425603186a8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_43cbb40ac6e6b07f3e3fc425603186a8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_43cbb40ac6e6b07f3e3fc425603186a8, codeobj_43cbb40ac6e6b07f3e3fc425603186a8, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *) );
    frame_43cbb40ac6e6b07f3e3fc425603186a8 = cache_frame_43cbb40ac6e6b07f3e3fc425603186a8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_43cbb40ac6e6b07f3e3fc425603186a8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_43cbb40ac6e6b07f3e3fc425603186a8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_mraa_gpio );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 381;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Gpio );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 381;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_read );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 381;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_mraa_gpio );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 381;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pin );
        tmp_args_element_name_2 = par_pin;
        frame_43cbb40ac6e6b07f3e3fc425603186a8->m_frame.f_lineno = 381;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_Gpio, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 381;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_43cbb40ac6e6b07f3e3fc425603186a8->m_frame.f_lineno = 381;
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


            exception_lineno = 381;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_43cbb40ac6e6b07f3e3fc425603186a8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_43cbb40ac6e6b07f3e3fc425603186a8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_43cbb40ac6e6b07f3e3fc425603186a8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_43cbb40ac6e6b07f3e3fc425603186a8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_43cbb40ac6e6b07f3e3fc425603186a8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_43cbb40ac6e6b07f3e3fc425603186a8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_43cbb40ac6e6b07f3e3fc425603186a8,
        type_description_1,
        par_self,
        par_pin
    );


    // Release cached frame.
    if ( frame_43cbb40ac6e6b07f3e3fc425603186a8 == cache_frame_43cbb40ac6e6b07f3e3fc425603186a8 )
    {
        Py_DECREF( frame_43cbb40ac6e6b07f3e3fc425603186a8 );
    }
    cache_frame_43cbb40ac6e6b07f3e3fc425603186a8 = NULL;

    assertFrameObject( frame_43cbb40ac6e6b07f3e3fc425603186a8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_44_input );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_44_input );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_45_add_event_detect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    PyObject *par_edge = python_pars[ 2 ];
    PyObject *par_callback = python_pars[ 3 ];
    PyObject *par_bouncetime = python_pars[ 4 ];
    PyObject *var_kwargs = NULL;
    struct Nuitka_FrameObject *frame_2c1a7e65e7bdb39fa939d416722f6fec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_2c1a7e65e7bdb39fa939d416722f6fec = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_New();
        assert( var_kwargs == NULL );
        var_kwargs = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2c1a7e65e7bdb39fa939d416722f6fec, codeobj_2c1a7e65e7bdb39fa939d416722f6fec, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2c1a7e65e7bdb39fa939d416722f6fec = cache_frame_2c1a7e65e7bdb39fa939d416722f6fec;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2c1a7e65e7bdb39fa939d416722f6fec );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2c1a7e65e7bdb39fa939d416722f6fec ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_callback );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_callback );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 390;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        CHECK_OBJECT( par_callback );
        tmp_dictset_value = par_callback;
        CHECK_OBJECT( var_kwargs );
        tmp_dictset_dict = var_kwargs;
        tmp_dictset_key = const_str_plain_callback;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_bouncetime );
        tmp_compexpr_left_1 = par_bouncetime;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 392;
            type_description_1 = "oooooo";
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
        CHECK_OBJECT( par_bouncetime );
        tmp_dictset_value = par_bouncetime;
        CHECK_OBJECT( var_kwargs );
        tmp_dictset_dict = var_kwargs;
        tmp_dictset_key = const_str_plain_bouncetime;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        branch_no_2:;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_mraa_gpio );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 394;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Gpio );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 394;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_isr );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 394;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_mraa_gpio );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );

            exception_lineno = 394;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pin );
        tmp_args_element_name_1 = par_pin;
        frame_2c1a7e65e7bdb39fa939d416722f6fec->m_frame.f_lineno = 394;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_Gpio, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );

            exception_lineno = 394;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__edge_mapping );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );

            exception_lineno = 394;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_edge );
        tmp_subscript_name_1 = par_edge;
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );

            exception_lineno = 394;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( var_kwargs );
        tmp_dircall_arg3_1 = var_kwargs;
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 394;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2c1a7e65e7bdb39fa939d416722f6fec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2c1a7e65e7bdb39fa939d416722f6fec );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2c1a7e65e7bdb39fa939d416722f6fec, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2c1a7e65e7bdb39fa939d416722f6fec->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2c1a7e65e7bdb39fa939d416722f6fec, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2c1a7e65e7bdb39fa939d416722f6fec,
        type_description_1,
        par_self,
        par_pin,
        par_edge,
        par_callback,
        par_bouncetime,
        var_kwargs
    );


    // Release cached frame.
    if ( frame_2c1a7e65e7bdb39fa939d416722f6fec == cache_frame_2c1a7e65e7bdb39fa939d416722f6fec )
    {
        Py_DECREF( frame_2c1a7e65e7bdb39fa939d416722f6fec );
    }
    cache_frame_2c1a7e65e7bdb39fa939d416722f6fec = NULL;

    assertFrameObject( frame_2c1a7e65e7bdb39fa939d416722f6fec );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_45_add_event_detect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    CHECK_OBJECT( (PyObject *)par_bouncetime );
    Py_DECREF( par_bouncetime );
    par_bouncetime = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par_edge );
    Py_DECREF( par_edge );
    par_edge = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    CHECK_OBJECT( (PyObject *)par_bouncetime );
    Py_DECREF( par_bouncetime );
    par_bouncetime = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par_edge );
    Py_DECREF( par_edge );
    par_edge = NULL;

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
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_45_add_event_detect );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_46_remove_event_detect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_acc1230906b1a5d3f466c6931ad275d4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_acc1230906b1a5d3f466c6931ad275d4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_acc1230906b1a5d3f466c6931ad275d4, codeobj_acc1230906b1a5d3f466c6931ad275d4, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *) );
    frame_acc1230906b1a5d3f466c6931ad275d4 = cache_frame_acc1230906b1a5d3f466c6931ad275d4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_acc1230906b1a5d3f466c6931ad275d4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_acc1230906b1a5d3f466c6931ad275d4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_mraa_gpio );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 400;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Gpio );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 400;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_isrExit );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 400;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_mraa_gpio );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 400;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pin );
        tmp_args_element_name_2 = par_pin;
        frame_acc1230906b1a5d3f466c6931ad275d4->m_frame.f_lineno = 400;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_Gpio, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 400;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_acc1230906b1a5d3f466c6931ad275d4->m_frame.f_lineno = 400;
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


            exception_lineno = 400;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_acc1230906b1a5d3f466c6931ad275d4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_acc1230906b1a5d3f466c6931ad275d4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_acc1230906b1a5d3f466c6931ad275d4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_acc1230906b1a5d3f466c6931ad275d4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_acc1230906b1a5d3f466c6931ad275d4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_acc1230906b1a5d3f466c6931ad275d4,
        type_description_1,
        par_self,
        par_pin
    );


    // Release cached frame.
    if ( frame_acc1230906b1a5d3f466c6931ad275d4 == cache_frame_acc1230906b1a5d3f466c6931ad275d4 )
    {
        Py_DECREF( frame_acc1230906b1a5d3f466c6931ad275d4 );
    }
    cache_frame_acc1230906b1a5d3f466c6931ad275d4 = NULL;

    assertFrameObject( frame_acc1230906b1a5d3f466c6931ad275d4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_46_remove_event_detect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_46_remove_event_detect );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_47_wait_for_edge( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pin = python_pars[ 1 ];
    PyObject *par_edge = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_a30eca6b51f46cd71a9f07469f24ca0e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a30eca6b51f46cd71a9f07469f24ca0e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a30eca6b51f46cd71a9f07469f24ca0e, codeobj_a30eca6b51f46cd71a9f07469f24ca0e, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a30eca6b51f46cd71a9f07469f24ca0e = cache_frame_a30eca6b51f46cd71a9f07469f24ca0e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a30eca6b51f46cd71a9f07469f24ca0e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a30eca6b51f46cd71a9f07469f24ca0e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_bbio_gpio );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_wait_for_edge );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_mraa_gpio );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 406;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pin );
        tmp_args_element_name_2 = par_pin;
        frame_a30eca6b51f46cd71a9f07469f24ca0e->m_frame.f_lineno = 406;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_Gpio, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 406;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__edge_mapping );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 406;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_edge );
        tmp_subscript_name_1 = par_edge;
        tmp_args_element_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 406;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_a30eca6b51f46cd71a9f07469f24ca0e->m_frame.f_lineno = 406;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a30eca6b51f46cd71a9f07469f24ca0e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a30eca6b51f46cd71a9f07469f24ca0e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a30eca6b51f46cd71a9f07469f24ca0e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a30eca6b51f46cd71a9f07469f24ca0e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a30eca6b51f46cd71a9f07469f24ca0e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a30eca6b51f46cd71a9f07469f24ca0e,
        type_description_1,
        par_self,
        par_pin,
        par_edge
    );


    // Release cached frame.
    if ( frame_a30eca6b51f46cd71a9f07469f24ca0e == cache_frame_a30eca6b51f46cd71a9f07469f24ca0e )
    {
        Py_DECREF( frame_a30eca6b51f46cd71a9f07469f24ca0e );
    }
    cache_frame_a30eca6b51f46cd71a9f07469f24ca0e = NULL;

    assertFrameObject( frame_a30eca6b51f46cd71a9f07469f24ca0e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_47_wait_for_edge );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_edge );
    Py_DECREF( par_edge );
    par_edge = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

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

    CHECK_OBJECT( (PyObject *)par_edge );
    Py_DECREF( par_edge );
    par_edge = NULL;

    CHECK_OBJECT( (PyObject *)par_pin );
    Py_DECREF( par_pin );
    par_pin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_47_wait_for_edge );
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


static PyObject *impl_Adafruit_GPIO$GPIO$$$function_48_get_platform_gpio( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_keywords = python_pars[ 0 ];
    PyObject *var_RPi = NULL;
    PyObject *var_mraa = NULL;
    PyObject *var_Adafruit_BBIO = NULL;
    PyObject *var_plat = NULL;
    struct Nuitka_FrameObject *frame_111c602ee4a77d5febad84b706a18d4b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_111c602ee4a77d5febad84b706a18d4b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_111c602ee4a77d5febad84b706a18d4b, codeobj_111c602ee4a77d5febad84b706a18d4b, module_Adafruit_GPIO$GPIO, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_111c602ee4a77d5febad84b706a18d4b = cache_frame_111c602ee4a77d5febad84b706a18d4b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_111c602ee4a77d5febad84b706a18d4b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_111c602ee4a77d5febad84b706a18d4b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_Platform );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Platform );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "Platform" );
            exception_tb = NULL;

            exception_lineno = 415;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_111c602ee4a77d5febad84b706a18d4b->m_frame.f_lineno = 415;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_platform_detect );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 415;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_plat == NULL );
        var_plat = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( var_plat );
        tmp_compexpr_left_1 = var_plat;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_Platform );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Platform );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "Platform" );
            exception_tb = NULL;

            exception_lineno = 416;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_RASPBERRY_PI );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;
            type_description_1 = "ooooo";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_name_name_1;
            PyObject *tmp_globals_name_1;
            PyObject *tmp_locals_name_1;
            PyObject *tmp_fromlist_name_1;
            tmp_name_name_1 = const_str_digest_49797bf29503761b116e94d134df9c96;
            tmp_globals_name_1 = (PyObject *)moduledict_Adafruit_GPIO$GPIO;
            tmp_locals_name_1 = Py_None;
            tmp_fromlist_name_1 = Py_None;
            frame_111c602ee4a77d5febad84b706a18d4b->m_frame.f_lineno = 417;
            tmp_assign_source_2 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 417;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_RPi == NULL );
            var_RPi = tmp_assign_source_2;
        }
        {
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_dircall_arg3_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_RPiGPIOAdapter );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RPiGPIOAdapter );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "RPiGPIOAdapter" );
                exception_tb = NULL;

                exception_lineno = 418;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_dircall_arg1_1 = tmp_mvar_value_3;
            CHECK_OBJECT( var_RPi );
            tmp_source_name_2 = var_RPi;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_GPIO );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 418;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_dircall_arg2_1 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_keywords );
            tmp_dircall_arg3_1 = par_keywords;
            Py_INCREF( tmp_dircall_arg1_1 );
            Py_INCREF( tmp_dircall_arg3_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
                tmp_return_value = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
            }
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 418;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_4;
            CHECK_OBJECT( var_plat );
            tmp_compexpr_left_2 = var_plat;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_Platform );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Platform );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "Platform" );
                exception_tb = NULL;

                exception_lineno = 419;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_4;
            tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_BEAGLEBONE_BLACK );
            if ( tmp_compexpr_right_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 419;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 419;
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
                PyObject *tmp_assign_source_3;
                PyObject *tmp_name_name_2;
                PyObject *tmp_globals_name_2;
                PyObject *tmp_locals_name_2;
                PyObject *tmp_fromlist_name_2;
                tmp_name_name_2 = const_str_digest_6b99443974da1532b1b6cb87869b70f2;
                tmp_globals_name_2 = (PyObject *)moduledict_Adafruit_GPIO$GPIO;
                tmp_locals_name_2 = Py_None;
                tmp_fromlist_name_2 = Py_None;
                frame_111c602ee4a77d5febad84b706a18d4b->m_frame.f_lineno = 420;
                tmp_assign_source_3 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 420;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_Adafruit_BBIO == NULL );
                var_Adafruit_BBIO = tmp_assign_source_3;
            }
            {
                PyObject *tmp_dircall_arg1_2;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_dircall_arg2_2;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_source_name_4;
                PyObject *tmp_dircall_arg3_2;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_AdafruitBBIOAdapter );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AdafruitBBIOAdapter );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "AdafruitBBIOAdapter" );
                    exception_tb = NULL;

                    exception_lineno = 421;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_dircall_arg1_2 = tmp_mvar_value_5;
                CHECK_OBJECT( var_Adafruit_BBIO );
                tmp_source_name_4 = var_Adafruit_BBIO;
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_GPIO );
                if ( tmp_tuple_element_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 421;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_dircall_arg2_2 = PyTuple_New( 1 );
                PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_2 );
                CHECK_OBJECT( par_keywords );
                tmp_dircall_arg3_2 = par_keywords;
                Py_INCREF( tmp_dircall_arg1_2 );
                Py_INCREF( tmp_dircall_arg3_2 );

                {
                    PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
                    tmp_return_value = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
                }
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 421;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                PyObject *tmp_source_name_5;
                PyObject *tmp_mvar_value_6;
                CHECK_OBJECT( var_plat );
                tmp_compexpr_left_3 = var_plat;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_Platform );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Platform );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "Platform" );
                    exception_tb = NULL;

                    exception_lineno = 422;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_5 = tmp_mvar_value_6;
                tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_MINNOWBOARD );
                if ( tmp_compexpr_right_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 422;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                Py_DECREF( tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 422;
                    type_description_1 = "ooooo";
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
                    PyObject *tmp_assign_source_4;
                    PyObject *tmp_name_name_3;
                    PyObject *tmp_globals_name_3;
                    PyObject *tmp_locals_name_3;
                    PyObject *tmp_fromlist_name_3;
                    tmp_name_name_3 = const_str_plain_mraa;
                    tmp_globals_name_3 = (PyObject *)moduledict_Adafruit_GPIO$GPIO;
                    tmp_locals_name_3 = Py_None;
                    tmp_fromlist_name_3 = Py_None;
                    frame_111c602ee4a77d5febad84b706a18d4b->m_frame.f_lineno = 423;
                    tmp_assign_source_4 = IMPORT_MODULE4( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
                    if ( tmp_assign_source_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 423;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_mraa == NULL );
                    var_mraa = tmp_assign_source_4;
                }
                {
                    PyObject *tmp_dircall_arg1_3;
                    PyObject *tmp_mvar_value_7;
                    PyObject *tmp_dircall_arg2_3;
                    PyObject *tmp_tuple_element_3;
                    PyObject *tmp_dircall_arg3_3;
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_AdafruitMinnowAdapter );

                    if (unlikely( tmp_mvar_value_7 == NULL ))
                    {
                        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AdafruitMinnowAdapter );
                    }

                    if ( tmp_mvar_value_7 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "AdafruitMinnowAdapter" );
                        exception_tb = NULL;

                        exception_lineno = 424;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_dircall_arg1_3 = tmp_mvar_value_7;
                    CHECK_OBJECT( var_mraa );
                    tmp_tuple_element_3 = var_mraa;
                    tmp_dircall_arg2_3 = PyTuple_New( 1 );
                    Py_INCREF( tmp_tuple_element_3 );
                    PyTuple_SET_ITEM( tmp_dircall_arg2_3, 0, tmp_tuple_element_3 );
                    CHECK_OBJECT( par_keywords );
                    tmp_dircall_arg3_3 = par_keywords;
                    Py_INCREF( tmp_dircall_arg1_3 );
                    Py_INCREF( tmp_dircall_arg3_3 );

                    {
                        PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3, tmp_dircall_arg3_3};
                        tmp_return_value = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
                    }
                    if ( tmp_return_value == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 424;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    goto frame_return_exit_1;
                }
                goto branch_end_3;
                branch_no_3:;
                {
                    nuitka_bool tmp_condition_result_4;
                    PyObject *tmp_compexpr_left_4;
                    PyObject *tmp_compexpr_right_4;
                    PyObject *tmp_source_name_6;
                    PyObject *tmp_mvar_value_8;
                    CHECK_OBJECT( var_plat );
                    tmp_compexpr_left_4 = var_plat;
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_Platform );

                    if (unlikely( tmp_mvar_value_8 == NULL ))
                    {
                        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Platform );
                    }

                    if ( tmp_mvar_value_8 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Platform" );
                        exception_tb = NULL;

                        exception_lineno = 425;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_6 = tmp_mvar_value_8;
                    tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_UNKNOWN );
                    if ( tmp_compexpr_right_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 425;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                    Py_DECREF( tmp_compexpr_right_4 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 425;
                        type_description_1 = "ooooo";
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
                        PyObject *tmp_raise_type_1;
                        PyObject *tmp_make_exception_arg_1;
                        tmp_make_exception_arg_1 = const_str_digest_766d599cb7f71be3f24c07eef63244dc;
                        frame_111c602ee4a77d5febad84b706a18d4b->m_frame.f_lineno = 426;
                        {
                            PyObject *call_args[] = { tmp_make_exception_arg_1 };
                            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
                        }

                        assert( !(tmp_raise_type_1 == NULL) );
                        exception_type = tmp_raise_type_1;
                        exception_lineno = 426;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    branch_no_4:;
                }
                branch_end_3:;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_111c602ee4a77d5febad84b706a18d4b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_111c602ee4a77d5febad84b706a18d4b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_111c602ee4a77d5febad84b706a18d4b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_111c602ee4a77d5febad84b706a18d4b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_111c602ee4a77d5febad84b706a18d4b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_111c602ee4a77d5febad84b706a18d4b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_111c602ee4a77d5febad84b706a18d4b,
        type_description_1,
        par_keywords,
        var_RPi,
        var_mraa,
        var_Adafruit_BBIO,
        var_plat
    );


    // Release cached frame.
    if ( frame_111c602ee4a77d5febad84b706a18d4b == cache_frame_111c602ee4a77d5febad84b706a18d4b )
    {
        Py_DECREF( frame_111c602ee4a77d5febad84b706a18d4b );
    }
    cache_frame_111c602ee4a77d5febad84b706a18d4b = NULL;

    assertFrameObject( frame_111c602ee4a77d5febad84b706a18d4b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_48_get_platform_gpio );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_keywords );
    Py_DECREF( par_keywords );
    par_keywords = NULL;

    Py_XDECREF( var_RPi );
    var_RPi = NULL;

    Py_XDECREF( var_mraa );
    var_mraa = NULL;

    Py_XDECREF( var_Adafruit_BBIO );
    var_Adafruit_BBIO = NULL;

    CHECK_OBJECT( (PyObject *)var_plat );
    Py_DECREF( var_plat );
    var_plat = NULL;

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

    CHECK_OBJECT( (PyObject *)par_keywords );
    Py_DECREF( par_keywords );
    par_keywords = NULL;

    Py_XDECREF( var_RPi );
    var_RPi = NULL;

    Py_XDECREF( var_mraa );
    var_mraa = NULL;

    Py_XDECREF( var_Adafruit_BBIO );
    var_Adafruit_BBIO = NULL;

    Py_XDECREF( var_plat );
    var_plat = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO$$$function_48_get_platform_gpio );
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



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_10_input_pins(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_10_input_pins,
        const_str_plain_input_pins,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_eb99542769a517d70ac17dd27949a754,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_7ed94800bdf73a41e4b464bb7da39fe7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_11_add_event_detect(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_11_add_event_detect,
        const_str_plain_add_event_detect,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e91ecb7e4e3ea0e19afd5eca1ea7e32e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_0b80155a8f89e71a13312a78e9495dc9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_12_remove_event_detect(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_12_remove_event_detect,
        const_str_plain_remove_event_detect,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2a241e6e07c14d092adf87cd61a502a0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_6eb17c0ee325cfe4710746def5c0a93b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_13_add_event_callback(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_13_add_event_callback,
        const_str_plain_add_event_callback,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cdd48fb151971ffd0ff695cd8642d18d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_b7221a85ed184fa8248703a333f0a101,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_14_event_detected(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_14_event_detected,
        const_str_plain_event_detected,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6fff311c82798a322bafc962745c1898,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_657424a55757e074a05c8e43cdfae442,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_15_wait_for_edge(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_15_wait_for_edge,
        const_str_plain_wait_for_edge,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d8ffa8837ff680b8c5814b6e732e3dec,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_18a90e0efffabc9b97bfb0fc8b8f674d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_16_cleanup( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_16_cleanup,
        const_str_plain_cleanup,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_238036aa62f8096e13158345cf23ce0c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_dd2d54ef85917c1ce2ae4a1af50d840e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_17__validate_pin(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_17__validate_pin,
        const_str_plain__validate_pin,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c9e4c55d6b49c4a6a64f5a7137ba3245,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_18__bit2(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_18__bit2,
        const_str_plain__bit2,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_86c77260dd62c1c6b72c1f9c0e346056,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_19___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_19___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_920e083cf00a4ca9334cd06d62e761ec,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_1_setup( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_1_setup,
        const_str_plain_setup,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5287d51b1f7148d3a913dd995c66875a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_138c4d93dd3fc67e3d044c6756bdec45,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_20_setup( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_20_setup,
        const_str_plain_setup,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2183439eedca5a5b4bee128e897ee187,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_fbf657fa72f4a1bfa38e5d4cea47177e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_21_output(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_21_output,
        const_str_plain_output,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c970828ad0625418f96f48066ef193d2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_b0c19b8409f94eca5b0e77959946b86b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_22_input(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_22_input,
        const_str_plain_input,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_179acf82a8ca17f50f7a809ed6883d7f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_ce6274aaa409b6940aa2b3bba293fee3,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_23_input_pins(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_23_input_pins,
        const_str_plain_input_pins,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6996b7aed6af7873f28db084db070718,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_7ed94800bdf73a41e4b464bb7da39fe7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_24_add_event_detect( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_24_add_event_detect,
        const_str_plain_add_event_detect,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7ffd371efa89c01ac98b2a0467800fdb,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_288d139b6bc50cb797d009ea84436294,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_25_remove_event_detect(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_25_remove_event_detect,
        const_str_plain_remove_event_detect,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2b33c697b083ff7a8360ede3e8a442cf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_6eb17c0ee325cfe4710746def5c0a93b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_26_add_event_callback(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_26_add_event_callback,
        const_str_plain_add_event_callback,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_09d774ef3b9c5d5dd50650bd4b67c283,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_b7221a85ed184fa8248703a333f0a101,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_27_event_detected(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_27_event_detected,
        const_str_plain_event_detected,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fc0219a2d3291dbcf799260a92da4e27,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_e56cf319199b44a9c7b5adf68e6632f6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_28_wait_for_edge(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_28_wait_for_edge,
        const_str_plain_wait_for_edge,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_867202d8d8231adf78b747f8730479ea,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_448d719204bd32de6afb28f67b5c8013,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_29_cleanup( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_29_cleanup,
        const_str_plain_cleanup,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1fcf203f399affbc2990e0fccd3877e4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_dd2d54ef85917c1ce2ae4a1af50d840e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_2_output(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_2_output,
        const_str_plain_output,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a893672a1adbe43a5079bca1e5a26f52,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_30fd58195374785ca35bd0b0d3c917be,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_30___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_30___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_41d2ee926f918859dc41ff8b5560d987,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_31_setup( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_31_setup,
        const_str_plain_setup,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d26b5bdaca42810aadb65760bff26b88,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_fbf657fa72f4a1bfa38e5d4cea47177e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_32_output(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_32_output,
        const_str_plain_output,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7cf151e9d78eba26d96743e3164d9fe7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_b0c19b8409f94eca5b0e77959946b86b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_33_input(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_33_input,
        const_str_plain_input,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d0efe90b516e11bd365c297d57eb8660,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_ce6274aaa409b6940aa2b3bba293fee3,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_34_input_pins(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_34_input_pins,
        const_str_plain_input_pins,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_89aaf7fdccf3149d5160c4c5b0b322b8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_7ed94800bdf73a41e4b464bb7da39fe7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_35_add_event_detect( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_35_add_event_detect,
        const_str_plain_add_event_detect,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_28b637ee4abaab5e4538704b4a580be9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_dfadbe9ae0c1c944d3bffe911b53bf6e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_36_remove_event_detect(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_36_remove_event_detect,
        const_str_plain_remove_event_detect,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_27d739d0c6f2c9d84fef80b185ae7b6f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_6eb17c0ee325cfe4710746def5c0a93b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_37_add_event_callback( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_37_add_event_callback,
        const_str_plain_add_event_callback,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_eb58221d606ecf50d37bb3c39c01f13b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_113df5663eba6cc44581d61f4b216a64,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_38_event_detected(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_38_event_detected,
        const_str_plain_event_detected,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c9013c4fd4db903a839b3a99e6450893,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_657424a55757e074a05c8e43cdfae442,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_39_wait_for_edge(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_39_wait_for_edge,
        const_str_plain_wait_for_edge,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2402ec2b4f4acc992e70ebbe2c45dff7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_0b046fc1a18ad8b1121e21e8509230b2,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_3_input(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_3_input,
        const_str_plain_input,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c7700a4be0a4502c9502cb2cc6522285,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_183d1b74763deed644af481b485ab6cc,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_40_cleanup( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_40_cleanup,
        const_str_plain_cleanup,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_425dd2042b0b2769d8a690bb6765ee3e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_dd2d54ef85917c1ce2ae4a1af50d840e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_41___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_41___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2907e91a8a3a38d923f89bb4592f03be,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_42_setup(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_42_setup,
        const_str_plain_setup,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c50608961db699aacda65761a4e0b635,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_29e6d94e6d10a0a7295bc861218eb312,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_43_output(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_43_output,
        const_str_plain_output,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5163ca3646c6d1c40f895c893b983698,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_ed4c955e7ecb8ebece6bf85a9160b130,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_44_input(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_44_input,
        const_str_plain_input,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_43cbb40ac6e6b07f3e3fc425603186a8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_ce6274aaa409b6940aa2b3bba293fee3,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_45_add_event_detect( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_45_add_event_detect,
        const_str_plain_add_event_detect,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2c1a7e65e7bdb39fa939d416722f6fec,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_dfadbe9ae0c1c944d3bffe911b53bf6e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_46_remove_event_detect(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_46_remove_event_detect,
        const_str_plain_remove_event_detect,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_acc1230906b1a5d3f466c6931ad275d4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_6eb17c0ee325cfe4710746def5c0a93b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_47_wait_for_edge(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_47_wait_for_edge,
        const_str_plain_wait_for_edge,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a30eca6b51f46cd71a9f07469f24ca0e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_0b046fc1a18ad8b1121e21e8509230b2,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_48_get_platform_gpio(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_48_get_platform_gpio,
        const_str_plain_get_platform_gpio,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_111c602ee4a77d5febad84b706a18d4b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_200b41a84b3d319f2316dcb113f4bbe0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_4_set_high(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_4_set_high,
        const_str_plain_set_high,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_02e40b1ccb74e7c97769e2af4b609735,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_6a255027fbf5bb5c9bb8e3879029704f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_5_set_low(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_5_set_low,
        const_str_plain_set_low,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5ca534f63d8570168b2ffa712e66e92c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_66a8643016f56fd86cd0fb180e80f7e8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_6_is_high(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_6_is_high,
        const_str_plain_is_high,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2025f6f2cb3e7a20aad28d4aa34bde7b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_2916df7f4f2c0f1246a5a88700130961,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_7_is_low(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_7_is_low,
        const_str_plain_is_low,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_97e5299434f8b28029845a99a6bd65da,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_9dc56bc868ffa7d373ef2d66362238c8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_8_output_pins(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_8_output_pins,
        const_str_plain_output_pins,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_45512e46bb1472d6cd78ba275eb4381e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_ba3414778baf964f6b59d902ec3b755b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_9_setup_pins(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Adafruit_GPIO$GPIO$$$function_9_setup_pins,
        const_str_plain_setup_pins,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_29fadeda87e7af67a7bb3b8d36f5817d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_Adafruit_GPIO$GPIO,
        const_str_digest_04d5e5ad42d580feb0680af20b481abe,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Adafruit_GPIO$GPIO =
{
    PyModuleDef_HEAD_INIT,
    "Adafruit_GPIO.GPIO",
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

MOD_INIT_DECL( Adafruit_GPIO$GPIO )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Adafruit_GPIO$GPIO );
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
    puts("Adafruit_GPIO.GPIO: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Adafruit_GPIO.GPIO: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Adafruit_GPIO.GPIO: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initAdafruit_GPIO$GPIO" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Adafruit_GPIO$GPIO = Py_InitModule4(
        "Adafruit_GPIO.GPIO",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_Adafruit_GPIO$GPIO = PyModule_Create( &mdef_Adafruit_GPIO$GPIO );
#endif

    moduledict_Adafruit_GPIO$GPIO = MODULE_DICT( module_Adafruit_GPIO$GPIO );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_Adafruit_GPIO$GPIO,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_Adafruit_GPIO$GPIO,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_Adafruit_GPIO$GPIO,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_Adafruit_GPIO$GPIO );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_7515ad4066178aa9c8812587d34965fb, module_Adafruit_GPIO$GPIO );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class = NULL;
    PyObject *tmp_class_creation_3__class_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class = NULL;
    PyObject *tmp_class_creation_4__class_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$GPIO_38_key__bit2 = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$GPIO_38_key__validate_pin = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$GPIO_38_key_add_event_callback = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$GPIO_38_key_add_event_detect = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$GPIO_38_key_cleanup = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$GPIO_38_key_event_detected = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$GPIO_38_key_input = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$GPIO_38_key_input_pins = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$GPIO_38_key_is_high = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$GPIO_38_key_is_low = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$GPIO_38_key_output = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$GPIO_38_key_output_pins = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$GPIO_38_key_remove_event_detect = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$GPIO_38_key_set_high = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$GPIO_38_key_set_low = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$GPIO_38_key_setup = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$GPIO_38_key_setup_pins = NULL;
    PyObject *tmp_locals_Adafruit_GPIO$GPIO_38_key_wait_for_edge = NULL;
    PyObject *tmp_select_metaclass_2__base = NULL;
    PyObject *tmp_select_metaclass_3__base = NULL;
    PyObject *tmp_select_metaclass_4__base = NULL;
    struct Nuitka_FrameObject *frame_184e6829715b0b3771096887af652a7b;
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
    PyObject *locals_Adafruit_GPIO$GPIO_158 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_e89fe4547f8ad6eacfdf20a5811df72f_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_e89fe4547f8ad6eacfdf20a5811df72f_2 = NULL;
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
    PyObject *locals_Adafruit_GPIO$GPIO_256 = NULL;
    struct Nuitka_FrameObject *frame_4e795516d571ef70d886637781051b2f_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_4e795516d571ef70d886637781051b2f_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *locals_Adafruit_GPIO$GPIO_350 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_aea68454c38201ca311efebafa467138;
        UPDATE_STRING_DICT0( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_184e6829715b0b3771096887af652a7b = MAKE_MODULE_FRAME( codeobj_184e6829715b0b3771096887af652a7b, module_Adafruit_GPIO$GPIO );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_184e6829715b0b3771096887af652a7b );
    assert( Py_REFCNT( frame_184e6829715b0b3771096887af652a7b ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_digest_665d7950d7e2bef00127bfe8f69bc326;
        tmp_globals_name_1 = (PyObject *)moduledict_Adafruit_GPIO$GPIO;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        frame_184e6829715b0b3771096887af652a7b->m_frame.f_lineno = 22;
        tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Platform );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_Platform, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_int_0;
        UPDATE_STRING_DICT0( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_OUT, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = const_int_pos_1;
        UPDATE_STRING_DICT0( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_IN, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = Py_True;
        UPDATE_STRING_DICT0( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_HIGH, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_False;
        UPDATE_STRING_DICT0( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_LOW, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = const_int_pos_1;
        UPDATE_STRING_DICT0( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_RISING, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = const_int_pos_2;
        UPDATE_STRING_DICT0( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_FALLING, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = const_int_pos_3;
        UPDATE_STRING_DICT0( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_BOTH, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = const_int_0;
        UPDATE_STRING_DICT0( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_PUD_OFF, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = const_int_pos_1;
        UPDATE_STRING_DICT0( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_PUD_DOWN, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = const_int_pos_2;
        UPDATE_STRING_DICT0( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_PUD_UP, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_PUD_OFF );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PUD_OFF );
            }

            CHECK_OBJECT( tmp_mvar_value_1 );
            tmp_tuple_element_1 = tmp_mvar_value_1;
            tmp_defaults_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
            tmp_assign_source_15 = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_1_setup( tmp_defaults_1 );



            assert( tmp_locals_Adafruit_GPIO$GPIO_38_key_setup == NULL );
            tmp_locals_Adafruit_GPIO$GPIO_38_key_setup = tmp_assign_source_15;
        }
        {
            PyObject *tmp_assign_source_16;
            tmp_assign_source_16 = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_2_output(  );



            assert( tmp_locals_Adafruit_GPIO$GPIO_38_key_output == NULL );
            tmp_locals_Adafruit_GPIO$GPIO_38_key_output = tmp_assign_source_16;
        }
        {
            PyObject *tmp_assign_source_17;
            tmp_assign_source_17 = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_3_input(  );



            assert( tmp_locals_Adafruit_GPIO$GPIO_38_key_input == NULL );
            tmp_locals_Adafruit_GPIO$GPIO_38_key_input = tmp_assign_source_17;
        }
        {
            PyObject *tmp_assign_source_18;
            tmp_assign_source_18 = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_4_set_high(  );



            assert( tmp_locals_Adafruit_GPIO$GPIO_38_key_set_high == NULL );
            tmp_locals_Adafruit_GPIO$GPIO_38_key_set_high = tmp_assign_source_18;
        }
        {
            PyObject *tmp_assign_source_19;
            tmp_assign_source_19 = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_5_set_low(  );



            assert( tmp_locals_Adafruit_GPIO$GPIO_38_key_set_low == NULL );
            tmp_locals_Adafruit_GPIO$GPIO_38_key_set_low = tmp_assign_source_19;
        }
        {
            PyObject *tmp_assign_source_20;
            tmp_assign_source_20 = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_6_is_high(  );



            assert( tmp_locals_Adafruit_GPIO$GPIO_38_key_is_high == NULL );
            tmp_locals_Adafruit_GPIO$GPIO_38_key_is_high = tmp_assign_source_20;
        }
        {
            PyObject *tmp_assign_source_21;
            tmp_assign_source_21 = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_7_is_low(  );



            assert( tmp_locals_Adafruit_GPIO$GPIO_38_key_is_low == NULL );
            tmp_locals_Adafruit_GPIO$GPIO_38_key_is_low = tmp_assign_source_21;
        }
        {
            PyObject *tmp_assign_source_22;
            tmp_assign_source_22 = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_8_output_pins(  );



            assert( tmp_locals_Adafruit_GPIO$GPIO_38_key_output_pins == NULL );
            tmp_locals_Adafruit_GPIO$GPIO_38_key_output_pins = tmp_assign_source_22;
        }
        {
            PyObject *tmp_assign_source_23;
            tmp_assign_source_23 = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_9_setup_pins(  );



            assert( tmp_locals_Adafruit_GPIO$GPIO_38_key_setup_pins == NULL );
            tmp_locals_Adafruit_GPIO$GPIO_38_key_setup_pins = tmp_assign_source_23;
        }
        {
            PyObject *tmp_assign_source_24;
            tmp_assign_source_24 = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_10_input_pins(  );



            assert( tmp_locals_Adafruit_GPIO$GPIO_38_key_input_pins == NULL );
            tmp_locals_Adafruit_GPIO$GPIO_38_key_input_pins = tmp_assign_source_24;
        }
        {
            PyObject *tmp_assign_source_25;
            tmp_assign_source_25 = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_11_add_event_detect(  );



            assert( tmp_locals_Adafruit_GPIO$GPIO_38_key_add_event_detect == NULL );
            tmp_locals_Adafruit_GPIO$GPIO_38_key_add_event_detect = tmp_assign_source_25;
        }
        {
            PyObject *tmp_assign_source_26;
            tmp_assign_source_26 = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_12_remove_event_detect(  );



            assert( tmp_locals_Adafruit_GPIO$GPIO_38_key_remove_event_detect == NULL );
            tmp_locals_Adafruit_GPIO$GPIO_38_key_remove_event_detect = tmp_assign_source_26;
        }
        {
            PyObject *tmp_assign_source_27;
            tmp_assign_source_27 = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_13_add_event_callback(  );



            assert( tmp_locals_Adafruit_GPIO$GPIO_38_key_add_event_callback == NULL );
            tmp_locals_Adafruit_GPIO$GPIO_38_key_add_event_callback = tmp_assign_source_27;
        }
        {
            PyObject *tmp_assign_source_28;
            tmp_assign_source_28 = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_14_event_detected(  );



            assert( tmp_locals_Adafruit_GPIO$GPIO_38_key_event_detected == NULL );
            tmp_locals_Adafruit_GPIO$GPIO_38_key_event_detected = tmp_assign_source_28;
        }
        {
            PyObject *tmp_assign_source_29;
            tmp_assign_source_29 = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_15_wait_for_edge(  );



            assert( tmp_locals_Adafruit_GPIO$GPIO_38_key_wait_for_edge == NULL );
            tmp_locals_Adafruit_GPIO$GPIO_38_key_wait_for_edge = tmp_assign_source_29;
        }
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_none_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_assign_source_30 = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_16_cleanup( tmp_defaults_2 );



            assert( tmp_locals_Adafruit_GPIO$GPIO_38_key_cleanup == NULL );
            tmp_locals_Adafruit_GPIO$GPIO_38_key_cleanup = tmp_assign_source_30;
        }
        {
            PyObject *tmp_assign_source_31;
            tmp_assign_source_31 = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_17__validate_pin(  );



            assert( tmp_locals_Adafruit_GPIO$GPIO_38_key__validate_pin == NULL );
            tmp_locals_Adafruit_GPIO$GPIO_38_key__validate_pin = tmp_assign_source_31;
        }
        {
            PyObject *tmp_assign_source_32;
            tmp_assign_source_32 = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_18__bit2(  );



            assert( tmp_locals_Adafruit_GPIO$GPIO_38_key__bit2 == NULL );
            tmp_locals_Adafruit_GPIO$GPIO_38_key__bit2 = tmp_assign_source_32;
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
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            tmp_dict_value_1 = const_str_digest_7515ad4066178aa9c8812587d34965fb;
            tmp_dict_key_1 = const_str_plain___module__;
            tmp_assign_source_14 = _PyDict_NewPresized( 20 );
            tmp_res = PyDict_SetItem( tmp_assign_source_14, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_value_2 = const_str_digest_6f7f24051f8519b1410c8b713d66e020;
            tmp_dict_key_2 = const_str_plain___doc__;
            tmp_res = PyDict_SetItem( tmp_assign_source_14, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$GPIO_38_key_setup );
            tmp_dict_value_3 = tmp_locals_Adafruit_GPIO$GPIO_38_key_setup;
            tmp_dict_key_3 = const_str_plain_setup;
            tmp_res = PyDict_SetItem( tmp_assign_source_14, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$GPIO_38_key_output );
            tmp_dict_value_4 = tmp_locals_Adafruit_GPIO$GPIO_38_key_output;
            tmp_dict_key_4 = const_str_plain_output;
            tmp_res = PyDict_SetItem( tmp_assign_source_14, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$GPIO_38_key_input );
            tmp_dict_value_5 = tmp_locals_Adafruit_GPIO$GPIO_38_key_input;
            tmp_dict_key_5 = const_str_plain_input;
            tmp_res = PyDict_SetItem( tmp_assign_source_14, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$GPIO_38_key_set_high );
            tmp_dict_value_6 = tmp_locals_Adafruit_GPIO$GPIO_38_key_set_high;
            tmp_dict_key_6 = const_str_plain_set_high;
            tmp_res = PyDict_SetItem( tmp_assign_source_14, tmp_dict_key_6, tmp_dict_value_6 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$GPIO_38_key_set_low );
            tmp_dict_value_7 = tmp_locals_Adafruit_GPIO$GPIO_38_key_set_low;
            tmp_dict_key_7 = const_str_plain_set_low;
            tmp_res = PyDict_SetItem( tmp_assign_source_14, tmp_dict_key_7, tmp_dict_value_7 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$GPIO_38_key_is_high );
            tmp_dict_value_8 = tmp_locals_Adafruit_GPIO$GPIO_38_key_is_high;
            tmp_dict_key_8 = const_str_plain_is_high;
            tmp_res = PyDict_SetItem( tmp_assign_source_14, tmp_dict_key_8, tmp_dict_value_8 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$GPIO_38_key_is_low );
            tmp_dict_value_9 = tmp_locals_Adafruit_GPIO$GPIO_38_key_is_low;
            tmp_dict_key_9 = const_str_plain_is_low;
            tmp_res = PyDict_SetItem( tmp_assign_source_14, tmp_dict_key_9, tmp_dict_value_9 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$GPIO_38_key_output_pins );
            tmp_dict_value_10 = tmp_locals_Adafruit_GPIO$GPIO_38_key_output_pins;
            tmp_dict_key_10 = const_str_plain_output_pins;
            tmp_res = PyDict_SetItem( tmp_assign_source_14, tmp_dict_key_10, tmp_dict_value_10 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$GPIO_38_key_setup_pins );
            tmp_dict_value_11 = tmp_locals_Adafruit_GPIO$GPIO_38_key_setup_pins;
            tmp_dict_key_11 = const_str_plain_setup_pins;
            tmp_res = PyDict_SetItem( tmp_assign_source_14, tmp_dict_key_11, tmp_dict_value_11 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$GPIO_38_key_input_pins );
            tmp_dict_value_12 = tmp_locals_Adafruit_GPIO$GPIO_38_key_input_pins;
            tmp_dict_key_12 = const_str_plain_input_pins;
            tmp_res = PyDict_SetItem( tmp_assign_source_14, tmp_dict_key_12, tmp_dict_value_12 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$GPIO_38_key_add_event_detect );
            tmp_dict_value_13 = tmp_locals_Adafruit_GPIO$GPIO_38_key_add_event_detect;
            tmp_dict_key_13 = const_str_plain_add_event_detect;
            tmp_res = PyDict_SetItem( tmp_assign_source_14, tmp_dict_key_13, tmp_dict_value_13 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$GPIO_38_key_remove_event_detect );
            tmp_dict_value_14 = tmp_locals_Adafruit_GPIO$GPIO_38_key_remove_event_detect;
            tmp_dict_key_14 = const_str_plain_remove_event_detect;
            tmp_res = PyDict_SetItem( tmp_assign_source_14, tmp_dict_key_14, tmp_dict_value_14 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$GPIO_38_key_add_event_callback );
            tmp_dict_value_15 = tmp_locals_Adafruit_GPIO$GPIO_38_key_add_event_callback;
            tmp_dict_key_15 = const_str_plain_add_event_callback;
            tmp_res = PyDict_SetItem( tmp_assign_source_14, tmp_dict_key_15, tmp_dict_value_15 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$GPIO_38_key_event_detected );
            tmp_dict_value_16 = tmp_locals_Adafruit_GPIO$GPIO_38_key_event_detected;
            tmp_dict_key_16 = const_str_plain_event_detected;
            tmp_res = PyDict_SetItem( tmp_assign_source_14, tmp_dict_key_16, tmp_dict_value_16 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$GPIO_38_key_wait_for_edge );
            tmp_dict_value_17 = tmp_locals_Adafruit_GPIO$GPIO_38_key_wait_for_edge;
            tmp_dict_key_17 = const_str_plain_wait_for_edge;
            tmp_res = PyDict_SetItem( tmp_assign_source_14, tmp_dict_key_17, tmp_dict_value_17 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$GPIO_38_key_cleanup );
            tmp_dict_value_18 = tmp_locals_Adafruit_GPIO$GPIO_38_key_cleanup;
            tmp_dict_key_18 = const_str_plain_cleanup;
            tmp_res = PyDict_SetItem( tmp_assign_source_14, tmp_dict_key_18, tmp_dict_value_18 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$GPIO_38_key__validate_pin );
            tmp_dict_value_19 = tmp_locals_Adafruit_GPIO$GPIO_38_key__validate_pin;
            tmp_dict_key_19 = const_str_plain__validate_pin;
            tmp_res = PyDict_SetItem( tmp_assign_source_14, tmp_dict_key_19, tmp_dict_value_19 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_Adafruit_GPIO$GPIO_38_key__bit2 );
            tmp_dict_value_20 = tmp_locals_Adafruit_GPIO$GPIO_38_key__bit2;
            tmp_dict_key_20 = const_str_plain__bit2;
            tmp_res = PyDict_SetItem( tmp_assign_source_14, tmp_dict_key_20, tmp_dict_value_20 );
            assert( !(tmp_res != 0) );
            goto try_return_handler_1;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$GPIO_38_key_setup );
        Py_DECREF( tmp_locals_Adafruit_GPIO$GPIO_38_key_setup );
        tmp_locals_Adafruit_GPIO$GPIO_38_key_setup = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$GPIO_38_key_output );
        Py_DECREF( tmp_locals_Adafruit_GPIO$GPIO_38_key_output );
        tmp_locals_Adafruit_GPIO$GPIO_38_key_output = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$GPIO_38_key_input );
        Py_DECREF( tmp_locals_Adafruit_GPIO$GPIO_38_key_input );
        tmp_locals_Adafruit_GPIO$GPIO_38_key_input = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$GPIO_38_key_set_high );
        Py_DECREF( tmp_locals_Adafruit_GPIO$GPIO_38_key_set_high );
        tmp_locals_Adafruit_GPIO$GPIO_38_key_set_high = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$GPIO_38_key_set_low );
        Py_DECREF( tmp_locals_Adafruit_GPIO$GPIO_38_key_set_low );
        tmp_locals_Adafruit_GPIO$GPIO_38_key_set_low = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$GPIO_38_key_is_high );
        Py_DECREF( tmp_locals_Adafruit_GPIO$GPIO_38_key_is_high );
        tmp_locals_Adafruit_GPIO$GPIO_38_key_is_high = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$GPIO_38_key_is_low );
        Py_DECREF( tmp_locals_Adafruit_GPIO$GPIO_38_key_is_low );
        tmp_locals_Adafruit_GPIO$GPIO_38_key_is_low = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$GPIO_38_key_output_pins );
        Py_DECREF( tmp_locals_Adafruit_GPIO$GPIO_38_key_output_pins );
        tmp_locals_Adafruit_GPIO$GPIO_38_key_output_pins = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$GPIO_38_key_setup_pins );
        Py_DECREF( tmp_locals_Adafruit_GPIO$GPIO_38_key_setup_pins );
        tmp_locals_Adafruit_GPIO$GPIO_38_key_setup_pins = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$GPIO_38_key_input_pins );
        Py_DECREF( tmp_locals_Adafruit_GPIO$GPIO_38_key_input_pins );
        tmp_locals_Adafruit_GPIO$GPIO_38_key_input_pins = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$GPIO_38_key_add_event_detect );
        Py_DECREF( tmp_locals_Adafruit_GPIO$GPIO_38_key_add_event_detect );
        tmp_locals_Adafruit_GPIO$GPIO_38_key_add_event_detect = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$GPIO_38_key_remove_event_detect );
        Py_DECREF( tmp_locals_Adafruit_GPIO$GPIO_38_key_remove_event_detect );
        tmp_locals_Adafruit_GPIO$GPIO_38_key_remove_event_detect = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$GPIO_38_key_add_event_callback );
        Py_DECREF( tmp_locals_Adafruit_GPIO$GPIO_38_key_add_event_callback );
        tmp_locals_Adafruit_GPIO$GPIO_38_key_add_event_callback = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$GPIO_38_key_event_detected );
        Py_DECREF( tmp_locals_Adafruit_GPIO$GPIO_38_key_event_detected );
        tmp_locals_Adafruit_GPIO$GPIO_38_key_event_detected = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$GPIO_38_key_wait_for_edge );
        Py_DECREF( tmp_locals_Adafruit_GPIO$GPIO_38_key_wait_for_edge );
        tmp_locals_Adafruit_GPIO$GPIO_38_key_wait_for_edge = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$GPIO_38_key_cleanup );
        Py_DECREF( tmp_locals_Adafruit_GPIO$GPIO_38_key_cleanup );
        tmp_locals_Adafruit_GPIO$GPIO_38_key_cleanup = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$GPIO_38_key__validate_pin );
        Py_DECREF( tmp_locals_Adafruit_GPIO$GPIO_38_key__validate_pin );
        tmp_locals_Adafruit_GPIO$GPIO_38_key__validate_pin = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_Adafruit_GPIO$GPIO_38_key__bit2 );
        Py_DECREF( tmp_locals_Adafruit_GPIO$GPIO_38_key__bit2 );
        tmp_locals_Adafruit_GPIO$GPIO_38_key__bit2 = NULL;

        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO );
        return MOD_RETURN_VALUE( NULL );
        outline_result_1:;
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
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


            exception_lineno = 38;

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
        tmp_assign_source_33 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_33 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_33 );
        condexpr_end_1:;
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = const_str_plain_BaseGPIO;
        tmp_args_element_name_2 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_184e6829715b0b3771096887af652a7b->m_frame.f_lineno = 38;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_34;
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
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_assign_source_35 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_BaseGPIO, tmp_assign_source_35 );
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

    // Tried code:
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_BaseGPIO );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BaseGPIO );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "BaseGPIO" );
            exception_tb = NULL;

            exception_lineno = 158;

            goto try_except_handler_3;
        }

        tmp_tuple_element_2 = tmp_mvar_value_2;
        tmp_assign_source_36 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_assign_source_36, 0, tmp_tuple_element_2 );
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_Adafruit_GPIO$GPIO_158 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_7515ad4066178aa9c8812587d34965fb;
        tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_158, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_ab30fd682a92ac82222dc523d80b4632;
        tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_158, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = const_tuple_none_tuple;
            Py_INCREF( tmp_defaults_3 );
            tmp_dictset_value = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_19___init__( tmp_defaults_3 );



            tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_158, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_e89fe4547f8ad6eacfdf20a5811df72f_2, codeobj_e89fe4547f8ad6eacfdf20a5811df72f, module_Adafruit_GPIO$GPIO, 0 );
        frame_e89fe4547f8ad6eacfdf20a5811df72f_2 = cache_frame_e89fe4547f8ad6eacfdf20a5811df72f_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_e89fe4547f8ad6eacfdf20a5811df72f_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_e89fe4547f8ad6eacfdf20a5811df72f_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_4;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_PUD_OFF );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PUD_OFF );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "PUD_OFF" );
                exception_tb = NULL;

                exception_lineno = 183;

                goto frame_exception_exit_2;
            }

            tmp_tuple_element_3 = tmp_mvar_value_3;
            tmp_defaults_4 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_defaults_4, 0, tmp_tuple_element_3 );
            tmp_dictset_value = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_20_setup( tmp_defaults_4 );



            tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_158, const_str_plain_setup, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 183;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_e89fe4547f8ad6eacfdf20a5811df72f_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_e89fe4547f8ad6eacfdf20a5811df72f_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_e89fe4547f8ad6eacfdf20a5811df72f_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_e89fe4547f8ad6eacfdf20a5811df72f_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_e89fe4547f8ad6eacfdf20a5811df72f_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_e89fe4547f8ad6eacfdf20a5811df72f_2,
            type_description_2
        );


        // Release cached frame.
        if ( frame_e89fe4547f8ad6eacfdf20a5811df72f_2 == cache_frame_e89fe4547f8ad6eacfdf20a5811df72f_2 )
        {
            Py_DECREF( frame_e89fe4547f8ad6eacfdf20a5811df72f_2 );
        }
        cache_frame_e89fe4547f8ad6eacfdf20a5811df72f_2 = NULL;

        assertFrameObject( frame_e89fe4547f8ad6eacfdf20a5811df72f_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        tmp_dictset_value = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_21_output(  );



        tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_158, const_str_plain_output, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_22_input(  );



        tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_158, const_str_plain_input, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_23_input_pins(  );



        tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_158, const_str_plain_input_pins, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = const_tuple_none_int_neg_1_tuple;
            Py_INCREF( tmp_defaults_5 );
            tmp_dictset_value = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_24_add_event_detect( tmp_defaults_5 );



            tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_158, const_str_plain_add_event_detect, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        tmp_dictset_value = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_25_remove_event_detect(  );



        tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_158, const_str_plain_remove_event_detect, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_26_add_event_callback(  );



        tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_158, const_str_plain_add_event_callback, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_27_event_detected(  );



        tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_158, const_str_plain_event_detected, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_28_wait_for_edge(  );



        tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_158, const_str_plain_wait_for_edge, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = const_tuple_none_tuple;
            Py_INCREF( tmp_defaults_6 );
            tmp_dictset_value = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_29_cleanup( tmp_defaults_6 );



            tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_158, const_str_plain_cleanup, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        tmp_assign_source_37 = locals_Adafruit_GPIO$GPIO_158;
        Py_INCREF( tmp_assign_source_37 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF( locals_Adafruit_GPIO$GPIO_158 );
        locals_Adafruit_GPIO$GPIO_158 = NULL;
        goto outline_result_2;
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

        Py_DECREF( locals_Adafruit_GPIO$GPIO_158 );
        locals_Adafruit_GPIO$GPIO_158 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 158;
        goto try_except_handler_3;
        outline_result_2:;
        assert( tmp_class_creation_2__class_dict == NULL );
        tmp_class_creation_2__class_dict = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
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


            exception_lineno = 158;

            goto try_except_handler_3;
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
        tmp_assign_source_38 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;

            goto try_except_handler_3;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_subscribed_name_1 = tmp_class_creation_2__bases;
            tmp_subscript_name_1 = const_int_0;
            tmp_assign_source_39 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_assign_source_39 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 158;

                goto try_except_handler_3;
            }
            assert( tmp_select_metaclass_2__base == NULL );
            tmp_select_metaclass_2__base = tmp_assign_source_39;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( tmp_select_metaclass_2__base );
            tmp_source_name_1 = tmp_select_metaclass_2__base;
            tmp_assign_source_38 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
            if ( tmp_assign_source_38 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 158;

                goto try_except_handler_6;
            }
            goto try_return_handler_5;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO );
        return MOD_RETURN_VALUE( NULL );
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

        {
            PyObject *tmp_type_arg_1;
            Py_DECREF( exception_keeper_type_3 );
            Py_XDECREF( exception_keeper_value_3 );
            Py_XDECREF( exception_keeper_tb_3 );
            CHECK_OBJECT( tmp_select_metaclass_2__base );
            tmp_type_arg_1 = tmp_select_metaclass_2__base;
            tmp_assign_source_38 = BUILTIN_TYPE1( tmp_type_arg_1 );
            assert( !(tmp_assign_source_38 == NULL) );
            goto try_return_handler_5;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
        Py_DECREF( tmp_select_metaclass_2__base );
        tmp_select_metaclass_2__base = NULL;

        goto outline_result_3;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
        Py_DECREF( tmp_select_metaclass_2__base );
        tmp_select_metaclass_2__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO );
        return MOD_RETURN_VALUE( NULL );
        outline_result_3:;
        condexpr_end_2:;
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_called_name_2 = tmp_class_creation_2__metaclass;
        tmp_args_element_name_4 = const_str_plain_RPiGPIOAdapter;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_args_element_name_5 = tmp_class_creation_2__bases;
        CHECK_OBJECT( tmp_class_creation_2__class_dict );
        tmp_args_element_name_6 = tmp_class_creation_2__class_dict;
        frame_184e6829715b0b3771096887af652a7b->m_frame.f_lineno = 158;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;

            goto try_except_handler_3;
        }
        assert( tmp_class_creation_2__class == NULL );
        tmp_class_creation_2__class = tmp_assign_source_40;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_41;
        CHECK_OBJECT( tmp_class_creation_2__class );
        tmp_assign_source_41 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_RPiGPIOAdapter, tmp_assign_source_41 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class );
    Py_DECREF( tmp_class_creation_2__class );
    tmp_class_creation_2__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
    Py_DECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_dict );
    Py_DECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_BaseGPIO );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BaseGPIO );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "BaseGPIO" );
            exception_tb = NULL;

            exception_lineno = 256;

            goto try_except_handler_7;
        }

        tmp_tuple_element_4 = tmp_mvar_value_4;
        tmp_assign_source_42 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_assign_source_42, 0, tmp_tuple_element_4 );
        assert( tmp_class_creation_3__bases == NULL );
        tmp_class_creation_3__bases = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        {
            PyObject *tmp_set_locals_2;
            tmp_set_locals_2 = PyDict_New();
            locals_Adafruit_GPIO$GPIO_256 = tmp_set_locals_2;
        }
        tmp_dictset_value = const_str_digest_7515ad4066178aa9c8812587d34965fb;
        tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_256, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_12f63504e09bf07d0cc6a9269846bb87;
        tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_256, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_30___init__(  );



        tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_256, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_4e795516d571ef70d886637781051b2f_3, codeobj_4e795516d571ef70d886637781051b2f, module_Adafruit_GPIO$GPIO, 0 );
        frame_4e795516d571ef70d886637781051b2f_3 = cache_frame_4e795516d571ef70d886637781051b2f_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_4e795516d571ef70d886637781051b2f_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_4e795516d571ef70d886637781051b2f_3 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_7;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_mvar_value_5;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_PUD_OFF );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PUD_OFF );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "PUD_OFF" );
                exception_tb = NULL;

                exception_lineno = 273;

                goto frame_exception_exit_3;
            }

            tmp_tuple_element_5 = tmp_mvar_value_5;
            tmp_defaults_7 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_defaults_7, 0, tmp_tuple_element_5 );
            tmp_dictset_value = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_31_setup( tmp_defaults_7 );



            tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_256, const_str_plain_setup, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 273;

                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_4e795516d571ef70d886637781051b2f_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_4e795516d571ef70d886637781051b2f_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_4e795516d571ef70d886637781051b2f_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_4e795516d571ef70d886637781051b2f_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_4e795516d571ef70d886637781051b2f_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_4e795516d571ef70d886637781051b2f_3,
            type_description_2
        );


        // Release cached frame.
        if ( frame_4e795516d571ef70d886637781051b2f_3 == cache_frame_4e795516d571ef70d886637781051b2f_3 )
        {
            Py_DECREF( frame_4e795516d571ef70d886637781051b2f_3 );
        }
        cache_frame_4e795516d571ef70d886637781051b2f_3 = NULL;

        assertFrameObject( frame_4e795516d571ef70d886637781051b2f_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_8;
        skip_nested_handling_2:;
        tmp_dictset_value = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_32_output(  );



        tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_256, const_str_plain_output, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_33_input(  );



        tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_256, const_str_plain_input, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_34_input_pins(  );



        tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_256, const_str_plain_input_pins, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_defaults_8;
            tmp_defaults_8 = const_tuple_none_int_neg_1_tuple;
            Py_INCREF( tmp_defaults_8 );
            tmp_dictset_value = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_35_add_event_detect( tmp_defaults_8 );



            tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_256, const_str_plain_add_event_detect, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        tmp_dictset_value = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_36_remove_event_detect(  );



        tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_256, const_str_plain_remove_event_detect, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_defaults_9;
            tmp_defaults_9 = const_tuple_int_neg_1_tuple;
            Py_INCREF( tmp_defaults_9 );
            tmp_dictset_value = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_37_add_event_callback( tmp_defaults_9 );



            tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_256, const_str_plain_add_event_callback, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        tmp_dictset_value = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_38_event_detected(  );



        tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_256, const_str_plain_event_detected, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_39_wait_for_edge(  );



        tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_256, const_str_plain_wait_for_edge, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_defaults_10;
            tmp_defaults_10 = const_tuple_none_tuple;
            Py_INCREF( tmp_defaults_10 );
            tmp_dictset_value = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_40_cleanup( tmp_defaults_10 );



            tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_256, const_str_plain_cleanup, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        tmp_assign_source_43 = locals_Adafruit_GPIO$GPIO_256;
        Py_INCREF( tmp_assign_source_43 );
        goto try_return_handler_8;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF( locals_Adafruit_GPIO$GPIO_256 );
        locals_Adafruit_GPIO$GPIO_256 = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_Adafruit_GPIO$GPIO_256 );
        locals_Adafruit_GPIO$GPIO_256 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 256;
        goto try_except_handler_7;
        outline_result_4:;
        assert( tmp_class_creation_3__class_dict == NULL );
        tmp_class_creation_3__class_dict = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
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


            exception_lineno = 256;

            goto try_except_handler_7;
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
        tmp_assign_source_44 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
        if ( tmp_assign_source_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;

            goto try_except_handler_7;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_subscribed_name_2 = tmp_class_creation_3__bases;
            tmp_subscript_name_2 = const_int_0;
            tmp_assign_source_45 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
            if ( tmp_assign_source_45 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 256;

                goto try_except_handler_7;
            }
            assert( tmp_select_metaclass_3__base == NULL );
            tmp_select_metaclass_3__base = tmp_assign_source_45;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( tmp_select_metaclass_3__base );
            tmp_source_name_2 = tmp_select_metaclass_3__base;
            tmp_assign_source_44 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_2 );
            if ( tmp_assign_source_44 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 256;

                goto try_except_handler_10;
            }
            goto try_return_handler_9;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_2;
            Py_DECREF( exception_keeper_type_6 );
            Py_XDECREF( exception_keeper_value_6 );
            Py_XDECREF( exception_keeper_tb_6 );
            CHECK_OBJECT( tmp_select_metaclass_3__base );
            tmp_type_arg_2 = tmp_select_metaclass_3__base;
            tmp_assign_source_44 = BUILTIN_TYPE1( tmp_type_arg_2 );
            assert( !(tmp_assign_source_44 == NULL) );
            goto try_return_handler_9;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_3__base );
        Py_DECREF( tmp_select_metaclass_3__base );
        tmp_select_metaclass_3__base = NULL;

        goto outline_result_5;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_3__base );
        Py_DECREF( tmp_select_metaclass_3__base );
        tmp_select_metaclass_3__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO );
        return MOD_RETURN_VALUE( NULL );
        outline_result_5:;
        condexpr_end_3:;
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_called_name_3 = tmp_class_creation_3__metaclass;
        tmp_args_element_name_7 = const_str_plain_AdafruitBBIOAdapter;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_args_element_name_8 = tmp_class_creation_3__bases;
        CHECK_OBJECT( tmp_class_creation_3__class_dict );
        tmp_args_element_name_9 = tmp_class_creation_3__class_dict;
        frame_184e6829715b0b3771096887af652a7b->m_frame.f_lineno = 256;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;

            goto try_except_handler_7;
        }
        assert( tmp_class_creation_3__class == NULL );
        tmp_class_creation_3__class = tmp_assign_source_46;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_47;
        CHECK_OBJECT( tmp_class_creation_3__class );
        tmp_assign_source_47 = tmp_class_creation_3__class;
        UPDATE_STRING_DICT0( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_AdafruitBBIOAdapter, tmp_assign_source_47 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class );
    Py_DECREF( tmp_class_creation_3__class );
    tmp_class_creation_3__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__bases );
    Py_DECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_dict );
    Py_DECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_BaseGPIO );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BaseGPIO );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "BaseGPIO" );
            exception_tb = NULL;

            exception_lineno = 350;

            goto try_except_handler_11;
        }

        tmp_tuple_element_6 = tmp_mvar_value_6;
        tmp_assign_source_48 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_assign_source_48, 0, tmp_tuple_element_6 );
        assert( tmp_class_creation_4__bases == NULL );
        tmp_class_creation_4__bases = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        {
            PyObject *tmp_set_locals_3;
            tmp_set_locals_3 = PyDict_New();
            locals_Adafruit_GPIO$GPIO_350 = tmp_set_locals_3;
        }
        tmp_dictset_value = const_str_digest_7515ad4066178aa9c8812587d34965fb;
        tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_350, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_35306c8f3ac8788c5db970206a3c0705;
        tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_350, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_41___init__(  );



        tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_350, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_42_setup(  );



        tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_350, const_str_plain_setup, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_43_output(  );



        tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_350, const_str_plain_output, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_44_input(  );



        tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_350, const_str_plain_input, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_defaults_11;
            tmp_defaults_11 = const_tuple_none_int_neg_1_tuple;
            Py_INCREF( tmp_defaults_11 );
            tmp_dictset_value = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_45_add_event_detect( tmp_defaults_11 );



            tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_350, const_str_plain_add_event_detect, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        tmp_dictset_value = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_46_remove_event_detect(  );



        tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_350, const_str_plain_remove_event_detect, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_47_wait_for_edge(  );



        tmp_res = PyDict_SetItem( locals_Adafruit_GPIO$GPIO_350, const_str_plain_wait_for_edge, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_49 = locals_Adafruit_GPIO$GPIO_350;
        Py_INCREF( tmp_assign_source_49 );
        goto try_return_handler_12;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF( locals_Adafruit_GPIO$GPIO_350 );
        locals_Adafruit_GPIO$GPIO_350 = NULL;
        goto outline_result_6;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO );
        return MOD_RETURN_VALUE( NULL );
        outline_result_6:;
        assert( tmp_class_creation_4__class_dict == NULL );
        tmp_class_creation_4__class_dict = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_name_7;
        PyObject *tmp_dict_name_8;
        PyObject *tmp_key_name_8;
        tmp_key_name_7 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_4__class_dict );
        tmp_dict_name_7 = tmp_class_creation_4__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_7, tmp_key_name_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;

            goto try_except_handler_11;
        }
        tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_4;
        }
        else
        {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT( tmp_class_creation_4__class_dict );
        tmp_dict_name_8 = tmp_class_creation_4__class_dict;
        tmp_key_name_8 = const_str_plain___metaclass__;
        tmp_assign_source_50 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
        if ( tmp_assign_source_50 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;

            goto try_except_handler_11;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT( tmp_class_creation_4__bases );
            tmp_subscribed_name_3 = tmp_class_creation_4__bases;
            tmp_subscript_name_3 = const_int_0;
            tmp_assign_source_51 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
            if ( tmp_assign_source_51 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 350;

                goto try_except_handler_11;
            }
            assert( tmp_select_metaclass_4__base == NULL );
            tmp_select_metaclass_4__base = tmp_assign_source_51;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( tmp_select_metaclass_4__base );
            tmp_source_name_3 = tmp_select_metaclass_4__base;
            tmp_assign_source_50 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
            if ( tmp_assign_source_50 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 350;

                goto try_except_handler_14;
            }
            goto try_return_handler_13;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_3;
            Py_DECREF( exception_keeper_type_8 );
            Py_XDECREF( exception_keeper_value_8 );
            Py_XDECREF( exception_keeper_tb_8 );
            CHECK_OBJECT( tmp_select_metaclass_4__base );
            tmp_type_arg_3 = tmp_select_metaclass_4__base;
            tmp_assign_source_50 = BUILTIN_TYPE1( tmp_type_arg_3 );
            assert( !(tmp_assign_source_50 == NULL) );
            goto try_return_handler_13;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_4__base );
        Py_DECREF( tmp_select_metaclass_4__base );
        tmp_select_metaclass_4__base = NULL;

        goto outline_result_7;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_4__base );
        Py_DECREF( tmp_select_metaclass_4__base );
        tmp_select_metaclass_4__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( Adafruit_GPIO$GPIO );
        return MOD_RETURN_VALUE( NULL );
        outline_result_7:;
        condexpr_end_4:;
        assert( tmp_class_creation_4__metaclass == NULL );
        tmp_class_creation_4__metaclass = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        CHECK_OBJECT( tmp_class_creation_4__metaclass );
        tmp_called_name_4 = tmp_class_creation_4__metaclass;
        tmp_args_element_name_10 = const_str_plain_AdafruitMinnowAdapter;
        CHECK_OBJECT( tmp_class_creation_4__bases );
        tmp_args_element_name_11 = tmp_class_creation_4__bases;
        CHECK_OBJECT( tmp_class_creation_4__class_dict );
        tmp_args_element_name_12 = tmp_class_creation_4__class_dict;
        frame_184e6829715b0b3771096887af652a7b->m_frame.f_lineno = 350;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_assign_source_52 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_52 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;

            goto try_except_handler_11;
        }
        assert( tmp_class_creation_4__class == NULL );
        tmp_class_creation_4__class = tmp_assign_source_52;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_dict );
    tmp_class_creation_4__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_184e6829715b0b3771096887af652a7b );
#endif
    popFrameStack();

    assertFrameObject( frame_184e6829715b0b3771096887af652a7b );

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_184e6829715b0b3771096887af652a7b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_184e6829715b0b3771096887af652a7b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_184e6829715b0b3771096887af652a7b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_184e6829715b0b3771096887af652a7b, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;
    {
        PyObject *tmp_assign_source_53;
        CHECK_OBJECT( tmp_class_creation_4__class );
        tmp_assign_source_53 = tmp_class_creation_4__class;
        UPDATE_STRING_DICT0( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_AdafruitMinnowAdapter, tmp_assign_source_53 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class );
    Py_DECREF( tmp_class_creation_4__class );
    tmp_class_creation_4__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__bases );
    Py_DECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_dict );
    Py_DECREF( tmp_class_creation_4__class_dict );
    tmp_class_creation_4__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__metaclass );
    Py_DECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = MAKE_FUNCTION_Adafruit_GPIO$GPIO$$$function_48_get_platform_gpio(  );



        UPDATE_STRING_DICT1( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain_get_platform_gpio, tmp_assign_source_54 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_Adafruit_GPIO$GPIO, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_Adafruit_GPIO$GPIO );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
