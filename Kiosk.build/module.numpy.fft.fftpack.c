/* Generated code for Python module 'numpy.fft.fftpack'
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

/* The "_module_numpy$fft$fftpack" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$fft$fftpack;
PyDictObject *moduledict_numpy$fft$fftpack;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_copy;
static PyObject *const_str_plain_fftpack_lite;
extern PyObject *const_str_plain_max_item_count;
extern PyObject *const_tuple_type_complex_tuple;
extern PyObject *const_str_plain_partial;
static PyObject *const_str_plain__raw_fftnd;
static PyObject *const_str_plain_wsave;
static PyObject *const_str_digest_01f1066a51923fba70f30d308247f079;
static PyObject *const_str_digest_72f01e533c77be794cb83caa076fd016;
static PyObject *const_str_digest_23098722ef505adb63be2b05fe120fdd;
extern PyObject *const_str_plain_output;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_module;
extern PyObject *const_str_plain_zeros;
static PyObject *const_str_plain_invreal;
extern PyObject *const_str_plain_None;
extern PyObject *const_int_pos_100;
extern PyObject *const_str_plain_index;
extern PyObject *const_str_plain_shape;
static PyObject *const_str_digest_0e484a7e341d275f185007a474ec79cb;
extern PyObject *const_str_plain_axis;
extern PyObject *const_str_plain_function;
extern PyObject *const_str_plain_fftn;
static PyObject *const_str_plain_hfft;
static PyObject *const_tuple_75ec54f212a0137069deccc939a914f5_tuple;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_cfftf;
static PyObject *const_str_plain_cffti;
static PyObject *const_str_digest_53f6110acd950a9eb6f9eef15b0f9daa;
static PyObject *const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple;
static PyObject *const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple;
static PyObject *const_str_digest_950dc64ef6772674dbea217abe8be8b3;
static PyObject *const_list_60f473887d8c78e2f768e087222cf620_list;
static PyObject *const_str_plain_rffti;
static PyObject *const_str_digest_908e64f8abe07e7ca762be78e2dd2d4d;
static PyObject *const_str_plain_fft_cache;
extern PyObject *const_str_plain_fftpack;
extern PyObject *const_int_neg_2;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_int_neg_1;
static PyObject *const_str_digest_4668369e132281bb3e0ee274b05ac5ba;
extern PyObject *const_str_plain_normalize_axis_index;
static PyObject *const_str_plain_ortho;
static PyObject *const_str_digest_e2e62bdc9ea89915ae0ff9e1b643f817;
static PyObject *const_str_plain__unitary;
static PyObject *const_tuple_str_plain_a_str_plain_n_str_plain_axis_str_plain_norm_tuple;
static PyObject *const_tuple_none_str_plain_ortho_tuple;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_slice_none_none_none;
static PyObject *const_str_digest_9ff4852d28cd7861483c7f88480ddc86;
static PyObject *const_str_digest_5c9c7abd14e51c25cd57c2d5a1659d8b;
static PyObject *const_tuple_str_plain_norm_tuple;
static PyObject *const_str_plain__fft_dispatcher;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_ifft;
static PyObject *const_dict_c42c09a7ae1230df9bd4f49e205e4c00;
static PyObject *const_str_digest_5b8d182c21b80ce6cc93893e9bfd60b8;
static PyObject *const_str_digest_24d3f300976d1f0b4094bd13ac30f8b0;
extern PyObject *const_tuple_int_neg_2_int_neg_1_tuple;
extern PyObject *const_str_plain_norm;
static PyObject *const_str_digest_e3b57a155d14f7030bedf77d7a70ca1e;
static PyObject *const_str_plain_init_function;
extern PyObject *const_list_slice_none_none_none_list;
extern PyObject *const_str_plain_s;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_fft2;
extern PyObject *const_str_plain_array;
static PyObject *const_str_plain_unitary;
extern PyObject *const_str_plain_sqrt;
static PyObject *const_str_plain__cook_nd_args;
extern PyObject *const_str_plain__FFTCache;
extern PyObject *const_str_plain_ifftn;
extern PyObject *const_str_plain_swapaxes;
static PyObject *const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple;
static PyObject *const_str_plain_itl;
extern PyObject *const_str_plain_astype;
extern PyObject *const_dict_a7ab110deec347786bcfa718065f5388;
static PyObject *const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple;
extern PyObject *const_str_plain_put_twiddle_factors;
static PyObject *const_str_plain_irfft2;
static PyObject *const_str_plain__fft_cache;
static PyObject *const_str_digest_380dd4ace92138038f5afbeee50a20b1;
static PyObject *const_str_plain_work_function;
extern PyObject *const_str_plain_ifft2;
extern PyObject *const_str_plain_ii;
static PyObject *const_str_plain__raw_fft;
extern PyObject *const_int_pos_32;
extern PyObject *const_str_plain_functools;
static PyObject *const_str_digest_c0d490a82d99d03062bec8127224c04c;
extern PyObject *const_dict_c0d9920cdb2d132dd609908b9aa6b9e2;
extern PyObject *const_str_plain_reverse;
static PyObject *const_dict_dd45c77b755c75255009fd804f504c08;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_none_int_neg_1_none_tuple;
static PyObject *const_tuple_a14ce15cce904a6d53b4df68384f091f_tuple;
static PyObject *const_str_plain_irfftn;
static PyObject *const_tuple_none_none_int_0_tuple;
static PyObject *const_str_digest_242e8c397d863f4678e3108a3c04f924;
static PyObject *const_str_plain__real_fft_cache;
extern PyObject *const_str_plain_take;
extern PyObject *const_str_plain_overrides;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_axes;
extern PyObject *const_str_plain_array_function_dispatch;
static PyObject *const_tuple_str_plain__FFTCache_tuple;
extern PyObject *const_str_plain_a;
static PyObject *const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple;
extern PyObject *const_str_plain_conjugate;
extern PyObject *const_str_plain_z;
static PyObject *const_str_plain_ihfft;
extern PyObject *const_str_plain_r;
static PyObject *const_str_plain_rfft;
static PyObject *const_str_plain_irfft;
static PyObject *const_tuple_str_plain_fftpack_lite_tuple;
extern PyObject *const_str_digest_f104ae7867dfcd3f38891fc4f1b7cd57;
extern PyObject *const_tuple_str_plain_overrides_tuple;
static PyObject *const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple;
static PyObject *const_str_plain_shapeless;
static PyObject *const_str_digest_dbc10c3e332a8d966e8c779c64feee7f;
extern PyObject *const_str_plain_fft;
extern PyObject *const_str_plain_char;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_digest_82c723e3fe8d0870c9b15e95a26ae7eb;
static PyObject *const_str_plain_rfftf;
extern PyObject *const_str_plain_helper;
extern PyObject *const_str_plain_complex;
static PyObject *const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple;
static PyObject *const_str_plain_rfftb;
static PyObject *const_str_plain_rfftn;
extern PyObject *const_str_plain_pop_twiddle_factors;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
static PyObject *const_dict_a02eb3206004e1dededd932dea2baa88;
static PyObject *const_tuple_51c8848fc394aa1e51d5cda5f608f872_tuple;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_str_plain_division;
static PyObject *const_str_plain__fftn_dispatcher;
static PyObject *const_dict_073d0317252e4445514a1773373206fe;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_max_size_in_mb;
extern PyObject *const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
extern PyObject *const_str_digest_b53f3811d9d65c912707e9b896ba9934;
extern PyObject *const_tuple_str_plain_normalize_axis_index_tuple;
static PyObject *const_str_plain_rfft2;
static PyObject *const_str_plain_cfftb;
static PyObject *const_str_digest_67a439b64216fd79a420034aec6214a2;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_digest_ad30867cb50db197c788d8d9559403d4;
extern PyObject *const_str_plain_float;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_fftpack_lite = UNSTREAM_STRING( &constant_bin[ 1342842 ], 12, 1 );
    const_str_plain__raw_fftnd = UNSTREAM_STRING( &constant_bin[ 1342854 ], 10, 1 );
    const_str_plain_wsave = UNSTREAM_STRING( &constant_bin[ 1342864 ], 5, 1 );
    const_str_digest_01f1066a51923fba70f30d308247f079 = UNSTREAM_STRING( &constant_bin[ 1342869 ], 3263, 0 );
    const_str_digest_72f01e533c77be794cb83caa076fd016 = UNSTREAM_STRING( &constant_bin[ 1346132 ], 774, 0 );
    const_str_digest_23098722ef505adb63be2b05fe120fdd = UNSTREAM_STRING( &constant_bin[ 1346906 ], 17, 0 );
    const_str_plain_invreal = UNSTREAM_STRING( &constant_bin[ 1346923 ], 7, 1 );
    const_str_digest_0e484a7e341d275f185007a474ec79cb = UNSTREAM_STRING( &constant_bin[ 1346930 ], 3447, 0 );
    const_str_plain_hfft = UNSTREAM_STRING( &constant_bin[ 1350377 ], 4, 1 );
    const_tuple_75ec54f212a0137069deccc939a914f5_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_75ec54f212a0137069deccc939a914f5_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_75ec54f212a0137069deccc939a914f5_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_75ec54f212a0137069deccc939a914f5_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_75ec54f212a0137069deccc939a914f5_tuple, 3, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    PyTuple_SET_ITEM( const_tuple_75ec54f212a0137069deccc939a914f5_tuple, 4, const_str_plain_output ); Py_INCREF( const_str_plain_output );
    const_str_plain_cfftf = UNSTREAM_STRING( &constant_bin[ 1350381 ], 5, 1 );
    const_str_plain_cffti = UNSTREAM_STRING( &constant_bin[ 1350386 ], 5, 1 );
    const_str_digest_53f6110acd950a9eb6f9eef15b0f9daa = UNSTREAM_STRING( &constant_bin[ 1350391 ], 3758, 0 );
    const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 1, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 2, const_str_plain_axes ); Py_INCREF( const_str_plain_axes );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 3, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple, 1, const_tuple_int_neg_2_int_neg_1_tuple ); Py_INCREF( const_tuple_int_neg_2_int_neg_1_tuple );
    PyTuple_SET_ITEM( const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    const_str_digest_950dc64ef6772674dbea217abe8be8b3 = UNSTREAM_STRING( &constant_bin[ 1354149 ], 3492, 0 );
    const_list_60f473887d8c78e2f768e087222cf620_list = PyList_New( 14 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 0, const_str_plain_fft ); Py_INCREF( const_str_plain_fft );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 1, const_str_plain_ifft ); Py_INCREF( const_str_plain_ifft );
    const_str_plain_rfft = UNSTREAM_STRING( &constant_bin[ 1343060 ], 4, 1 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 2, const_str_plain_rfft ); Py_INCREF( const_str_plain_rfft );
    const_str_plain_irfft = UNSTREAM_STRING( &constant_bin[ 1343089 ], 5, 1 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 3, const_str_plain_irfft ); Py_INCREF( const_str_plain_irfft );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 4, const_str_plain_hfft ); Py_INCREF( const_str_plain_hfft );
    const_str_plain_ihfft = UNSTREAM_STRING( &constant_bin[ 1357641 ], 5, 1 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 5, const_str_plain_ihfft ); Py_INCREF( const_str_plain_ihfft );
    const_str_plain_rfftn = UNSTREAM_STRING( &constant_bin[ 1345094 ], 5, 1 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 6, const_str_plain_rfftn ); Py_INCREF( const_str_plain_rfftn );
    const_str_plain_irfftn = UNSTREAM_STRING( &constant_bin[ 1345093 ], 6, 1 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 7, const_str_plain_irfftn ); Py_INCREF( const_str_plain_irfftn );
    const_str_plain_rfft2 = UNSTREAM_STRING( &constant_bin[ 1345027 ], 5, 1 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 8, const_str_plain_rfft2 ); Py_INCREF( const_str_plain_rfft2 );
    const_str_plain_irfft2 = UNSTREAM_STRING( &constant_bin[ 1345026 ], 6, 1 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 9, const_str_plain_irfft2 ); Py_INCREF( const_str_plain_irfft2 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 10, const_str_plain_fft2 ); Py_INCREF( const_str_plain_fft2 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 11, const_str_plain_ifft2 ); Py_INCREF( const_str_plain_ifft2 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 12, const_str_plain_fftn ); Py_INCREF( const_str_plain_fftn );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 13, const_str_plain_ifftn ); Py_INCREF( const_str_plain_ifftn );
    const_str_plain_rffti = UNSTREAM_STRING( &constant_bin[ 1357646 ], 5, 1 );
    const_str_digest_908e64f8abe07e7ca762be78e2dd2d4d = UNSTREAM_STRING( &constant_bin[ 1357651 ], 763, 0 );
    const_str_plain_fft_cache = UNSTREAM_STRING( &constant_bin[ 1358414 ], 9, 1 );
    const_str_digest_4668369e132281bb3e0ee274b05ac5ba = UNSTREAM_STRING( &constant_bin[ 1358423 ], 49, 0 );
    const_str_plain_ortho = UNSTREAM_STRING( &constant_bin[ 185111 ], 5, 1 );
    const_str_digest_e2e62bdc9ea89915ae0ff9e1b643f817 = UNSTREAM_STRING( &constant_bin[ 1358472 ], 2970, 0 );
    const_str_plain__unitary = UNSTREAM_STRING( &constant_bin[ 1361442 ], 8, 1 );
    const_tuple_str_plain_a_str_plain_n_str_plain_axis_str_plain_norm_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_n_str_plain_axis_str_plain_norm_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_n_str_plain_axis_str_plain_norm_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_n_str_plain_axis_str_plain_norm_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_n_str_plain_axis_str_plain_norm_tuple, 3, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    const_tuple_none_str_plain_ortho_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_none_str_plain_ortho_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_str_plain_ortho_tuple, 1, const_str_plain_ortho ); Py_INCREF( const_str_plain_ortho );
    const_str_digest_9ff4852d28cd7861483c7f88480ddc86 = UNSTREAM_STRING( &constant_bin[ 1361450 ], 2992, 0 );
    const_str_digest_5c9c7abd14e51c25cd57c2d5a1659d8b = UNSTREAM_STRING( &constant_bin[ 1364442 ], 3062, 0 );
    const_tuple_str_plain_norm_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_norm_tuple, 0, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    const_str_plain__fft_dispatcher = UNSTREAM_STRING( &constant_bin[ 1367504 ], 15, 1 );
    const_dict_c42c09a7ae1230df9bd4f49e205e4c00 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_c42c09a7ae1230df9bd4f49e205e4c00, const_str_plain_dtype, (PyObject *)&PyFloat_Type );
    PyDict_SetItem( const_dict_c42c09a7ae1230df9bd4f49e205e4c00, const_str_plain_copy, Py_True );
    assert( PyDict_Size( const_dict_c42c09a7ae1230df9bd4f49e205e4c00 ) == 2 );
    const_str_digest_5b8d182c21b80ce6cc93893e9bfd60b8 = UNSTREAM_STRING( &constant_bin[ 1367519 ], 3359, 0 );
    const_str_digest_24d3f300976d1f0b4094bd13ac30f8b0 = UNSTREAM_STRING( &constant_bin[ 1370878 ], 3630, 0 );
    const_str_digest_e3b57a155d14f7030bedf77d7a70ca1e = UNSTREAM_STRING( &constant_bin[ 1374508 ], 2623, 0 );
    const_str_plain_init_function = UNSTREAM_STRING( &constant_bin[ 1377131 ], 13, 1 );
    const_str_plain_unitary = UNSTREAM_STRING( &constant_bin[ 686109 ], 7, 1 );
    const_str_plain__cook_nd_args = UNSTREAM_STRING( &constant_bin[ 1377144 ], 13, 1 );
    const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple, 1, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple, 2, const_str_plain_axes ); Py_INCREF( const_str_plain_axes );
    PyTuple_SET_ITEM( const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple, 3, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    PyTuple_SET_ITEM( const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple, 4, const_str_plain_ii ); Py_INCREF( const_str_plain_ii );
    const_str_plain_itl = UNSTREAM_STRING( &constant_bin[ 32186 ], 3, 1 );
    const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple, 1, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple, 2, const_str_plain_axes ); Py_INCREF( const_str_plain_axes );
    PyTuple_SET_ITEM( const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple, 3, const_str_plain_invreal ); Py_INCREF( const_str_plain_invreal );
    const_str_plain_shapeless = UNSTREAM_STRING( &constant_bin[ 1377157 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple, 4, const_str_plain_shapeless ); Py_INCREF( const_str_plain_shapeless );
    const_str_plain__fft_cache = UNSTREAM_STRING( &constant_bin[ 1377166 ], 10, 1 );
    const_str_digest_380dd4ace92138038f5afbeee50a20b1 = UNSTREAM_STRING( &constant_bin[ 1377176 ], 26, 0 );
    const_str_plain_work_function = UNSTREAM_STRING( &constant_bin[ 1377202 ], 13, 1 );
    const_str_plain__raw_fft = UNSTREAM_STRING( &constant_bin[ 1342854 ], 8, 1 );
    const_str_digest_c0d490a82d99d03062bec8127224c04c = UNSTREAM_STRING( &constant_bin[ 1377215 ], 1773, 0 );
    const_dict_dd45c77b755c75255009fd804f504c08 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_dd45c77b755c75255009fd804f504c08, const_str_plain_invreal, const_int_pos_1 );
    assert( PyDict_Size( const_dict_dd45c77b755c75255009fd804f504c08 ) == 1 );
    const_tuple_none_int_neg_1_none_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_none_int_neg_1_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_int_neg_1_none_tuple, 1, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_none_int_neg_1_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    const_tuple_a14ce15cce904a6d53b4df68384f091f_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_a14ce15cce904a6d53b4df68384f091f_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_a14ce15cce904a6d53b4df68384f091f_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_a14ce15cce904a6d53b4df68384f091f_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_a14ce15cce904a6d53b4df68384f091f_tuple, 3, const_str_plain_init_function ); Py_INCREF( const_str_plain_init_function );
    PyTuple_SET_ITEM( const_tuple_a14ce15cce904a6d53b4df68384f091f_tuple, 4, const_str_plain_work_function ); Py_INCREF( const_str_plain_work_function );
    PyTuple_SET_ITEM( const_tuple_a14ce15cce904a6d53b4df68384f091f_tuple, 5, const_str_plain_fft_cache ); Py_INCREF( const_str_plain_fft_cache );
    PyTuple_SET_ITEM( const_tuple_a14ce15cce904a6d53b4df68384f091f_tuple, 6, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_a14ce15cce904a6d53b4df68384f091f_tuple, 7, const_str_plain_index ); Py_INCREF( const_str_plain_index );
    PyTuple_SET_ITEM( const_tuple_a14ce15cce904a6d53b4df68384f091f_tuple, 8, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_a14ce15cce904a6d53b4df68384f091f_tuple, 9, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_a14ce15cce904a6d53b4df68384f091f_tuple, 10, const_str_plain_wsave ); Py_INCREF( const_str_plain_wsave );
    const_tuple_none_none_int_0_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_none_none_int_0_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_int_0_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_int_0_tuple, 2, const_int_0 ); Py_INCREF( const_int_0 );
    const_str_digest_242e8c397d863f4678e3108a3c04f924 = UNSTREAM_STRING( &constant_bin[ 1378988 ], 49, 0 );
    const_str_plain__real_fft_cache = UNSTREAM_STRING( &constant_bin[ 1379037 ], 15, 1 );
    const_tuple_str_plain__FFTCache_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__FFTCache_tuple, 0, const_str_plain__FFTCache ); Py_INCREF( const_str_plain__FFTCache );
    const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 1, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 2, const_str_plain_axes ); Py_INCREF( const_str_plain_axes );
    PyTuple_SET_ITEM( const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 3, const_str_plain_function ); Py_INCREF( const_str_plain_function );
    PyTuple_SET_ITEM( const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 4, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    PyTuple_SET_ITEM( const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 5, const_str_plain_itl ); Py_INCREF( const_str_plain_itl );
    PyTuple_SET_ITEM( const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 6, const_str_plain_ii ); Py_INCREF( const_str_plain_ii );
    const_tuple_str_plain_fftpack_lite_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_fftpack_lite_tuple, 0, const_str_plain_fftpack_lite ); Py_INCREF( const_str_plain_fftpack_lite );
    const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple, 3, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    PyTuple_SET_ITEM( const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple, 4, const_str_plain_unitary ); Py_INCREF( const_str_plain_unitary );
    const_str_digest_dbc10c3e332a8d966e8c779c64feee7f = UNSTREAM_STRING( &constant_bin[ 1379052 ], 3127, 0 );
    const_str_digest_82c723e3fe8d0870c9b15e95a26ae7eb = UNSTREAM_STRING( &constant_bin[ 1382179 ], 53, 0 );
    const_str_plain_rfftf = UNSTREAM_STRING( &constant_bin[ 1382232 ], 5, 1 );
    const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 3, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    PyTuple_SET_ITEM( const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 4, const_str_plain_unitary ); Py_INCREF( const_str_plain_unitary );
    PyTuple_SET_ITEM( const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 5, const_str_plain_output ); Py_INCREF( const_str_plain_output );
    const_str_plain_rfftb = UNSTREAM_STRING( &constant_bin[ 1382237 ], 5, 1 );
    const_dict_a02eb3206004e1dededd932dea2baa88 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_a02eb3206004e1dededd932dea2baa88, const_str_plain_dtype, (PyObject *)&PyComplex_Type );
    PyDict_SetItem( const_dict_a02eb3206004e1dededd932dea2baa88, const_str_plain_copy, Py_True );
    assert( PyDict_Size( const_dict_a02eb3206004e1dededd932dea2baa88 ) == 2 );
    const_tuple_51c8848fc394aa1e51d5cda5f608f872_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_51c8848fc394aa1e51d5cda5f608f872_tuple, 0, const_str_plain_array ); Py_INCREF( const_str_plain_array );
    PyTuple_SET_ITEM( const_tuple_51c8848fc394aa1e51d5cda5f608f872_tuple, 1, const_str_plain_asarray ); Py_INCREF( const_str_plain_asarray );
    PyTuple_SET_ITEM( const_tuple_51c8848fc394aa1e51d5cda5f608f872_tuple, 2, const_str_plain_zeros ); Py_INCREF( const_str_plain_zeros );
    PyTuple_SET_ITEM( const_tuple_51c8848fc394aa1e51d5cda5f608f872_tuple, 3, const_str_plain_swapaxes ); Py_INCREF( const_str_plain_swapaxes );
    PyTuple_SET_ITEM( const_tuple_51c8848fc394aa1e51d5cda5f608f872_tuple, 4, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_51c8848fc394aa1e51d5cda5f608f872_tuple, 5, const_str_plain_conjugate ); Py_INCREF( const_str_plain_conjugate );
    PyTuple_SET_ITEM( const_tuple_51c8848fc394aa1e51d5cda5f608f872_tuple, 6, const_str_plain_take ); Py_INCREF( const_str_plain_take );
    PyTuple_SET_ITEM( const_tuple_51c8848fc394aa1e51d5cda5f608f872_tuple, 7, const_str_plain_sqrt ); Py_INCREF( const_str_plain_sqrt );
    const_str_plain__fftn_dispatcher = UNSTREAM_STRING( &constant_bin[ 1382242 ], 16, 1 );
    const_dict_073d0317252e4445514a1773373206fe = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_073d0317252e4445514a1773373206fe, const_str_plain_max_size_in_mb, const_int_pos_100 );
    PyDict_SetItem( const_dict_073d0317252e4445514a1773373206fe, const_str_plain_max_item_count, const_int_pos_32 );
    assert( PyDict_Size( const_dict_073d0317252e4445514a1773373206fe ) == 2 );
    const_str_plain_cfftb = UNSTREAM_STRING( &constant_bin[ 1382258 ], 5, 1 );
    const_str_digest_67a439b64216fd79a420034aec6214a2 = UNSTREAM_STRING( &constant_bin[ 1382263 ], 741, 0 );
    const_str_digest_ad30867cb50db197c788d8d9559403d4 = UNSTREAM_STRING( &constant_bin[ 1383004 ], 38, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$fft$fftpack( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_8406e6329adbe0bdb9357a26ee9483cb;
static PyCodeObject *codeobj_8c8fba259d77cb52fd11b341549e0096;
static PyCodeObject *codeobj_1fe56d68fd8aee8a78399df5f56b42be;
static PyCodeObject *codeobj_fea2337b661073dcdbd3236bf7ec05a8;
static PyCodeObject *codeobj_818bc85e1f1b7e60a0d5411ea5be6cfd;
static PyCodeObject *codeobj_fa81cdadcf87aba26d1cf7d5d0cdb41f;
static PyCodeObject *codeobj_950c045f0917f1623306f92cddc61d14;
static PyCodeObject *codeobj_2d60bcf4dd86a8e96800e097b9ef62cc;
static PyCodeObject *codeobj_146de1bd8ec8824c2d3d59c14bb2a4b7;
static PyCodeObject *codeobj_f022c14dccf221cf23cd6c79e89bca4b;
static PyCodeObject *codeobj_528dcd53b7b0b221d0a7abc450f65f4a;
static PyCodeObject *codeobj_98e0cc74867196dc26183973b15ebe39;
static PyCodeObject *codeobj_58b8ff34e0c16119bcb8e85ba3f9c084;
static PyCodeObject *codeobj_94b1bec4b1f1198c3c0feb2294da4ad7;
static PyCodeObject *codeobj_678c7c6356b55b98abc33839e9e9d0a8;
static PyCodeObject *codeobj_a013428d7affd4829bf4a2aba65d5c61;
static PyCodeObject *codeobj_48c73934d46ce8e92cefefc4d3d87b4f;
static PyCodeObject *codeobj_3d2f4562c9dc3d56e52e93455078c5b2;
static PyCodeObject *codeobj_2d4a827e94c23b51fa75f0dec0f23dc6;
static PyCodeObject *codeobj_03a1f1a43e26819323d96d6dc0d7ec47;
static PyCodeObject *codeobj_e4d0c456b275c341dc7ff908163232c6;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_82c723e3fe8d0870c9b15e95a26ae7eb;
    codeobj_8406e6329adbe0bdb9357a26ee9483cb = MAKE_CODEOBJ( module_filename_obj, const_str_digest_380dd4ace92138038f5afbeee50a20b1, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8c8fba259d77cb52fd11b341549e0096 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__cook_nd_args, 633, const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1fe56d68fd8aee8a78399df5f56b42be = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fft_dispatcher, 111, const_tuple_str_plain_a_str_plain_n_str_plain_axis_str_plain_norm_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fea2337b661073dcdbd3236bf7ec05a8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fftn_dispatcher, 662, const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_818bc85e1f1b7e60a0d5411ea5be6cfd = MAKE_CODEOBJ( module_filename_obj, const_str_plain__raw_fft, 55, const_tuple_a14ce15cce904a6d53b4df68384f091f_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fa81cdadcf87aba26d1cf7d5d0cdb41f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__raw_fftnd, 652, const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_950c045f0917f1623306f92cddc61d14 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__unitary, 104, const_tuple_str_plain_norm_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2d60bcf4dd86a8e96800e097b9ef62cc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fft, 115, const_tuple_75ec54f212a0137069deccc939a914f5_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_146de1bd8ec8824c2d3d59c14bb2a4b7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fft2, 862, const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f022c14dccf221cf23cd6c79e89bca4b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fftn, 666, const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_528dcd53b7b0b221d0a7abc450f65f4a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hfft, 488, const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_98e0cc74867196dc26183973b15ebe39 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ifft, 212, const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_58b8ff34e0c16119bcb8e85ba3f9c084 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ifft2, 953, const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_94b1bec4b1f1198c3c0feb2294da4ad7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ifftn, 764, const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_678c7c6356b55b98abc33839e9e9d0a8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ihfft, 571, const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a013428d7affd4829bf4a2aba65d5c61 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_irfft, 397, const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_48c73934d46ce8e92cefefc4d3d87b4f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_irfft2, 1267, const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3d2f4562c9dc3d56e52e93455078c5b2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_irfftn, 1172, const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2d4a827e94c23b51fa75f0dec0f23dc6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rfft, 307, const_tuple_75ec54f212a0137069deccc939a914f5_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_03a1f1a43e26819323d96d6dc0d7ec47 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rfft2, 1134, const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e4d0c456b275c341dc7ff908163232c6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rfftn, 1041, const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_10__cook_nd_args( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_11__raw_fftnd( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_12__fftn_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_13_fftn( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_14_ifftn( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_15_fft2( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_16_ifft2( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_17_rfftn( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_18_rfft2( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_19_irfftn( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_1__raw_fft( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_20_irfft2( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_2__unitary(  );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_3__fft_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_4_fft( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_5_ifft( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_6_rfft( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_7_irfft( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_8_hfft( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_9_ihfft( PyObject *defaults );


// The module function definitions.
static PyObject *impl_numpy$fft$fftpack$$$function_1__raw_fft( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_init_function = python_pars[ 3 ];
    PyObject *par_work_function = python_pars[ 4 ];
    PyObject *par_fft_cache = python_pars[ 5 ];
    PyObject *var_r = NULL;
    PyObject *var_index = NULL;
    PyObject *var_s = NULL;
    PyObject *var_z = NULL;
    PyObject *var_wsave = NULL;
    struct Nuitka_FrameObject *frame_818bc85e1f1b7e60a0d5411ea5be6cfd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_818bc85e1f1b7e60a0d5411ea5be6cfd = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_818bc85e1f1b7e60a0d5411ea5be6cfd, codeobj_818bc85e1f1b7e60a0d5411ea5be6cfd, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_818bc85e1f1b7e60a0d5411ea5be6cfd = cache_frame_818bc85e1f1b7e60a0d5411ea5be6cfd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_818bc85e1f1b7e60a0d5411ea5be6cfd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_818bc85e1f1b7e60a0d5411ea5be6cfd ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_asarray );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "asarray" );
            exception_tb = NULL;

            exception_lineno = 57;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_818bc85e1f1b7e60a0d5411ea5be6cfd->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_normalize_axis_index );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_normalize_axis_index );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "normalize_axis_index" );
            exception_tb = NULL;

            exception_lineno = 58;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_2 = par_axis;
        CHECK_OBJECT( par_a );
        tmp_source_name_1 = par_a;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_818bc85e1f1b7e60a0d5411ea5be6cfd->m_frame.f_lineno = 58;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_axis;
            assert( old != NULL );
            par_axis = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_n );
        tmp_compexpr_left_1 = par_n;
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_a );
            tmp_source_name_2 = par_a;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_axis );
            tmp_subscript_name_1 = par_axis;
            tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_n;
                assert( old != NULL );
                par_n = tmp_assign_source_3;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_n );
        tmp_compexpr_left_2 = par_n;
        tmp_compexpr_right_2 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "ooooooooooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            tmp_left_name_1 = const_str_digest_242e8c397d863f4678e3108a3c04f924;
            CHECK_OBJECT( par_n );
            tmp_right_name_1 = par_n;
            tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_818bc85e1f1b7e60a0d5411ea5be6cfd->m_frame.f_lineno = 64;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 64;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( par_fft_cache );
        tmp_called_instance_1 = par_fft_cache;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_4 = par_n;
        frame_818bc85e1f1b7e60a0d5411ea5be6cfd->m_frame.f_lineno = 72;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_pop_twiddle_factors, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_wsave == NULL );
        var_wsave = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_wsave );
        tmp_compexpr_left_3 = var_wsave;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_5;
            CHECK_OBJECT( par_init_function );
            tmp_called_name_3 = par_init_function;
            CHECK_OBJECT( par_n );
            tmp_args_element_name_5 = par_n;
            frame_818bc85e1f1b7e60a0d5411ea5be6cfd->m_frame.f_lineno = 74;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 74;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_wsave;
                assert( old != NULL );
                var_wsave = tmp_assign_source_5;
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( par_a );
        tmp_source_name_3 = par_a;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_axis );
        tmp_subscript_name_2 = par_axis;
        tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_n );
        tmp_compexpr_right_4 = par_n;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "ooooooooooo";
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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_list_arg_1;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( par_a );
            tmp_source_name_4 = par_a;
            tmp_list_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
            if ( tmp_list_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 77;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_6 = PySequence_List( tmp_list_arg_1 );
            Py_DECREF( tmp_list_arg_1 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 77;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_s == NULL );
            var_s = tmp_assign_source_6;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT( var_s );
            tmp_subscribed_name_3 = var_s;
            CHECK_OBJECT( par_axis );
            tmp_subscript_name_3 = par_axis;
            tmp_compexpr_left_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_compexpr_left_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 78;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_n );
            tmp_compexpr_right_5 = par_n;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            Py_DECREF( tmp_compexpr_left_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 78;
                type_description_1 = "ooooooooooo";
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
                PyObject *tmp_assign_source_7;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_len_arg_1;
                tmp_left_name_2 = LIST_COPY( const_list_slice_none_none_none_list );
                CHECK_OBJECT( var_s );
                tmp_len_arg_1 = var_s;
                tmp_right_name_2 = BUILTIN_LEN( tmp_len_arg_1 );
                if ( tmp_right_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_2 );

                    exception_lineno = 79;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_7 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_left_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_assign_source_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 79;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_index == NULL );
                var_index = tmp_assign_source_7;
            }
            {
                PyObject *tmp_ass_subvalue_1;
                PyObject *tmp_start_name_1;
                PyObject *tmp_stop_name_1;
                PyObject *tmp_step_name_1;
                PyObject *tmp_ass_subscribed_1;
                PyObject *tmp_ass_subscript_1;
                tmp_start_name_1 = const_int_0;
                CHECK_OBJECT( par_n );
                tmp_stop_name_1 = par_n;
                tmp_step_name_1 = Py_None;
                tmp_ass_subvalue_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
                assert( !(tmp_ass_subvalue_1 == NULL) );
                CHECK_OBJECT( var_index );
                tmp_ass_subscribed_1 = var_index;
                CHECK_OBJECT( par_axis );
                tmp_ass_subscript_1 = par_axis;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
                Py_DECREF( tmp_ass_subvalue_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 80;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_assign_source_8;
                PyObject *tmp_subscribed_name_4;
                PyObject *tmp_subscript_name_4;
                PyObject *tmp_tuple_arg_1;
                CHECK_OBJECT( par_a );
                tmp_subscribed_name_4 = par_a;
                CHECK_OBJECT( var_index );
                tmp_tuple_arg_1 = var_index;
                tmp_subscript_name_4 = PySequence_Tuple( tmp_tuple_arg_1 );
                if ( tmp_subscript_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 81;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
                Py_DECREF( tmp_subscript_name_4 );
                if ( tmp_assign_source_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 81;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_a;
                    assert( old != NULL );
                    par_a = tmp_assign_source_8;
                    Py_DECREF( old );
                }

            }
            goto branch_end_5;
            branch_no_5:;
            {
                PyObject *tmp_assign_source_9;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_len_arg_2;
                tmp_left_name_3 = LIST_COPY( const_list_slice_none_none_none_list );
                CHECK_OBJECT( var_s );
                tmp_len_arg_2 = var_s;
                tmp_right_name_3 = BUILTIN_LEN( tmp_len_arg_2 );
                if ( tmp_right_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_3 );

                    exception_lineno = 83;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_9 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_left_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_assign_source_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 83;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_index == NULL );
                var_index = tmp_assign_source_9;
            }
            {
                PyObject *tmp_ass_subvalue_2;
                PyObject *tmp_start_name_2;
                PyObject *tmp_stop_name_2;
                PyObject *tmp_subscribed_name_5;
                PyObject *tmp_subscript_name_5;
                PyObject *tmp_step_name_2;
                PyObject *tmp_ass_subscribed_2;
                PyObject *tmp_ass_subscript_2;
                tmp_start_name_2 = const_int_0;
                CHECK_OBJECT( var_s );
                tmp_subscribed_name_5 = var_s;
                CHECK_OBJECT( par_axis );
                tmp_subscript_name_5 = par_axis;
                tmp_stop_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
                if ( tmp_stop_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 84;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_step_name_2 = Py_None;
                tmp_ass_subvalue_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
                Py_DECREF( tmp_stop_name_2 );
                assert( !(tmp_ass_subvalue_2 == NULL) );
                CHECK_OBJECT( var_index );
                tmp_ass_subscribed_2 = var_index;
                CHECK_OBJECT( par_axis );
                tmp_ass_subscript_2 = par_axis;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
                Py_DECREF( tmp_ass_subvalue_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 84;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_ass_subvalue_3;
                PyObject *tmp_ass_subscribed_3;
                PyObject *tmp_ass_subscript_3;
                CHECK_OBJECT( par_n );
                tmp_ass_subvalue_3 = par_n;
                CHECK_OBJECT( var_s );
                tmp_ass_subscribed_3 = var_s;
                CHECK_OBJECT( par_axis );
                tmp_ass_subscript_3 = par_axis;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 85;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_assign_source_10;
                PyObject *tmp_called_name_4;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_args_element_name_7;
                PyObject *tmp_source_name_5;
                PyObject *tmp_source_name_6;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_zeros );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "zeros" );
                    exception_tb = NULL;

                    exception_lineno = 86;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_4 = tmp_mvar_value_3;
                CHECK_OBJECT( var_s );
                tmp_args_element_name_6 = var_s;
                CHECK_OBJECT( par_a );
                tmp_source_name_6 = par_a;
                tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_dtype );
                if ( tmp_source_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 86;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_char );
                Py_DECREF( tmp_source_name_5 );
                if ( tmp_args_element_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 86;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_818bc85e1f1b7e60a0d5411ea5be6cfd->m_frame.f_lineno = 86;
                {
                    PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
                    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
                }

                Py_DECREF( tmp_args_element_name_7 );
                if ( tmp_assign_source_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 86;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_z == NULL );
                var_z = tmp_assign_source_10;
            }
            {
                PyObject *tmp_ass_subvalue_4;
                PyObject *tmp_ass_subscribed_4;
                PyObject *tmp_ass_subscript_4;
                PyObject *tmp_tuple_arg_2;
                CHECK_OBJECT( par_a );
                tmp_ass_subvalue_4 = par_a;
                CHECK_OBJECT( var_z );
                tmp_ass_subscribed_4 = var_z;
                CHECK_OBJECT( var_index );
                tmp_tuple_arg_2 = var_index;
                tmp_ass_subscript_4 = PySequence_Tuple( tmp_tuple_arg_2 );
                if ( tmp_ass_subscript_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 87;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
                Py_DECREF( tmp_ass_subscript_4 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 87;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_assign_source_11;
                CHECK_OBJECT( var_z );
                tmp_assign_source_11 = var_z;
                {
                    PyObject *old = par_a;
                    assert( old != NULL );
                    par_a = tmp_assign_source_11;
                    Py_INCREF( par_a );
                    Py_DECREF( old );
                }

            }
            branch_end_5:;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_left_name_4;
        PyObject *tmp_source_name_7;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( par_axis );
        tmp_compexpr_left_6 = par_axis;
        if ( par_a == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "a" );
            exception_tb = NULL;

            exception_lineno = 90;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = par_a;
        tmp_left_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ndim );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = const_int_pos_1;
        tmp_compexpr_right_6 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_compexpr_right_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        Py_DECREF( tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_args_element_name_10;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_swapaxes );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_swapaxes );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "swapaxes" );
                exception_tb = NULL;

                exception_lineno = 91;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_4;
            if ( par_a == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "a" );
                exception_tb = NULL;

                exception_lineno = 91;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_8 = par_a;
            CHECK_OBJECT( par_axis );
            tmp_args_element_name_9 = par_axis;
            tmp_args_element_name_10 = const_int_neg_1;
            frame_818bc85e1f1b7e60a0d5411ea5be6cfd->m_frame.f_lineno = 91;
            {
                PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
                tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
            }

            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 91;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_a;
                par_a = tmp_assign_source_12;
                Py_XDECREF( old );
            }

        }
        branch_no_6:;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        CHECK_OBJECT( par_work_function );
        tmp_called_name_6 = par_work_function;
        if ( par_a == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "a" );
            exception_tb = NULL;

            exception_lineno = 92;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_11 = par_a;
        CHECK_OBJECT( var_wsave );
        tmp_args_element_name_12 = var_wsave;
        frame_818bc85e1f1b7e60a0d5411ea5be6cfd->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_r == NULL );
        var_r = tmp_assign_source_13;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_left_name_5;
        PyObject *tmp_source_name_8;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( par_axis );
        tmp_compexpr_left_7 = par_axis;
        if ( par_a == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "a" );
            exception_tb = NULL;

            exception_lineno = 93;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = par_a;
        tmp_left_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_ndim );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_5 = const_int_pos_1;
        tmp_compexpr_right_7 = BINARY_OPERATION_SUB( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_5 );
        if ( tmp_compexpr_right_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        Py_DECREF( tmp_compexpr_right_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_name_7;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_args_element_name_15;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_swapaxes );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_swapaxes );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "swapaxes" );
                exception_tb = NULL;

                exception_lineno = 94;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_7 = tmp_mvar_value_5;
            CHECK_OBJECT( var_r );
            tmp_args_element_name_13 = var_r;
            CHECK_OBJECT( par_axis );
            tmp_args_element_name_14 = par_axis;
            tmp_args_element_name_15 = const_int_neg_1;
            frame_818bc85e1f1b7e60a0d5411ea5be6cfd->m_frame.f_lineno = 94;
            {
                PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
                tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
            }

            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_r;
                assert( old != NULL );
                var_r = tmp_assign_source_14;
                Py_DECREF( old );
            }

        }
        branch_no_7:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        CHECK_OBJECT( par_fft_cache );
        tmp_called_instance_2 = par_fft_cache;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_16 = par_n;
        CHECK_OBJECT( var_wsave );
        tmp_args_element_name_17 = var_wsave;
        frame_818bc85e1f1b7e60a0d5411ea5be6cfd->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_put_twiddle_factors, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_818bc85e1f1b7e60a0d5411ea5be6cfd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_818bc85e1f1b7e60a0d5411ea5be6cfd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_818bc85e1f1b7e60a0d5411ea5be6cfd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_818bc85e1f1b7e60a0d5411ea5be6cfd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_818bc85e1f1b7e60a0d5411ea5be6cfd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_818bc85e1f1b7e60a0d5411ea5be6cfd,
        type_description_1,
        par_a,
        par_n,
        par_axis,
        par_init_function,
        par_work_function,
        par_fft_cache,
        var_r,
        var_index,
        var_s,
        var_z,
        var_wsave
    );


    // Release cached frame.
    if ( frame_818bc85e1f1b7e60a0d5411ea5be6cfd == cache_frame_818bc85e1f1b7e60a0d5411ea5be6cfd )
    {
        Py_DECREF( frame_818bc85e1f1b7e60a0d5411ea5be6cfd );
    }
    cache_frame_818bc85e1f1b7e60a0d5411ea5be6cfd = NULL;

    assertFrameObject( frame_818bc85e1f1b7e60a0d5411ea5be6cfd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_r );
    tmp_return_value = var_r;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_1__raw_fft );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_init_function );
    Py_DECREF( par_init_function );
    par_init_function = NULL;

    CHECK_OBJECT( (PyObject *)var_r );
    Py_DECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_index );
    var_index = NULL;

    CHECK_OBJECT( (PyObject *)par_fft_cache );
    Py_DECREF( par_fft_cache );
    par_fft_cache = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    CHECK_OBJECT( (PyObject *)par_work_function );
    Py_DECREF( par_work_function );
    par_work_function = NULL;

    Py_XDECREF( var_z );
    var_z = NULL;

    CHECK_OBJECT( (PyObject *)var_wsave );
    Py_DECREF( var_wsave );
    var_wsave = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

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

    Py_XDECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_init_function );
    Py_DECREF( par_init_function );
    par_init_function = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_index );
    var_index = NULL;

    CHECK_OBJECT( (PyObject *)par_fft_cache );
    Py_DECREF( par_fft_cache );
    par_fft_cache = NULL;

    Py_XDECREF( par_n );
    par_n = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    CHECK_OBJECT( (PyObject *)par_work_function );
    Py_DECREF( par_work_function );
    par_work_function = NULL;

    Py_XDECREF( var_z );
    var_z = NULL;

    Py_XDECREF( var_wsave );
    var_wsave = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_1__raw_fft );
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


static PyObject *impl_numpy$fft$fftpack$$$function_2__unitary( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_norm = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_950c045f0917f1623306f92cddc61d14;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_950c045f0917f1623306f92cddc61d14 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_950c045f0917f1623306f92cddc61d14, codeobj_950c045f0917f1623306f92cddc61d14, module_numpy$fft$fftpack, sizeof(void *) );
    frame_950c045f0917f1623306f92cddc61d14 = cache_frame_950c045f0917f1623306f92cddc61d14;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_950c045f0917f1623306f92cddc61d14 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_950c045f0917f1623306f92cddc61d14 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_norm );
        tmp_compexpr_left_1 = par_norm;
        tmp_compexpr_right_1 = const_tuple_none_str_plain_ortho_tuple;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;
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
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            tmp_left_name_1 = const_str_digest_4668369e132281bb3e0ee274b05ac5ba;
            CHECK_OBJECT( par_norm );
            tmp_right_name_1 = par_norm;
            tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 106;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_950c045f0917f1623306f92cddc61d14->m_frame.f_lineno = 106;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 106;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_950c045f0917f1623306f92cddc61d14 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_950c045f0917f1623306f92cddc61d14 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_950c045f0917f1623306f92cddc61d14, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_950c045f0917f1623306f92cddc61d14->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_950c045f0917f1623306f92cddc61d14, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_950c045f0917f1623306f92cddc61d14,
        type_description_1,
        par_norm
    );


    // Release cached frame.
    if ( frame_950c045f0917f1623306f92cddc61d14 == cache_frame_950c045f0917f1623306f92cddc61d14 )
    {
        Py_DECREF( frame_950c045f0917f1623306f92cddc61d14 );
    }
    cache_frame_950c045f0917f1623306f92cddc61d14 = NULL;

    assertFrameObject( frame_950c045f0917f1623306f92cddc61d14 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_norm );
        tmp_compexpr_left_2 = par_norm;
        tmp_compexpr_right_2 = Py_None;
        tmp_return_value = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? Py_True : Py_False;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_2__unitary );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_2__unitary );
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


static PyObject *impl_numpy$fft$fftpack$$$function_3__fft_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_return_value = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_3__fft_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_3__fft_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$fft$fftpack$$$function_4_fft( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_output = NULL;
    struct Nuitka_FrameObject *frame_2d60bcf4dd86a8e96800e097b9ef62cc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_2d60bcf4dd86a8e96800e097b9ef62cc = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2d60bcf4dd86a8e96800e097b9ef62cc, codeobj_2d60bcf4dd86a8e96800e097b9ef62cc, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2d60bcf4dd86a8e96800e097b9ef62cc = cache_frame_2d60bcf4dd86a8e96800e097b9ef62cc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2d60bcf4dd86a8e96800e097b9ef62cc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2d60bcf4dd86a8e96800e097b9ef62cc ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_asarray );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "asarray" );
            exception_tb = NULL;

            exception_lineno = 203;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_2d60bcf4dd86a8e96800e097b9ef62cc->m_frame.f_lineno = 203;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_astype );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = const_tuple_type_complex_tuple;
        tmp_kw_name_1 = PyDict_Copy( const_dict_a7ab110deec347786bcfa718065f5388 );
        frame_2d60bcf4dd86a8e96800e097b9ef62cc->m_frame.f_lineno = 203;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_n );
        tmp_compexpr_left_1 = par_n;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_a );
            tmp_source_name_2 = par_a;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 205;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_axis );
            tmp_subscript_name_1 = par_axis;
            tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 205;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_n;
                assert( old != NULL );
                par_n = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__raw_fft );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fft );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_raw_fft" );
            exception_tb = NULL;

            exception_lineno = 206;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_2;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_2 = par_a;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_3 = par_n;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_4 = par_axis;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fftpack );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpack );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "fftpack" );
            exception_tb = NULL;

            exception_lineno = 206;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_cffti );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fftpack );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpack );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_args_element_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "fftpack" );
            exception_tb = NULL;

            exception_lineno = 206;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_4;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_cfftf );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 206;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__fft_cache );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fft_cache );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_fft_cache" );
            exception_tb = NULL;

            exception_lineno = 206;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_7 = tmp_mvar_value_5;
        frame_2d60bcf4dd86a8e96800e097b9ef62cc->m_frame.f_lineno = 206;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_5 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_output == NULL );
        var_output = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_8;
        int tmp_truth_name_1;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__unitary );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unitary );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_unitary" );
            exception_tb = NULL;

            exception_lineno = 207;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_6;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_8 = par_norm;
        frame_2d60bcf4dd86a8e96800e097b9ef62cc->m_frame.f_lineno = 207;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 207;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            PyObject *tmp_assign_source_4;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_9;
            CHECK_OBJECT( var_output );
            tmp_left_name_1 = var_output;
            tmp_left_name_2 = const_int_pos_1;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_sqrt );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "sqrt" );
                exception_tb = NULL;

                exception_lineno = 208;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_7;
            CHECK_OBJECT( par_n );
            tmp_args_element_name_9 = par_n;
            frame_2d60bcf4dd86a8e96800e097b9ef62cc->m_frame.f_lineno = 208;
            {
                PyObject *call_args[] = { tmp_args_element_name_9 };
                tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 208;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = BINARY_OPERATION_TRUEDIV( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 208;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 208;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_4 = tmp_left_name_1;
            var_output = tmp_assign_source_4;

        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d60bcf4dd86a8e96800e097b9ef62cc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d60bcf4dd86a8e96800e097b9ef62cc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2d60bcf4dd86a8e96800e097b9ef62cc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2d60bcf4dd86a8e96800e097b9ef62cc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2d60bcf4dd86a8e96800e097b9ef62cc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2d60bcf4dd86a8e96800e097b9ef62cc,
        type_description_1,
        par_a,
        par_n,
        par_axis,
        par_norm,
        var_output
    );


    // Release cached frame.
    if ( frame_2d60bcf4dd86a8e96800e097b9ef62cc == cache_frame_2d60bcf4dd86a8e96800e097b9ef62cc )
    {
        Py_DECREF( frame_2d60bcf4dd86a8e96800e097b9ef62cc );
    }
    cache_frame_2d60bcf4dd86a8e96800e097b9ef62cc = NULL;

    assertFrameObject( frame_2d60bcf4dd86a8e96800e097b9ef62cc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_output );
    tmp_return_value = var_output;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_4_fft );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)var_output );
    Py_DECREF( var_output );
    var_output = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

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

    Py_XDECREF( var_output );
    var_output = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( par_n );
    par_n = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_4_fft );
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


static PyObject *impl_numpy$fft$fftpack$$$function_5_ifft( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_unitary = NULL;
    PyObject *var_output = NULL;
    struct Nuitka_FrameObject *frame_98e0cc74867196dc26183973b15ebe39;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_98e0cc74867196dc26183973b15ebe39 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_98e0cc74867196dc26183973b15ebe39, codeobj_98e0cc74867196dc26183973b15ebe39, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_98e0cc74867196dc26183973b15ebe39 = cache_frame_98e0cc74867196dc26183973b15ebe39;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_98e0cc74867196dc26183973b15ebe39 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_98e0cc74867196dc26183973b15ebe39 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
            exception_tb = NULL;

            exception_lineno = 298;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_a02eb3206004e1dededd932dea2baa88 );
        frame_98e0cc74867196dc26183973b15ebe39->m_frame.f_lineno = 298;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 298;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_n );
        tmp_compexpr_left_1 = par_n;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_a );
            tmp_source_name_1 = par_a;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 300;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_axis );
            tmp_subscript_name_1 = par_axis;
            tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 300;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_n;
                assert( old != NULL );
                par_n = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__unitary );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unitary );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_unitary" );
            exception_tb = NULL;

            exception_lineno = 301;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_1 = par_norm;
        frame_98e0cc74867196dc26183973b15ebe39->m_frame.f_lineno = 301;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 301;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_unitary == NULL );
        var_unitary = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__raw_fft );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fft );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_raw_fft" );
            exception_tb = NULL;

            exception_lineno = 302;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_2 = par_a;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_3 = par_n;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_4 = par_axis;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fftpack );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpack );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "fftpack" );
            exception_tb = NULL;

            exception_lineno = 302;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_4;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_cffti );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 302;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fftpack );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpack );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_args_element_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "fftpack" );
            exception_tb = NULL;

            exception_lineno = 302;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_5;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_cfftb );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 302;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__fft_cache );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fft_cache );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_fft_cache" );
            exception_tb = NULL;

            exception_lineno = 302;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_7 = tmp_mvar_value_6;
        frame_98e0cc74867196dc26183973b15ebe39->m_frame.f_lineno = 302;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_5 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 302;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_output == NULL );
        var_output = tmp_assign_source_4;
    }
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT( var_output );
        tmp_left_name_1 = var_output;
        tmp_left_name_2 = const_int_pos_1;
        CHECK_OBJECT( var_unitary );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_unitary );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 303;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_sqrt );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "sqrt" );
            exception_tb = NULL;

            exception_lineno = 303;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_7;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_8 = par_n;
        frame_98e0cc74867196dc26183973b15ebe39->m_frame.f_lineno = 303;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 303;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( par_n );
        tmp_right_name_2 = par_n;
        Py_INCREF( tmp_right_name_2 );
        condexpr_end_1:;
        tmp_right_name_1 = BINARY_OPERATION_TRUEDIV( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 303;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 303;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_98e0cc74867196dc26183973b15ebe39 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_98e0cc74867196dc26183973b15ebe39 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_98e0cc74867196dc26183973b15ebe39 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_98e0cc74867196dc26183973b15ebe39, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_98e0cc74867196dc26183973b15ebe39->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_98e0cc74867196dc26183973b15ebe39, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_98e0cc74867196dc26183973b15ebe39,
        type_description_1,
        par_a,
        par_n,
        par_axis,
        par_norm,
        var_unitary,
        var_output
    );


    // Release cached frame.
    if ( frame_98e0cc74867196dc26183973b15ebe39 == cache_frame_98e0cc74867196dc26183973b15ebe39 )
    {
        Py_DECREF( frame_98e0cc74867196dc26183973b15ebe39 );
    }
    cache_frame_98e0cc74867196dc26183973b15ebe39 = NULL;

    assertFrameObject( frame_98e0cc74867196dc26183973b15ebe39 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_5_ifft );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)var_unitary );
    Py_DECREF( var_unitary );
    var_unitary = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)var_output );
    Py_DECREF( var_output );
    var_output = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

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

    Py_XDECREF( var_unitary );
    var_unitary = NULL;

    Py_XDECREF( par_n );
    par_n = NULL;

    Py_XDECREF( var_output );
    var_output = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_5_ifft );
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


static PyObject *impl_numpy$fft$fftpack$$$function_6_rfft( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_output = NULL;
    struct Nuitka_FrameObject *frame_2d4a827e94c23b51fa75f0dec0f23dc6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_2d4a827e94c23b51fa75f0dec0f23dc6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2d4a827e94c23b51fa75f0dec0f23dc6, codeobj_2d4a827e94c23b51fa75f0dec0f23dc6, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2d4a827e94c23b51fa75f0dec0f23dc6 = cache_frame_2d4a827e94c23b51fa75f0dec0f23dc6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2d4a827e94c23b51fa75f0dec0f23dc6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2d4a827e94c23b51fa75f0dec0f23dc6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
            exception_tb = NULL;

            exception_lineno = 387;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_c42c09a7ae1230df9bd4f49e205e4c00 );
        frame_2d4a827e94c23b51fa75f0dec0f23dc6->m_frame.f_lineno = 387;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__raw_fft );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fft );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_raw_fft" );
            exception_tb = NULL;

            exception_lineno = 388;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_2 = par_n;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_3 = par_axis;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fftpack );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpack );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "fftpack" );
            exception_tb = NULL;

            exception_lineno = 388;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_rffti );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 388;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fftpack );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpack );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_args_element_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "fftpack" );
            exception_tb = NULL;

            exception_lineno = 388;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_4;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_rfftf );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 388;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__real_fft_cache );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__real_fft_cache );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_real_fft_cache" );
            exception_tb = NULL;

            exception_lineno = 389;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_6 = tmp_mvar_value_5;
        frame_2d4a827e94c23b51fa75f0dec0f23dc6->m_frame.f_lineno = 388;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 388;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_output == NULL );
        var_output = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_7;
        int tmp_truth_name_1;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__unitary );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unitary );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_unitary" );
            exception_tb = NULL;

            exception_lineno = 390;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_6;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_7 = par_norm;
        frame_2d4a827e94c23b51fa75f0dec0f23dc6->m_frame.f_lineno = 390;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 390;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 390;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT( par_n );
            tmp_compexpr_left_1 = par_n;
            tmp_compexpr_right_1 = Py_None;
            tmp_condition_result_2 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_source_name_3;
                PyObject *tmp_subscript_name_1;
                CHECK_OBJECT( par_a );
                tmp_source_name_3 = par_a;
                tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
                if ( tmp_subscribed_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 392;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_axis );
                tmp_subscript_name_1 = par_axis;
                tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
                Py_DECREF( tmp_subscribed_name_1 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 392;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_n;
                    assert( old != NULL );
                    par_n = tmp_assign_source_3;
                    Py_DECREF( old );
                }

            }
            branch_no_2:;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_8;
            CHECK_OBJECT( var_output );
            tmp_left_name_1 = var_output;
            tmp_left_name_2 = const_int_pos_1;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_sqrt );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "sqrt" );
                exception_tb = NULL;

                exception_lineno = 393;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_7;
            CHECK_OBJECT( par_n );
            tmp_args_element_name_8 = par_n;
            frame_2d4a827e94c23b51fa75f0dec0f23dc6->m_frame.f_lineno = 393;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 393;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = BINARY_OPERATION_TRUEDIV( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 393;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 393;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_4 = tmp_left_name_1;
            var_output = tmp_assign_source_4;

        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d4a827e94c23b51fa75f0dec0f23dc6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d4a827e94c23b51fa75f0dec0f23dc6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2d4a827e94c23b51fa75f0dec0f23dc6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2d4a827e94c23b51fa75f0dec0f23dc6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2d4a827e94c23b51fa75f0dec0f23dc6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2d4a827e94c23b51fa75f0dec0f23dc6,
        type_description_1,
        par_a,
        par_n,
        par_axis,
        par_norm,
        var_output
    );


    // Release cached frame.
    if ( frame_2d4a827e94c23b51fa75f0dec0f23dc6 == cache_frame_2d4a827e94c23b51fa75f0dec0f23dc6 )
    {
        Py_DECREF( frame_2d4a827e94c23b51fa75f0dec0f23dc6 );
    }
    cache_frame_2d4a827e94c23b51fa75f0dec0f23dc6 = NULL;

    assertFrameObject( frame_2d4a827e94c23b51fa75f0dec0f23dc6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_output );
    tmp_return_value = var_output;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_6_rfft );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)var_output );
    Py_DECREF( var_output );
    var_output = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( par_n );
    par_n = NULL;

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

    Py_XDECREF( var_output );
    var_output = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( par_n );
    par_n = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_6_rfft );
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


static PyObject *impl_numpy$fft$fftpack$$$function_7_irfft( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_unitary = NULL;
    PyObject *var_output = NULL;
    struct Nuitka_FrameObject *frame_a013428d7affd4829bf4a2aba65d5c61;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a013428d7affd4829bf4a2aba65d5c61 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a013428d7affd4829bf4a2aba65d5c61, codeobj_a013428d7affd4829bf4a2aba65d5c61, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a013428d7affd4829bf4a2aba65d5c61 = cache_frame_a013428d7affd4829bf4a2aba65d5c61;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a013428d7affd4829bf4a2aba65d5c61 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a013428d7affd4829bf4a2aba65d5c61 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
            exception_tb = NULL;

            exception_lineno = 479;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_a02eb3206004e1dededd932dea2baa88 );
        frame_a013428d7affd4829bf4a2aba65d5c61->m_frame.f_lineno = 479;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 479;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_n );
        tmp_compexpr_left_1 = par_n;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( par_a );
            tmp_source_name_1 = par_a;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 481;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_axis );
            tmp_subscript_name_1 = par_axis;
            tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 481;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_int_pos_1;
            tmp_left_name_1 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 481;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = const_int_pos_2;
            tmp_assign_source_2 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 481;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_n;
                assert( old != NULL );
                par_n = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__unitary );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unitary );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_unitary" );
            exception_tb = NULL;

            exception_lineno = 482;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_1 = par_norm;
        frame_a013428d7affd4829bf4a2aba65d5c61->m_frame.f_lineno = 482;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 482;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_unitary == NULL );
        var_unitary = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__raw_fft );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fft );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_raw_fft" );
            exception_tb = NULL;

            exception_lineno = 483;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_2 = par_a;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_3 = par_n;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_4 = par_axis;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fftpack );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpack );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "fftpack" );
            exception_tb = NULL;

            exception_lineno = 483;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_4;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_rffti );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 483;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fftpack );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpack );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_args_element_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "fftpack" );
            exception_tb = NULL;

            exception_lineno = 483;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_5;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_rfftb );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 483;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__real_fft_cache );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__real_fft_cache );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_real_fft_cache" );
            exception_tb = NULL;

            exception_lineno = 484;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_7 = tmp_mvar_value_6;
        frame_a013428d7affd4829bf4a2aba65d5c61->m_frame.f_lineno = 483;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_5 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 483;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_output == NULL );
        var_output = tmp_assign_source_4;
    }
    {
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT( var_output );
        tmp_left_name_3 = var_output;
        tmp_left_name_4 = const_int_pos_1;
        CHECK_OBJECT( var_unitary );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_unitary );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 485;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_sqrt );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "sqrt" );
            exception_tb = NULL;

            exception_lineno = 485;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_7;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_8 = par_n;
        frame_a013428d7affd4829bf4a2aba65d5c61->m_frame.f_lineno = 485;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 485;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( par_n );
        tmp_right_name_4 = par_n;
        Py_INCREF( tmp_right_name_4 );
        condexpr_end_1:;
        tmp_right_name_3 = BINARY_OPERATION_TRUEDIV( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 485;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 485;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a013428d7affd4829bf4a2aba65d5c61 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a013428d7affd4829bf4a2aba65d5c61 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a013428d7affd4829bf4a2aba65d5c61 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a013428d7affd4829bf4a2aba65d5c61, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a013428d7affd4829bf4a2aba65d5c61->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a013428d7affd4829bf4a2aba65d5c61, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a013428d7affd4829bf4a2aba65d5c61,
        type_description_1,
        par_a,
        par_n,
        par_axis,
        par_norm,
        var_unitary,
        var_output
    );


    // Release cached frame.
    if ( frame_a013428d7affd4829bf4a2aba65d5c61 == cache_frame_a013428d7affd4829bf4a2aba65d5c61 )
    {
        Py_DECREF( frame_a013428d7affd4829bf4a2aba65d5c61 );
    }
    cache_frame_a013428d7affd4829bf4a2aba65d5c61 = NULL;

    assertFrameObject( frame_a013428d7affd4829bf4a2aba65d5c61 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_7_irfft );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)var_unitary );
    Py_DECREF( var_unitary );
    var_unitary = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)var_output );
    Py_DECREF( var_output );
    var_output = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

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

    Py_XDECREF( var_unitary );
    var_unitary = NULL;

    Py_XDECREF( par_n );
    par_n = NULL;

    Py_XDECREF( var_output );
    var_output = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_7_irfft );
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


static PyObject *impl_numpy$fft$fftpack$$$function_8_hfft( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_unitary = NULL;
    struct Nuitka_FrameObject *frame_528dcd53b7b0b221d0a7abc450f65f4a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_528dcd53b7b0b221d0a7abc450f65f4a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_528dcd53b7b0b221d0a7abc450f65f4a, codeobj_528dcd53b7b0b221d0a7abc450f65f4a, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_528dcd53b7b0b221d0a7abc450f65f4a = cache_frame_528dcd53b7b0b221d0a7abc450f65f4a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_528dcd53b7b0b221d0a7abc450f65f4a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_528dcd53b7b0b221d0a7abc450f65f4a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
            exception_tb = NULL;

            exception_lineno = 564;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_a02eb3206004e1dededd932dea2baa88 );
        frame_528dcd53b7b0b221d0a7abc450f65f4a->m_frame.f_lineno = 564;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 564;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_n );
        tmp_compexpr_left_1 = par_n;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( par_a );
            tmp_source_name_1 = par_a;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 566;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_axis );
            tmp_subscript_name_1 = par_axis;
            tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 566;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_int_pos_1;
            tmp_left_name_1 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 566;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = const_int_pos_2;
            tmp_assign_source_2 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 566;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_n;
                assert( old != NULL );
                par_n = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__unitary );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unitary );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_unitary" );
            exception_tb = NULL;

            exception_lineno = 567;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_1 = par_norm;
        frame_528dcd53b7b0b221d0a7abc450f65f4a->m_frame.f_lineno = 567;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 567;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_unitary == NULL );
        var_unitary = tmp_assign_source_3;
    }
    {
        PyObject *tmp_left_name_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_right_name_3;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_irfft );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_irfft );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "irfft" );
            exception_tb = NULL;

            exception_lineno = 568;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_conjugate );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_conjugate );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "conjugate" );
            exception_tb = NULL;

            exception_lineno = 568;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_3 = par_a;
        frame_528dcd53b7b0b221d0a7abc450f65f4a->m_frame.f_lineno = 568;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 568;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_n );
        tmp_args_element_name_4 = par_n;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_5 = par_axis;
        frame_528dcd53b7b0b221d0a7abc450f65f4a->m_frame.f_lineno = 568;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_left_name_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 568;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_unitary );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_unitary );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 568;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_sqrt );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_left_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "sqrt" );
            exception_tb = NULL;

            exception_lineno = 568;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_5;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_6 = par_n;
        frame_528dcd53b7b0b221d0a7abc450f65f4a->m_frame.f_lineno = 568;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 568;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( par_n );
        tmp_right_name_3 = par_n;
        Py_INCREF( tmp_right_name_3 );
        condexpr_end_1:;
        tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 568;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_528dcd53b7b0b221d0a7abc450f65f4a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_528dcd53b7b0b221d0a7abc450f65f4a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_528dcd53b7b0b221d0a7abc450f65f4a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_528dcd53b7b0b221d0a7abc450f65f4a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_528dcd53b7b0b221d0a7abc450f65f4a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_528dcd53b7b0b221d0a7abc450f65f4a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_528dcd53b7b0b221d0a7abc450f65f4a,
        type_description_1,
        par_a,
        par_n,
        par_axis,
        par_norm,
        var_unitary
    );


    // Release cached frame.
    if ( frame_528dcd53b7b0b221d0a7abc450f65f4a == cache_frame_528dcd53b7b0b221d0a7abc450f65f4a )
    {
        Py_DECREF( frame_528dcd53b7b0b221d0a7abc450f65f4a );
    }
    cache_frame_528dcd53b7b0b221d0a7abc450f65f4a = NULL;

    assertFrameObject( frame_528dcd53b7b0b221d0a7abc450f65f4a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_8_hfft );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)var_unitary );
    Py_DECREF( var_unitary );
    var_unitary = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

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

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    Py_XDECREF( var_unitary );
    var_unitary = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( par_n );
    par_n = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_8_hfft );
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


static PyObject *impl_numpy$fft$fftpack$$$function_9_ihfft( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_unitary = NULL;
    PyObject *var_output = NULL;
    struct Nuitka_FrameObject *frame_678c7c6356b55b98abc33839e9e9d0a8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_678c7c6356b55b98abc33839e9e9d0a8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_678c7c6356b55b98abc33839e9e9d0a8, codeobj_678c7c6356b55b98abc33839e9e9d0a8, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_678c7c6356b55b98abc33839e9e9d0a8 = cache_frame_678c7c6356b55b98abc33839e9e9d0a8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_678c7c6356b55b98abc33839e9e9d0a8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_678c7c6356b55b98abc33839e9e9d0a8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
            exception_tb = NULL;

            exception_lineno = 625;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_c42c09a7ae1230df9bd4f49e205e4c00 );
        frame_678c7c6356b55b98abc33839e9e9d0a8->m_frame.f_lineno = 625;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 625;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_n );
        tmp_compexpr_left_1 = par_n;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_a );
            tmp_source_name_1 = par_a;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 627;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_axis );
            tmp_subscript_name_1 = par_axis;
            tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 627;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_n;
                assert( old != NULL );
                par_n = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__unitary );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unitary );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_unitary" );
            exception_tb = NULL;

            exception_lineno = 628;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_1 = par_norm;
        frame_678c7c6356b55b98abc33839e9e9d0a8->m_frame.f_lineno = 628;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 628;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_unitary == NULL );
        var_unitary = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_conjugate );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_conjugate );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "conjugate" );
            exception_tb = NULL;

            exception_lineno = 629;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_rfft );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rfft );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "rfft" );
            exception_tb = NULL;

            exception_lineno = 629;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_3 = par_a;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_4 = par_n;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_5 = par_axis;
        frame_678c7c6356b55b98abc33839e9e9d0a8->m_frame.f_lineno = 629;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
        }

        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 629;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_678c7c6356b55b98abc33839e9e9d0a8->m_frame.f_lineno = 629;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 629;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_output == NULL );
        var_output = tmp_assign_source_4;
    }
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( var_output );
        tmp_left_name_1 = var_output;
        tmp_left_name_2 = const_int_pos_1;
        CHECK_OBJECT( var_unitary );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_unitary );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 630;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_sqrt );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "sqrt" );
            exception_tb = NULL;

            exception_lineno = 630;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_5;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_6 = par_n;
        frame_678c7c6356b55b98abc33839e9e9d0a8->m_frame.f_lineno = 630;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 630;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( par_n );
        tmp_right_name_2 = par_n;
        Py_INCREF( tmp_right_name_2 );
        condexpr_end_1:;
        tmp_right_name_1 = BINARY_OPERATION_TRUEDIV( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 630;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 630;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_678c7c6356b55b98abc33839e9e9d0a8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_678c7c6356b55b98abc33839e9e9d0a8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_678c7c6356b55b98abc33839e9e9d0a8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_678c7c6356b55b98abc33839e9e9d0a8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_678c7c6356b55b98abc33839e9e9d0a8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_678c7c6356b55b98abc33839e9e9d0a8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_678c7c6356b55b98abc33839e9e9d0a8,
        type_description_1,
        par_a,
        par_n,
        par_axis,
        par_norm,
        var_unitary,
        var_output
    );


    // Release cached frame.
    if ( frame_678c7c6356b55b98abc33839e9e9d0a8 == cache_frame_678c7c6356b55b98abc33839e9e9d0a8 )
    {
        Py_DECREF( frame_678c7c6356b55b98abc33839e9e9d0a8 );
    }
    cache_frame_678c7c6356b55b98abc33839e9e9d0a8 = NULL;

    assertFrameObject( frame_678c7c6356b55b98abc33839e9e9d0a8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_9_ihfft );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)var_unitary );
    Py_DECREF( var_unitary );
    var_unitary = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)var_output );
    Py_DECREF( var_output );
    var_output = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

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

    Py_XDECREF( var_unitary );
    var_unitary = NULL;

    Py_XDECREF( par_n );
    par_n = NULL;

    Py_XDECREF( var_output );
    var_output = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_9_ihfft );
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


static PyObject *impl_numpy$fft$fftpack$$$function_10__cook_nd_args( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_invreal = python_pars[ 3 ];
    PyObject *var_shapeless = NULL;
    struct Nuitka_FrameObject *frame_8c8fba259d77cb52fd11b341549e0096;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_8c8fba259d77cb52fd11b341549e0096 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8c8fba259d77cb52fd11b341549e0096, codeobj_8c8fba259d77cb52fd11b341549e0096, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8c8fba259d77cb52fd11b341549e0096 = cache_frame_8c8fba259d77cb52fd11b341549e0096;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8c8fba259d77cb52fd11b341549e0096 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8c8fba259d77cb52fd11b341549e0096 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_s );
        tmp_compexpr_left_1 = par_s;
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
            PyObject *tmp_assign_source_1;
            tmp_assign_source_1 = const_int_pos_1;
            assert( var_shapeless == NULL );
            Py_INCREF( tmp_assign_source_1 );
            var_shapeless = tmp_assign_source_1;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( par_axes );
            tmp_compexpr_left_2 = par_axes;
            tmp_compexpr_right_2 = Py_None;
            tmp_condition_result_2 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_list_arg_1;
                PyObject *tmp_source_name_1;
                CHECK_OBJECT( par_a );
                tmp_source_name_1 = par_a;
                tmp_list_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
                if ( tmp_list_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 637;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_2 = PySequence_List( tmp_list_arg_1 );
                Py_DECREF( tmp_list_arg_1 );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 637;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_s;
                    assert( old != NULL );
                    par_s = tmp_assign_source_2;
                    Py_DECREF( old );
                }

            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_called_name_1;
                PyObject *tmp_mvar_value_1;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_source_name_2;
                PyObject *tmp_args_element_name_2;
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_take );

                if (unlikely( tmp_mvar_value_1 == NULL ))
                {
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_take );
                }

                if ( tmp_mvar_value_1 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "take" );
                    exception_tb = NULL;

                    exception_lineno = 639;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_1 = tmp_mvar_value_1;
                CHECK_OBJECT( par_a );
                tmp_source_name_2 = par_a;
                tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
                if ( tmp_args_element_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 639;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_axes );
                tmp_args_element_name_2 = par_axes;
                frame_8c8fba259d77cb52fd11b341549e0096->m_frame.f_lineno = 639;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
                }

                Py_DECREF( tmp_args_element_name_1 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 639;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_s;
                    assert( old != NULL );
                    par_s = tmp_assign_source_3;
                    Py_DECREF( old );
                }

            }
            branch_end_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = const_int_0;
            assert( var_shapeless == NULL );
            Py_INCREF( tmp_assign_source_4 );
            var_shapeless = tmp_assign_source_4;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_list_arg_2;
        if ( par_s == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "s" );
            exception_tb = NULL;

            exception_lineno = 642;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_list_arg_2 = par_s;
        tmp_assign_source_5 = PySequence_List( tmp_list_arg_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 642;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_s;
            par_s = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_axes );
        tmp_compexpr_left_3 = par_axes;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_list_arg_3;
            PyObject *tmp_range2_low_1;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_len_arg_1;
            PyObject *tmp_range2_high_1;
            CHECK_OBJECT( par_s );
            tmp_len_arg_1 = par_s;
            tmp_operand_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 644;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_range2_low_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_range2_low_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 644;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_range2_high_1 = const_int_0;
            tmp_list_arg_3 = BUILTIN_RANGE2( tmp_range2_low_1, tmp_range2_high_1 );
            Py_DECREF( tmp_range2_low_1 );
            if ( tmp_list_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 644;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_6 = PySequence_List( tmp_list_arg_3 );
            Py_DECREF( tmp_list_arg_3 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 644;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_axes;
                assert( old != NULL );
                par_axes = tmp_assign_source_6;
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_len_arg_3;
        CHECK_OBJECT( par_s );
        tmp_len_arg_2 = par_s;
        tmp_compexpr_left_4 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 645;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_axes );
        tmp_len_arg_3 = par_axes;
        tmp_compexpr_right_4 = BUILTIN_LEN( tmp_len_arg_3 );
        if ( tmp_compexpr_right_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_4 );

            exception_lineno = 645;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        assert( !(tmp_res == -1) );
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
            tmp_make_exception_arg_1 = const_str_digest_ad30867cb50db197c788d8d9559403d4;
            frame_8c8fba259d77cb52fd11b341549e0096->m_frame.f_lineno = 646;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 646;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_invreal );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_invreal );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 647;
            type_description_1 = "ooooo";
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
        CHECK_OBJECT( var_shapeless );
        tmp_truth_name_2 = CHECK_IF_TRUE( var_shapeless );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 647;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_5 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_5 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_right_name_2;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            int tmp_ass_subscript_res_1;
            CHECK_OBJECT( par_a );
            tmp_source_name_3 = par_a;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 648;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_axes );
            tmp_subscribed_name_2 = par_axes;
            tmp_subscript_name_2 = const_int_neg_1;
            tmp_subscript_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, -1 );
            if ( tmp_subscript_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscribed_name_1 );

                exception_lineno = 648;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            Py_DECREF( tmp_subscript_name_1 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 648;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_int_pos_1;
            tmp_left_name_1 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 648;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = const_int_pos_2;
            tmp_ass_subvalue_1 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 648;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_s );
            tmp_ass_subscribed_1 = par_s;
            tmp_ass_subscript_1 = const_int_neg_1;
            tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, -1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_ass_subscript_res_1 == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 648;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_5:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8c8fba259d77cb52fd11b341549e0096 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8c8fba259d77cb52fd11b341549e0096 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8c8fba259d77cb52fd11b341549e0096, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8c8fba259d77cb52fd11b341549e0096->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8c8fba259d77cb52fd11b341549e0096, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8c8fba259d77cb52fd11b341549e0096,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_invreal,
        var_shapeless
    );


    // Release cached frame.
    if ( frame_8c8fba259d77cb52fd11b341549e0096 == cache_frame_8c8fba259d77cb52fd11b341549e0096 )
    {
        Py_DECREF( frame_8c8fba259d77cb52fd11b341549e0096 );
    }
    cache_frame_8c8fba259d77cb52fd11b341549e0096 = NULL;

    assertFrameObject( frame_8c8fba259d77cb52fd11b341549e0096 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_s );
        tmp_tuple_element_1 = par_s;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_axes );
        tmp_tuple_element_1 = par_axes;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_10__cook_nd_args );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)var_shapeless );
    Py_DECREF( var_shapeless );
    var_shapeless = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_invreal );
    Py_DECREF( par_invreal );
    par_invreal = NULL;

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

    Py_XDECREF( var_shapeless );
    var_shapeless = NULL;

    Py_XDECREF( par_s );
    par_s = NULL;

    Py_XDECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_invreal );
    Py_DECREF( par_invreal );
    par_invreal = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_10__cook_nd_args );
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


static PyObject *impl_numpy$fft$fftpack$$$function_11__raw_fftnd( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_function = python_pars[ 3 ];
    PyObject *par_norm = python_pars[ 4 ];
    PyObject *var_itl = NULL;
    PyObject *var_ii = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_fa81cdadcf87aba26d1cf7d5d0cdb41f;
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
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_fa81cdadcf87aba26d1cf7d5d0cdb41f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fa81cdadcf87aba26d1cf7d5d0cdb41f, codeobj_fa81cdadcf87aba26d1cf7d5d0cdb41f, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fa81cdadcf87aba26d1cf7d5d0cdb41f = cache_frame_fa81cdadcf87aba26d1cf7d5d0cdb41f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fa81cdadcf87aba26d1cf7d5d0cdb41f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fa81cdadcf87aba26d1cf7d5d0cdb41f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_asarray );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "asarray" );
            exception_tb = NULL;

            exception_lineno = 653;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_fa81cdadcf87aba26d1cf7d5d0cdb41f->m_frame.f_lineno = 653;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 653;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__cook_nd_args );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__cook_nd_args );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_cook_nd_args" );
            exception_tb = NULL;

            exception_lineno = 654;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_2 = par_a;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_3 = par_s;
        CHECK_OBJECT( par_axes );
        tmp_args_element_name_4 = par_axes;
        frame_fa81cdadcf87aba26d1cf7d5d0cdb41f->m_frame.f_lineno = 654;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 654;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 654;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0 );
        if ( tmp_assign_source_3 == NULL )
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


            type_description_1 = "ooooooo";
            exception_lineno = 654;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


            type_description_1 = "ooooooo";
            exception_lineno = 654;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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

                    type_description_1 = "ooooooo";
                    exception_lineno = 654;
                    goto try_except_handler_3;
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

            type_description_1 = "ooooooo";
            exception_lineno = 654;
            goto try_except_handler_3;
        }
    }
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_s;
            assert( old != NULL );
            par_s = tmp_assign_source_5;
            Py_INCREF( par_s );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_axes;
            assert( old != NULL );
            par_axes = tmp_assign_source_6;
            Py_INCREF( par_axes );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_range_arg_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_axes );
        tmp_len_arg_1 = par_axes;
        tmp_range_arg_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_range_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 655;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_list_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
        Py_DECREF( tmp_range_arg_1 );
        if ( tmp_list_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 655;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = PySequence_List( tmp_list_arg_1 );
        Py_DECREF( tmp_list_arg_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 655;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_itl == NULL );
        var_itl = tmp_assign_source_7;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( var_itl );
        tmp_called_instance_1 = var_itl;
        frame_fa81cdadcf87aba26d1cf7d5d0cdb41f->m_frame.f_lineno = 656;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_reverse );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 656;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( var_itl );
        tmp_iter_arg_2 = var_itl;
        tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 657;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_8;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_9 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooo";
                exception_lineno = 657;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_9;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_10 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_ii;
            var_ii = tmp_assign_source_10;
            Py_INCREF( var_ii );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        CHECK_OBJECT( par_function );
        tmp_called_name_3 = par_function;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_s );
        tmp_subscribed_name_1 = par_s;
        CHECK_OBJECT( var_ii );
        tmp_subscript_name_1 = var_ii;
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 658;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_dict_key_1 = const_str_plain_n;
        tmp_kw_name_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_axes );
        tmp_subscribed_name_2 = par_axes;
        CHECK_OBJECT( var_ii );
        tmp_subscript_name_2 = var_ii;
        tmp_dict_value_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 658;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_dict_key_2 = const_str_plain_axis;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_norm );
        tmp_dict_value_3 = par_norm;
        tmp_dict_key_3 = const_str_plain_norm;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        frame_fa81cdadcf87aba26d1cf7d5d0cdb41f->m_frame.f_lineno = 658;
        tmp_assign_source_11 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 658;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_11;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 657;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
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
    RESTORE_FRAME_EXCEPTION( frame_fa81cdadcf87aba26d1cf7d5d0cdb41f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fa81cdadcf87aba26d1cf7d5d0cdb41f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fa81cdadcf87aba26d1cf7d5d0cdb41f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fa81cdadcf87aba26d1cf7d5d0cdb41f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fa81cdadcf87aba26d1cf7d5d0cdb41f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fa81cdadcf87aba26d1cf7d5d0cdb41f,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_function,
        par_norm,
        var_itl,
        var_ii
    );


    // Release cached frame.
    if ( frame_fa81cdadcf87aba26d1cf7d5d0cdb41f == cache_frame_fa81cdadcf87aba26d1cf7d5d0cdb41f )
    {
        Py_DECREF( frame_fa81cdadcf87aba26d1cf7d5d0cdb41f );
    }
    cache_frame_fa81cdadcf87aba26d1cf7d5d0cdb41f = NULL;

    assertFrameObject( frame_fa81cdadcf87aba26d1cf7d5d0cdb41f );

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

    CHECK_OBJECT( par_a );
    tmp_return_value = par_a;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_11__raw_fftnd );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_function );
    Py_DECREF( par_function );
    par_function = NULL;

    CHECK_OBJECT( (PyObject *)var_itl );
    Py_DECREF( var_itl );
    var_itl = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    Py_XDECREF( var_ii );
    var_ii = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

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

    Py_XDECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_function );
    Py_DECREF( par_function );
    par_function = NULL;

    Py_XDECREF( var_itl );
    var_itl = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    Py_XDECREF( var_ii );
    var_ii = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_11__raw_fftnd );
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


static PyObject *impl_numpy$fft$fftpack$$$function_12__fftn_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_return_value = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_12__fftn_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_12__fftn_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$fft$fftpack$$$function_13_fftn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_f022c14dccf221cf23cd6c79e89bca4b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f022c14dccf221cf23cd6c79e89bca4b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f022c14dccf221cf23cd6c79e89bca4b, codeobj_f022c14dccf221cf23cd6c79e89bca4b, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f022c14dccf221cf23cd6c79e89bca4b = cache_frame_f022c14dccf221cf23cd6c79e89bca4b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f022c14dccf221cf23cd6c79e89bca4b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f022c14dccf221cf23cd6c79e89bca4b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__raw_fftnd );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fftnd );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_raw_fftnd" );
            exception_tb = NULL;

            exception_lineno = 761;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_2 = par_s;
        CHECK_OBJECT( par_axes );
        tmp_args_element_name_3 = par_axes;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fft );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fft );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "fft" );
            exception_tb = NULL;

            exception_lineno = 761;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = tmp_mvar_value_2;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_5 = par_norm;
        frame_f022c14dccf221cf23cd6c79e89bca4b->m_frame.f_lineno = 761;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 761;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f022c14dccf221cf23cd6c79e89bca4b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f022c14dccf221cf23cd6c79e89bca4b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f022c14dccf221cf23cd6c79e89bca4b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f022c14dccf221cf23cd6c79e89bca4b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f022c14dccf221cf23cd6c79e89bca4b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f022c14dccf221cf23cd6c79e89bca4b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f022c14dccf221cf23cd6c79e89bca4b,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm
    );


    // Release cached frame.
    if ( frame_f022c14dccf221cf23cd6c79e89bca4b == cache_frame_f022c14dccf221cf23cd6c79e89bca4b )
    {
        Py_DECREF( frame_f022c14dccf221cf23cd6c79e89bca4b );
    }
    cache_frame_f022c14dccf221cf23cd6c79e89bca4b = NULL;

    assertFrameObject( frame_f022c14dccf221cf23cd6c79e89bca4b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_13_fftn );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_13_fftn );
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


static PyObject *impl_numpy$fft$fftpack$$$function_14_ifftn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_94b1bec4b1f1198c3c0feb2294da4ad7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_94b1bec4b1f1198c3c0feb2294da4ad7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_94b1bec4b1f1198c3c0feb2294da4ad7, codeobj_94b1bec4b1f1198c3c0feb2294da4ad7, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_94b1bec4b1f1198c3c0feb2294da4ad7 = cache_frame_94b1bec4b1f1198c3c0feb2294da4ad7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_94b1bec4b1f1198c3c0feb2294da4ad7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_94b1bec4b1f1198c3c0feb2294da4ad7 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__raw_fftnd );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fftnd );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_raw_fftnd" );
            exception_tb = NULL;

            exception_lineno = 859;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_2 = par_s;
        CHECK_OBJECT( par_axes );
        tmp_args_element_name_3 = par_axes;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_ifft );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ifft );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "ifft" );
            exception_tb = NULL;

            exception_lineno = 859;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = tmp_mvar_value_2;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_5 = par_norm;
        frame_94b1bec4b1f1198c3c0feb2294da4ad7->m_frame.f_lineno = 859;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 859;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_94b1bec4b1f1198c3c0feb2294da4ad7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_94b1bec4b1f1198c3c0feb2294da4ad7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_94b1bec4b1f1198c3c0feb2294da4ad7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_94b1bec4b1f1198c3c0feb2294da4ad7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_94b1bec4b1f1198c3c0feb2294da4ad7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_94b1bec4b1f1198c3c0feb2294da4ad7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_94b1bec4b1f1198c3c0feb2294da4ad7,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm
    );


    // Release cached frame.
    if ( frame_94b1bec4b1f1198c3c0feb2294da4ad7 == cache_frame_94b1bec4b1f1198c3c0feb2294da4ad7 )
    {
        Py_DECREF( frame_94b1bec4b1f1198c3c0feb2294da4ad7 );
    }
    cache_frame_94b1bec4b1f1198c3c0feb2294da4ad7 = NULL;

    assertFrameObject( frame_94b1bec4b1f1198c3c0feb2294da4ad7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_14_ifftn );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_14_ifftn );
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


static PyObject *impl_numpy$fft$fftpack$$$function_15_fft2( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_146de1bd8ec8824c2d3d59c14bb2a4b7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_146de1bd8ec8824c2d3d59c14bb2a4b7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_146de1bd8ec8824c2d3d59c14bb2a4b7, codeobj_146de1bd8ec8824c2d3d59c14bb2a4b7, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_146de1bd8ec8824c2d3d59c14bb2a4b7 = cache_frame_146de1bd8ec8824c2d3d59c14bb2a4b7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_146de1bd8ec8824c2d3d59c14bb2a4b7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_146de1bd8ec8824c2d3d59c14bb2a4b7 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__raw_fftnd );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fftnd );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_raw_fftnd" );
            exception_tb = NULL;

            exception_lineno = 950;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_2 = par_s;
        CHECK_OBJECT( par_axes );
        tmp_args_element_name_3 = par_axes;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fft );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fft );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "fft" );
            exception_tb = NULL;

            exception_lineno = 950;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = tmp_mvar_value_2;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_5 = par_norm;
        frame_146de1bd8ec8824c2d3d59c14bb2a4b7->m_frame.f_lineno = 950;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 950;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_146de1bd8ec8824c2d3d59c14bb2a4b7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_146de1bd8ec8824c2d3d59c14bb2a4b7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_146de1bd8ec8824c2d3d59c14bb2a4b7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_146de1bd8ec8824c2d3d59c14bb2a4b7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_146de1bd8ec8824c2d3d59c14bb2a4b7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_146de1bd8ec8824c2d3d59c14bb2a4b7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_146de1bd8ec8824c2d3d59c14bb2a4b7,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm
    );


    // Release cached frame.
    if ( frame_146de1bd8ec8824c2d3d59c14bb2a4b7 == cache_frame_146de1bd8ec8824c2d3d59c14bb2a4b7 )
    {
        Py_DECREF( frame_146de1bd8ec8824c2d3d59c14bb2a4b7 );
    }
    cache_frame_146de1bd8ec8824c2d3d59c14bb2a4b7 = NULL;

    assertFrameObject( frame_146de1bd8ec8824c2d3d59c14bb2a4b7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_15_fft2 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_15_fft2 );
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


static PyObject *impl_numpy$fft$fftpack$$$function_16_ifft2( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_58b8ff34e0c16119bcb8e85ba3f9c084;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_58b8ff34e0c16119bcb8e85ba3f9c084 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_58b8ff34e0c16119bcb8e85ba3f9c084, codeobj_58b8ff34e0c16119bcb8e85ba3f9c084, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_58b8ff34e0c16119bcb8e85ba3f9c084 = cache_frame_58b8ff34e0c16119bcb8e85ba3f9c084;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_58b8ff34e0c16119bcb8e85ba3f9c084 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_58b8ff34e0c16119bcb8e85ba3f9c084 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__raw_fftnd );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fftnd );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_raw_fftnd" );
            exception_tb = NULL;

            exception_lineno = 1038;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_2 = par_s;
        CHECK_OBJECT( par_axes );
        tmp_args_element_name_3 = par_axes;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_ifft );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ifft );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "ifft" );
            exception_tb = NULL;

            exception_lineno = 1038;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = tmp_mvar_value_2;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_5 = par_norm;
        frame_58b8ff34e0c16119bcb8e85ba3f9c084->m_frame.f_lineno = 1038;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1038;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_58b8ff34e0c16119bcb8e85ba3f9c084 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_58b8ff34e0c16119bcb8e85ba3f9c084 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_58b8ff34e0c16119bcb8e85ba3f9c084 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_58b8ff34e0c16119bcb8e85ba3f9c084, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_58b8ff34e0c16119bcb8e85ba3f9c084->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_58b8ff34e0c16119bcb8e85ba3f9c084, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_58b8ff34e0c16119bcb8e85ba3f9c084,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm
    );


    // Release cached frame.
    if ( frame_58b8ff34e0c16119bcb8e85ba3f9c084 == cache_frame_58b8ff34e0c16119bcb8e85ba3f9c084 )
    {
        Py_DECREF( frame_58b8ff34e0c16119bcb8e85ba3f9c084 );
    }
    cache_frame_58b8ff34e0c16119bcb8e85ba3f9c084 = NULL;

    assertFrameObject( frame_58b8ff34e0c16119bcb8e85ba3f9c084 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_16_ifft2 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_16_ifft2 );
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


static PyObject *impl_numpy$fft$fftpack$$$function_17_rfftn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_ii = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_e4d0c456b275c341dc7ff908163232c6;
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
    static struct Nuitka_FrameObject *cache_frame_e4d0c456b275c341dc7ff908163232c6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e4d0c456b275c341dc7ff908163232c6, codeobj_e4d0c456b275c341dc7ff908163232c6, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e4d0c456b275c341dc7ff908163232c6 = cache_frame_e4d0c456b275c341dc7ff908163232c6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e4d0c456b275c341dc7ff908163232c6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e4d0c456b275c341dc7ff908163232c6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
            exception_tb = NULL;

            exception_lineno = 1126;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_c42c09a7ae1230df9bd4f49e205e4c00 );
        frame_e4d0c456b275c341dc7ff908163232c6->m_frame.f_lineno = 1126;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1126;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__cook_nd_args );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__cook_nd_args );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_cook_nd_args" );
            exception_tb = NULL;

            exception_lineno = 1127;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_2 = par_s;
        CHECK_OBJECT( par_axes );
        tmp_args_element_name_3 = par_axes;
        frame_e4d0c456b275c341dc7ff908163232c6->m_frame.f_lineno = 1127;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1127;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1127;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0 );
        if ( tmp_assign_source_3 == NULL )
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


            type_description_1 = "ooooo";
            exception_lineno = 1127;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


            type_description_1 = "ooooo";
            exception_lineno = 1127;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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

                    type_description_1 = "ooooo";
                    exception_lineno = 1127;
                    goto try_except_handler_3;
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

            type_description_1 = "ooooo";
            exception_lineno = 1127;
            goto try_except_handler_3;
        }
    }
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_s;
            assert( old != NULL );
            par_s = tmp_assign_source_5;
            Py_INCREF( par_s );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_axes;
            assert( old != NULL );
            par_axes = tmp_assign_source_6;
            Py_INCREF( par_axes );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_rfft );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rfft );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "rfft" );
            exception_tb = NULL;

            exception_lineno = 1128;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_4 = par_a;
        CHECK_OBJECT( par_s );
        tmp_subscribed_name_1 = par_s;
        tmp_subscript_name_1 = const_int_neg_1;
        tmp_args_element_name_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, -1 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1128;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_axes );
        tmp_subscribed_name_2 = par_axes;
        tmp_subscript_name_2 = const_int_neg_1;
        tmp_args_element_name_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, -1 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 1128;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_7 = par_norm;
        frame_e4d0c456b275c341dc7ff908163232c6->m_frame.f_lineno = 1128;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_5 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1128;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_7;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_range_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_axes );
        tmp_len_arg_1 = par_axes;
        tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1129;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_1;
        tmp_range_arg_1 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_range_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1129;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_2 = BUILTIN_RANGE( tmp_range_arg_1 );
        Py_DECREF( tmp_range_arg_1 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1129;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1129;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_8;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_9 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooo";
                exception_lineno = 1129;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_9;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_10 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_ii;
            var_ii = tmp_assign_source_10;
            Py_INCREF( var_ii );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_args_element_name_11;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fft );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fft );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "fft" );
            exception_tb = NULL;

            exception_lineno = 1130;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_8 = par_a;
        CHECK_OBJECT( par_s );
        tmp_subscribed_name_3 = par_s;
        CHECK_OBJECT( var_ii );
        tmp_subscript_name_3 = var_ii;
        tmp_args_element_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1130;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_axes );
        tmp_subscribed_name_4 = par_axes;
        CHECK_OBJECT( var_ii );
        tmp_subscript_name_4 = var_ii;
        tmp_args_element_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_9 );

            exception_lineno = 1130;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_11 = par_norm;
        frame_e4d0c456b275c341dc7ff908163232c6->m_frame.f_lineno = 1130;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_9 );
        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1130;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_11;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1129;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
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
    RESTORE_FRAME_EXCEPTION( frame_e4d0c456b275c341dc7ff908163232c6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e4d0c456b275c341dc7ff908163232c6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e4d0c456b275c341dc7ff908163232c6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e4d0c456b275c341dc7ff908163232c6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e4d0c456b275c341dc7ff908163232c6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e4d0c456b275c341dc7ff908163232c6,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm,
        var_ii
    );


    // Release cached frame.
    if ( frame_e4d0c456b275c341dc7ff908163232c6 == cache_frame_e4d0c456b275c341dc7ff908163232c6 )
    {
        Py_DECREF( frame_e4d0c456b275c341dc7ff908163232c6 );
    }
    cache_frame_e4d0c456b275c341dc7ff908163232c6 = NULL;

    assertFrameObject( frame_e4d0c456b275c341dc7ff908163232c6 );

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

    CHECK_OBJECT( par_a );
    tmp_return_value = par_a;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_17_rfftn );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    Py_XDECREF( var_ii );
    var_ii = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

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

    Py_XDECREF( par_a );
    par_a = NULL;

    Py_XDECREF( var_ii );
    var_ii = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_17_rfftn );
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


static PyObject *impl_numpy$fft$fftpack$$$function_18_rfft2( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_03a1f1a43e26819323d96d6dc0d7ec47;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_03a1f1a43e26819323d96d6dc0d7ec47 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_03a1f1a43e26819323d96d6dc0d7ec47, codeobj_03a1f1a43e26819323d96d6dc0d7ec47, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_03a1f1a43e26819323d96d6dc0d7ec47 = cache_frame_03a1f1a43e26819323d96d6dc0d7ec47;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_03a1f1a43e26819323d96d6dc0d7ec47 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_03a1f1a43e26819323d96d6dc0d7ec47 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_rfftn );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rfftn );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "rfftn" );
            exception_tb = NULL;

            exception_lineno = 1169;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_2 = par_s;
        CHECK_OBJECT( par_axes );
        tmp_args_element_name_3 = par_axes;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_4 = par_norm;
        frame_03a1f1a43e26819323d96d6dc0d7ec47->m_frame.f_lineno = 1169;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1169;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_03a1f1a43e26819323d96d6dc0d7ec47 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_03a1f1a43e26819323d96d6dc0d7ec47 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_03a1f1a43e26819323d96d6dc0d7ec47 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_03a1f1a43e26819323d96d6dc0d7ec47, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_03a1f1a43e26819323d96d6dc0d7ec47->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_03a1f1a43e26819323d96d6dc0d7ec47, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_03a1f1a43e26819323d96d6dc0d7ec47,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm
    );


    // Release cached frame.
    if ( frame_03a1f1a43e26819323d96d6dc0d7ec47 == cache_frame_03a1f1a43e26819323d96d6dc0d7ec47 )
    {
        Py_DECREF( frame_03a1f1a43e26819323d96d6dc0d7ec47 );
    }
    cache_frame_03a1f1a43e26819323d96d6dc0d7ec47 = NULL;

    assertFrameObject( frame_03a1f1a43e26819323d96d6dc0d7ec47 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_18_rfft2 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_18_rfft2 );
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


static PyObject *impl_numpy$fft$fftpack$$$function_19_irfftn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_ii = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_3d2f4562c9dc3d56e52e93455078c5b2;
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
    static struct Nuitka_FrameObject *cache_frame_3d2f4562c9dc3d56e52e93455078c5b2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3d2f4562c9dc3d56e52e93455078c5b2, codeobj_3d2f4562c9dc3d56e52e93455078c5b2, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3d2f4562c9dc3d56e52e93455078c5b2 = cache_frame_3d2f4562c9dc3d56e52e93455078c5b2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3d2f4562c9dc3d56e52e93455078c5b2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3d2f4562c9dc3d56e52e93455078c5b2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
            exception_tb = NULL;

            exception_lineno = 1259;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_a02eb3206004e1dededd932dea2baa88 );
        frame_3d2f4562c9dc3d56e52e93455078c5b2->m_frame.f_lineno = 1259;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1259;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__cook_nd_args );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__cook_nd_args );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_cook_nd_args" );
            exception_tb = NULL;

            exception_lineno = 1260;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_2 = par_a;
        tmp_args_name_2 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_s );
        tmp_tuple_element_2 = par_s;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
        CHECK_OBJECT( par_axes );
        tmp_tuple_element_2 = par_axes;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
        tmp_kw_name_2 = PyDict_Copy( const_dict_dd45c77b755c75255009fd804f504c08 );
        frame_3d2f4562c9dc3d56e52e93455078c5b2->m_frame.f_lineno = 1260;
        tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1260;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1260;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0 );
        if ( tmp_assign_source_3 == NULL )
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


            type_description_1 = "ooooo";
            exception_lineno = 1260;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


            type_description_1 = "ooooo";
            exception_lineno = 1260;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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

                    type_description_1 = "ooooo";
                    exception_lineno = 1260;
                    goto try_except_handler_3;
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

            type_description_1 = "ooooo";
            exception_lineno = 1260;
            goto try_except_handler_3;
        }
    }
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_s;
            assert( old != NULL );
            par_s = tmp_assign_source_5;
            Py_INCREF( par_s );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_axes;
            assert( old != NULL );
            par_axes = tmp_assign_source_6;
            Py_INCREF( par_axes );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_range_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_axes );
        tmp_len_arg_1 = par_axes;
        tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1261;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_1;
        tmp_range_arg_1 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_range_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1261;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_2 = BUILTIN_RANGE( tmp_range_arg_1 );
        Py_DECREF( tmp_range_arg_1 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1261;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1261;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooo";
                exception_lineno = 1261;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_9 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_ii;
            var_ii = tmp_assign_source_9;
            Py_INCREF( var_ii );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_ifft );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ifft );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "ifft" );
            exception_tb = NULL;

            exception_lineno = 1262;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_s );
        tmp_subscribed_name_1 = par_s;
        CHECK_OBJECT( var_ii );
        tmp_subscript_name_1 = var_ii;
        tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1262;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_axes );
        tmp_subscribed_name_2 = par_axes;
        CHECK_OBJECT( var_ii );
        tmp_subscript_name_2 = var_ii;
        tmp_args_element_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 1262;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_4 = par_norm;
        frame_3d2f4562c9dc3d56e52e93455078c5b2->m_frame.f_lineno = 1262;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1262;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_10;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1261;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
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
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_irfft );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_irfft );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "irfft" );
            exception_tb = NULL;

            exception_lineno = 1263;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_5 = par_a;
        CHECK_OBJECT( par_s );
        tmp_subscribed_name_3 = par_s;
        tmp_subscript_name_3 = const_int_neg_1;
        tmp_args_element_name_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, -1 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1263;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_axes );
        tmp_subscribed_name_4 = par_axes;
        tmp_subscript_name_4 = const_int_neg_1;
        tmp_args_element_name_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, -1 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 1263;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_8 = par_norm;
        frame_3d2f4562c9dc3d56e52e93455078c5b2->m_frame.f_lineno = 1263;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1263;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_11;
            Py_DECREF( old );
        }

    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d2f4562c9dc3d56e52e93455078c5b2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d2f4562c9dc3d56e52e93455078c5b2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3d2f4562c9dc3d56e52e93455078c5b2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3d2f4562c9dc3d56e52e93455078c5b2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3d2f4562c9dc3d56e52e93455078c5b2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3d2f4562c9dc3d56e52e93455078c5b2,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm,
        var_ii
    );


    // Release cached frame.
    if ( frame_3d2f4562c9dc3d56e52e93455078c5b2 == cache_frame_3d2f4562c9dc3d56e52e93455078c5b2 )
    {
        Py_DECREF( frame_3d2f4562c9dc3d56e52e93455078c5b2 );
    }
    cache_frame_3d2f4562c9dc3d56e52e93455078c5b2 = NULL;

    assertFrameObject( frame_3d2f4562c9dc3d56e52e93455078c5b2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_a );
    tmp_return_value = par_a;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_19_irfftn );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    Py_XDECREF( var_ii );
    var_ii = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

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

    Py_XDECREF( par_a );
    par_a = NULL;

    Py_XDECREF( var_ii );
    var_ii = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_19_irfftn );
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


static PyObject *impl_numpy$fft$fftpack$$$function_20_irfft2( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_48c73934d46ce8e92cefefc4d3d87b4f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_48c73934d46ce8e92cefefc4d3d87b4f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_48c73934d46ce8e92cefefc4d3d87b4f, codeobj_48c73934d46ce8e92cefefc4d3d87b4f, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_48c73934d46ce8e92cefefc4d3d87b4f = cache_frame_48c73934d46ce8e92cefefc4d3d87b4f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_48c73934d46ce8e92cefefc4d3d87b4f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_48c73934d46ce8e92cefefc4d3d87b4f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_irfftn );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_irfftn );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "irfftn" );
            exception_tb = NULL;

            exception_lineno = 1302;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_2 = par_s;
        CHECK_OBJECT( par_axes );
        tmp_args_element_name_3 = par_axes;
        CHECK_OBJECT( par_norm );
        tmp_args_element_name_4 = par_norm;
        frame_48c73934d46ce8e92cefefc4d3d87b4f->m_frame.f_lineno = 1302;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1302;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_48c73934d46ce8e92cefefc4d3d87b4f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_48c73934d46ce8e92cefefc4d3d87b4f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_48c73934d46ce8e92cefefc4d3d87b4f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_48c73934d46ce8e92cefefc4d3d87b4f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_48c73934d46ce8e92cefefc4d3d87b4f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_48c73934d46ce8e92cefefc4d3d87b4f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_48c73934d46ce8e92cefefc4d3d87b4f,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm
    );


    // Release cached frame.
    if ( frame_48c73934d46ce8e92cefefc4d3d87b4f == cache_frame_48c73934d46ce8e92cefefc4d3d87b4f )
    {
        Py_DECREF( frame_48c73934d46ce8e92cefefc4d3d87b4f );
    }
    cache_frame_48c73934d46ce8e92cefefc4d3d87b4f = NULL;

    assertFrameObject( frame_48c73934d46ce8e92cefefc4d3d87b4f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_20_irfft2 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_20_irfft2 );
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



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_10__cook_nd_args( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_10__cook_nd_args,
        const_str_plain__cook_nd_args,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8c8fba259d77cb52fd11b341549e0096,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$fftpack,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_11__raw_fftnd( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_11__raw_fftnd,
        const_str_plain__raw_fftnd,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fa81cdadcf87aba26d1cf7d5d0cdb41f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$fftpack,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_12__fftn_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_12__fftn_dispatcher,
        const_str_plain__fftn_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fea2337b661073dcdbd3236bf7ec05a8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$fftpack,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_13_fftn( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_13_fftn,
        const_str_plain_fftn,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f022c14dccf221cf23cd6c79e89bca4b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$fftpack,
        const_str_digest_24d3f300976d1f0b4094bd13ac30f8b0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_14_ifftn( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_14_ifftn,
        const_str_plain_ifftn,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_94b1bec4b1f1198c3c0feb2294da4ad7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$fftpack,
        const_str_digest_53f6110acd950a9eb6f9eef15b0f9daa,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_15_fft2( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_15_fft2,
        const_str_plain_fft2,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_146de1bd8ec8824c2d3d59c14bb2a4b7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$fftpack,
        const_str_digest_950dc64ef6772674dbea217abe8be8b3,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_16_ifft2( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_16_ifft2,
        const_str_plain_ifft2,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_58b8ff34e0c16119bcb8e85ba3f9c084,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$fftpack,
        const_str_digest_0e484a7e341d275f185007a474ec79cb,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_17_rfftn( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_17_rfftn,
        const_str_plain_rfftn,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e4d0c456b275c341dc7ff908163232c6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$fftpack,
        const_str_digest_dbc10c3e332a8d966e8c779c64feee7f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_18_rfft2( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_18_rfft2,
        const_str_plain_rfft2,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_03a1f1a43e26819323d96d6dc0d7ec47,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$fftpack,
        const_str_digest_67a439b64216fd79a420034aec6214a2,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_19_irfftn( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_19_irfftn,
        const_str_plain_irfftn,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3d2f4562c9dc3d56e52e93455078c5b2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$fftpack,
        const_str_digest_5b8d182c21b80ce6cc93893e9bfd60b8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_1__raw_fft( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_1__raw_fft,
        const_str_plain__raw_fft,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_818bc85e1f1b7e60a0d5411ea5be6cfd,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$fftpack,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_20_irfft2( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_20_irfft2,
        const_str_plain_irfft2,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_48c73934d46ce8e92cefefc4d3d87b4f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$fftpack,
        const_str_digest_72f01e533c77be794cb83caa076fd016,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_2__unitary(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_2__unitary,
        const_str_plain__unitary,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_950c045f0917f1623306f92cddc61d14,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$fftpack,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_3__fft_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_3__fft_dispatcher,
        const_str_plain__fft_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1fe56d68fd8aee8a78399df5f56b42be,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$fftpack,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_4_fft( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_4_fft,
        const_str_plain_fft,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2d60bcf4dd86a8e96800e097b9ef62cc,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$fftpack,
        const_str_digest_5c9c7abd14e51c25cd57c2d5a1659d8b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_5_ifft( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_5_ifft,
        const_str_plain_ifft,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_98e0cc74867196dc26183973b15ebe39,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$fftpack,
        const_str_digest_e2e62bdc9ea89915ae0ff9e1b643f817,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_6_rfft( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_6_rfft,
        const_str_plain_rfft,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2d4a827e94c23b51fa75f0dec0f23dc6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$fftpack,
        const_str_digest_9ff4852d28cd7861483c7f88480ddc86,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_7_irfft( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_7_irfft,
        const_str_plain_irfft,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a013428d7affd4829bf4a2aba65d5c61,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$fftpack,
        const_str_digest_01f1066a51923fba70f30d308247f079,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_8_hfft( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_8_hfft,
        const_str_plain_hfft,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_528dcd53b7b0b221d0a7abc450f65f4a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$fftpack,
        const_str_digest_e3b57a155d14f7030bedf77d7a70ca1e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_9_ihfft( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_9_ihfft,
        const_str_plain_ihfft,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_678c7c6356b55b98abc33839e9e9d0a8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$fft$fftpack,
        const_str_digest_c0d490a82d99d03062bec8127224c04c,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$fft$fftpack =
{
    PyModuleDef_HEAD_INIT,
    "numpy.fft.fftpack",
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

MOD_INIT_DECL( numpy$fft$fftpack )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$fft$fftpack );
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
    puts("numpy.fft.fftpack: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.fft.fftpack: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.fft.fftpack: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$fft$fftpack" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$fft$fftpack = Py_InitModule4(
        "numpy.fft.fftpack",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_numpy$fft$fftpack = PyModule_Create( &mdef_numpy$fft$fftpack );
#endif

    moduledict_numpy$fft$fftpack = MODULE_DICT( module_numpy$fft$fftpack );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_numpy$fft$fftpack,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$fft$fftpack,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$fft$fftpack,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_numpy$fft$fftpack );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_23098722ef505adb63be2b05fe120fdd, module_numpy$fft$fftpack );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_8406e6329adbe0bdb9357a26ee9483cb;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_908e64f8abe07e7ca762be78e2dd2d4d;
        UPDATE_STRING_DICT0( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_82c723e3fe8d0870c9b15e95a26ae7eb;
        UPDATE_STRING_DICT0( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PyImport_ImportModule("__future__");
        assert( !(tmp_assign_source_3 == NULL) );
        assert( tmp_import_from_1__module == NULL );
        Py_INCREF( tmp_assign_source_3 );
        tmp_import_from_1__module = tmp_assign_source_3;
    }
    // Frame without reuse.
    frame_8406e6329adbe0bdb9357a26ee9483cb = MAKE_MODULE_FRAME( codeobj_8406e6329adbe0bdb9357a26ee9483cb, module_numpy$fft$fftpack );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_8406e6329adbe0bdb9357a26ee9483cb );
    assert( Py_REFCNT( frame_8406e6329adbe0bdb9357a26ee9483cb ) == 2 );

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = LIST_COPY( const_list_60f473887d8c78e2f768e087222cf620_list );
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_functools;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$fft$fftpack;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 38;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_functools, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
        tmp_globals_name_2 = (PyObject *)moduledict_numpy$fft$fftpack;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_51c8848fc394aa1e51d5cda5f608f872_tuple;
        tmp_level_name_2 = const_int_0;
        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 40;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_4 = tmp_import_from_2__module;
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_array );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_array, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_asarray );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_asarray, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_zeros );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_zeros, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_swapaxes );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_swapaxes, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_shape );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_shape, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_9 = tmp_import_from_2__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_conjugate );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_conjugate, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_10 = tmp_import_from_2__module;
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_take );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_take, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_11 = tmp_import_from_2__module;
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_sqrt );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_sqrt, tmp_assign_source_17 );
    }
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_f104ae7867dfcd3f38891fc4f1b7cd57;
        tmp_globals_name_3 = (PyObject *)moduledict_numpy$fft$fftpack;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_normalize_axis_index_tuple;
        tmp_level_name_3 = const_int_0;
        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 42;
        tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_normalize_axis_index );
        Py_DECREF( tmp_import_name_from_12 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_normalize_axis_index, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
        tmp_globals_name_4 = (PyObject *)moduledict_numpy$fft$fftpack;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_overrides_tuple;
        tmp_level_name_4 = const_int_0;
        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 43;
        tmp_import_name_from_13 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_overrides );
        Py_DECREF( tmp_import_name_from_13 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_overrides, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_empty;
        tmp_globals_name_5 = (PyObject *)moduledict_numpy$fft$fftpack;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_fftpack_lite_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 44;
        tmp_import_name_from_14 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_fftpack_lite );
        Py_DECREF( tmp_import_name_from_14 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fftpack, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_helper;
        tmp_globals_name_6 = (PyObject *)moduledict_numpy$fft$fftpack;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain__FFTCache_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 45;
        tmp_import_name_from_15 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_import_name_from_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain__FFTCache );
        Py_DECREF( tmp_import_name_from_15 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__FFTCache, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__FFTCache );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__FFTCache );
        }

        CHECK_OBJECT( tmp_mvar_value_1 );
        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_kw_name_1 = PyDict_Copy( const_dict_073d0317252e4445514a1773373206fe );
        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 47;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__fft_cache, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__FFTCache );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__FFTCache );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_FFTCache" );
            exception_tb = NULL;

            exception_lineno = 48;

            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        tmp_kw_name_2 = PyDict_Copy( const_dict_073d0317252e4445514a1773373206fe );
        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 48;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__real_fft_cache, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_kw_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_functools );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_functools );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "functools" );
            exception_tb = NULL;

            exception_lineno = 51;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_partial );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_overrides );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_overrides );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "overrides" );
            exception_tb = NULL;

            exception_lineno = 52;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_4;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_array_function_dispatch );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_3 = PyDict_Copy( const_dict_c0d9920cdb2d132dd609908b9aa6b9e2 );
        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 51;
        tmp_assign_source_24 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_3 );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_3 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_array_function_dispatch, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_mvar_value_7;
        tmp_tuple_element_2 = Py_None;
        tmp_defaults_1 = PyTuple_New( 5 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_2 );
        tmp_tuple_element_2 = const_int_neg_1;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_2 );
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fftpack );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpack );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_defaults_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "fftpack" );
            exception_tb = NULL;

            exception_lineno = 55;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_5;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_cffti );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_defaults_1 );

            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_defaults_1, 2, tmp_tuple_element_2 );
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fftpack );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpack );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_defaults_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "fftpack" );
            exception_tb = NULL;

            exception_lineno = 56;

            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_6;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_cfftf );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_defaults_1 );

            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_defaults_1, 3, tmp_tuple_element_2 );
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__fft_cache );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fft_cache );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_defaults_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_fft_cache" );
            exception_tb = NULL;

            exception_lineno = 56;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = tmp_mvar_value_7;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_defaults_1, 4, tmp_tuple_element_2 );
        tmp_assign_source_25 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_1__raw_fft( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__raw_fft, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_2__unitary(  );



        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__unitary, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_none_none_none_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_27 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_3__fft_dispatcher( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__fft_dispatcher, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_name_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_defaults_3;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;

            exception_lineno = 115;

            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_8;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_9 );
        tmp_args_element_name_1 = tmp_mvar_value_9;
        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_called_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_defaults_3 = const_tuple_none_int_neg_1_none_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_args_element_name_2 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_4_fft( tmp_defaults_3 );



        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fft, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_name_6;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_defaults_4;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_10;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_fft_dispatcher" );
            exception_tb = NULL;

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_11;
        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 212;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_called_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_defaults_4 = const_tuple_none_int_neg_1_none_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_args_element_name_4 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_5_ifft( tmp_defaults_4 );



        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 212;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_ifft, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_name_8;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_defaults_5;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;

            exception_lineno = 307;

            goto frame_exception_exit_1;
        }

        tmp_called_name_9 = tmp_mvar_value_12;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_fft_dispatcher" );
            exception_tb = NULL;

            exception_lineno = 307;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = tmp_mvar_value_13;
        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 307;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_called_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_defaults_5 = const_tuple_none_int_neg_1_none_tuple;
        Py_INCREF( tmp_defaults_5 );
        tmp_args_element_name_6 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_6_rfft( tmp_defaults_5 );



        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 307;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_rfft, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_name_10;
        PyObject *tmp_called_name_11;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_defaults_6;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;

            exception_lineno = 397;

            goto frame_exception_exit_1;
        }

        tmp_called_name_11 = tmp_mvar_value_14;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );
        }

        if ( tmp_mvar_value_15 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_fft_dispatcher" );
            exception_tb = NULL;

            exception_lineno = 397;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_7 = tmp_mvar_value_15;
        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 397;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_called_name_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
        }

        if ( tmp_called_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
        tmp_defaults_6 = const_tuple_none_int_neg_1_none_tuple;
        Py_INCREF( tmp_defaults_6 );
        tmp_args_element_name_8 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_7_irfft( tmp_defaults_6 );



        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 397;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_irfft, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_name_12;
        PyObject *tmp_called_name_13;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_defaults_7;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_16 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;

            exception_lineno = 488;

            goto frame_exception_exit_1;
        }

        tmp_called_name_13 = tmp_mvar_value_16;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );
        }

        if ( tmp_mvar_value_17 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_fft_dispatcher" );
            exception_tb = NULL;

            exception_lineno = 488;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_9 = tmp_mvar_value_17;
        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 488;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_called_name_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
        }

        if ( tmp_called_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 488;

            goto frame_exception_exit_1;
        }
        tmp_defaults_7 = const_tuple_none_int_neg_1_none_tuple;
        Py_INCREF( tmp_defaults_7 );
        tmp_args_element_name_10 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_8_hfft( tmp_defaults_7 );



        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 488;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
        }

        Py_DECREF( tmp_called_name_12 );
        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 488;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_hfft, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_name_14;
        PyObject *tmp_called_name_15;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_defaults_8;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_18 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;

            exception_lineno = 571;

            goto frame_exception_exit_1;
        }

        tmp_called_name_15 = tmp_mvar_value_18;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fft_dispatcher );
        }

        if ( tmp_mvar_value_19 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_fft_dispatcher" );
            exception_tb = NULL;

            exception_lineno = 571;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_11 = tmp_mvar_value_19;
        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 571;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_called_name_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
        }

        if ( tmp_called_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 571;

            goto frame_exception_exit_1;
        }
        tmp_defaults_8 = const_tuple_none_int_neg_1_none_tuple;
        Py_INCREF( tmp_defaults_8 );
        tmp_args_element_name_12 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_9_ihfft( tmp_defaults_8 );



        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 571;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
        }

        Py_DECREF( tmp_called_name_14 );
        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 571;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_ihfft, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_defaults_9;
        tmp_defaults_9 = const_tuple_none_none_int_0_tuple;
        Py_INCREF( tmp_defaults_9 );
        tmp_assign_source_34 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_10__cook_nd_args( tmp_defaults_9 );



        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__cook_nd_args, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_defaults_10;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_mvar_value_20;
        tmp_tuple_element_3 = Py_None;
        tmp_defaults_10 = PyTuple_New( 4 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_defaults_10, 0, tmp_tuple_element_3 );
        tmp_tuple_element_3 = Py_None;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_defaults_10, 1, tmp_tuple_element_3 );
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fft );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fft );
        }

        if ( tmp_mvar_value_20 == NULL )
        {
            Py_DECREF( tmp_defaults_10 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "fft" );
            exception_tb = NULL;

            exception_lineno = 652;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = tmp_mvar_value_20;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_defaults_10, 2, tmp_tuple_element_3 );
        tmp_tuple_element_3 = Py_None;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_defaults_10, 3, tmp_tuple_element_3 );
        tmp_assign_source_35 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_11__raw_fftnd( tmp_defaults_10 );



        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__raw_fftnd, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_defaults_11;
        tmp_defaults_11 = const_tuple_none_none_none_tuple;
        Py_INCREF( tmp_defaults_11 );
        tmp_assign_source_36 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_12__fftn_dispatcher( tmp_defaults_11 );



        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_name_16;
        PyObject *tmp_called_name_17;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_defaults_12;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_21 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;

            exception_lineno = 666;

            goto frame_exception_exit_1;
        }

        tmp_called_name_17 = tmp_mvar_value_21;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_22 );
        tmp_args_element_name_13 = tmp_mvar_value_22;
        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 666;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_called_name_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
        }

        if ( tmp_called_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 666;

            goto frame_exception_exit_1;
        }
        tmp_defaults_12 = const_tuple_none_none_none_tuple;
        Py_INCREF( tmp_defaults_12 );
        tmp_args_element_name_14 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_13_fftn( tmp_defaults_12 );



        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 666;
        {
            PyObject *call_args[] = { tmp_args_element_name_14 };
            tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
        }

        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_args_element_name_14 );
        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 666;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fftn, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_name_18;
        PyObject *tmp_called_name_19;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_defaults_13;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_23 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;

            exception_lineno = 764;

            goto frame_exception_exit_1;
        }

        tmp_called_name_19 = tmp_mvar_value_23;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );
        }

        if ( tmp_mvar_value_24 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_fftn_dispatcher" );
            exception_tb = NULL;

            exception_lineno = 764;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_15 = tmp_mvar_value_24;
        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 764;
        {
            PyObject *call_args[] = { tmp_args_element_name_15 };
            tmp_called_name_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
        }

        if ( tmp_called_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 764;

            goto frame_exception_exit_1;
        }
        tmp_defaults_13 = const_tuple_none_none_none_tuple;
        Py_INCREF( tmp_defaults_13 );
        tmp_args_element_name_16 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_14_ifftn( tmp_defaults_13 );



        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 764;
        {
            PyObject *call_args[] = { tmp_args_element_name_16 };
            tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
        }

        Py_DECREF( tmp_called_name_18 );
        Py_DECREF( tmp_args_element_name_16 );
        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 764;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_ifftn, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_name_20;
        PyObject *tmp_called_name_21;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_mvar_value_26;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_defaults_14;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_25 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;

            exception_lineno = 862;

            goto frame_exception_exit_1;
        }

        tmp_called_name_21 = tmp_mvar_value_25;
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );
        }

        if ( tmp_mvar_value_26 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_fftn_dispatcher" );
            exception_tb = NULL;

            exception_lineno = 862;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_17 = tmp_mvar_value_26;
        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 862;
        {
            PyObject *call_args[] = { tmp_args_element_name_17 };
            tmp_called_name_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
        }

        if ( tmp_called_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 862;

            goto frame_exception_exit_1;
        }
        tmp_defaults_14 = const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple;
        Py_INCREF( tmp_defaults_14 );
        tmp_args_element_name_18 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_15_fft2( tmp_defaults_14 );



        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 862;
        {
            PyObject *call_args[] = { tmp_args_element_name_18 };
            tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
        }

        Py_DECREF( tmp_called_name_20 );
        Py_DECREF( tmp_args_element_name_18 );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 862;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fft2, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_name_22;
        PyObject *tmp_called_name_23;
        PyObject *tmp_mvar_value_27;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_mvar_value_28;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_defaults_15;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_27 == NULL ))
        {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_27 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;

            exception_lineno = 953;

            goto frame_exception_exit_1;
        }

        tmp_called_name_23 = tmp_mvar_value_27;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );

        if (unlikely( tmp_mvar_value_28 == NULL ))
        {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );
        }

        if ( tmp_mvar_value_28 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_fftn_dispatcher" );
            exception_tb = NULL;

            exception_lineno = 953;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_19 = tmp_mvar_value_28;
        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 953;
        {
            PyObject *call_args[] = { tmp_args_element_name_19 };
            tmp_called_name_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
        }

        if ( tmp_called_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 953;

            goto frame_exception_exit_1;
        }
        tmp_defaults_15 = const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple;
        Py_INCREF( tmp_defaults_15 );
        tmp_args_element_name_20 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_16_ifft2( tmp_defaults_15 );



        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 953;
        {
            PyObject *call_args[] = { tmp_args_element_name_20 };
            tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
        }

        Py_DECREF( tmp_called_name_22 );
        Py_DECREF( tmp_args_element_name_20 );
        if ( tmp_assign_source_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 953;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_ifft2, tmp_assign_source_40 );
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_name_24;
        PyObject *tmp_called_name_25;
        PyObject *tmp_mvar_value_29;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_mvar_value_30;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_defaults_16;
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_29 == NULL ))
        {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_29 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;

            exception_lineno = 1041;

            goto frame_exception_exit_1;
        }

        tmp_called_name_25 = tmp_mvar_value_29;
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );

        if (unlikely( tmp_mvar_value_30 == NULL ))
        {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );
        }

        if ( tmp_mvar_value_30 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_fftn_dispatcher" );
            exception_tb = NULL;

            exception_lineno = 1041;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_21 = tmp_mvar_value_30;
        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 1041;
        {
            PyObject *call_args[] = { tmp_args_element_name_21 };
            tmp_called_name_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, call_args );
        }

        if ( tmp_called_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1041;

            goto frame_exception_exit_1;
        }
        tmp_defaults_16 = const_tuple_none_none_none_tuple;
        Py_INCREF( tmp_defaults_16 );
        tmp_args_element_name_22 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_17_rfftn( tmp_defaults_16 );



        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 1041;
        {
            PyObject *call_args[] = { tmp_args_element_name_22 };
            tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, call_args );
        }

        Py_DECREF( tmp_called_name_24 );
        Py_DECREF( tmp_args_element_name_22 );
        if ( tmp_assign_source_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1041;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_rfftn, tmp_assign_source_41 );
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_name_26;
        PyObject *tmp_called_name_27;
        PyObject *tmp_mvar_value_31;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_mvar_value_32;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_defaults_17;
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_31 == NULL ))
        {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_31 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;

            exception_lineno = 1134;

            goto frame_exception_exit_1;
        }

        tmp_called_name_27 = tmp_mvar_value_31;
        tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );

        if (unlikely( tmp_mvar_value_32 == NULL ))
        {
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );
        }

        if ( tmp_mvar_value_32 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_fftn_dispatcher" );
            exception_tb = NULL;

            exception_lineno = 1134;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_23 = tmp_mvar_value_32;
        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 1134;
        {
            PyObject *call_args[] = { tmp_args_element_name_23 };
            tmp_called_name_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_27, call_args );
        }

        if ( tmp_called_name_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1134;

            goto frame_exception_exit_1;
        }
        tmp_defaults_17 = const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple;
        Py_INCREF( tmp_defaults_17 );
        tmp_args_element_name_24 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_18_rfft2( tmp_defaults_17 );



        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 1134;
        {
            PyObject *call_args[] = { tmp_args_element_name_24 };
            tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, call_args );
        }

        Py_DECREF( tmp_called_name_26 );
        Py_DECREF( tmp_args_element_name_24 );
        if ( tmp_assign_source_42 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1134;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_rfft2, tmp_assign_source_42 );
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_name_28;
        PyObject *tmp_called_name_29;
        PyObject *tmp_mvar_value_33;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_mvar_value_34;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_defaults_18;
        tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_33 == NULL ))
        {
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_33 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;

            exception_lineno = 1172;

            goto frame_exception_exit_1;
        }

        tmp_called_name_29 = tmp_mvar_value_33;
        tmp_mvar_value_34 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );

        if (unlikely( tmp_mvar_value_34 == NULL ))
        {
            tmp_mvar_value_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );
        }

        if ( tmp_mvar_value_34 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_fftn_dispatcher" );
            exception_tb = NULL;

            exception_lineno = 1172;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_25 = tmp_mvar_value_34;
        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 1172;
        {
            PyObject *call_args[] = { tmp_args_element_name_25 };
            tmp_called_name_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_29, call_args );
        }

        if ( tmp_called_name_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1172;

            goto frame_exception_exit_1;
        }
        tmp_defaults_18 = const_tuple_none_none_none_tuple;
        Py_INCREF( tmp_defaults_18 );
        tmp_args_element_name_26 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_19_irfftn( tmp_defaults_18 );



        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 1172;
        {
            PyObject *call_args[] = { tmp_args_element_name_26 };
            tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_28, call_args );
        }

        Py_DECREF( tmp_called_name_28 );
        Py_DECREF( tmp_args_element_name_26 );
        if ( tmp_assign_source_43 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1172;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_irfftn, tmp_assign_source_43 );
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_name_30;
        PyObject *tmp_called_name_31;
        PyObject *tmp_mvar_value_35;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_mvar_value_36;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_defaults_19;
        tmp_mvar_value_35 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_35 == NULL ))
        {
            tmp_mvar_value_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_35 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;

            exception_lineno = 1267;

            goto frame_exception_exit_1;
        }

        tmp_called_name_31 = tmp_mvar_value_35;
        tmp_mvar_value_36 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );

        if (unlikely( tmp_mvar_value_36 == NULL ))
        {
            tmp_mvar_value_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fftn_dispatcher );
        }

        if ( tmp_mvar_value_36 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_fftn_dispatcher" );
            exception_tb = NULL;

            exception_lineno = 1267;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_27 = tmp_mvar_value_36;
        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 1267;
        {
            PyObject *call_args[] = { tmp_args_element_name_27 };
            tmp_called_name_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_31, call_args );
        }

        if ( tmp_called_name_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1267;

            goto frame_exception_exit_1;
        }
        tmp_defaults_19 = const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple;
        Py_INCREF( tmp_defaults_19 );
        tmp_args_element_name_28 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_20_irfft2( tmp_defaults_19 );



        frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame.f_lineno = 1267;
        {
            PyObject *call_args[] = { tmp_args_element_name_28 };
            tmp_assign_source_44 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_30, call_args );
        }

        Py_DECREF( tmp_called_name_30 );
        Py_DECREF( tmp_args_element_name_28 );
        if ( tmp_assign_source_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1267;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_irfft2, tmp_assign_source_44 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8406e6329adbe0bdb9357a26ee9483cb );
#endif
    popFrameStack();

    assertFrameObject( frame_8406e6329adbe0bdb9357a26ee9483cb );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8406e6329adbe0bdb9357a26ee9483cb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8406e6329adbe0bdb9357a26ee9483cb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8406e6329adbe0bdb9357a26ee9483cb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8406e6329adbe0bdb9357a26ee9483cb, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_numpy$fft$fftpack );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
