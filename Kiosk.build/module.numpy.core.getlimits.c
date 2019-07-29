/* Generated code for Python module 'numpy.core.getlimits'
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

/* The "_module_numpy$core$getlimits" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$core$getlimits;
PyDictObject *moduledict_numpy$core$getlimits;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_machep;
static PyObject *const_str_digest_b11b128c563b5ffb658ae9500081eb04;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_get;
extern PyObject *const_tuple_type_object_tuple;
static PyObject *const_str_plain__get_machar;
static PyObject *const_str_digest_8b386aa245a595a957b1bc2ae03f1a45;
extern PyObject *const_int_pos_105;
static PyObject *const_str_plain_f32;
extern PyObject *const_str_plain_title;
static PyObject *const_str_digest_8f6c2ba61d1aad5f470aa0d7e1c51ed6;
static PyObject *const_str_plain_tiny_f80;
static PyObject *const_str_plain__convert_to_float;
extern PyObject *const_str_plain_float16;
extern PyObject *const_str_plain_iu;
extern PyObject *const_str_plain_longdouble;
extern PyObject *const_str_plain_epsneg;
static PyObject *const_tuple_int_neg_24_tuple;
extern PyObject *const_str_plain_longfloat;
static PyObject *const_str_plain_ld;
static PyObject *const_tuple_str_plain_self_str_plain_int_type_tuple;
static PyObject *const_str_digest_9d407aba079586ddc2565511c907906b;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_cls;
static PyObject *const_str_digest_b8eaccad553858ca41bd501c0a17651e;
extern PyObject *const_str_plain_dtype;
static PyObject *const_str_digest_3ab7825f0d605267d9a713ee11c2374d;
extern PyObject *const_str_plain_finfo;
extern PyObject *const_str_plain_eps;
static PyObject *const_str_plain_itype;
static PyObject *const_str_digest_7539c6308de2db2764b97103d1120c88;
static PyObject *const_tuple_dc490514ccb569cefc5b1902373398fa_tuple;
extern PyObject *const_str_plain_obj2sctype;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain_tobytes;
extern PyObject *const_tuple_str_plain_self_str_plain_val_tuple;
static PyObject *const_list_str_plain_finfo_str_plain_iinfo_list;
static PyObject *const_tuple_ca43d747f0514ab97322a6a533c3ddf8_tuple;
extern PyObject *const_str_plain_umath;
static PyObject *const_tuple_int_neg_23_tuple;
extern PyObject *const_str_plain_overrides;
static PyObject *const_str_digest_c585224fd2c43f929c10a58162297da8;
extern PyObject *const_int_neg_64;
static PyObject *const_str_plain_nexp;
static PyObject *const_tuple_int_neg_113_tuple;
extern PyObject *const_str_plain_strip;
extern PyObject *const_str_plain___repr__;
static PyObject *const_str_digest_1fe6771d9d4496f5794e2ba123343157;
extern PyObject *const_str_plain_size;
static PyObject *const_str_plain_huge_f128;
static PyObject *const_str_digest_eaaa9394d408576376e7108c86542536;
extern PyObject *const_str_plain__str_epsneg;
static PyObject *const_tuple_str_plain_v_str_plain_float_conv_tuple;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_MachArLike;
extern PyObject *const_str_plain_inf;
static PyObject *const_str_plain__float_ma;
extern PyObject *const_str_plain_issubclass;
static PyObject *const_tuple_str_plain_v_str_plain_ftype_tuple;
extern PyObject *const_str_plain_dtypes;
static PyObject *const_str_plain_ma_like;
extern PyObject *const_tuple_str_plain_umath_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_tuple_str_plain_self_str_plain_fmt_tuple;
extern PyObject *const_str_plain_val;
static PyObject *const_tuple_str_plain_epsneg_tuple;
static PyObject *const_str_plain_int_type;
static PyObject *const_str_plain_nextafter;
extern PyObject *const_str_plain_complex_;
static PyObject *const_str_plain_tiny_f64;
static PyObject *const_str_plain_nmant;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_d;
static PyObject *const_str_plain_float32_ma;
extern PyObject *const_str_plain_float_to_float;
extern PyObject *const_str_plain_float_conv;
static PyObject *const_tuple_str_plain_tiny_str_plain_resolution_str_plain_epsneg_tuple;
extern PyObject *const_str_plain_format;
extern PyObject *const_int_pos_64;
static PyObject *const_int_neg_1022;
extern PyObject *const_str_plain_itemsize;
extern PyObject *const_int_pos_63;
static PyObject *const_int_neg_126;
static PyObject *const_int_pos_65504;
static PyObject *const_str_plain__MACHAR_PARAMS;
extern PyObject *const_dict_f154c9a58c9419d7e391901d7b7fe49e;
extern PyObject *const_str_plain__str_resolution;
extern PyObject *const_int_pos_4;
static PyObject *const_str_plain__KNOWN_TYPES;
extern PyObject *const_str_plain___exit__;
extern PyObject *const_str_plain_inexact;
extern PyObject *const_str_plain___str__;
static PyObject *const_str_plain_float128_ma;
extern PyObject *const_str_plain_int64;
static PyObject *const_str_plain__fr0;
static PyObject *const_str_plain__fr1;
static PyObject *const_str_digest_71f9600c11b1b2dcd32646ee953369ea;
extern PyObject *const_str_plain_min;
static PyObject *const_tuple_str_plain_v_str_plain_ftype_str_plain_params_tuple;
static PyObject *const_tuple_str_plain_array_str_plain_inf_tuple;
static PyObject *const_tuple_str_digest_6ccfcc9d5b330646d0167140367b220b_tuple;
static PyObject *const_str_digest_c8ad69a27958f4a91e4487fd0fe6fc25;
extern PyObject *const_str_plain_kind;
extern PyObject *const_str_plain_float32;
static PyObject *const_str_plain_huge_dd;
static PyObject *const_tuple_0439b7578f5e803948f85e2064052b05_tuple;
static PyObject *const_int_pos_112;
extern PyObject *const_str_plain_stacklevel;
extern PyObject *const_int_pos_10;
extern PyObject *const_int_pos_11;
extern PyObject *const_str_plain_errstate;
extern PyObject *const_int_pos_15;
extern PyObject *const_int_pos_16;
static PyObject *const_str_plain__str_tiny;
extern PyObject *const_str_plain_epsilon;
static PyObject *const_str_plain_ftype;
static PyObject *const_int_neg_63;
static PyObject *const_int_neg_16382;
static PyObject *const_str_digest_0dfcf8cd171b40dc563f1a190d516493;
static PyObject *const_str_plain__register_type;
extern PyObject *const_str_digest_1fb8303ac42db8ab17be5f2ef764dc5e;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_floating;
extern PyObject *const_str_plain_it;
static PyObject *const_tuple_str_chr_60_tuple;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_tuple_str_plain_set_module_tuple;
static PyObject *const_tuple_int_neg_16382_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_dt;
extern PyObject *const_str_plain_longlong;
extern PyObject *const_str_digest_16c966c18ae1e919ca62dfb9d9bdceba;
extern PyObject *const_str_plain_update;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___new__;
extern PyObject *const_str_plain_maxexp;
static PyObject *const_float_4_4942328371557893e307;
extern PyObject *const_str_plain_dd;
extern PyObject *const_int_pos_8;
static PyObject *const_str_digest_57aa1c044b869aee3cb076817c47bad3;
extern PyObject *const_str_plain___module__;
static PyObject *const_tuple_str_plain_ftype_str_plain_params_tuple;
static PyObject *const_str_plain_tiny_f128;
extern PyObject *const_str_plain_tiny;
static PyObject *const_str_plain_exp2;
extern PyObject *const_str_plain_ngrd;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain_float16_ma;
static PyObject *const_float_1_1102230246251565e_minus_16;
extern PyObject *const_str_plain_array;
static PyObject *const_int_neg_14;
extern PyObject *const_str_plain_property;
static PyObject *const_str_plain_f64;
extern PyObject *const_str_plain_c;
extern PyObject *const_int_neg_10;
static PyObject *const_int_neg_11;
static PyObject *const_str_digest_471b4820c72721e3be78202e74ba61b9;
extern PyObject *const_str_plain_ntypes;
extern PyObject *const_str_plain_bits;
static PyObject *const_str_plain_epsneg_f128;
extern PyObject *const_tuple_str_plain_numeric_tuple;
extern PyObject *const_float_2_220446049250313e_minus_16;
extern PyObject *const_str_plain_resolution;
extern PyObject *const_str_plain_astype;
static PyObject *const_str_digest_17243ada09c28419093a512ea12c0885;
static PyObject *const_str_digest_e7e19dd5257f03801740d23cfcc5941d;
static PyObject *const_float_2_2250738585072014e_minus_308;
extern PyObject *const_str_plain_params;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_int32;
extern PyObject *const_tuple_int_pos_10_tuple;
static PyObject *const_str_digest_81124a5be721172281510fa6fc9b29b5;
static PyObject *const_str_digest_c1416ee2e3faf191d9259e1f3f7581c0;
extern PyObject *const_str_plain_xmax;
static PyObject *const_tuple_int_neg_106_tuple;
static PyObject *const_str_plain_epsneg_f64;
extern PyObject *const_str_plain_iexp;
static PyObject *const_str_plain__finfo_cache;
static PyObject *const_str_plain__discovered_machar;
static PyObject *const_tuple_int_neg_112_tuple;
static PyObject *const_str_plain_f16;
extern PyObject *const_str_plain_csingle;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain___name__;
extern PyObject *const_int_pos_128;
extern PyObject *const_int_pos_32;
extern PyObject *const_str_plain_float_to_str;
static PyObject *const_tuple_int_neg_11_tuple;
static PyObject *const_str_digest_454d0777cd09130adadab5cb34c54852;
extern PyObject *const_str_plain_single;
static PyObject *const_tuple_float_6_103515625e_minus_05_tuple;
static PyObject *const_tuple_str_plain_v_str_plain_params_tuple;
extern PyObject *const_str_plain_huge;
extern PyObject *const_str_plain_newbyteorder;
static PyObject *const_tuple_6e21946e2b63b42a7b9ed7f08a75900a_tuple;
static PyObject *const_tuple_int_neg_126_tuple;
static PyObject *const_tuple_float_3_4028234663852886e38_tuple;
static PyObject *const_str_digest_f6e50f1e539dbc1212fdc62e9a8dbcb0;
extern PyObject *const_str_plain_flat;
static PyObject *const_int_neg_106;
extern PyObject *const_str_plain___enter__;
extern PyObject *const_str_plain_numeric;
extern PyObject *const_str_plain_clongfloat;
static PyObject *const_str_digest_6da1ae55ed72337372d367d607b09d18;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_newdtype;
static PyObject *const_int_pos_16384;
extern PyObject *const_str_plain_ibeta;
static PyObject *const_str_digest_1c7a03bb335423a9f56b895c3fbc148d;
static PyObject *const_str_digest_dd8d834fa6f08a772c04822740add2d7;
extern PyObject *const_str_plain__str_eps;
extern PyObject *const_tuple_str_plain_numerictypes_tuple;
extern PyObject *const_str_plain_numerictypes;
static PyObject *const_str_plain_bytepat;
extern PyObject *const_str_plain_irnd;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_half;
extern PyObject *const_str_plain_int16;
extern PyObject *const_str_plain_ndim;
static PyObject *const_float_3_4028234663852886e38;
extern PyObject *const_str_plain_obj;
static PyObject *const_str_plain__max_vals;
static PyObject *const_tuple_b16ef73a37c255752d6b7e0164bbdf62_tuple;
static PyObject *const_tuple_int_neg_105_tuple;
extern PyObject *const_str_plain__str_xmax;
static PyObject *const_str_plain_float80_ma;
static PyObject *const_tuple_str_plain_ibeta_tuple;
extern PyObject *const_str_chr_60;
extern PyObject *const_str_plain_UserWarning;
static PyObject *const_tuple_int_neg_64_tuple;
extern PyObject *const_int_pos_1024;
extern PyObject *const_int_pos_23;
extern PyObject *const_str_plain_fmt;
static PyObject *const_str_plain__str_max;
static PyObject *const_tuple_str_plain_double_tuple;
extern PyObject *const_str_plain__register_known_types;
extern PyObject *const_str_plain_u;
extern PyObject *const_str_plain_v;
static PyObject *const_str_digest_ab7c9132978cbffbf3e766956f1fc60a;
static PyObject *const_str_digest_08664f457b1a8dc7f05c9e1db0d9e3bd;
static PyObject *const_tuple_str_plain_half_tuple;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_object;
static PyObject *const_str_digest_3122c1a6126f732cd94f8864df7d76ff;
extern PyObject *const_str_plain_double;
static PyObject *const_int_neg_105;
static PyObject *const_str_plain_float64_ma;
static PyObject *const_tuple_str_plain_tiny_tuple;
static PyObject *const_str_digest_c953c461ebc82ab94922f9cdf925a15f;
static PyObject *const_tuple_int_pos_65504_tuple;
static PyObject *const_str_digest_c9daff2734dd6db50e0c7d322a45e9de;
extern PyObject *const_str_plain_klass;
extern PyObject *const_str_plain_all;
static PyObject *const_str_plain_epsneg_f80;
static PyObject *const_tuple_str_plain_log10_str_plain_exp2_tuple;
static PyObject *const_str_plain_huge_f80;
extern PyObject *const_str_plain_set_module;
extern PyObject *const_str_plain_ignore;
static PyObject *const_str_plain__init;
extern PyObject *const_int_pos_80;
extern PyObject *const_str_plain_iinfo;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_float_6_103515625e_minus_05;
static PyObject *const_str_plain_float_dd_ma;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain_precision;
extern PyObject *const_dict_8629c35bb486b0ff8446977b73ad0aff;
extern PyObject *const_tuple_str_plain_a_tuple;
extern PyObject *const_str_plain_negep;
extern PyObject *const_str_plain_word;
static PyObject *const_int_pos_52;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain___doc__;
static PyObject *const_int_neg_24;
static PyObject *const_tuple_str_digest_61eb47d02a6bf21baa1afce40f67ac8b_tuple;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
static PyObject *const_int_neg_23;
static PyObject *const_tuple_4377ca4e8254f3074b10ba8aee110074_tuple;
static PyObject *const_str_digest_61eb47d02a6bf21baa1afce40f67ac8b;
extern PyObject *const_str_plain_float_;
static PyObject *const_tuple_str_plain_MachAr_tuple;
static PyObject *const_tuple_int_neg_63_tuple;
extern PyObject *const_str_digest_eee7b0934fe224b34ba6722d84ccd2bf;
static PyObject *const_tuple_int_neg_10_tuple;
static PyObject *const_tuple_str_plain_single_tuple;
static PyObject *const_int_neg_112;
static PyObject *const_int_neg_113;
extern PyObject *const_tuple_none_none_none_tuple;
static PyObject *const_str_digest_d699850a7ed4dcad4593c97865f24dd4;
extern PyObject *const_str_plain_machar;
extern PyObject *const_str_plain_float64;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_pop;
static PyObject *const_str_digest_6ccfcc9d5b330646d0167140367b220b;
extern PyObject *const_tuple_int_pos_4_tuple;
static PyObject *const_str_digest_689f5c49db7f0f46fe96e883a6a93baa;
extern PyObject *const_tuple_str_plain_numpy_tuple;
extern PyObject *const_str_plain_append;
static PyObject *const_tuple_str_plain_eps_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_c_str_plain_d_tuple;
static PyObject *const_int_neg_52;
static PyObject *const_int_neg_53;
static PyObject *const_tuple_str_plain_huge_tuple;
static PyObject *const_tuple_int_neg_1022_tuple;
extern PyObject *const_str_plain_minexp;
extern PyObject *const_str_plain_print_function;
static PyObject *const_tuple_str_plain_machar_str_plain_bytepat_tuple;
extern PyObject *const_str_plain_xmin;
static PyObject *const_str_plain__min_vals;
static PyObject *const_str_plain__title_fmt;
extern PyObject *const_str_plain_MachAr;
extern PyObject *const_str_plain__str_xmin;
extern PyObject *const_str_plain_log10;
extern PyObject *const_str_angle_lambda;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_b11b128c563b5ffb658ae9500081eb04 = UNSTREAM_STRING( &constant_bin[ 1159239 ], 6, 0 );
    const_str_plain__get_machar = UNSTREAM_STRING( &constant_bin[ 1159245 ], 11, 1 );
    const_str_digest_8b386aa245a595a957b1bc2ae03f1a45 = UNSTREAM_STRING( &constant_bin[ 1159256 ], 16, 0 );
    const_str_plain_f32 = UNSTREAM_STRING( &constant_bin[ 1159272 ], 3, 1 );
    const_str_digest_8f6c2ba61d1aad5f470aa0d7e1c51ed6 = UNSTREAM_STRING( &constant_bin[ 1159275 ], 29, 0 );
    const_str_plain_tiny_f80 = UNSTREAM_STRING( &constant_bin[ 1159304 ], 8, 1 );
    const_str_plain__convert_to_float = UNSTREAM_STRING( &constant_bin[ 1159312 ], 17, 1 );
    const_tuple_int_neg_24_tuple = PyTuple_New( 1 );
    const_int_neg_24 = PyInt_FromLong( -24l );
    PyTuple_SET_ITEM( const_tuple_int_neg_24_tuple, 0, const_int_neg_24 ); Py_INCREF( const_int_neg_24 );
    const_str_plain_ld = UNSTREAM_STRING( &constant_bin[ 224 ], 2, 1 );
    const_tuple_str_plain_self_str_plain_int_type_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_int_type_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_int_type = UNSTREAM_STRING( &constant_bin[ 201473 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_int_type_tuple, 1, const_str_plain_int_type ); Py_INCREF( const_str_plain_int_type );
    const_str_digest_9d407aba079586ddc2565511c907906b = UNSTREAM_STRING( &constant_bin[ 1159329 ], 8, 0 );
    const_str_digest_b8eaccad553858ca41bd501c0a17651e = UNSTREAM_STRING( &constant_bin[ 1159337 ], 20, 0 );
    const_str_digest_3ab7825f0d605267d9a713ee11c2374d = UNSTREAM_STRING( &constant_bin[ 1159357 ], 56, 0 );
    const_str_plain_itype = UNSTREAM_STRING( &constant_bin[ 1159413 ], 5, 1 );
    const_str_digest_7539c6308de2db2764b97103d1120c88 = UNSTREAM_STRING( &constant_bin[ 1159418 ], 2414, 0 );
    const_tuple_dc490514ccb569cefc5b1902373398fa_tuple = PyTuple_New( 4 );
    const_str_plain_ftype = UNSTREAM_STRING( &constant_bin[ 1161832 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_dc490514ccb569cefc5b1902373398fa_tuple, 0, const_str_plain_ftype ); Py_INCREF( const_str_plain_ftype );
    PyTuple_SET_ITEM( const_tuple_dc490514ccb569cefc5b1902373398fa_tuple, 1, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    PyTuple_SET_ITEM( const_tuple_dc490514ccb569cefc5b1902373398fa_tuple, 2, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    const_str_plain_ma_like = UNSTREAM_STRING( &constant_bin[ 1161837 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_dc490514ccb569cefc5b1902373398fa_tuple, 3, const_str_plain_ma_like ); Py_INCREF( const_str_plain_ma_like );
    const_list_str_plain_finfo_str_plain_iinfo_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_finfo_str_plain_iinfo_list, 0, const_str_plain_finfo ); Py_INCREF( const_str_plain_finfo );
    PyList_SET_ITEM( const_list_str_plain_finfo_str_plain_iinfo_list, 1, const_str_plain_iinfo ); Py_INCREF( const_str_plain_iinfo );
    const_tuple_ca43d747f0514ab97322a6a533c3ddf8_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_ca43d747f0514ab97322a6a533c3ddf8_tuple, 0, const_str_plain_precision ); Py_INCREF( const_str_plain_precision );
    PyTuple_SET_ITEM( const_tuple_ca43d747f0514ab97322a6a533c3ddf8_tuple, 1, const_str_plain_iexp ); Py_INCREF( const_str_plain_iexp );
    PyTuple_SET_ITEM( const_tuple_ca43d747f0514ab97322a6a533c3ddf8_tuple, 2, const_str_plain_maxexp ); Py_INCREF( const_str_plain_maxexp );
    PyTuple_SET_ITEM( const_tuple_ca43d747f0514ab97322a6a533c3ddf8_tuple, 3, const_str_plain_minexp ); Py_INCREF( const_str_plain_minexp );
    PyTuple_SET_ITEM( const_tuple_ca43d747f0514ab97322a6a533c3ddf8_tuple, 4, const_str_plain_negep ); Py_INCREF( const_str_plain_negep );
    PyTuple_SET_ITEM( const_tuple_ca43d747f0514ab97322a6a533c3ddf8_tuple, 5, const_str_plain_machep ); Py_INCREF( const_str_plain_machep );
    const_tuple_int_neg_23_tuple = PyTuple_New( 1 );
    const_int_neg_23 = PyInt_FromLong( -23l );
    PyTuple_SET_ITEM( const_tuple_int_neg_23_tuple, 0, const_int_neg_23 ); Py_INCREF( const_int_neg_23 );
    const_str_digest_c585224fd2c43f929c10a58162297da8 = UNSTREAM_STRING( &constant_bin[ 1161844 ], 21, 0 );
    const_str_plain_nexp = UNSTREAM_STRING( &constant_bin[ 1382 ], 4, 1 );
    const_tuple_int_neg_113_tuple = PyTuple_New( 1 );
    const_int_neg_113 = PyInt_FromLong( -113l );
    PyTuple_SET_ITEM( const_tuple_int_neg_113_tuple, 0, const_int_neg_113 ); Py_INCREF( const_int_neg_113 );
    const_str_digest_1fe6771d9d4496f5794e2ba123343157 = UNSTREAM_STRING( &constant_bin[ 1161865 ], 29, 0 );
    const_str_plain_huge_f128 = UNSTREAM_STRING( &constant_bin[ 1161894 ], 9, 1 );
    const_str_digest_eaaa9394d408576376e7108c86542536 = UNSTREAM_STRING( &constant_bin[ 1161903 ], 4, 0 );
    const_tuple_str_plain_v_str_plain_float_conv_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_v_str_plain_float_conv_tuple, 0, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_str_plain_v_str_plain_float_conv_tuple, 1, const_str_plain_float_conv ); Py_INCREF( const_str_plain_float_conv );
    const_str_plain_MachArLike = UNSTREAM_STRING( &constant_bin[ 1161907 ], 10, 1 );
    const_str_plain__float_ma = UNSTREAM_STRING( &constant_bin[ 1161917 ], 9, 1 );
    const_tuple_str_plain_v_str_plain_ftype_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_v_str_plain_ftype_tuple, 0, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_str_plain_v_str_plain_ftype_tuple, 1, const_str_plain_ftype ); Py_INCREF( const_str_plain_ftype );
    const_tuple_str_plain_epsneg_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_epsneg_tuple, 0, const_str_plain_epsneg ); Py_INCREF( const_str_plain_epsneg );
    const_str_plain_nextafter = UNSTREAM_STRING( &constant_bin[ 1161926 ], 9, 1 );
    const_str_plain_tiny_f64 = UNSTREAM_STRING( &constant_bin[ 1161935 ], 8, 1 );
    const_str_plain_nmant = UNSTREAM_STRING( &constant_bin[ 1160777 ], 5, 1 );
    const_str_plain_float32_ma = UNSTREAM_STRING( &constant_bin[ 1161943 ], 10, 1 );
    const_tuple_str_plain_tiny_str_plain_resolution_str_plain_epsneg_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_tiny_str_plain_resolution_str_plain_epsneg_tuple, 0, const_str_plain_tiny ); Py_INCREF( const_str_plain_tiny );
    PyTuple_SET_ITEM( const_tuple_str_plain_tiny_str_plain_resolution_str_plain_epsneg_tuple, 1, const_str_plain_resolution ); Py_INCREF( const_str_plain_resolution );
    PyTuple_SET_ITEM( const_tuple_str_plain_tiny_str_plain_resolution_str_plain_epsneg_tuple, 2, const_str_plain_epsneg ); Py_INCREF( const_str_plain_epsneg );
    const_int_neg_1022 = PyInt_FromLong( -1022l );
    const_int_neg_126 = PyInt_FromLong( -126l );
    const_int_pos_65504 = PyInt_FromLong( 65504l );
    const_str_plain__MACHAR_PARAMS = UNSTREAM_STRING( &constant_bin[ 1161953 ], 14, 1 );
    const_str_plain__KNOWN_TYPES = UNSTREAM_STRING( &constant_bin[ 1161967 ], 12, 1 );
    const_str_plain_float128_ma = UNSTREAM_STRING( &constant_bin[ 1161979 ], 11, 1 );
    const_str_plain__fr0 = UNSTREAM_STRING( &constant_bin[ 1161990 ], 4, 1 );
    const_str_plain__fr1 = UNSTREAM_STRING( &constant_bin[ 1161994 ], 4, 1 );
    const_str_digest_71f9600c11b1b2dcd32646ee953369ea = UNSTREAM_STRING( &constant_bin[ 1161998 ], 40, 0 );
    const_tuple_str_plain_v_str_plain_ftype_str_plain_params_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_v_str_plain_ftype_str_plain_params_tuple, 0, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_str_plain_v_str_plain_ftype_str_plain_params_tuple, 1, const_str_plain_ftype ); Py_INCREF( const_str_plain_ftype );
    PyTuple_SET_ITEM( const_tuple_str_plain_v_str_plain_ftype_str_plain_params_tuple, 2, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    const_tuple_str_plain_array_str_plain_inf_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_array_str_plain_inf_tuple, 0, const_str_plain_array ); Py_INCREF( const_str_plain_array );
    PyTuple_SET_ITEM( const_tuple_str_plain_array_str_plain_inf_tuple, 1, const_str_plain_inf ); Py_INCREF( const_str_plain_inf );
    const_tuple_str_digest_6ccfcc9d5b330646d0167140367b220b_tuple = PyTuple_New( 1 );
    const_str_digest_6ccfcc9d5b330646d0167140367b220b = UNSTREAM_STRING( &constant_bin[ 62029 ], 4, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_6ccfcc9d5b330646d0167140367b220b_tuple, 0, const_str_digest_6ccfcc9d5b330646d0167140367b220b ); Py_INCREF( const_str_digest_6ccfcc9d5b330646d0167140367b220b );
    const_str_digest_c8ad69a27958f4a91e4487fd0fe6fc25 = UNSTREAM_STRING( &constant_bin[ 1162038 ], 461, 0 );
    const_str_plain_huge_dd = UNSTREAM_STRING( &constant_bin[ 1162499 ], 7, 1 );
    const_tuple_0439b7578f5e803948f85e2064052b05_tuple = PyTuple_New( 19 );
    PyTuple_SET_ITEM( const_tuple_0439b7578f5e803948f85e2064052b05_tuple, 0, const_str_plain_ld ); Py_INCREF( const_str_plain_ld );
    const_str_plain_float64_ma = UNSTREAM_STRING( &constant_bin[ 1162506 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_0439b7578f5e803948f85e2064052b05_tuple, 1, const_str_plain_float64_ma ); Py_INCREF( const_str_plain_float64_ma );
    const_str_plain_tiny_f128 = UNSTREAM_STRING( &constant_bin[ 1162516 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_0439b7578f5e803948f85e2064052b05_tuple, 2, const_str_plain_tiny_f128 ); Py_INCREF( const_str_plain_tiny_f128 );
    const_str_plain_epsneg_f128 = UNSTREAM_STRING( &constant_bin[ 1162525 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_0439b7578f5e803948f85e2064052b05_tuple, 3, const_str_plain_epsneg_f128 ); Py_INCREF( const_str_plain_epsneg_f128 );
    PyTuple_SET_ITEM( const_tuple_0439b7578f5e803948f85e2064052b05_tuple, 4, const_str_plain_tiny_f64 ); Py_INCREF( const_str_plain_tiny_f64 );
    PyTuple_SET_ITEM( const_tuple_0439b7578f5e803948f85e2064052b05_tuple, 5, const_str_plain_f32 ); Py_INCREF( const_str_plain_f32 );
    PyTuple_SET_ITEM( const_tuple_0439b7578f5e803948f85e2064052b05_tuple, 6, const_str_plain_tiny_f80 ); Py_INCREF( const_str_plain_tiny_f80 );
    PyTuple_SET_ITEM( const_tuple_0439b7578f5e803948f85e2064052b05_tuple, 7, const_str_plain_huge_f128 ); Py_INCREF( const_str_plain_huge_f128 );
    PyTuple_SET_ITEM( const_tuple_0439b7578f5e803948f85e2064052b05_tuple, 8, const_str_plain_float128_ma ); Py_INCREF( const_str_plain_float128_ma );
    const_str_plain_float16_ma = UNSTREAM_STRING( &constant_bin[ 1162536 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_0439b7578f5e803948f85e2064052b05_tuple, 9, const_str_plain_float16_ma ); Py_INCREF( const_str_plain_float16_ma );
    const_str_plain_float_dd_ma = UNSTREAM_STRING( &constant_bin[ 1162546 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_0439b7578f5e803948f85e2064052b05_tuple, 10, const_str_plain_float_dd_ma ); Py_INCREF( const_str_plain_float_dd_ma );
    const_str_plain_float80_ma = UNSTREAM_STRING( &constant_bin[ 1162557 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_0439b7578f5e803948f85e2064052b05_tuple, 11, const_str_plain_float80_ma ); Py_INCREF( const_str_plain_float80_ma );
    const_str_plain_huge_f80 = UNSTREAM_STRING( &constant_bin[ 1162567 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_0439b7578f5e803948f85e2064052b05_tuple, 12, const_str_plain_huge_f80 ); Py_INCREF( const_str_plain_huge_f80 );
    const_str_plain_epsneg_f64 = UNSTREAM_STRING( &constant_bin[ 1162575 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_0439b7578f5e803948f85e2064052b05_tuple, 13, const_str_plain_epsneg_f64 ); Py_INCREF( const_str_plain_epsneg_f64 );
    PyTuple_SET_ITEM( const_tuple_0439b7578f5e803948f85e2064052b05_tuple, 14, const_str_plain_float32_ma ); Py_INCREF( const_str_plain_float32_ma );
    const_str_plain_f64 = UNSTREAM_STRING( &constant_bin[ 1161940 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_0439b7578f5e803948f85e2064052b05_tuple, 15, const_str_plain_f64 ); Py_INCREF( const_str_plain_f64 );
    const_str_plain_f16 = UNSTREAM_STRING( &constant_bin[ 1162585 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_0439b7578f5e803948f85e2064052b05_tuple, 16, const_str_plain_f16 ); Py_INCREF( const_str_plain_f16 );
    const_str_plain_epsneg_f80 = UNSTREAM_STRING( &constant_bin[ 1162588 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_0439b7578f5e803948f85e2064052b05_tuple, 17, const_str_plain_epsneg_f80 ); Py_INCREF( const_str_plain_epsneg_f80 );
    PyTuple_SET_ITEM( const_tuple_0439b7578f5e803948f85e2064052b05_tuple, 18, const_str_plain_huge_dd ); Py_INCREF( const_str_plain_huge_dd );
    const_int_pos_112 = PyInt_FromLong( 112l );
    const_str_plain__str_tiny = UNSTREAM_STRING( &constant_bin[ 1162335 ], 9, 1 );
    const_int_neg_63 = PyInt_FromLong( -63l );
    const_int_neg_16382 = PyInt_FromLong( -16382l );
    const_str_digest_0dfcf8cd171b40dc563f1a190d516493 = UNSTREAM_STRING( &constant_bin[ 1162598 ], 23, 0 );
    const_str_plain__register_type = UNSTREAM_STRING( &constant_bin[ 1162621 ], 14, 1 );
    const_tuple_str_chr_60_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_chr_60_tuple, 0, const_str_chr_60 ); Py_INCREF( const_str_chr_60 );
    const_tuple_int_neg_16382_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_neg_16382_tuple, 0, const_int_neg_16382 ); Py_INCREF( const_int_neg_16382 );
    const_float_4_4942328371557893e307 = UNSTREAM_FLOAT( &constant_bin[ 1162635 ] );
    const_str_digest_57aa1c044b869aee3cb076817c47bad3 = UNSTREAM_STRING( &constant_bin[ 1162643 ], 2, 0 );
    const_tuple_str_plain_ftype_str_plain_params_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ftype_str_plain_params_tuple, 0, const_str_plain_ftype ); Py_INCREF( const_str_plain_ftype );
    PyTuple_SET_ITEM( const_tuple_str_plain_ftype_str_plain_params_tuple, 1, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    const_str_plain_exp2 = UNSTREAM_STRING( &constant_bin[ 1162645 ], 4, 1 );
    const_float_1_1102230246251565e_minus_16 = UNSTREAM_FLOAT( &constant_bin[ 1162649 ] );
    const_int_neg_14 = PyInt_FromLong( -14l );
    const_int_neg_11 = PyInt_FromLong( -11l );
    const_str_digest_471b4820c72721e3be78202e74ba61b9 = UNSTREAM_STRING( &constant_bin[ 1162657 ], 29, 0 );
    const_str_digest_17243ada09c28419093a512ea12c0885 = UNSTREAM_STRING( &constant_bin[ 1162686 ], 24, 0 );
    const_str_digest_e7e19dd5257f03801740d23cfcc5941d = UNSTREAM_STRING( &constant_bin[ 1162710 ], 36, 0 );
    const_float_2_2250738585072014e_minus_308 = UNSTREAM_FLOAT( &constant_bin[ 1162746 ] );
    const_str_digest_81124a5be721172281510fa6fc9b29b5 = UNSTREAM_STRING( &constant_bin[ 1162754 ], 90, 0 );
    const_str_digest_c1416ee2e3faf191d9259e1f3f7581c0 = UNSTREAM_STRING( &constant_bin[ 1162844 ], 22, 0 );
    const_tuple_int_neg_106_tuple = PyTuple_New( 1 );
    const_int_neg_106 = PyInt_FromLong( -106l );
    PyTuple_SET_ITEM( const_tuple_int_neg_106_tuple, 0, const_int_neg_106 ); Py_INCREF( const_int_neg_106 );
    const_str_plain__finfo_cache = UNSTREAM_STRING( &constant_bin[ 1162866 ], 12, 1 );
    const_str_plain__discovered_machar = UNSTREAM_STRING( &constant_bin[ 1162878 ], 18, 1 );
    const_tuple_int_neg_112_tuple = PyTuple_New( 1 );
    const_int_neg_112 = PyInt_FromLong( -112l );
    PyTuple_SET_ITEM( const_tuple_int_neg_112_tuple, 0, const_int_neg_112 ); Py_INCREF( const_int_neg_112 );
    const_tuple_int_neg_11_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_neg_11_tuple, 0, const_int_neg_11 ); Py_INCREF( const_int_neg_11 );
    const_str_digest_454d0777cd09130adadab5cb34c54852 = UNSTREAM_STRING( &constant_bin[ 1162896 ], 74, 0 );
    const_tuple_float_6_103515625e_minus_05_tuple = PyTuple_New( 1 );
    const_float_6_103515625e_minus_05 = UNSTREAM_FLOAT( &constant_bin[ 1162970 ] );
    PyTuple_SET_ITEM( const_tuple_float_6_103515625e_minus_05_tuple, 0, const_float_6_103515625e_minus_05 ); Py_INCREF( const_float_6_103515625e_minus_05 );
    const_tuple_str_plain_v_str_plain_params_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_v_str_plain_params_tuple, 0, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_str_plain_v_str_plain_params_tuple, 1, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    const_tuple_6e21946e2b63b42a7b9ed7f08a75900a_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_6e21946e2b63b42a7b9ed7f08a75900a_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_6e21946e2b63b42a7b9ed7f08a75900a_tuple, 1, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_6e21946e2b63b42a7b9ed7f08a75900a_tuple, 2, const_str_plain_machar ); Py_INCREF( const_str_plain_machar );
    PyTuple_SET_ITEM( const_tuple_6e21946e2b63b42a7b9ed7f08a75900a_tuple, 3, const_str_plain_word ); Py_INCREF( const_str_plain_word );
    const_tuple_int_neg_126_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_neg_126_tuple, 0, const_int_neg_126 ); Py_INCREF( const_int_neg_126 );
    const_tuple_float_3_4028234663852886e38_tuple = PyTuple_New( 1 );
    const_float_3_4028234663852886e38 = UNSTREAM_FLOAT( &constant_bin[ 1162978 ] );
    PyTuple_SET_ITEM( const_tuple_float_3_4028234663852886e38_tuple, 0, const_float_3_4028234663852886e38 ); Py_INCREF( const_float_3_4028234663852886e38 );
    const_str_digest_f6e50f1e539dbc1212fdc62e9a8dbcb0 = UNSTREAM_STRING( &constant_bin[ 1162986 ], 10, 0 );
    const_str_digest_6da1ae55ed72337372d367d607b09d18 = UNSTREAM_STRING( &constant_bin[ 1162996 ], 16, 0 );
    const_int_pos_16384 = PyInt_FromLong( 16384l );
    const_str_digest_1c7a03bb335423a9f56b895c3fbc148d = UNSTREAM_STRING( &constant_bin[ 1163012 ], 86, 0 );
    const_str_digest_dd8d834fa6f08a772c04822740add2d7 = UNSTREAM_STRING( &constant_bin[ 1163098 ], 640, 0 );
    const_str_plain_bytepat = UNSTREAM_STRING( &constant_bin[ 1163738 ], 7, 1 );
    const_str_plain__max_vals = UNSTREAM_STRING( &constant_bin[ 1163745 ], 9, 1 );
    const_tuple_b16ef73a37c255752d6b7e0164bbdf62_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_b16ef73a37c255752d6b7e0164bbdf62_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_b16ef73a37c255752d6b7e0164bbdf62_tuple, 1, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_b16ef73a37c255752d6b7e0164bbdf62_tuple, 2, const_str_plain_newdtype ); Py_INCREF( const_str_plain_newdtype );
    PyTuple_SET_ITEM( const_tuple_b16ef73a37c255752d6b7e0164bbdf62_tuple, 3, const_str_plain_obj ); Py_INCREF( const_str_plain_obj );
    PyTuple_SET_ITEM( const_tuple_b16ef73a37c255752d6b7e0164bbdf62_tuple, 4, const_str_plain_dtypes ); Py_INCREF( const_str_plain_dtypes );
    PyTuple_SET_ITEM( const_tuple_b16ef73a37c255752d6b7e0164bbdf62_tuple, 5, const_str_plain_dt ); Py_INCREF( const_str_plain_dt );
    const_tuple_int_neg_105_tuple = PyTuple_New( 1 );
    const_int_neg_105 = PyInt_FromLong( -105l );
    PyTuple_SET_ITEM( const_tuple_int_neg_105_tuple, 0, const_int_neg_105 ); Py_INCREF( const_int_neg_105 );
    const_tuple_str_plain_ibeta_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ibeta_tuple, 0, const_str_plain_ibeta ); Py_INCREF( const_str_plain_ibeta );
    const_tuple_int_neg_64_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_neg_64_tuple, 0, const_int_neg_64 ); Py_INCREF( const_int_neg_64 );
    const_str_plain__str_max = UNSTREAM_STRING( &constant_bin[ 1162385 ], 8, 1 );
    const_tuple_str_plain_double_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_double_tuple, 0, const_str_plain_double ); Py_INCREF( const_str_plain_double );
    const_str_digest_ab7c9132978cbffbf3e766956f1fc60a = UNSTREAM_STRING( &constant_bin[ 1163754 ], 66, 0 );
    const_str_digest_08664f457b1a8dc7f05c9e1db0d9e3bd = UNSTREAM_STRING( &constant_bin[ 1163820 ], 6, 0 );
    const_tuple_str_plain_half_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_half_tuple, 0, const_str_plain_half ); Py_INCREF( const_str_plain_half );
    const_str_digest_3122c1a6126f732cd94f8864df7d76ff = UNSTREAM_STRING( &constant_bin[ 1163826 ], 29, 0 );
    const_tuple_str_plain_tiny_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_tiny_tuple, 0, const_str_plain_tiny ); Py_INCREF( const_str_plain_tiny );
    const_str_digest_c953c461ebc82ab94922f9cdf925a15f = UNSTREAM_STRING( &constant_bin[ 1163855 ], 16, 0 );
    const_tuple_int_pos_65504_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_65504_tuple, 0, const_int_pos_65504 ); Py_INCREF( const_int_pos_65504 );
    const_str_digest_c9daff2734dd6db50e0c7d322a45e9de = UNSTREAM_STRING( &constant_bin[ 1163871 ], 876, 0 );
    const_tuple_str_plain_log10_str_plain_exp2_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_log10_str_plain_exp2_tuple, 0, const_str_plain_log10 ); Py_INCREF( const_str_plain_log10 );
    PyTuple_SET_ITEM( const_tuple_str_plain_log10_str_plain_exp2_tuple, 1, const_str_plain_exp2 ); Py_INCREF( const_str_plain_exp2 );
    const_str_plain__init = UNSTREAM_STRING( &constant_bin[ 128 ], 5, 1 );
    const_int_pos_52 = PyInt_FromLong( 52l );
    const_tuple_str_digest_61eb47d02a6bf21baa1afce40f67ac8b_tuple = PyTuple_New( 1 );
    const_str_digest_61eb47d02a6bf21baa1afce40f67ac8b = UNSTREAM_STRING( &constant_bin[ 931237 ], 11, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_61eb47d02a6bf21baa1afce40f67ac8b_tuple, 0, const_str_digest_61eb47d02a6bf21baa1afce40f67ac8b ); Py_INCREF( const_str_digest_61eb47d02a6bf21baa1afce40f67ac8b );
    const_tuple_4377ca4e8254f3074b10ba8aee110074_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_4377ca4e8254f3074b10ba8aee110074_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_4377ca4e8254f3074b10ba8aee110074_tuple, 1, const_str_plain_ftype ); Py_INCREF( const_str_plain_ftype );
    PyTuple_SET_ITEM( const_tuple_4377ca4e8254f3074b10ba8aee110074_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_4377ca4e8254f3074b10ba8aee110074_tuple, 3, const_str_plain_float_conv ); Py_INCREF( const_str_plain_float_conv );
    PyTuple_SET_ITEM( const_tuple_4377ca4e8254f3074b10ba8aee110074_tuple, 4, const_str_plain_float_to_str ); Py_INCREF( const_str_plain_float_to_str );
    PyTuple_SET_ITEM( const_tuple_4377ca4e8254f3074b10ba8aee110074_tuple, 5, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    PyTuple_SET_ITEM( const_tuple_4377ca4e8254f3074b10ba8aee110074_tuple, 6, const_str_plain_float_to_float ); Py_INCREF( const_str_plain_float_to_float );
    const_tuple_str_plain_MachAr_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_MachAr_tuple, 0, const_str_plain_MachAr ); Py_INCREF( const_str_plain_MachAr );
    const_tuple_int_neg_63_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_neg_63_tuple, 0, const_int_neg_63 ); Py_INCREF( const_int_neg_63 );
    const_tuple_int_neg_10_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_neg_10_tuple, 0, const_int_neg_10 ); Py_INCREF( const_int_neg_10 );
    const_tuple_str_plain_single_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_single_tuple, 0, const_str_plain_single ); Py_INCREF( const_str_plain_single );
    const_str_digest_d699850a7ed4dcad4593c97865f24dd4 = UNSTREAM_STRING( &constant_bin[ 1164747 ], 189, 0 );
    const_str_digest_689f5c49db7f0f46fe96e883a6a93baa = UNSTREAM_STRING( &constant_bin[ 1164936 ], 28, 0 );
    const_tuple_str_plain_eps_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_eps_tuple, 0, const_str_plain_eps ); Py_INCREF( const_str_plain_eps );
    const_tuple_str_plain_self_str_plain_c_str_plain_d_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_c_str_plain_d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_c_str_plain_d_tuple, 1, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_c_str_plain_d_tuple, 2, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    const_int_neg_52 = PyInt_FromLong( -52l );
    const_int_neg_53 = PyInt_FromLong( -53l );
    const_tuple_str_plain_huge_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_huge_tuple, 0, const_str_plain_huge ); Py_INCREF( const_str_plain_huge );
    const_tuple_int_neg_1022_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_neg_1022_tuple, 0, const_int_neg_1022 ); Py_INCREF( const_int_neg_1022 );
    const_tuple_str_plain_machar_str_plain_bytepat_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_machar_str_plain_bytepat_tuple, 0, const_str_plain_machar ); Py_INCREF( const_str_plain_machar );
    PyTuple_SET_ITEM( const_tuple_str_plain_machar_str_plain_bytepat_tuple, 1, const_str_plain_bytepat ); Py_INCREF( const_str_plain_bytepat );
    const_str_plain__min_vals = UNSTREAM_STRING( &constant_bin[ 1164964 ], 9, 1 );
    const_str_plain__title_fmt = UNSTREAM_STRING( &constant_bin[ 1164973 ], 10, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$core$getlimits( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_1646c5051b2fb57fcd6779933451927e;
static PyCodeObject *codeobj_016ac099722b4330383f4aa2d0ed7c2b;
static PyCodeObject *codeobj_25f428b6f80f334e1181f06c64729c51;
static PyCodeObject *codeobj_7ae050eb9a420543214ed58305100460;
static PyCodeObject *codeobj_3df21d9f9cc183b48d221eba98117238;
static PyCodeObject *codeobj_e733a32deeb8fa62b602bc698ce5f64a;
static PyCodeObject *codeobj_061c2aac1f9d28fe1410f374029451b8;
static PyCodeObject *codeobj_f094195019d601afc7008f4ddc65b971;
static PyCodeObject *codeobj_517a3140d0baa7e59dc6ef590379f230;
static PyCodeObject *codeobj_09fabb7f3bff9846f1d7617871e0697c;
static PyCodeObject *codeobj_0bed67910142b3a02147bae793ff747d;
static PyCodeObject *codeobj_e39843c0365ee3bcb940dbd3d3f3d3d5;
static PyCodeObject *codeobj_a9b72b5bbc97c20e9209a357cb1d81ea;
static PyCodeObject *codeobj_8d2544d35aa9d9227c0713ef34a3d555;
static PyCodeObject *codeobj_7b9b2c19dccf6bf3a9de2aabfb9cfe4e;
static PyCodeObject *codeobj_bd91339d295bfc92480ddd23ce3c8ba4;
static PyCodeObject *codeobj_8bf9e926f07235b0be107c5c0a1c3e61;
static PyCodeObject *codeobj_35f0348b39e6041691f902426f5f2349;
static PyCodeObject *codeobj_d642aaa7e66139a185d2d61be24cec2a;
static PyCodeObject *codeobj_d8149c08963d90665fc4f9e1c9059e76;
static PyCodeObject *codeobj_25fde72f920b5890024cd4495449c447;
static PyCodeObject *codeobj_a067b7d8cca5eb2ff27e08efbc31a1a4;
static PyCodeObject *codeobj_ae14b95dd7bcc89fd869ebc8bfa24048;
static PyCodeObject *codeobj_242d4be54487a88e2cbd4443d365da37;
static PyCodeObject *codeobj_036a715ab33f51cf558e3c20f3414f98;
static PyCodeObject *codeobj_874f1f8d3c8c8e48e7df423e965f7b4d;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_3ab7825f0d605267d9a713ee11c2374d;
    codeobj_1646c5051b2fb57fcd6779933451927e = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 41, const_tuple_str_plain_v_str_plain_ftype_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_016ac099722b4330383f4aa2d0ed7c2b = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 42, const_tuple_str_plain_v_str_plain_float_conv_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_25f428b6f80f334e1181f06c64729c51 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 43, const_tuple_str_plain_v_str_plain_ftype_str_plain_params_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7ae050eb9a420543214ed58305100460 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 286, const_tuple_str_plain_v_str_plain_ftype_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3df21d9f9cc183b48d221eba98117238 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 287, const_tuple_str_plain_v_str_plain_params_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e733a32deeb8fa62b602bc698ce5f64a = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 288, const_tuple_str_plain_v_str_plain_ftype_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_061c2aac1f9d28fe1410f374029451b8 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 289, const_tuple_str_plain_v_str_plain_ftype_str_plain_params_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f094195019d601afc7008f4ddc65b971 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_1fe6771d9d4496f5794e2ba123343157, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_517a3140d0baa7e59dc6ef590379f230 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 37, const_tuple_4377ca4e8254f3074b10ba8aee110074_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_09fabb7f3bff9846f1d7617871e0697c = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 497, const_tuple_str_plain_self_str_plain_int_type_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0bed67910142b3a02147bae793ff747d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___new__, 365, const_tuple_b16ef73a37c255752d6b7e0164bbdf62_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e39843c0365ee3bcb940dbd3d3f3d3d5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr__, 436, const_tuple_str_plain_self_str_plain_c_str_plain_d_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a9b72b5bbc97c20e9209a357cb1d81ea = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr__, 547, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8d2544d35aa9d9227c0713ef34a3d555 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___str__, 422, const_tuple_str_plain_self_str_plain_fmt_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7b9b2c19dccf6bf3a9de2aabfb9cfe4e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___str__, 536, const_tuple_str_plain_self_str_plain_fmt_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_bd91339d295bfc92480ddd23ce3c8ba4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__discovered_machar, 282, const_tuple_str_plain_ftype_str_plain_params_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8bf9e926f07235b0be107c5c0a1c3e61 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fr0, 19, const_tuple_str_plain_a_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_35f0348b39e6041691f902426f5f2349 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fr1, 27, const_tuple_str_plain_a_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d642aaa7e66139a185d2d61be24cec2a = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_machar, 239, const_tuple_dc490514ccb569cefc5b1902373398fa_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d8149c08963d90665fc4f9e1c9059e76 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__init, 398, const_tuple_6e21946e2b63b42a7b9ed7f08a75900a_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_25fde72f920b5890024cd4495449c447 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__register_known_types, 96, const_tuple_0439b7578f5e803948f85e2064052b05_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a067b7d8cca5eb2ff27e08efbc31a1a4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__register_type, 92, const_tuple_str_plain_machar_str_plain_bytepat_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ae14b95dd7bcc89fd869ebc8bfa24048 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_finfo, 294, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_242d4be54487a88e2cbd4443d365da37 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_iinfo, 445, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_036a715ab33f51cf558e3c20f3414f98 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_max, 522, const_tuple_str_plain_self_str_plain_val_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_874f1f8d3c8c8e48e7df423e965f7b4d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_min, 508, const_tuple_str_plain_self_str_plain_val_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_10___str__(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_11___repr__(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_12___init__(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_13_min(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_14_max(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_15___str__(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_16___repr__(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_1__fr0(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_2__fr1(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_3___init__(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_3___init__$$$function_1_lambda(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_3___init__$$$function_2_lambda(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_3___init__$$$function_3_lambda(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_4__register_type(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_5__register_known_types(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_6__get_machar(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_7__discovered_machar(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_7__discovered_machar$$$function_1_lambda(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_7__discovered_machar$$$function_2_lambda(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_7__discovered_machar$$$function_3_lambda(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_7__discovered_machar$$$function_4_lambda(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_8___new__(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_9__init(  );


// The module function definitions.
static PyObject *impl_numpy$core$getlimits$$$function_1__fr0( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_8bf9e926f07235b0be107c5c0a1c3e61;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_8bf9e926f07235b0be107c5c0a1c3e61 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8bf9e926f07235b0be107c5c0a1c3e61, codeobj_8bf9e926f07235b0be107c5c0a1c3e61, module_numpy$core$getlimits, sizeof(void *) );
    frame_8bf9e926f07235b0be107c5c0a1c3e61 = cache_frame_8bf9e926f07235b0be107c5c0a1c3e61;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8bf9e926f07235b0be107c5c0a1c3e61 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8bf9e926f07235b0be107c5c0a1c3e61 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_a );
        tmp_source_name_1 = par_a;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "o";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_a );
            tmp_called_instance_1 = par_a;
            frame_8bf9e926f07235b0be107c5c0a1c3e61->m_frame.f_lineno = 22;
            tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 22;
                type_description_1 = "o";
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            tmp_assattr_name_1 = const_tuple_int_pos_1_tuple;
            CHECK_OBJECT( par_a );
            tmp_assattr_target_1 = par_a;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_shape, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 23;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8bf9e926f07235b0be107c5c0a1c3e61 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8bf9e926f07235b0be107c5c0a1c3e61 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8bf9e926f07235b0be107c5c0a1c3e61, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8bf9e926f07235b0be107c5c0a1c3e61->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8bf9e926f07235b0be107c5c0a1c3e61, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8bf9e926f07235b0be107c5c0a1c3e61,
        type_description_1,
        par_a
    );


    // Release cached frame.
    if ( frame_8bf9e926f07235b0be107c5c0a1c3e61 == cache_frame_8bf9e926f07235b0be107c5c0a1c3e61 )
    {
        Py_DECREF( frame_8bf9e926f07235b0be107c5c0a1c3e61 );
    }
    cache_frame_8bf9e926f07235b0be107c5c0a1c3e61 = NULL;

    assertFrameObject( frame_8bf9e926f07235b0be107c5c0a1c3e61 );

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
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_1__fr0 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_1__fr0 );
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


static PyObject *impl_numpy$core$getlimits$$$function_2__fr1( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_35f0348b39e6041691f902426f5f2349;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_35f0348b39e6041691f902426f5f2349 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_35f0348b39e6041691f902426f5f2349, codeobj_35f0348b39e6041691f902426f5f2349, module_numpy$core$getlimits, sizeof(void *) );
    frame_35f0348b39e6041691f902426f5f2349 = cache_frame_35f0348b39e6041691f902426f5f2349;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_35f0348b39e6041691f902426f5f2349 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_35f0348b39e6041691f902426f5f2349 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_a );
        tmp_source_name_1 = par_a;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_size );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "o";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_a );
            tmp_called_instance_1 = par_a;
            frame_35f0348b39e6041691f902426f5f2349->m_frame.f_lineno = 30;
            tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 30;
                type_description_1 = "o";
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            tmp_assattr_name_1 = const_tuple_empty;
            CHECK_OBJECT( par_a );
            tmp_assattr_target_1 = par_a;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_shape, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 31;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_35f0348b39e6041691f902426f5f2349 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_35f0348b39e6041691f902426f5f2349 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_35f0348b39e6041691f902426f5f2349, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_35f0348b39e6041691f902426f5f2349->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_35f0348b39e6041691f902426f5f2349, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_35f0348b39e6041691f902426f5f2349,
        type_description_1,
        par_a
    );


    // Release cached frame.
    if ( frame_35f0348b39e6041691f902426f5f2349 == cache_frame_35f0348b39e6041691f902426f5f2349 )
    {
        Py_DECREF( frame_35f0348b39e6041691f902426f5f2349 );
    }
    cache_frame_35f0348b39e6041691f902426f5f2349 = NULL;

    assertFrameObject( frame_35f0348b39e6041691f902426f5f2349 );

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
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_2__fr1 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_2__fr1 );
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


static PyObject *impl_numpy$core$getlimits$$$function_3___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_CellObject *par_ftype = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *par_kwargs = python_pars[ 2 ];
    struct Nuitka_CellObject *var_float_conv = PyCell_EMPTY();
    PyObject *var_float_to_str = NULL;
    struct Nuitka_CellObject *var_params = PyCell_EMPTY();
    PyObject *var_float_to_float = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_assign_unpack_2__assign_source = NULL;
    PyObject *tmp_assign_unpack_3__assign_source = NULL;
    struct Nuitka_FrameObject *frame_517a3140d0baa7e59dc6ef590379f230;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    static struct Nuitka_FrameObject *cache_frame_517a3140d0baa7e59dc6ef590379f230 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_517a3140d0baa7e59dc6ef590379f230, codeobj_517a3140d0baa7e59dc6ef590379f230, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_517a3140d0baa7e59dc6ef590379f230 = cache_frame_517a3140d0baa7e59dc6ef590379f230;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_517a3140d0baa7e59dc6ef590379f230 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_517a3140d0baa7e59dc6ef590379f230 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__MACHAR_PARAMS );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__MACHAR_PARAMS );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_MACHAR_PARAMS" );
            exception_tb = NULL;

            exception_lineno = 40;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( PyCell_GET( par_ftype ) );
        tmp_subscript_name_1 = PyCell_GET( par_ftype );
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_params ) == NULL );
        PyCell_SET( var_params, tmp_assign_source_1 );

    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_FUNCTION_numpy$core$getlimits$$$function_3___init__$$$function_1_lambda(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[0] = par_ftype;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[0] );


        assert( PyCell_GET( var_float_conv ) == NULL );
        PyCell_SET( var_float_conv, tmp_assign_source_2 );

    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_FUNCTION_numpy$core$getlimits$$$function_3___init__$$$function_2_lambda(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[0] = var_float_conv;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[0] );


        assert( var_float_to_float == NULL );
        var_float_to_float = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_FUNCTION_numpy$core$getlimits$$$function_3___init__$$$function_3_lambda(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_4)->m_closure[0] = par_ftype;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_4)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_4)->m_closure[1] = var_params;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_4)->m_closure[1] );


        assert( var_float_to_str == NULL );
        var_float_to_str = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( PyCell_GET( var_params ) );
        tmp_subscribed_name_2 = PyCell_GET( var_params );
        tmp_subscript_name_2 = const_str_plain_title;
        tmp_assattr_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_title, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( var_float_to_float );
        tmp_called_name_1 = var_float_to_float;
        CHECK_OBJECT( par_kwargs );
        tmp_called_instance_1 = par_kwargs;
        frame_517a3140d0baa7e59dc6ef590379f230->m_frame.f_lineno = 47;
        tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_eps_tuple, 0 ) );

        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "ocococo";
            goto try_except_handler_2;
        }
        frame_517a3140d0baa7e59dc6ef590379f230->m_frame.f_lineno = 47;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "ocococo";
            goto try_except_handler_2;
        }
        assert( tmp_assign_unpack_1__assign_source == NULL );
        tmp_assign_unpack_1__assign_source = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
        tmp_assattr_name_2 = tmp_assign_unpack_1__assign_source;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_epsilon, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "ocococo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
        tmp_assattr_name_3 = tmp_assign_unpack_1__assign_source;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_eps, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "ocococo";
            goto try_except_handler_2;
        }
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

    Py_XDECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
    Py_DECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( var_float_to_float );
        tmp_called_name_2 = var_float_to_float;
        CHECK_OBJECT( par_kwargs );
        tmp_called_instance_2 = par_kwargs;
        frame_517a3140d0baa7e59dc6ef590379f230->m_frame.f_lineno = 48;
        tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_epsneg_tuple, 0 ) );

        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
        frame_517a3140d0baa7e59dc6ef590379f230->m_frame.f_lineno = 48;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assattr_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assattr_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_epsneg, tmp_assattr_name_4 );
        Py_DECREF( tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT( var_float_to_float );
        tmp_called_name_3 = var_float_to_float;
        CHECK_OBJECT( par_kwargs );
        tmp_called_instance_3 = par_kwargs;
        frame_517a3140d0baa7e59dc6ef590379f230->m_frame.f_lineno = 49;
        tmp_args_element_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_huge_tuple, 0 ) );

        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "ocococo";
            goto try_except_handler_3;
        }
        frame_517a3140d0baa7e59dc6ef590379f230->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "ocococo";
            goto try_except_handler_3;
        }
        assert( tmp_assign_unpack_2__assign_source == NULL );
        tmp_assign_unpack_2__assign_source = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT( tmp_assign_unpack_2__assign_source );
        tmp_assattr_name_5 = tmp_assign_unpack_2__assign_source;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_xmax, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "ocococo";
            goto try_except_handler_3;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT( tmp_assign_unpack_2__assign_source );
        tmp_assattr_name_6 = tmp_assign_unpack_2__assign_source;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_huge, tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "ocococo";
            goto try_except_handler_3;
        }
    }
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

    Py_XDECREF( tmp_assign_unpack_2__assign_source );
    tmp_assign_unpack_2__assign_source = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_2__assign_source );
    Py_DECREF( tmp_assign_unpack_2__assign_source );
    tmp_assign_unpack_2__assign_source = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT( var_float_to_float );
        tmp_called_name_4 = var_float_to_float;
        CHECK_OBJECT( par_kwargs );
        tmp_called_instance_4 = par_kwargs;
        frame_517a3140d0baa7e59dc6ef590379f230->m_frame.f_lineno = 50;
        tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_tiny_tuple, 0 ) );

        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "ocococo";
            goto try_except_handler_4;
        }
        frame_517a3140d0baa7e59dc6ef590379f230->m_frame.f_lineno = 50;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "ocococo";
            goto try_except_handler_4;
        }
        assert( tmp_assign_unpack_3__assign_source == NULL );
        tmp_assign_unpack_3__assign_source = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT( tmp_assign_unpack_3__assign_source );
        tmp_assattr_name_7 = tmp_assign_unpack_3__assign_source;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_xmin, tmp_assattr_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "ocococo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT( tmp_assign_unpack_3__assign_source );
        tmp_assattr_name_8 = tmp_assign_unpack_3__assign_source;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_tiny, tmp_assattr_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "ocococo";
            goto try_except_handler_4;
        }
    }
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

    Py_XDECREF( tmp_assign_unpack_3__assign_source );
    tmp_assign_unpack_3__assign_source = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_3__assign_source );
    Py_DECREF( tmp_assign_unpack_3__assign_source );
    tmp_assign_unpack_3__assign_source = NULL;

    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_called_name_5;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT( PyCell_GET( var_params ) );
        tmp_subscribed_name_3 = PyCell_GET( var_params );
        tmp_subscript_name_3 = const_str_plain_itype;
        tmp_called_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_kwargs );
        tmp_called_instance_5 = par_kwargs;
        frame_517a3140d0baa7e59dc6ef590379f230->m_frame.f_lineno = 51;
        tmp_args_element_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_ibeta_tuple, 0 ) );

        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 51;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
        frame_517a3140d0baa7e59dc6ef590379f230->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assattr_name_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assattr_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_ibeta, tmp_assattr_name_9 );
        Py_DECREF( tmp_assattr_name_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_6 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_1 );
        if ( tmp_called_instance_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_kwargs );
        tmp_args_element_name_6 = par_kwargs;
        frame_517a3140d0baa7e59dc6ef590379f230->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_update, call_args );
        }

        Py_DECREF( tmp_called_instance_6 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_source_name_2;
        PyObject *tmp_assattr_target_10;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_log10 );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log10 );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "log10" );
            exception_tb = NULL;

            exception_lineno = 53;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_eps );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
        frame_517a3140d0baa7e59dc6ef590379f230->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
        tmp_int_arg_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_int_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_10 = PyNumber_Int( tmp_int_arg_1 );
        Py_DECREF( tmp_int_arg_1 );
        if ( tmp_assattr_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_precision, tmp_assattr_name_10 );
        Py_DECREF( tmp_assattr_name_10 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_name_8;
        PyObject *tmp_right_name_1;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT( var_float_to_float );
        tmp_called_name_7 = var_float_to_float;
        CHECK_OBJECT( PyCell_GET( var_float_conv ) );
        tmp_called_name_8 = PyCell_GET( var_float_conv );
        frame_517a3140d0baa7e59dc6ef590379f230->m_frame.f_lineno = 54;
        tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, &PyTuple_GET_ITEM( const_tuple_int_pos_10_tuple, 0 ) );

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_operand_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_precision );
        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 54;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 54;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_8 = POWER_OPERATION( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
        frame_517a3140d0baa7e59dc6ef590379f230->m_frame.f_lineno = 54;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_assattr_name_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_assattr_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_resolution, tmp_assattr_name_11 );
        Py_DECREF( tmp_assattr_name_11 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_12;
        PyObject *tmp_called_name_9;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_source_name_4;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT( var_float_to_str );
        tmp_called_name_9 = var_float_to_str;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_eps );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
        frame_517a3140d0baa7e59dc6ef590379f230->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_assattr_name_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_assattr_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain__str_eps, tmp_assattr_name_12 );
        Py_DECREF( tmp_assattr_name_12 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_13;
        PyObject *tmp_called_name_10;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_source_name_5;
        PyObject *tmp_assattr_target_13;
        CHECK_OBJECT( var_float_to_str );
        tmp_called_name_10 = var_float_to_str;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_epsneg );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
        frame_517a3140d0baa7e59dc6ef590379f230->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_assattr_name_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_assattr_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain__str_epsneg, tmp_assattr_name_13 );
        Py_DECREF( tmp_assattr_name_13 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_14;
        PyObject *tmp_called_name_11;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_source_name_6;
        PyObject *tmp_assattr_target_14;
        CHECK_OBJECT( var_float_to_str );
        tmp_called_name_11 = var_float_to_str;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_xmin );
        if ( tmp_args_element_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
        frame_517a3140d0baa7e59dc6ef590379f230->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_assattr_name_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
        }

        Py_DECREF( tmp_args_element_name_11 );
        if ( tmp_assattr_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain__str_xmin, tmp_assattr_name_14 );
        Py_DECREF( tmp_assattr_name_14 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_15;
        PyObject *tmp_called_name_12;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_source_name_7;
        PyObject *tmp_assattr_target_15;
        CHECK_OBJECT( var_float_to_str );
        tmp_called_name_12 = var_float_to_str;
        CHECK_OBJECT( par_self );
        tmp_source_name_7 = par_self;
        tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_xmax );
        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
        frame_517a3140d0baa7e59dc6ef590379f230->m_frame.f_lineno = 58;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_assattr_name_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
        }

        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_assattr_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_15 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_15, const_str_plain__str_xmax, tmp_assattr_name_15 );
        Py_DECREF( tmp_assattr_name_15 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_16;
        PyObject *tmp_called_name_13;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_source_name_8;
        PyObject *tmp_assattr_target_16;
        CHECK_OBJECT( var_float_to_str );
        tmp_called_name_13 = var_float_to_str;
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_args_element_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_resolution );
        if ( tmp_args_element_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
        frame_517a3140d0baa7e59dc6ef590379f230->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_assattr_name_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
        }

        Py_DECREF( tmp_args_element_name_13 );
        if ( tmp_assattr_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_16 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_16, const_str_plain__str_resolution, tmp_assattr_name_16 );
        Py_DECREF( tmp_assattr_name_16 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "ocococo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_517a3140d0baa7e59dc6ef590379f230 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_517a3140d0baa7e59dc6ef590379f230 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_517a3140d0baa7e59dc6ef590379f230, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_517a3140d0baa7e59dc6ef590379f230->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_517a3140d0baa7e59dc6ef590379f230, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_517a3140d0baa7e59dc6ef590379f230,
        type_description_1,
        par_self,
        par_ftype,
        par_kwargs,
        var_float_conv,
        var_float_to_str,
        var_params,
        var_float_to_float
    );


    // Release cached frame.
    if ( frame_517a3140d0baa7e59dc6ef590379f230 == cache_frame_517a3140d0baa7e59dc6ef590379f230 )
    {
        Py_DECREF( frame_517a3140d0baa7e59dc6ef590379f230 );
    }
    cache_frame_517a3140d0baa7e59dc6ef590379f230 = NULL;

    assertFrameObject( frame_517a3140d0baa7e59dc6ef590379f230 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_3___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_float_conv );
    Py_DECREF( var_float_conv );
    var_float_conv = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_float_to_str );
    Py_DECREF( var_float_to_str );
    var_float_to_str = NULL;

    CHECK_OBJECT( (PyObject *)par_ftype );
    Py_DECREF( par_ftype );
    par_ftype = NULL;

    CHECK_OBJECT( (PyObject *)var_params );
    Py_DECREF( var_params );
    var_params = NULL;

    CHECK_OBJECT( (PyObject *)var_float_to_float );
    Py_DECREF( var_float_to_float );
    var_float_to_float = NULL;

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

    CHECK_OBJECT( (PyObject *)var_float_conv );
    Py_DECREF( var_float_conv );
    var_float_conv = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_float_to_str );
    var_float_to_str = NULL;

    CHECK_OBJECT( (PyObject *)par_ftype );
    Py_DECREF( par_ftype );
    par_ftype = NULL;

    CHECK_OBJECT( (PyObject *)var_params );
    Py_DECREF( var_params );
    var_params = NULL;

    Py_XDECREF( var_float_to_float );
    var_float_to_float = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_3___init__ );
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


static PyObject *impl_numpy$core$getlimits$$$function_3___init__$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_v = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_1646c5051b2fb57fcd6779933451927e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1646c5051b2fb57fcd6779933451927e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1646c5051b2fb57fcd6779933451927e, codeobj_1646c5051b2fb57fcd6779933451927e, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *) );
    frame_1646c5051b2fb57fcd6779933451927e = cache_frame_1646c5051b2fb57fcd6779933451927e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1646c5051b2fb57fcd6779933451927e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1646c5051b2fb57fcd6779933451927e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_array );

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

            exception_lineno = 41;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_v );
        tmp_list_element_1 = par_v;
        tmp_args_element_name_1 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ftype" );
            exception_tb = NULL;

            exception_lineno = 41;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = PyCell_GET( self->m_closure[0] );
        frame_1646c5051b2fb57fcd6779933451927e->m_frame.f_lineno = 41;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1646c5051b2fb57fcd6779933451927e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1646c5051b2fb57fcd6779933451927e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1646c5051b2fb57fcd6779933451927e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1646c5051b2fb57fcd6779933451927e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1646c5051b2fb57fcd6779933451927e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1646c5051b2fb57fcd6779933451927e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1646c5051b2fb57fcd6779933451927e,
        type_description_1,
        par_v,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_1646c5051b2fb57fcd6779933451927e == cache_frame_1646c5051b2fb57fcd6779933451927e )
    {
        Py_DECREF( frame_1646c5051b2fb57fcd6779933451927e );
    }
    cache_frame_1646c5051b2fb57fcd6779933451927e = NULL;

    assertFrameObject( frame_1646c5051b2fb57fcd6779933451927e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_3___init__$$$function_1_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

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

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_3___init__$$$function_1_lambda );
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


static PyObject *impl_numpy$core$getlimits$$$function_3___init__$$$function_2_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_v = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_016ac099722b4330383f4aa2d0ed7c2b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_016ac099722b4330383f4aa2d0ed7c2b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_016ac099722b4330383f4aa2d0ed7c2b, codeobj_016ac099722b4330383f4aa2d0ed7c2b, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *) );
    frame_016ac099722b4330383f4aa2d0ed7c2b = cache_frame_016ac099722b4330383f4aa2d0ed7c2b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_016ac099722b4330383f4aa2d0ed7c2b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_016ac099722b4330383f4aa2d0ed7c2b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__fr1 );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fr1 );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_fr1" );
            exception_tb = NULL;

            exception_lineno = 42;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "float_conv" );
            exception_tb = NULL;

            exception_lineno = 42;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_v );
        tmp_args_element_name_2 = par_v;
        frame_016ac099722b4330383f4aa2d0ed7c2b->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_016ac099722b4330383f4aa2d0ed7c2b->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_016ac099722b4330383f4aa2d0ed7c2b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_016ac099722b4330383f4aa2d0ed7c2b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_016ac099722b4330383f4aa2d0ed7c2b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_016ac099722b4330383f4aa2d0ed7c2b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_016ac099722b4330383f4aa2d0ed7c2b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_016ac099722b4330383f4aa2d0ed7c2b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_016ac099722b4330383f4aa2d0ed7c2b,
        type_description_1,
        par_v,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_016ac099722b4330383f4aa2d0ed7c2b == cache_frame_016ac099722b4330383f4aa2d0ed7c2b )
    {
        Py_DECREF( frame_016ac099722b4330383f4aa2d0ed7c2b );
    }
    cache_frame_016ac099722b4330383f4aa2d0ed7c2b = NULL;

    assertFrameObject( frame_016ac099722b4330383f4aa2d0ed7c2b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_3___init__$$$function_2_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

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

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_3___init__$$$function_2_lambda );
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


static PyObject *impl_numpy$core$getlimits$$$function_3___init__$$$function_3_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_v = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_25f428b6f80f334e1181f06c64729c51;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_25f428b6f80f334e1181f06c64729c51 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_25f428b6f80f334e1181f06c64729c51, codeobj_25f428b6f80f334e1181f06c64729c51, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_25f428b6f80f334e1181f06c64729c51 = cache_frame_25f428b6f80f334e1181f06c64729c51;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_25f428b6f80f334e1181f06c64729c51 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_25f428b6f80f334e1181f06c64729c51 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_args_element_name_3;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "params" );
            exception_tb = NULL;

            exception_lineno = 43;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_1 = PyCell_GET( self->m_closure[1] );
        tmp_subscript_name_1 = const_str_plain_fmt;
        tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
            exception_tb = NULL;

            exception_lineno = 43;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__fr0 );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fr0 );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_fr0" );
            exception_tb = NULL;

            exception_lineno = 43;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_v );
        tmp_args_element_name_2 = par_v;
        frame_25f428b6f80f334e1181f06c64729c51->m_frame.f_lineno = 43;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_subscribed_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 43;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_int_0;
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 43;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ftype" );
            exception_tb = NULL;

            exception_lineno = 43;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = PyCell_GET( self->m_closure[0] );
        frame_25f428b6f80f334e1181f06c64729c51->m_frame.f_lineno = 43;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_3 };
            tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 43;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_25f428b6f80f334e1181f06c64729c51 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_25f428b6f80f334e1181f06c64729c51 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_25f428b6f80f334e1181f06c64729c51 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_25f428b6f80f334e1181f06c64729c51, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_25f428b6f80f334e1181f06c64729c51->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_25f428b6f80f334e1181f06c64729c51, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_25f428b6f80f334e1181f06c64729c51,
        type_description_1,
        par_v,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame.
    if ( frame_25f428b6f80f334e1181f06c64729c51 == cache_frame_25f428b6f80f334e1181f06c64729c51 )
    {
        Py_DECREF( frame_25f428b6f80f334e1181f06c64729c51 );
    }
    cache_frame_25f428b6f80f334e1181f06c64729c51 = NULL;

    assertFrameObject( frame_25f428b6f80f334e1181f06c64729c51 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_3___init__$$$function_3_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

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

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_3___init__$$$function_3_lambda );
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


static PyObject *impl_numpy$core$getlimits$$$function_4__register_type( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_machar = python_pars[ 0 ];
    PyObject *par_bytepat = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_a067b7d8cca5eb2ff27e08efbc31a1a4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_a067b7d8cca5eb2ff27e08efbc31a1a4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a067b7d8cca5eb2ff27e08efbc31a1a4, codeobj_a067b7d8cca5eb2ff27e08efbc31a1a4, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *) );
    frame_a067b7d8cca5eb2ff27e08efbc31a1a4 = cache_frame_a067b7d8cca5eb2ff27e08efbc31a1a4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a067b7d8cca5eb2ff27e08efbc31a1a4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a067b7d8cca5eb2ff27e08efbc31a1a4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( par_machar );
        tmp_ass_subvalue_1 = par_machar;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__KNOWN_TYPES );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__KNOWN_TYPES );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_KNOWN_TYPES" );
            exception_tb = NULL;

            exception_lineno = 93;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_bytepat );
        tmp_ass_subscript_1 = par_bytepat;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a067b7d8cca5eb2ff27e08efbc31a1a4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a067b7d8cca5eb2ff27e08efbc31a1a4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a067b7d8cca5eb2ff27e08efbc31a1a4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a067b7d8cca5eb2ff27e08efbc31a1a4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a067b7d8cca5eb2ff27e08efbc31a1a4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a067b7d8cca5eb2ff27e08efbc31a1a4,
        type_description_1,
        par_machar,
        par_bytepat
    );


    // Release cached frame.
    if ( frame_a067b7d8cca5eb2ff27e08efbc31a1a4 == cache_frame_a067b7d8cca5eb2ff27e08efbc31a1a4 )
    {
        Py_DECREF( frame_a067b7d8cca5eb2ff27e08efbc31a1a4 );
    }
    cache_frame_a067b7d8cca5eb2ff27e08efbc31a1a4 = NULL;

    assertFrameObject( frame_a067b7d8cca5eb2ff27e08efbc31a1a4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_4__register_type );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_machar );
    Py_DECREF( par_machar );
    par_machar = NULL;

    CHECK_OBJECT( (PyObject *)par_bytepat );
    Py_DECREF( par_bytepat );
    par_bytepat = NULL;

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

    CHECK_OBJECT( (PyObject *)par_machar );
    Py_DECREF( par_machar );
    par_machar = NULL;

    CHECK_OBJECT( (PyObject *)par_bytepat );
    Py_DECREF( par_bytepat );
    par_bytepat = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_4__register_type );
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


static PyObject *impl_numpy$core$getlimits$$$function_5__register_known_types( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_ld = NULL;
    PyObject *var_float64_ma = NULL;
    PyObject *var_tiny_f128 = NULL;
    PyObject *var_epsneg_f128 = NULL;
    PyObject *var_f32 = NULL;
    PyObject *var_tiny_f80 = NULL;
    PyObject *var_huge_f128 = NULL;
    PyObject *var_float128_ma = NULL;
    PyObject *var_float16_ma = NULL;
    PyObject *var_float_dd_ma = NULL;
    PyObject *var_float80_ma = NULL;
    PyObject *var_huge_f80 = NULL;
    PyObject *var_float32_ma = NULL;
    PyObject *var_f64 = NULL;
    PyObject *var_f16 = NULL;
    PyObject *var_epsneg_f80 = NULL;
    PyObject *var_huge_dd = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_with_2__enter = NULL;
    PyObject *tmp_with_2__exit = NULL;
    nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_2__source = NULL;
    struct Nuitka_FrameObject *frame_25fde72f920b5890024cd4495449c447;
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
    static struct Nuitka_FrameObject *cache_frame_25fde72f920b5890024cd4495449c447 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_25fde72f920b5890024cd4495449c447, codeobj_25fde72f920b5890024cd4495449c447, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_25fde72f920b5890024cd4495449c447 = cache_frame_25fde72f920b5890024cd4495449c447;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_25fde72f920b5890024cd4495449c447 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_25fde72f920b5890024cd4495449c447 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "ntypes" );
            exception_tb = NULL;

            exception_lineno = 99;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_float16 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        assert( var_f16 == NULL );
        var_f16 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
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
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_5;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_called_name_6;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_called_name_7;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_MachArLike );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MachArLike );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "MachArLike" );
            exception_tb = NULL;

            exception_lineno = 100;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( var_f16 );
        tmp_tuple_element_1 = var_f16;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_value_1 = const_int_neg_10;
        tmp_dict_key_1 = const_str_plain_machep;
        tmp_kw_name_1 = _PyDict_NewPresized( 13 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_2 = const_int_neg_11;
        tmp_dict_key_2 = const_str_plain_negep;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_3 = const_int_neg_14;
        tmp_dict_key_3 = const_str_plain_minexp;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_4 = const_int_pos_16;
        tmp_dict_key_4 = const_str_plain_maxexp;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_5 = const_int_pos_10;
        tmp_dict_key_5 = const_str_plain_it;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_6 = const_int_pos_5;
        tmp_dict_key_6 = const_str_plain_iexp;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_7 = const_int_pos_2;
        tmp_dict_key_7 = const_str_plain_ibeta;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_8 = const_int_pos_5;
        tmp_dict_key_8 = const_str_plain_irnd;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_9 = const_int_0;
        tmp_dict_key_9 = const_str_plain_ngrd;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_9, tmp_dict_value_9 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_exp2 );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exp2 );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "exp2" );
            exception_tb = NULL;

            exception_lineno = 110;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT( var_f16 );
        tmp_called_name_3 = var_f16;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 110;
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_int_neg_10_tuple, 0 ) );

        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 110;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 110;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_dict_value_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_dict_value_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 110;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_10 = const_str_plain_eps;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_10, tmp_dict_value_10 );
        Py_DECREF( tmp_dict_value_10 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_exp2 );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exp2 );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "exp2" );
            exception_tb = NULL;

            exception_lineno = 111;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( var_f16 );
        tmp_called_name_5 = var_f16;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 111;
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_int_neg_11_tuple, 0 ) );

        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 111;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 111;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_dict_value_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_dict_value_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 111;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_11 = const_str_plain_epsneg;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_11, tmp_dict_value_11 );
        Py_DECREF( tmp_dict_value_11 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( var_f16 );
        tmp_called_name_6 = var_f16;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 112;
        tmp_dict_value_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_int_pos_65504_tuple, 0 ) );

        if ( tmp_dict_value_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 112;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_12 = const_str_plain_huge;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_12, tmp_dict_value_12 );
        Py_DECREF( tmp_dict_value_12 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( var_f16 );
        tmp_called_name_7 = var_f16;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 113;
        tmp_dict_value_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, &PyTuple_GET_ITEM( const_tuple_float_6_103515625e_minus_05_tuple, 0 ) );

        if ( tmp_dict_value_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 113;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_13 = const_str_plain_tiny;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_13, tmp_dict_value_13 );
        Py_DECREF( tmp_dict_value_13 );
        assert( !(tmp_res != 0) );
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 100;
        tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        assert( var_float16_ma == NULL );
        var_float16_ma = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__register_type );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__register_type );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_register_type" );
            exception_tb = NULL;

            exception_lineno = 114;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = tmp_mvar_value_5;
        CHECK_OBJECT( var_float16_ma );
        tmp_args_element_name_3 = var_float16_ma;
        tmp_args_element_name_4 = const_str_digest_57aa1c044b869aee3cb076817c47bad3;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 114;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        CHECK_OBJECT( var_float16_ma );
        tmp_ass_subvalue_1 = var_float16_ma;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__float_ma );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__float_ma );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_float_ma" );
            exception_tb = NULL;

            exception_lineno = 115;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_1 = tmp_mvar_value_6;
        tmp_ass_subscript_1 = const_int_pos_16;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 16, tmp_ass_subvalue_1 );
        if ( tmp_ass_subscript_res_1 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "ntypes" );
            exception_tb = NULL;

            exception_lineno = 118;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_7;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_float32 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        assert( var_f32 == NULL );
        var_f32 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_2;
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
        PyObject *tmp_dict_key_21;
        PyObject *tmp_dict_value_21;
        PyObject *tmp_dict_key_22;
        PyObject *tmp_dict_value_22;
        PyObject *tmp_dict_key_23;
        PyObject *tmp_dict_value_23;
        PyObject *tmp_called_name_10;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_name_11;
        PyObject *tmp_dict_key_24;
        PyObject *tmp_dict_value_24;
        PyObject *tmp_called_name_12;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_name_13;
        PyObject *tmp_dict_key_25;
        PyObject *tmp_dict_value_25;
        PyObject *tmp_called_name_14;
        PyObject *tmp_dict_key_26;
        PyObject *tmp_dict_value_26;
        PyObject *tmp_called_name_15;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_called_name_16;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_MachArLike );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MachArLike );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "MachArLike" );
            exception_tb = NULL;

            exception_lineno = 119;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_9 = tmp_mvar_value_8;
        CHECK_OBJECT( var_f32 );
        tmp_tuple_element_2 = var_f32;
        tmp_args_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_dict_value_14 = const_int_neg_23;
        tmp_dict_key_14 = const_str_plain_machep;
        tmp_kw_name_2 = _PyDict_NewPresized( 13 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_14, tmp_dict_value_14 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_15 = const_int_neg_24;
        tmp_dict_key_15 = const_str_plain_negep;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_15, tmp_dict_value_15 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_16 = const_int_neg_126;
        tmp_dict_key_16 = const_str_plain_minexp;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_16, tmp_dict_value_16 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_17 = const_int_pos_128;
        tmp_dict_key_17 = const_str_plain_maxexp;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_17, tmp_dict_value_17 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_18 = const_int_pos_23;
        tmp_dict_key_18 = const_str_plain_it;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_18, tmp_dict_value_18 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_19 = const_int_pos_8;
        tmp_dict_key_19 = const_str_plain_iexp;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_19, tmp_dict_value_19 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_20 = const_int_pos_2;
        tmp_dict_key_20 = const_str_plain_ibeta;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_20, tmp_dict_value_20 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_21 = const_int_pos_5;
        tmp_dict_key_21 = const_str_plain_irnd;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_21, tmp_dict_value_21 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_22 = const_int_0;
        tmp_dict_key_22 = const_str_plain_ngrd;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_22, tmp_dict_value_22 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_exp2 );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exp2 );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "exp2" );
            exception_tb = NULL;

            exception_lineno = 129;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_10 = tmp_mvar_value_9;
        CHECK_OBJECT( var_f32 );
        tmp_called_name_11 = var_f32;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 129;
        tmp_args_element_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, &PyTuple_GET_ITEM( const_tuple_int_neg_23_tuple, 0 ) );

        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 129;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_dict_value_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_dict_value_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 129;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_23 = const_str_plain_eps;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_23, tmp_dict_value_23 );
        Py_DECREF( tmp_dict_value_23 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_exp2 );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exp2 );
        }

        if ( tmp_mvar_value_10 == NULL )
        {
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "exp2" );
            exception_tb = NULL;

            exception_lineno = 130;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_12 = tmp_mvar_value_10;
        CHECK_OBJECT( var_f32 );
        tmp_called_name_13 = var_f32;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 130;
        tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, &PyTuple_GET_ITEM( const_tuple_int_neg_24_tuple, 0 ) );

        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 130;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 130;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_dict_value_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_dict_value_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 130;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_24 = const_str_plain_epsneg;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_24, tmp_dict_value_24 );
        Py_DECREF( tmp_dict_value_24 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( var_f32 );
        tmp_called_name_14 = var_f32;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 131;
        tmp_dict_value_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, &PyTuple_GET_ITEM( const_tuple_float_3_4028234663852886e38_tuple, 0 ) );

        if ( tmp_dict_value_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 131;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_25 = const_str_plain_huge;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_25, tmp_dict_value_25 );
        Py_DECREF( tmp_dict_value_25 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_exp2 );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exp2 );
        }

        if ( tmp_mvar_value_11 == NULL )
        {
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "exp2" );
            exception_tb = NULL;

            exception_lineno = 132;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_15 = tmp_mvar_value_11;
        CHECK_OBJECT( var_f32 );
        tmp_called_name_16 = var_f32;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 132;
        tmp_args_element_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, &PyTuple_GET_ITEM( const_tuple_int_neg_126_tuple, 0 ) );

        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 132;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 132;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_dict_value_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
        }

        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_dict_value_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 132;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_26 = const_str_plain_tiny;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_26, tmp_dict_value_26 );
        Py_DECREF( tmp_dict_value_26 );
        assert( !(tmp_res != 0) );
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 119;
        tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        assert( var_float32_ma == NULL );
        var_float32_ma = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_name_17;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__register_type );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__register_type );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_register_type" );
            exception_tb = NULL;

            exception_lineno = 133;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_17 = tmp_mvar_value_12;
        CHECK_OBJECT( var_float32_ma );
        tmp_args_element_name_8 = var_float32_ma;
        tmp_args_element_name_9 = const_str_digest_eaaa9394d408576376e7108c86542536;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 133;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_17, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_2;
        CHECK_OBJECT( var_float32_ma );
        tmp_ass_subvalue_2 = var_float32_ma;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__float_ma );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__float_ma );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_float_ma" );
            exception_tb = NULL;

            exception_lineno = 134;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_2 = tmp_mvar_value_13;
        tmp_ass_subscript_2 = const_int_pos_32;
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_2, tmp_ass_subscript_2, 32, tmp_ass_subvalue_2 );
        if ( tmp_ass_subscript_res_2 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_14;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "ntypes" );
            exception_tb = NULL;

            exception_lineno = 137;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_14;
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_float64 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        assert( var_f64 == NULL );
        var_f64 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_18;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_3;
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
        PyObject *tmp_dict_key_38;
        PyObject *tmp_dict_value_38;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_19;
        PyObject *tmp_dict_key_39;
        PyObject *tmp_dict_value_39;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_MachArLike );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MachArLike );
        }

        if ( tmp_mvar_value_15 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "MachArLike" );
            exception_tb = NULL;

            exception_lineno = 140;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_18 = tmp_mvar_value_15;
        CHECK_OBJECT( var_f64 );
        tmp_tuple_element_3 = var_f64;
        tmp_args_name_3 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
        tmp_dict_value_27 = const_int_neg_52;
        tmp_dict_key_27 = const_str_plain_machep;
        tmp_kw_name_3 = _PyDict_NewPresized( 13 );
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_27, tmp_dict_value_27 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_28 = const_int_neg_53;
        tmp_dict_key_28 = const_str_plain_negep;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_28, tmp_dict_value_28 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_29 = const_int_neg_1022;
        tmp_dict_key_29 = const_str_plain_minexp;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_29, tmp_dict_value_29 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_30 = const_int_pos_1024;
        tmp_dict_key_30 = const_str_plain_maxexp;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_30, tmp_dict_value_30 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_31 = const_int_pos_52;
        tmp_dict_key_31 = const_str_plain_it;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_31, tmp_dict_value_31 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_32 = const_int_pos_11;
        tmp_dict_key_32 = const_str_plain_iexp;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_32, tmp_dict_value_32 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_33 = const_int_pos_2;
        tmp_dict_key_33 = const_str_plain_ibeta;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_33, tmp_dict_value_33 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_34 = const_int_pos_5;
        tmp_dict_key_34 = const_str_plain_irnd;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_34, tmp_dict_value_34 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_35 = const_int_0;
        tmp_dict_key_35 = const_str_plain_ngrd;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_35, tmp_dict_value_35 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_36 = const_float_2_220446049250313e_minus_16;
        tmp_dict_key_36 = const_str_plain_eps;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_36, tmp_dict_value_36 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_37 = const_float_1_1102230246251565e_minus_16;
        tmp_dict_key_37 = const_str_plain_epsneg;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_37, tmp_dict_value_37 );
        assert( !(tmp_res != 0) );
        tmp_left_name_1 = const_float_4_4942328371557893e307;
        CHECK_OBJECT( var_f64 );
        tmp_called_name_19 = var_f64;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 152;
        tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, &PyTuple_GET_ITEM( const_tuple_int_pos_4_tuple, 0 ) );

        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_3 );
            Py_DECREF( tmp_kw_name_3 );

            exception_lineno = 152;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_38 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_dict_value_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_3 );
            Py_DECREF( tmp_kw_name_3 );

            exception_lineno = 152;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_38 = const_str_plain_huge;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_38, tmp_dict_value_38 );
        Py_DECREF( tmp_dict_value_38 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_39 = const_float_2_2250738585072014e_minus_308;
        tmp_dict_key_39 = const_str_plain_tiny;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_39, tmp_dict_value_39 );
        assert( !(tmp_res != 0) );
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 140;
        tmp_assign_source_6 = CALL_FUNCTION( tmp_called_name_18, tmp_args_name_3, tmp_kw_name_3 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        assert( var_float64_ma == NULL );
        var_float64_ma = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_name_20;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__register_type );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__register_type );
        }

        if ( tmp_mvar_value_16 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_register_type" );
            exception_tb = NULL;

            exception_lineno = 154;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_20 = tmp_mvar_value_16;
        CHECK_OBJECT( var_float64_ma );
        tmp_args_element_name_10 = var_float64_ma;
        tmp_args_element_name_11 = const_str_digest_9d407aba079586ddc2565511c907906b;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 154;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_20, call_args );
        }

        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 154;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_ass_subscript_3;
        int tmp_ass_subscript_res_3;
        CHECK_OBJECT( var_float64_ma );
        tmp_ass_subvalue_3 = var_float64_ma;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__float_ma );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__float_ma );
        }

        if ( tmp_mvar_value_17 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_float_ma" );
            exception_tb = NULL;

            exception_lineno = 155;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_3 = tmp_mvar_value_17;
        tmp_ass_subscript_3 = const_int_pos_64;
        tmp_ass_subscript_res_3 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_3, tmp_ass_subscript_3, 64, tmp_ass_subvalue_3 );
        if ( tmp_ass_subscript_res_3 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_18;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
        }

        if ( tmp_mvar_value_18 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "ntypes" );
            exception_tb = NULL;

            exception_lineno = 158;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_18;
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_longdouble );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ld == NULL );
        var_ld = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_21;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_called_name_22;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_exp2 );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exp2 );
        }

        if ( tmp_mvar_value_19 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "exp2" );
            exception_tb = NULL;

            exception_lineno = 159;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_21 = tmp_mvar_value_19;
        CHECK_OBJECT( var_ld );
        tmp_called_name_22 = var_ld;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 159;
        tmp_args_element_name_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, &PyTuple_GET_ITEM( const_tuple_int_neg_113_tuple, 0 ) );

        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 159;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
        }

        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        assert( var_epsneg_f128 == NULL );
        var_epsneg_f128 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_23;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_called_name_24;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_exp2 );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exp2 );
        }

        if ( tmp_mvar_value_20 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "exp2" );
            exception_tb = NULL;

            exception_lineno = 160;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_23 = tmp_mvar_value_20;
        CHECK_OBJECT( var_ld );
        tmp_called_name_24 = var_ld;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 160;
        tmp_args_element_name_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, &PyTuple_GET_ITEM( const_tuple_int_neg_16382_tuple, 0 ) );

        if ( tmp_args_element_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 160;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
        }

        Py_DECREF( tmp_args_element_name_13 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        assert( var_tiny_f128 == NULL );
        var_tiny_f128 = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_25;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_kw_name_4;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_numeric );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numeric );
        }

        if ( tmp_mvar_value_21 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "numeric" );
            exception_tb = NULL;

            exception_lineno = 162;
            type_description_1 = "ooooNooooooooNooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_5 = tmp_mvar_value_21;
        tmp_called_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_errstate );
        if ( tmp_called_name_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;
            type_description_1 = "ooooNooooooooNooooo";
            goto try_except_handler_2;
        }
        tmp_kw_name_4 = PyDict_Copy( const_dict_8629c35bb486b0ff8446977b73ad0aff );
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 162;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_25, tmp_kw_name_4 );
        Py_DECREF( tmp_called_name_25 );
        Py_DECREF( tmp_kw_name_4 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;
            type_description_1 = "ooooNooooooooNooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__source == NULL );
        tmp_with_1__source = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_6 = tmp_with_1__source;
        tmp_assign_source_11 = LOOKUP_SPECIAL( tmp_source_name_6, const_str_plain___exit__ );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;
            type_description_1 = "ooooNooooooooNooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__exit == NULL );
        tmp_with_1__exit = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_26;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_7 = tmp_with_1__source;
        tmp_called_name_26 = LOOKUP_SPECIAL( tmp_source_name_7, const_str_plain___enter__ );
        if ( tmp_called_name_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;
            type_description_1 = "ooooNooooooooNooooo";
            goto try_except_handler_2;
        }
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 162;
        tmp_assign_source_12 = CALL_FUNCTION_NO_ARGS( tmp_called_name_26 );
        Py_DECREF( tmp_called_name_26 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;
            type_description_1 = "ooooNooooooooNooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__enter == NULL );
        tmp_with_1__enter = tmp_assign_source_12;
    }
    {
        nuitka_bool tmp_assign_source_13;
        tmp_assign_source_13 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_13;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_called_name_27;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_called_name_28;
        CHECK_OBJECT( var_ld );
        tmp_called_name_27 = var_ld;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 163;
        tmp_left_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_27, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "ooooNooooooooNooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_epsneg_f128 );
        tmp_right_name_2 = var_epsneg_f128;
        tmp_left_name_3 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "ooooNooooooooNooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_tiny_f128 );
        tmp_right_name_3 = var_tiny_f128;
        tmp_left_name_2 = BINARY_OPERATION_TRUEDIV( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "ooooNooooooooNooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_ld );
        tmp_called_name_28 = var_ld;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 163;
        tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_28, &PyTuple_GET_ITEM( const_tuple_int_pos_4_tuple, 0 ) );

        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 163;
            type_description_1 = "ooooNooooooooNooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_14 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "ooooNooooooooNooooo";
            goto try_except_handler_4;
        }
        assert( var_huge_f128 == NULL );
        var_huge_f128 = tmp_assign_source_14;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_25fde72f920b5890024cd4495449c447 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_25fde72f920b5890024cd4495449c447, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_25fde72f920b5890024cd4495449c447, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;
            type_description_1 = "ooooNooooooooNooooo";
            goto try_except_handler_3;
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
            nuitka_bool tmp_assign_source_15;
            tmp_assign_source_15 = NUITKA_BOOL_FALSE;
            tmp_with_1__indicator = tmp_assign_source_15;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_29;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_args_element_name_16;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_29 = tmp_with_1__exit;
            tmp_args_element_name_14 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_15 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_16 = EXC_TRACEBACK(PyThreadState_GET());
            frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 162;
            {
                PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_29, call_args );
            }

            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 162;
                type_description_1 = "ooooNooooooooNooooo";
                goto try_except_handler_3;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 162;
                type_description_1 = "ooooNooooooooNooooo";
                goto try_except_handler_3;
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
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 162;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_25fde72f920b5890024cd4495449c447->m_frame) frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooNooooooooNooooo";
            goto try_except_handler_3;
            branch_no_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 162;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_25fde72f920b5890024cd4495449c447->m_frame) frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooNooooooooNooooo";
        goto try_except_handler_3;
        branch_end_1:;
    }
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_5__register_known_types );
    return NULL;
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

    {
        nuitka_bool tmp_condition_result_3;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_2 = tmp_with_1__indicator;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_30;
            PyObject *tmp_call_result_4;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_30 = tmp_with_1__exit;
            frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 162;
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_30, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_2 );
                Py_XDECREF( exception_keeper_value_2 );
                Py_XDECREF( exception_keeper_tb_2 );

                exception_lineno = 162;
                type_description_1 = "ooooNooooooooNooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        branch_no_3:;
    }
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    {
        nuitka_bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_with_1__indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_31;
            PyObject *tmp_call_result_5;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_31 = tmp_with_1__exit;
            frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 162;
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_31, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 162;
                type_description_1 = "ooooNooooooooNooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_5 );
        }
        branch_no_4:;
    }
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

    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_32;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kw_name_5;
        PyObject *tmp_dict_key_40;
        PyObject *tmp_dict_value_40;
        PyObject *tmp_dict_key_41;
        PyObject *tmp_dict_value_41;
        PyObject *tmp_dict_key_42;
        PyObject *tmp_dict_value_42;
        PyObject *tmp_dict_key_43;
        PyObject *tmp_dict_value_43;
        PyObject *tmp_dict_key_44;
        PyObject *tmp_dict_value_44;
        PyObject *tmp_dict_key_45;
        PyObject *tmp_dict_value_45;
        PyObject *tmp_dict_key_46;
        PyObject *tmp_dict_value_46;
        PyObject *tmp_dict_key_47;
        PyObject *tmp_dict_value_47;
        PyObject *tmp_dict_key_48;
        PyObject *tmp_dict_value_48;
        PyObject *tmp_dict_key_49;
        PyObject *tmp_dict_value_49;
        PyObject *tmp_called_name_33;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_called_name_34;
        PyObject *tmp_dict_key_50;
        PyObject *tmp_dict_value_50;
        PyObject *tmp_dict_key_51;
        PyObject *tmp_dict_value_51;
        PyObject *tmp_dict_key_52;
        PyObject *tmp_dict_value_52;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_MachArLike );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MachArLike );
        }

        if ( tmp_mvar_value_22 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "MachArLike" );
            exception_tb = NULL;

            exception_lineno = 164;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_32 = tmp_mvar_value_22;
        CHECK_OBJECT( var_ld );
        tmp_tuple_element_4 = var_ld;
        tmp_args_name_4 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_4 );
        tmp_dict_value_40 = const_int_neg_112;
        tmp_dict_key_40 = const_str_plain_machep;
        tmp_kw_name_5 = _PyDict_NewPresized( 13 );
        tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_40, tmp_dict_value_40 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_41 = const_int_neg_113;
        tmp_dict_key_41 = const_str_plain_negep;
        tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_41, tmp_dict_value_41 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_42 = const_int_neg_16382;
        tmp_dict_key_42 = const_str_plain_minexp;
        tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_42, tmp_dict_value_42 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_43 = const_int_pos_16384;
        tmp_dict_key_43 = const_str_plain_maxexp;
        tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_43, tmp_dict_value_43 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_44 = const_int_pos_112;
        tmp_dict_key_44 = const_str_plain_it;
        tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_44, tmp_dict_value_44 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_45 = const_int_pos_15;
        tmp_dict_key_45 = const_str_plain_iexp;
        tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_45, tmp_dict_value_45 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_46 = const_int_pos_2;
        tmp_dict_key_46 = const_str_plain_ibeta;
        tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_46, tmp_dict_value_46 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_47 = const_int_pos_5;
        tmp_dict_key_47 = const_str_plain_irnd;
        tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_47, tmp_dict_value_47 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_48 = const_int_0;
        tmp_dict_key_48 = const_str_plain_ngrd;
        tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_48, tmp_dict_value_48 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_exp2 );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exp2 );
        }

        if ( tmp_mvar_value_23 == NULL )
        {
            Py_DECREF( tmp_args_name_4 );
            Py_DECREF( tmp_kw_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "exp2" );
            exception_tb = NULL;

            exception_lineno = 174;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_33 = tmp_mvar_value_23;
        CHECK_OBJECT( var_ld );
        tmp_called_name_34 = var_ld;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 174;
        tmp_args_element_name_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_34, &PyTuple_GET_ITEM( const_tuple_int_neg_112_tuple, 0 ) );

        if ( tmp_args_element_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_4 );
            Py_DECREF( tmp_kw_name_5 );

            exception_lineno = 174;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 174;
        {
            PyObject *call_args[] = { tmp_args_element_name_17 };
            tmp_dict_value_49 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_33, call_args );
        }

        Py_DECREF( tmp_args_element_name_17 );
        if ( tmp_dict_value_49 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_4 );
            Py_DECREF( tmp_kw_name_5 );

            exception_lineno = 174;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_49 = const_str_plain_eps;
        tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_49, tmp_dict_value_49 );
        Py_DECREF( tmp_dict_value_49 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( var_epsneg_f128 );
        tmp_dict_value_50 = var_epsneg_f128;
        tmp_dict_key_50 = const_str_plain_epsneg;
        tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_50, tmp_dict_value_50 );
        assert( !(tmp_res != 0) );
        if ( var_huge_f128 == NULL )
        {
            Py_DECREF( tmp_args_name_4 );
            Py_DECREF( tmp_kw_name_5 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "huge_f128" );
            exception_tb = NULL;

            exception_lineno = 176;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_51 = var_huge_f128;
        tmp_dict_key_51 = const_str_plain_huge;
        tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_51, tmp_dict_value_51 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( var_tiny_f128 );
        tmp_dict_value_52 = var_tiny_f128;
        tmp_dict_key_52 = const_str_plain_tiny;
        tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_52, tmp_dict_value_52 );
        assert( !(tmp_res != 0) );
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 164;
        tmp_assign_source_16 = CALL_FUNCTION( tmp_called_name_32, tmp_args_name_4, tmp_kw_name_5 );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_5 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        assert( var_float128_ma == NULL );
        var_float128_ma = tmp_assign_source_16;
    }
    {
        PyObject *tmp_called_name_35;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__register_type );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__register_type );
        }

        if ( tmp_mvar_value_24 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_register_type" );
            exception_tb = NULL;

            exception_lineno = 179;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_35 = tmp_mvar_value_24;
        CHECK_OBJECT( var_float128_ma );
        tmp_args_element_name_18 = var_float128_ma;
        tmp_args_element_name_19 = const_str_digest_8b386aa245a595a957b1bc2ae03f1a45;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 179;
        {
            PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19 };
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_35, call_args );
        }

        if ( tmp_call_result_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_6 );
    }
    {
        PyObject *tmp_called_name_36;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_args_element_name_21;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__register_type );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__register_type );
        }

        if ( tmp_mvar_value_25 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_register_type" );
            exception_tb = NULL;

            exception_lineno = 181;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_36 = tmp_mvar_value_25;
        CHECK_OBJECT( var_float128_ma );
        tmp_args_element_name_20 = var_float128_ma;
        tmp_args_element_name_21 = const_str_digest_8b386aa245a595a957b1bc2ae03f1a45;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 181;
        {
            PyObject *call_args[] = { tmp_args_element_name_20, tmp_args_element_name_21 };
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_36, call_args );
        }

        if ( tmp_call_result_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_7 );
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_mvar_value_26;
        PyObject *tmp_ass_subscript_4;
        int tmp_ass_subscript_res_4;
        CHECK_OBJECT( var_float128_ma );
        tmp_ass_subvalue_4 = var_float128_ma;
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__float_ma );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__float_ma );
        }

        if ( tmp_mvar_value_26 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_float_ma" );
            exception_tb = NULL;

            exception_lineno = 183;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_4 = tmp_mvar_value_26;
        tmp_ass_subscript_4 = const_int_pos_128;
        tmp_ass_subscript_res_4 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_4, tmp_ass_subscript_4, 128, tmp_ass_subvalue_4 );
        if ( tmp_ass_subscript_res_4 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_37;
        PyObject *tmp_mvar_value_27;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_called_name_38;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_exp2 );

        if (unlikely( tmp_mvar_value_27 == NULL ))
        {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exp2 );
        }

        if ( tmp_mvar_value_27 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "exp2" );
            exception_tb = NULL;

            exception_lineno = 186;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_37 = tmp_mvar_value_27;
        CHECK_OBJECT( var_ld );
        tmp_called_name_38 = var_ld;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 186;
        tmp_args_element_name_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_38, &PyTuple_GET_ITEM( const_tuple_int_neg_64_tuple, 0 ) );

        if ( tmp_args_element_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 186;
        {
            PyObject *call_args[] = { tmp_args_element_name_22 };
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_37, call_args );
        }

        Py_DECREF( tmp_args_element_name_22 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        assert( var_epsneg_f80 == NULL );
        var_epsneg_f80 = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_39;
        PyObject *tmp_mvar_value_28;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_called_name_40;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_exp2 );

        if (unlikely( tmp_mvar_value_28 == NULL ))
        {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exp2 );
        }

        if ( tmp_mvar_value_28 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "exp2" );
            exception_tb = NULL;

            exception_lineno = 187;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_39 = tmp_mvar_value_28;
        CHECK_OBJECT( var_ld );
        tmp_called_name_40 = var_ld;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 187;
        tmp_args_element_name_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_40, &PyTuple_GET_ITEM( const_tuple_int_neg_16382_tuple, 0 ) );

        if ( tmp_args_element_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 187;
        {
            PyObject *call_args[] = { tmp_args_element_name_23 };
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_39, call_args );
        }

        Py_DECREF( tmp_args_element_name_23 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        assert( var_tiny_f80 == NULL );
        var_tiny_f80 = tmp_assign_source_18;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_41;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_29;
        PyObject *tmp_kw_name_6;
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_numeric );

        if (unlikely( tmp_mvar_value_29 == NULL ))
        {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numeric );
        }

        if ( tmp_mvar_value_29 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "numeric" );
            exception_tb = NULL;

            exception_lineno = 189;
            type_description_1 = "ooooNooooooooNooooo";
            goto try_except_handler_5;
        }

        tmp_source_name_8 = tmp_mvar_value_29;
        tmp_called_name_41 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_errstate );
        if ( tmp_called_name_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "ooooNooooooooNooooo";
            goto try_except_handler_5;
        }
        tmp_kw_name_6 = PyDict_Copy( const_dict_8629c35bb486b0ff8446977b73ad0aff );
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 189;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_41, tmp_kw_name_6 );
        Py_DECREF( tmp_called_name_41 );
        Py_DECREF( tmp_kw_name_6 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "ooooNooooooooNooooo";
            goto try_except_handler_5;
        }
        assert( tmp_with_2__source == NULL );
        tmp_with_2__source = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT( tmp_with_2__source );
        tmp_source_name_9 = tmp_with_2__source;
        tmp_assign_source_20 = LOOKUP_SPECIAL( tmp_source_name_9, const_str_plain___exit__ );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "ooooNooooooooNooooo";
            goto try_except_handler_5;
        }
        assert( tmp_with_2__exit == NULL );
        tmp_with_2__exit = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_42;
        PyObject *tmp_source_name_10;
        CHECK_OBJECT( tmp_with_2__source );
        tmp_source_name_10 = tmp_with_2__source;
        tmp_called_name_42 = LOOKUP_SPECIAL( tmp_source_name_10, const_str_plain___enter__ );
        if ( tmp_called_name_42 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "ooooNooooooooNooooo";
            goto try_except_handler_5;
        }
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 189;
        tmp_assign_source_21 = CALL_FUNCTION_NO_ARGS( tmp_called_name_42 );
        Py_DECREF( tmp_called_name_42 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "ooooNooooooooNooooo";
            goto try_except_handler_5;
        }
        assert( tmp_with_2__enter == NULL );
        tmp_with_2__enter = tmp_assign_source_21;
    }
    {
        nuitka_bool tmp_assign_source_22;
        tmp_assign_source_22 = NUITKA_BOOL_TRUE;
        tmp_with_2__indicator = tmp_assign_source_22;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_called_name_43;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        PyObject *tmp_right_name_7;
        PyObject *tmp_called_name_44;
        CHECK_OBJECT( var_ld );
        tmp_called_name_43 = var_ld;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 190;
        tmp_left_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_43, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 190;
            type_description_1 = "ooooNooooooooNooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT( var_epsneg_f80 );
        tmp_right_name_5 = var_epsneg_f80;
        tmp_left_name_6 = BINARY_OPERATION_SUB( tmp_left_name_7, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_7 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 190;
            type_description_1 = "ooooNooooooooNooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT( var_tiny_f80 );
        tmp_right_name_6 = var_tiny_f80;
        tmp_left_name_5 = BINARY_OPERATION_TRUEDIV( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_6 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 190;
            type_description_1 = "ooooNooooooooNooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT( var_ld );
        tmp_called_name_44 = var_ld;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 190;
        tmp_right_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_44, &PyTuple_GET_ITEM( const_tuple_int_pos_4_tuple, 0 ) );

        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 190;
            type_description_1 = "ooooNooooooooNooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_23 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_5 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 190;
            type_description_1 = "ooooNooooooooNooooo";
            goto try_except_handler_7;
        }
        assert( var_huge_f80 == NULL );
        var_huge_f80 = tmp_assign_source_23;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_25fde72f920b5890024cd4495449c447 );
    if ( exception_keeper_tb_4 == NULL )
    {
        exception_keeper_tb_4 = MAKE_TRACEBACK( frame_25fde72f920b5890024cd4495449c447, exception_keeper_lineno_4 );
    }
    else if ( exception_keeper_lineno_4 != 0 )
    {
        exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, frame_25fde72f920b5890024cd4495449c447, exception_keeper_lineno_4 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_4 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "ooooNooooooooNooooo";
            goto try_except_handler_6;
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
            nuitka_bool tmp_assign_source_24;
            tmp_assign_source_24 = NUITKA_BOOL_FALSE;
            tmp_with_2__indicator = tmp_assign_source_24;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_called_name_45;
            PyObject *tmp_args_element_name_24;
            PyObject *tmp_args_element_name_25;
            PyObject *tmp_args_element_name_26;
            CHECK_OBJECT( tmp_with_2__exit );
            tmp_called_name_45 = tmp_with_2__exit;
            tmp_args_element_name_24 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_25 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_26 = EXC_TRACEBACK(PyThreadState_GET());
            frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 189;
            {
                PyObject *call_args[] = { tmp_args_element_name_24, tmp_args_element_name_25, tmp_args_element_name_26 };
                tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_45, call_args );
            }

            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 189;
                type_description_1 = "ooooNooooooooNooooo";
                goto try_except_handler_6;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 189;
                type_description_1 = "ooooNooooooooNooooo";
                goto try_except_handler_6;
            }
            tmp_condition_result_6 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_6;
            }
            else
            {
                goto branch_no_6;
            }
            branch_yes_6:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 189;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_25fde72f920b5890024cd4495449c447->m_frame) frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooNooooooooNooooo";
            goto try_except_handler_6;
            branch_no_6:;
        }
        goto branch_end_5;
        branch_no_5:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 189;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_25fde72f920b5890024cd4495449c447->m_frame) frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooNooooooooNooooo";
        goto try_except_handler_6;
        branch_end_5:;
    }
    goto try_end_4;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_5__register_known_types );
    return NULL;
    // End of try:
    try_end_4:;
    goto try_end_5;
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

    {
        nuitka_bool tmp_condition_result_7;
        nuitka_bool tmp_compexpr_left_5;
        nuitka_bool tmp_compexpr_right_5;
        assert( tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_5 = tmp_with_2__indicator;
        tmp_compexpr_right_5 = NUITKA_BOOL_TRUE;
        tmp_condition_result_7 = ( tmp_compexpr_left_5 == tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_46;
            PyObject *tmp_call_result_8;
            CHECK_OBJECT( tmp_with_2__exit );
            tmp_called_name_46 = tmp_with_2__exit;
            frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 189;
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_46, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_5 );
                Py_XDECREF( exception_keeper_value_5 );
                Py_XDECREF( exception_keeper_tb_5 );

                exception_lineno = 189;
                type_description_1 = "ooooNooooooooNooooo";
                goto try_except_handler_5;
            }
            Py_DECREF( tmp_call_result_8 );
        }
        branch_no_7:;
    }
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_5;
    // End of try:
    try_end_5:;
    {
        nuitka_bool tmp_condition_result_8;
        nuitka_bool tmp_compexpr_left_6;
        nuitka_bool tmp_compexpr_right_6;
        assert( tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_6 = tmp_with_2__indicator;
        tmp_compexpr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_8 = ( tmp_compexpr_left_6 == tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_47;
            PyObject *tmp_call_result_9;
            CHECK_OBJECT( tmp_with_2__exit );
            tmp_called_name_47 = tmp_with_2__exit;
            frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 189;
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_47, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 189;
                type_description_1 = "ooooNooooooooNooooo";
                goto try_except_handler_5;
            }
            Py_DECREF( tmp_call_result_9 );
        }
        branch_no_8:;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_with_2__source );
    tmp_with_2__source = NULL;

    Py_XDECREF( tmp_with_2__enter );
    tmp_with_2__enter = NULL;

    Py_XDECREF( tmp_with_2__exit );
    tmp_with_2__exit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_with_2__source );
    Py_DECREF( tmp_with_2__source );
    tmp_with_2__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_2__enter );
    Py_DECREF( tmp_with_2__enter );
    tmp_with_2__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_2__exit );
    Py_DECREF( tmp_with_2__exit );
    tmp_with_2__exit = NULL;

    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_name_48;
        PyObject *tmp_mvar_value_30;
        PyObject *tmp_args_name_5;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kw_name_7;
        PyObject *tmp_dict_key_53;
        PyObject *tmp_dict_value_53;
        PyObject *tmp_dict_key_54;
        PyObject *tmp_dict_value_54;
        PyObject *tmp_dict_key_55;
        PyObject *tmp_dict_value_55;
        PyObject *tmp_dict_key_56;
        PyObject *tmp_dict_value_56;
        PyObject *tmp_dict_key_57;
        PyObject *tmp_dict_value_57;
        PyObject *tmp_dict_key_58;
        PyObject *tmp_dict_value_58;
        PyObject *tmp_dict_key_59;
        PyObject *tmp_dict_value_59;
        PyObject *tmp_dict_key_60;
        PyObject *tmp_dict_value_60;
        PyObject *tmp_dict_key_61;
        PyObject *tmp_dict_value_61;
        PyObject *tmp_dict_key_62;
        PyObject *tmp_dict_value_62;
        PyObject *tmp_called_name_49;
        PyObject *tmp_mvar_value_31;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_called_name_50;
        PyObject *tmp_dict_key_63;
        PyObject *tmp_dict_value_63;
        PyObject *tmp_dict_key_64;
        PyObject *tmp_dict_value_64;
        PyObject *tmp_dict_key_65;
        PyObject *tmp_dict_value_65;
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_MachArLike );

        if (unlikely( tmp_mvar_value_30 == NULL ))
        {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MachArLike );
        }

        if ( tmp_mvar_value_30 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "MachArLike" );
            exception_tb = NULL;

            exception_lineno = 191;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_48 = tmp_mvar_value_30;
        CHECK_OBJECT( var_ld );
        tmp_tuple_element_5 = var_ld;
        tmp_args_name_5 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_5 );
        tmp_dict_value_53 = const_int_neg_63;
        tmp_dict_key_53 = const_str_plain_machep;
        tmp_kw_name_7 = _PyDict_NewPresized( 13 );
        tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_53, tmp_dict_value_53 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_54 = const_int_neg_64;
        tmp_dict_key_54 = const_str_plain_negep;
        tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_54, tmp_dict_value_54 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_55 = const_int_neg_16382;
        tmp_dict_key_55 = const_str_plain_minexp;
        tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_55, tmp_dict_value_55 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_56 = const_int_pos_16384;
        tmp_dict_key_56 = const_str_plain_maxexp;
        tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_56, tmp_dict_value_56 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_57 = const_int_pos_63;
        tmp_dict_key_57 = const_str_plain_it;
        tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_57, tmp_dict_value_57 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_58 = const_int_pos_15;
        tmp_dict_key_58 = const_str_plain_iexp;
        tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_58, tmp_dict_value_58 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_59 = const_int_pos_2;
        tmp_dict_key_59 = const_str_plain_ibeta;
        tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_59, tmp_dict_value_59 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_60 = const_int_pos_5;
        tmp_dict_key_60 = const_str_plain_irnd;
        tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_60, tmp_dict_value_60 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_61 = const_int_0;
        tmp_dict_key_61 = const_str_plain_ngrd;
        tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_61, tmp_dict_value_61 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_exp2 );

        if (unlikely( tmp_mvar_value_31 == NULL ))
        {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exp2 );
        }

        if ( tmp_mvar_value_31 == NULL )
        {
            Py_DECREF( tmp_args_name_5 );
            Py_DECREF( tmp_kw_name_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "exp2" );
            exception_tb = NULL;

            exception_lineno = 201;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_49 = tmp_mvar_value_31;
        CHECK_OBJECT( var_ld );
        tmp_called_name_50 = var_ld;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 201;
        tmp_args_element_name_27 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_50, &PyTuple_GET_ITEM( const_tuple_int_neg_63_tuple, 0 ) );

        if ( tmp_args_element_name_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_5 );
            Py_DECREF( tmp_kw_name_7 );

            exception_lineno = 201;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 201;
        {
            PyObject *call_args[] = { tmp_args_element_name_27 };
            tmp_dict_value_62 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_49, call_args );
        }

        Py_DECREF( tmp_args_element_name_27 );
        if ( tmp_dict_value_62 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_5 );
            Py_DECREF( tmp_kw_name_7 );

            exception_lineno = 201;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_62 = const_str_plain_eps;
        tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_62, tmp_dict_value_62 );
        Py_DECREF( tmp_dict_value_62 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( var_epsneg_f80 );
        tmp_dict_value_63 = var_epsneg_f80;
        tmp_dict_key_63 = const_str_plain_epsneg;
        tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_63, tmp_dict_value_63 );
        assert( !(tmp_res != 0) );
        if ( var_huge_f80 == NULL )
        {
            Py_DECREF( tmp_args_name_5 );
            Py_DECREF( tmp_kw_name_7 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "huge_f80" );
            exception_tb = NULL;

            exception_lineno = 203;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_64 = var_huge_f80;
        tmp_dict_key_64 = const_str_plain_huge;
        tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_64, tmp_dict_value_64 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( var_tiny_f80 );
        tmp_dict_value_65 = var_tiny_f80;
        tmp_dict_key_65 = const_str_plain_tiny;
        tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_65, tmp_dict_value_65 );
        assert( !(tmp_res != 0) );
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 191;
        tmp_assign_source_25 = CALL_FUNCTION( tmp_called_name_48, tmp_args_name_5, tmp_kw_name_7 );
        Py_DECREF( tmp_args_name_5 );
        Py_DECREF( tmp_kw_name_7 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 191;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        assert( var_float80_ma == NULL );
        var_float80_ma = tmp_assign_source_25;
    }
    {
        PyObject *tmp_called_name_51;
        PyObject *tmp_mvar_value_32;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_args_element_name_29;
        tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__register_type );

        if (unlikely( tmp_mvar_value_32 == NULL ))
        {
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__register_type );
        }

        if ( tmp_mvar_value_32 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_register_type" );
            exception_tb = NULL;

            exception_lineno = 206;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_51 = tmp_mvar_value_32;
        CHECK_OBJECT( var_float80_ma );
        tmp_args_element_name_28 = var_float80_ma;
        tmp_args_element_name_29 = const_str_digest_f6e50f1e539dbc1212fdc62e9a8dbcb0;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 206;
        {
            PyObject *call_args[] = { tmp_args_element_name_28, tmp_args_element_name_29 };
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_51, call_args );
        }

        if ( tmp_call_result_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_10 );
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_mvar_value_33;
        PyObject *tmp_ass_subscript_5;
        int tmp_ass_subscript_res_5;
        CHECK_OBJECT( var_float80_ma );
        tmp_ass_subvalue_5 = var_float80_ma;
        tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__float_ma );

        if (unlikely( tmp_mvar_value_33 == NULL ))
        {
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__float_ma );
        }

        if ( tmp_mvar_value_33 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_float_ma" );
            exception_tb = NULL;

            exception_lineno = 207;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_5 = tmp_mvar_value_33;
        tmp_ass_subscript_5 = const_int_pos_80;
        tmp_ass_subscript_res_5 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_5, tmp_ass_subscript_5, 80, tmp_ass_subvalue_5 );
        if ( tmp_ass_subscript_res_5 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_26;
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_34;
        PyObject *tmp_attribute_name_1;
        PyObject *tmp_called_name_52;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_35;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_called_name_53;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_mvar_value_36;
        PyObject *tmp_args_element_name_32;
        PyObject *tmp_called_name_54;
        PyObject *tmp_source_name_13;
        tmp_mvar_value_34 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_umath );

        if (unlikely( tmp_mvar_value_34 == NULL ))
        {
            tmp_mvar_value_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umath );
        }

        if ( tmp_mvar_value_34 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "umath" );
            exception_tb = NULL;

            exception_lineno = 214;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_11 = tmp_mvar_value_34;
        tmp_attribute_name_1 = const_str_plain_nextafter;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_11, tmp_attribute_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 214;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_mvar_value_35 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_umath );

        if (unlikely( tmp_mvar_value_35 == NULL ))
        {
            tmp_mvar_value_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umath );
        }

        if ( tmp_mvar_value_35 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "umath" );
            exception_tb = NULL;

            exception_lineno = 213;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_12 = tmp_mvar_value_35;
        tmp_called_name_52 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_nextafter );
        if ( tmp_called_name_52 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_ld );
        tmp_called_name_53 = var_ld;
        tmp_mvar_value_36 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_inf );

        if (unlikely( tmp_mvar_value_36 == NULL ))
        {
            tmp_mvar_value_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inf );
        }

        if ( tmp_mvar_value_36 == NULL )
        {
            Py_DECREF( tmp_called_name_52 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "inf" );
            exception_tb = NULL;

            exception_lineno = 213;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_31 = tmp_mvar_value_36;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = { tmp_args_element_name_31 };
            tmp_args_element_name_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_53, call_args );
        }

        if ( tmp_args_element_name_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_52 );

            exception_lineno = 213;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_ld );
        tmp_called_name_54 = var_ld;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 213;
        tmp_args_element_name_32 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_54, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

        if ( tmp_args_element_name_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_52 );
            Py_DECREF( tmp_args_element_name_30 );

            exception_lineno = 213;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = { tmp_args_element_name_30, tmp_args_element_name_32 };
            tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_52, call_args );
        }

        Py_DECREF( tmp_called_name_52 );
        Py_DECREF( tmp_args_element_name_30 );
        Py_DECREF( tmp_args_element_name_32 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( var_float64_ma );
        tmp_source_name_13 = var_float64_ma;
        tmp_assign_source_26 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_huge );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert( var_huge_dd == NULL );
        var_huge_dd = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_name_55;
        PyObject *tmp_mvar_value_37;
        PyObject *tmp_args_name_6;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kw_name_8;
        PyObject *tmp_dict_key_66;
        PyObject *tmp_dict_value_66;
        PyObject *tmp_dict_key_67;
        PyObject *tmp_dict_value_67;
        PyObject *tmp_dict_key_68;
        PyObject *tmp_dict_value_68;
        PyObject *tmp_dict_key_69;
        PyObject *tmp_dict_value_69;
        PyObject *tmp_dict_key_70;
        PyObject *tmp_dict_value_70;
        PyObject *tmp_dict_key_71;
        PyObject *tmp_dict_value_71;
        PyObject *tmp_dict_key_72;
        PyObject *tmp_dict_value_72;
        PyObject *tmp_dict_key_73;
        PyObject *tmp_dict_value_73;
        PyObject *tmp_dict_key_74;
        PyObject *tmp_dict_value_74;
        PyObject *tmp_dict_key_75;
        PyObject *tmp_dict_value_75;
        PyObject *tmp_called_name_56;
        PyObject *tmp_mvar_value_38;
        PyObject *tmp_args_element_name_33;
        PyObject *tmp_called_name_57;
        PyObject *tmp_dict_key_76;
        PyObject *tmp_dict_value_76;
        PyObject *tmp_called_name_58;
        PyObject *tmp_mvar_value_39;
        PyObject *tmp_args_element_name_34;
        PyObject *tmp_called_name_59;
        PyObject *tmp_dict_key_77;
        PyObject *tmp_dict_value_77;
        PyObject *tmp_dict_key_78;
        PyObject *tmp_dict_value_78;
        PyObject *tmp_called_name_60;
        PyObject *tmp_mvar_value_40;
        PyObject *tmp_args_element_name_35;
        PyObject *tmp_called_name_61;
        tmp_mvar_value_37 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_MachArLike );

        if (unlikely( tmp_mvar_value_37 == NULL ))
        {
            tmp_mvar_value_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MachArLike );
        }

        if ( tmp_mvar_value_37 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "MachArLike" );
            exception_tb = NULL;

            exception_lineno = 216;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_55 = tmp_mvar_value_37;
        CHECK_OBJECT( var_ld );
        tmp_tuple_element_6 = var_ld;
        tmp_args_name_6 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_6 );
        tmp_dict_value_66 = const_int_neg_105;
        tmp_dict_key_66 = const_str_plain_machep;
        tmp_kw_name_8 = _PyDict_NewPresized( 13 );
        tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_66, tmp_dict_value_66 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_67 = const_int_neg_106;
        tmp_dict_key_67 = const_str_plain_negep;
        tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_67, tmp_dict_value_67 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_68 = const_int_neg_1022;
        tmp_dict_key_68 = const_str_plain_minexp;
        tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_68, tmp_dict_value_68 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_69 = const_int_pos_1024;
        tmp_dict_key_69 = const_str_plain_maxexp;
        tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_69, tmp_dict_value_69 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_70 = const_int_pos_105;
        tmp_dict_key_70 = const_str_plain_it;
        tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_70, tmp_dict_value_70 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_71 = const_int_pos_11;
        tmp_dict_key_71 = const_str_plain_iexp;
        tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_71, tmp_dict_value_71 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_72 = const_int_pos_2;
        tmp_dict_key_72 = const_str_plain_ibeta;
        tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_72, tmp_dict_value_72 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_73 = const_int_pos_5;
        tmp_dict_key_73 = const_str_plain_irnd;
        tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_73, tmp_dict_value_73 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_74 = const_int_0;
        tmp_dict_key_74 = const_str_plain_ngrd;
        tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_74, tmp_dict_value_74 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_38 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_exp2 );

        if (unlikely( tmp_mvar_value_38 == NULL ))
        {
            tmp_mvar_value_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exp2 );
        }

        if ( tmp_mvar_value_38 == NULL )
        {
            Py_DECREF( tmp_args_name_6 );
            Py_DECREF( tmp_kw_name_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "exp2" );
            exception_tb = NULL;

            exception_lineno = 226;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_56 = tmp_mvar_value_38;
        CHECK_OBJECT( var_ld );
        tmp_called_name_57 = var_ld;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 226;
        tmp_args_element_name_33 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_57, &PyTuple_GET_ITEM( const_tuple_int_neg_105_tuple, 0 ) );

        if ( tmp_args_element_name_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_6 );
            Py_DECREF( tmp_kw_name_8 );

            exception_lineno = 226;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 226;
        {
            PyObject *call_args[] = { tmp_args_element_name_33 };
            tmp_dict_value_75 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_56, call_args );
        }

        Py_DECREF( tmp_args_element_name_33 );
        if ( tmp_dict_value_75 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_6 );
            Py_DECREF( tmp_kw_name_8 );

            exception_lineno = 226;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_75 = const_str_plain_eps;
        tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_75, tmp_dict_value_75 );
        Py_DECREF( tmp_dict_value_75 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_39 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_exp2 );

        if (unlikely( tmp_mvar_value_39 == NULL ))
        {
            tmp_mvar_value_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exp2 );
        }

        if ( tmp_mvar_value_39 == NULL )
        {
            Py_DECREF( tmp_args_name_6 );
            Py_DECREF( tmp_kw_name_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "exp2" );
            exception_tb = NULL;

            exception_lineno = 227;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_58 = tmp_mvar_value_39;
        CHECK_OBJECT( var_ld );
        tmp_called_name_59 = var_ld;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 227;
        tmp_args_element_name_34 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_59, &PyTuple_GET_ITEM( const_tuple_int_neg_106_tuple, 0 ) );

        if ( tmp_args_element_name_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_6 );
            Py_DECREF( tmp_kw_name_8 );

            exception_lineno = 227;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 227;
        {
            PyObject *call_args[] = { tmp_args_element_name_34 };
            tmp_dict_value_76 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_58, call_args );
        }

        Py_DECREF( tmp_args_element_name_34 );
        if ( tmp_dict_value_76 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_6 );
            Py_DECREF( tmp_kw_name_8 );

            exception_lineno = 227;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_76 = const_str_plain_epsneg;
        tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_76, tmp_dict_value_76 );
        Py_DECREF( tmp_dict_value_76 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( var_huge_dd );
        tmp_dict_value_77 = var_huge_dd;
        tmp_dict_key_77 = const_str_plain_huge;
        tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_77, tmp_dict_value_77 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_40 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_exp2 );

        if (unlikely( tmp_mvar_value_40 == NULL ))
        {
            tmp_mvar_value_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exp2 );
        }

        if ( tmp_mvar_value_40 == NULL )
        {
            Py_DECREF( tmp_args_name_6 );
            Py_DECREF( tmp_kw_name_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "exp2" );
            exception_tb = NULL;

            exception_lineno = 229;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_60 = tmp_mvar_value_40;
        CHECK_OBJECT( var_ld );
        tmp_called_name_61 = var_ld;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 229;
        tmp_args_element_name_35 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_61, &PyTuple_GET_ITEM( const_tuple_int_neg_1022_tuple, 0 ) );

        if ( tmp_args_element_name_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_6 );
            Py_DECREF( tmp_kw_name_8 );

            exception_lineno = 229;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 229;
        {
            PyObject *call_args[] = { tmp_args_element_name_35 };
            tmp_dict_value_78 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_60, call_args );
        }

        Py_DECREF( tmp_args_element_name_35 );
        if ( tmp_dict_value_78 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_6 );
            Py_DECREF( tmp_kw_name_8 );

            exception_lineno = 229;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_78 = const_str_plain_tiny;
        tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_78, tmp_dict_value_78 );
        Py_DECREF( tmp_dict_value_78 );
        assert( !(tmp_res != 0) );
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 216;
        tmp_assign_source_27 = CALL_FUNCTION( tmp_called_name_55, tmp_args_name_6, tmp_kw_name_8 );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_kw_name_8 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        assert( var_float_dd_ma == NULL );
        var_float_dd_ma = tmp_assign_source_27;
    }
    {
        PyObject *tmp_called_name_62;
        PyObject *tmp_mvar_value_41;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_name_36;
        PyObject *tmp_args_element_name_37;
        tmp_mvar_value_41 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__register_type );

        if (unlikely( tmp_mvar_value_41 == NULL ))
        {
            tmp_mvar_value_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__register_type );
        }

        if ( tmp_mvar_value_41 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_register_type" );
            exception_tb = NULL;

            exception_lineno = 231;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_62 = tmp_mvar_value_41;
        CHECK_OBJECT( var_float_dd_ma );
        tmp_args_element_name_36 = var_float_dd_ma;
        tmp_args_element_name_37 = const_str_digest_c953c461ebc82ab94922f9cdf925a15f;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 231;
        {
            PyObject *call_args[] = { tmp_args_element_name_36, tmp_args_element_name_37 };
            tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_62, call_args );
        }

        if ( tmp_call_result_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 231;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_11 );
    }
    {
        PyObject *tmp_called_name_63;
        PyObject *tmp_mvar_value_42;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_name_38;
        PyObject *tmp_args_element_name_39;
        tmp_mvar_value_42 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__register_type );

        if (unlikely( tmp_mvar_value_42 == NULL ))
        {
            tmp_mvar_value_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__register_type );
        }

        if ( tmp_mvar_value_42 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_register_type" );
            exception_tb = NULL;

            exception_lineno = 234;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_63 = tmp_mvar_value_42;
        CHECK_OBJECT( var_float_dd_ma );
        tmp_args_element_name_38 = var_float_dd_ma;
        tmp_args_element_name_39 = const_str_digest_6da1ae55ed72337372d367d607b09d18;
        frame_25fde72f920b5890024cd4495449c447->m_frame.f_lineno = 234;
        {
            PyObject *call_args[] = { tmp_args_element_name_38, tmp_args_element_name_39 };
            tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_63, call_args );
        }

        if ( tmp_call_result_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 234;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_12 );
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_mvar_value_43;
        PyObject *tmp_ass_subscript_6;
        CHECK_OBJECT( var_float_dd_ma );
        tmp_ass_subvalue_6 = var_float_dd_ma;
        tmp_mvar_value_43 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__float_ma );

        if (unlikely( tmp_mvar_value_43 == NULL ))
        {
            tmp_mvar_value_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__float_ma );
        }

        if ( tmp_mvar_value_43 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_float_ma" );
            exception_tb = NULL;

            exception_lineno = 236;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_6 = tmp_mvar_value_43;
        tmp_ass_subscript_6 = const_str_plain_dd;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "ooooNooooooooNooooo";
            goto frame_exception_exit_1;
        }
    }

#if 1
    RESTORE_FRAME_EXCEPTION( frame_25fde72f920b5890024cd4495449c447 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_25fde72f920b5890024cd4495449c447 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_25fde72f920b5890024cd4495449c447, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_25fde72f920b5890024cd4495449c447->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_25fde72f920b5890024cd4495449c447, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_25fde72f920b5890024cd4495449c447,
        type_description_1,
        var_ld,
        var_float64_ma,
        var_tiny_f128,
        var_epsneg_f128,
        NULL,
        var_f32,
        var_tiny_f80,
        var_huge_f128,
        var_float128_ma,
        var_float16_ma,
        var_float_dd_ma,
        var_float80_ma,
        var_huge_f80,
        NULL,
        var_float32_ma,
        var_f64,
        var_f16,
        var_epsneg_f80,
        var_huge_dd
    );


    // Release cached frame.
    if ( frame_25fde72f920b5890024cd4495449c447 == cache_frame_25fde72f920b5890024cd4495449c447 )
    {
        Py_DECREF( frame_25fde72f920b5890024cd4495449c447 );
    }
    cache_frame_25fde72f920b5890024cd4495449c447 = NULL;

    assertFrameObject( frame_25fde72f920b5890024cd4495449c447 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_5__register_known_types );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_ld );
    Py_DECREF( var_ld );
    var_ld = NULL;

    CHECK_OBJECT( (PyObject *)var_float64_ma );
    Py_DECREF( var_float64_ma );
    var_float64_ma = NULL;

    CHECK_OBJECT( (PyObject *)var_tiny_f128 );
    Py_DECREF( var_tiny_f128 );
    var_tiny_f128 = NULL;

    CHECK_OBJECT( (PyObject *)var_epsneg_f128 );
    Py_DECREF( var_epsneg_f128 );
    var_epsneg_f128 = NULL;

    CHECK_OBJECT( (PyObject *)var_f32 );
    Py_DECREF( var_f32 );
    var_f32 = NULL;

    CHECK_OBJECT( (PyObject *)var_tiny_f80 );
    Py_DECREF( var_tiny_f80 );
    var_tiny_f80 = NULL;

    Py_XDECREF( var_huge_f128 );
    var_huge_f128 = NULL;

    CHECK_OBJECT( (PyObject *)var_float128_ma );
    Py_DECREF( var_float128_ma );
    var_float128_ma = NULL;

    CHECK_OBJECT( (PyObject *)var_float16_ma );
    Py_DECREF( var_float16_ma );
    var_float16_ma = NULL;

    CHECK_OBJECT( (PyObject *)var_float_dd_ma );
    Py_DECREF( var_float_dd_ma );
    var_float_dd_ma = NULL;

    CHECK_OBJECT( (PyObject *)var_float80_ma );
    Py_DECREF( var_float80_ma );
    var_float80_ma = NULL;

    Py_XDECREF( var_huge_f80 );
    var_huge_f80 = NULL;

    CHECK_OBJECT( (PyObject *)var_float32_ma );
    Py_DECREF( var_float32_ma );
    var_float32_ma = NULL;

    CHECK_OBJECT( (PyObject *)var_f64 );
    Py_DECREF( var_f64 );
    var_f64 = NULL;

    CHECK_OBJECT( (PyObject *)var_f16 );
    Py_DECREF( var_f16 );
    var_f16 = NULL;

    CHECK_OBJECT( (PyObject *)var_epsneg_f80 );
    Py_DECREF( var_epsneg_f80 );
    var_epsneg_f80 = NULL;

    CHECK_OBJECT( (PyObject *)var_huge_dd );
    Py_DECREF( var_huge_dd );
    var_huge_dd = NULL;

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

    Py_XDECREF( var_ld );
    var_ld = NULL;

    Py_XDECREF( var_float64_ma );
    var_float64_ma = NULL;

    Py_XDECREF( var_tiny_f128 );
    var_tiny_f128 = NULL;

    Py_XDECREF( var_epsneg_f128 );
    var_epsneg_f128 = NULL;

    Py_XDECREF( var_f32 );
    var_f32 = NULL;

    Py_XDECREF( var_tiny_f80 );
    var_tiny_f80 = NULL;

    Py_XDECREF( var_huge_f128 );
    var_huge_f128 = NULL;

    Py_XDECREF( var_float128_ma );
    var_float128_ma = NULL;

    Py_XDECREF( var_float16_ma );
    var_float16_ma = NULL;

    Py_XDECREF( var_float_dd_ma );
    var_float_dd_ma = NULL;

    Py_XDECREF( var_float80_ma );
    var_float80_ma = NULL;

    Py_XDECREF( var_huge_f80 );
    var_huge_f80 = NULL;

    Py_XDECREF( var_float32_ma );
    var_float32_ma = NULL;

    Py_XDECREF( var_f64 );
    var_f64 = NULL;

    Py_XDECREF( var_f16 );
    var_f16 = NULL;

    Py_XDECREF( var_epsneg_f80 );
    var_epsneg_f80 = NULL;

    Py_XDECREF( var_huge_dd );
    var_huge_dd = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_5__register_known_types );
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


static PyObject *impl_numpy$core$getlimits$$$function_6__get_machar( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ftype = python_pars[ 0 ];
    PyObject *var_params = NULL;
    PyObject *var_key = NULL;
    PyObject *var_ma_like = NULL;
    struct Nuitka_FrameObject *frame_d642aaa7e66139a185d2d61be24cec2a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d642aaa7e66139a185d2d61be24cec2a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d642aaa7e66139a185d2d61be24cec2a, codeobj_d642aaa7e66139a185d2d61be24cec2a, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d642aaa7e66139a185d2d61be24cec2a = cache_frame_d642aaa7e66139a185d2d61be24cec2a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d642aaa7e66139a185d2d61be24cec2a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d642aaa7e66139a185d2d61be24cec2a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__MACHAR_PARAMS );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__MACHAR_PARAMS );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_MACHAR_PARAMS" );
            exception_tb = NULL;

            exception_lineno = 262;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_ftype );
        tmp_args_element_name_1 = par_ftype;
        frame_d642aaa7e66139a185d2d61be24cec2a->m_frame.f_lineno = 262;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_params == NULL );
        var_params = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_params );
        tmp_compexpr_left_1 = var_params;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_operand_name_1;
            CHECK_OBJECT( par_ftype );
            tmp_operand_name_1 = par_ftype;
            tmp_make_exception_arg_1 = UNARY_OPERATION( PyObject_Repr, tmp_operand_name_1 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 264;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_d642aaa7e66139a185d2d61be24cec2a->m_frame.f_lineno = 264;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 264;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_name_1;
        CHECK_OBJECT( par_ftype );
        tmp_called_name_1 = par_ftype;
        frame_d642aaa7e66139a185d2d61be24cec2a->m_frame.f_lineno = 266;
        tmp_called_instance_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_6ccfcc9d5b330646d0167140367b220b_tuple, 0 ) );

        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 266;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d642aaa7e66139a185d2d61be24cec2a->m_frame.f_lineno = 266;
        tmp_called_instance_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_newbyteorder, &PyTuple_GET_ITEM( const_tuple_str_chr_60_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 266;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d642aaa7e66139a185d2d61be24cec2a->m_frame.f_lineno = 266;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_tobytes );
        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 266;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_key == NULL );
        var_key = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__KNOWN_TYPES );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__KNOWN_TYPES );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_KNOWN_TYPES" );
            exception_tb = NULL;

            exception_lineno = 267;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_2;
        CHECK_OBJECT( var_key );
        tmp_args_element_name_2 = var_key;
        frame_d642aaa7e66139a185d2d61be24cec2a->m_frame.f_lineno = 267;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_get, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 267;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_ma_like == NULL );
        var_ma_like = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT( var_ma_like );
        tmp_compexpr_left_2 = var_ma_like;
        tmp_compexpr_right_2 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_ftype );
        tmp_compexpr_left_3 = par_ftype;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "ntypes" );
            exception_tb = NULL;

            exception_lineno = 270;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_longdouble );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_3;
            Py_ssize_t tmp_sliceslicedel_index_lower_1;
            Py_ssize_t tmp_slice_index_upper_1;
            PyObject *tmp_slice_source_1;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__KNOWN_TYPES );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__KNOWN_TYPES );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_KNOWN_TYPES" );
                exception_tb = NULL;

                exception_lineno = 271;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_4;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 271;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_sliceslicedel_index_lower_1 = 0;
            tmp_slice_index_upper_1 = 10;
            CHECK_OBJECT( var_key );
            tmp_slice_source_1 = var_key;
            tmp_args_element_name_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 271;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_d642aaa7e66139a185d2d61be24cec2a->m_frame.f_lineno = 271;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 271;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_ma_like;
                assert( old != NULL );
                var_ma_like = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( var_ma_like );
        tmp_compexpr_left_4 = var_ma_like;
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_4 != tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        CHECK_OBJECT( var_ma_like );
        tmp_return_value = var_ma_like;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_3:;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_warnings );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "warnings" );
            exception_tb = NULL;

            exception_lineno = 275;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_5;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_warn );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 275;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_5 = const_str_digest_1c7a03bb335423a9f56b895c3fbc148d;
        CHECK_OBJECT( var_key );
        tmp_args_element_name_4 = var_key;
        CHECK_OBJECT( par_ftype );
        tmp_args_element_name_5 = par_ftype;
        frame_d642aaa7e66139a185d2d61be24cec2a->m_frame.f_lineno = 276;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_format, call_args );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 276;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_UserWarning );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UserWarning );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "UserWarning" );
            exception_tb = NULL;

            exception_lineno = 278;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_6;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_f154c9a58c9419d7e391901d7b7fe49e );
        frame_d642aaa7e66139a185d2d61be24cec2a->m_frame.f_lineno = 275;
        tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 275;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__discovered_machar );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__discovered_machar );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_discovered_machar" );
            exception_tb = NULL;

            exception_lineno = 279;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_7;
        CHECK_OBJECT( par_ftype );
        tmp_args_element_name_6 = par_ftype;
        frame_d642aaa7e66139a185d2d61be24cec2a->m_frame.f_lineno = 279;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 279;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d642aaa7e66139a185d2d61be24cec2a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d642aaa7e66139a185d2d61be24cec2a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d642aaa7e66139a185d2d61be24cec2a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d642aaa7e66139a185d2d61be24cec2a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d642aaa7e66139a185d2d61be24cec2a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d642aaa7e66139a185d2d61be24cec2a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d642aaa7e66139a185d2d61be24cec2a,
        type_description_1,
        par_ftype,
        var_params,
        var_key,
        var_ma_like
    );


    // Release cached frame.
    if ( frame_d642aaa7e66139a185d2d61be24cec2a == cache_frame_d642aaa7e66139a185d2d61be24cec2a )
    {
        Py_DECREF( frame_d642aaa7e66139a185d2d61be24cec2a );
    }
    cache_frame_d642aaa7e66139a185d2d61be24cec2a = NULL;

    assertFrameObject( frame_d642aaa7e66139a185d2d61be24cec2a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_6__get_machar );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ftype );
    Py_DECREF( par_ftype );
    par_ftype = NULL;

    CHECK_OBJECT( (PyObject *)var_params );
    Py_DECREF( var_params );
    var_params = NULL;

    CHECK_OBJECT( (PyObject *)var_key );
    Py_DECREF( var_key );
    var_key = NULL;

    CHECK_OBJECT( (PyObject *)var_ma_like );
    Py_DECREF( var_ma_like );
    var_ma_like = NULL;

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

    CHECK_OBJECT( (PyObject *)par_ftype );
    Py_DECREF( par_ftype );
    par_ftype = NULL;

    Py_XDECREF( var_params );
    var_params = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_ma_like );
    var_ma_like = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_6__get_machar );
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


static PyObject *impl_numpy$core$getlimits$$$function_7__discovered_machar( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_ftype = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *var_params = PyCell_EMPTY();
    struct Nuitka_FrameObject *frame_bd91339d295bfc92480ddd23ce3c8ba4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bd91339d295bfc92480ddd23ce3c8ba4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bd91339d295bfc92480ddd23ce3c8ba4, codeobj_bd91339d295bfc92480ddd23ce3c8ba4, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *) );
    frame_bd91339d295bfc92480ddd23ce3c8ba4 = cache_frame_bd91339d295bfc92480ddd23ce3c8ba4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bd91339d295bfc92480ddd23ce3c8ba4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bd91339d295bfc92480ddd23ce3c8ba4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__MACHAR_PARAMS );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__MACHAR_PARAMS );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_MACHAR_PARAMS" );
            exception_tb = NULL;

            exception_lineno = 285;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( PyCell_GET( par_ftype ) );
        tmp_subscript_name_1 = PyCell_GET( par_ftype );
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 285;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_params ) == NULL );
        PyCell_SET( var_params, tmp_assign_source_1 );

    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_MachAr );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MachAr );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "MachAr" );
            exception_tb = NULL;

            exception_lineno = 286;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        tmp_args_element_name_1 = MAKE_FUNCTION_numpy$core$getlimits$$$function_7__discovered_machar$$$function_1_lambda(  );

        ((struct Nuitka_FunctionObject *)tmp_args_element_name_1)->m_closure[0] = par_ftype;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_args_element_name_1)->m_closure[0] );


        tmp_args_element_name_2 = MAKE_FUNCTION_numpy$core$getlimits$$$function_7__discovered_machar$$$function_2_lambda(  );

        ((struct Nuitka_FunctionObject *)tmp_args_element_name_2)->m_closure[0] = var_params;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_args_element_name_2)->m_closure[0] );


        tmp_args_element_name_3 = MAKE_FUNCTION_numpy$core$getlimits$$$function_7__discovered_machar$$$function_3_lambda(  );

        ((struct Nuitka_FunctionObject *)tmp_args_element_name_3)->m_closure[0] = par_ftype;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_args_element_name_3)->m_closure[0] );


        tmp_args_element_name_4 = MAKE_FUNCTION_numpy$core$getlimits$$$function_7__discovered_machar$$$function_4_lambda(  );

        ((struct Nuitka_FunctionObject *)tmp_args_element_name_4)->m_closure[0] = par_ftype;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_args_element_name_4)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_args_element_name_4)->m_closure[1] = var_params;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_args_element_name_4)->m_closure[1] );


        CHECK_OBJECT( PyCell_GET( var_params ) );
        tmp_subscribed_name_2 = PyCell_GET( var_params );
        tmp_subscript_name_2 = const_str_plain_title;
        tmp_args_element_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 290;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        frame_bd91339d295bfc92480ddd23ce3c8ba4->m_frame.f_lineno = 286;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 286;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd91339d295bfc92480ddd23ce3c8ba4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd91339d295bfc92480ddd23ce3c8ba4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd91339d295bfc92480ddd23ce3c8ba4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bd91339d295bfc92480ddd23ce3c8ba4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bd91339d295bfc92480ddd23ce3c8ba4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bd91339d295bfc92480ddd23ce3c8ba4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bd91339d295bfc92480ddd23ce3c8ba4,
        type_description_1,
        par_ftype,
        var_params
    );


    // Release cached frame.
    if ( frame_bd91339d295bfc92480ddd23ce3c8ba4 == cache_frame_bd91339d295bfc92480ddd23ce3c8ba4 )
    {
        Py_DECREF( frame_bd91339d295bfc92480ddd23ce3c8ba4 );
    }
    cache_frame_bd91339d295bfc92480ddd23ce3c8ba4 = NULL;

    assertFrameObject( frame_bd91339d295bfc92480ddd23ce3c8ba4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_7__discovered_machar );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ftype );
    Py_DECREF( par_ftype );
    par_ftype = NULL;

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

    CHECK_OBJECT( (PyObject *)par_ftype );
    Py_DECREF( par_ftype );
    par_ftype = NULL;

    CHECK_OBJECT( (PyObject *)var_params );
    Py_DECREF( var_params );
    var_params = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_7__discovered_machar );
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


static PyObject *impl_numpy$core$getlimits$$$function_7__discovered_machar$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_v = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_7ae050eb9a420543214ed58305100460;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7ae050eb9a420543214ed58305100460 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7ae050eb9a420543214ed58305100460, codeobj_7ae050eb9a420543214ed58305100460, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *) );
    frame_7ae050eb9a420543214ed58305100460 = cache_frame_7ae050eb9a420543214ed58305100460;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7ae050eb9a420543214ed58305100460 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7ae050eb9a420543214ed58305100460 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_array );

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

            exception_lineno = 286;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_v );
        tmp_list_element_1 = par_v;
        tmp_args_element_name_1 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ftype" );
            exception_tb = NULL;

            exception_lineno = 286;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = PyCell_GET( self->m_closure[0] );
        frame_7ae050eb9a420543214ed58305100460->m_frame.f_lineno = 286;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 286;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ae050eb9a420543214ed58305100460 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ae050eb9a420543214ed58305100460 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ae050eb9a420543214ed58305100460 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7ae050eb9a420543214ed58305100460, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7ae050eb9a420543214ed58305100460->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7ae050eb9a420543214ed58305100460, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7ae050eb9a420543214ed58305100460,
        type_description_1,
        par_v,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_7ae050eb9a420543214ed58305100460 == cache_frame_7ae050eb9a420543214ed58305100460 )
    {
        Py_DECREF( frame_7ae050eb9a420543214ed58305100460 );
    }
    cache_frame_7ae050eb9a420543214ed58305100460 = NULL;

    assertFrameObject( frame_7ae050eb9a420543214ed58305100460 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_7__discovered_machar$$$function_1_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

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

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_7__discovered_machar$$$function_1_lambda );
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


static PyObject *impl_numpy$core$getlimits$$$function_7__discovered_machar$$$function_2_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_v = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_3df21d9f9cc183b48d221eba98117238;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3df21d9f9cc183b48d221eba98117238 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3df21d9f9cc183b48d221eba98117238, codeobj_3df21d9f9cc183b48d221eba98117238, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *) );
    frame_3df21d9f9cc183b48d221eba98117238 = cache_frame_3df21d9f9cc183b48d221eba98117238;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3df21d9f9cc183b48d221eba98117238 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3df21d9f9cc183b48d221eba98117238 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscript_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__fr0 );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fr0 );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_fr0" );
            exception_tb = NULL;

            exception_lineno = 287;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_v );
        tmp_source_name_1 = par_v;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_astype );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 287;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "params" );
            exception_tb = NULL;

            exception_lineno = 287;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_2 = PyCell_GET( self->m_closure[0] );
        tmp_subscript_name_1 = const_str_plain_itype;
        tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 287;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_3df21d9f9cc183b48d221eba98117238->m_frame.f_lineno = 287;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 287;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_3df21d9f9cc183b48d221eba98117238->m_frame.f_lineno = 287;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 287;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_int_0;
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_2, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 287;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3df21d9f9cc183b48d221eba98117238 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3df21d9f9cc183b48d221eba98117238 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3df21d9f9cc183b48d221eba98117238 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3df21d9f9cc183b48d221eba98117238, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3df21d9f9cc183b48d221eba98117238->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3df21d9f9cc183b48d221eba98117238, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3df21d9f9cc183b48d221eba98117238,
        type_description_1,
        par_v,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_3df21d9f9cc183b48d221eba98117238 == cache_frame_3df21d9f9cc183b48d221eba98117238 )
    {
        Py_DECREF( frame_3df21d9f9cc183b48d221eba98117238 );
    }
    cache_frame_3df21d9f9cc183b48d221eba98117238 = NULL;

    assertFrameObject( frame_3df21d9f9cc183b48d221eba98117238 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_7__discovered_machar$$$function_2_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

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

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_7__discovered_machar$$$function_2_lambda );
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


static PyObject *impl_numpy$core$getlimits$$$function_7__discovered_machar$$$function_3_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_v = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_e733a32deeb8fa62b602bc698ce5f64a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e733a32deeb8fa62b602bc698ce5f64a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e733a32deeb8fa62b602bc698ce5f64a, codeobj_e733a32deeb8fa62b602bc698ce5f64a, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *) );
    frame_e733a32deeb8fa62b602bc698ce5f64a = cache_frame_e733a32deeb8fa62b602bc698ce5f64a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e733a32deeb8fa62b602bc698ce5f64a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e733a32deeb8fa62b602bc698ce5f64a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_array );

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

            exception_lineno = 288;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__fr0 );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fr0 );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_fr0" );
            exception_tb = NULL;

            exception_lineno = 288;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_v );
        tmp_args_element_name_2 = par_v;
        frame_e733a32deeb8fa62b602bc698ce5f64a->m_frame.f_lineno = 288;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 288;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 288;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ftype" );
            exception_tb = NULL;

            exception_lineno = 288;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = PyCell_GET( self->m_closure[0] );
        frame_e733a32deeb8fa62b602bc698ce5f64a->m_frame.f_lineno = 288;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_3 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 288;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e733a32deeb8fa62b602bc698ce5f64a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e733a32deeb8fa62b602bc698ce5f64a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e733a32deeb8fa62b602bc698ce5f64a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e733a32deeb8fa62b602bc698ce5f64a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e733a32deeb8fa62b602bc698ce5f64a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e733a32deeb8fa62b602bc698ce5f64a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e733a32deeb8fa62b602bc698ce5f64a,
        type_description_1,
        par_v,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_e733a32deeb8fa62b602bc698ce5f64a == cache_frame_e733a32deeb8fa62b602bc698ce5f64a )
    {
        Py_DECREF( frame_e733a32deeb8fa62b602bc698ce5f64a );
    }
    cache_frame_e733a32deeb8fa62b602bc698ce5f64a = NULL;

    assertFrameObject( frame_e733a32deeb8fa62b602bc698ce5f64a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_7__discovered_machar$$$function_3_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

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

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_7__discovered_machar$$$function_3_lambda );
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


static PyObject *impl_numpy$core$getlimits$$$function_7__discovered_machar$$$function_4_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_v = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_061c2aac1f9d28fe1410f374029451b8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_061c2aac1f9d28fe1410f374029451b8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_061c2aac1f9d28fe1410f374029451b8, codeobj_061c2aac1f9d28fe1410f374029451b8, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_061c2aac1f9d28fe1410f374029451b8 = cache_frame_061c2aac1f9d28fe1410f374029451b8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_061c2aac1f9d28fe1410f374029451b8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_061c2aac1f9d28fe1410f374029451b8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_args_element_name_3;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "params" );
            exception_tb = NULL;

            exception_lineno = 289;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_1 = PyCell_GET( self->m_closure[1] );
        tmp_subscript_name_1 = const_str_plain_fmt;
        tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 289;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
            exception_tb = NULL;

            exception_lineno = 289;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__fr0 );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fr0 );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_fr0" );
            exception_tb = NULL;

            exception_lineno = 289;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_v );
        tmp_args_element_name_2 = par_v;
        frame_061c2aac1f9d28fe1410f374029451b8->m_frame.f_lineno = 289;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_subscribed_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 289;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_int_0;
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 289;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ftype" );
            exception_tb = NULL;

            exception_lineno = 289;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = PyCell_GET( self->m_closure[0] );
        frame_061c2aac1f9d28fe1410f374029451b8->m_frame.f_lineno = 289;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_3 };
            tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 289;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 289;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_061c2aac1f9d28fe1410f374029451b8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_061c2aac1f9d28fe1410f374029451b8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_061c2aac1f9d28fe1410f374029451b8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_061c2aac1f9d28fe1410f374029451b8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_061c2aac1f9d28fe1410f374029451b8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_061c2aac1f9d28fe1410f374029451b8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_061c2aac1f9d28fe1410f374029451b8,
        type_description_1,
        par_v,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame.
    if ( frame_061c2aac1f9d28fe1410f374029451b8 == cache_frame_061c2aac1f9d28fe1410f374029451b8 )
    {
        Py_DECREF( frame_061c2aac1f9d28fe1410f374029451b8 );
    }
    cache_frame_061c2aac1f9d28fe1410f374029451b8 = NULL;

    assertFrameObject( frame_061c2aac1f9d28fe1410f374029451b8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_7__discovered_machar$$$function_4_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

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

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_7__discovered_machar$$$function_4_lambda );
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


static PyObject *impl_numpy$core$getlimits$$$function_8___new__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_dtype = python_pars[ 1 ];
    PyObject *var_newdtype = NULL;
    PyObject *var_obj = NULL;
    PyObject *var_dtypes = NULL;
    PyObject *var_dt = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_0bed67910142b3a02147bae793ff747d;
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
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_0bed67910142b3a02147bae793ff747d = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0bed67910142b3a02147bae793ff747d, codeobj_0bed67910142b3a02147bae793ff747d, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0bed67910142b3a02147bae793ff747d = cache_frame_0bed67910142b3a02147bae793ff747d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0bed67910142b3a02147bae793ff747d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0bed67910142b3a02147bae793ff747d ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_numeric );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numeric );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "numeric" );
            exception_tb = NULL;

            exception_lineno = 367;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_dtype );
        tmp_args_element_name_1 = par_dtype;
        frame_0bed67910142b3a02147bae793ff747d->m_frame.f_lineno = 367;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dtype, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = par_dtype;
            assert( old != NULL );
            par_dtype = tmp_assign_source_1;
            Py_DECREF( old );
        }

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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_0bed67910142b3a02147bae793ff747d );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_0bed67910142b3a02147bae793ff747d, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_0bed67910142b3a02147bae793ff747d, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 368;
            type_description_1 = "oooooo";
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_type_arg_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_numeric );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numeric );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "numeric" );
                exception_tb = NULL;

                exception_lineno = 370;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_dtype );
            tmp_type_arg_1 = par_dtype;
            tmp_args_element_name_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
            assert( !(tmp_args_element_name_2 == NULL) );
            frame_0bed67910142b3a02147bae793ff747d->m_frame.f_lineno = 370;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_dtype, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 370;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_dtype;
                assert( old != NULL );
                par_dtype = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 366;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_0bed67910142b3a02147bae793ff747d->m_frame) frame_0bed67910142b3a02147bae793ff747d->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
        branch_end_1:;
    }
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_8___new__ );
    return NULL;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( par_cls );
        tmp_source_name_2 = par_cls;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__finfo_cache );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 372;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 372;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if ( par_dtype == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
            exception_tb = NULL;

            exception_lineno = 372;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = par_dtype;
        tmp_args_element_name_4 = Py_None;
        frame_0bed67910142b3a02147bae793ff747d->m_frame.f_lineno = 372;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 372;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_obj == NULL );
        var_obj = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_obj );
        tmp_compexpr_left_2 = var_obj;
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
        CHECK_OBJECT( var_obj );
        tmp_return_value = var_obj;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_list_element_1;
        if ( par_dtype == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
            exception_tb = NULL;

            exception_lineno = 375;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_list_element_1 = par_dtype;
        tmp_assign_source_4 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_assign_source_4, 0, tmp_list_element_1 );
        assert( var_dtypes == NULL );
        var_dtypes = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_numeric );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numeric );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "numeric" );
            exception_tb = NULL;

            exception_lineno = 376;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_obj2sctype );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 376;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if ( par_dtype == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
            exception_tb = NULL;

            exception_lineno = 376;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = par_dtype;
        frame_0bed67910142b3a02147bae793ff747d->m_frame.f_lineno = 376;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 376;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_newdtype == NULL );
        var_newdtype = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_newdtype );
        tmp_compexpr_left_3 = var_newdtype;
        if ( par_dtype == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
            exception_tb = NULL;

            exception_lineno = 377;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_3 = par_dtype;
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
            PyObject *tmp_called_instance_3;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_6;
            CHECK_OBJECT( var_dtypes );
            tmp_called_instance_3 = var_dtypes;
            CHECK_OBJECT( var_newdtype );
            tmp_args_element_name_6 = var_newdtype;
            frame_0bed67910142b3a02147bae793ff747d->m_frame.f_lineno = 378;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_append, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 378;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT( var_newdtype );
            tmp_assign_source_6 = var_newdtype;
            {
                PyObject *old = par_dtype;
                par_dtype = tmp_assign_source_6;
                Py_INCREF( par_dtype );
                Py_XDECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_4;
        tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_issubclass );
        assert( tmp_called_name_3 != NULL );
        if ( par_dtype == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
            exception_tb = NULL;

            exception_lineno = 380;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_7 = par_dtype;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_numeric );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numeric );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "numeric" );
            exception_tb = NULL;

            exception_lineno = 380;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_4;
        tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_inexact );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 380;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_0bed67910142b3a02147bae793ff747d->m_frame.f_lineno = 380;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 380;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 380;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            tmp_left_name_1 = const_str_digest_17243ada09c28419093a512ea12c0885;
            if ( par_dtype == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
                exception_tb = NULL;

                exception_lineno = 381;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_right_name_1 = par_dtype;
            tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 381;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_0bed67910142b3a02147bae793ff747d->m_frame.f_lineno = 381;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 381;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        CHECK_OBJECT( par_cls );
        tmp_source_name_6 = par_cls;
        tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__finfo_cache );
        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 382;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_get );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 382;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if ( par_dtype == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
            exception_tb = NULL;

            exception_lineno = 382;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_9 = par_dtype;
        tmp_args_element_name_10 = Py_None;
        frame_0bed67910142b3a02147bae793ff747d->m_frame.f_lineno = 382;
        {
            PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 382;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_obj;
            assert( old != NULL );
            var_obj = tmp_assign_source_7;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( var_obj );
        tmp_compexpr_left_4 = var_obj;
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_5 = ( tmp_compexpr_left_4 != tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        CHECK_OBJECT( var_obj );
        tmp_return_value = var_obj;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_5;
        tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_issubclass );
        assert( tmp_called_name_5 != NULL );
        if ( par_dtype == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
            exception_tb = NULL;

            exception_lineno = 385;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_11 = par_dtype;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_numeric );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numeric );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "numeric" );
            exception_tb = NULL;

            exception_lineno = 385;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_5;
        tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_floating );
        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 385;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_0bed67910142b3a02147bae793ff747d->m_frame.f_lineno = 385;
        {
            PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 385;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 385;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_subscript_name_1;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__convert_to_float );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__convert_to_float );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_convert_to_float" );
                exception_tb = NULL;

                exception_lineno = 386;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_1 = tmp_mvar_value_6;
            if ( par_dtype == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
                exception_tb = NULL;

                exception_lineno = 386;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_subscript_name_1 = par_dtype;
            tmp_assign_source_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 386;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_newdtype;
                assert( old != NULL );
                var_newdtype = tmp_assign_source_8;
                Py_DECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( var_newdtype );
            tmp_compexpr_left_5 = var_newdtype;
            if ( par_dtype == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
                exception_tb = NULL;

                exception_lineno = 387;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_5 = par_dtype;
            tmp_condition_result_7 = ( tmp_compexpr_left_5 != tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_instance_4;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_element_name_13;
                CHECK_OBJECT( var_dtypes );
                tmp_called_instance_4 = var_dtypes;
                CHECK_OBJECT( var_newdtype );
                tmp_args_element_name_13 = var_newdtype;
                frame_0bed67910142b3a02147bae793ff747d->m_frame.f_lineno = 388;
                {
                    PyObject *call_args[] = { tmp_args_element_name_13 };
                    tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_append, call_args );
                }

                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 388;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            {
                PyObject *tmp_assign_source_9;
                CHECK_OBJECT( var_newdtype );
                tmp_assign_source_9 = var_newdtype;
                {
                    PyObject *old = par_dtype;
                    par_dtype = tmp_assign_source_9;
                    Py_INCREF( par_dtype );
                    Py_XDECREF( old );
                }

            }
            branch_no_7:;
        }
        branch_no_6:;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_8;
        PyObject *tmp_source_name_9;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        CHECK_OBJECT( par_cls );
        tmp_source_name_9 = par_cls;
        tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__finfo_cache );
        if ( tmp_source_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 390;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_get );
        Py_DECREF( tmp_source_name_8 );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 390;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if ( par_dtype == NULL )
        {
            Py_DECREF( tmp_called_name_6 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
            exception_tb = NULL;

            exception_lineno = 390;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_14 = par_dtype;
        tmp_args_element_name_15 = Py_None;
        frame_0bed67910142b3a02147bae793ff747d->m_frame.f_lineno = 390;
        {
            PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 390;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_obj;
            assert( old != NULL );
            var_obj = tmp_assign_source_10;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( var_obj );
        tmp_compexpr_left_6 = var_obj;
        tmp_compexpr_right_6 = Py_None;
        tmp_condition_result_8 = ( tmp_compexpr_left_6 != tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_8;
        }
        else
        {
            goto branch_no_8;
        }
        branch_yes_8:;
        CHECK_OBJECT( var_obj );
        tmp_return_value = var_obj;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_8:;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_10;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        tmp_called_instance_5 = (PyObject *)&PyBaseObject_Type;
        CHECK_OBJECT( par_cls );
        tmp_args_element_name_16 = par_cls;
        frame_0bed67910142b3a02147bae793ff747d->m_frame.f_lineno = 393;
        {
            PyObject *call_args[] = { tmp_args_element_name_16 };
            tmp_source_name_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain___new__, call_args );
        }

        if ( tmp_source_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 393;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__init );
        Py_DECREF( tmp_source_name_10 );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 393;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if ( par_dtype == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
            exception_tb = NULL;

            exception_lineno = 393;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_17 = par_dtype;
        frame_0bed67910142b3a02147bae793ff747d->m_frame.f_lineno = 393;
        {
            PyObject *call_args[] = { tmp_args_element_name_17 };
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_called_name_7 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 393;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_obj;
            assert( old != NULL );
            var_obj = tmp_assign_source_11;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( var_dtypes );
        tmp_iter_arg_1 = var_dtypes;
        tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 394;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_12;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_13 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_13 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooo";
                exception_lineno = 394;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_13;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_14 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_dt;
            var_dt = tmp_assign_source_14;
            Py_INCREF( var_dt );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_source_name_11;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( var_obj );
        tmp_ass_subvalue_1 = var_obj;
        CHECK_OBJECT( par_cls );
        tmp_source_name_11 = par_cls;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__finfo_cache );
        if ( tmp_ass_subscribed_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 395;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( var_dt );
        tmp_ass_subscript_1 = var_dt;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscribed_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 395;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 394;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
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

#if 1
    RESTORE_FRAME_EXCEPTION( frame_0bed67910142b3a02147bae793ff747d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_0bed67910142b3a02147bae793ff747d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_0bed67910142b3a02147bae793ff747d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0bed67910142b3a02147bae793ff747d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0bed67910142b3a02147bae793ff747d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0bed67910142b3a02147bae793ff747d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0bed67910142b3a02147bae793ff747d,
        type_description_1,
        par_cls,
        par_dtype,
        var_newdtype,
        var_obj,
        var_dtypes,
        var_dt
    );


    // Release cached frame.
    if ( frame_0bed67910142b3a02147bae793ff747d == cache_frame_0bed67910142b3a02147bae793ff747d )
    {
        Py_DECREF( frame_0bed67910142b3a02147bae793ff747d );
    }
    cache_frame_0bed67910142b3a02147bae793ff747d = NULL;

    assertFrameObject( frame_0bed67910142b3a02147bae793ff747d );

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

    CHECK_OBJECT( var_obj );
    tmp_return_value = var_obj;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_8___new__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_newdtype );
    var_newdtype = NULL;

    CHECK_OBJECT( (PyObject *)var_obj );
    Py_DECREF( var_obj );
    var_obj = NULL;

    Py_XDECREF( par_dtype );
    par_dtype = NULL;

    Py_XDECREF( var_dtypes );
    var_dtypes = NULL;

    Py_XDECREF( var_dt );
    var_dt = NULL;

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

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

    Py_XDECREF( var_newdtype );
    var_newdtype = NULL;

    Py_XDECREF( var_obj );
    var_obj = NULL;

    Py_XDECREF( par_dtype );
    par_dtype = NULL;

    Py_XDECREF( var_dtypes );
    var_dtypes = NULL;

    Py_XDECREF( var_dt );
    var_dt = NULL;

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_8___new__ );
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


static PyObject *impl_numpy$core$getlimits$$$function_9__init( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dtype = python_pars[ 1 ];
    PyObject *var_machar = NULL;
    PyObject *var_word = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_d8149c08963d90665fc4f9e1c9059e76;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_d8149c08963d90665fc4f9e1c9059e76 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d8149c08963d90665fc4f9e1c9059e76, codeobj_d8149c08963d90665fc4f9e1c9059e76, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d8149c08963d90665fc4f9e1c9059e76 = cache_frame_d8149c08963d90665fc4f9e1c9059e76;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d8149c08963d90665fc4f9e1c9059e76 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d8149c08963d90665fc4f9e1c9059e76 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_numeric );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numeric );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "numeric" );
            exception_tb = NULL;

            exception_lineno = 399;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_dtype );
        tmp_args_element_name_1 = par_dtype;
        frame_d8149c08963d90665fc4f9e1c9059e76->m_frame.f_lineno = 399;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dtype, call_args );
        }

        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 399;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_dtype, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 399;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__get_machar );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_machar );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_get_machar" );
            exception_tb = NULL;

            exception_lineno = 400;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_dtype );
        tmp_args_element_name_2 = par_dtype;
        frame_d8149c08963d90665fc4f9e1c9059e76->m_frame.f_lineno = 400;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 400;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_machar == NULL );
        var_machar = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = const_tuple_ca43d747f0514ab97322a6a533c3ddf8_tuple;
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
                type_description_1 = "oooo";
                exception_lineno = 402;
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
            PyObject *old = var_word;
            var_word = tmp_assign_source_4;
            Py_INCREF( var_word );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_setattr_target_1;
        PyObject *tmp_setattr_attr_1;
        PyObject *tmp_setattr_value_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT( par_self );
        tmp_setattr_target_1 = par_self;
        CHECK_OBJECT( var_word );
        tmp_setattr_attr_1 = var_word;
        CHECK_OBJECT( var_machar );
        tmp_getattr_target_1 = var_machar;
        CHECK_OBJECT( var_word );
        tmp_getattr_attr_1 = var_word;
        tmp_setattr_value_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
        if ( tmp_setattr_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 405;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_capi_result_1 = BUILTIN_SETATTR( tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1 );
        Py_DECREF( tmp_setattr_value_1 );
        if ( tmp_capi_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 405;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 402;
        type_description_1 = "oooo";
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
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        tmp_iter_arg_2 = const_tuple_str_plain_tiny_str_plain_resolution_str_plain_epsneg_tuple;
        tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
        assert( !(tmp_assign_source_5 == NULL) );
        assert( tmp_for_loop_2__for_iterator == NULL );
        tmp_for_loop_2__for_iterator = tmp_assign_source_5;
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
                type_description_1 = "oooo";
                exception_lineno = 406;
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
            PyObject *old = var_word;
            var_word = tmp_assign_source_7;
            Py_INCREF( var_word );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_setattr_target_2;
        PyObject *tmp_setattr_attr_2;
        PyObject *tmp_setattr_value_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_capi_result_2;
        CHECK_OBJECT( par_self );
        tmp_setattr_target_2 = par_self;
        CHECK_OBJECT( var_word );
        tmp_setattr_attr_2 = var_word;
        CHECK_OBJECT( var_machar );
        tmp_getattr_target_2 = var_machar;
        CHECK_OBJECT( var_word );
        tmp_getattr_attr_2 = var_word;
        tmp_source_name_1 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, NULL );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 407;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_flat );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 407;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_setattr_value_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_setattr_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 407;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_capi_result_2 = BUILTIN_SETATTR( tmp_setattr_target_2, tmp_setattr_attr_2, tmp_setattr_value_2 );
        Py_DECREF( tmp_setattr_value_2 );
        if ( tmp_capi_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 407;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 406;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 408;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_itemsize );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 408;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_8;
        tmp_assattr_name_2 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assattr_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 408;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_bits, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 408;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( var_machar );
        tmp_source_name_5 = var_machar;
        tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_huge );
        if ( tmp_source_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 409;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_flat );
        Py_DECREF( tmp_source_name_4 );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 409;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_int_0;
        tmp_assattr_name_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_assattr_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 409;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_max, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 409;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_6;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_max );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 410;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_4 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_assattr_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 410;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_min, tmp_assattr_name_4 );
        Py_DECREF( tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 410;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_source_name_7;
        PyObject *tmp_source_name_8;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT( var_machar );
        tmp_source_name_8 = var_machar;
        tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_eps );
        if ( tmp_source_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 411;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_flat );
        Py_DECREF( tmp_source_name_7 );
        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 411;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = const_int_0;
        tmp_assattr_name_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
        Py_DECREF( tmp_subscribed_name_3 );
        if ( tmp_assattr_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 411;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_eps, tmp_assattr_name_5 );
        Py_DECREF( tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 411;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_source_name_9;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT( var_machar );
        tmp_source_name_9 = var_machar;
        tmp_assattr_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_iexp );
        if ( tmp_assattr_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 412;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_nexp, tmp_assattr_name_6 );
        Py_DECREF( tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 412;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_source_name_10;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT( var_machar );
        tmp_source_name_10 = var_machar;
        tmp_assattr_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_it );
        if ( tmp_assattr_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 413;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_nmant, tmp_assattr_name_7 );
        Py_DECREF( tmp_assattr_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 413;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT( var_machar );
        tmp_assattr_name_8 = var_machar;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_machar, tmp_assattr_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 414;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_11;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT( var_machar );
        tmp_source_name_11 = var_machar;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__str_xmin );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 415;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d8149c08963d90665fc4f9e1c9059e76->m_frame.f_lineno = 415;
        tmp_assattr_name_9 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_strip );
        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_assattr_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 415;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain__str_tiny, tmp_assattr_name_9 );
        Py_DECREF( tmp_assattr_name_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 415;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_source_name_12;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT( var_machar );
        tmp_source_name_12 = var_machar;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__str_xmax );
        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d8149c08963d90665fc4f9e1c9059e76->m_frame.f_lineno = 416;
        tmp_assattr_name_10 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_strip );
        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_assattr_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain__str_max, tmp_assattr_name_10 );
        Py_DECREF( tmp_assattr_name_10 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_source_name_13;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT( var_machar );
        tmp_source_name_13 = var_machar;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__str_epsneg );
        if ( tmp_called_instance_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 417;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d8149c08963d90665fc4f9e1c9059e76->m_frame.f_lineno = 417;
        tmp_assattr_name_11 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_strip );
        Py_DECREF( tmp_called_instance_4 );
        if ( tmp_assattr_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 417;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain__str_epsneg, tmp_assattr_name_11 );
        Py_DECREF( tmp_assattr_name_11 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 417;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_12;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_source_name_14;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT( var_machar );
        tmp_source_name_14 = var_machar;
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__str_eps );
        if ( tmp_called_instance_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 418;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d8149c08963d90665fc4f9e1c9059e76->m_frame.f_lineno = 418;
        tmp_assattr_name_12 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_strip );
        Py_DECREF( tmp_called_instance_5 );
        if ( tmp_assattr_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 418;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain__str_eps, tmp_assattr_name_12 );
        Py_DECREF( tmp_assattr_name_12 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 418;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_13;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_source_name_15;
        PyObject *tmp_assattr_target_13;
        CHECK_OBJECT( var_machar );
        tmp_source_name_15 = var_machar;
        tmp_called_instance_6 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain__str_resolution );
        if ( tmp_called_instance_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 419;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d8149c08963d90665fc4f9e1c9059e76->m_frame.f_lineno = 419;
        tmp_assattr_name_13 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_strip );
        Py_DECREF( tmp_called_instance_6 );
        if ( tmp_assattr_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 419;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain__str_resolution, tmp_assattr_name_13 );
        Py_DECREF( tmp_assattr_name_13 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 419;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d8149c08963d90665fc4f9e1c9059e76 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d8149c08963d90665fc4f9e1c9059e76 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d8149c08963d90665fc4f9e1c9059e76, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d8149c08963d90665fc4f9e1c9059e76->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d8149c08963d90665fc4f9e1c9059e76, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d8149c08963d90665fc4f9e1c9059e76,
        type_description_1,
        par_self,
        par_dtype,
        var_machar,
        var_word
    );


    // Release cached frame.
    if ( frame_d8149c08963d90665fc4f9e1c9059e76 == cache_frame_d8149c08963d90665fc4f9e1c9059e76 )
    {
        Py_DECREF( frame_d8149c08963d90665fc4f9e1c9059e76 );
    }
    cache_frame_d8149c08963d90665fc4f9e1c9059e76 = NULL;

    assertFrameObject( frame_d8149c08963d90665fc4f9e1c9059e76 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_self );
    tmp_return_value = par_self;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_9__init );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_machar );
    Py_DECREF( var_machar );
    var_machar = NULL;

    Py_XDECREF( var_word );
    var_word = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_machar );
    var_machar = NULL;

    Py_XDECREF( var_word );
    var_word = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_9__init );
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


static PyObject *impl_numpy$core$getlimits$$$function_10___str__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_8d2544d35aa9d9227c0713ef34a3d555;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8d2544d35aa9d9227c0713ef34a3d555 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8d2544d35aa9d9227c0713ef34a3d555, codeobj_8d2544d35aa9d9227c0713ef34a3d555, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *) );
    frame_8d2544d35aa9d9227c0713ef34a3d555 = cache_frame_8d2544d35aa9d9227c0713ef34a3d555;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8d2544d35aa9d9227c0713ef34a3d555 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8d2544d35aa9d9227c0713ef34a3d555 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_1;
        tmp_left_name_1 = const_str_digest_c8ad69a27958f4a91e4487fd0fe6fc25;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 434;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 434;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8d2544d35aa9d9227c0713ef34a3d555 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8d2544d35aa9d9227c0713ef34a3d555 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8d2544d35aa9d9227c0713ef34a3d555 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8d2544d35aa9d9227c0713ef34a3d555, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8d2544d35aa9d9227c0713ef34a3d555->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8d2544d35aa9d9227c0713ef34a3d555, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8d2544d35aa9d9227c0713ef34a3d555,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame.
    if ( frame_8d2544d35aa9d9227c0713ef34a3d555 == cache_frame_8d2544d35aa9d9227c0713ef34a3d555 )
    {
        Py_DECREF( frame_8d2544d35aa9d9227c0713ef34a3d555 );
    }
    cache_frame_8d2544d35aa9d9227c0713ef34a3d555 = NULL;

    assertFrameObject( frame_8d2544d35aa9d9227c0713ef34a3d555 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_10___str__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_10___str__ );
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


static PyObject *impl_numpy$core$getlimits$$$function_11___repr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_c = NULL;
    PyObject *var_d = NULL;
    struct Nuitka_FrameObject *frame_e39843c0365ee3bcb940dbd3d3f3d3d5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e39843c0365ee3bcb940dbd3d3f3d3d5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e39843c0365ee3bcb940dbd3d3f3d3d5, codeobj_e39843c0365ee3bcb940dbd3d3f3d3d5, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e39843c0365ee3bcb940dbd3d3f3d3d5 = cache_frame_e39843c0365ee3bcb940dbd3d3f3d3d5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e39843c0365ee3bcb940dbd3d3f3d3d5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e39843c0365ee3bcb940dbd3d3f3d3d5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_2 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 437;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___name__ );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 437;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_c == NULL );
        var_c = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_3 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 438;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_e39843c0365ee3bcb940dbd3d3f3d3d5->m_frame.f_lineno = 438;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 438;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_d == NULL );
        var_d = tmp_assign_source_2;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( var_c );
        tmp_ass_subvalue_1 = var_c;
        CHECK_OBJECT( var_d );
        tmp_ass_subscribed_1 = var_d;
        tmp_ass_subscript_1 = const_str_plain_klass;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 439;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = const_str_digest_81124a5be721172281510fa6fc9b29b5;
        CHECK_OBJECT( var_d );
        tmp_right_name_1 = var_d;
        tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 440;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e39843c0365ee3bcb940dbd3d3f3d3d5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e39843c0365ee3bcb940dbd3d3f3d3d5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e39843c0365ee3bcb940dbd3d3f3d3d5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e39843c0365ee3bcb940dbd3d3f3d3d5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e39843c0365ee3bcb940dbd3d3f3d3d5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e39843c0365ee3bcb940dbd3d3f3d3d5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e39843c0365ee3bcb940dbd3d3f3d3d5,
        type_description_1,
        par_self,
        var_c,
        var_d
    );


    // Release cached frame.
    if ( frame_e39843c0365ee3bcb940dbd3d3f3d3d5 == cache_frame_e39843c0365ee3bcb940dbd3d3f3d3d5 )
    {
        Py_DECREF( frame_e39843c0365ee3bcb940dbd3d3f3d3d5 );
    }
    cache_frame_e39843c0365ee3bcb940dbd3d3f3d3d5 = NULL;

    assertFrameObject( frame_e39843c0365ee3bcb940dbd3d3f3d3d5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_11___repr__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_c );
    Py_DECREF( var_c );
    var_c = NULL;

    CHECK_OBJECT( (PyObject *)var_d );
    Py_DECREF( var_d );
    var_d = NULL;

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

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_11___repr__ );
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


static PyObject *impl_numpy$core$getlimits$$$function_12___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_int_type = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_09fabb7f3bff9846f1d7617871e0697c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_09fabb7f3bff9846f1d7617871e0697c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_09fabb7f3bff9846f1d7617871e0697c, codeobj_09fabb7f3bff9846f1d7617871e0697c, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *) );
    frame_09fabb7f3bff9846f1d7617871e0697c = cache_frame_09fabb7f3bff9846f1d7617871e0697c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_09fabb7f3bff9846f1d7617871e0697c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_09fabb7f3bff9846f1d7617871e0697c ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_numeric );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numeric );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "numeric" );
            exception_tb = NULL;

            exception_lineno = 499;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_int_type );
        tmp_args_element_name_1 = par_int_type;
        frame_09fabb7f3bff9846f1d7617871e0697c->m_frame.f_lineno = 499;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dtype, call_args );
        }

        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 499;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_dtype, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 499;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_09fabb7f3bff9846f1d7617871e0697c );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_09fabb7f3bff9846f1d7617871e0697c, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_09fabb7f3bff9846f1d7617871e0697c, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 500;
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
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_type_arg_1;
            PyObject *tmp_assattr_target_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_numeric );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numeric );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "numeric" );
                exception_tb = NULL;

                exception_lineno = 501;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_int_type );
            tmp_type_arg_1 = par_int_type;
            tmp_args_element_name_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
            assert( !(tmp_args_element_name_2 == NULL) );
            frame_09fabb7f3bff9846f1d7617871e0697c->m_frame.f_lineno = 501;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assattr_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_dtype, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_assattr_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 501;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_dtype, tmp_assattr_name_2 );
            Py_DECREF( tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 501;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 498;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_09fabb7f3bff9846f1d7617871e0697c->m_frame) frame_09fabb7f3bff9846f1d7617871e0697c->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
        branch_end_1:;
    }
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_12___init__ );
    return NULL;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 502;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_kind );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_assattr_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 502;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_kind, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 502;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_right_name_1;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dtype );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 503;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_itemsize );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 503;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_8;
        tmp_assattr_name_4 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assattr_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 503;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_bits, tmp_assattr_name_4 );
        Py_DECREF( tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 503;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_assattr_target_5;
        tmp_left_name_2 = const_str_digest_1fb8303ac42db8ab17be5f2ef764dc5e;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_kind );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 504;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_bits );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_right_name_2 );

            exception_lineno = 504;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_1 );
        tmp_assattr_name_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_assattr_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 504;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_key, tmp_assattr_name_5 );
        Py_DECREF( tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 504;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT( par_self );
        tmp_source_name_7 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_kind );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 505;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_str_plain_iu;
        tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 505;
            type_description_1 = "oo";
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
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_source_name_8;
            tmp_left_name_3 = const_str_digest_471b4820c72721e3be78202e74ba61b9;
            CHECK_OBJECT( par_self );
            tmp_source_name_8 = par_self;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_kind );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 506;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_3 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_2 );
            tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 506;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_09fabb7f3bff9846f1d7617871e0697c->m_frame.f_lineno = 506;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 506;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }

#if 1
    RESTORE_FRAME_EXCEPTION( frame_09fabb7f3bff9846f1d7617871e0697c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_09fabb7f3bff9846f1d7617871e0697c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_09fabb7f3bff9846f1d7617871e0697c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_09fabb7f3bff9846f1d7617871e0697c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_09fabb7f3bff9846f1d7617871e0697c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_09fabb7f3bff9846f1d7617871e0697c,
        type_description_1,
        par_self,
        par_int_type
    );


    // Release cached frame.
    if ( frame_09fabb7f3bff9846f1d7617871e0697c == cache_frame_09fabb7f3bff9846f1d7617871e0697c )
    {
        Py_DECREF( frame_09fabb7f3bff9846f1d7617871e0697c );
    }
    cache_frame_09fabb7f3bff9846f1d7617871e0697c = NULL;

    assertFrameObject( frame_09fabb7f3bff9846f1d7617871e0697c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_12___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_int_type );
    Py_DECREF( par_int_type );
    par_int_type = NULL;

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

    CHECK_OBJECT( (PyObject *)par_int_type );
    Py_DECREF( par_int_type );
    par_int_type = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_12___init__ );
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


static PyObject *impl_numpy$core$getlimits$$$function_13_min( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_val = NULL;
    struct Nuitka_FrameObject *frame_874f1f8d3c8c8e48e7df423e965f7b4d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_874f1f8d3c8c8e48e7df423e965f7b4d = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_874f1f8d3c8c8e48e7df423e965f7b4d, codeobj_874f1f8d3c8c8e48e7df423e965f7b4d, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *) );
    frame_874f1f8d3c8c8e48e7df423e965f7b4d = cache_frame_874f1f8d3c8c8e48e7df423e965f7b4d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_874f1f8d3c8c8e48e7df423e965f7b4d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_874f1f8d3c8c8e48e7df423e965f7b4d ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_kind );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 510;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_str_plain_u;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 510;
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
        tmp_return_value = const_int_0;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_1;
        branch_no_1:;
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_source_name_3;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_iinfo );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iinfo );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "iinfo" );
                exception_tb = NULL;

                exception_lineno = 514;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }

            tmp_source_name_2 = tmp_mvar_value_1;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__min_vals );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 514;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_subscript_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_key );
            if ( tmp_subscript_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscribed_name_1 );

                exception_lineno = 514;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            Py_DECREF( tmp_subscript_name_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 514;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            assert( var_val == NULL );
            var_val = tmp_assign_source_1;
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

        // Preserve existing published exception.
        PRESERVE_FRAME_EXCEPTION( frame_874f1f8d3c8c8e48e7df423e965f7b4d );
        if ( exception_keeper_tb_1 == NULL )
        {
            exception_keeper_tb_1 = MAKE_TRACEBACK( frame_874f1f8d3c8c8e48e7df423e965f7b4d, exception_keeper_lineno_1 );
        }
        else if ( exception_keeper_lineno_1 != 0 )
        {
            exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_874f1f8d3c8c8e48e7df423e965f7b4d, exception_keeper_lineno_1 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_2 = PyExc_KeyError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 515;
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
                PyObject *tmp_assign_source_2;
                PyObject *tmp_int_arg_1;
                PyObject *tmp_operand_name_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_left_name_2;
                PyObject *tmp_source_name_4;
                PyObject *tmp_right_name_2;
                tmp_left_name_1 = const_int_pos_1;
                CHECK_OBJECT( par_self );
                tmp_source_name_4 = par_self;
                tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_bits );
                if ( tmp_left_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 516;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_2 = const_int_pos_1;
                tmp_right_name_1 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_left_name_2 );
                if ( tmp_right_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 516;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_operand_name_1 = BINARY_OPERATION( PyNumber_Lshift, tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_operand_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 516;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_int_arg_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
                Py_DECREF( tmp_operand_name_1 );
                if ( tmp_int_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 516;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_2 = PyNumber_Int( tmp_int_arg_1 );
                Py_DECREF( tmp_int_arg_1 );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 516;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                assert( var_val == NULL );
                var_val = tmp_assign_source_2;
            }
            {
                PyObject *tmp_ass_subvalue_1;
                PyObject *tmp_ass_subscribed_1;
                PyObject *tmp_source_name_5;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_ass_subscript_1;
                PyObject *tmp_source_name_6;
                CHECK_OBJECT( var_val );
                tmp_ass_subvalue_1 = var_val;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_iinfo );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iinfo );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "iinfo" );
                    exception_tb = NULL;

                    exception_lineno = 517;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_5 = tmp_mvar_value_2;
                tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__min_vals );
                if ( tmp_ass_subscribed_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 517;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_6 = par_self;
                tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_key );
                if ( tmp_ass_subscript_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_ass_subscribed_1 );

                    exception_lineno = 517;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
                Py_DECREF( tmp_ass_subscribed_1 );
                Py_DECREF( tmp_ass_subscript_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 517;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
            }
            goto branch_end_2;
            branch_no_2:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 513;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_874f1f8d3c8c8e48e7df423e965f7b4d->m_frame) frame_874f1f8d3c8c8e48e7df423e965f7b4d->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
            branch_end_2:;
        }
        goto try_end_1;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_13_min );
        return NULL;
        // End of try:
        try_end_1:;
        if ( var_val == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "val" );
            exception_tb = NULL;

            exception_lineno = 518;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_return_value = var_val;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_1:;
    }

#if 1
    RESTORE_FRAME_EXCEPTION( frame_874f1f8d3c8c8e48e7df423e965f7b4d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_874f1f8d3c8c8e48e7df423e965f7b4d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_874f1f8d3c8c8e48e7df423e965f7b4d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_874f1f8d3c8c8e48e7df423e965f7b4d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_874f1f8d3c8c8e48e7df423e965f7b4d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_874f1f8d3c8c8e48e7df423e965f7b4d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_874f1f8d3c8c8e48e7df423e965f7b4d,
        type_description_1,
        par_self,
        var_val
    );


    // Release cached frame.
    if ( frame_874f1f8d3c8c8e48e7df423e965f7b4d == cache_frame_874f1f8d3c8c8e48e7df423e965f7b4d )
    {
        Py_DECREF( frame_874f1f8d3c8c8e48e7df423e965f7b4d );
    }
    cache_frame_874f1f8d3c8c8e48e7df423e965f7b4d = NULL;

    assertFrameObject( frame_874f1f8d3c8c8e48e7df423e965f7b4d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_13_min );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

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

    Py_XDECREF( var_val );
    var_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_13_min );
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


static PyObject *impl_numpy$core$getlimits$$$function_14_max( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_val = NULL;
    struct Nuitka_FrameObject *frame_036a715ab33f51cf558e3c20f3414f98;
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
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_036a715ab33f51cf558e3c20f3414f98 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_036a715ab33f51cf558e3c20f3414f98, codeobj_036a715ab33f51cf558e3c20f3414f98, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *) );
    frame_036a715ab33f51cf558e3c20f3414f98 = cache_frame_036a715ab33f51cf558e3c20f3414f98;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_036a715ab33f51cf558e3c20f3414f98 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_036a715ab33f51cf558e3c20f3414f98 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_source_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_iinfo );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iinfo );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "iinfo" );
            exception_tb = NULL;

            exception_lineno = 525;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__max_vals );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 525;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_subscript_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_key );
        if ( tmp_subscript_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_1 );

            exception_lineno = 525;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 525;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        assert( var_val == NULL );
        var_val = tmp_assign_source_1;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_036a715ab33f51cf558e3c20f3414f98 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_036a715ab33f51cf558e3c20f3414f98, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_036a715ab33f51cf558e3c20f3414f98, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 526;
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
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_kind );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 527;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = const_str_plain_u;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 527;
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
                PyObject *tmp_assign_source_2;
                PyObject *tmp_int_arg_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_1;
                PyObject *tmp_source_name_4;
                PyObject *tmp_right_name_2;
                tmp_left_name_2 = const_int_pos_1;
                CHECK_OBJECT( par_self );
                tmp_source_name_4 = par_self;
                tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_bits );
                if ( tmp_right_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 528;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_left_name_1 = BINARY_OPERATION( PyNumber_Lshift, tmp_left_name_2, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_left_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 528;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_2 = const_int_pos_1;
                tmp_int_arg_1 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_2 );
                Py_DECREF( tmp_left_name_1 );
                if ( tmp_int_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 528;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_2 = PyNumber_Int( tmp_int_arg_1 );
                Py_DECREF( tmp_int_arg_1 );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 528;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                assert( var_val == NULL );
                var_val = tmp_assign_source_2;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_int_arg_2;
                PyObject *tmp_left_name_3;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_3;
                PyObject *tmp_left_name_5;
                PyObject *tmp_source_name_5;
                PyObject *tmp_right_name_4;
                PyObject *tmp_right_name_5;
                tmp_left_name_4 = const_int_pos_1;
                CHECK_OBJECT( par_self );
                tmp_source_name_5 = par_self;
                tmp_left_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_bits );
                if ( tmp_left_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 530;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_4 = const_int_pos_1;
                tmp_right_name_3 = BINARY_OPERATION_SUB( tmp_left_name_5, tmp_right_name_4 );
                Py_DECREF( tmp_left_name_5 );
                if ( tmp_right_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 530;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_left_name_3 = BINARY_OPERATION( PyNumber_Lshift, tmp_left_name_4, tmp_right_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_left_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 530;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_5 = const_int_pos_1;
                tmp_int_arg_2 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_5 );
                Py_DECREF( tmp_left_name_3 );
                if ( tmp_int_arg_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 530;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_3 = PyNumber_Int( tmp_int_arg_2 );
                Py_DECREF( tmp_int_arg_2 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 530;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                assert( var_val == NULL );
                var_val = tmp_assign_source_3;
            }
            branch_end_2:;
        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_ass_subscript_1;
            PyObject *tmp_source_name_7;
            CHECK_OBJECT( var_val );
            tmp_ass_subvalue_1 = var_val;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_iinfo );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iinfo );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "iinfo" );
                exception_tb = NULL;

                exception_lineno = 531;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_2;
            tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__max_vals );
            if ( tmp_ass_subscribed_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 531;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_7 = par_self;
            tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_key );
            if ( tmp_ass_subscript_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subscribed_1 );

                exception_lineno = 531;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscribed_1 );
            Py_DECREF( tmp_ass_subscript_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 531;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 524;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_036a715ab33f51cf558e3c20f3414f98->m_frame) frame_036a715ab33f51cf558e3c20f3414f98->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
        branch_end_1:;
    }
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_14_max );
    return NULL;
    // End of try:
    try_end_1:;
    if ( var_val == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "val" );
        exception_tb = NULL;

        exception_lineno = 532;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_val;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_036a715ab33f51cf558e3c20f3414f98 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_036a715ab33f51cf558e3c20f3414f98 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_036a715ab33f51cf558e3c20f3414f98 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_036a715ab33f51cf558e3c20f3414f98, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_036a715ab33f51cf558e3c20f3414f98->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_036a715ab33f51cf558e3c20f3414f98, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_036a715ab33f51cf558e3c20f3414f98,
        type_description_1,
        par_self,
        var_val
    );


    // Release cached frame.
    if ( frame_036a715ab33f51cf558e3c20f3414f98 == cache_frame_036a715ab33f51cf558e3c20f3414f98 )
    {
        Py_DECREF( frame_036a715ab33f51cf558e3c20f3414f98 );
    }
    cache_frame_036a715ab33f51cf558e3c20f3414f98 = NULL;

    assertFrameObject( frame_036a715ab33f51cf558e3c20f3414f98 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_14_max );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

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

    Py_XDECREF( var_val );
    var_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_14_max );
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


static PyObject *impl_numpy$core$getlimits$$$function_15___str__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_7b9b2c19dccf6bf3a9de2aabfb9cfe4e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_7b9b2c19dccf6bf3a9de2aabfb9cfe4e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7b9b2c19dccf6bf3a9de2aabfb9cfe4e, codeobj_7b9b2c19dccf6bf3a9de2aabfb9cfe4e, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *) );
    frame_7b9b2c19dccf6bf3a9de2aabfb9cfe4e = cache_frame_7b9b2c19dccf6bf3a9de2aabfb9cfe4e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7b9b2c19dccf6bf3a9de2aabfb9cfe4e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7b9b2c19dccf6bf3a9de2aabfb9cfe4e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_source_name_3;
        tmp_left_name_1 = const_str_digest_d699850a7ed4dcad4593c97865f24dd4;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dtype );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 545;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain_dtype;
        tmp_right_name_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_right_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_min );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_right_name_1 );

            exception_lineno = 545;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = const_str_plain_min;
        tmp_res = PyDict_SetItem( tmp_right_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_max );
        if ( tmp_dict_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_right_name_1 );

            exception_lineno = 545;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_3 = const_str_plain_max;
        tmp_res = PyDict_SetItem( tmp_right_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 545;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b9b2c19dccf6bf3a9de2aabfb9cfe4e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b9b2c19dccf6bf3a9de2aabfb9cfe4e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b9b2c19dccf6bf3a9de2aabfb9cfe4e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7b9b2c19dccf6bf3a9de2aabfb9cfe4e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7b9b2c19dccf6bf3a9de2aabfb9cfe4e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7b9b2c19dccf6bf3a9de2aabfb9cfe4e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7b9b2c19dccf6bf3a9de2aabfb9cfe4e,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame.
    if ( frame_7b9b2c19dccf6bf3a9de2aabfb9cfe4e == cache_frame_7b9b2c19dccf6bf3a9de2aabfb9cfe4e )
    {
        Py_DECREF( frame_7b9b2c19dccf6bf3a9de2aabfb9cfe4e );
    }
    cache_frame_7b9b2c19dccf6bf3a9de2aabfb9cfe4e = NULL;

    assertFrameObject( frame_7b9b2c19dccf6bf3a9de2aabfb9cfe4e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_15___str__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_15___str__ );
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


static PyObject *impl_numpy$core$getlimits$$$function_16___repr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_a9b72b5bbc97c20e9209a357cb1d81ea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a9b72b5bbc97c20e9209a357cb1d81ea = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a9b72b5bbc97c20e9209a357cb1d81ea, codeobj_a9b72b5bbc97c20e9209a357cb1d81ea, module_numpy$core$getlimits, sizeof(void *) );
    frame_a9b72b5bbc97c20e9209a357cb1d81ea = cache_frame_a9b72b5bbc97c20e9209a357cb1d81ea;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a9b72b5bbc97c20e9209a357cb1d81ea );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a9b72b5bbc97c20e9209a357cb1d81ea ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        tmp_left_name_1 = const_str_digest_689f5c49db7f0f46fe96e883a6a93baa;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_2 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 548;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___name__ );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 548;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = PyTuple_New( 4 );
        PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_min );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_right_name_1 );

            exception_lineno = 549;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_max );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_right_name_1 );

            exception_lineno = 549;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_right_name_1, 2, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_right_name_1 );

            exception_lineno = 549;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_right_name_1, 3, tmp_tuple_element_1 );
        tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 548;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a9b72b5bbc97c20e9209a357cb1d81ea );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a9b72b5bbc97c20e9209a357cb1d81ea );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a9b72b5bbc97c20e9209a357cb1d81ea );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a9b72b5bbc97c20e9209a357cb1d81ea, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a9b72b5bbc97c20e9209a357cb1d81ea->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a9b72b5bbc97c20e9209a357cb1d81ea, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a9b72b5bbc97c20e9209a357cb1d81ea,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_a9b72b5bbc97c20e9209a357cb1d81ea == cache_frame_a9b72b5bbc97c20e9209a357cb1d81ea )
    {
        Py_DECREF( frame_a9b72b5bbc97c20e9209a357cb1d81ea );
    }
    cache_frame_a9b72b5bbc97c20e9209a357cb1d81ea = NULL;

    assertFrameObject( frame_a9b72b5bbc97c20e9209a357cb1d81ea );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_16___repr__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_16___repr__ );
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



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_10___str__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_10___str__,
        const_str_plain___str__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8d2544d35aa9d9227c0713ef34a3d555,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_11___repr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_11___repr__,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e39843c0365ee3bcb940dbd3d3f3d3d5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_12___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_12___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_09fabb7f3bff9846f1d7617871e0697c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_13_min(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_13_min,
        const_str_plain_min,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_874f1f8d3c8c8e48e7df423e965f7b4d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        const_str_digest_3122c1a6126f732cd94f8864df7d76ff,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_14_max(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_14_max,
        const_str_plain_max,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_036a715ab33f51cf558e3c20f3414f98,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        const_str_digest_8f6c2ba61d1aad5f470aa0d7e1c51ed6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_15___str__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_15___str__,
        const_str_plain___str__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7b9b2c19dccf6bf3a9de2aabfb9cfe4e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        const_str_digest_c1416ee2e3faf191d9259e1f3f7581c0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_16___repr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_16___repr__,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a9b72b5bbc97c20e9209a357cb1d81ea,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_1__fr0(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_1__fr0,
        const_str_plain__fr0,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8bf9e926f07235b0be107c5c0a1c3e61,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        const_str_digest_c585224fd2c43f929c10a58162297da8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_2__fr1(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_2__fr1,
        const_str_plain__fr1,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_35f0348b39e6041691f902426f5f2349,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        const_str_digest_0dfcf8cd171b40dc563f1a190d516493,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_3___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_517a3140d0baa7e59dc6ef590379f230,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_3___init__$$$function_1_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_3___init__$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1646c5051b2fb57fcd6779933451927e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_3___init__$$$function_2_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_3___init__$$$function_2_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_016ac099722b4330383f4aa2d0ed7c2b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_3___init__$$$function_3_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_3___init__$$$function_3_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_25f428b6f80f334e1181f06c64729c51,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_4__register_type(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_4__register_type,
        const_str_plain__register_type,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a067b7d8cca5eb2ff27e08efbc31a1a4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_5__register_known_types(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_5__register_known_types,
        const_str_plain__register_known_types,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_25fde72f920b5890024cd4495449c447,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_6__get_machar(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_6__get_machar,
        const_str_plain__get_machar,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d642aaa7e66139a185d2d61be24cec2a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        const_str_digest_dd8d834fa6f08a772c04822740add2d7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_7__discovered_machar(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_7__discovered_machar,
        const_str_plain__discovered_machar,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bd91339d295bfc92480ddd23ce3c8ba4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        const_str_digest_ab7c9132978cbffbf3e766956f1fc60a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_7__discovered_machar$$$function_1_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_7__discovered_machar$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7ae050eb9a420543214ed58305100460,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_7__discovered_machar$$$function_2_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_7__discovered_machar$$$function_2_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3df21d9f9cc183b48d221eba98117238,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_7__discovered_machar$$$function_3_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_7__discovered_machar$$$function_3_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e733a32deeb8fa62b602bc698ce5f64a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_7__discovered_machar$$$function_4_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_7__discovered_machar$$$function_4_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_061c2aac1f9d28fe1410f374029451b8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_8___new__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_8___new__,
        const_str_plain___new__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0bed67910142b3a02147bae793ff747d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_9__init(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_9__init,
        const_str_plain__init,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d8149c08963d90665fc4f9e1c9059e76,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$getlimits,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$core$getlimits =
{
    PyModuleDef_HEAD_INIT,
    "numpy.core.getlimits",
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

MOD_INIT_DECL( numpy$core$getlimits )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$core$getlimits );
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
    puts("numpy.core.getlimits: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.core.getlimits: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.core.getlimits: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$core$getlimits" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$core$getlimits = Py_InitModule4(
        "numpy.core.getlimits",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_numpy$core$getlimits = PyModule_Create( &mdef_numpy$core$getlimits );
#endif

    moduledict_numpy$core$getlimits = MODULE_DICT( module_numpy$core$getlimits );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_numpy$core$getlimits,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$core$getlimits,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$core$getlimits,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_numpy$core$getlimits );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_b8eaccad553858ca41bd501c0a17651e, module_numpy$core$getlimits );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
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
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_locals_numpy$core$getlimits_34_key___init__ = NULL;
    struct Nuitka_FrameObject *frame_f094195019d601afc7008f4ddc65b971;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    int tmp_res;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *locals_numpy$core$getlimits_294 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_ae14b95dd7bcc89fd869ebc8bfa24048_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_ae14b95dd7bcc89fd869ebc8bfa24048_2 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_numpy$core$getlimits_445 = NULL;
    struct Nuitka_FrameObject *frame_242d4be54487a88e2cbd4443d365da37_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_242d4be54487a88e2cbd4443d365da37_3 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_454d0777cd09130adadab5cb34c54852;
        UPDATE_STRING_DICT0( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_3ab7825f0d605267d9a713ee11c2374d;
        UPDATE_STRING_DICT0( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
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
    frame_f094195019d601afc7008f4ddc65b971 = MAKE_MODULE_FRAME( codeobj_f094195019d601afc7008f4ddc65b971, module_numpy$core$getlimits );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_f094195019d601afc7008f4ddc65b971 );
    assert( Py_REFCNT( frame_f094195019d601afc7008f4ddc65b971 ) == 2 );

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


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_4 );
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


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
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


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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
        tmp_assign_source_7 = LIST_COPY( const_list_str_plain_finfo_str_plain_iinfo_list );
        UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_warnings;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$core$getlimits;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_f094195019d601afc7008f4ddc65b971->m_frame.f_lineno = 8;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_machar;
        tmp_globals_name_2 = (PyObject *)moduledict_numpy$core$getlimits;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_MachAr_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_f094195019d601afc7008f4ddc65b971->m_frame.f_lineno = 10;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_MachAr );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_MachAr, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_overrides;
        tmp_globals_name_3 = (PyObject *)moduledict_numpy$core$getlimits;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_set_module_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_f094195019d601afc7008f4ddc65b971->m_frame.f_lineno = 11;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_set_module );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_set_module, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_empty;
        tmp_globals_name_4 = (PyObject *)moduledict_numpy$core$getlimits;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_numeric_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_f094195019d601afc7008f4ddc65b971->m_frame.f_lineno = 12;
        tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_numeric );
        Py_DECREF( tmp_import_name_from_6 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_numeric, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_empty;
        tmp_globals_name_5 = (PyObject *)moduledict_numpy$core$getlimits;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_numerictypes_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_f094195019d601afc7008f4ddc65b971->m_frame.f_lineno = 13;
        tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_numerictypes );
        Py_DECREF( tmp_import_name_from_7 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_numeric;
        tmp_globals_name_6 = (PyObject *)moduledict_numpy$core$getlimits;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_array_str_plain_inf_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_f094195019d601afc7008f4ddc65b971->m_frame.f_lineno = 14;
        tmp_assign_source_13 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_array );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_array, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_9 = tmp_import_from_2__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_inf );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_inf, tmp_assign_source_15 );
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
        PyObject *tmp_assign_source_16;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_umath;
        tmp_globals_name_7 = (PyObject *)moduledict_numpy$core$getlimits;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_log10_str_plain_exp2_tuple;
        tmp_level_name_7 = const_int_pos_1;
        frame_f094195019d601afc7008f4ddc65b971->m_frame.f_lineno = 15;
        tmp_assign_source_16 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_10 = tmp_import_from_3__module;
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_log10 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_log10, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_11 = tmp_import_from_3__module;
        tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_exp2 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_exp2, tmp_assign_source_18 );
    }
    goto try_end_3;
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_empty;
        tmp_globals_name_8 = (PyObject *)moduledict_numpy$core$getlimits;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain_umath_tuple;
        tmp_level_name_8 = const_int_pos_1;
        frame_f094195019d601afc7008f4ddc65b971->m_frame.f_lineno = 16;
        tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_import_name_from_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_umath );
        Py_DECREF( tmp_import_name_from_12 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_umath, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_FUNCTION_numpy$core$getlimits$$$function_1__fr0(  );



        UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__fr0, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_FUNCTION_numpy$core$getlimits$$$function_2__fr1(  );



        UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__fr1, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        {
            PyObject *tmp_assign_source_23;
            tmp_assign_source_23 = MAKE_FUNCTION_numpy$core$getlimits$$$function_3___init__(  );



            assert( tmp_locals_numpy$core$getlimits_34_key___init__ == NULL );
            tmp_locals_numpy$core$getlimits_34_key___init__ = tmp_assign_source_23;
        }
        // Tried code:
        {
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_dict_value_1 = const_str_digest_b8eaccad553858ca41bd501c0a17651e;
            tmp_dict_key_1 = const_str_plain___module__;
            tmp_assign_source_22 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem( tmp_assign_source_22, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_value_2 = const_str_digest_e7e19dd5257f03801740d23cfcc5941d;
            tmp_dict_key_2 = const_str_plain___doc__;
            tmp_res = PyDict_SetItem( tmp_assign_source_22, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_numpy$core$getlimits_34_key___init__ );
            tmp_dict_value_3 = tmp_locals_numpy$core$getlimits_34_key___init__;
            tmp_dict_key_3 = const_str_plain___init__;
            tmp_res = PyDict_SetItem( tmp_assign_source_22, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            goto try_return_handler_4;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$core$getlimits );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT( (PyObject *)tmp_locals_numpy$core$getlimits_34_key___init__ );
        Py_DECREF( tmp_locals_numpy$core$getlimits_34_key___init__ );
        tmp_locals_numpy$core$getlimits_34_key___init__ = NULL;

        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$core$getlimits );
        return MOD_RETURN_VALUE( NULL );
        outline_result_1:;
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_22;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
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


            exception_lineno = 34;

            goto try_except_handler_5;
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
        tmp_assign_source_24 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;

            goto try_except_handler_5;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_24 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_24 );
        condexpr_end_1:;
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = const_str_plain_MachArLike;
        tmp_args_element_name_2 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_f094195019d601afc7008f4ddc65b971->m_frame.f_lineno = 34;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;

            goto try_except_handler_5;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_25;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_assign_source_26 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_MachArLike, tmp_assign_source_26 );
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
        PyObject *tmp_assign_source_27;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
            exception_tb = NULL;

            exception_lineno = 62;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_single );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_dict_value_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
            exception_tb = NULL;

            exception_lineno = 62;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_dict_key_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_csingle );
        if ( tmp_dict_key_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dict_value_4 );

            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_27 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_assign_source_27, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        Py_DECREF( tmp_dict_key_4 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_27 );

            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_assign_source_27 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
            exception_tb = NULL;

            exception_lineno = 63;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_float_ );
        if ( tmp_dict_value_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_27 );

            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_assign_source_27 );
            Py_DECREF( tmp_dict_value_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
            exception_tb = NULL;

            exception_lineno = 63;

            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_4;
        tmp_dict_key_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_complex_ );
        if ( tmp_dict_key_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_27 );
            Py_DECREF( tmp_dict_value_5 );

            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_27, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_value_5 );
        Py_DECREF( tmp_dict_key_5 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_27 );

            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_assign_source_27 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
            exception_tb = NULL;

            exception_lineno = 64;

            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_5;
        tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_longfloat );
        if ( tmp_dict_value_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_27 );

            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_assign_source_27 );
            Py_DECREF( tmp_dict_value_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
            exception_tb = NULL;

            exception_lineno = 64;

            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_6;
        tmp_dict_key_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_clongfloat );
        if ( tmp_dict_key_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_27 );
            Py_DECREF( tmp_dict_value_6 );

            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_27, tmp_dict_key_6, tmp_dict_value_6 );
        Py_DECREF( tmp_dict_value_6 );
        Py_DECREF( tmp_dict_key_6 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_27 );

            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__convert_to_float, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = const_str_digest_71f9600c11b1b2dcd32646ee953369ea;
        UPDATE_STRING_DICT0( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__title_fmt, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_dict_key_19;
        PyObject *tmp_dict_value_19;
        PyObject *tmp_dict_key_20;
        PyObject *tmp_dict_value_20;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_dict_key_21;
        PyObject *tmp_dict_value_21;
        PyObject *tmp_dict_key_22;
        PyObject *tmp_dict_value_22;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_source_name_14;
        PyObject *tmp_mvar_value_18;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
            exception_tb = NULL;

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_7;
        tmp_dict_value_8 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_int64 );
        if ( tmp_dict_value_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_8 = const_str_plain_itype;
        tmp_dict_value_7 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_dict_value_7, tmp_dict_key_8, tmp_dict_value_8 );
        Py_DECREF( tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_9 = const_str_digest_16c966c18ae1e919ca62dfb9d9bdceba;
        tmp_dict_key_9 = const_str_plain_fmt;
        tmp_res = PyDict_SetItem( tmp_dict_value_7, tmp_dict_key_9, tmp_dict_value_9 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__title_fmt );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__title_fmt );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_dict_value_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_title_fmt" );
            exception_tb = NULL;

            exception_lineno = 73;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_8;
        frame_f094195019d601afc7008f4ddc65b971->m_frame.f_lineno = 73;
        tmp_dict_value_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_format, &PyTuple_GET_ITEM( const_tuple_str_plain_double_tuple, 0 ) );

        if ( tmp_dict_value_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dict_value_7 );

            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_10 = const_str_plain_title;
        tmp_res = PyDict_SetItem( tmp_dict_value_7, tmp_dict_key_10, tmp_dict_value_10 );
        Py_DECREF( tmp_dict_value_10 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_dict_value_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
            exception_tb = NULL;

            exception_lineno = 70;

            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_9;
        tmp_dict_key_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_double );
        if ( tmp_dict_key_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dict_value_7 );

            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_29 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem( tmp_assign_source_29, tmp_dict_key_7, tmp_dict_value_7 );
        Py_DECREF( tmp_dict_value_7 );
        Py_DECREF( tmp_dict_key_7 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_29 );

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
        }

        if ( tmp_mvar_value_10 == NULL )
        {
            Py_DECREF( tmp_assign_source_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
            exception_tb = NULL;

            exception_lineno = 75;

            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_10;
        tmp_dict_value_12 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_int32 );
        if ( tmp_dict_value_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_29 );

            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_12 = const_str_plain_itype;
        tmp_dict_value_11 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_dict_value_11, tmp_dict_key_12, tmp_dict_value_12 );
        Py_DECREF( tmp_dict_value_12 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_13 = const_str_digest_b11b128c563b5ffb658ae9500081eb04;
        tmp_dict_key_13 = const_str_plain_fmt;
        tmp_res = PyDict_SetItem( tmp_dict_value_11, tmp_dict_key_13, tmp_dict_value_13 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__title_fmt );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__title_fmt );
        }

        if ( tmp_mvar_value_11 == NULL )
        {
            Py_DECREF( tmp_assign_source_29 );
            Py_DECREF( tmp_dict_value_11 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_title_fmt" );
            exception_tb = NULL;

            exception_lineno = 77;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_11;
        frame_f094195019d601afc7008f4ddc65b971->m_frame.f_lineno = 77;
        tmp_dict_value_14 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_format, &PyTuple_GET_ITEM( const_tuple_str_plain_single_tuple, 0 ) );

        if ( tmp_dict_value_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_29 );
            Py_DECREF( tmp_dict_value_11 );

            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_14 = const_str_plain_title;
        tmp_res = PyDict_SetItem( tmp_dict_value_11, tmp_dict_key_14, tmp_dict_value_14 );
        Py_DECREF( tmp_dict_value_14 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
        }

        if ( tmp_mvar_value_12 == NULL )
        {
            Py_DECREF( tmp_assign_source_29 );
            Py_DECREF( tmp_dict_value_11 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
            exception_tb = NULL;

            exception_lineno = 74;

            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_12;
        tmp_dict_key_11 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_single );
        if ( tmp_dict_key_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_29 );
            Py_DECREF( tmp_dict_value_11 );

            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_29, tmp_dict_key_11, tmp_dict_value_11 );
        Py_DECREF( tmp_dict_value_11 );
        Py_DECREF( tmp_dict_key_11 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_29 );

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
        }

        if ( tmp_mvar_value_13 == NULL )
        {
            Py_DECREF( tmp_assign_source_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
            exception_tb = NULL;

            exception_lineno = 79;

            goto frame_exception_exit_1;
        }

        tmp_source_name_11 = tmp_mvar_value_13;
        tmp_dict_value_16 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_longlong );
        if ( tmp_dict_value_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_29 );

            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_16 = const_str_plain_itype;
        tmp_dict_value_15 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_dict_value_15, tmp_dict_key_16, tmp_dict_value_16 );
        Py_DECREF( tmp_dict_value_16 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_17 = const_str_digest_eee7b0934fe224b34ba6722d84ccd2bf;
        tmp_dict_key_17 = const_str_plain_fmt;
        tmp_res = PyDict_SetItem( tmp_dict_value_15, tmp_dict_key_17, tmp_dict_value_17 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__title_fmt );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__title_fmt );
        }

        if ( tmp_mvar_value_14 == NULL )
        {
            Py_DECREF( tmp_assign_source_29 );
            Py_DECREF( tmp_dict_value_15 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_title_fmt" );
            exception_tb = NULL;

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_14;
        frame_f094195019d601afc7008f4ddc65b971->m_frame.f_lineno = 81;
        tmp_dict_value_18 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_format, &PyTuple_GET_ITEM( const_tuple_str_digest_61eb47d02a6bf21baa1afce40f67ac8b_tuple, 0 ) );

        if ( tmp_dict_value_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_29 );
            Py_DECREF( tmp_dict_value_15 );

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_18 = const_str_plain_title;
        tmp_res = PyDict_SetItem( tmp_dict_value_15, tmp_dict_key_18, tmp_dict_value_18 );
        Py_DECREF( tmp_dict_value_18 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
        }

        if ( tmp_mvar_value_15 == NULL )
        {
            Py_DECREF( tmp_assign_source_29 );
            Py_DECREF( tmp_dict_value_15 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
            exception_tb = NULL;

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }

        tmp_source_name_12 = tmp_mvar_value_15;
        tmp_dict_key_15 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_longdouble );
        if ( tmp_dict_key_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_29 );
            Py_DECREF( tmp_dict_value_15 );

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_29, tmp_dict_key_15, tmp_dict_value_15 );
        Py_DECREF( tmp_dict_value_15 );
        Py_DECREF( tmp_dict_key_15 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_29 );

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
        }

        if ( tmp_mvar_value_16 == NULL )
        {
            Py_DECREF( tmp_assign_source_29 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
            exception_tb = NULL;

            exception_lineno = 83;

            goto frame_exception_exit_1;
        }

        tmp_source_name_13 = tmp_mvar_value_16;
        tmp_dict_value_20 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_int16 );
        if ( tmp_dict_value_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_29 );

            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_20 = const_str_plain_itype;
        tmp_dict_value_19 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_dict_value_19, tmp_dict_key_20, tmp_dict_value_20 );
        Py_DECREF( tmp_dict_value_20 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_21 = const_str_digest_08664f457b1a8dc7f05c9e1db0d9e3bd;
        tmp_dict_key_21 = const_str_plain_fmt;
        tmp_res = PyDict_SetItem( tmp_dict_value_19, tmp_dict_key_21, tmp_dict_value_21 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__title_fmt );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__title_fmt );
        }

        if ( tmp_mvar_value_17 == NULL )
        {
            Py_DECREF( tmp_assign_source_29 );
            Py_DECREF( tmp_dict_value_19 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_title_fmt" );
            exception_tb = NULL;

            exception_lineno = 85;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_17;
        frame_f094195019d601afc7008f4ddc65b971->m_frame.f_lineno = 85;
        tmp_dict_value_22 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_format, &PyTuple_GET_ITEM( const_tuple_str_plain_half_tuple, 0 ) );

        if ( tmp_dict_value_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_29 );
            Py_DECREF( tmp_dict_value_19 );

            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_22 = const_str_plain_title;
        tmp_res = PyDict_SetItem( tmp_dict_value_19, tmp_dict_key_22, tmp_dict_value_22 );
        Py_DECREF( tmp_dict_value_22 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
        }

        if ( tmp_mvar_value_18 == NULL )
        {
            Py_DECREF( tmp_assign_source_29 );
            Py_DECREF( tmp_dict_value_19 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
            exception_tb = NULL;

            exception_lineno = 82;

            goto frame_exception_exit_1;
        }

        tmp_source_name_14 = tmp_mvar_value_18;
        tmp_dict_key_19 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_half );
        if ( tmp_dict_key_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_29 );
            Py_DECREF( tmp_dict_value_19 );

            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_29, tmp_dict_key_19, tmp_dict_value_19 );
        Py_DECREF( tmp_dict_value_19 );
        Py_DECREF( tmp_dict_key_19 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_29 );

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__MACHAR_PARAMS, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = PyDict_New();
        UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__KNOWN_TYPES, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_FUNCTION_numpy$core$getlimits$$$function_4__register_type(  );



        UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__register_type, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = PyDict_New();
        UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__float_ma, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_FUNCTION_numpy$core$getlimits$$$function_5__register_known_types(  );



        UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__register_known_types, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_FUNCTION_numpy$core$getlimits$$$function_6__get_machar(  );



        UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__get_machar, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_FUNCTION_numpy$core$getlimits$$$function_7__discovered_machar(  );



        UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__discovered_machar, tmp_assign_source_35 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_36;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_numpy$core$getlimits_294 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_b8eaccad553858ca41bd501c0a17651e;
        tmp_res = PyDict_SetItem( locals_numpy$core$getlimits_294, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_7539c6308de2db2764b97103d1120c88;
        tmp_res = PyDict_SetItem( locals_numpy$core$getlimits_294, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = PyDict_New();
        tmp_res = PyDict_SetItem( locals_numpy$core$getlimits_294, const_str_plain__finfo_cache, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_ae14b95dd7bcc89fd869ebc8bfa24048_2, codeobj_ae14b95dd7bcc89fd869ebc8bfa24048, module_numpy$core$getlimits, 0 );
        frame_ae14b95dd7bcc89fd869ebc8bfa24048_2 = cache_frame_ae14b95dd7bcc89fd869ebc8bfa24048_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_ae14b95dd7bcc89fd869ebc8bfa24048_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_ae14b95dd7bcc89fd869ebc8bfa24048_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_staticmethod_arg_1;
            tmp_staticmethod_arg_1 = MAKE_FUNCTION_numpy$core$getlimits$$$function_8___new__(  );



            tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_1 );
            Py_DECREF( tmp_staticmethod_arg_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 365;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem( locals_numpy$core$getlimits_294, const_str_plain___new__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 365;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_ae14b95dd7bcc89fd869ebc8bfa24048_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_ae14b95dd7bcc89fd869ebc8bfa24048_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_ae14b95dd7bcc89fd869ebc8bfa24048_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_ae14b95dd7bcc89fd869ebc8bfa24048_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_ae14b95dd7bcc89fd869ebc8bfa24048_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_ae14b95dd7bcc89fd869ebc8bfa24048_2,
            type_description_2
        );


        // Release cached frame.
        if ( frame_ae14b95dd7bcc89fd869ebc8bfa24048_2 == cache_frame_ae14b95dd7bcc89fd869ebc8bfa24048_2 )
        {
            Py_DECREF( frame_ae14b95dd7bcc89fd869ebc8bfa24048_2 );
        }
        cache_frame_ae14b95dd7bcc89fd869ebc8bfa24048_2 = NULL;

        assertFrameObject( frame_ae14b95dd7bcc89fd869ebc8bfa24048_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_7;
        skip_nested_handling_1:;
        tmp_dictset_value = MAKE_FUNCTION_numpy$core$getlimits$$$function_9__init(  );



        tmp_res = PyDict_SetItem( locals_numpy$core$getlimits_294, const_str_plain__init, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_numpy$core$getlimits$$$function_10___str__(  );



        tmp_res = PyDict_SetItem( locals_numpy$core$getlimits_294, const_str_plain___str__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_numpy$core$getlimits$$$function_11___repr__(  );



        tmp_res = PyDict_SetItem( locals_numpy$core$getlimits_294, const_str_plain___repr__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_assign_source_36 = locals_numpy$core$getlimits_294;
        Py_INCREF( tmp_assign_source_36 );
        goto try_return_handler_7;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$core$getlimits );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF( locals_numpy$core$getlimits_294 );
        locals_numpy$core$getlimits_294 = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_numpy$core$getlimits_294 );
        locals_numpy$core$getlimits_294 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$core$getlimits );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 294;
        goto try_except_handler_6;
        outline_result_2:;
        assert( tmp_class_creation_2__class_dict == NULL );
        tmp_class_creation_2__class_dict = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
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


            exception_lineno = 294;

            goto try_except_handler_6;
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
        tmp_assign_source_37 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 294;

            goto try_except_handler_6;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_assign_source_37 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_37 );
        condexpr_end_2:;
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_called_name_2 = tmp_class_creation_2__metaclass;
        tmp_args_element_name_4 = const_str_plain_finfo;
        tmp_args_element_name_5 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_2__class_dict );
        tmp_args_element_name_6 = tmp_class_creation_2__class_dict;
        frame_f094195019d601afc7008f4ddc65b971->m_frame.f_lineno = 294;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 294;

            goto try_except_handler_6;
        }
        assert( tmp_class_creation_2__class == NULL );
        tmp_class_creation_2__class = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_name_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_set_module );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_set_module );
        }

        if ( tmp_mvar_value_19 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "set_module" );
            exception_tb = NULL;

            exception_lineno = 293;

            goto try_except_handler_6;
        }

        tmp_called_name_4 = tmp_mvar_value_19;
        frame_f094195019d601afc7008f4ddc65b971->m_frame.f_lineno = 293;
        tmp_called_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_str_plain_numpy_tuple, 0 ) );

        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 293;

            goto try_except_handler_6;
        }
        CHECK_OBJECT( tmp_class_creation_2__class );
        tmp_args_element_name_7 = tmp_class_creation_2__class;
        frame_f094195019d601afc7008f4ddc65b971->m_frame.f_lineno = 293;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 293;

            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_class_creation_2__class;
            assert( old != NULL );
            tmp_class_creation_2__class = tmp_assign_source_39;
            Py_DECREF( old );
        }

    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_2__class );
    tmp_class_creation_2__class = NULL;

    Py_XDECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    {
        PyObject *tmp_assign_source_40;
        CHECK_OBJECT( tmp_class_creation_2__class );
        tmp_assign_source_40 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_finfo, tmp_assign_source_40 );
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

    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        {
            PyObject *tmp_set_locals_2;
            tmp_set_locals_2 = PyDict_New();
            locals_numpy$core$getlimits_445 = tmp_set_locals_2;
        }
        tmp_dictset_value = const_str_digest_b8eaccad553858ca41bd501c0a17651e;
        tmp_res = PyDict_SetItem( locals_numpy$core$getlimits_445, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_c9daff2734dd6db50e0c7d322a45e9de;
        tmp_res = PyDict_SetItem( locals_numpy$core$getlimits_445, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = PyDict_New();
        tmp_res = PyDict_SetItem( locals_numpy$core$getlimits_445, const_str_plain__min_vals, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = PyDict_New();
        tmp_res = PyDict_SetItem( locals_numpy$core$getlimits_445, const_str_plain__max_vals, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_numpy$core$getlimits$$$function_12___init__(  );



        tmp_res = PyDict_SetItem( locals_numpy$core$getlimits_445, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_numpy$core$getlimits$$$function_13_min(  );



        tmp_res = PyDict_SetItem( locals_numpy$core$getlimits_445, const_str_plain_min, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_242d4be54487a88e2cbd4443d365da37_3, codeobj_242d4be54487a88e2cbd4443d365da37, module_numpy$core$getlimits, 0 );
        frame_242d4be54487a88e2cbd4443d365da37_3 = cache_frame_242d4be54487a88e2cbd4443d365da37_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_242d4be54487a88e2cbd4443d365da37_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_242d4be54487a88e2cbd4443d365da37_3 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_8;
            tmp_called_name_5 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_8 = PyDict_GetItem( locals_numpy$core$getlimits_445, const_str_plain_min );

            if ( tmp_args_element_name_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "min" );
                exception_tb = NULL;

                exception_lineno = 520;

                goto frame_exception_exit_3;
            }

            if ( tmp_args_element_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 520;

                goto frame_exception_exit_3;
            }
            frame_242d4be54487a88e2cbd4443d365da37_3->m_frame.f_lineno = 520;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 520;

                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem( locals_numpy$core$getlimits_445, const_str_plain_min, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 520;

                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_numpy$core$getlimits$$$function_14_max(  );



        tmp_res = PyDict_SetItem( locals_numpy$core$getlimits_445, const_str_plain_max, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_9;
            tmp_called_name_6 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_9 = PyDict_GetItem( locals_numpy$core$getlimits_445, const_str_plain_max );

            if ( tmp_args_element_name_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "max" );
                exception_tb = NULL;

                exception_lineno = 534;

                goto frame_exception_exit_3;
            }

            if ( tmp_args_element_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 534;

                goto frame_exception_exit_3;
            }
            frame_242d4be54487a88e2cbd4443d365da37_3->m_frame.f_lineno = 534;
            {
                PyObject *call_args[] = { tmp_args_element_name_9 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 534;

                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem( locals_numpy$core$getlimits_445, const_str_plain_max, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 534;

                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_242d4be54487a88e2cbd4443d365da37_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_242d4be54487a88e2cbd4443d365da37_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_242d4be54487a88e2cbd4443d365da37_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_242d4be54487a88e2cbd4443d365da37_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_242d4be54487a88e2cbd4443d365da37_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_242d4be54487a88e2cbd4443d365da37_3,
            type_description_2
        );


        // Release cached frame.
        if ( frame_242d4be54487a88e2cbd4443d365da37_3 == cache_frame_242d4be54487a88e2cbd4443d365da37_3 )
        {
            Py_DECREF( frame_242d4be54487a88e2cbd4443d365da37_3 );
        }
        cache_frame_242d4be54487a88e2cbd4443d365da37_3 = NULL;

        assertFrameObject( frame_242d4be54487a88e2cbd4443d365da37_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_9;
        skip_nested_handling_2:;
        tmp_dictset_value = MAKE_FUNCTION_numpy$core$getlimits$$$function_15___str__(  );



        tmp_res = PyDict_SetItem( locals_numpy$core$getlimits_445, const_str_plain___str__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_numpy$core$getlimits$$$function_16___repr__(  );



        tmp_res = PyDict_SetItem( locals_numpy$core$getlimits_445, const_str_plain___repr__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_assign_source_41 = locals_numpy$core$getlimits_445;
        Py_INCREF( tmp_assign_source_41 );
        goto try_return_handler_9;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$core$getlimits );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF( locals_numpy$core$getlimits_445 );
        locals_numpy$core$getlimits_445 = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_numpy$core$getlimits_445 );
        locals_numpy$core$getlimits_445 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$core$getlimits );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 445;
        goto try_except_handler_8;
        outline_result_3:;
        assert( tmp_class_creation_3__class_dict == NULL );
        tmp_class_creation_3__class_dict = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
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


            exception_lineno = 445;

            goto try_except_handler_8;
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
        tmp_assign_source_42 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
        if ( tmp_assign_source_42 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 445;

            goto try_except_handler_8;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_assign_source_42 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_42 );
        condexpr_end_3:;
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_called_name_7 = tmp_class_creation_3__metaclass;
        tmp_args_element_name_10 = const_str_plain_iinfo;
        tmp_args_element_name_11 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_3__class_dict );
        tmp_args_element_name_12 = tmp_class_creation_3__class_dict;
        frame_f094195019d601afc7008f4ddc65b971->m_frame.f_lineno = 445;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
        }

        if ( tmp_assign_source_43 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 445;

            goto try_except_handler_8;
        }
        assert( tmp_class_creation_3__class == NULL );
        tmp_class_creation_3__class = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_name_8;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_args_element_name_13;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_set_module );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_set_module );
        }

        if ( tmp_mvar_value_20 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "set_module" );
            exception_tb = NULL;

            exception_lineno = 444;

            goto try_except_handler_8;
        }

        tmp_called_name_9 = tmp_mvar_value_20;
        frame_f094195019d601afc7008f4ddc65b971->m_frame.f_lineno = 444;
        tmp_called_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, &PyTuple_GET_ITEM( const_tuple_str_plain_numpy_tuple, 0 ) );

        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 444;

            goto try_except_handler_8;
        }
        CHECK_OBJECT( tmp_class_creation_3__class );
        tmp_args_element_name_13 = tmp_class_creation_3__class;
        frame_f094195019d601afc7008f4ddc65b971->m_frame.f_lineno = 444;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_assign_source_44 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_called_name_8 );
        if ( tmp_assign_source_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 444;

            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_class_creation_3__class;
            assert( old != NULL );
            tmp_class_creation_3__class = tmp_assign_source_44;
            Py_DECREF( old );
        }

    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_3__class );
    tmp_class_creation_3__class = NULL;

    Py_XDECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f094195019d601afc7008f4ddc65b971 );
#endif
    popFrameStack();

    assertFrameObject( frame_f094195019d601afc7008f4ddc65b971 );

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f094195019d601afc7008f4ddc65b971 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f094195019d601afc7008f4ddc65b971, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f094195019d601afc7008f4ddc65b971->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f094195019d601afc7008f4ddc65b971, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;
    {
        PyObject *tmp_assign_source_45;
        CHECK_OBJECT( tmp_class_creation_3__class );
        tmp_assign_source_45 = tmp_class_creation_3__class;
        UPDATE_STRING_DICT0( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_iinfo, tmp_assign_source_45 );
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
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_numpy$core$getlimits );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
