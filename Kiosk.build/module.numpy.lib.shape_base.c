/* Generated code for Python module 'numpy.lib.shape_base'
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

/* The "_module_numpy$lib$shape_base" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$shape_base;
PyDictObject *moduledict_numpy$lib$shape_base;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_partial;
extern PyObject *const_str_plain_column_stack;
static PyObject *const_str_plain_shape_out;
static PyObject *const_tuple_e41c7b17bd7c8e972e714f5638db4c13_tuple;
static PyObject *const_str_plain_get_array_wrap;
extern PyObject *const_str_plain_st;
extern PyObject *const_str_plain_func;
extern PyObject *const_list_int_0_list;
extern PyObject *const_str_digest_05505d3dfcf4f98fe70aff71c6cc60d8;
static PyObject *const_str_plain_dim_in;
extern PyObject *const_str_plain_dtype;
static PyObject *const_str_plain_kron;
extern PyObject *const_str_plain_subok;
extern PyObject *const_str_plain_bs;
extern PyObject *const_str_plain_indices;
static PyObject *const_str_plain_out_arr;
extern PyObject *const_tuple_empty;
extern PyObject *const_tuple_str_plain_tup_str_plain__m_tuple;
static PyObject *const_str_digest_b45c29480c47e55f61140d3585f480c5;
static PyObject *const_str_plain__hvdsplit_dispatcher;
extern PyObject *const_tuple_str_plain_a_str_plain_axis_tuple;
extern PyObject *const_str_plain_warn;
static PyObject *const_str_digest_7068e1ab3f46abe79d5df3f226afba9f;
static PyObject *const_str_digest_eac3415d7cf49115ad291e08a06d188e;
static PyObject *const_str_plain__tile_dispatcher;
extern PyObject *const_str_plain_overrides;
extern PyObject *const_str_plain_cumsum;
extern PyObject *const_str_plain_axis;
static PyObject *const_str_plain_Neach_section;
extern PyObject *const_str_plain_size;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain_row_stack;
static PyObject *const_str_digest_962ec1ed514b8a434076e912ec0249ab;
extern PyObject *const_str_plain_concatenate;
extern PyObject *const_str_plain_enumerate;
static PyObject *const_str_plain__column_stack_dispatcher;
static PyObject *const_dict_20a8437039fff2081eab2b4af8c84007;
static PyObject *const_str_plain_array_split;
static PyObject *const_str_plain_buff_permute;
static PyObject *const_tuple_adb719265e016bd8841be1a09c2ebbd0_tuple;
extern PyObject *const_str_plain_zeros;
static PyObject *const_str_digest_92c3af791b30013b3e19c700df5101a5;
extern PyObject *const_str_plain_res;
extern PyObject *const_str_plain_ind;
static PyObject *const_tuple_str_plain_tup_str_plain_arrays_str_plain_arr_str_plain_v_tuple;
static PyObject *const_str_digest_af4947347384f3dff9d2f17dd2a68017;
static PyObject *const_str_digest_a6acd8ad205213dce90c730c6e3a92ce;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain__nx;
extern PyObject *const_str_plain_asarray;
static PyObject *const_str_plain__array_split_dispatcher;
static PyObject *const_tuple_str_plain_func_str_plain_a_str_plain_axes_tuple;
extern PyObject *const_str_plain_apply_over_axes;
extern PyObject *const_str_plain_inds;
static PyObject *const_tuple_str_plain_matrix_tuple;
static PyObject *const_tuple_f4d74bf49fb06ec547a4ecd7b85e5205_tuple;
static PyObject *const_str_plain_shape_ones;
extern PyObject *const_dict_f154c9a58c9419d7e391901d7b7fe49e;
extern PyObject *const_str_plain_atleast_3d;
static PyObject *const_tuple_str_plain_A_str_plain_reps_tuple;
static PyObject *const_str_plain_fancy_index;
extern PyObject *const_str_plain_hsplit;
extern PyObject *const_str_plain_ndmin;
static PyObject *const_list_8c7b5f5ec67282d4204738cdfc41acdf_list;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_digest_a6c9661edfc53be0582119cf20ef2f87;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_normalize_axis_index;
extern PyObject *const_str_plain_sorted;
extern PyObject *const_str_plain_take_along_axis;
static PyObject *const_str_plain_as_;
extern PyObject *const_str_plain_c;
static PyObject *const_tuple_740e2f2d5071ad6b472d24f3f7f89fec_tuple;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_stacklevel;
extern PyObject *const_str_plain_reshape;
extern PyObject *const_dict_6e6659be28864e39bad7cab4409b7e16;
extern PyObject *const_str_plain_product;
extern PyObject *const_str_plain_split;
static PyObject *const_tuple_str_plain_ndindex_tuple;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_str_plain_sometrue;
extern PyObject *const_tuple_int_0_tuple;
static PyObject *const_tuple_str_plain_a_str_plain_axis_str_plain_shape_tuple;
static PyObject *const_str_plain_wrappers;
extern PyObject *const_str_plain_dim;
static PyObject *const_str_plain_vsplit;
static PyObject *const_tuple_str_plain_arr_str_plain_indices_str_plain_axis_tuple;
static PyObject *const_str_plain_ind_shape;
static PyObject *const_tuple_str_plain_ary_str_plain_indices_or_sections_tuple;
static PyObject *const_str_digest_7aa728c6f3681233b4c51e9236d6563b;
extern PyObject *const_str_plain_ndindex;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_N;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_s;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_6d60e43c9e85db243045fdf79d405601;
static PyObject *const_str_digest_f8cac42b5769f82a94f0f52ce94bd365;
static PyObject *const_str_digest_a41952ff1213c8219d6c2e5c778507d2;
static PyObject *const_str_digest_de62dd5e9dda91234521c86b29ab6a11;
extern PyObject *const_tuple_int_neg_1_tuple;
extern PyObject *const_str_plain_nd;
extern PyObject *const_str_digest_82d72071fc1da9db8c6dd31f1049410c;
static PyObject *const_str_plain__put_along_axis_dispatcher;
static PyObject *const_str_plain__make_along_axis_idx;
static PyObject *const_str_plain__expand_dims_dispatcher;
extern PyObject *const_str_plain_array;
static PyObject *const_str_plain__replace_zero_by_x_arrays;
static PyObject *const_str_plain_Nsections;
extern PyObject *const_str_plain_arr;
static PyObject *const_str_digest_41ec33c6fb89fb35bf4c5dc200c0457d;
extern PyObject *const_str_plain_Ellipsis;
extern PyObject *const_tuple_str_plain_a_str_plain_b_tuple;
static PyObject *const_str_digest_a39171c0a7a8134aa75507257c0b64bd;
extern PyObject *const_str_plain_issubdtype;
static PyObject *const_str_digest_aac2e5f3a6e99386a80af0efb226fceb;
extern PyObject *const_str_plain_swapaxes;
static PyObject *const_str_plain_put_along_axis;
extern PyObject *const_dict_a00acf95180a0925f15877b623331589;
extern PyObject *const_str_plain___array_priority__;
static PyObject *const_str_plain__apply_over_axes_dispatcher;
static PyObject *const_tuple_ddf877919c75a1862507b23157c69cd0_tuple;
extern PyObject *const_str_digest_0db40bb03ee4a45a6df8ba3195dd83a5;
extern PyObject *const_str_plain_arrays;
static PyObject *const_tuple_str_plain_product_str_plain_reshape_str_plain_transpose_tuple;
extern PyObject *const_str_plain_transpose;
extern PyObject *const_str_digest_fef7e379d8b29f70158a022afa317baa;
static PyObject *const_str_plain_indices_or_sections;
extern PyObject *const_str_digest_aa3423acdb6152e259f846c9911226b3;
extern PyObject *const_str_plain_matrix;
extern PyObject *const_tuple_str_plain_tup_tuple;
static PyObject *const_str_digest_af761d9a3c934f241f4f72138f30e655;
static PyObject *const_str_digest_a49a256d0acc9717adf9049a10890d1b;
extern PyObject *const_str_plain_values;
extern PyObject *const_str_angle_genexpr;
extern PyObject *const_list_none_list;
static PyObject *const_str_digest_53f792c3b92b6b57de23c89d18aa31db;
static PyObject *const_str_plain_inarr_view;
static PyObject *const_str_digest_d6f837cfab6b2c229dd806949071503a;
extern PyObject *const_tuple_05004b9d7964168aa8843ec3e02a3feb_tuple;
static PyObject *const_tuple_482f9862c91c698713aa4b94d4a449d4_tuple;
extern PyObject *const_str_plain_functools;
extern PyObject *const_str_plain_extras;
static PyObject *const_str_digest_0da0dce8d822dc3d2ac8de9e61f46138;
extern PyObject *const_str_plain_empty;
static PyObject *const_str_plain_buff_dims;
extern PyObject *const_str_plain_ndarray;
static PyObject *const_tuple_99fda6b64c33fb6f757b9825e1b8f202_tuple;
extern PyObject *const_str_plain_flat;
extern PyObject *const_str_plain_numeric;
static PyObject *const_str_plain_nrep;
static PyObject *const_str_plain_sub_arys;
extern PyObject *const_str_plain___array_wrap__;
extern PyObject *const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
extern PyObject *const_str_plain_A;
extern PyObject *const_str_plain__arrays_for_stack_dispatcher;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain_wrapper;
extern PyObject *const_str_plain_contiguous;
extern PyObject *const_str_plain__m;
extern PyObject *const_str_plain_T;
static PyObject *const_tuple_str_plain_args_str_plain_wrappers_tuple;
extern PyObject *const_str_plain_shape;
static PyObject *const_str_plain__apply_along_axis_dispatcher;
static PyObject *const_str_plain__kron_dispatcher;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_axes;
extern PyObject *const_str_plain_array_function_dispatch;
extern PyObject *const_str_plain_equal;
extern PyObject *const_str_plain_flags;
static PyObject *const_tuple_deccbc05fb5f22947ba00669a52c159e_tuple;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_DeprecationWarning;
extern PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple;
extern PyObject *const_str_plain_x;
static PyObject *const_tuple_05b428346b03d369d615a164cd1ed02c_tuple;
static PyObject *const_tuple_str_plain_sub_arys_str_plain_i_tuple;
extern PyObject *const_str_plain_v;
static PyObject *const_tuple_88ee0303612dfe34782af5675ecdd35f_tuple;
static PyObject *const_str_plain_tile;
static PyObject *const_tuple_78d887ae2d29ddaf6f2cdadf5d4f1d8d_tuple;
static PyObject *const_str_plain_section_sizes;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_str_plain_func1d;
static PyObject *const_str_digest_65fecc3c16c125dda36672d6c29323c7;
static PyObject *const_str_plain_dest_dims;
static PyObject *const_str_digest_36d3bf65d2976ca53953f3831bf4a3e1;
extern PyObject *const_str_digest_f104ae7867dfcd3f38891fc4f1b7cd57;
static PyObject *const_str_plain_dsplit;
extern PyObject *const_tuple_str_plain_overrides_tuple;
extern PyObject *const_str_plain_all;
static PyObject *const_str_digest_08a38aa2e3119a1ffd1769f455bb2b91;
static PyObject *const_str_plain_Ntotal;
extern PyObject *const_str_plain_core;
extern PyObject *const_str_plain_multiply;
extern PyObject *const_str_plain_sections;
static PyObject *const_tuple_554bff95095d107c1a707bf167f7ab47_tuple;
extern PyObject *const_str_plain_repeat;
static PyObject *const_tuple_8b1746e470a0bd8602e3a2a27456d69c_tuple;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_integer;
extern PyObject *const_str_plain_dstack;
extern PyObject *const_str_plain__warn_for_nonsequence;
extern PyObject *const_str_plain_apply_along_axis;
extern PyObject *const_str_plain_module;
static PyObject *const_str_plain_arr_shape;
static PyObject *const_str_plain_sary;
extern PyObject *const_str_plain_arange;
extern PyObject *const_str_plain_zip;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
static PyObject *const_str_plain__take_along_axis_dispatcher;
static PyObject *const_str_plain_reps;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_intp;
static PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_ind_tuple;
static PyObject *const_str_plain_nda;
static PyObject *const_str_plain_ndb;
extern PyObject *const_str_plain_i;
static PyObject *const_str_plain_buff;
extern PyObject *const_str_plain_tup;
extern PyObject *const_str_plain_val;
static PyObject *const_str_digest_65cb7cb73d8a7b0b825ded29c41ffeaa;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_asanyarray;
extern PyObject *const_str_plain_ary;
extern PyObject *const_str_plain_division;
static PyObject *const_str_digest_1d96fe8a6d92c945e6a5dd4411661d07;
static PyObject *const_str_plain_in_dims;
extern PyObject *const_str_plain__split_dispatcher;
static PyObject *const_tuple_str_plain_vstack_str_plain_atleast_3d_tuple;
static PyObject *const_tuple_str_plain_ary_str_plain_indices_or_sections_str_plain_axis_tuple;
extern PyObject *const_str_plain_end;
extern PyObject *const_str_plain_expand_dims;
static PyObject *const_str_plain_get_array_prepare;
extern PyObject *const_str_plain___array_prepare__;
static PyObject *const_tuple_56a915ad951f23e33b5388880a6fe4e6_tuple;
extern PyObject *const_tuple_str_plain_normalize_axis_index_tuple;
extern PyObject *const_str_plain_append;
static PyObject *const_str_digest_8fb3c62e9b3531d50e69aa26ef8b4b5b;
static PyObject *const_str_plain__dstack_dispatcher;
extern PyObject *const_tuple_ellipsis_tuple;
static PyObject *const_str_plain_div_points;
extern PyObject *const_str_plain_outer;
static PyObject *const_str_plain_ind0;
extern PyObject *const_str_plain__;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_vstack;
extern PyObject *const_str_digest_4179858148d85e138b7e27f6f7ce41c6;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_shape_out = UNSTREAM_STRING( &constant_bin[ 1771511 ], 9, 1 );
    const_tuple_e41c7b17bd7c8e972e714f5638db4c13_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_e41c7b17bd7c8e972e714f5638db4c13_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_e41c7b17bd7c8e972e714f5638db4c13_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    const_str_plain_nda = UNSTREAM_STRING( &constant_bin[ 53314 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_e41c7b17bd7c8e972e714f5638db4c13_tuple, 2, const_str_plain_nda ); Py_INCREF( const_str_plain_nda );
    PyTuple_SET_ITEM( const_tuple_e41c7b17bd7c8e972e714f5638db4c13_tuple, 3, const_str_plain_nd ); Py_INCREF( const_str_plain_nd );
    const_str_plain_ndb = UNSTREAM_STRING( &constant_bin[ 704016 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_e41c7b17bd7c8e972e714f5638db4c13_tuple, 4, const_str_plain_ndb ); Py_INCREF( const_str_plain_ndb );
    const_str_plain_as_ = UNSTREAM_STRING( &constant_bin[ 18597 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_e41c7b17bd7c8e972e714f5638db4c13_tuple, 5, const_str_plain_as_ ); Py_INCREF( const_str_plain_as_ );
    PyTuple_SET_ITEM( const_tuple_e41c7b17bd7c8e972e714f5638db4c13_tuple, 6, const_str_plain_wrapper ); Py_INCREF( const_str_plain_wrapper );
    PyTuple_SET_ITEM( const_tuple_e41c7b17bd7c8e972e714f5638db4c13_tuple, 7, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    PyTuple_SET_ITEM( const_tuple_e41c7b17bd7c8e972e714f5638db4c13_tuple, 8, const_str_plain_bs ); Py_INCREF( const_str_plain_bs );
    PyTuple_SET_ITEM( const_tuple_e41c7b17bd7c8e972e714f5638db4c13_tuple, 9, const_str_plain__ ); Py_INCREF( const_str_plain__ );
    PyTuple_SET_ITEM( const_tuple_e41c7b17bd7c8e972e714f5638db4c13_tuple, 10, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    const_str_plain_get_array_wrap = UNSTREAM_STRING( &constant_bin[ 1771520 ], 14, 1 );
    const_str_plain_dim_in = UNSTREAM_STRING( &constant_bin[ 1434762 ], 6, 1 );
    const_str_plain_kron = UNSTREAM_STRING( &constant_bin[ 1771534 ], 4, 1 );
    const_str_plain_out_arr = UNSTREAM_STRING( &constant_bin[ 1053454 ], 7, 1 );
    const_str_digest_b45c29480c47e55f61140d3585f480c5 = UNSTREAM_STRING( &constant_bin[ 1771538 ], 59, 0 );
    const_str_plain__hvdsplit_dispatcher = UNSTREAM_STRING( &constant_bin[ 1771597 ], 20, 1 );
    const_str_digest_7068e1ab3f46abe79d5df3f226afba9f = UNSTREAM_STRING( &constant_bin[ 1771617 ], 1526, 0 );
    const_str_digest_eac3415d7cf49115ad291e08a06d188e = UNSTREAM_STRING( &constant_bin[ 1773143 ], 51, 0 );
    const_str_plain__tile_dispatcher = UNSTREAM_STRING( &constant_bin[ 1773194 ], 16, 1 );
    const_str_plain_Neach_section = UNSTREAM_STRING( &constant_bin[ 1773210 ], 13, 1 );
    const_str_digest_962ec1ed514b8a434076e912ec0249ab = UNSTREAM_STRING( &constant_bin[ 1773223 ], 29, 0 );
    const_str_plain__column_stack_dispatcher = UNSTREAM_STRING( &constant_bin[ 1773252 ], 24, 1 );
    const_dict_20a8437039fff2081eab2b4af8c84007 = _PyDict_NewPresized( 3 );
    PyDict_SetItem( const_dict_20a8437039fff2081eab2b4af8c84007, const_str_plain_subok, Py_True );
    PyDict_SetItem( const_dict_20a8437039fff2081eab2b4af8c84007, const_str_plain_copy, Py_False );
    PyDict_SetItem( const_dict_20a8437039fff2081eab2b4af8c84007, const_str_plain_ndmin, const_int_pos_2 );
    assert( PyDict_Size( const_dict_20a8437039fff2081eab2b4af8c84007 ) == 3 );
    const_str_plain_array_split = UNSTREAM_STRING( &constant_bin[ 1194665 ], 11, 1 );
    const_str_plain_buff_permute = UNSTREAM_STRING( &constant_bin[ 1773276 ], 12, 1 );
    const_tuple_adb719265e016bd8841be1a09c2ebbd0_tuple = PyTuple_New( 5 );
    const_str_plain_func1d = UNSTREAM_STRING( &constant_bin[ 1773288 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_adb719265e016bd8841be1a09c2ebbd0_tuple, 0, const_str_plain_func1d ); Py_INCREF( const_str_plain_func1d );
    PyTuple_SET_ITEM( const_tuple_adb719265e016bd8841be1a09c2ebbd0_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_adb719265e016bd8841be1a09c2ebbd0_tuple, 2, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_adb719265e016bd8841be1a09c2ebbd0_tuple, 3, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_adb719265e016bd8841be1a09c2ebbd0_tuple, 4, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_digest_92c3af791b30013b3e19c700df5101a5 = UNSTREAM_STRING( &constant_bin[ 1773231 ], 20, 0 );
    const_tuple_str_plain_tup_str_plain_arrays_str_plain_arr_str_plain_v_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_tup_str_plain_arrays_str_plain_arr_str_plain_v_tuple, 0, const_str_plain_tup ); Py_INCREF( const_str_plain_tup );
    PyTuple_SET_ITEM( const_tuple_str_plain_tup_str_plain_arrays_str_plain_arr_str_plain_v_tuple, 1, const_str_plain_arrays ); Py_INCREF( const_str_plain_arrays );
    PyTuple_SET_ITEM( const_tuple_str_plain_tup_str_plain_arrays_str_plain_arr_str_plain_v_tuple, 2, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_str_plain_tup_str_plain_arrays_str_plain_arr_str_plain_v_tuple, 3, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    const_str_digest_af4947347384f3dff9d2f17dd2a68017 = UNSTREAM_STRING( &constant_bin[ 1773294 ], 2191, 0 );
    const_str_digest_a6acd8ad205213dce90c730c6e3a92ce = UNSTREAM_STRING( &constant_bin[ 1775485 ], 1460, 0 );
    const_str_plain__array_split_dispatcher = UNSTREAM_STRING( &constant_bin[ 1776945 ], 23, 1 );
    const_tuple_str_plain_func_str_plain_a_str_plain_axes_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_func_str_plain_a_str_plain_axes_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_str_plain_func_str_plain_a_str_plain_axes_tuple, 1, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_func_str_plain_a_str_plain_axes_tuple, 2, const_str_plain_axes ); Py_INCREF( const_str_plain_axes );
    const_tuple_str_plain_matrix_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_matrix_tuple, 0, const_str_plain_matrix ); Py_INCREF( const_str_plain_matrix );
    const_tuple_f4d74bf49fb06ec547a4ecd7b85e5205_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_f4d74bf49fb06ec547a4ecd7b85e5205_tuple, 0, const_str_plain_ary ); Py_INCREF( const_str_plain_ary );
    const_str_plain_indices_or_sections = UNSTREAM_STRING( &constant_bin[ 1773438 ], 19, 1 );
    PyTuple_SET_ITEM( const_tuple_f4d74bf49fb06ec547a4ecd7b85e5205_tuple, 1, const_str_plain_indices_or_sections ); Py_INCREF( const_str_plain_indices_or_sections );
    PyTuple_SET_ITEM( const_tuple_f4d74bf49fb06ec547a4ecd7b85e5205_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_f4d74bf49fb06ec547a4ecd7b85e5205_tuple, 3, const_str_plain_end ); Py_INCREF( const_str_plain_end );
    const_str_plain_section_sizes = UNSTREAM_STRING( &constant_bin[ 1776968 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_f4d74bf49fb06ec547a4ecd7b85e5205_tuple, 4, const_str_plain_section_sizes ); Py_INCREF( const_str_plain_section_sizes );
    PyTuple_SET_ITEM( const_tuple_f4d74bf49fb06ec547a4ecd7b85e5205_tuple, 5, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_str_plain_Ntotal = UNSTREAM_STRING( &constant_bin[ 1776981 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_f4d74bf49fb06ec547a4ecd7b85e5205_tuple, 6, const_str_plain_Ntotal ); Py_INCREF( const_str_plain_Ntotal );
    const_str_plain_Nsections = UNSTREAM_STRING( &constant_bin[ 1776987 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_f4d74bf49fb06ec547a4ecd7b85e5205_tuple, 7, const_str_plain_Nsections ); Py_INCREF( const_str_plain_Nsections );
    const_str_plain_sub_arys = UNSTREAM_STRING( &constant_bin[ 1776996 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_f4d74bf49fb06ec547a4ecd7b85e5205_tuple, 8, const_str_plain_sub_arys ); Py_INCREF( const_str_plain_sub_arys );
    PyTuple_SET_ITEM( const_tuple_f4d74bf49fb06ec547a4ecd7b85e5205_tuple, 9, const_str_plain_extras ); Py_INCREF( const_str_plain_extras );
    PyTuple_SET_ITEM( const_tuple_f4d74bf49fb06ec547a4ecd7b85e5205_tuple, 10, const_str_plain_st ); Py_INCREF( const_str_plain_st );
    PyTuple_SET_ITEM( const_tuple_f4d74bf49fb06ec547a4ecd7b85e5205_tuple, 11, const_str_plain_Neach_section ); Py_INCREF( const_str_plain_Neach_section );
    const_str_plain_div_points = UNSTREAM_STRING( &constant_bin[ 1777004 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_f4d74bf49fb06ec547a4ecd7b85e5205_tuple, 12, const_str_plain_div_points ); Py_INCREF( const_str_plain_div_points );
    const_str_plain_sary = UNSTREAM_STRING( &constant_bin[ 31204 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_f4d74bf49fb06ec547a4ecd7b85e5205_tuple, 13, const_str_plain_sary ); Py_INCREF( const_str_plain_sary );
    const_str_plain_shape_ones = UNSTREAM_STRING( &constant_bin[ 1777014 ], 10, 1 );
    const_tuple_str_plain_A_str_plain_reps_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_A_str_plain_reps_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    const_str_plain_reps = UNSTREAM_STRING( &constant_bin[ 570226 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_A_str_plain_reps_tuple, 1, const_str_plain_reps ); Py_INCREF( const_str_plain_reps );
    const_str_plain_fancy_index = UNSTREAM_STRING( &constant_bin[ 1777024 ], 11, 1 );
    const_list_8c7b5f5ec67282d4204738cdfc41acdf_list = PyList_New( 16 );
    PyList_SET_ITEM( const_list_8c7b5f5ec67282d4204738cdfc41acdf_list, 0, const_str_plain_column_stack ); Py_INCREF( const_str_plain_column_stack );
    PyList_SET_ITEM( const_list_8c7b5f5ec67282d4204738cdfc41acdf_list, 1, const_str_plain_row_stack ); Py_INCREF( const_str_plain_row_stack );
    PyList_SET_ITEM( const_list_8c7b5f5ec67282d4204738cdfc41acdf_list, 2, const_str_plain_dstack ); Py_INCREF( const_str_plain_dstack );
    PyList_SET_ITEM( const_list_8c7b5f5ec67282d4204738cdfc41acdf_list, 3, const_str_plain_array_split ); Py_INCREF( const_str_plain_array_split );
    PyList_SET_ITEM( const_list_8c7b5f5ec67282d4204738cdfc41acdf_list, 4, const_str_plain_split ); Py_INCREF( const_str_plain_split );
    PyList_SET_ITEM( const_list_8c7b5f5ec67282d4204738cdfc41acdf_list, 5, const_str_plain_hsplit ); Py_INCREF( const_str_plain_hsplit );
    const_str_plain_vsplit = UNSTREAM_STRING( &constant_bin[ 1194921 ], 6, 1 );
    PyList_SET_ITEM( const_list_8c7b5f5ec67282d4204738cdfc41acdf_list, 6, const_str_plain_vsplit ); Py_INCREF( const_str_plain_vsplit );
    const_str_plain_dsplit = UNSTREAM_STRING( &constant_bin[ 1194993 ], 6, 1 );
    PyList_SET_ITEM( const_list_8c7b5f5ec67282d4204738cdfc41acdf_list, 7, const_str_plain_dsplit ); Py_INCREF( const_str_plain_dsplit );
    PyList_SET_ITEM( const_list_8c7b5f5ec67282d4204738cdfc41acdf_list, 8, const_str_plain_apply_over_axes ); Py_INCREF( const_str_plain_apply_over_axes );
    PyList_SET_ITEM( const_list_8c7b5f5ec67282d4204738cdfc41acdf_list, 9, const_str_plain_expand_dims ); Py_INCREF( const_str_plain_expand_dims );
    PyList_SET_ITEM( const_list_8c7b5f5ec67282d4204738cdfc41acdf_list, 10, const_str_plain_apply_along_axis ); Py_INCREF( const_str_plain_apply_along_axis );
    PyList_SET_ITEM( const_list_8c7b5f5ec67282d4204738cdfc41acdf_list, 11, const_str_plain_kron ); Py_INCREF( const_str_plain_kron );
    const_str_plain_tile = UNSTREAM_STRING( &constant_bin[ 1113614 ], 4, 1 );
    PyList_SET_ITEM( const_list_8c7b5f5ec67282d4204738cdfc41acdf_list, 12, const_str_plain_tile ); Py_INCREF( const_str_plain_tile );
    PyList_SET_ITEM( const_list_8c7b5f5ec67282d4204738cdfc41acdf_list, 13, const_str_plain_get_array_wrap ); Py_INCREF( const_str_plain_get_array_wrap );
    PyList_SET_ITEM( const_list_8c7b5f5ec67282d4204738cdfc41acdf_list, 14, const_str_plain_take_along_axis ); Py_INCREF( const_str_plain_take_along_axis );
    const_str_plain_put_along_axis = UNSTREAM_STRING( &constant_bin[ 1106577 ], 14, 1 );
    PyList_SET_ITEM( const_list_8c7b5f5ec67282d4204738cdfc41acdf_list, 15, const_str_plain_put_along_axis ); Py_INCREF( const_str_plain_put_along_axis );
    const_str_digest_a6c9661edfc53be0582119cf20ef2f87 = UNSTREAM_STRING( &constant_bin[ 1777035 ], 34, 0 );
    const_tuple_740e2f2d5071ad6b472d24f3f7f89fec_tuple = PyTuple_New( 9 );
    const_str_plain_arr_shape = UNSTREAM_STRING( &constant_bin[ 1777069 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_740e2f2d5071ad6b472d24f3f7f89fec_tuple, 0, const_str_plain_arr_shape ); Py_INCREF( const_str_plain_arr_shape );
    PyTuple_SET_ITEM( const_tuple_740e2f2d5071ad6b472d24f3f7f89fec_tuple, 1, const_str_plain_indices ); Py_INCREF( const_str_plain_indices );
    PyTuple_SET_ITEM( const_tuple_740e2f2d5071ad6b472d24f3f7f89fec_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_740e2f2d5071ad6b472d24f3f7f89fec_tuple, 3, const_str_plain_fancy_index ); Py_INCREF( const_str_plain_fancy_index );
    PyTuple_SET_ITEM( const_tuple_740e2f2d5071ad6b472d24f3f7f89fec_tuple, 4, const_str_plain_dim ); Py_INCREF( const_str_plain_dim );
    PyTuple_SET_ITEM( const_tuple_740e2f2d5071ad6b472d24f3f7f89fec_tuple, 5, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    const_str_plain_ind_shape = UNSTREAM_STRING( &constant_bin[ 1777078 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_740e2f2d5071ad6b472d24f3f7f89fec_tuple, 6, const_str_plain_ind_shape ); Py_INCREF( const_str_plain_ind_shape );
    const_str_plain_dest_dims = UNSTREAM_STRING( &constant_bin[ 1777087 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_740e2f2d5071ad6b472d24f3f7f89fec_tuple, 7, const_str_plain_dest_dims ); Py_INCREF( const_str_plain_dest_dims );
    PyTuple_SET_ITEM( const_tuple_740e2f2d5071ad6b472d24f3f7f89fec_tuple, 8, const_str_plain_shape_ones ); Py_INCREF( const_str_plain_shape_ones );
    const_tuple_str_plain_ndindex_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ndindex_tuple, 0, const_str_plain_ndindex ); Py_INCREF( const_str_plain_ndindex );
    const_tuple_str_plain_a_str_plain_axis_str_plain_shape_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_axis_str_plain_shape_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_axis_str_plain_shape_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_axis_str_plain_shape_tuple, 2, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    const_str_plain_wrappers = UNSTREAM_STRING( &constant_bin[ 1777096 ], 8, 1 );
    const_tuple_str_plain_arr_str_plain_indices_str_plain_axis_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_indices_str_plain_axis_tuple, 0, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_indices_str_plain_axis_tuple, 1, const_str_plain_indices ); Py_INCREF( const_str_plain_indices );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_indices_str_plain_axis_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    const_tuple_str_plain_ary_str_plain_indices_or_sections_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ary_str_plain_indices_or_sections_tuple, 0, const_str_plain_ary ); Py_INCREF( const_str_plain_ary );
    PyTuple_SET_ITEM( const_tuple_str_plain_ary_str_plain_indices_or_sections_tuple, 1, const_str_plain_indices_or_sections ); Py_INCREF( const_str_plain_indices_or_sections );
    const_str_digest_7aa728c6f3681233b4c51e9236d6563b = UNSTREAM_STRING( &constant_bin[ 1777104 ], 1914, 0 );
    const_str_digest_6d60e43c9e85db243045fdf79d405601 = UNSTREAM_STRING( &constant_bin[ 1779018 ], 3228, 0 );
    const_str_digest_f8cac42b5769f82a94f0f52ce94bd365 = UNSTREAM_STRING( &constant_bin[ 1782246 ], 1445, 0 );
    const_str_digest_a41952ff1213c8219d6c2e5c778507d2 = UNSTREAM_STRING( &constant_bin[ 1783691 ], 59, 0 );
    const_str_digest_de62dd5e9dda91234521c86b29ab6a11 = UNSTREAM_STRING( &constant_bin[ 1783750 ], 48, 0 );
    const_str_plain__put_along_axis_dispatcher = UNSTREAM_STRING( &constant_bin[ 1783798 ], 26, 1 );
    const_str_plain__make_along_axis_idx = UNSTREAM_STRING( &constant_bin[ 1783824 ], 20, 1 );
    const_str_plain__expand_dims_dispatcher = UNSTREAM_STRING( &constant_bin[ 1783844 ], 23, 1 );
    const_str_plain__replace_zero_by_x_arrays = UNSTREAM_STRING( &constant_bin[ 1783867 ], 25, 1 );
    const_str_digest_41ec33c6fb89fb35bf4c5dc200c0457d = UNSTREAM_STRING( &constant_bin[ 1783892 ], 750, 0 );
    const_str_digest_a39171c0a7a8134aa75507257c0b64bd = UNSTREAM_STRING( &constant_bin[ 1784642 ], 1812, 0 );
    const_str_digest_aac2e5f3a6e99386a80af0efb226fceb = UNSTREAM_STRING( &constant_bin[ 1786454 ], 99, 0 );
    const_str_plain__apply_over_axes_dispatcher = UNSTREAM_STRING( &constant_bin[ 1786553 ], 27, 1 );
    const_tuple_ddf877919c75a1862507b23157c69cd0_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_ddf877919c75a1862507b23157c69cd0_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_ddf877919c75a1862507b23157c69cd0_tuple, 1, const_str_plain_reps ); Py_INCREF( const_str_plain_reps );
    PyTuple_SET_ITEM( const_tuple_ddf877919c75a1862507b23157c69cd0_tuple, 2, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_ddf877919c75a1862507b23157c69cd0_tuple, 3, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_ddf877919c75a1862507b23157c69cd0_tuple, 4, const_str_plain_tup ); Py_INCREF( const_str_plain_tup );
    PyTuple_SET_ITEM( const_tuple_ddf877919c75a1862507b23157c69cd0_tuple, 5, const_str_plain_dim_in ); Py_INCREF( const_str_plain_dim_in );
    PyTuple_SET_ITEM( const_tuple_ddf877919c75a1862507b23157c69cd0_tuple, 6, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    const_str_plain_nrep = UNSTREAM_STRING( &constant_bin[ 944524 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_ddf877919c75a1862507b23157c69cd0_tuple, 7, const_str_plain_nrep ); Py_INCREF( const_str_plain_nrep );
    PyTuple_SET_ITEM( const_tuple_ddf877919c75a1862507b23157c69cd0_tuple, 8, const_str_plain_shape_out ); Py_INCREF( const_str_plain_shape_out );
    const_tuple_str_plain_product_str_plain_reshape_str_plain_transpose_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_product_str_plain_reshape_str_plain_transpose_tuple, 0, const_str_plain_product ); Py_INCREF( const_str_plain_product );
    PyTuple_SET_ITEM( const_tuple_str_plain_product_str_plain_reshape_str_plain_transpose_tuple, 1, const_str_plain_reshape ); Py_INCREF( const_str_plain_reshape );
    PyTuple_SET_ITEM( const_tuple_str_plain_product_str_plain_reshape_str_plain_transpose_tuple, 2, const_str_plain_transpose ); Py_INCREF( const_str_plain_transpose );
    const_str_digest_af761d9a3c934f241f4f72138f30e655 = UNSTREAM_STRING( &constant_bin[ 1786580 ], 56, 0 );
    const_str_digest_a49a256d0acc9717adf9049a10890d1b = UNSTREAM_STRING( &constant_bin[ 1786636 ], 790, 0 );
    const_str_digest_53f792c3b92b6b57de23c89d18aa31db = UNSTREAM_STRING( &constant_bin[ 1787426 ], 51, 0 );
    const_str_plain_inarr_view = UNSTREAM_STRING( &constant_bin[ 1787477 ], 10, 1 );
    const_str_digest_d6f837cfab6b2c229dd806949071503a = UNSTREAM_STRING( &constant_bin[ 1787487 ], 38, 0 );
    const_tuple_482f9862c91c698713aa4b94d4a449d4_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_482f9862c91c698713aa4b94d4a449d4_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_482f9862c91c698713aa4b94d4a449d4_tuple, 1, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_482f9862c91c698713aa4b94d4a449d4_tuple, 2, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_digest_0da0dce8d822dc3d2ac8de9e61f46138 = UNSTREAM_STRING( &constant_bin[ 1787525 ], 135, 0 );
    const_str_plain_buff_dims = UNSTREAM_STRING( &constant_bin[ 1787660 ], 9, 1 );
    const_tuple_99fda6b64c33fb6f757b9825e1b8f202_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_99fda6b64c33fb6f757b9825e1b8f202_tuple, 0, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_99fda6b64c33fb6f757b9825e1b8f202_tuple, 1, const_str_plain_indices ); Py_INCREF( const_str_plain_indices );
    PyTuple_SET_ITEM( const_tuple_99fda6b64c33fb6f757b9825e1b8f202_tuple, 2, const_str_plain_values ); Py_INCREF( const_str_plain_values );
    PyTuple_SET_ITEM( const_tuple_99fda6b64c33fb6f757b9825e1b8f202_tuple, 3, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    const_tuple_str_plain_args_str_plain_wrappers_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_args_str_plain_wrappers_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_str_plain_args_str_plain_wrappers_tuple, 1, const_str_plain_wrappers ); Py_INCREF( const_str_plain_wrappers );
    const_str_plain__apply_along_axis_dispatcher = UNSTREAM_STRING( &constant_bin[ 1787669 ], 28, 1 );
    const_str_plain__kron_dispatcher = UNSTREAM_STRING( &constant_bin[ 1787697 ], 16, 1 );
    const_tuple_deccbc05fb5f22947ba00669a52c159e_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_deccbc05fb5f22947ba00669a52c159e_tuple, 0, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_deccbc05fb5f22947ba00669a52c159e_tuple, 1, const_str_plain_indices ); Py_INCREF( const_str_plain_indices );
    PyTuple_SET_ITEM( const_tuple_deccbc05fb5f22947ba00669a52c159e_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_deccbc05fb5f22947ba00669a52c159e_tuple, 3, const_str_plain_arr_shape ); Py_INCREF( const_str_plain_arr_shape );
    const_tuple_05b428346b03d369d615a164cd1ed02c_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_05b428346b03d369d615a164cd1ed02c_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_05b428346b03d369d615a164cd1ed02c_tuple, 1, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_05b428346b03d369d615a164cd1ed02c_tuple, 2, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    const_tuple_str_plain_sub_arys_str_plain_i_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_sub_arys_str_plain_i_tuple, 0, const_str_plain_sub_arys ); Py_INCREF( const_str_plain_sub_arys );
    PyTuple_SET_ITEM( const_tuple_str_plain_sub_arys_str_plain_i_tuple, 1, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_tuple_88ee0303612dfe34782af5675ecdd35f_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_88ee0303612dfe34782af5675ecdd35f_tuple, 0, const_str_plain_asarray ); Py_INCREF( const_str_plain_asarray );
    PyTuple_SET_ITEM( const_tuple_88ee0303612dfe34782af5675ecdd35f_tuple, 1, const_str_plain_zeros ); Py_INCREF( const_str_plain_zeros );
    PyTuple_SET_ITEM( const_tuple_88ee0303612dfe34782af5675ecdd35f_tuple, 2, const_str_plain_outer ); Py_INCREF( const_str_plain_outer );
    PyTuple_SET_ITEM( const_tuple_88ee0303612dfe34782af5675ecdd35f_tuple, 3, const_str_plain_concatenate ); Py_INCREF( const_str_plain_concatenate );
    PyTuple_SET_ITEM( const_tuple_88ee0303612dfe34782af5675ecdd35f_tuple, 4, const_str_plain_array ); Py_INCREF( const_str_plain_array );
    PyTuple_SET_ITEM( const_tuple_88ee0303612dfe34782af5675ecdd35f_tuple, 5, const_str_plain_asanyarray ); Py_INCREF( const_str_plain_asanyarray );
    const_tuple_78d887ae2d29ddaf6f2cdadf5d4f1d8d_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_78d887ae2d29ddaf6f2cdadf5d4f1d8d_tuple, 0, const_str_plain__arrays_for_stack_dispatcher ); Py_INCREF( const_str_plain__arrays_for_stack_dispatcher );
    PyTuple_SET_ITEM( const_tuple_78d887ae2d29ddaf6f2cdadf5d4f1d8d_tuple, 1, const_str_plain__warn_for_nonsequence ); Py_INCREF( const_str_plain__warn_for_nonsequence );
    const_str_digest_65fecc3c16c125dda36672d6c29323c7 = UNSTREAM_STRING( &constant_bin[ 1787713 ], 2321, 0 );
    const_str_digest_36d3bf65d2976ca53953f3831bf4a3e1 = UNSTREAM_STRING( &constant_bin[ 1790034 ], 1151, 0 );
    const_str_digest_08a38aa2e3119a1ffd1769f455bb2b91 = UNSTREAM_STRING( &constant_bin[ 1791185 ], 2895, 0 );
    const_tuple_554bff95095d107c1a707bf167f7ab47_tuple = PyTuple_New( 16 );
    PyTuple_SET_ITEM( const_tuple_554bff95095d107c1a707bf167f7ab47_tuple, 0, const_str_plain_func1d ); Py_INCREF( const_str_plain_func1d );
    PyTuple_SET_ITEM( const_tuple_554bff95095d107c1a707bf167f7ab47_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_554bff95095d107c1a707bf167f7ab47_tuple, 2, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_554bff95095d107c1a707bf167f7ab47_tuple, 3, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_554bff95095d107c1a707bf167f7ab47_tuple, 4, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_554bff95095d107c1a707bf167f7ab47_tuple, 5, const_str_plain_out_arr ); Py_INCREF( const_str_plain_out_arr );
    PyTuple_SET_ITEM( const_tuple_554bff95095d107c1a707bf167f7ab47_tuple, 6, const_str_plain_buff_permute ); Py_INCREF( const_str_plain_buff_permute );
    const_str_plain_ind0 = UNSTREAM_STRING( &constant_bin[ 1794080 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_554bff95095d107c1a707bf167f7ab47_tuple, 7, const_str_plain_ind0 ); Py_INCREF( const_str_plain_ind0 );
    PyTuple_SET_ITEM( const_tuple_554bff95095d107c1a707bf167f7ab47_tuple, 8, const_str_plain_inds ); Py_INCREF( const_str_plain_inds );
    PyTuple_SET_ITEM( const_tuple_554bff95095d107c1a707bf167f7ab47_tuple, 9, const_str_plain_inarr_view ); Py_INCREF( const_str_plain_inarr_view );
    PyTuple_SET_ITEM( const_tuple_554bff95095d107c1a707bf167f7ab47_tuple, 10, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    PyTuple_SET_ITEM( const_tuple_554bff95095d107c1a707bf167f7ab47_tuple, 11, const_str_plain_nd ); Py_INCREF( const_str_plain_nd );
    const_str_plain_in_dims = UNSTREAM_STRING( &constant_bin[ 1794084 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_554bff95095d107c1a707bf167f7ab47_tuple, 12, const_str_plain_in_dims ); Py_INCREF( const_str_plain_in_dims );
    PyTuple_SET_ITEM( const_tuple_554bff95095d107c1a707bf167f7ab47_tuple, 13, const_str_plain_buff_dims ); Py_INCREF( const_str_plain_buff_dims );
    PyTuple_SET_ITEM( const_tuple_554bff95095d107c1a707bf167f7ab47_tuple, 14, const_str_plain_ind ); Py_INCREF( const_str_plain_ind );
    const_str_plain_buff = UNSTREAM_STRING( &constant_bin[ 29743 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_554bff95095d107c1a707bf167f7ab47_tuple, 15, const_str_plain_buff ); Py_INCREF( const_str_plain_buff );
    const_tuple_8b1746e470a0bd8602e3a2a27456d69c_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_8b1746e470a0bd8602e3a2a27456d69c_tuple, 0, const_str_plain_ary ); Py_INCREF( const_str_plain_ary );
    PyTuple_SET_ITEM( const_tuple_8b1746e470a0bd8602e3a2a27456d69c_tuple, 1, const_str_plain_indices_or_sections ); Py_INCREF( const_str_plain_indices_or_sections );
    PyTuple_SET_ITEM( const_tuple_8b1746e470a0bd8602e3a2a27456d69c_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_8b1746e470a0bd8602e3a2a27456d69c_tuple, 3, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    PyTuple_SET_ITEM( const_tuple_8b1746e470a0bd8602e3a2a27456d69c_tuple, 4, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    PyTuple_SET_ITEM( const_tuple_8b1746e470a0bd8602e3a2a27456d69c_tuple, 5, const_str_plain_sections ); Py_INCREF( const_str_plain_sections );
    const_str_plain__take_along_axis_dispatcher = UNSTREAM_STRING( &constant_bin[ 1794091 ], 27, 1 );
    const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_ind_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_ind_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_ind_tuple, 1, const_str_plain_ind ); Py_INCREF( const_str_plain_ind );
    const_str_digest_65cb7cb73d8a7b0b825ded29c41ffeaa = UNSTREAM_STRING( &constant_bin[ 1794118 ], 51, 0 );
    const_str_digest_1d96fe8a6d92c945e6a5dd4411661d07 = UNSTREAM_STRING( &constant_bin[ 1794169 ], 1353, 0 );
    const_tuple_str_plain_vstack_str_plain_atleast_3d_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_vstack_str_plain_atleast_3d_tuple, 0, const_str_plain_vstack ); Py_INCREF( const_str_plain_vstack );
    PyTuple_SET_ITEM( const_tuple_str_plain_vstack_str_plain_atleast_3d_tuple, 1, const_str_plain_atleast_3d ); Py_INCREF( const_str_plain_atleast_3d );
    const_tuple_str_plain_ary_str_plain_indices_or_sections_str_plain_axis_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ary_str_plain_indices_or_sections_str_plain_axis_tuple, 0, const_str_plain_ary ); Py_INCREF( const_str_plain_ary );
    PyTuple_SET_ITEM( const_tuple_str_plain_ary_str_plain_indices_or_sections_str_plain_axis_tuple, 1, const_str_plain_indices_or_sections ); Py_INCREF( const_str_plain_indices_or_sections );
    PyTuple_SET_ITEM( const_tuple_str_plain_ary_str_plain_indices_or_sections_str_plain_axis_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    const_str_plain_get_array_prepare = UNSTREAM_STRING( &constant_bin[ 1795522 ], 17, 1 );
    const_tuple_56a915ad951f23e33b5388880a6fe4e6_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_56a915ad951f23e33b5388880a6fe4e6_tuple, 0, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_56a915ad951f23e33b5388880a6fe4e6_tuple, 1, const_str_plain_indices ); Py_INCREF( const_str_plain_indices );
    PyTuple_SET_ITEM( const_tuple_56a915ad951f23e33b5388880a6fe4e6_tuple, 2, const_str_plain_values ); Py_INCREF( const_str_plain_values );
    PyTuple_SET_ITEM( const_tuple_56a915ad951f23e33b5388880a6fe4e6_tuple, 3, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_56a915ad951f23e33b5388880a6fe4e6_tuple, 4, const_str_plain_arr_shape ); Py_INCREF( const_str_plain_arr_shape );
    const_str_digest_8fb3c62e9b3531d50e69aa26ef8b4b5b = UNSTREAM_STRING( &constant_bin[ 1795539 ], 1818, 0 );
    const_str_plain__dstack_dispatcher = UNSTREAM_STRING( &constant_bin[ 1797357 ], 18, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$lib$shape_base( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_4a048dd580f78ea5063d80a1d3ca96bf;
static PyCodeObject *codeobj_1e9b0705bdf18c7ed849eed96e400025;
static PyCodeObject *codeobj_95e5aa1554912cf687134acba030b8e1;
static PyCodeObject *codeobj_ec3f0b19b22d65860d7d432b1c7a2cdb;
static PyCodeObject *codeobj_04b9afd1ed7b2767a17f9e96a0d06819;
static PyCodeObject *codeobj_bf0ab0b0126cbb6df7f45d7c642aec5b;
static PyCodeObject *codeobj_fedacb0f418371c2284170a52900fed0;
static PyCodeObject *codeobj_f12e0b2b0ca14c37bd983c2228c3016f;
static PyCodeObject *codeobj_c0aa245ef3c3f0200a4c8defbe8f2e1e;
static PyCodeObject *codeobj_84be773cc1ceff8749ee2de9d4c3fb96;
static PyCodeObject *codeobj_c1bf07921a38f5f2123b2013d6d3c564;
static PyCodeObject *codeobj_ba51f95eb93face58d8e7f988fa70c2b;
static PyCodeObject *codeobj_fce60809172ff7348863d12eaa9dd87c;
static PyCodeObject *codeobj_453169de66732a79502a207492917af3;
static PyCodeObject *codeobj_db989e8c641a46290543eecf9a8258a7;
static PyCodeObject *codeobj_038d559d7095aec916c2e773f97c4994;
static PyCodeObject *codeobj_9dbf8e883b7b194b1567a6bc1e843153;
static PyCodeObject *codeobj_8b1e683349157e705d98ee5eced9d83a;
static PyCodeObject *codeobj_e07ab33a868666f742612bc9615d4709;
static PyCodeObject *codeobj_2337ba28ccfdfaf083419b950b531191;
static PyCodeObject *codeobj_6642c1eeef75a83b9631bcd884095d69;
static PyCodeObject *codeobj_5d4de246c153321a48b6e52a7086776c;
static PyCodeObject *codeobj_b3a446e8491296ddaabe1a40b2fcfff0;
static PyCodeObject *codeobj_bddd17c377b8322ed7a10d4e5ecc5adc;
static PyCodeObject *codeobj_1ad49e4f6f0cc8ab6b5de32c365d24af;
static PyCodeObject *codeobj_4cd39dce4b92377adbf097f044630fae;
static PyCodeObject *codeobj_567180109a27206bed4c24b84527ef57;
static PyCodeObject *codeobj_2c628b84b11a90f2010891fa7ef8c39b;
static PyCodeObject *codeobj_aea1332d8688d2dcef3ae78b2227640d;
static PyCodeObject *codeobj_be849c5f021d8e8ed6b08b0c785d4b51;
static PyCodeObject *codeobj_64e540be2f6df1bf05ea06f8c9bf8eb3;
static PyCodeObject *codeobj_bb7f99ba5e65f5cb09ce750dfb2785f5;
static PyCodeObject *codeobj_e20eba40209d3f6789f7b2ea82e2a911;
static PyCodeObject *codeobj_248a14ea49e9620c4676d3c18bb06081;
static PyCodeObject *codeobj_4760aedd6508113d535d32c5d1547e1b;
static PyCodeObject *codeobj_c62fec198df045dc1aee60baa77f7b8f;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_af761d9a3c934f241f4f72138f30e655;
    codeobj_4a048dd580f78ea5063d80a1d3ca96bf = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 373, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_ind_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1e9b0705bdf18c7ed849eed96e400025 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 1026, const_tuple_482f9862c91c698713aa4b94d4a449d4_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_95e5aa1554912cf687134acba030b8e1 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 1038, const_tuple_482f9862c91c698713aa4b94d4a449d4_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ec3f0b19b22d65860d7d432b1c7a2cdb = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 1226, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_04b9afd1ed7b2767a17f9e96a0d06819 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 1236, const_tuple_05b428346b03d369d615a164cd1ed02c_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_bf0ab0b0126cbb6df7f45d7c642aec5b = MAKE_CODEOBJ( module_filename_obj, const_str_digest_962ec1ed514b8a434076e912ec0249ab, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fedacb0f418371c2284170a52900fed0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__apply_along_axis_dispatcher, 266, const_tuple_adb719265e016bd8841be1a09c2ebbd0_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f12e0b2b0ca14c37bd983c2228c3016f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__apply_over_axes_dispatcher, 418, const_tuple_str_plain_func_str_plain_a_str_plain_axes_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c0aa245ef3c3f0200a4c8defbe8f2e1e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__array_split_dispatcher, 711, const_tuple_str_plain_ary_str_plain_indices_or_sections_str_plain_axis_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_84be773cc1ceff8749ee2de9d4c3fb96 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__column_stack_dispatcher, 595, const_tuple_str_plain_tup_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c1bf07921a38f5f2123b2013d6d3c564 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__dstack_dispatcher, 643, const_tuple_str_plain_tup_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ba51f95eb93face58d8e7f988fa70c2b = MAKE_CODEOBJ( module_filename_obj, const_str_plain__expand_dims_dispatcher, 509, const_tuple_str_plain_a_str_plain_axis_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fce60809172ff7348863d12eaa9dd87c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__hvdsplit_dispatcher, 854, const_tuple_str_plain_ary_str_plain_indices_or_sections_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_453169de66732a79502a207492917af3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__kron_dispatcher, 1046, const_tuple_str_plain_a_str_plain_b_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_db989e8c641a46290543eecf9a8258a7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__make_along_axis_idx, 32, const_tuple_740e2f2d5071ad6b472d24f3f7f89fec_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_038d559d7095aec916c2e773f97c4994 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__put_along_axis_dispatcher, 176, const_tuple_99fda6b64c33fb6f757b9825e1b8f202_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9dbf8e883b7b194b1567a6bc1e843153 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__replace_zero_by_x_arrays, 702, const_tuple_str_plain_sub_arys_str_plain_i_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8b1e683349157e705d98ee5eced9d83a = MAKE_CODEOBJ( module_filename_obj, const_str_plain__split_dispatcher, 771, const_tuple_str_plain_ary_str_plain_indices_or_sections_str_plain_axis_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e07ab33a868666f742612bc9615d4709 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__take_along_axis_dispatcher, 55, const_tuple_str_plain_arr_str_plain_indices_str_plain_axis_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2337ba28ccfdfaf083419b950b531191 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__tile_dispatcher, 1150, const_tuple_str_plain_A_str_plain_reps_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6642c1eeef75a83b9631bcd884095d69 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_apply_along_axis, 270, const_tuple_554bff95095d107c1a707bf167f7ab47_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5d4de246c153321a48b6e52a7086776c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_apply_over_axes, 422, const_tuple_05004b9d7964168aa8843ec3e02a3feb_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b3a446e8491296ddaabe1a40b2fcfff0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_array_split, 715, const_tuple_f4d74bf49fb06ec547a4ecd7b85e5205_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_bddd17c377b8322ed7a10d4e5ecc5adc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_column_stack, 599, const_tuple_str_plain_tup_str_plain_arrays_str_plain_arr_str_plain_v_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1ad49e4f6f0cc8ab6b5de32c365d24af = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dsplit, 975, const_tuple_str_plain_ary_str_plain_indices_or_sections_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4cd39dce4b92377adbf097f044630fae = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dstack, 647, const_tuple_str_plain_tup_str_plain__m_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_567180109a27206bed4c24b84527ef57 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_expand_dims, 513, const_tuple_str_plain_a_str_plain_axis_str_plain_shape_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2c628b84b11a90f2010891fa7ef8c39b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_array_prepare, 1021, const_tuple_str_plain_args_str_plain_wrappers_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_aea1332d8688d2dcef3ae78b2227640d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_array_wrap, 1033, const_tuple_str_plain_args_str_plain_wrappers_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_be849c5f021d8e8ed6b08b0c785d4b51 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hsplit, 858, const_tuple_str_plain_ary_str_plain_indices_or_sections_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_64e540be2f6df1bf05ea06f8c9bf8eb3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_kron, 1050, const_tuple_e41c7b17bd7c8e972e714f5638db4c13_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_bb7f99ba5e65f5cb09ce750dfb2785f5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_put_along_axis, 180, const_tuple_56a915ad951f23e33b5388880a6fe4e6_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e20eba40209d3f6789f7b2ea82e2a911 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_split, 775, const_tuple_8b1746e470a0bd8602e3a2a27456d69c_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_248a14ea49e9620c4676d3c18bb06081 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_take_along_axis, 59, const_tuple_deccbc05fb5f22947ba00669a52c159e_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4760aedd6508113d535d32c5d1547e1b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tile, 1154, const_tuple_ddf877919c75a1862507b23157c69cd0_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c62fec198df045dc1aee60baa77f7b8f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_vsplit, 922, const_tuple_str_plain_ary_str_plain_indices_or_sections_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *numpy$lib$shape_base$$$function_7_apply_along_axis$$$genexpr_1_genexpr_maker( void );


static PyObject *numpy$lib$shape_base$$$function_25_get_array_prepare$$$genexpr_1_genexpr_maker( void );


static PyObject *numpy$lib$shape_base$$$function_26_get_array_wrap$$$genexpr_1_genexpr_maker( void );


static PyObject *numpy$lib$shape_base$$$function_30_tile$$$genexpr_1_genexpr_maker( void );


static PyObject *numpy$lib$shape_base$$$function_30_tile$$$genexpr_2_genexpr_maker( void );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_9_complex_call_helper_pos_star_list_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3_complex_call_helper_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_10__expand_dims_dispatcher(  );


static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_11_expand_dims(  );


static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_12__column_stack_dispatcher(  );


static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_13_column_stack(  );


static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_14__dstack_dispatcher(  );


static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_15_dstack(  );


static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_16__replace_zero_by_x_arrays(  );


static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_17__array_split_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_18_array_split( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_19__split_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_1__make_along_axis_idx(  );


static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_20_split( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_21__hvdsplit_dispatcher(  );


static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_22_hsplit(  );


static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_23_vsplit(  );


static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_24_dsplit(  );


static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_25_get_array_prepare(  );


static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_26_get_array_wrap(  );


static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_27__kron_dispatcher(  );


static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_28_kron(  );


static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_29__tile_dispatcher(  );


static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_2__take_along_axis_dispatcher(  );


static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_30_tile(  );


static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_3_take_along_axis(  );


static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_4__put_along_axis_dispatcher(  );


static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_5_put_along_axis(  );


static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_6__apply_along_axis_dispatcher(  );


static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_7_apply_along_axis(  );


static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_8__apply_over_axes_dispatcher(  );


static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_9_apply_over_axes(  );


// The module function definitions.
static PyObject *impl_numpy$lib$shape_base$$$function_1__make_along_axis_idx( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arr_shape = python_pars[ 0 ];
    PyObject *par_indices = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *var_fancy_index = NULL;
    PyObject *var_dim = NULL;
    PyObject *var_n = NULL;
    PyObject *var_ind_shape = NULL;
    PyObject *var_dest_dims = NULL;
    PyObject *var_shape_ones = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_db989e8c641a46290543eecf9a8258a7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_db989e8c641a46290543eecf9a8258a7 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_db989e8c641a46290543eecf9a8258a7, codeobj_db989e8c641a46290543eecf9a8258a7, module_numpy$lib$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_db989e8c641a46290543eecf9a8258a7 = cache_frame_db989e8c641a46290543eecf9a8258a7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_db989e8c641a46290543eecf9a8258a7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_db989e8c641a46290543eecf9a8258a7 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
            exception_tb = NULL;

            exception_lineno = 34;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_issubdtype );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_indices );
        tmp_source_name_2 = par_indices;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 34;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
            exception_tb = NULL;

            exception_lineno = 34;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_2;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_integer );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 34;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_db989e8c641a46290543eecf9a8258a7->m_frame.f_lineno = 34;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "ooooooooo";
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
            tmp_make_exception_arg_1 = const_str_digest_a6c9661edfc53be0582119cf20ef2f87;
            frame_db989e8c641a46290543eecf9a8258a7->m_frame.f_lineno = 35;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_IndexError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 35;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_arr_shape );
        tmp_len_arg_1 = par_arr_shape;
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_indices );
        tmp_source_name_4 = par_indices;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ndim );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 36;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
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
        {
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_b45c29480c47e55f61140d3585f480c5;
            frame_db989e8c641a46290543eecf9a8258a7->m_frame.f_lineno = 37;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 37;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_5;
        tmp_left_name_1 = const_tuple_int_pos_1_tuple;
        CHECK_OBJECT( par_indices );
        tmp_source_name_5 = par_indices;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ndim );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_shape_ones == NULL );
        var_shape_ones = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_range_arg_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_list_arg_2;
        PyObject *tmp_range2_low_1;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_range2_high_1;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( par_axis );
        tmp_range_arg_1 = par_axis;
        tmp_list_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
        if ( tmp_list_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = PySequence_List( tmp_list_arg_1 );
        Py_DECREF( tmp_list_arg_1 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = LIST_COPY( const_list_none_list );
        tmp_left_name_2 = BINARY_OPERATION_ADD_OBJECT_LIST( tmp_left_name_3, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_axis );
        tmp_left_name_4 = par_axis;
        tmp_right_name_4 = const_int_pos_1;
        tmp_range2_low_1 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_range2_low_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 40;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_indices );
        tmp_source_name_6 = par_indices;
        tmp_range2_high_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ndim );
        if ( tmp_range2_high_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );
            Py_DECREF( tmp_range2_low_1 );

            exception_lineno = 40;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_list_arg_2 = BUILTIN_RANGE2( tmp_range2_low_1, tmp_range2_high_1 );
        Py_DECREF( tmp_range2_low_1 );
        Py_DECREF( tmp_range2_high_1 );
        if ( tmp_list_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 40;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = PySequence_List( tmp_list_arg_2 );
        Py_DECREF( tmp_list_arg_2 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 40;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_dest_dims == NULL );
        var_dest_dims = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PyList_New( 0 );
        assert( var_fancy_index == NULL );
        var_fancy_index = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_zip );
        assert( tmp_called_name_2 != NULL );
        CHECK_OBJECT( var_dest_dims );
        tmp_args_element_name_3 = var_dest_dims;
        CHECK_OBJECT( par_arr_shape );
        tmp_args_element_name_4 = par_arr_shape;
        frame_db989e8c641a46290543eecf9a8258a7->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooo";
                exception_lineno = 45;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_1, 0 );
        if ( tmp_assign_source_7 == NULL )
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


            type_description_1 = "ooooooooo";
            exception_lineno = 45;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_2, 1 );
        if ( tmp_assign_source_8 == NULL )
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


            type_description_1 = "ooooooooo";
            exception_lineno = 45;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
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

                    type_description_1 = "ooooooooo";
                    exception_lineno = 45;
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

            type_description_1 = "ooooooooo";
            exception_lineno = 45;
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
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_dim;
            var_dim = tmp_assign_source_9;
            Py_INCREF( var_dim );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_n;
            var_n = tmp_assign_source_10;
            Py_INCREF( var_n );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_dim );
        tmp_compexpr_left_2 = var_dim;
        tmp_compexpr_right_2 = Py_None;
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_5;
            CHECK_OBJECT( var_fancy_index );
            tmp_called_instance_1 = var_fancy_index;
            CHECK_OBJECT( par_indices );
            tmp_args_element_name_5 = par_indices;
            frame_db989e8c641a46290543eecf9a8258a7->m_frame.f_lineno = 47;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_append, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 47;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_left_name_5;
            PyObject *tmp_left_name_6;
            PyObject *tmp_slice_source_1;
            PyObject *tmp_slice_upper_1;
            PyObject *tmp_right_name_5;
            PyObject *tmp_right_name_6;
            PyObject *tmp_slice_source_2;
            PyObject *tmp_slice_lower_1;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            CHECK_OBJECT( var_shape_ones );
            tmp_slice_source_1 = var_shape_ones;
            CHECK_OBJECT( var_dim );
            tmp_slice_upper_1 = var_dim;
            tmp_left_name_6 = LOOKUP_SLICE( tmp_slice_source_1, Py_None, tmp_slice_upper_1 );
            if ( tmp_left_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            tmp_right_name_5 = const_tuple_int_neg_1_tuple;
            tmp_left_name_5 = BINARY_OPERATION_ADD_OBJECT_TUPLE( tmp_left_name_6, tmp_right_name_5 );
            Py_DECREF( tmp_left_name_6 );
            if ( tmp_left_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_shape_ones );
            tmp_slice_source_2 = var_shape_ones;
            CHECK_OBJECT( var_dim );
            tmp_left_name_7 = var_dim;
            tmp_right_name_7 = const_int_pos_1;
            tmp_slice_lower_1 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_7, tmp_right_name_7 );
            if ( tmp_slice_lower_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_5 );

                exception_lineno = 49;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            tmp_right_name_6 = LOOKUP_SLICE( tmp_slice_source_2, tmp_slice_lower_1, Py_None );
            Py_DECREF( tmp_slice_lower_1 );
            if ( tmp_right_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_5 );

                exception_lineno = 49;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_6 );
            Py_DECREF( tmp_left_name_5 );
            Py_DECREF( tmp_right_name_6 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_ind_shape;
                var_ind_shape = tmp_assign_source_11;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_7;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            CHECK_OBJECT( var_fancy_index );
            tmp_source_name_7 = var_fancy_index;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_append );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
                exception_tb = NULL;

                exception_lineno = 50;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }

            tmp_called_instance_3 = tmp_mvar_value_3;
            CHECK_OBJECT( var_n );
            tmp_args_element_name_7 = var_n;
            frame_db989e8c641a46290543eecf9a8258a7->m_frame.f_lineno = 50;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_called_instance_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_arange, call_args );
            }

            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 50;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_ind_shape );
            tmp_args_element_name_8 = var_ind_shape;
            frame_db989e8c641a46290543eecf9a8258a7->m_frame.f_lineno = 50;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_args_element_name_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_reshape, call_args );
            }

            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 50;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            frame_db989e8c641a46290543eecf9a8258a7->m_frame.f_lineno = 50;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_end_3:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "ooooooooo";
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
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_tuple_arg_1;
        CHECK_OBJECT( var_fancy_index );
        tmp_tuple_arg_1 = var_fancy_index;
        tmp_return_value = PySequence_Tuple( tmp_tuple_arg_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_db989e8c641a46290543eecf9a8258a7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_db989e8c641a46290543eecf9a8258a7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_db989e8c641a46290543eecf9a8258a7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_db989e8c641a46290543eecf9a8258a7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_db989e8c641a46290543eecf9a8258a7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_db989e8c641a46290543eecf9a8258a7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_db989e8c641a46290543eecf9a8258a7,
        type_description_1,
        par_arr_shape,
        par_indices,
        par_axis,
        var_fancy_index,
        var_dim,
        var_n,
        var_ind_shape,
        var_dest_dims,
        var_shape_ones
    );


    // Release cached frame.
    if ( frame_db989e8c641a46290543eecf9a8258a7 == cache_frame_db989e8c641a46290543eecf9a8258a7 )
    {
        Py_DECREF( frame_db989e8c641a46290543eecf9a8258a7 );
    }
    cache_frame_db989e8c641a46290543eecf9a8258a7 = NULL;

    assertFrameObject( frame_db989e8c641a46290543eecf9a8258a7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_1__make_along_axis_idx );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_fancy_index );
    Py_DECREF( var_fancy_index );
    var_fancy_index = NULL;

    Py_XDECREF( var_dim );
    var_dim = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_ind_shape );
    var_ind_shape = NULL;

    CHECK_OBJECT( (PyObject *)var_dest_dims );
    Py_DECREF( var_dest_dims );
    var_dest_dims = NULL;

    CHECK_OBJECT( (PyObject *)par_indices );
    Py_DECREF( par_indices );
    par_indices = NULL;

    CHECK_OBJECT( (PyObject *)par_arr_shape );
    Py_DECREF( par_arr_shape );
    par_arr_shape = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)var_shape_ones );
    Py_DECREF( var_shape_ones );
    var_shape_ones = NULL;

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

    Py_XDECREF( var_fancy_index );
    var_fancy_index = NULL;

    Py_XDECREF( var_dim );
    var_dim = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_ind_shape );
    var_ind_shape = NULL;

    Py_XDECREF( var_dest_dims );
    var_dest_dims = NULL;

    CHECK_OBJECT( (PyObject *)par_indices );
    Py_DECREF( par_indices );
    par_indices = NULL;

    CHECK_OBJECT( (PyObject *)par_arr_shape );
    Py_DECREF( par_arr_shape );
    par_arr_shape = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    Py_XDECREF( var_shape_ones );
    var_shape_ones = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_1__make_along_axis_idx );
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


static PyObject *impl_numpy$lib$shape_base$$$function_2__take_along_axis_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arr = python_pars[ 0 ];
    PyObject *par_indices = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_arr );
        tmp_tuple_element_1 = par_arr;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_indices );
        tmp_tuple_element_1 = par_indices;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_2__take_along_axis_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_indices );
    Py_DECREF( par_indices );
    par_indices = NULL;

    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_2__take_along_axis_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$shape_base$$$function_3_take_along_axis( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arr = python_pars[ 0 ];
    PyObject *par_indices = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *var_arr_shape = NULL;
    struct Nuitka_FrameObject *frame_248a14ea49e9620c4676d3c18bb06081;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_248a14ea49e9620c4676d3c18bb06081 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_248a14ea49e9620c4676d3c18bb06081, codeobj_248a14ea49e9620c4676d3c18bb06081, module_numpy$lib$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_248a14ea49e9620c4676d3c18bb06081 = cache_frame_248a14ea49e9620c4676d3c18bb06081;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_248a14ea49e9620c4676d3c18bb06081 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_248a14ea49e9620c4676d3c18bb06081 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_axis );
        tmp_compexpr_left_1 = par_axis;
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
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( par_arr );
            tmp_source_name_1 = par_arr;
            tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_flat );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 165;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_arr;
                assert( old != NULL );
                par_arr = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_len_arg_1;
            CHECK_OBJECT( par_arr );
            tmp_len_arg_1 = par_arr;
            tmp_tuple_element_1 = BUILTIN_LEN( tmp_len_arg_1 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_assign_source_2, 0, tmp_tuple_element_1 );
            assert( var_arr_shape == NULL );
            var_arr_shape = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = const_int_0;
            {
                PyObject *old = par_axis;
                assert( old != NULL );
                par_axis = tmp_assign_source_3;
                Py_INCREF( par_axis );
                Py_DECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_normalize_axis_index );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_normalize_axis_index );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "normalize_axis_index" );
                exception_tb = NULL;

                exception_lineno = 169;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_axis );
            tmp_args_element_name_1 = par_axis;
            CHECK_OBJECT( par_arr );
            tmp_source_name_2 = par_arr;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndim );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 169;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_248a14ea49e9620c4676d3c18bb06081->m_frame.f_lineno = 169;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 169;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_axis;
                assert( old != NULL );
                par_axis = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( par_arr );
            tmp_source_name_3 = par_arr;
            tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 170;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert( var_arr_shape == NULL );
            var_arr_shape = tmp_assign_source_5;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT( par_arr );
        tmp_subscribed_name_1 = par_arr;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__make_along_axis_idx );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__make_along_axis_idx );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_make_along_axis_idx" );
            exception_tb = NULL;

            exception_lineno = 173;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_arr_shape );
        tmp_args_element_name_3 = var_arr_shape;
        CHECK_OBJECT( par_indices );
        tmp_args_element_name_4 = par_indices;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_5 = par_axis;
        frame_248a14ea49e9620c4676d3c18bb06081->m_frame.f_lineno = 173;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_subscript_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_subscript_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_248a14ea49e9620c4676d3c18bb06081 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_248a14ea49e9620c4676d3c18bb06081 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_248a14ea49e9620c4676d3c18bb06081 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_248a14ea49e9620c4676d3c18bb06081, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_248a14ea49e9620c4676d3c18bb06081->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_248a14ea49e9620c4676d3c18bb06081, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_248a14ea49e9620c4676d3c18bb06081,
        type_description_1,
        par_arr,
        par_indices,
        par_axis,
        var_arr_shape
    );


    // Release cached frame.
    if ( frame_248a14ea49e9620c4676d3c18bb06081 == cache_frame_248a14ea49e9620c4676d3c18bb06081 )
    {
        Py_DECREF( frame_248a14ea49e9620c4676d3c18bb06081 );
    }
    cache_frame_248a14ea49e9620c4676d3c18bb06081 = NULL;

    assertFrameObject( frame_248a14ea49e9620c4676d3c18bb06081 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_3_take_along_axis );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_indices );
    Py_DECREF( par_indices );
    par_indices = NULL;

    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

    CHECK_OBJECT( (PyObject *)var_arr_shape );
    Py_DECREF( var_arr_shape );
    var_arr_shape = NULL;

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

    CHECK_OBJECT( (PyObject *)par_indices );
    Py_DECREF( par_indices );
    par_indices = NULL;

    Py_XDECREF( par_arr );
    par_arr = NULL;

    Py_XDECREF( var_arr_shape );
    var_arr_shape = NULL;

    Py_XDECREF( par_axis );
    par_axis = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_3_take_along_axis );
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


static PyObject *impl_numpy$lib$shape_base$$$function_4__put_along_axis_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arr = python_pars[ 0 ];
    PyObject *par_indices = python_pars[ 1 ];
    PyObject *par_values = python_pars[ 2 ];
    PyObject *par_axis = python_pars[ 3 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_arr );
        tmp_tuple_element_1 = par_arr;
        tmp_return_value = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_indices );
        tmp_tuple_element_1 = par_indices;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_values );
        tmp_tuple_element_1 = par_values;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_4__put_along_axis_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_indices );
    Py_DECREF( par_indices );
    par_indices = NULL;

    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

    CHECK_OBJECT( (PyObject *)par_values );
    Py_DECREF( par_values );
    par_values = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_4__put_along_axis_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$shape_base$$$function_5_put_along_axis( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arr = python_pars[ 0 ];
    PyObject *par_indices = python_pars[ 1 ];
    PyObject *par_values = python_pars[ 2 ];
    PyObject *par_axis = python_pars[ 3 ];
    PyObject *var_arr_shape = NULL;
    struct Nuitka_FrameObject *frame_bb7f99ba5e65f5cb09ce750dfb2785f5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_bb7f99ba5e65f5cb09ce750dfb2785f5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bb7f99ba5e65f5cb09ce750dfb2785f5, codeobj_bb7f99ba5e65f5cb09ce750dfb2785f5, module_numpy$lib$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bb7f99ba5e65f5cb09ce750dfb2785f5 = cache_frame_bb7f99ba5e65f5cb09ce750dfb2785f5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bb7f99ba5e65f5cb09ce750dfb2785f5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bb7f99ba5e65f5cb09ce750dfb2785f5 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_axis );
        tmp_compexpr_left_1 = par_axis;
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
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( par_arr );
            tmp_source_name_1 = par_arr;
            tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_flat );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 255;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_arr;
                assert( old != NULL );
                par_arr = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = const_int_0;
            {
                PyObject *old = par_axis;
                assert( old != NULL );
                par_axis = tmp_assign_source_2;
                Py_INCREF( par_axis );
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_len_arg_1;
            CHECK_OBJECT( par_arr );
            tmp_len_arg_1 = par_arr;
            tmp_tuple_element_1 = BUILTIN_LEN( tmp_len_arg_1 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 257;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_assign_source_3, 0, tmp_tuple_element_1 );
            assert( var_arr_shape == NULL );
            var_arr_shape = tmp_assign_source_3;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_normalize_axis_index );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_normalize_axis_index );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "normalize_axis_index" );
                exception_tb = NULL;

                exception_lineno = 259;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_axis );
            tmp_args_element_name_1 = par_axis;
            CHECK_OBJECT( par_arr );
            tmp_source_name_2 = par_arr;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndim );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 259;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            frame_bb7f99ba5e65f5cb09ce750dfb2785f5->m_frame.f_lineno = 259;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 259;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_axis;
                assert( old != NULL );
                par_axis = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( par_arr );
            tmp_source_name_3 = par_arr;
            tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 260;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_arr_shape == NULL );
            var_arr_shape = tmp_assign_source_5;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT( par_values );
        tmp_ass_subvalue_1 = par_values;
        CHECK_OBJECT( par_arr );
        tmp_ass_subscribed_1 = par_arr;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__make_along_axis_idx );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__make_along_axis_idx );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_make_along_axis_idx" );
            exception_tb = NULL;

            exception_lineno = 263;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_arr_shape );
        tmp_args_element_name_3 = var_arr_shape;
        CHECK_OBJECT( par_indices );
        tmp_args_element_name_4 = par_indices;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_5 = par_axis;
        frame_bb7f99ba5e65f5cb09ce750dfb2785f5->m_frame.f_lineno = 263;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_ass_subscript_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_ass_subscript_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 263;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 263;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bb7f99ba5e65f5cb09ce750dfb2785f5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bb7f99ba5e65f5cb09ce750dfb2785f5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bb7f99ba5e65f5cb09ce750dfb2785f5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bb7f99ba5e65f5cb09ce750dfb2785f5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bb7f99ba5e65f5cb09ce750dfb2785f5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bb7f99ba5e65f5cb09ce750dfb2785f5,
        type_description_1,
        par_arr,
        par_indices,
        par_values,
        par_axis,
        var_arr_shape
    );


    // Release cached frame.
    if ( frame_bb7f99ba5e65f5cb09ce750dfb2785f5 == cache_frame_bb7f99ba5e65f5cb09ce750dfb2785f5 )
    {
        Py_DECREF( frame_bb7f99ba5e65f5cb09ce750dfb2785f5 );
    }
    cache_frame_bb7f99ba5e65f5cb09ce750dfb2785f5 = NULL;

    assertFrameObject( frame_bb7f99ba5e65f5cb09ce750dfb2785f5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_5_put_along_axis );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_indices );
    Py_DECREF( par_indices );
    par_indices = NULL;

    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

    CHECK_OBJECT( (PyObject *)par_values );
    Py_DECREF( par_values );
    par_values = NULL;

    CHECK_OBJECT( (PyObject *)var_arr_shape );
    Py_DECREF( var_arr_shape );
    var_arr_shape = NULL;

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

    CHECK_OBJECT( (PyObject *)par_indices );
    Py_DECREF( par_indices );
    par_indices = NULL;

    Py_XDECREF( par_arr );
    par_arr = NULL;

    CHECK_OBJECT( (PyObject *)par_values );
    Py_DECREF( par_values );
    par_values = NULL;

    Py_XDECREF( var_arr_shape );
    var_arr_shape = NULL;

    Py_XDECREF( par_axis );
    par_axis = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_5_put_along_axis );
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


static PyObject *impl_numpy$lib$shape_base$$$function_6__apply_along_axis_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func1d = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_arr = python_pars[ 2 ];
    PyObject *par_args = python_pars[ 3 ];
    PyObject *par_kwargs = python_pars[ 4 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_arr );
        tmp_tuple_element_1 = par_arr;
        tmp_return_value = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_6__apply_along_axis_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_func1d );
    Py_DECREF( par_func1d );
    par_func1d = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_6__apply_along_axis_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$shape_base$$$function_7_apply_along_axis( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func1d = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_arr = python_pars[ 2 ];
    PyObject *par_args = python_pars[ 3 ];
    PyObject *par_kwargs = python_pars[ 4 ];
    PyObject *var_out_arr = NULL;
    PyObject *var_buff_permute = NULL;
    PyObject *var_ind0 = NULL;
    PyObject *var_inds = NULL;
    PyObject *var_inarr_view = NULL;
    PyObject *var_res = NULL;
    PyObject *var_nd = NULL;
    PyObject *var_in_dims = NULL;
    PyObject *var_buff_dims = NULL;
    PyObject *var_ind = NULL;
    PyObject *var_buff = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_6642c1eeef75a83b9631bcd884095d69;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6642c1eeef75a83b9631bcd884095d69 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6642c1eeef75a83b9631bcd884095d69, codeobj_6642c1eeef75a83b9631bcd884095d69, module_numpy$lib$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6642c1eeef75a83b9631bcd884095d69 = cache_frame_6642c1eeef75a83b9631bcd884095d69;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6642c1eeef75a83b9631bcd884095d69 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6642c1eeef75a83b9631bcd884095d69 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_asanyarray );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asanyarray );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "asanyarray" );
            exception_tb = NULL;

            exception_lineno = 362;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_arr );
        tmp_args_element_name_1 = par_arr;
        frame_6642c1eeef75a83b9631bcd884095d69->m_frame.f_lineno = 362;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 362;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_arr;
            assert( old != NULL );
            par_arr = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_arr );
        tmp_source_name_1 = par_arr;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 363;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_nd == NULL );
        var_nd = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_normalize_axis_index );

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

            exception_lineno = 364;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_2 = par_axis;
        CHECK_OBJECT( var_nd );
        tmp_args_element_name_3 = var_nd;
        frame_6642c1eeef75a83b9631bcd884095d69->m_frame.f_lineno = 364;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 364;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_axis;
            assert( old != NULL );
            par_axis = tmp_assign_source_3;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_range_arg_1;
        CHECK_OBJECT( var_nd );
        tmp_range_arg_1 = var_nd;
        tmp_list_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
        if ( tmp_list_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = PySequence_List( tmp_list_arg_1 );
        Py_DECREF( tmp_list_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_in_dims == NULL );
        var_in_dims = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_slice_source_1;
        PyObject *tmp_slice_upper_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_slice_source_2;
        PyObject *tmp_slice_lower_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_list_element_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_transpose );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_transpose );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "transpose" );
            exception_tb = NULL;

            exception_lineno = 368;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_arr );
        tmp_args_element_name_4 = par_arr;
        CHECK_OBJECT( var_in_dims );
        tmp_slice_source_1 = var_in_dims;
        CHECK_OBJECT( par_axis );
        tmp_slice_upper_1 = par_axis;
        tmp_left_name_2 = LOOKUP_SLICE( tmp_slice_source_1, Py_None, tmp_slice_upper_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 368;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_in_dims );
        tmp_slice_source_2 = var_in_dims;
        CHECK_OBJECT( par_axis );
        tmp_left_name_3 = par_axis;
        tmp_right_name_2 = const_int_pos_1;
        tmp_slice_lower_1 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_3, tmp_right_name_2 );
        if ( tmp_slice_lower_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 368;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = LOOKUP_SLICE( tmp_slice_source_2, tmp_slice_lower_1, Py_None );
        Py_DECREF( tmp_slice_lower_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 368;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 368;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_axis );
        tmp_list_element_1 = par_axis;
        tmp_right_name_3 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_right_name_3, 0, tmp_list_element_1 );
        tmp_args_element_name_5 = BINARY_OPERATION_ADD_OBJECT_LIST( tmp_left_name_1, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 368;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_6642c1eeef75a83b9631bcd884095d69->m_frame.f_lineno = 368;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 368;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_inarr_view == NULL );
        var_inarr_view = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_6;
        Py_ssize_t tmp_sliceslicedel_index_lower_1;
        Py_ssize_t tmp_slice_index_upper_1;
        PyObject *tmp_slice_source_3;
        PyObject *tmp_source_name_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_ndindex );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ndindex );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "ndindex" );
            exception_tb = NULL;

            exception_lineno = 372;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        tmp_sliceslicedel_index_lower_1 = 0;
        tmp_slice_index_upper_1 = -1;
        CHECK_OBJECT( var_inarr_view );
        tmp_source_name_2 = var_inarr_view;
        tmp_slice_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
        if ( tmp_slice_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 372;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = LOOKUP_INDEX_SLICE( tmp_slice_source_3, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
        Py_DECREF( tmp_slice_source_3 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 372;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_6642c1eeef75a83b9631bcd884095d69->m_frame.f_lineno = 372;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 372;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_inds == NULL );
        var_inds = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( var_inds );
            tmp_iter_arg_1 = var_inds;
            tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 373;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_1__$0 == NULL );
            tmp_genexpr_1__$0 = tmp_assign_source_8;
        }
        // Tried code:
        tmp_assign_source_7 = numpy$lib$shape_base$$$function_7_apply_along_axis$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_assign_source_7)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );


        goto try_return_handler_2;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_7_apply_along_axis );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        goto outline_result_1;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_7_apply_along_axis );
        return NULL;
        outline_result_1:;
        {
            PyObject *old = var_inds;
            assert( old != NULL );
            var_inds = tmp_assign_source_7;
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_value_name_1;
        CHECK_OBJECT( var_inds );
        tmp_value_name_1 = var_inds;
        tmp_assign_source_9 = ITERATOR_NEXT( tmp_value_name_1 );
        if ( tmp_assign_source_9 == NULL )
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


            type_description_1 = "oooooooooooooooo";
            exception_lineno = 377;
            goto try_except_handler_3;
        }
        assert( var_ind0 == NULL );
        var_ind0 = tmp_assign_source_9;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_6642c1eeef75a83b9631bcd884095d69 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_6642c1eeef75a83b9631bcd884095d69, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_6642c1eeef75a83b9631bcd884095d69, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_StopIteration;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;
            type_description_1 = "oooooooooooooooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_a41952ff1213c8219d6c2e5c778507d2;
            frame_6642c1eeef75a83b9631bcd884095d69->m_frame.f_lineno = 379;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 379;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 376;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_6642c1eeef75a83b9631bcd884095d69->m_frame) frame_6642c1eeef75a83b9631bcd884095d69->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
        branch_end_1:;
    }
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_asanyarray );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asanyarray );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "asanyarray" );
            exception_tb = NULL;

            exception_lineno = 380;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_5;
        CHECK_OBJECT( par_func1d );
        tmp_dircall_arg1_1 = par_func1d;
        CHECK_OBJECT( var_inarr_view );
        tmp_subscribed_name_1 = var_inarr_view;
        CHECK_OBJECT( var_ind0 );
        tmp_subscript_name_1 = var_ind0;
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 380;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = PyTuple_New( 1 );
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
            tmp_args_element_name_7 = impl___internal__$$$function_9_complex_call_helper_pos_star_list_star_dict( dir_call_args );
        }
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 380;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_6642c1eeef75a83b9631bcd884095d69->m_frame.f_lineno = 380;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 380;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_res == NULL );
        var_res = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_left_name_4;
        Py_ssize_t tmp_sliceslicedel_index_lower_2;
        Py_ssize_t tmp_slice_index_upper_2;
        PyObject *tmp_slice_source_4;
        PyObject *tmp_source_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_source_name_5;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_zeros );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "zeros" );
            exception_tb = NULL;

            exception_lineno = 386;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_6;
        tmp_sliceslicedel_index_lower_2 = 0;
        tmp_slice_index_upper_2 = -1;
        CHECK_OBJECT( var_inarr_view );
        tmp_source_name_3 = var_inarr_view;
        tmp_slice_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
        if ( tmp_slice_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = LOOKUP_INDEX_SLICE( tmp_slice_source_4, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
        Py_DECREF( tmp_slice_source_4 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_res );
        tmp_source_name_4 = var_res;
        tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 386;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_res );
        tmp_source_name_5 = var_res;
        tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_8 );

            exception_lineno = 386;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_6642c1eeef75a83b9631bcd884095d69->m_frame.f_lineno = 386;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_args_element_name_8 );
        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_buff == NULL );
        var_buff = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_list_arg_2;
        PyObject *tmp_range_arg_2;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( var_buff );
        tmp_source_name_6 = var_buff;
        tmp_range_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ndim );
        if ( tmp_range_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 389;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_list_arg_2 = BUILTIN_RANGE( tmp_range_arg_2 );
        Py_DECREF( tmp_range_arg_2 );
        if ( tmp_list_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 389;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = PySequence_List( tmp_list_arg_2 );
        Py_DECREF( tmp_list_arg_2 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 389;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_buff_dims == NULL );
        var_buff_dims = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_slice_source_5;
        PyObject *tmp_slice_lower_2;
        PyObject *tmp_slice_upper_2;
        PyObject *tmp_right_name_5;
        PyObject *tmp_slice_source_6;
        PyObject *tmp_slice_lower_3;
        PyObject *tmp_left_name_7;
        PyObject *tmp_source_name_7;
        PyObject *tmp_right_name_6;
        PyObject *tmp_source_name_8;
        PyObject *tmp_slice_upper_3;
        PyObject *tmp_source_name_9;
        PyObject *tmp_right_name_7;
        PyObject *tmp_slice_source_7;
        PyObject *tmp_slice_lower_4;
        PyObject *tmp_slice_upper_4;
        PyObject *tmp_left_name_8;
        PyObject *tmp_source_name_10;
        PyObject *tmp_right_name_8;
        PyObject *tmp_source_name_11;
        CHECK_OBJECT( var_buff_dims );
        tmp_slice_source_5 = var_buff_dims;
        tmp_slice_lower_2 = const_int_0;
        CHECK_OBJECT( par_axis );
        tmp_slice_upper_2 = par_axis;
        tmp_left_name_6 = LOOKUP_SLICE( tmp_slice_source_5, tmp_slice_lower_2, tmp_slice_upper_2 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 391;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_buff_dims );
        tmp_slice_source_6 = var_buff_dims;
        CHECK_OBJECT( var_buff );
        tmp_source_name_7 = var_buff;
        tmp_left_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ndim );
        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 392;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_res );
        tmp_source_name_8 = var_res;
        tmp_right_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_ndim );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );
            Py_DECREF( tmp_left_name_7 );

            exception_lineno = 392;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_slice_lower_3 = BINARY_OPERATION_SUB( tmp_left_name_7, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_7 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_slice_lower_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 392;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_buff );
        tmp_source_name_9 = var_buff;
        tmp_slice_upper_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_ndim );
        if ( tmp_slice_upper_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );
            Py_DECREF( tmp_slice_lower_3 );

            exception_lineno = 392;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_5 = LOOKUP_SLICE( tmp_slice_source_6, tmp_slice_lower_3, tmp_slice_upper_3 );
        Py_DECREF( tmp_slice_lower_3 );
        Py_DECREF( tmp_slice_upper_3 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 392;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 391;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_buff_dims );
        tmp_slice_source_7 = var_buff_dims;
        CHECK_OBJECT( par_axis );
        tmp_slice_lower_4 = par_axis;
        CHECK_OBJECT( var_buff );
        tmp_source_name_10 = var_buff;
        tmp_left_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_ndim );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 393;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_res );
        tmp_source_name_11 = var_res;
        tmp_right_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_ndim );
        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );
            Py_DECREF( tmp_left_name_8 );

            exception_lineno = 393;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_slice_upper_4 = BINARY_OPERATION_SUB( tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_8 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_slice_upper_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 393;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_7 = LOOKUP_SLICE( tmp_slice_source_7, tmp_slice_lower_4, tmp_slice_upper_4 );
        Py_DECREF( tmp_slice_upper_4 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 393;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_5 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 392;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_buff_permute == NULL );
        var_buff_permute = tmp_assign_source_13;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_7;
        CHECK_OBJECT( var_res );
        tmp_isinstance_inst_1 = var_res;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_matrix );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_matrix );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "matrix" );
            exception_tb = NULL;

            exception_lineno = 397;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_7;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
            type_description_1 = "oooooooooooooooo";
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
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_10;
            CHECK_OBJECT( var_res );
            tmp_called_instance_1 = var_res;
            CHECK_OBJECT( var_buff );
            tmp_args_element_name_10 = var_buff;
            frame_6642c1eeef75a83b9631bcd884095d69->m_frame.f_lineno = 398;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_assign_source_14 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain___array_prepare__, call_args );
            }

            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 398;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_buff;
                assert( old != NULL );
                var_buff = tmp_assign_source_14;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( var_res );
        tmp_ass_subvalue_1 = var_res;
        CHECK_OBJECT( var_buff );
        tmp_ass_subscribed_1 = var_buff;
        CHECK_OBJECT( var_ind0 );
        tmp_ass_subscript_1 = var_ind0;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 401;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( var_inds );
        tmp_iter_arg_2 = var_inds;
        tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 402;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_15;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_16 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_16 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooo";
                exception_lineno = 402;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_16;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_17 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_ind;
            var_ind = tmp_assign_source_17;
            Py_INCREF( var_ind );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_dircall_arg3_2;
        PyObject *tmp_dircall_arg4_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_asanyarray );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asanyarray );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "asanyarray" );
            exception_tb = NULL;

            exception_lineno = 403;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_7 = tmp_mvar_value_8;
        CHECK_OBJECT( par_func1d );
        tmp_dircall_arg1_2 = par_func1d;
        CHECK_OBJECT( var_inarr_view );
        tmp_subscribed_name_2 = var_inarr_view;
        CHECK_OBJECT( var_ind );
        tmp_subscript_name_2 = var_ind;
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 403;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_dircall_arg2_2 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_args );
        tmp_dircall_arg3_2 = par_args;
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg4_2 = par_kwargs;
        Py_INCREF( tmp_dircall_arg1_2 );
        Py_INCREF( tmp_dircall_arg3_2 );
        Py_INCREF( tmp_dircall_arg4_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_2};
            tmp_args_element_name_11 = impl___internal__$$$function_9_complex_call_helper_pos_star_list_star_dict( dir_call_args );
        }
        if ( tmp_args_element_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 403;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_6642c1eeef75a83b9631bcd884095d69->m_frame.f_lineno = 403;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_args_element_name_11 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 403;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_buff );
        tmp_ass_subscribed_2 = var_buff;
        CHECK_OBJECT( var_ind );
        tmp_ass_subscript_2 = var_ind;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 403;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 402;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
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
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_mvar_value_9;
        CHECK_OBJECT( var_res );
        tmp_isinstance_inst_2 = var_res;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_matrix );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_matrix );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "matrix" );
            exception_tb = NULL;

            exception_lineno = 405;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_2 = tmp_mvar_value_9;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 405;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 405;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_18;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_12;
            CHECK_OBJECT( var_res );
            tmp_called_instance_2 = var_res;
            CHECK_OBJECT( var_buff );
            tmp_args_element_name_12 = var_buff;
            frame_6642c1eeef75a83b9631bcd884095d69->m_frame.f_lineno = 407;
            {
                PyObject *call_args[] = { tmp_args_element_name_12 };
                tmp_assign_source_18 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain___array_wrap__, call_args );
            }

            if ( tmp_assign_source_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 407;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_buff;
                assert( old != NULL );
                var_buff = tmp_assign_source_18;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_called_name_8;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_args_element_name_14;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_transpose );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_transpose );
            }

            if ( tmp_mvar_value_10 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "transpose" );
                exception_tb = NULL;

                exception_lineno = 410;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_8 = tmp_mvar_value_10;
            CHECK_OBJECT( var_buff );
            tmp_args_element_name_13 = var_buff;
            CHECK_OBJECT( var_buff_permute );
            tmp_args_element_name_14 = var_buff_permute;
            frame_6642c1eeef75a83b9631bcd884095d69->m_frame.f_lineno = 410;
            {
                PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 410;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_name_9;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_args_element_name_16;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_transpose );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_transpose );
            }

            if ( tmp_mvar_value_11 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "transpose" );
                exception_tb = NULL;

                exception_lineno = 414;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_9 = tmp_mvar_value_11;
            CHECK_OBJECT( var_buff );
            tmp_args_element_name_15 = var_buff;
            CHECK_OBJECT( var_buff_permute );
            tmp_args_element_name_16 = var_buff_permute;
            frame_6642c1eeef75a83b9631bcd884095d69->m_frame.f_lineno = 414;
            {
                PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
                tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
            }

            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 414;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_out_arr == NULL );
            var_out_arr = tmp_assign_source_19;
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_17;
            CHECK_OBJECT( var_res );
            tmp_called_instance_3 = var_res;
            CHECK_OBJECT( var_out_arr );
            tmp_args_element_name_17 = var_out_arr;
            frame_6642c1eeef75a83b9631bcd884095d69->m_frame.f_lineno = 415;
            {
                PyObject *call_args[] = { tmp_args_element_name_17 };
                tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain___array_wrap__, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 415;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_3:;
    }

#if 1
    RESTORE_FRAME_EXCEPTION( frame_6642c1eeef75a83b9631bcd884095d69 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_6642c1eeef75a83b9631bcd884095d69 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_6642c1eeef75a83b9631bcd884095d69 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6642c1eeef75a83b9631bcd884095d69, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6642c1eeef75a83b9631bcd884095d69->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6642c1eeef75a83b9631bcd884095d69, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6642c1eeef75a83b9631bcd884095d69,
        type_description_1,
        par_func1d,
        par_axis,
        par_arr,
        par_args,
        par_kwargs,
        var_out_arr,
        var_buff_permute,
        var_ind0,
        var_inds,
        var_inarr_view,
        var_res,
        var_nd,
        var_in_dims,
        var_buff_dims,
        var_ind,
        var_buff
    );


    // Release cached frame.
    if ( frame_6642c1eeef75a83b9631bcd884095d69 == cache_frame_6642c1eeef75a83b9631bcd884095d69 )
    {
        Py_DECREF( frame_6642c1eeef75a83b9631bcd884095d69 );
    }
    cache_frame_6642c1eeef75a83b9631bcd884095d69 = NULL;

    assertFrameObject( frame_6642c1eeef75a83b9631bcd884095d69 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_7_apply_along_axis );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

    Py_XDECREF( var_out_arr );
    var_out_arr = NULL;

    CHECK_OBJECT( (PyObject *)var_buff_permute );
    Py_DECREF( var_buff_permute );
    var_buff_permute = NULL;

    CHECK_OBJECT( (PyObject *)var_ind0 );
    Py_DECREF( var_ind0 );
    var_ind0 = NULL;

    CHECK_OBJECT( (PyObject *)var_inds );
    Py_DECREF( var_inds );
    var_inds = NULL;

    CHECK_OBJECT( (PyObject *)var_inarr_view );
    Py_DECREF( var_inarr_view );
    var_inarr_view = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)var_nd );
    Py_DECREF( var_nd );
    var_nd = NULL;

    CHECK_OBJECT( (PyObject *)var_in_dims );
    Py_DECREF( var_in_dims );
    var_in_dims = NULL;

    CHECK_OBJECT( (PyObject *)var_buff_dims );
    Py_DECREF( var_buff_dims );
    var_buff_dims = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    Py_XDECREF( var_buff );
    var_buff = NULL;

    CHECK_OBJECT( (PyObject *)par_func1d );
    Py_DECREF( par_func1d );
    par_func1d = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

    Py_XDECREF( var_out_arr );
    var_out_arr = NULL;

    Py_XDECREF( var_buff_permute );
    var_buff_permute = NULL;

    Py_XDECREF( var_ind0 );
    var_ind0 = NULL;

    Py_XDECREF( var_inds );
    var_inds = NULL;

    Py_XDECREF( var_inarr_view );
    var_inarr_view = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_nd );
    var_nd = NULL;

    Py_XDECREF( var_in_dims );
    var_in_dims = NULL;

    Py_XDECREF( var_buff_dims );
    var_buff_dims = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    Py_XDECREF( var_buff );
    var_buff = NULL;

    CHECK_OBJECT( (PyObject *)par_func1d );
    Py_DECREF( par_func1d );
    par_func1d = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_7_apply_along_axis );
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



struct numpy$lib$shape_base$$$function_7_apply_along_axis$$$genexpr_1_genexpr_locals {
    PyObject *var_ind;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *numpy$lib$shape_base$$$function_7_apply_along_axis$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct numpy$lib$shape_base$$$function_7_apply_along_axis$$$genexpr_1_genexpr_locals *generator_heap = (struct numpy$lib$shape_base$$$function_7_apply_along_axis$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_ind = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_4a048dd580f78ea5063d80a1d3ca96bf, module_numpy$lib$shape_base, sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

#if PYTHON_VERSION < 370
        generator->m_frame->m_frame.f_exc_type = EXC_TYPE( thread_state );
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
        Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#else
        generator->m_exc_state.exc_type = EXC_TYPE( thread_state );
        if ( generator->m_exc_state.exc_type == Py_None ) generator->m_exc_state.exc_type = NULL;
        Py_XINCREF( generator->m_exc_state.exc_type );
        generator->m_exc_state.exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_value );
        generator->m_exc_state.exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_traceback );
#endif
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT( PyCell_GET( generator->m_closure[0] ) );
        tmp_next_source_1 = PyCell_GET( generator->m_closure[0] );
        tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 373;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( generator_heap->tmp_iter_value_0 );
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_ind;
            generator_heap->var_ind = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_ind );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_ind );
        tmp_left_name_1 = generator_heap->var_ind;
        tmp_right_name_1 = const_tuple_ellipsis_tuple;
        tmp_expression_name_1 = BINARY_OPERATION_ADD_OBJECT_TUPLE( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 373;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_left_name_1, sizeof(PyObject *), &tmp_right_name_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_left_name_1, sizeof(PyObject *), &tmp_right_name_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 373;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 373;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( generator_heap->exception_type ) )
    {
        if ( generator_heap->exception_tb == NULL )
        {
            generator_heap->exception_tb = MAKE_TRACEBACK( generator->m_frame, generator_heap->exception_lineno );
        }
        else if ( generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            generator_heap->exception_tb = ADD_TRACEBACK( generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_ind
        );


        // Release cached frame.
        if ( generator->m_frame == cache_m_frame )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_m_frame = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_ind );
    generator_heap->var_ind = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    Py_XDECREF( generator_heap->var_ind );
    generator_heap->var_ind = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *numpy$lib$shape_base$$$function_7_apply_along_axis$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        numpy$lib$shape_base$$$function_7_apply_along_axis$$$genexpr_1_genexpr_context,
        module_numpy$lib$shape_base,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_4a048dd580f78ea5063d80a1d3ca96bf,
        1,
        sizeof(struct numpy$lib$shape_base$$$function_7_apply_along_axis$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_numpy$lib$shape_base$$$function_8__apply_over_axes_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[ 0 ];
    PyObject *par_a = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_8__apply_over_axes_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_8__apply_over_axes_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$shape_base$$$function_9_apply_over_axes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[ 0 ];
    PyObject *par_a = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *var_args = NULL;
    PyObject *var_val = NULL;
    PyObject *var_res = NULL;
    PyObject *var_N = NULL;
    PyObject *var_axis = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_5d4de246c153321a48b6e52a7086776c;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5d4de246c153321a48b6e52a7086776c = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5d4de246c153321a48b6e52a7086776c, codeobj_5d4de246c153321a48b6e52a7086776c, module_numpy$lib$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5d4de246c153321a48b6e52a7086776c = cache_frame_5d4de246c153321a48b6e52a7086776c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5d4de246c153321a48b6e52a7086776c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5d4de246c153321a48b6e52a7086776c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_asarray );

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

            exception_lineno = 488;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_5d4de246c153321a48b6e52a7086776c->m_frame.f_lineno = 488;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 488;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_val == NULL );
        var_val = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_a );
        tmp_source_name_1 = par_a;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 489;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_N == NULL );
        var_N = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
            exception_tb = NULL;

            exception_lineno = 490;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_axes );
        tmp_args_element_name_2 = par_axes;
        frame_5d4de246c153321a48b6e52a7086776c->m_frame.f_lineno = 490;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 490;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndim );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 490;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 490;
            type_description_1 = "oooooooo";
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( par_axes );
            tmp_tuple_element_1 = par_axes;
            tmp_assign_source_3 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_assign_source_3, 0, tmp_tuple_element_1 );
            {
                PyObject *old = par_axes;
                assert( old != NULL );
                par_axes = tmp_assign_source_3;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_axes );
        tmp_iter_arg_1 = par_axes;
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 492;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooo";
                exception_lineno = 492;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_6 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_axis;
            var_axis = tmp_assign_source_6;
            Py_INCREF( var_axis );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_axis );
        tmp_compexpr_left_2 = var_axis;
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 493;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
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
            PyObject *tmp_assign_source_7;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( var_N );
            tmp_left_name_1 = var_N;
            CHECK_OBJECT( var_axis );
            tmp_right_name_1 = var_axis;
            tmp_assign_source_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 494;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_axis;
                assert( old != NULL );
                var_axis = tmp_assign_source_7;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_tuple_element_2;
        if ( var_val == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "val" );
            exception_tb = NULL;

            exception_lineno = 495;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_tuple_element_2 = var_val;
        tmp_assign_source_8 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_assign_source_8, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_axis );
        tmp_tuple_element_2 = var_axis;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_assign_source_8, 1, tmp_tuple_element_2 );
        {
            PyObject *old = var_args;
            var_args = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        CHECK_OBJECT( par_func );
        tmp_dircall_arg1_1 = par_func;
        CHECK_OBJECT( var_args );
        tmp_dircall_arg2_1 = var_args;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg2_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_9 = impl___internal__$$$function_3_complex_call_helper_star_list( dir_call_args );
        }
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 496;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_res;
            var_res = tmp_assign_source_9;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( var_res );
        tmp_source_name_3 = var_res;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ndim );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 497;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        if ( var_val == NULL )
        {
            Py_DECREF( tmp_compexpr_left_3 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "val" );
            exception_tb = NULL;

            exception_lineno = 497;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_4 = var_val;
        tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ndim );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_3 );

            exception_lineno = 497;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 497;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
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
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( var_res );
            tmp_assign_source_10 = var_res;
            {
                PyObject *old = var_val;
                var_val = tmp_assign_source_10;
                Py_INCREF( var_val );
                Py_XDECREF( old );
            }

        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_expand_dims );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_expand_dims );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "expand_dims" );
                exception_tb = NULL;

                exception_lineno = 500;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT( var_res );
            tmp_args_element_name_3 = var_res;
            CHECK_OBJECT( var_axis );
            tmp_args_element_name_4 = var_axis;
            frame_5d4de246c153321a48b6e52a7086776c->m_frame.f_lineno = 500;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 500;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_res;
                assert( old != NULL );
                var_res = tmp_assign_source_11;
                Py_DECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( var_res );
            tmp_source_name_5 = var_res;
            tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ndim );
            if ( tmp_compexpr_left_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 501;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            if ( var_val == NULL )
            {
                Py_DECREF( tmp_compexpr_left_4 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "val" );
                exception_tb = NULL;

                exception_lineno = 501;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_6 = var_val;
            tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ndim );
            if ( tmp_compexpr_right_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_4 );

                exception_lineno = 501;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_left_4 );
            Py_DECREF( tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 501;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
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
                PyObject *tmp_assign_source_12;
                CHECK_OBJECT( var_res );
                tmp_assign_source_12 = var_res;
                {
                    PyObject *old = var_val;
                    var_val = tmp_assign_source_12;
                    Py_INCREF( var_val );
                    Py_XDECREF( old );
                }

            }
            goto branch_end_4;
            branch_no_4:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                tmp_make_exception_arg_1 = const_str_digest_0db40bb03ee4a45a6df8ba3195dd83a5;
                frame_5d4de246c153321a48b6e52a7086776c->m_frame.f_lineno = 504;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 504;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            branch_end_4:;
        }
        branch_end_3:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 492;
        type_description_1 = "oooooooo";
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

    if ( var_val == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "val" );
        exception_tb = NULL;

        exception_lineno = 506;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_val;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5d4de246c153321a48b6e52a7086776c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5d4de246c153321a48b6e52a7086776c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5d4de246c153321a48b6e52a7086776c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5d4de246c153321a48b6e52a7086776c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5d4de246c153321a48b6e52a7086776c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5d4de246c153321a48b6e52a7086776c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5d4de246c153321a48b6e52a7086776c,
        type_description_1,
        par_func,
        par_a,
        par_axes,
        var_args,
        var_val,
        var_res,
        var_N,
        var_axis
    );


    // Release cached frame.
    if ( frame_5d4de246c153321a48b6e52a7086776c == cache_frame_5d4de246c153321a48b6e52a7086776c )
    {
        Py_DECREF( frame_5d4de246c153321a48b6e52a7086776c );
    }
    cache_frame_5d4de246c153321a48b6e52a7086776c = NULL;

    assertFrameObject( frame_5d4de246c153321a48b6e52a7086776c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_9_apply_over_axes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    Py_XDECREF( var_args );
    var_args = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)var_N );
    Py_DECREF( var_N );
    var_N = NULL;

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    Py_XDECREF( var_axis );
    var_axis = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    Py_XDECREF( var_args );
    var_args = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( par_axes );
    par_axes = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    Py_XDECREF( var_axis );
    var_axis = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_9_apply_over_axes );
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


static PyObject *impl_numpy$lib$shape_base$$$function_10__expand_dims_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_10__expand_dims_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_10__expand_dims_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$shape_base$$$function_11_expand_dims( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *var_shape = NULL;
    struct Nuitka_FrameObject *frame_567180109a27206bed4c24b84527ef57;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_567180109a27206bed4c24b84527ef57 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_567180109a27206bed4c24b84527ef57, codeobj_567180109a27206bed4c24b84527ef57, module_numpy$lib$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_567180109a27206bed4c24b84527ef57 = cache_frame_567180109a27206bed4c24b84527ef57;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_567180109a27206bed4c24b84527ef57 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_567180109a27206bed4c24b84527ef57 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_isinstance_inst_1 = par_a;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_matrix );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_matrix );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "matrix" );
            exception_tb = NULL;

            exception_lineno = 573;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 573;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_asarray );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "asarray" );
                exception_tb = NULL;

                exception_lineno = 574;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_a );
            tmp_args_element_name_1 = par_a;
            frame_567180109a27206bed4c24b84527ef57->m_frame.f_lineno = 574;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 574;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_a;
                assert( old != NULL );
                par_a = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_asanyarray );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asanyarray );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "asanyarray" );
                exception_tb = NULL;

                exception_lineno = 576;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_3;
            CHECK_OBJECT( par_a );
            tmp_args_element_name_2 = par_a;
            frame_567180109a27206bed4c24b84527ef57->m_frame.f_lineno = 576;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 576;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_a;
                assert( old != NULL );
                par_a = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_a );
        tmp_source_name_1 = par_a;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 578;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_shape == NULL );
        var_shape = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_axis );
        tmp_compexpr_left_1 = par_axis;
        CHECK_OBJECT( par_a );
        tmp_source_name_2 = par_a;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndim );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 579;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 579;
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
        CHECK_OBJECT( par_axis );
        tmp_compexpr_left_2 = par_axis;
        CHECK_OBJECT( par_a );
        tmp_source_name_3 = par_a;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ndim );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 579;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 579;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_1;
        tmp_compexpr_right_2 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 579;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 579;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_kw_name_1;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_warnings );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "warnings" );
                exception_tb = NULL;

                exception_lineno = 581;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_4;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_warn );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 581;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_1 = const_str_digest_aac2e5f3a6e99386a80af0efb226fceb;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
            }

            if ( tmp_mvar_value_5 == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "DeprecationWarning" );
                exception_tb = NULL;

                exception_lineno = 583;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_1 = tmp_mvar_value_5;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_f154c9a58c9419d7e391901d7b7fe49e );
            frame_567180109a27206bed4c24b84527ef57->m_frame.f_lineno = 581;
            tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 581;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_axis );
        tmp_compexpr_left_3 = par_axis;
        tmp_compexpr_right_3 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 585;
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
            PyObject *tmp_assign_source_4;
            PyObject *tmp_left_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_right_name_3;
            CHECK_OBJECT( par_axis );
            tmp_left_name_3 = par_axis;
            CHECK_OBJECT( par_a );
            tmp_source_name_5 = par_a;
            tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ndim );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 586;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 586;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_3 = const_int_pos_1;
            tmp_assign_source_4 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_2, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 586;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_axis;
                assert( old != NULL );
                par_axis = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_6;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_slice_source_1;
        PyObject *tmp_slice_upper_1;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        PyObject *tmp_slice_source_2;
        PyObject *tmp_slice_lower_1;
        CHECK_OBJECT( par_a );
        tmp_source_name_6 = par_a;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_reshape );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 589;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_shape );
        tmp_slice_source_1 = var_shape;
        CHECK_OBJECT( par_axis );
        tmp_slice_upper_1 = par_axis;
        tmp_left_name_5 = LOOKUP_SLICE( tmp_slice_source_1, Py_None, tmp_slice_upper_1 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 589;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = const_tuple_int_pos_1_tuple;
        tmp_left_name_4 = BINARY_OPERATION_ADD_OBJECT_TUPLE( tmp_left_name_5, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_5 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 589;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_shape );
        tmp_slice_source_2 = var_shape;
        CHECK_OBJECT( par_axis );
        tmp_slice_lower_1 = par_axis;
        tmp_right_name_5 = LOOKUP_SLICE( tmp_slice_source_2, tmp_slice_lower_1, Py_None );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 589;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_4 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 589;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_567180109a27206bed4c24b84527ef57->m_frame.f_lineno = 589;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 589;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_567180109a27206bed4c24b84527ef57 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_567180109a27206bed4c24b84527ef57 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_567180109a27206bed4c24b84527ef57 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_567180109a27206bed4c24b84527ef57, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_567180109a27206bed4c24b84527ef57->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_567180109a27206bed4c24b84527ef57, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_567180109a27206bed4c24b84527ef57,
        type_description_1,
        par_a,
        par_axis,
        var_shape
    );


    // Release cached frame.
    if ( frame_567180109a27206bed4c24b84527ef57 == cache_frame_567180109a27206bed4c24b84527ef57 )
    {
        Py_DECREF( frame_567180109a27206bed4c24b84527ef57 );
    }
    cache_frame_567180109a27206bed4c24b84527ef57 = NULL;

    assertFrameObject( frame_567180109a27206bed4c24b84527ef57 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_11_expand_dims );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)var_shape );
    Py_DECREF( var_shape );
    var_shape = NULL;

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

    Py_XDECREF( var_shape );
    var_shape = NULL;

    Py_XDECREF( par_axis );
    par_axis = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_11_expand_dims );
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


static PyObject *impl_numpy$lib$shape_base$$$function_12__column_stack_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tup = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_84be773cc1ceff8749ee2de9d4c3fb96;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_84be773cc1ceff8749ee2de9d4c3fb96 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_84be773cc1ceff8749ee2de9d4c3fb96, codeobj_84be773cc1ceff8749ee2de9d4c3fb96, module_numpy$lib$shape_base, sizeof(void *) );
    frame_84be773cc1ceff8749ee2de9d4c3fb96 = cache_frame_84be773cc1ceff8749ee2de9d4c3fb96;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_84be773cc1ceff8749ee2de9d4c3fb96 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_84be773cc1ceff8749ee2de9d4c3fb96 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__arrays_for_stack_dispatcher );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__arrays_for_stack_dispatcher );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_arrays_for_stack_dispatcher" );
            exception_tb = NULL;

            exception_lineno = 596;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_tup );
        tmp_args_element_name_1 = par_tup;
        frame_84be773cc1ceff8749ee2de9d4c3fb96->m_frame.f_lineno = 596;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 596;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_84be773cc1ceff8749ee2de9d4c3fb96 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_84be773cc1ceff8749ee2de9d4c3fb96 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_84be773cc1ceff8749ee2de9d4c3fb96 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_84be773cc1ceff8749ee2de9d4c3fb96, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_84be773cc1ceff8749ee2de9d4c3fb96->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_84be773cc1ceff8749ee2de9d4c3fb96, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_84be773cc1ceff8749ee2de9d4c3fb96,
        type_description_1,
        par_tup
    );


    // Release cached frame.
    if ( frame_84be773cc1ceff8749ee2de9d4c3fb96 == cache_frame_84be773cc1ceff8749ee2de9d4c3fb96 )
    {
        Py_DECREF( frame_84be773cc1ceff8749ee2de9d4c3fb96 );
    }
    cache_frame_84be773cc1ceff8749ee2de9d4c3fb96 = NULL;

    assertFrameObject( frame_84be773cc1ceff8749ee2de9d4c3fb96 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_12__column_stack_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_tup );
    Py_DECREF( par_tup );
    par_tup = NULL;

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

    CHECK_OBJECT( (PyObject *)par_tup );
    Py_DECREF( par_tup );
    par_tup = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_12__column_stack_dispatcher );
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


static PyObject *impl_numpy$lib$shape_base$$$function_13_column_stack( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tup = python_pars[ 0 ];
    PyObject *var_arrays = NULL;
    PyObject *var_arr = NULL;
    PyObject *var_v = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_bddd17c377b8322ed7a10d4e5ecc5adc;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bddd17c377b8322ed7a10d4e5ecc5adc = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bddd17c377b8322ed7a10d4e5ecc5adc, codeobj_bddd17c377b8322ed7a10d4e5ecc5adc, module_numpy$lib$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bddd17c377b8322ed7a10d4e5ecc5adc = cache_frame_bddd17c377b8322ed7a10d4e5ecc5adc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bddd17c377b8322ed7a10d4e5ecc5adc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bddd17c377b8322ed7a10d4e5ecc5adc ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__warn_for_nonsequence );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__warn_for_nonsequence );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_warn_for_nonsequence" );
            exception_tb = NULL;

            exception_lineno = 633;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_tup );
        tmp_args_element_name_1 = par_tup;
        frame_bddd17c377b8322ed7a10d4e5ecc5adc->m_frame.f_lineno = 633;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 633;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New( 0 );
        assert( var_arrays == NULL );
        var_arrays = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_tup );
        tmp_iter_arg_1 = par_tup;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 635;
            type_description_1 = "oooo";
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
                type_description_1 = "oooo";
                exception_lineno = 635;
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
            PyObject *old = var_v;
            var_v = tmp_assign_source_4;
            Py_INCREF( var_v );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
            exception_tb = NULL;

            exception_lineno = 636;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_v );
        tmp_tuple_element_1 = var_v;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_a00acf95180a0925f15877b623331589 );
        frame_bddd17c377b8322ed7a10d4e5ecc5adc->m_frame.f_lineno = 636;
        tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 636;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_arr;
            var_arr = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( var_arr );
        tmp_source_name_1 = var_arr;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 637;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_1 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 637;
            type_description_1 = "oooo";
            goto try_except_handler_2;
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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_source_name_2;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_array );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
                exception_tb = NULL;

                exception_lineno = 638;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT( var_arr );
            tmp_tuple_element_2 = var_arr;
            tmp_args_name_2 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_kw_name_2 = PyDict_Copy( const_dict_20a8437039fff2081eab2b4af8c84007 );
            frame_bddd17c377b8322ed7a10d4e5ecc5adc->m_frame.f_lineno = 638;
            tmp_source_name_2 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_source_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 638;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_T );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 638;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_arr;
                assert( old != NULL );
                var_arr = tmp_assign_source_6;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( var_arrays );
        tmp_called_instance_1 = var_arrays;
        CHECK_OBJECT( var_arr );
        tmp_args_element_name_2 = var_arr;
        frame_bddd17c377b8322ed7a10d4e5ecc5adc->m_frame.f_lineno = 639;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_append, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 639;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 635;
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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
            exception_tb = NULL;

            exception_lineno = 640;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_4;
        CHECK_OBJECT( var_arrays );
        tmp_args_element_name_3 = var_arrays;
        tmp_args_element_name_4 = const_int_pos_1;
        frame_bddd17c377b8322ed7a10d4e5ecc5adc->m_frame.f_lineno = 640;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_concatenate, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 640;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bddd17c377b8322ed7a10d4e5ecc5adc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bddd17c377b8322ed7a10d4e5ecc5adc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bddd17c377b8322ed7a10d4e5ecc5adc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bddd17c377b8322ed7a10d4e5ecc5adc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bddd17c377b8322ed7a10d4e5ecc5adc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bddd17c377b8322ed7a10d4e5ecc5adc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bddd17c377b8322ed7a10d4e5ecc5adc,
        type_description_1,
        par_tup,
        var_arrays,
        var_arr,
        var_v
    );


    // Release cached frame.
    if ( frame_bddd17c377b8322ed7a10d4e5ecc5adc == cache_frame_bddd17c377b8322ed7a10d4e5ecc5adc )
    {
        Py_DECREF( frame_bddd17c377b8322ed7a10d4e5ecc5adc );
    }
    cache_frame_bddd17c377b8322ed7a10d4e5ecc5adc = NULL;

    assertFrameObject( frame_bddd17c377b8322ed7a10d4e5ecc5adc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_13_column_stack );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_tup );
    Py_DECREF( par_tup );
    par_tup = NULL;

    CHECK_OBJECT( (PyObject *)var_arrays );
    Py_DECREF( var_arrays );
    var_arrays = NULL;

    Py_XDECREF( var_arr );
    var_arr = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

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

    CHECK_OBJECT( (PyObject *)par_tup );
    Py_DECREF( par_tup );
    par_tup = NULL;

    Py_XDECREF( var_arrays );
    var_arrays = NULL;

    Py_XDECREF( var_arr );
    var_arr = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_13_column_stack );
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


static PyObject *impl_numpy$lib$shape_base$$$function_14__dstack_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tup = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_c1bf07921a38f5f2123b2013d6d3c564;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c1bf07921a38f5f2123b2013d6d3c564 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c1bf07921a38f5f2123b2013d6d3c564, codeobj_c1bf07921a38f5f2123b2013d6d3c564, module_numpy$lib$shape_base, sizeof(void *) );
    frame_c1bf07921a38f5f2123b2013d6d3c564 = cache_frame_c1bf07921a38f5f2123b2013d6d3c564;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c1bf07921a38f5f2123b2013d6d3c564 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c1bf07921a38f5f2123b2013d6d3c564 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__arrays_for_stack_dispatcher );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__arrays_for_stack_dispatcher );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_arrays_for_stack_dispatcher" );
            exception_tb = NULL;

            exception_lineno = 644;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_tup );
        tmp_args_element_name_1 = par_tup;
        frame_c1bf07921a38f5f2123b2013d6d3c564->m_frame.f_lineno = 644;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 644;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c1bf07921a38f5f2123b2013d6d3c564 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c1bf07921a38f5f2123b2013d6d3c564 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c1bf07921a38f5f2123b2013d6d3c564 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c1bf07921a38f5f2123b2013d6d3c564, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c1bf07921a38f5f2123b2013d6d3c564->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c1bf07921a38f5f2123b2013d6d3c564, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c1bf07921a38f5f2123b2013d6d3c564,
        type_description_1,
        par_tup
    );


    // Release cached frame.
    if ( frame_c1bf07921a38f5f2123b2013d6d3c564 == cache_frame_c1bf07921a38f5f2123b2013d6d3c564 )
    {
        Py_DECREF( frame_c1bf07921a38f5f2123b2013d6d3c564 );
    }
    cache_frame_c1bf07921a38f5f2123b2013d6d3c564 = NULL;

    assertFrameObject( frame_c1bf07921a38f5f2123b2013d6d3c564 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_14__dstack_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_tup );
    Py_DECREF( par_tup );
    par_tup = NULL;

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

    CHECK_OBJECT( (PyObject *)par_tup );
    Py_DECREF( par_tup );
    par_tup = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_14__dstack_dispatcher );
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


static PyObject *impl_numpy$lib$shape_base$$$function_15_dstack( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tup = python_pars[ 0 ];
    PyObject *var__m = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_4cd39dce4b92377adbf097f044630fae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_4cd39dce4b92377adbf097f044630fae = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4cd39dce4b92377adbf097f044630fae, codeobj_4cd39dce4b92377adbf097f044630fae, module_numpy$lib$shape_base, sizeof(void *)+sizeof(void *) );
    frame_4cd39dce4b92377adbf097f044630fae = cache_frame_4cd39dce4b92377adbf097f044630fae;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4cd39dce4b92377adbf097f044630fae );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4cd39dce4b92377adbf097f044630fae ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__warn_for_nonsequence );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__warn_for_nonsequence );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_warn_for_nonsequence" );
            exception_tb = NULL;

            exception_lineno = 698;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_tup );
        tmp_args_element_name_1 = par_tup;
        frame_4cd39dce4b92377adbf097f044630fae->m_frame.f_lineno = 698;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 698;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
            exception_tb = NULL;

            exception_lineno = 699;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_concatenate );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 699;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( par_tup );
            tmp_iter_arg_1 = par_tup;
            tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 699;
                type_description_1 = "oo";
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
                    type_description_1 = "oo";
                    exception_lineno = 699;
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
                PyObject *old = var__m;
                var__m = tmp_assign_source_4;
                Py_INCREF( var__m );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
            tmp_append_list_1 = tmp_list_contraction_1__contraction_result;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_atleast_3d );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_3d );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "atleast_3d" );
                exception_tb = NULL;

                exception_lineno = 699;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT( var__m );
            tmp_args_element_name_3 = var__m;
            frame_4cd39dce4b92377adbf097f044630fae->m_frame.f_lineno = 699;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 699;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 699;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 699;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
        tmp_args_element_name_2 = tmp_list_contraction_1__contraction_result;
        Py_INCREF( tmp_args_element_name_2 );
        goto try_return_handler_2;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_15_dstack );
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
        NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_15_dstack );
        return NULL;
        outline_result_1:;
        tmp_args_element_name_4 = const_int_pos_2;
        frame_4cd39dce4b92377adbf097f044630fae->m_frame.f_lineno = 699;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 699;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4cd39dce4b92377adbf097f044630fae );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4cd39dce4b92377adbf097f044630fae );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4cd39dce4b92377adbf097f044630fae );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4cd39dce4b92377adbf097f044630fae, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4cd39dce4b92377adbf097f044630fae->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4cd39dce4b92377adbf097f044630fae, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4cd39dce4b92377adbf097f044630fae,
        type_description_1,
        par_tup,
        var__m
    );


    // Release cached frame.
    if ( frame_4cd39dce4b92377adbf097f044630fae == cache_frame_4cd39dce4b92377adbf097f044630fae )
    {
        Py_DECREF( frame_4cd39dce4b92377adbf097f044630fae );
    }
    cache_frame_4cd39dce4b92377adbf097f044630fae = NULL;

    assertFrameObject( frame_4cd39dce4b92377adbf097f044630fae );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_15_dstack );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_tup );
    Py_DECREF( par_tup );
    par_tup = NULL;

    Py_XDECREF( var__m );
    var__m = NULL;

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

    CHECK_OBJECT( (PyObject *)par_tup );
    Py_DECREF( par_tup );
    par_tup = NULL;

    Py_XDECREF( var__m );
    var__m = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_15_dstack );
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


static PyObject *impl_numpy$lib$shape_base$$$function_16__replace_zero_by_x_arrays( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sub_arys = python_pars[ 0 ];
    PyObject *var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_9dbf8e883b7b194b1567a6bc1e843153;
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
    static struct Nuitka_FrameObject *cache_frame_9dbf8e883b7b194b1567a6bc1e843153 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9dbf8e883b7b194b1567a6bc1e843153, codeobj_9dbf8e883b7b194b1567a6bc1e843153, module_numpy$lib$shape_base, sizeof(void *)+sizeof(void *) );
    frame_9dbf8e883b7b194b1567a6bc1e843153 = cache_frame_9dbf8e883b7b194b1567a6bc1e843153;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9dbf8e883b7b194b1567a6bc1e843153 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9dbf8e883b7b194b1567a6bc1e843153 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_range_arg_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_sub_arys );
        tmp_len_arg_1 = par_sub_arys;
        tmp_range_arg_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_range_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 703;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
        Py_DECREF( tmp_range_arg_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 703;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 703;
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
                exception_lineno = 703;
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
            PyObject *old = var_i;
            var_i = tmp_assign_source_3;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
            exception_tb = NULL;

            exception_lineno = 704;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 704;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_sub_arys );
        tmp_subscribed_name_1 = par_sub_arys;
        CHECK_OBJECT( var_i );
        tmp_subscript_name_1 = var_i;
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 704;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_9dbf8e883b7b194b1567a6bc1e843153->m_frame.f_lineno = 704;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 704;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 704;
            type_description_1 = "oo";
            goto try_except_handler_2;
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
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
                exception_tb = NULL;

                exception_lineno = 705;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_empty );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 705;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            tmp_args_name_1 = const_tuple_int_0_tuple;
            CHECK_OBJECT( par_sub_arys );
            tmp_subscribed_name_2 = par_sub_arys;
            CHECK_OBJECT( var_i );
            tmp_subscript_name_2 = var_i;
            tmp_source_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_source_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 705;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
            Py_DECREF( tmp_source_name_3 );
            if ( tmp_dict_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 705;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            tmp_dict_key_1 = const_str_plain_dtype;
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_9dbf8e883b7b194b1567a6bc1e843153->m_frame.f_lineno = 705;
            tmp_ass_subvalue_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 705;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_sub_arys );
            tmp_ass_subscribed_1 = par_sub_arys;
            CHECK_OBJECT( var_i );
            tmp_ass_subscript_1 = var_i;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 705;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_args_element_name_5;
            int tmp_truth_name_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
                exception_tb = NULL;

                exception_lineno = 706;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }

            tmp_source_name_4 = tmp_mvar_value_3;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_sometrue );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 706;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
                exception_tb = NULL;

                exception_lineno = 706;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }

            tmp_source_name_5 = tmp_mvar_value_4;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_equal );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 706;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
            }

            if ( tmp_mvar_value_5 == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_called_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
                exception_tb = NULL;

                exception_lineno = 706;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }

            tmp_source_name_6 = tmp_mvar_value_5;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 706;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_sub_arys );
            tmp_subscribed_name_3 = par_sub_arys;
            CHECK_OBJECT( var_i );
            tmp_subscript_name_3 = var_i;
            tmp_args_element_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 706;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            frame_9dbf8e883b7b194b1567a6bc1e843153->m_frame.f_lineno = 706;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 706;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            tmp_args_element_name_5 = const_int_0;
            frame_9dbf8e883b7b194b1567a6bc1e843153->m_frame.f_lineno = 706;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_5 };
                tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 706;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            frame_9dbf8e883b7b194b1567a6bc1e843153->m_frame.f_lineno = 706;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 706;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_1 );

                exception_lineno = 706;
                type_description_1 = "oo";
                goto try_except_handler_2;
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
                PyObject *tmp_ass_subvalue_2;
                PyObject *tmp_called_name_6;
                PyObject *tmp_source_name_7;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_args_name_2;
                PyObject *tmp_kw_name_2;
                PyObject *tmp_dict_key_2;
                PyObject *tmp_dict_value_2;
                PyObject *tmp_source_name_8;
                PyObject *tmp_subscribed_name_4;
                PyObject *tmp_subscript_name_4;
                PyObject *tmp_ass_subscribed_2;
                PyObject *tmp_ass_subscript_2;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
                    exception_tb = NULL;

                    exception_lineno = 707;
                    type_description_1 = "oo";
                    goto try_except_handler_2;
                }

                tmp_source_name_7 = tmp_mvar_value_6;
                tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_empty );
                if ( tmp_called_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 707;
                    type_description_1 = "oo";
                    goto try_except_handler_2;
                }
                tmp_args_name_2 = const_tuple_int_0_tuple;
                CHECK_OBJECT( par_sub_arys );
                tmp_subscribed_name_4 = par_sub_arys;
                CHECK_OBJECT( var_i );
                tmp_subscript_name_4 = var_i;
                tmp_source_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
                if ( tmp_source_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_6 );

                    exception_lineno = 707;
                    type_description_1 = "oo";
                    goto try_except_handler_2;
                }
                tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_dtype );
                Py_DECREF( tmp_source_name_8 );
                if ( tmp_dict_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_6 );

                    exception_lineno = 707;
                    type_description_1 = "oo";
                    goto try_except_handler_2;
                }
                tmp_dict_key_2 = const_str_plain_dtype;
                tmp_kw_name_2 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
                Py_DECREF( tmp_dict_value_2 );
                assert( !(tmp_res != 0) );
                frame_9dbf8e883b7b194b1567a6bc1e843153->m_frame.f_lineno = 707;
                tmp_ass_subvalue_2 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_2, tmp_kw_name_2 );
                Py_DECREF( tmp_called_name_6 );
                Py_DECREF( tmp_kw_name_2 );
                if ( tmp_ass_subvalue_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 707;
                    type_description_1 = "oo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT( par_sub_arys );
                tmp_ass_subscribed_2 = par_sub_arys;
                CHECK_OBJECT( var_i );
                tmp_ass_subscript_2 = var_i;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
                Py_DECREF( tmp_ass_subvalue_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 707;
                    type_description_1 = "oo";
                    goto try_except_handler_2;
                }
            }
            branch_no_2:;
        }
        branch_end_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 703;
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9dbf8e883b7b194b1567a6bc1e843153 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9dbf8e883b7b194b1567a6bc1e843153 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9dbf8e883b7b194b1567a6bc1e843153, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9dbf8e883b7b194b1567a6bc1e843153->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9dbf8e883b7b194b1567a6bc1e843153, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9dbf8e883b7b194b1567a6bc1e843153,
        type_description_1,
        par_sub_arys,
        var_i
    );


    // Release cached frame.
    if ( frame_9dbf8e883b7b194b1567a6bc1e843153 == cache_frame_9dbf8e883b7b194b1567a6bc1e843153 )
    {
        Py_DECREF( frame_9dbf8e883b7b194b1567a6bc1e843153 );
    }
    cache_frame_9dbf8e883b7b194b1567a6bc1e843153 = NULL;

    assertFrameObject( frame_9dbf8e883b7b194b1567a6bc1e843153 );

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

    CHECK_OBJECT( par_sub_arys );
    tmp_return_value = par_sub_arys;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_16__replace_zero_by_x_arrays );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_sub_arys );
    Py_DECREF( par_sub_arys );
    par_sub_arys = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

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

    CHECK_OBJECT( (PyObject *)par_sub_arys );
    Py_DECREF( par_sub_arys );
    par_sub_arys = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_16__replace_zero_by_x_arrays );
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


static PyObject *impl_numpy$lib$shape_base$$$function_17__array_split_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ary = python_pars[ 0 ];
    PyObject *par_indices_or_sections = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_ary );
        tmp_tuple_element_1 = par_ary;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_indices_or_sections );
        tmp_tuple_element_1 = par_indices_or_sections;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_17__array_split_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ary );
    Py_DECREF( par_ary );
    par_ary = NULL;

    CHECK_OBJECT( (PyObject *)par_indices_or_sections );
    Py_DECREF( par_indices_or_sections );
    par_indices_or_sections = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_17__array_split_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$shape_base$$$function_18_array_split( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ary = python_pars[ 0 ];
    PyObject *par_indices_or_sections = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *var_end = NULL;
    PyObject *var_section_sizes = NULL;
    PyObject *var_i = NULL;
    PyObject *var_Ntotal = NULL;
    PyObject *var_Nsections = NULL;
    PyObject *var_sub_arys = NULL;
    PyObject *var_extras = NULL;
    PyObject *var_st = NULL;
    PyObject *var_Neach_section = NULL;
    PyObject *var_div_points = NULL;
    PyObject *var_sary = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_b3a446e8491296ddaabe1a40b2fcfff0;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_iterator_attempt;
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
    static struct Nuitka_FrameObject *cache_frame_b3a446e8491296ddaabe1a40b2fcfff0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b3a446e8491296ddaabe1a40b2fcfff0, codeobj_b3a446e8491296ddaabe1a40b2fcfff0, module_numpy$lib$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b3a446e8491296ddaabe1a40b2fcfff0 = cache_frame_b3a446e8491296ddaabe1a40b2fcfff0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b3a446e8491296ddaabe1a40b2fcfff0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b3a446e8491296ddaabe1a40b2fcfff0 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_ary );
        tmp_source_name_1 = par_ary;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 743;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_axis );
        tmp_subscript_name_1 = par_axis;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 743;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        assert( var_Ntotal == NULL );
        var_Ntotal = tmp_assign_source_1;
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
    PRESERVE_FRAME_EXCEPTION( frame_b3a446e8491296ddaabe1a40b2fcfff0 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_b3a446e8491296ddaabe1a40b2fcfff0, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_b3a446e8491296ddaabe1a40b2fcfff0, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 744;
            type_description_1 = "oooooooooooooo";
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
            PyObject *tmp_len_arg_1;
            CHECK_OBJECT( par_ary );
            tmp_len_arg_1 = par_ary;
            tmp_assign_source_2 = BUILTIN_LEN( tmp_len_arg_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 745;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_Ntotal == NULL );
            var_Ntotal = tmp_assign_source_2;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 742;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_b3a446e8491296ddaabe1a40b2fcfff0->m_frame) frame_b3a446e8491296ddaabe1a40b2fcfff0->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
        branch_end_1:;
    }
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_18_array_split );
    return NULL;
    // End of try:
    try_end_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_indices_or_sections );
        tmp_len_arg_2 = par_indices_or_sections;
        tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 748;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        assert( !(tmp_assign_source_3 == NULL) );
        assert( var_Nsections == NULL );
        var_Nsections = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_right_name_3;
        PyObject *tmp_list_element_1;
        tmp_left_name_3 = LIST_COPY( const_list_int_0_list );
        CHECK_OBJECT( par_indices_or_sections );
        tmp_list_arg_1 = par_indices_or_sections;
        tmp_right_name_2 = PySequence_List( tmp_list_arg_1 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 749;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_left_name_2 = BINARY_OPERATION_ADD_LIST_OBJECT( tmp_left_name_3, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 749;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        if ( var_Ntotal == NULL )
        {
            Py_DECREF( tmp_left_name_2 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "Ntotal" );
            exception_tb = NULL;

            exception_lineno = 749;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_list_element_1 = var_Ntotal;
        tmp_right_name_3 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_right_name_3, 0, tmp_list_element_1 );
        tmp_assign_source_4 = BINARY_OPERATION_ADD_OBJECT_LIST( tmp_left_name_2, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 749;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        assert( var_div_points == NULL );
        var_div_points = tmp_assign_source_4;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_b3a446e8491296ddaabe1a40b2fcfff0 );
    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_b3a446e8491296ddaabe1a40b2fcfff0, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != 0 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_b3a446e8491296ddaabe1a40b2fcfff0, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 750;
            type_description_1 = "oooooooooooooo";
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
            PyObject *tmp_assign_source_5;
            PyObject *tmp_int_arg_1;
            CHECK_OBJECT( par_indices_or_sections );
            tmp_int_arg_1 = par_indices_or_sections;
            tmp_assign_source_5 = PyNumber_Int( tmp_int_arg_1 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 752;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_Nsections;
                var_Nsections = tmp_assign_source_5;
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( var_Nsections );
            tmp_compexpr_left_3 = var_Nsections;
            tmp_compexpr_right_3 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_INT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 753;
                type_description_1 = "oooooooooooooo";
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                tmp_make_exception_arg_1 = const_str_digest_d6f837cfab6b2c229dd806949071503a;
                frame_b3a446e8491296ddaabe1a40b2fcfff0->m_frame.f_lineno = 754;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 754;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_3:;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            if ( var_Ntotal == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "Ntotal" );
                exception_tb = NULL;

                exception_lineno = 755;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_4;
            }

            tmp_left_name_4 = var_Ntotal;
            CHECK_OBJECT( var_Nsections );
            tmp_right_name_4 = var_Nsections;
            tmp_iter_arg_1 = BUILTIN_DIVMOD( tmp_left_name_4, tmp_right_name_4 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 755;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 755;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_4;
            }
            assert( tmp_tuple_unpack_1__source_iter == NULL );
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_1, 0 );
            if ( tmp_assign_source_7 == NULL )
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


                type_description_1 = "oooooooooooooo";
                exception_lineno = 755;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_1__element_1 == NULL );
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_2, 1 );
            if ( tmp_assign_source_8 == NULL )
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


                type_description_1 = "oooooooooooooo";
                exception_lineno = 755;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
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

                        type_description_1 = "oooooooooooooo";
                        exception_lineno = 755;
                        goto try_except_handler_5;
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

                type_description_1 = "oooooooooooooo";
                exception_lineno = 755;
                goto try_except_handler_5;
            }
        }
        goto try_end_3;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        try_end_3:;
        goto try_end_4;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_1;
        // End of try:
        try_end_4:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
            assert( var_Neach_section == NULL );
            Py_INCREF( tmp_assign_source_9 );
            var_Neach_section = tmp_assign_source_9;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
            assert( var_extras == NULL );
            Py_INCREF( tmp_assign_source_10 );
            var_extras = tmp_assign_source_10;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_left_name_5;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_5;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_6;
            PyObject *tmp_list_element_2;
            PyObject *tmp_left_name_8;
            PyObject *tmp_right_name_7;
            PyObject *tmp_right_name_8;
            PyObject *tmp_left_name_9;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_9;
            PyObject *tmp_right_name_10;
            PyObject *tmp_list_element_3;
            tmp_left_name_6 = LIST_COPY( const_list_int_0_list );
            CHECK_OBJECT( var_extras );
            tmp_left_name_7 = var_extras;
            CHECK_OBJECT( var_Neach_section );
            tmp_left_name_8 = var_Neach_section;
            tmp_right_name_7 = const_int_pos_1;
            tmp_list_element_2 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_8, tmp_right_name_7 );
            if ( tmp_list_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_6 );

                exception_lineno = 757;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_6 = PyList_New( 1 );
            PyList_SET_ITEM( tmp_right_name_6, 0, tmp_list_element_2 );
            tmp_right_name_5 = BINARY_OPERATION_MUL( tmp_left_name_7, tmp_right_name_6 );
            Py_DECREF( tmp_right_name_6 );
            if ( tmp_right_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_6 );

                exception_lineno = 757;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_5 = BINARY_OPERATION_ADD_LIST_OBJECT( tmp_left_name_6, tmp_right_name_5 );
            Py_DECREF( tmp_left_name_6 );
            Py_DECREF( tmp_right_name_5 );
            if ( tmp_left_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 756;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_Nsections );
            tmp_left_name_10 = var_Nsections;
            CHECK_OBJECT( var_extras );
            tmp_right_name_9 = var_extras;
            tmp_left_name_9 = BINARY_OPERATION_SUB( tmp_left_name_10, tmp_right_name_9 );
            if ( tmp_left_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_5 );

                exception_lineno = 758;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_Neach_section );
            tmp_list_element_3 = var_Neach_section;
            tmp_right_name_10 = PyList_New( 1 );
            Py_INCREF( tmp_list_element_3 );
            PyList_SET_ITEM( tmp_right_name_10, 0, tmp_list_element_3 );
            tmp_right_name_8 = BINARY_OPERATION_MUL( tmp_left_name_9, tmp_right_name_10 );
            Py_DECREF( tmp_left_name_9 );
            Py_DECREF( tmp_right_name_10 );
            if ( tmp_right_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_5 );

                exception_lineno = 758;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_8 );
            Py_DECREF( tmp_left_name_5 );
            Py_DECREF( tmp_right_name_8 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 757;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_section_sizes == NULL );
            var_section_sizes = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
                exception_tb = NULL;

                exception_lineno = 759;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_array );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 759;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_section_sizes );
            tmp_tuple_element_1 = var_section_sizes;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
                exception_tb = NULL;

                exception_lineno = 759;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_2;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_intp );
            if ( tmp_dict_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_name_1 );

                exception_lineno = 759;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_1 = const_str_plain_dtype;
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_b3a446e8491296ddaabe1a40b2fcfff0->m_frame.f_lineno = 759;
            tmp_called_instance_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 759;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_b3a446e8491296ddaabe1a40b2fcfff0->m_frame.f_lineno = 759;
            tmp_assign_source_12 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_cumsum );
            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 759;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_div_points == NULL );
            var_div_points = tmp_assign_source_12;
        }
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 746;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_b3a446e8491296ddaabe1a40b2fcfff0->m_frame) frame_b3a446e8491296ddaabe1a40b2fcfff0->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
        branch_end_2:;
    }
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_18_array_split );
    return NULL;
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = PyList_New( 0 );
        assert( var_sub_arys == NULL );
        var_sub_arys = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
            exception_tb = NULL;

            exception_lineno = 762;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_3;
        CHECK_OBJECT( par_ary );
        tmp_args_element_name_1 = par_ary;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_2 = par_axis;
        tmp_args_element_name_3 = const_int_0;
        frame_b3a446e8491296ddaabe1a40b2fcfff0->m_frame.f_lineno = 762;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_14 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_2, const_str_plain_swapaxes, call_args );
        }

        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 762;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_sary == NULL );
        var_sary = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_range_arg_1;
        if ( var_Nsections == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "Nsections" );
            exception_tb = NULL;

            exception_lineno = 763;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_range_arg_1 = var_Nsections;
        tmp_iter_arg_2 = BUILTIN_RANGE( tmp_range_arg_1 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 763;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 763;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_15;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_16 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_16 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooo";
                exception_lineno = 763;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_16;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_17 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_17;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        if ( var_div_points == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "div_points" );
            exception_tb = NULL;

            exception_lineno = 764;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_subscribed_name_2 = var_div_points;
        CHECK_OBJECT( var_i );
        tmp_subscript_name_2 = var_i;
        tmp_assign_source_18 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 764;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_st;
            var_st = tmp_assign_source_18;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        if ( var_div_points == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "div_points" );
            exception_tb = NULL;

            exception_lineno = 765;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_subscribed_name_3 = var_div_points;
        CHECK_OBJECT( var_i );
        tmp_left_name_11 = var_i;
        tmp_right_name_11 = const_int_pos_1;
        tmp_subscript_name_3 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_11, tmp_right_name_11 );
        if ( tmp_subscript_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 765;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_19 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscript_name_3 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 765;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_end;
            var_end = tmp_assign_source_19;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_slice_source_1;
        PyObject *tmp_slice_lower_1;
        PyObject *tmp_slice_upper_1;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( var_sub_arys );
        tmp_source_name_4 = var_sub_arys;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 766;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
            exception_tb = NULL;

            exception_lineno = 766;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_source_name_5 = tmp_mvar_value_4;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_swapaxes );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 766;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( var_sary );
        tmp_slice_source_1 = var_sary;
        CHECK_OBJECT( var_st );
        tmp_slice_lower_1 = var_st;
        CHECK_OBJECT( var_end );
        tmp_slice_upper_1 = var_end;
        tmp_args_element_name_5 = LOOKUP_SLICE( tmp_slice_source_1, tmp_slice_lower_1, tmp_slice_upper_1 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 766;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_6 = par_axis;
        tmp_args_element_name_7 = const_int_0;
        frame_b3a446e8491296ddaabe1a40b2fcfff0->m_frame.f_lineno = 766;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 766;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        frame_b3a446e8491296ddaabe1a40b2fcfff0->m_frame.f_lineno = 766;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 766;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 763;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_b3a446e8491296ddaabe1a40b2fcfff0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_b3a446e8491296ddaabe1a40b2fcfff0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b3a446e8491296ddaabe1a40b2fcfff0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b3a446e8491296ddaabe1a40b2fcfff0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b3a446e8491296ddaabe1a40b2fcfff0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b3a446e8491296ddaabe1a40b2fcfff0,
        type_description_1,
        par_ary,
        par_indices_or_sections,
        par_axis,
        var_end,
        var_section_sizes,
        var_i,
        var_Ntotal,
        var_Nsections,
        var_sub_arys,
        var_extras,
        var_st,
        var_Neach_section,
        var_div_points,
        var_sary
    );


    // Release cached frame.
    if ( frame_b3a446e8491296ddaabe1a40b2fcfff0 == cache_frame_b3a446e8491296ddaabe1a40b2fcfff0 )
    {
        Py_DECREF( frame_b3a446e8491296ddaabe1a40b2fcfff0 );
    }
    cache_frame_b3a446e8491296ddaabe1a40b2fcfff0 = NULL;

    assertFrameObject( frame_b3a446e8491296ddaabe1a40b2fcfff0 );

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

    CHECK_OBJECT( var_sub_arys );
    tmp_return_value = var_sub_arys;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_18_array_split );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_indices_or_sections );
    Py_DECREF( par_indices_or_sections );
    par_indices_or_sections = NULL;

    Py_XDECREF( var_end );
    var_end = NULL;

    Py_XDECREF( var_section_sizes );
    var_section_sizes = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)par_ary );
    Py_DECREF( par_ary );
    par_ary = NULL;

    Py_XDECREF( var_Ntotal );
    var_Ntotal = NULL;

    Py_XDECREF( var_Nsections );
    var_Nsections = NULL;

    CHECK_OBJECT( (PyObject *)var_sub_arys );
    Py_DECREF( var_sub_arys );
    var_sub_arys = NULL;

    Py_XDECREF( var_extras );
    var_extras = NULL;

    Py_XDECREF( var_st );
    var_st = NULL;

    Py_XDECREF( var_Neach_section );
    var_Neach_section = NULL;

    Py_XDECREF( var_div_points );
    var_div_points = NULL;

    CHECK_OBJECT( (PyObject *)var_sary );
    Py_DECREF( var_sary );
    var_sary = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_indices_or_sections );
    Py_DECREF( par_indices_or_sections );
    par_indices_or_sections = NULL;

    Py_XDECREF( var_end );
    var_end = NULL;

    Py_XDECREF( var_section_sizes );
    var_section_sizes = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)par_ary );
    Py_DECREF( par_ary );
    par_ary = NULL;

    Py_XDECREF( var_Ntotal );
    var_Ntotal = NULL;

    Py_XDECREF( var_Nsections );
    var_Nsections = NULL;

    Py_XDECREF( var_sub_arys );
    var_sub_arys = NULL;

    Py_XDECREF( var_extras );
    var_extras = NULL;

    Py_XDECREF( var_st );
    var_st = NULL;

    Py_XDECREF( var_Neach_section );
    var_Neach_section = NULL;

    Py_XDECREF( var_div_points );
    var_div_points = NULL;

    Py_XDECREF( var_sary );
    var_sary = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_18_array_split );
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


static PyObject *impl_numpy$lib$shape_base$$$function_19__split_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ary = python_pars[ 0 ];
    PyObject *par_indices_or_sections = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_ary );
        tmp_tuple_element_1 = par_ary;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_indices_or_sections );
        tmp_tuple_element_1 = par_indices_or_sections;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_19__split_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ary );
    Py_DECREF( par_ary );
    par_ary = NULL;

    CHECK_OBJECT( (PyObject *)par_indices_or_sections );
    Py_DECREF( par_indices_or_sections );
    par_indices_or_sections = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_19__split_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$shape_base$$$function_20_split( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ary = python_pars[ 0 ];
    PyObject *par_indices_or_sections = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *var_N = NULL;
    PyObject *var_res = NULL;
    PyObject *var_sections = NULL;
    struct Nuitka_FrameObject *frame_e20eba40209d3f6789f7b2ea82e2a911;
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
    static struct Nuitka_FrameObject *cache_frame_e20eba40209d3f6789f7b2ea82e2a911 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e20eba40209d3f6789f7b2ea82e2a911, codeobj_e20eba40209d3f6789f7b2ea82e2a911, module_numpy$lib$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e20eba40209d3f6789f7b2ea82e2a911 = cache_frame_e20eba40209d3f6789f7b2ea82e2a911;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e20eba40209d3f6789f7b2ea82e2a911 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e20eba40209d3f6789f7b2ea82e2a911 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_len_arg_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT( par_indices_or_sections );
        tmp_len_arg_1 = par_indices_or_sections;
        tmp_capi_result_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_capi_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 843;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_capi_result_1 );
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
    PRESERVE_FRAME_EXCEPTION( frame_e20eba40209d3f6789f7b2ea82e2a911 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_e20eba40209d3f6789f7b2ea82e2a911, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_e20eba40209d3f6789f7b2ea82e2a911, exception_keeper_lineno_1 );
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


            exception_lineno = 844;
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
            PyObject *tmp_assign_source_1;
            CHECK_OBJECT( par_indices_or_sections );
            tmp_assign_source_1 = par_indices_or_sections;
            assert( var_sections == NULL );
            Py_INCREF( tmp_assign_source_1 );
            var_sections = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_ary );
            tmp_source_name_1 = par_ary;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 846;
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


                exception_lineno = 846;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( var_N == NULL );
            var_N = tmp_assign_source_2;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_op_mod_res_1;
            int tmp_truth_name_1;
            CHECK_OBJECT( var_N );
            tmp_left_name_1 = var_N;
            CHECK_OBJECT( var_sections );
            tmp_right_name_1 = var_sections;
            tmp_op_mod_res_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_op_mod_res_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 847;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_op_mod_res_1 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_op_mod_res_1 );

                exception_lineno = 847;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_op_mod_res_1 );
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
                tmp_make_exception_arg_1 = const_str_digest_de62dd5e9dda91234521c86b29ab6a11;
                frame_e20eba40209d3f6789f7b2ea82e2a911->m_frame.f_lineno = 848;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 848;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            branch_no_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 842;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_e20eba40209d3f6789f7b2ea82e2a911->m_frame) frame_e20eba40209d3f6789f7b2ea82e2a911->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
        branch_end_1:;
    }
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_20_split );
    return NULL;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_array_split );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_split );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "array_split" );
            exception_tb = NULL;

            exception_lineno = 850;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_ary );
        tmp_args_element_name_1 = par_ary;
        CHECK_OBJECT( par_indices_or_sections );
        tmp_args_element_name_2 = par_indices_or_sections;
        CHECK_OBJECT( par_axis );
        tmp_args_element_name_3 = par_axis;
        frame_e20eba40209d3f6789f7b2ea82e2a911->m_frame.f_lineno = 850;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 850;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_res == NULL );
        var_res = tmp_assign_source_3;
    }

#if 1
    RESTORE_FRAME_EXCEPTION( frame_e20eba40209d3f6789f7b2ea82e2a911 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_e20eba40209d3f6789f7b2ea82e2a911 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e20eba40209d3f6789f7b2ea82e2a911, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e20eba40209d3f6789f7b2ea82e2a911->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e20eba40209d3f6789f7b2ea82e2a911, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e20eba40209d3f6789f7b2ea82e2a911,
        type_description_1,
        par_ary,
        par_indices_or_sections,
        par_axis,
        var_N,
        var_res,
        var_sections
    );


    // Release cached frame.
    if ( frame_e20eba40209d3f6789f7b2ea82e2a911 == cache_frame_e20eba40209d3f6789f7b2ea82e2a911 )
    {
        Py_DECREF( frame_e20eba40209d3f6789f7b2ea82e2a911 );
    }
    cache_frame_e20eba40209d3f6789f7b2ea82e2a911 = NULL;

    assertFrameObject( frame_e20eba40209d3f6789f7b2ea82e2a911 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_res );
    tmp_return_value = var_res;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_20_split );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ary );
    Py_DECREF( par_ary );
    par_ary = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)par_indices_or_sections );
    Py_DECREF( par_indices_or_sections );
    par_indices_or_sections = NULL;

    Py_XDECREF( var_sections );
    var_sections = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

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

    CHECK_OBJECT( (PyObject *)par_ary );
    Py_DECREF( par_ary );
    par_ary = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    CHECK_OBJECT( (PyObject *)par_indices_or_sections );
    Py_DECREF( par_indices_or_sections );
    par_indices_or_sections = NULL;

    Py_XDECREF( var_sections );
    var_sections = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_20_split );
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


static PyObject *impl_numpy$lib$shape_base$$$function_21__hvdsplit_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ary = python_pars[ 0 ];
    PyObject *par_indices_or_sections = python_pars[ 1 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_ary );
        tmp_tuple_element_1 = par_ary;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_indices_or_sections );
        tmp_tuple_element_1 = par_indices_or_sections;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_21__hvdsplit_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ary );
    Py_DECREF( par_ary );
    par_ary = NULL;

    CHECK_OBJECT( (PyObject *)par_indices_or_sections );
    Py_DECREF( par_indices_or_sections );
    par_indices_or_sections = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_21__hvdsplit_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$shape_base$$$function_22_hsplit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ary = python_pars[ 0 ];
    PyObject *par_indices_or_sections = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_be849c5f021d8e8ed6b08b0c785d4b51;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_be849c5f021d8e8ed6b08b0c785d4b51 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_be849c5f021d8e8ed6b08b0c785d4b51, codeobj_be849c5f021d8e8ed6b08b0c785d4b51, module_numpy$lib$shape_base, sizeof(void *)+sizeof(void *) );
    frame_be849c5f021d8e8ed6b08b0c785d4b51 = cache_frame_be849c5f021d8e8ed6b08b0c785d4b51;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_be849c5f021d8e8ed6b08b0c785d4b51 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_be849c5f021d8e8ed6b08b0c785d4b51 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
            exception_tb = NULL;

            exception_lineno = 914;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_ary );
        tmp_args_element_name_1 = par_ary;
        frame_be849c5f021d8e8ed6b08b0c785d4b51->m_frame.f_lineno = 914;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_compexpr_left_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_ndim, call_args );
        }

        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 914;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 914;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_65cb7cb73d8a7b0b825ded29c41ffeaa;
            frame_be849c5f021d8e8ed6b08b0c785d4b51->m_frame.f_lineno = 915;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 915;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_ary );
        tmp_source_name_1 = par_ary;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 916;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 916;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_split );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_split );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "split" );
                exception_tb = NULL;

                exception_lineno = 917;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_ary );
            tmp_args_element_name_2 = par_ary;
            CHECK_OBJECT( par_indices_or_sections );
            tmp_args_element_name_3 = par_indices_or_sections;
            tmp_args_element_name_4 = const_int_pos_1;
            frame_be849c5f021d8e8ed6b08b0c785d4b51->m_frame.f_lineno = 917;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 917;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_args_element_name_7;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_split );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_split );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "split" );
                exception_tb = NULL;

                exception_lineno = 919;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_3;
            CHECK_OBJECT( par_ary );
            tmp_args_element_name_5 = par_ary;
            CHECK_OBJECT( par_indices_or_sections );
            tmp_args_element_name_6 = par_indices_or_sections;
            tmp_args_element_name_7 = const_int_0;
            frame_be849c5f021d8e8ed6b08b0c785d4b51->m_frame.f_lineno = 919;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 919;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_be849c5f021d8e8ed6b08b0c785d4b51 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_be849c5f021d8e8ed6b08b0c785d4b51 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_be849c5f021d8e8ed6b08b0c785d4b51 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_be849c5f021d8e8ed6b08b0c785d4b51, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_be849c5f021d8e8ed6b08b0c785d4b51->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_be849c5f021d8e8ed6b08b0c785d4b51, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_be849c5f021d8e8ed6b08b0c785d4b51,
        type_description_1,
        par_ary,
        par_indices_or_sections
    );


    // Release cached frame.
    if ( frame_be849c5f021d8e8ed6b08b0c785d4b51 == cache_frame_be849c5f021d8e8ed6b08b0c785d4b51 )
    {
        Py_DECREF( frame_be849c5f021d8e8ed6b08b0c785d4b51 );
    }
    cache_frame_be849c5f021d8e8ed6b08b0c785d4b51 = NULL;

    assertFrameObject( frame_be849c5f021d8e8ed6b08b0c785d4b51 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_22_hsplit );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ary );
    Py_DECREF( par_ary );
    par_ary = NULL;

    CHECK_OBJECT( (PyObject *)par_indices_or_sections );
    Py_DECREF( par_indices_or_sections );
    par_indices_or_sections = NULL;

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

    CHECK_OBJECT( (PyObject *)par_ary );
    Py_DECREF( par_ary );
    par_ary = NULL;

    CHECK_OBJECT( (PyObject *)par_indices_or_sections );
    Py_DECREF( par_indices_or_sections );
    par_indices_or_sections = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_22_hsplit );
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


static PyObject *impl_numpy$lib$shape_base$$$function_23_vsplit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ary = python_pars[ 0 ];
    PyObject *par_indices_or_sections = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_c62fec198df045dc1aee60baa77f7b8f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c62fec198df045dc1aee60baa77f7b8f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c62fec198df045dc1aee60baa77f7b8f, codeobj_c62fec198df045dc1aee60baa77f7b8f, module_numpy$lib$shape_base, sizeof(void *)+sizeof(void *) );
    frame_c62fec198df045dc1aee60baa77f7b8f = cache_frame_c62fec198df045dc1aee60baa77f7b8f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c62fec198df045dc1aee60baa77f7b8f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c62fec198df045dc1aee60baa77f7b8f ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
            exception_tb = NULL;

            exception_lineno = 970;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_ary );
        tmp_args_element_name_1 = par_ary;
        frame_c62fec198df045dc1aee60baa77f7b8f->m_frame.f_lineno = 970;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_compexpr_left_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_ndim, call_args );
        }

        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 970;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 970;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_53f792c3b92b6b57de23c89d18aa31db;
            frame_c62fec198df045dc1aee60baa77f7b8f->m_frame.f_lineno = 971;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 971;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_split );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_split );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "split" );
            exception_tb = NULL;

            exception_lineno = 972;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_ary );
        tmp_args_element_name_2 = par_ary;
        CHECK_OBJECT( par_indices_or_sections );
        tmp_args_element_name_3 = par_indices_or_sections;
        tmp_args_element_name_4 = const_int_0;
        frame_c62fec198df045dc1aee60baa77f7b8f->m_frame.f_lineno = 972;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 972;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c62fec198df045dc1aee60baa77f7b8f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c62fec198df045dc1aee60baa77f7b8f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c62fec198df045dc1aee60baa77f7b8f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c62fec198df045dc1aee60baa77f7b8f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c62fec198df045dc1aee60baa77f7b8f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c62fec198df045dc1aee60baa77f7b8f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c62fec198df045dc1aee60baa77f7b8f,
        type_description_1,
        par_ary,
        par_indices_or_sections
    );


    // Release cached frame.
    if ( frame_c62fec198df045dc1aee60baa77f7b8f == cache_frame_c62fec198df045dc1aee60baa77f7b8f )
    {
        Py_DECREF( frame_c62fec198df045dc1aee60baa77f7b8f );
    }
    cache_frame_c62fec198df045dc1aee60baa77f7b8f = NULL;

    assertFrameObject( frame_c62fec198df045dc1aee60baa77f7b8f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_23_vsplit );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ary );
    Py_DECREF( par_ary );
    par_ary = NULL;

    CHECK_OBJECT( (PyObject *)par_indices_or_sections );
    Py_DECREF( par_indices_or_sections );
    par_indices_or_sections = NULL;

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

    CHECK_OBJECT( (PyObject *)par_ary );
    Py_DECREF( par_ary );
    par_ary = NULL;

    CHECK_OBJECT( (PyObject *)par_indices_or_sections );
    Py_DECREF( par_indices_or_sections );
    par_indices_or_sections = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_23_vsplit );
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


static PyObject *impl_numpy$lib$shape_base$$$function_24_dsplit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ary = python_pars[ 0 ];
    PyObject *par_indices_or_sections = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_1ad49e4f6f0cc8ab6b5de32c365d24af;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1ad49e4f6f0cc8ab6b5de32c365d24af = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1ad49e4f6f0cc8ab6b5de32c365d24af, codeobj_1ad49e4f6f0cc8ab6b5de32c365d24af, module_numpy$lib$shape_base, sizeof(void *)+sizeof(void *) );
    frame_1ad49e4f6f0cc8ab6b5de32c365d24af = cache_frame_1ad49e4f6f0cc8ab6b5de32c365d24af;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1ad49e4f6f0cc8ab6b5de32c365d24af );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1ad49e4f6f0cc8ab6b5de32c365d24af ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
            exception_tb = NULL;

            exception_lineno = 1017;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_ary );
        tmp_args_element_name_1 = par_ary;
        frame_1ad49e4f6f0cc8ab6b5de32c365d24af->m_frame.f_lineno = 1017;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_compexpr_left_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_ndim, call_args );
        }

        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1017;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_3;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1017;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_eac3415d7cf49115ad291e08a06d188e;
            frame_1ad49e4f6f0cc8ab6b5de32c365d24af->m_frame.f_lineno = 1018;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 1018;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_split );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_split );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "split" );
            exception_tb = NULL;

            exception_lineno = 1019;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_ary );
        tmp_args_element_name_2 = par_ary;
        CHECK_OBJECT( par_indices_or_sections );
        tmp_args_element_name_3 = par_indices_or_sections;
        tmp_args_element_name_4 = const_int_pos_2;
        frame_1ad49e4f6f0cc8ab6b5de32c365d24af->m_frame.f_lineno = 1019;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1019;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1ad49e4f6f0cc8ab6b5de32c365d24af );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1ad49e4f6f0cc8ab6b5de32c365d24af );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1ad49e4f6f0cc8ab6b5de32c365d24af );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1ad49e4f6f0cc8ab6b5de32c365d24af, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1ad49e4f6f0cc8ab6b5de32c365d24af->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1ad49e4f6f0cc8ab6b5de32c365d24af, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1ad49e4f6f0cc8ab6b5de32c365d24af,
        type_description_1,
        par_ary,
        par_indices_or_sections
    );


    // Release cached frame.
    if ( frame_1ad49e4f6f0cc8ab6b5de32c365d24af == cache_frame_1ad49e4f6f0cc8ab6b5de32c365d24af )
    {
        Py_DECREF( frame_1ad49e4f6f0cc8ab6b5de32c365d24af );
    }
    cache_frame_1ad49e4f6f0cc8ab6b5de32c365d24af = NULL;

    assertFrameObject( frame_1ad49e4f6f0cc8ab6b5de32c365d24af );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_24_dsplit );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ary );
    Py_DECREF( par_ary );
    par_ary = NULL;

    CHECK_OBJECT( (PyObject *)par_indices_or_sections );
    Py_DECREF( par_indices_or_sections );
    par_indices_or_sections = NULL;

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

    CHECK_OBJECT( (PyObject *)par_ary );
    Py_DECREF( par_ary );
    par_ary = NULL;

    CHECK_OBJECT( (PyObject *)par_indices_or_sections );
    Py_DECREF( par_indices_or_sections );
    par_indices_or_sections = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_24_dsplit );
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


static PyObject *impl_numpy$lib$shape_base$$$function_25_get_array_prepare( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *var_wrappers = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_2c628b84b11a90f2010891fa7ef8c39b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2c628b84b11a90f2010891fa7ef8c39b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2c628b84b11a90f2010891fa7ef8c39b, codeobj_2c628b84b11a90f2010891fa7ef8c39b, module_numpy$lib$shape_base, sizeof(void *)+sizeof(void *) );
    frame_2c628b84b11a90f2010891fa7ef8c39b = cache_frame_2c628b84b11a90f2010891fa7ef8c39b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2c628b84b11a90f2010891fa7ef8c39b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2c628b84b11a90f2010891fa7ef8c39b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_sorted );
        assert( tmp_called_name_1 != NULL );
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_2;
            tmp_called_name_2 = (PyObject *)&PyEnum_Type;
            CHECK_OBJECT( par_args );
            tmp_args_element_name_2 = par_args;
            frame_2c628b84b11a90f2010891fa7ef8c39b->m_frame.f_lineno = 1027;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1027;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1026;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_1__$0 == NULL );
            tmp_genexpr_1__$0 = tmp_assign_source_2;
        }
        // Tried code:
        tmp_args_element_name_1 = numpy$lib$shape_base$$$function_25_get_array_prepare$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_args_element_name_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );


        goto try_return_handler_2;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_25_get_array_prepare );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        goto outline_result_1;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_25_get_array_prepare );
        return NULL;
        outline_result_1:;
        frame_2c628b84b11a90f2010891fa7ef8c39b->m_frame.f_lineno = 1026;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1026;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_wrappers == NULL );
        var_wrappers = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_wrappers );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_wrappers );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1029;
            type_description_1 = "oo";
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
        {
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( var_wrappers );
            tmp_subscribed_name_2 = var_wrappers;
            tmp_subscript_name_1 = const_int_neg_1;
            tmp_subscribed_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_1, -1 );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1030;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_2 = const_int_neg_1;
            tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_2, -1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1030;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2c628b84b11a90f2010891fa7ef8c39b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2c628b84b11a90f2010891fa7ef8c39b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2c628b84b11a90f2010891fa7ef8c39b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2c628b84b11a90f2010891fa7ef8c39b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2c628b84b11a90f2010891fa7ef8c39b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2c628b84b11a90f2010891fa7ef8c39b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2c628b84b11a90f2010891fa7ef8c39b,
        type_description_1,
        par_args,
        var_wrappers
    );


    // Release cached frame.
    if ( frame_2c628b84b11a90f2010891fa7ef8c39b == cache_frame_2c628b84b11a90f2010891fa7ef8c39b )
    {
        Py_DECREF( frame_2c628b84b11a90f2010891fa7ef8c39b );
    }
    cache_frame_2c628b84b11a90f2010891fa7ef8c39b = NULL;

    assertFrameObject( frame_2c628b84b11a90f2010891fa7ef8c39b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_25_get_array_prepare );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_wrappers );
    Py_DECREF( var_wrappers );
    var_wrappers = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

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

    Py_XDECREF( var_wrappers );
    var_wrappers = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_25_get_array_prepare );
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



struct numpy$lib$shape_base$$$function_25_get_array_prepare$$$genexpr_1_genexpr_locals {
    PyObject *var_i;
    PyObject *var_x;
    PyObject *tmp_iter_value_0;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    int tmp_res;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
};

static PyObject *numpy$lib$shape_base$$$function_25_get_array_prepare$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct numpy$lib$shape_base$$$function_25_get_array_prepare$$$genexpr_1_genexpr_locals *generator_heap = (struct numpy$lib$shape_base$$$function_25_get_array_prepare$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_i = NULL;
    generator_heap->var_x = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_1e9b0705bdf18c7ed849eed96e400025, module_numpy$lib$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

#if PYTHON_VERSION < 370
        generator->m_frame->m_frame.f_exc_type = EXC_TYPE( thread_state );
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
        Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#else
        generator->m_exc_state.exc_type = EXC_TYPE( thread_state );
        if ( generator->m_exc_state.exc_type == Py_None ) generator->m_exc_state.exc_type = NULL;
        Py_XINCREF( generator->m_exc_state.exc_type );
        generator->m_exc_state.exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_value );
        generator->m_exc_state.exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_traceback );
#endif
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT( PyCell_GET( generator->m_closure[0] ) );
        tmp_next_source_1 = PyCell_GET( generator->m_closure[0] );
        tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "Noo";
                generator_heap->exception_lineno = 1026;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( generator_heap->tmp_iter_value_0 );
        tmp_iter_arg_1 = generator_heap->tmp_iter_value_0;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 1026;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
            generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            }


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 1026;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
            generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1 );
        if ( tmp_assign_source_4 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            }


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 1026;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
            generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        generator_heap->tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( generator_heap->tmp_iterator_attempt == NULL ))
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
                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );

                    generator_heap->type_description_1 = "Noo";
                    generator_heap->exception_lineno = 1026;
                    goto try_except_handler_4;
                }
            }
        }
        else
        {
            Py_DECREF( generator_heap->tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );

            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 1026;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_tuple_unpack_1__source_iter );
    Py_DECREF( generator_heap->tmp_tuple_unpack_1__source_iter );
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_1 );
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_2 );
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)generator_heap->tmp_tuple_unpack_1__source_iter );
    Py_DECREF( generator_heap->tmp_tuple_unpack_1__source_iter );
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var_i;
            generator_heap->var_i = tmp_assign_source_5;
            Py_INCREF( generator_heap->var_i );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_1 );
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = generator_heap->var_x;
            generator_heap->var_x = tmp_assign_source_6;
            Py_INCREF( generator_heap->var_x );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_2 );
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT( generator_heap->var_x );
        tmp_source_name_1 = generator_heap->var_x;
        tmp_attribute_name_1 = const_str_plain___array_prepare__;
        generator_heap->tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_1, tmp_attribute_name_1 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 1028;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = ( generator_heap->tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_expression_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_getattr_target_1;
            PyObject *tmp_getattr_attr_1;
            PyObject *tmp_getattr_default_1;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_2;
            NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
            CHECK_OBJECT( generator_heap->var_x );
            tmp_getattr_target_1 = generator_heap->var_x;
            tmp_getattr_attr_1 = const_str_plain___array_priority__;
            tmp_getattr_default_1 = const_int_0;
            tmp_tuple_element_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 1026;
                generator_heap->type_description_1 = "Noo";
                goto try_except_handler_2;
            }
            tmp_expression_name_1 = PyTuple_New( 3 );
            PyTuple_SET_ITEM( tmp_expression_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( generator_heap->var_i );
            tmp_operand_name_1 = generator_heap->var_i;
            tmp_tuple_element_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                Py_DECREF( tmp_expression_name_1 );

                generator_heap->exception_lineno = 1026;
                generator_heap->type_description_1 = "Noo";
                goto try_except_handler_2;
            }
            PyTuple_SET_ITEM( tmp_expression_name_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( generator_heap->var_x );
            tmp_source_name_2 = generator_heap->var_x;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___array_prepare__ );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                Py_DECREF( tmp_expression_name_1 );

                generator_heap->exception_lineno = 1027;
                generator_heap->type_description_1 = "Noo";
                goto try_except_handler_2;
            }
            PyTuple_SET_ITEM( tmp_expression_name_1, 2, tmp_tuple_element_1 );
            Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_source_name_1, sizeof(PyObject *), &tmp_attribute_name_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_getattr_target_1, sizeof(PyObject *), &tmp_getattr_attr_1, sizeof(PyObject *), &tmp_getattr_default_1, sizeof(PyObject *), &tmp_operand_name_1, sizeof(PyObject *), &tmp_source_name_2, sizeof(PyObject *), NULL );
            generator->m_yield_return_index = 1;
            return tmp_expression_name_1;
            yield_return_1:
            Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_source_name_1, sizeof(PyObject *), &tmp_attribute_name_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_getattr_target_1, sizeof(PyObject *), &tmp_getattr_attr_1, sizeof(PyObject *), &tmp_getattr_default_1, sizeof(PyObject *), &tmp_operand_name_1, sizeof(PyObject *), &tmp_source_name_2, sizeof(PyObject *), NULL );
            if ( yield_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 1026;
                generator_heap->type_description_1 = "Noo";
                goto try_except_handler_2;
            }
            tmp_yield_result_1 = yield_return_value;
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 1026;
        generator_heap->type_description_1 = "Noo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( generator_heap->exception_type ) )
    {
        if ( generator_heap->exception_tb == NULL )
        {
            generator_heap->exception_tb = MAKE_TRACEBACK( generator->m_frame, generator_heap->exception_lineno );
        }
        else if ( generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            generator_heap->exception_tb = ADD_TRACEBACK( generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_i,
            generator_heap->var_x
        );


        // Release cached frame.
        if ( generator->m_frame == cache_m_frame )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_m_frame = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_i );
    generator_heap->var_i = NULL;

    Py_XDECREF( generator_heap->var_x );
    generator_heap->var_x = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_4:;
    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    Py_XDECREF( generator_heap->var_i );
    generator_heap->var_i = NULL;

    Py_XDECREF( generator_heap->var_x );
    generator_heap->var_x = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *numpy$lib$shape_base$$$function_25_get_array_prepare$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        numpy$lib$shape_base$$$function_25_get_array_prepare$$$genexpr_1_genexpr_context,
        module_numpy$lib$shape_base,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_1e9b0705bdf18c7ed849eed96e400025,
        1,
        sizeof(struct numpy$lib$shape_base$$$function_25_get_array_prepare$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_numpy$lib$shape_base$$$function_26_get_array_wrap( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *var_wrappers = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_aea1332d8688d2dcef3ae78b2227640d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_aea1332d8688d2dcef3ae78b2227640d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_aea1332d8688d2dcef3ae78b2227640d, codeobj_aea1332d8688d2dcef3ae78b2227640d, module_numpy$lib$shape_base, sizeof(void *)+sizeof(void *) );
    frame_aea1332d8688d2dcef3ae78b2227640d = cache_frame_aea1332d8688d2dcef3ae78b2227640d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_aea1332d8688d2dcef3ae78b2227640d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_aea1332d8688d2dcef3ae78b2227640d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_sorted );
        assert( tmp_called_name_1 != NULL );
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_2;
            tmp_called_name_2 = (PyObject *)&PyEnum_Type;
            CHECK_OBJECT( par_args );
            tmp_args_element_name_2 = par_args;
            frame_aea1332d8688d2dcef3ae78b2227640d->m_frame.f_lineno = 1039;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1039;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1038;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_1__$0 == NULL );
            tmp_genexpr_1__$0 = tmp_assign_source_2;
        }
        // Tried code:
        tmp_args_element_name_1 = numpy$lib$shape_base$$$function_26_get_array_wrap$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_args_element_name_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );


        goto try_return_handler_2;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_26_get_array_wrap );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        goto outline_result_1;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_26_get_array_wrap );
        return NULL;
        outline_result_1:;
        frame_aea1332d8688d2dcef3ae78b2227640d->m_frame.f_lineno = 1038;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1038;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_wrappers == NULL );
        var_wrappers = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_wrappers );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_wrappers );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1041;
            type_description_1 = "oo";
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
        {
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( var_wrappers );
            tmp_subscribed_name_2 = var_wrappers;
            tmp_subscript_name_1 = const_int_neg_1;
            tmp_subscribed_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_1, -1 );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1042;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_2 = const_int_neg_1;
            tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_2, -1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1042;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aea1332d8688d2dcef3ae78b2227640d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_aea1332d8688d2dcef3ae78b2227640d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aea1332d8688d2dcef3ae78b2227640d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_aea1332d8688d2dcef3ae78b2227640d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_aea1332d8688d2dcef3ae78b2227640d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_aea1332d8688d2dcef3ae78b2227640d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_aea1332d8688d2dcef3ae78b2227640d,
        type_description_1,
        par_args,
        var_wrappers
    );


    // Release cached frame.
    if ( frame_aea1332d8688d2dcef3ae78b2227640d == cache_frame_aea1332d8688d2dcef3ae78b2227640d )
    {
        Py_DECREF( frame_aea1332d8688d2dcef3ae78b2227640d );
    }
    cache_frame_aea1332d8688d2dcef3ae78b2227640d = NULL;

    assertFrameObject( frame_aea1332d8688d2dcef3ae78b2227640d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_26_get_array_wrap );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_wrappers );
    Py_DECREF( var_wrappers );
    var_wrappers = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

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

    Py_XDECREF( var_wrappers );
    var_wrappers = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_26_get_array_wrap );
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



struct numpy$lib$shape_base$$$function_26_get_array_wrap$$$genexpr_1_genexpr_locals {
    PyObject *var_i;
    PyObject *var_x;
    PyObject *tmp_iter_value_0;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    int tmp_res;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
};

static PyObject *numpy$lib$shape_base$$$function_26_get_array_wrap$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct numpy$lib$shape_base$$$function_26_get_array_wrap$$$genexpr_1_genexpr_locals *generator_heap = (struct numpy$lib$shape_base$$$function_26_get_array_wrap$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_i = NULL;
    generator_heap->var_x = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_95e5aa1554912cf687134acba030b8e1, module_numpy$lib$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

#if PYTHON_VERSION < 370
        generator->m_frame->m_frame.f_exc_type = EXC_TYPE( thread_state );
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
        Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#else
        generator->m_exc_state.exc_type = EXC_TYPE( thread_state );
        if ( generator->m_exc_state.exc_type == Py_None ) generator->m_exc_state.exc_type = NULL;
        Py_XINCREF( generator->m_exc_state.exc_type );
        generator->m_exc_state.exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_value );
        generator->m_exc_state.exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_traceback );
#endif
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT( PyCell_GET( generator->m_closure[0] ) );
        tmp_next_source_1 = PyCell_GET( generator->m_closure[0] );
        tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "Noo";
                generator_heap->exception_lineno = 1038;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( generator_heap->tmp_iter_value_0 );
        tmp_iter_arg_1 = generator_heap->tmp_iter_value_0;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 1038;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
            generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            }


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 1038;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
            generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1 );
        if ( tmp_assign_source_4 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            }


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 1038;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
            generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        generator_heap->tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( generator_heap->tmp_iterator_attempt == NULL ))
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
                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );

                    generator_heap->type_description_1 = "Noo";
                    generator_heap->exception_lineno = 1038;
                    goto try_except_handler_4;
                }
            }
        }
        else
        {
            Py_DECREF( generator_heap->tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );

            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 1038;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_tuple_unpack_1__source_iter );
    Py_DECREF( generator_heap->tmp_tuple_unpack_1__source_iter );
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_1 );
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_2 );
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)generator_heap->tmp_tuple_unpack_1__source_iter );
    Py_DECREF( generator_heap->tmp_tuple_unpack_1__source_iter );
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var_i;
            generator_heap->var_i = tmp_assign_source_5;
            Py_INCREF( generator_heap->var_i );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_1 );
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = generator_heap->var_x;
            generator_heap->var_x = tmp_assign_source_6;
            Py_INCREF( generator_heap->var_x );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_2 );
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT( generator_heap->var_x );
        tmp_source_name_1 = generator_heap->var_x;
        tmp_attribute_name_1 = const_str_plain___array_wrap__;
        generator_heap->tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_1, tmp_attribute_name_1 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 1040;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = ( generator_heap->tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_expression_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_getattr_target_1;
            PyObject *tmp_getattr_attr_1;
            PyObject *tmp_getattr_default_1;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_2;
            NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
            CHECK_OBJECT( generator_heap->var_x );
            tmp_getattr_target_1 = generator_heap->var_x;
            tmp_getattr_attr_1 = const_str_plain___array_priority__;
            tmp_getattr_default_1 = const_int_0;
            tmp_tuple_element_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 1038;
                generator_heap->type_description_1 = "Noo";
                goto try_except_handler_2;
            }
            tmp_expression_name_1 = PyTuple_New( 3 );
            PyTuple_SET_ITEM( tmp_expression_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( generator_heap->var_i );
            tmp_operand_name_1 = generator_heap->var_i;
            tmp_tuple_element_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                Py_DECREF( tmp_expression_name_1 );

                generator_heap->exception_lineno = 1038;
                generator_heap->type_description_1 = "Noo";
                goto try_except_handler_2;
            }
            PyTuple_SET_ITEM( tmp_expression_name_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( generator_heap->var_x );
            tmp_source_name_2 = generator_heap->var_x;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___array_wrap__ );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                Py_DECREF( tmp_expression_name_1 );

                generator_heap->exception_lineno = 1039;
                generator_heap->type_description_1 = "Noo";
                goto try_except_handler_2;
            }
            PyTuple_SET_ITEM( tmp_expression_name_1, 2, tmp_tuple_element_1 );
            Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_source_name_1, sizeof(PyObject *), &tmp_attribute_name_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_getattr_target_1, sizeof(PyObject *), &tmp_getattr_attr_1, sizeof(PyObject *), &tmp_getattr_default_1, sizeof(PyObject *), &tmp_operand_name_1, sizeof(PyObject *), &tmp_source_name_2, sizeof(PyObject *), NULL );
            generator->m_yield_return_index = 1;
            return tmp_expression_name_1;
            yield_return_1:
            Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_source_name_1, sizeof(PyObject *), &tmp_attribute_name_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_getattr_target_1, sizeof(PyObject *), &tmp_getattr_attr_1, sizeof(PyObject *), &tmp_getattr_default_1, sizeof(PyObject *), &tmp_operand_name_1, sizeof(PyObject *), &tmp_source_name_2, sizeof(PyObject *), NULL );
            if ( yield_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 1038;
                generator_heap->type_description_1 = "Noo";
                goto try_except_handler_2;
            }
            tmp_yield_result_1 = yield_return_value;
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 1038;
        generator_heap->type_description_1 = "Noo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( generator_heap->exception_type ) )
    {
        if ( generator_heap->exception_tb == NULL )
        {
            generator_heap->exception_tb = MAKE_TRACEBACK( generator->m_frame, generator_heap->exception_lineno );
        }
        else if ( generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            generator_heap->exception_tb = ADD_TRACEBACK( generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_i,
            generator_heap->var_x
        );


        // Release cached frame.
        if ( generator->m_frame == cache_m_frame )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_m_frame = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_i );
    generator_heap->var_i = NULL;

    Py_XDECREF( generator_heap->var_x );
    generator_heap->var_x = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_4:;
    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    Py_XDECREF( generator_heap->var_i );
    generator_heap->var_i = NULL;

    Py_XDECREF( generator_heap->var_x );
    generator_heap->var_x = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *numpy$lib$shape_base$$$function_26_get_array_wrap$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        numpy$lib$shape_base$$$function_26_get_array_wrap$$$genexpr_1_genexpr_context,
        module_numpy$lib$shape_base,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_95e5aa1554912cf687134acba030b8e1,
        1,
        sizeof(struct numpy$lib$shape_base$$$function_26_get_array_wrap$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_numpy$lib$shape_base$$$function_27__kron_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_b );
        tmp_tuple_element_1 = par_b;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_27__kron_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_27__kron_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$shape_base$$$function_28_kron( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    PyObject *var_nda = NULL;
    PyObject *var_nd = NULL;
    PyObject *var_ndb = NULL;
    PyObject *var_as_ = NULL;
    PyObject *var_wrapper = NULL;
    PyObject *var_result = NULL;
    PyObject *var_bs = NULL;
    PyObject *var__ = NULL;
    PyObject *var_axis = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_64e540be2f6df1bf05ea06f8c9bf8eb3;
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
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_64e540be2f6df1bf05ea06f8c9bf8eb3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_64e540be2f6df1bf05ea06f8c9bf8eb3, codeobj_64e540be2f6df1bf05ea06f8c9bf8eb3, module_numpy$lib$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_64e540be2f6df1bf05ea06f8c9bf8eb3 = cache_frame_64e540be2f6df1bf05ea06f8c9bf8eb3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_64e540be2f6df1bf05ea06f8c9bf8eb3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_64e540be2f6df1bf05ea06f8c9bf8eb3 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_asanyarray );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asanyarray );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "asanyarray" );
            exception_tb = NULL;

            exception_lineno = 1119;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_1 = par_b;
        frame_64e540be2f6df1bf05ea06f8c9bf8eb3->m_frame.f_lineno = 1119;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1119;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_b;
            assert( old != NULL );
            par_b = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
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
        PyObject *tmp_source_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_array );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
            exception_tb = NULL;

            exception_lineno = 1120;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_value_1 = Py_False;
        tmp_dict_key_1 = const_str_plain_copy;
        tmp_kw_name_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_2 = Py_True;
        tmp_dict_key_2 = const_str_plain_subok;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_b );
        tmp_source_name_1 = par_b;
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
        if ( tmp_dict_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 1120;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_3 = const_str_plain_ndmin;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        frame_64e540be2f6df1bf05ea06f8c9bf8eb3->m_frame.f_lineno = 1120;
        tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1120;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_b );
        tmp_source_name_2 = par_b;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndim );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1121;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_a );
        tmp_source_name_3 = par_a;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ndim );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_iter_arg_1 );

            exception_lineno = 1121;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_2 );
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1121;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
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


            type_description_1 = "ooooooooooo";
            exception_lineno = 1121;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
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


            type_description_1 = "ooooooooooo";
            exception_lineno = 1121;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
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
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        assert( var_ndb == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_ndb = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        assert( var_nda == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_nda = tmp_assign_source_7;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_nda );
        tmp_compexpr_left_1 = var_nda;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1122;
            type_description_1 = "ooooooooooo";
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
        CHECK_OBJECT( var_ndb );
        tmp_compexpr_left_2 = var_ndb;
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1122;
            type_description_1 = "ooooooooooo";
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
                exception_tb = NULL;

                exception_lineno = 1123;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_3;
            CHECK_OBJECT( par_a );
            tmp_args_element_name_2 = par_a;
            CHECK_OBJECT( par_b );
            tmp_args_element_name_3 = par_b;
            frame_64e540be2f6df1bf05ea06f8c9bf8eb3->m_frame.f_lineno = 1123;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_multiply, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1123;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_a );
        tmp_source_name_4 = par_a;
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1124;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_as_ == NULL );
        var_as_ = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( par_b );
        tmp_source_name_5 = par_b;
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1125;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_bs == NULL );
        var_bs = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_6;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT( par_a );
        tmp_source_name_7 = par_a;
        tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_flags );
        if ( tmp_source_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1126;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_contiguous );
        Py_DECREF( tmp_source_name_6 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1126;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1126;
            type_description_1 = "ooooooooooo";
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
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_reshape );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_reshape );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "reshape" );
                exception_tb = NULL;

                exception_lineno = 1127;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_4;
            CHECK_OBJECT( par_a );
            tmp_args_element_name_4 = par_a;
            CHECK_OBJECT( var_as_ );
            tmp_args_element_name_5 = var_as_;
            frame_64e540be2f6df1bf05ea06f8c9bf8eb3->m_frame.f_lineno = 1127;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1127;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_a;
                assert( old != NULL );
                par_a = tmp_assign_source_10;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_source_name_8;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT( par_b );
        tmp_source_name_9 = par_b;
        tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_flags );
        if ( tmp_source_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1128;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_contiguous );
        Py_DECREF( tmp_source_name_8 );
        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1128;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1128;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_args_element_name_7;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_reshape );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_reshape );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "reshape" );
                exception_tb = NULL;

                exception_lineno = 1129;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_5;
            CHECK_OBJECT( par_b );
            tmp_args_element_name_6 = par_b;
            CHECK_OBJECT( var_bs );
            tmp_args_element_name_7 = var_bs;
            frame_64e540be2f6df1bf05ea06f8c9bf8eb3->m_frame.f_lineno = 1129;
            {
                PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
                tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
            }

            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1129;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_b;
                assert( old != NULL );
                par_b = tmp_assign_source_11;
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( var_ndb );
        tmp_assign_source_12 = var_ndb;
        assert( var_nd == NULL );
        Py_INCREF( tmp_assign_source_12 );
        var_nd = tmp_assign_source_12;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_ndb );
        tmp_compexpr_left_3 = var_ndb;
        CHECK_OBJECT( var_nda );
        tmp_compexpr_right_3 = var_nda;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1131;
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
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( var_ndb );
            tmp_compexpr_left_4 = var_ndb;
            CHECK_OBJECT( var_nda );
            tmp_compexpr_right_4 = var_nda;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1132;
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
                PyObject *tmp_assign_source_13;
                PyObject *tmp_left_name_1;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_1;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_2;
                PyObject *tmp_right_name_3;
                tmp_left_name_2 = const_tuple_int_pos_1_tuple;
                CHECK_OBJECT( var_ndb );
                tmp_left_name_3 = var_ndb;
                CHECK_OBJECT( var_nda );
                tmp_right_name_2 = var_nda;
                tmp_right_name_1 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_2 );
                if ( tmp_right_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1133;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_left_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_left_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1133;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_as_ );
                tmp_right_name_3 = var_as_;
                tmp_assign_source_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_3 );
                Py_DECREF( tmp_left_name_1 );
                if ( tmp_assign_source_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1133;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_as_;
                    assert( old != NULL );
                    var_as_ = tmp_assign_source_13;
                    Py_DECREF( old );
                }

            }
            goto branch_end_5;
            branch_no_5:;
            {
                PyObject *tmp_assign_source_14;
                PyObject *tmp_left_name_4;
                PyObject *tmp_left_name_5;
                PyObject *tmp_right_name_4;
                PyObject *tmp_left_name_6;
                PyObject *tmp_right_name_5;
                PyObject *tmp_right_name_6;
                tmp_left_name_5 = const_tuple_int_pos_1_tuple;
                CHECK_OBJECT( var_nda );
                tmp_left_name_6 = var_nda;
                CHECK_OBJECT( var_ndb );
                tmp_right_name_5 = var_ndb;
                tmp_right_name_4 = BINARY_OPERATION_SUB( tmp_left_name_6, tmp_right_name_5 );
                if ( tmp_right_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1135;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_left_name_4 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_4 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_left_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1135;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_bs );
                tmp_right_name_6 = var_bs;
                tmp_assign_source_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_6 );
                Py_DECREF( tmp_left_name_4 );
                if ( tmp_assign_source_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1135;
                    type_description_1 = "ooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_bs;
                    assert( old != NULL );
                    var_bs = tmp_assign_source_14;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_15;
                CHECK_OBJECT( var_nda );
                tmp_assign_source_15 = var_nda;
                {
                    PyObject *old = var_nd;
                    assert( old != NULL );
                    var_nd = tmp_assign_source_15;
                    Py_INCREF( var_nd );
                    Py_DECREF( old );
                }

            }
            branch_end_5:;
        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_10;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_outer );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outer );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "outer" );
            exception_tb = NULL;

            exception_lineno = 1137;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_6;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_8 = par_a;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_9 = par_b;
        frame_64e540be2f6df1bf05ea06f8c9bf8eb3->m_frame.f_lineno = 1137;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_source_name_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
        }

        if ( tmp_source_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1137;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_reshape );
        Py_DECREF( tmp_source_name_10 );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1137;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_as_ == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "as_" );
            exception_tb = NULL;

            exception_lineno = 1137;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_7 = var_as_;
        if ( var_bs == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "bs" );
            exception_tb = NULL;

            exception_lineno = 1137;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_7 = var_bs;
        tmp_args_element_name_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 1137;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_64e540be2f6df1bf05ea06f8c9bf8eb3->m_frame.f_lineno = 1137;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1137;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_result == NULL );
        var_result = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        if ( var_nd == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "nd" );
            exception_tb = NULL;

            exception_lineno = 1138;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_8 = var_nd;
        tmp_right_name_8 = const_int_pos_1;
        tmp_assign_source_17 = BINARY_OPERATION_SUB( tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1138;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_axis == NULL );
        var_axis = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_range_arg_1;
        if ( var_nd == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "nd" );
            exception_tb = NULL;

            exception_lineno = 1139;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_range_arg_1 = var_nd;
        tmp_iter_arg_2 = BUILTIN_RANGE( tmp_range_arg_1 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1139;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1139;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_18;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_19 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_19 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooo";
                exception_lineno = 1139;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_19;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_20 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var__;
            var__ = tmp_assign_source_20;
            Py_INCREF( var__ );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_concatenate );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_concatenate );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "concatenate" );
            exception_tb = NULL;

            exception_lineno = 1140;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_7 = tmp_mvar_value_7;
        CHECK_OBJECT( var_result );
        tmp_tuple_element_3 = var_result;
        tmp_args_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( var_axis );
        tmp_dict_value_4 = var_axis;
        tmp_dict_key_4 = const_str_plain_axis;
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        frame_64e540be2f6df1bf05ea06f8c9bf8eb3->m_frame.f_lineno = 1140;
        tmp_assign_source_21 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1140;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_result;
            assert( old != NULL );
            var_result = tmp_assign_source_21;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1139;
        type_description_1 = "ooooooooooo";
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
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_get_array_prepare );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_array_prepare );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "get_array_prepare" );
            exception_tb = NULL;

            exception_lineno = 1141;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = tmp_mvar_value_8;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_11 = par_a;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_12 = par_b;
        frame_64e540be2f6df1bf05ea06f8c9bf8eb3->m_frame.f_lineno = 1141;
        {
            PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
        }

        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1141;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_wrapper == NULL );
        var_wrapper = tmp_assign_source_22;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( var_wrapper );
        tmp_compexpr_left_5 = var_wrapper;
        tmp_compexpr_right_5 = Py_None;
        tmp_condition_result_6 = ( tmp_compexpr_left_5 != tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_name_9;
            PyObject *tmp_args_element_name_13;
            CHECK_OBJECT( var_wrapper );
            tmp_called_name_9 = var_wrapper;
            CHECK_OBJECT( var_result );
            tmp_args_element_name_13 = var_result;
            frame_64e540be2f6df1bf05ea06f8c9bf8eb3->m_frame.f_lineno = 1143;
            {
                PyObject *call_args[] = { tmp_args_element_name_13 };
                tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
            }

            if ( tmp_assign_source_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1143;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_result;
                assert( old != NULL );
                var_result = tmp_assign_source_23;
                Py_DECREF( old );
            }

        }
        branch_no_6:;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_name_10;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_get_array_wrap );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_array_wrap );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "get_array_wrap" );
            exception_tb = NULL;

            exception_lineno = 1144;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_10 = tmp_mvar_value_9;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_14 = par_a;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_15 = par_b;
        frame_64e540be2f6df1bf05ea06f8c9bf8eb3->m_frame.f_lineno = 1144;
        {
            PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
        }

        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1144;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_wrapper;
            assert( old != NULL );
            var_wrapper = tmp_assign_source_24;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( var_wrapper );
        tmp_compexpr_left_6 = var_wrapper;
        tmp_compexpr_right_6 = Py_None;
        tmp_condition_result_7 = ( tmp_compexpr_left_6 != tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_name_11;
            PyObject *tmp_args_element_name_16;
            CHECK_OBJECT( var_wrapper );
            tmp_called_name_11 = var_wrapper;
            if ( var_result == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "result" );
                exception_tb = NULL;

                exception_lineno = 1146;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_16 = var_result;
            frame_64e540be2f6df1bf05ea06f8c9bf8eb3->m_frame.f_lineno = 1146;
            {
                PyObject *call_args[] = { tmp_args_element_name_16 };
                tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
            }

            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1146;
                type_description_1 = "ooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_result;
                var_result = tmp_assign_source_25;
                Py_XDECREF( old );
            }

        }
        branch_no_7:;
    }
    if ( var_result == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "result" );
        exception_tb = NULL;

        exception_lineno = 1147;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_result;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_64e540be2f6df1bf05ea06f8c9bf8eb3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_64e540be2f6df1bf05ea06f8c9bf8eb3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_64e540be2f6df1bf05ea06f8c9bf8eb3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_64e540be2f6df1bf05ea06f8c9bf8eb3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_64e540be2f6df1bf05ea06f8c9bf8eb3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_64e540be2f6df1bf05ea06f8c9bf8eb3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_64e540be2f6df1bf05ea06f8c9bf8eb3,
        type_description_1,
        par_a,
        par_b,
        var_nda,
        var_nd,
        var_ndb,
        var_as_,
        var_wrapper,
        var_result,
        var_bs,
        var__,
        var_axis
    );


    // Release cached frame.
    if ( frame_64e540be2f6df1bf05ea06f8c9bf8eb3 == cache_frame_64e540be2f6df1bf05ea06f8c9bf8eb3 )
    {
        Py_DECREF( frame_64e540be2f6df1bf05ea06f8c9bf8eb3 );
    }
    cache_frame_64e540be2f6df1bf05ea06f8c9bf8eb3 = NULL;

    assertFrameObject( frame_64e540be2f6df1bf05ea06f8c9bf8eb3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_28_kron );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_a );
    par_a = NULL;

    Py_XDECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)var_nda );
    Py_DECREF( var_nda );
    var_nda = NULL;

    Py_XDECREF( var_nd );
    var_nd = NULL;

    CHECK_OBJECT( (PyObject *)var_ndb );
    Py_DECREF( var_ndb );
    var_ndb = NULL;

    Py_XDECREF( var_as_ );
    var_as_ = NULL;

    Py_XDECREF( var_wrapper );
    var_wrapper = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_bs );
    var_bs = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_axis );
    var_axis = NULL;

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

    Py_XDECREF( par_b );
    par_b = NULL;

    Py_XDECREF( var_nda );
    var_nda = NULL;

    Py_XDECREF( var_nd );
    var_nd = NULL;

    Py_XDECREF( var_ndb );
    var_ndb = NULL;

    Py_XDECREF( var_as_ );
    var_as_ = NULL;

    Py_XDECREF( var_wrapper );
    var_wrapper = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_bs );
    var_bs = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_axis );
    var_axis = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_28_kron );
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


static PyObject *impl_numpy$lib$shape_base$$$function_29__tile_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_reps = python_pars[ 1 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_A );
        tmp_tuple_element_1 = par_A;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_reps );
        tmp_tuple_element_1 = par_reps;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_29__tile_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_reps );
    Py_DECREF( par_reps );
    par_reps = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_29__tile_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$shape_base$$$function_30_tile( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_reps = python_pars[ 1 ];
    PyObject *var_c = NULL;
    PyObject *var_d = NULL;
    PyObject *var_tup = NULL;
    PyObject *var_dim_in = NULL;
    PyObject *var_n = NULL;
    PyObject *var_nrep = NULL;
    PyObject *var_shape_out = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_genexpr_2__$0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_4760aedd6508113d535d32c5d1547e1b;
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
    PyObject *tmp_iterator_attempt;
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
    static struct Nuitka_FrameObject *cache_frame_4760aedd6508113d535d32c5d1547e1b = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4760aedd6508113d535d32c5d1547e1b, codeobj_4760aedd6508113d535d32c5d1547e1b, module_numpy$lib$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4760aedd6508113d535d32c5d1547e1b = cache_frame_4760aedd6508113d535d32c5d1547e1b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4760aedd6508113d535d32c5d1547e1b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4760aedd6508113d535d32c5d1547e1b ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_arg_1;
        CHECK_OBJECT( par_reps );
        tmp_tuple_arg_1 = par_reps;
        tmp_assign_source_1 = PySequence_Tuple( tmp_tuple_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1222;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert( var_tup == NULL );
        var_tup = tmp_assign_source_1;
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
    PRESERVE_FRAME_EXCEPTION( frame_4760aedd6508113d535d32c5d1547e1b );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_4760aedd6508113d535d32c5d1547e1b, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_4760aedd6508113d535d32c5d1547e1b, exception_keeper_lineno_1 );
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


            exception_lineno = 1223;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( par_reps );
            tmp_tuple_element_1 = par_reps;
            tmp_assign_source_2 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_assign_source_2, 0, tmp_tuple_element_1 );
            assert( var_tup == NULL );
            var_tup = tmp_assign_source_2;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 1221;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_4760aedd6508113d535d32c5d1547e1b->m_frame) frame_4760aedd6508113d535d32c5d1547e1b->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
        branch_end_1:;
    }
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_30_tile );
    return NULL;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_len_arg_1;
        if ( var_tup == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "tup" );
            exception_tb = NULL;

            exception_lineno = 1225;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_1 = var_tup;
        tmp_assign_source_3 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1225;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_d == NULL );
        var_d = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_all );
        assert( tmp_called_name_1 != NULL );
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_1;
            if ( var_tup == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "tup" );
                exception_tb = NULL;

                exception_lineno = 1226;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_iter_arg_1 = var_tup;
            tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1226;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_1__$0 == NULL );
            tmp_genexpr_1__$0 = tmp_assign_source_4;
        }
        // Tried code:
        tmp_args_element_name_1 = numpy$lib$shape_base$$$function_30_tile$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_args_element_name_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );


        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_30_tile );
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        goto outline_result_1;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_30_tile );
        return NULL;
        outline_result_1:;
        frame_4760aedd6508113d535d32c5d1547e1b->m_frame.f_lineno = 1226;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1226;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 1226;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
        CHECK_OBJECT( par_A );
        tmp_isinstance_inst_1 = par_A;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
            exception_tb = NULL;

            exception_lineno = 1226;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndarray );
        if ( tmp_isinstance_cls_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1226;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1226;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
                exception_tb = NULL;

                exception_lineno = 1229;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_array );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1229;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_A );
            tmp_tuple_element_2 = par_A;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            tmp_dict_value_1 = Py_True;
            tmp_dict_key_1 = const_str_plain_copy;
            tmp_kw_name_1 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_value_2 = Py_True;
            tmp_dict_key_2 = const_str_plain_subok;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( var_d );
            tmp_dict_value_3 = var_d;
            tmp_dict_key_3 = const_str_plain_ndmin;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            frame_4760aedd6508113d535d32c5d1547e1b->m_frame.f_lineno = 1229;
            tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1229;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__nx );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
                exception_tb = NULL;

                exception_lineno = 1233;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_3;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_array );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1233;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_A );
            tmp_tuple_element_3 = par_A;
            tmp_args_name_2 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
            tmp_dict_value_4 = Py_False;
            tmp_dict_key_4 = const_str_plain_copy;
            tmp_kw_name_2 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            tmp_dict_value_5 = Py_True;
            tmp_dict_key_5 = const_str_plain_subok;
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( var_d );
            tmp_dict_value_6 = var_d;
            tmp_dict_key_6 = const_str_plain_ndmin;
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
            assert( !(tmp_res != 0) );
            frame_4760aedd6508113d535d32c5d1547e1b->m_frame.f_lineno = 1233;
            tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1233;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_c == NULL );
            var_c = tmp_assign_source_5;
        }
        branch_end_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( var_d );
        tmp_compexpr_left_2 = var_d;
        if ( var_c == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "c" );
            exception_tb = NULL;

            exception_lineno = 1234;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = var_c;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ndim );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1234;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1234;
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
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_3;
            PyObject *tmp_source_name_5;
            PyObject *tmp_right_name_2;
            PyObject *tmp_right_name_3;
            tmp_left_name_2 = const_tuple_int_pos_1_tuple;
            if ( var_c == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "c" );
                exception_tb = NULL;

                exception_lineno = 1235;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = var_c;
            tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ndim );
            if ( tmp_left_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1235;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_d );
            tmp_right_name_2 = var_d;
            tmp_right_name_1 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_3 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1235;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1235;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            if ( var_tup == NULL )
            {
                Py_DECREF( tmp_left_name_1 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "tup" );
                exception_tb = NULL;

                exception_lineno = 1235;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_right_name_3 = var_tup;
            tmp_assign_source_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1235;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_tup;
                var_tup = tmp_assign_source_6;
                Py_XDECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_tuple_arg_2;
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_element_name_3;
            tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_zip );
            assert( tmp_called_name_4 != NULL );
            if ( var_c == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "c" );
                exception_tb = NULL;

                exception_lineno = 1236;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = var_c;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1236;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            if ( var_tup == NULL )
            {
                Py_DECREF( tmp_args_element_name_2 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "tup" );
                exception_tb = NULL;

                exception_lineno = 1236;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_3 = var_tup;
            frame_4760aedd6508113d535d32c5d1547e1b->m_frame.f_lineno = 1236;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1236;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1236;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_2__$0 == NULL );
            tmp_genexpr_2__$0 = tmp_assign_source_8;
        }
        // Tried code:
        tmp_tuple_arg_2 = numpy$lib$shape_base$$$function_30_tile$$$genexpr_2_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_tuple_arg_2)->m_closure[0] = PyCell_NEW0( tmp_genexpr_2__$0 );


        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_30_tile );
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT( (PyObject *)tmp_genexpr_2__$0 );
        Py_DECREF( tmp_genexpr_2__$0 );
        tmp_genexpr_2__$0 = NULL;

        goto outline_result_2;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_genexpr_2__$0 );
        Py_DECREF( tmp_genexpr_2__$0 );
        tmp_genexpr_2__$0 = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_30_tile );
        return NULL;
        outline_result_2:;
        tmp_assign_source_7 = PySequence_Tuple( tmp_tuple_arg_2 );
        Py_DECREF( tmp_tuple_arg_2 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1236;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_shape_out == NULL );
        var_shape_out = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_source_name_7;
        if ( var_c == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "c" );
            exception_tb = NULL;

            exception_lineno = 1237;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = var_c;
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_size );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1237;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_n );
        tmp_compexpr_left_3 = var_n;
        tmp_compexpr_right_3 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1238;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_assign_source_10;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_8;
            PyObject *tmp_args_element_name_5;
            tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_zip );
            assert( tmp_called_name_5 != NULL );
            if ( var_c == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "c" );
                exception_tb = NULL;

                exception_lineno = 1239;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = var_c;
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_shape );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1239;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            if ( var_tup == NULL )
            {
                Py_DECREF( tmp_args_element_name_4 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "tup" );
                exception_tb = NULL;

                exception_lineno = 1239;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_5 = var_tup;
            frame_4760aedd6508113d535d32c5d1547e1b->m_frame.f_lineno = 1239;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_iter_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1239;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_3 );
            Py_DECREF( tmp_iter_arg_3 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1239;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_for_loop_1__for_iterator == NULL );
            tmp_for_loop_1__for_iterator = tmp_assign_source_10;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT( tmp_for_loop_1__for_iterator );
            tmp_next_source_1 = tmp_for_loop_1__for_iterator;
            tmp_assign_source_11 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_11 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooo";
                    exception_lineno = 1239;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_for_loop_1__iter_value;
                tmp_for_loop_1__iter_value = tmp_assign_source_11;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT( tmp_for_loop_1__iter_value );
            tmp_iter_arg_4 = tmp_for_loop_1__iter_value;
            tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_4 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1239;
                type_description_1 = "ooooooooo";
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_tuple_unpack_1__source_iter;
                tmp_tuple_unpack_1__source_iter = tmp_assign_source_12;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_1, 0 );
            if ( tmp_assign_source_13 == NULL )
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


                type_description_1 = "ooooooooo";
                exception_lineno = 1239;
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_tuple_unpack_1__element_1;
                tmp_tuple_unpack_1__element_1 = tmp_assign_source_13;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_14 = UNPACK_NEXT( tmp_unpack_2, 1 );
            if ( tmp_assign_source_14 == NULL )
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


                type_description_1 = "ooooooooo";
                exception_lineno = 1239;
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_tuple_unpack_1__element_2;
                tmp_tuple_unpack_1__element_2 = tmp_assign_source_14;
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

                        type_description_1 = "ooooooooo";
                        exception_lineno = 1239;
                        goto try_except_handler_7;
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

                type_description_1 = "ooooooooo";
                exception_lineno = 1239;
                goto try_except_handler_7;
            }
        }
        goto try_end_2;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_6;
        // End of try:
        try_end_2:;
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

        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_5;
        // End of try:
        try_end_3:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_15 = tmp_tuple_unpack_1__element_1;
            {
                PyObject *old = var_dim_in;
                var_dim_in = tmp_assign_source_15;
                Py_INCREF( var_dim_in );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_16 = tmp_tuple_unpack_1__element_2;
            {
                PyObject *old = var_nrep;
                var_nrep = tmp_assign_source_16;
                Py_INCREF( var_nrep );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( var_nrep );
            tmp_compexpr_left_4 = var_nrep;
            tmp_compexpr_right_4 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_INT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1240;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
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
                PyObject *tmp_assign_source_17;
                PyObject *tmp_called_instance_1;
                PyObject *tmp_called_instance_2;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_args_element_name_7;
                PyObject *tmp_args_element_name_8;
                PyObject *tmp_args_element_name_9;
                if ( var_c == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "c" );
                    exception_tb = NULL;

                    exception_lineno = 1241;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_5;
                }

                tmp_called_instance_2 = var_c;
                tmp_args_element_name_6 = const_int_neg_1;
                CHECK_OBJECT( var_n );
                tmp_args_element_name_7 = var_n;
                frame_4760aedd6508113d535d32c5d1547e1b->m_frame.f_lineno = 1241;
                {
                    PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
                    tmp_called_instance_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_reshape, call_args );
                }

                if ( tmp_called_instance_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1241;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_5;
                }
                CHECK_OBJECT( var_nrep );
                tmp_args_element_name_8 = var_nrep;
                tmp_args_element_name_9 = const_int_0;
                frame_4760aedd6508113d535d32c5d1547e1b->m_frame.f_lineno = 1241;
                {
                    PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
                    tmp_assign_source_17 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_repeat, call_args );
                }

                Py_DECREF( tmp_called_instance_1 );
                if ( tmp_assign_source_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1241;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_5;
                }
                {
                    PyObject *old = var_c;
                    var_c = tmp_assign_source_17;
                    Py_XDECREF( old );
                }

            }
            branch_no_5:;
        }
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            CHECK_OBJECT( var_n );
            tmp_left_name_4 = var_n;
            CHECK_OBJECT( var_dim_in );
            tmp_right_name_4 = var_dim_in;
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceFloorDivide, &tmp_left_name_4, tmp_right_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1242;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            tmp_assign_source_18 = tmp_left_name_4;
            var_n = tmp_assign_source_18;

        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1239;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }
        goto loop_start_1;
        loop_end_1:;
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

        Py_XDECREF( tmp_for_loop_1__iter_value );
        tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
        Py_DECREF( tmp_for_loop_1__for_iterator );
        tmp_for_loop_1__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_1;
        // End of try:
        try_end_4:;
        Py_XDECREF( tmp_for_loop_1__iter_value );
        tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
        Py_DECREF( tmp_for_loop_1__for_iterator );
        tmp_for_loop_1__for_iterator = NULL;

        branch_no_4:;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_10;
        if ( var_c == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "c" );
            exception_tb = NULL;

            exception_lineno = 1243;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = var_c;
        CHECK_OBJECT( var_shape_out );
        tmp_args_element_name_10 = var_shape_out;
        frame_4760aedd6508113d535d32c5d1547e1b->m_frame.f_lineno = 1243;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_reshape, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1243;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 1
    RESTORE_FRAME_EXCEPTION( frame_4760aedd6508113d535d32c5d1547e1b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_4760aedd6508113d535d32c5d1547e1b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_4760aedd6508113d535d32c5d1547e1b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4760aedd6508113d535d32c5d1547e1b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4760aedd6508113d535d32c5d1547e1b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4760aedd6508113d535d32c5d1547e1b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4760aedd6508113d535d32c5d1547e1b,
        type_description_1,
        par_A,
        par_reps,
        var_c,
        var_d,
        var_tup,
        var_dim_in,
        var_n,
        var_nrep,
        var_shape_out
    );


    // Release cached frame.
    if ( frame_4760aedd6508113d535d32c5d1547e1b == cache_frame_4760aedd6508113d535d32c5d1547e1b )
    {
        Py_DECREF( frame_4760aedd6508113d535d32c5d1547e1b );
    }
    cache_frame_4760aedd6508113d535d32c5d1547e1b = NULL;

    assertFrameObject( frame_4760aedd6508113d535d32c5d1547e1b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_30_tile );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    CHECK_OBJECT( (PyObject *)var_d );
    Py_DECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_tup );
    var_tup = NULL;

    CHECK_OBJECT( (PyObject *)par_reps );
    Py_DECREF( par_reps );
    par_reps = NULL;

    Py_XDECREF( var_dim_in );
    var_dim_in = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_nrep );
    var_nrep = NULL;

    Py_XDECREF( var_shape_out );
    var_shape_out = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_tup );
    var_tup = NULL;

    CHECK_OBJECT( (PyObject *)par_reps );
    Py_DECREF( par_reps );
    par_reps = NULL;

    Py_XDECREF( var_dim_in );
    var_dim_in = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_nrep );
    var_nrep = NULL;

    Py_XDECREF( var_shape_out );
    var_shape_out = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$shape_base$$$function_30_tile );
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



struct numpy$lib$shape_base$$$function_30_tile$$$genexpr_1_genexpr_locals {
    PyObject *var_x;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *numpy$lib$shape_base$$$function_30_tile$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct numpy$lib$shape_base$$$function_30_tile$$$genexpr_1_genexpr_locals *generator_heap = (struct numpy$lib$shape_base$$$function_30_tile$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_x = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_ec3f0b19b22d65860d7d432b1c7a2cdb, module_numpy$lib$shape_base, sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

#if PYTHON_VERSION < 370
        generator->m_frame->m_frame.f_exc_type = EXC_TYPE( thread_state );
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
        Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#else
        generator->m_exc_state.exc_type = EXC_TYPE( thread_state );
        if ( generator->m_exc_state.exc_type == Py_None ) generator->m_exc_state.exc_type = NULL;
        Py_XINCREF( generator->m_exc_state.exc_type );
        generator->m_exc_state.exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_value );
        generator->m_exc_state.exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_traceback );
#endif
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT( PyCell_GET( generator->m_closure[0] ) );
        tmp_next_source_1 = PyCell_GET( generator->m_closure[0] );
        tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 1226;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( generator_heap->tmp_iter_value_0 );
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_x;
            generator_heap->var_x = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_x );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_x );
        tmp_compexpr_left_1 = generator_heap->var_x;
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_expression_name_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 1226;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 1226;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 1226;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( generator_heap->exception_type ) )
    {
        if ( generator_heap->exception_tb == NULL )
        {
            generator_heap->exception_tb = MAKE_TRACEBACK( generator->m_frame, generator_heap->exception_lineno );
        }
        else if ( generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            generator_heap->exception_tb = ADD_TRACEBACK( generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_x
        );


        // Release cached frame.
        if ( generator->m_frame == cache_m_frame )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_m_frame = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_x );
    generator_heap->var_x = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    Py_XDECREF( generator_heap->var_x );
    generator_heap->var_x = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *numpy$lib$shape_base$$$function_30_tile$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        numpy$lib$shape_base$$$function_30_tile$$$genexpr_1_genexpr_context,
        module_numpy$lib$shape_base,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_ec3f0b19b22d65860d7d432b1c7a2cdb,
        1,
        sizeof(struct numpy$lib$shape_base$$$function_30_tile$$$genexpr_1_genexpr_locals)
    );
}



struct numpy$lib$shape_base$$$function_30_tile$$$genexpr_2_genexpr_locals {
    PyObject *var_s;
    PyObject *var_t;
    PyObject *tmp_iter_value_0;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
};

static PyObject *numpy$lib$shape_base$$$function_30_tile$$$genexpr_2_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct numpy$lib$shape_base$$$function_30_tile$$$genexpr_2_genexpr_locals *generator_heap = (struct numpy$lib$shape_base$$$function_30_tile$$$genexpr_2_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_s = NULL;
    generator_heap->var_t = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_04b9afd1ed7b2767a17f9e96a0d06819, module_numpy$lib$shape_base, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

#if PYTHON_VERSION < 370
        generator->m_frame->m_frame.f_exc_type = EXC_TYPE( thread_state );
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
        Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#else
        generator->m_exc_state.exc_type = EXC_TYPE( thread_state );
        if ( generator->m_exc_state.exc_type == Py_None ) generator->m_exc_state.exc_type = NULL;
        Py_XINCREF( generator->m_exc_state.exc_type );
        generator->m_exc_state.exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_value );
        generator->m_exc_state.exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_traceback );
#endif
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT( PyCell_GET( generator->m_closure[0] ) );
        tmp_next_source_1 = PyCell_GET( generator->m_closure[0] );
        tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "Noo";
                generator_heap->exception_lineno = 1236;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( generator_heap->tmp_iter_value_0 );
        tmp_iter_arg_1 = generator_heap->tmp_iter_value_0;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 1236;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
            generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            }


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 1236;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
            generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1 );
        if ( tmp_assign_source_4 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            }


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 1236;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
            generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        generator_heap->tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( generator_heap->tmp_iterator_attempt == NULL ))
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
                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );

                    generator_heap->type_description_1 = "Noo";
                    generator_heap->exception_lineno = 1236;
                    goto try_except_handler_4;
                }
            }
        }
        else
        {
            Py_DECREF( generator_heap->tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );

            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 1236;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_tuple_unpack_1__source_iter );
    Py_DECREF( generator_heap->tmp_tuple_unpack_1__source_iter );
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_1 );
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_2 );
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)generator_heap->tmp_tuple_unpack_1__source_iter );
    Py_DECREF( generator_heap->tmp_tuple_unpack_1__source_iter );
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var_s;
            generator_heap->var_s = tmp_assign_source_5;
            Py_INCREF( generator_heap->var_s );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_1 );
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = generator_heap->var_t;
            generator_heap->var_t = tmp_assign_source_6;
            Py_INCREF( generator_heap->var_t );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_2 );
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_s );
        tmp_left_name_1 = generator_heap->var_s;
        CHECK_OBJECT( generator_heap->var_t );
        tmp_right_name_1 = generator_heap->var_t;
        tmp_expression_name_1 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 1236;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_left_name_1, sizeof(PyObject *), &tmp_right_name_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_left_name_1, sizeof(PyObject *), &tmp_right_name_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 1236;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 1236;
        generator_heap->type_description_1 = "Noo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( generator_heap->exception_type ) )
    {
        if ( generator_heap->exception_tb == NULL )
        {
            generator_heap->exception_tb = MAKE_TRACEBACK( generator->m_frame, generator_heap->exception_lineno );
        }
        else if ( generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            generator_heap->exception_tb = ADD_TRACEBACK( generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_s,
            generator_heap->var_t
        );


        // Release cached frame.
        if ( generator->m_frame == cache_m_frame )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_m_frame = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_s );
    generator_heap->var_s = NULL;

    Py_XDECREF( generator_heap->var_t );
    generator_heap->var_t = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_4:;
    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    Py_XDECREF( generator_heap->var_s );
    generator_heap->var_s = NULL;

    Py_XDECREF( generator_heap->var_t );
    generator_heap->var_t = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *numpy$lib$shape_base$$$function_30_tile$$$genexpr_2_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        numpy$lib$shape_base$$$function_30_tile$$$genexpr_2_genexpr_context,
        module_numpy$lib$shape_base,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_04b9afd1ed7b2767a17f9e96a0d06819,
        1,
        sizeof(struct numpy$lib$shape_base$$$function_30_tile$$$genexpr_2_genexpr_locals)
    );
}



static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_10__expand_dims_dispatcher(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$shape_base$$$function_10__expand_dims_dispatcher,
        const_str_plain__expand_dims_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ba51f95eb93face58d8e7f988fa70c2b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$shape_base,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_11_expand_dims(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$shape_base$$$function_11_expand_dims,
        const_str_plain_expand_dims,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_567180109a27206bed4c24b84527ef57,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$shape_base,
        const_str_digest_f8cac42b5769f82a94f0f52ce94bd365,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_12__column_stack_dispatcher(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$shape_base$$$function_12__column_stack_dispatcher,
        const_str_plain__column_stack_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_84be773cc1ceff8749ee2de9d4c3fb96,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$shape_base,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_13_column_stack(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$shape_base$$$function_13_column_stack,
        const_str_plain_column_stack,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bddd17c377b8322ed7a10d4e5ecc5adc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$shape_base,
        const_str_digest_41ec33c6fb89fb35bf4c5dc200c0457d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_14__dstack_dispatcher(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$shape_base$$$function_14__dstack_dispatcher,
        const_str_plain__dstack_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c1bf07921a38f5f2123b2013d6d3c564,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$shape_base,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_15_dstack(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$shape_base$$$function_15_dstack,
        const_str_plain_dstack,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4cd39dce4b92377adbf097f044630fae,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$shape_base,
        const_str_digest_7068e1ab3f46abe79d5df3f226afba9f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_16__replace_zero_by_x_arrays(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$shape_base$$$function_16__replace_zero_by_x_arrays,
        const_str_plain__replace_zero_by_x_arrays,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9dbf8e883b7b194b1567a6bc1e843153,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$shape_base,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_17__array_split_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$shape_base$$$function_17__array_split_dispatcher,
        const_str_plain__array_split_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c0aa245ef3c3f0200a4c8defbe8f2e1e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$shape_base,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_18_array_split( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$shape_base$$$function_18_array_split,
        const_str_plain_array_split,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b3a446e8491296ddaabe1a40b2fcfff0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$shape_base,
        const_str_digest_a49a256d0acc9717adf9049a10890d1b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_19__split_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$shape_base$$$function_19__split_dispatcher,
        const_str_plain__split_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8b1e683349157e705d98ee5eced9d83a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$shape_base,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_1__make_along_axis_idx(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$shape_base$$$function_1__make_along_axis_idx,
        const_str_plain__make_along_axis_idx,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_db989e8c641a46290543eecf9a8258a7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$shape_base,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_20_split( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$shape_base$$$function_20_split,
        const_str_plain_split,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e20eba40209d3f6789f7b2ea82e2a911,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$shape_base,
        const_str_digest_af4947347384f3dff9d2f17dd2a68017,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_21__hvdsplit_dispatcher(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$shape_base$$$function_21__hvdsplit_dispatcher,
        const_str_plain__hvdsplit_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fce60809172ff7348863d12eaa9dd87c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$shape_base,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_22_hsplit(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$shape_base$$$function_22_hsplit,
        const_str_plain_hsplit,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_be849c5f021d8e8ed6b08b0c785d4b51,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$shape_base,
        const_str_digest_a6acd8ad205213dce90c730c6e3a92ce,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_23_vsplit(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$shape_base$$$function_23_vsplit,
        const_str_plain_vsplit,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c62fec198df045dc1aee60baa77f7b8f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$shape_base,
        const_str_digest_1d96fe8a6d92c945e6a5dd4411661d07,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_24_dsplit(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$shape_base$$$function_24_dsplit,
        const_str_plain_dsplit,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1ad49e4f6f0cc8ab6b5de32c365d24af,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$shape_base,
        const_str_digest_36d3bf65d2976ca53953f3831bf4a3e1,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_25_get_array_prepare(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$shape_base$$$function_25_get_array_prepare,
        const_str_plain_get_array_prepare,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2c628b84b11a90f2010891fa7ef8c39b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$shape_base,
        const_str_digest_0da0dce8d822dc3d2ac8de9e61f46138,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_26_get_array_wrap(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$shape_base$$$function_26_get_array_wrap,
        const_str_plain_get_array_wrap,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_aea1332d8688d2dcef3ae78b2227640d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$shape_base,
        const_str_digest_0da0dce8d822dc3d2ac8de9e61f46138,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_27__kron_dispatcher(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$shape_base$$$function_27__kron_dispatcher,
        const_str_plain__kron_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_453169de66732a79502a207492917af3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$shape_base,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_28_kron(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$shape_base$$$function_28_kron,
        const_str_plain_kron,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_64e540be2f6df1bf05ea06f8c9bf8eb3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$shape_base,
        const_str_digest_a39171c0a7a8134aa75507257c0b64bd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_29__tile_dispatcher(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$shape_base$$$function_29__tile_dispatcher,
        const_str_plain__tile_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2337ba28ccfdfaf083419b950b531191,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$shape_base,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_2__take_along_axis_dispatcher(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$shape_base$$$function_2__take_along_axis_dispatcher,
        const_str_plain__take_along_axis_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e07ab33a868666f742612bc9615d4709,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$shape_base,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_30_tile(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$shape_base$$$function_30_tile,
        const_str_plain_tile,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4760aedd6508113d535d32c5d1547e1b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$shape_base,
        const_str_digest_8fb3c62e9b3531d50e69aa26ef8b4b5b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_3_take_along_axis(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$shape_base$$$function_3_take_along_axis,
        const_str_plain_take_along_axis,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_248a14ea49e9620c4676d3c18bb06081,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$shape_base,
        const_str_digest_6d60e43c9e85db243045fdf79d405601,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_4__put_along_axis_dispatcher(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$shape_base$$$function_4__put_along_axis_dispatcher,
        const_str_plain__put_along_axis_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_038d559d7095aec916c2e773f97c4994,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$shape_base,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_5_put_along_axis(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$shape_base$$$function_5_put_along_axis,
        const_str_plain_put_along_axis,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bb7f99ba5e65f5cb09ce750dfb2785f5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$shape_base,
        const_str_digest_65fecc3c16c125dda36672d6c29323c7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_6__apply_along_axis_dispatcher(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$shape_base$$$function_6__apply_along_axis_dispatcher,
        const_str_plain__apply_along_axis_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fedacb0f418371c2284170a52900fed0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$shape_base,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_7_apply_along_axis(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$shape_base$$$function_7_apply_along_axis,
        const_str_plain_apply_along_axis,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6642c1eeef75a83b9631bcd884095d69,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$shape_base,
        const_str_digest_08a38aa2e3119a1ffd1769f455bb2b91,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_8__apply_over_axes_dispatcher(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$shape_base$$$function_8__apply_over_axes_dispatcher,
        const_str_plain__apply_over_axes_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f12e0b2b0ca14c37bd983c2228c3016f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$shape_base,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$shape_base$$$function_9_apply_over_axes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$shape_base$$$function_9_apply_over_axes,
        const_str_plain_apply_over_axes,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5d4de246c153321a48b6e52a7086776c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$shape_base,
        const_str_digest_7aa728c6f3681233b4c51e9236d6563b,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$lib$shape_base =
{
    PyModuleDef_HEAD_INIT,
    "numpy.lib.shape_base",
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

MOD_INIT_DECL( numpy$lib$shape_base )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$lib$shape_base );
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
    puts("numpy.lib.shape_base: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.lib.shape_base: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.lib.shape_base: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$lib$shape_base" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$lib$shape_base = Py_InitModule4(
        "numpy.lib.shape_base",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_numpy$lib$shape_base = PyModule_Create( &mdef_numpy$lib$shape_base );
#endif

    moduledict_numpy$lib$shape_base = MODULE_DICT( module_numpy$lib$shape_base );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_numpy$lib$shape_base,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$shape_base,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$shape_base,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_numpy$lib$shape_base );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_92c3af791b30013b3e19c700df5101a5, module_numpy$lib$shape_base );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    struct Nuitka_FrameObject *frame_bf0ab0b0126cbb6df7f45d7c642aec5b;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_af761d9a3c934f241f4f72138f30e655;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
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
    frame_bf0ab0b0126cbb6df7f45d7c642aec5b = MAKE_MODULE_FRAME( codeobj_bf0ab0b0126cbb6df7f45d7c642aec5b, module_numpy$lib$shape_base );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_bf0ab0b0126cbb6df7f45d7c642aec5b );
    assert( Py_REFCNT( frame_bf0ab0b0126cbb6df7f45d7c642aec5b ) == 2 );

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


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_4 );
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


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
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


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_functools;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$lib$shape_base;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 3;
        tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_functools, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_warnings;
        tmp_globals_name_2 = (PyObject *)moduledict_numpy$lib$shape_base;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 4;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_aa3423acdb6152e259f846c9911226b3;
        tmp_globals_name_3 = (PyObject *)moduledict_numpy$lib$shape_base;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 6;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_import_name_from_4 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_core );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_numeric );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__nx, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_aa3423acdb6152e259f846c9911226b3;
        tmp_globals_name_4 = (PyObject *)moduledict_numpy$lib$shape_base;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_88ee0303612dfe34782af5675ecdd35f_tuple;
        tmp_level_name_4 = const_int_0;
        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 7;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_asarray );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_asarray, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_zeros );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_zeros, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_outer );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_outer, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_9 = tmp_import_from_2__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_concatenate );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_concatenate, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_10 = tmp_import_from_2__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_array );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_array, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_11 = tmp_import_from_2__module;
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_asanyarray );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_asanyarray, tmp_assign_source_16 );
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
        PyObject *tmp_assign_source_17;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_fef7e379d8b29f70158a022afa317baa;
        tmp_globals_name_5 = (PyObject *)moduledict_numpy$lib$shape_base;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_product_str_plain_reshape_str_plain_transpose_tuple;
        tmp_level_name_5 = const_int_0;
        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 10;
        tmp_assign_source_17 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_17;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_12 = tmp_import_from_3__module;
        tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_product );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_product, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_13 = tmp_import_from_3__module;
        tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_reshape );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_reshape, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_14 = tmp_import_from_3__module;
        tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_transpose );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_transpose, tmp_assign_source_20 );
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
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_digest_f104ae7867dfcd3f38891fc4f1b7cd57;
        tmp_globals_name_6 = (PyObject *)moduledict_numpy$lib$shape_base;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_normalize_axis_index_tuple;
        tmp_level_name_6 = const_int_0;
        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 11;
        tmp_import_name_from_15 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_import_name_from_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_normalize_axis_index );
        Py_DECREF( tmp_import_name_from_15 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_normalize_axis_index, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
        tmp_globals_name_7 = (PyObject *)moduledict_numpy$lib$shape_base;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_overrides_tuple;
        tmp_level_name_7 = const_int_0;
        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 12;
        tmp_import_name_from_16 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_import_name_from_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_overrides );
        Py_DECREF( tmp_import_name_from_16 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_overrides, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
        tmp_globals_name_8 = (PyObject *)moduledict_numpy$lib$shape_base;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain_vstack_str_plain_atleast_3d_tuple;
        tmp_level_name_8 = const_int_0;
        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 13;
        tmp_assign_source_23 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_4__module == NULL );
        tmp_import_from_4__module = tmp_assign_source_23;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_17 = tmp_import_from_4__module;
        tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_vstack );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_vstack, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_18 = tmp_import_from_4__module;
        tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_atleast_3d );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_atleast_3d, tmp_assign_source_25 );
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = const_str_digest_05505d3dfcf4f98fe70aff71c6cc60d8;
        tmp_globals_name_9 = (PyObject *)moduledict_numpy$lib$shape_base;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = const_tuple_78d887ae2d29ddaf6f2cdadf5d4f1d8d_tuple;
        tmp_level_name_9 = const_int_0;
        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 14;
        tmp_assign_source_26 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_5__module == NULL );
        tmp_import_from_5__module = tmp_assign_source_26;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_19 = tmp_import_from_5__module;
        tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain__arrays_for_stack_dispatcher );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__arrays_for_stack_dispatcher, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_20 = tmp_import_from_5__module;
        tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain__warn_for_nonsequence );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__warn_for_nonsequence, tmp_assign_source_28 );
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_21;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = const_str_digest_82d72071fc1da9db8c6dd31f1049410c;
        tmp_globals_name_10 = (PyObject *)moduledict_numpy$lib$shape_base;
        tmp_locals_name_10 = Py_None;
        tmp_fromlist_name_10 = const_tuple_str_plain_ndindex_tuple;
        tmp_level_name_10 = const_int_0;
        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 16;
        tmp_import_name_from_21 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
        if ( tmp_import_name_from_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_ndindex );
        Py_DECREF( tmp_import_name_from_21 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_ndindex, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_22;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_name_11;
        PyObject *tmp_locals_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = const_str_digest_4179858148d85e138b7e27f6f7ce41c6;
        tmp_globals_name_11 = (PyObject *)moduledict_numpy$lib$shape_base;
        tmp_locals_name_11 = Py_None;
        tmp_fromlist_name_11 = const_tuple_str_plain_matrix_tuple;
        tmp_level_name_11 = const_int_0;
        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 17;
        tmp_import_name_from_22 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
        if ( tmp_import_name_from_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_matrix );
        Py_DECREF( tmp_import_name_from_22 );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_matrix, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = LIST_COPY( const_list_8c7b5f5ec67282d4204738cdfc41acdf_list );
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_functools );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_functools );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "functools" );
            exception_tb = NULL;

            exception_lineno = 28;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_partial );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_overrides );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_overrides );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "overrides" );
            exception_tb = NULL;

            exception_lineno = 29;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_array_function_dispatch );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_6e6659be28864e39bad7cab4409b7e16 );
        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 28;
        tmp_assign_source_32 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_array_function_dispatch, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_FUNCTION_numpy$lib$shape_base$$$function_1__make_along_axis_idx(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__make_along_axis_idx, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_FUNCTION_numpy$lib$shape_base$$$function_2__take_along_axis_dispatcher(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__take_along_axis_dispatcher, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_called_name_3 = tmp_mvar_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__take_along_axis_dispatcher );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__take_along_axis_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_4 );
        tmp_args_element_name_1 = tmp_mvar_value_4;
        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_called_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = MAKE_FUNCTION_numpy$lib$shape_base$$$function_3_take_along_axis(  );



        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_take_along_axis, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_FUNCTION_numpy$lib$shape_base$$$function_4__put_along_axis_dispatcher(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__put_along_axis_dispatcher, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_name_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_5;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__put_along_axis_dispatcher );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__put_along_axis_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_6 );
        tmp_args_element_name_3 = tmp_mvar_value_6;
        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_called_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = MAKE_FUNCTION_numpy$lib$shape_base$$$function_5_put_along_axis(  );



        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_put_along_axis, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_FUNCTION_numpy$lib$shape_base$$$function_6__apply_along_axis_dispatcher(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__apply_along_axis_dispatcher, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_name_6;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;

            exception_lineno = 270;

            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_7;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__apply_along_axis_dispatcher );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__apply_along_axis_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_8 );
        tmp_args_element_name_5 = tmp_mvar_value_8;
        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 270;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_called_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = MAKE_FUNCTION_numpy$lib$shape_base$$$function_7_apply_along_axis(  );



        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 270;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_apply_along_axis, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_FUNCTION_numpy$lib$shape_base$$$function_8__apply_over_axes_dispatcher(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__apply_over_axes_dispatcher, tmp_assign_source_40 );
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_name_8;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;

            exception_lineno = 422;

            goto frame_exception_exit_1;
        }

        tmp_called_name_9 = tmp_mvar_value_9;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__apply_over_axes_dispatcher );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__apply_over_axes_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_10 );
        tmp_args_element_name_7 = tmp_mvar_value_10;
        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 422;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_called_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_8 = MAKE_FUNCTION_numpy$lib$shape_base$$$function_9_apply_over_axes(  );



        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 422;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_assign_source_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_apply_over_axes, tmp_assign_source_41 );
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_FUNCTION_numpy$lib$shape_base$$$function_10__expand_dims_dispatcher(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__expand_dims_dispatcher, tmp_assign_source_42 );
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_name_10;
        PyObject *tmp_called_name_11;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_10;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;

            exception_lineno = 513;

            goto frame_exception_exit_1;
        }

        tmp_called_name_11 = tmp_mvar_value_11;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__expand_dims_dispatcher );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__expand_dims_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_12 );
        tmp_args_element_name_9 = tmp_mvar_value_12;
        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 513;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_called_name_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
        }

        if ( tmp_called_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 513;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_10 = MAKE_FUNCTION_numpy$lib$shape_base$$$function_11_expand_dims(  );



        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 513;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_assign_source_43 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 513;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_expand_dims, tmp_assign_source_43 );
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_mvar_value_13;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_vstack );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_vstack );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "vstack" );
            exception_tb = NULL;

            exception_lineno = 592;

            goto frame_exception_exit_1;
        }

        tmp_assign_source_44 = tmp_mvar_value_13;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_row_stack, tmp_assign_source_44 );
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = MAKE_FUNCTION_numpy$lib$shape_base$$$function_12__column_stack_dispatcher(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__column_stack_dispatcher, tmp_assign_source_45 );
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_name_12;
        PyObject *tmp_called_name_13;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_element_name_12;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

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

            exception_lineno = 599;

            goto frame_exception_exit_1;
        }

        tmp_called_name_13 = tmp_mvar_value_14;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__column_stack_dispatcher );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__column_stack_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_15 );
        tmp_args_element_name_11 = tmp_mvar_value_15;
        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 599;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_called_name_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
        }

        if ( tmp_called_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 599;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_12 = MAKE_FUNCTION_numpy$lib$shape_base$$$function_13_column_stack(  );



        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 599;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
        }

        Py_DECREF( tmp_called_name_12 );
        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 599;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_column_stack, tmp_assign_source_46 );
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = MAKE_FUNCTION_numpy$lib$shape_base$$$function_14__dstack_dispatcher(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__dstack_dispatcher, tmp_assign_source_47 );
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_name_14;
        PyObject *tmp_called_name_15;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_args_element_name_14;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

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

            exception_lineno = 647;

            goto frame_exception_exit_1;
        }

        tmp_called_name_15 = tmp_mvar_value_16;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__dstack_dispatcher );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__dstack_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_17 );
        tmp_args_element_name_13 = tmp_mvar_value_17;
        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 647;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_called_name_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
        }

        if ( tmp_called_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 647;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_14 = MAKE_FUNCTION_numpy$lib$shape_base$$$function_15_dstack(  );



        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 647;
        {
            PyObject *call_args[] = { tmp_args_element_name_14 };
            tmp_assign_source_48 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
        }

        Py_DECREF( tmp_called_name_14 );
        Py_DECREF( tmp_args_element_name_14 );
        if ( tmp_assign_source_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 647;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_dstack, tmp_assign_source_48 );
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = MAKE_FUNCTION_numpy$lib$shape_base$$$function_16__replace_zero_by_x_arrays(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__replace_zero_by_x_arrays, tmp_assign_source_49 );
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_50 = MAKE_FUNCTION_numpy$lib$shape_base$$$function_17__array_split_dispatcher( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__array_split_dispatcher, tmp_assign_source_50 );
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_name_16;
        PyObject *tmp_called_name_17;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_defaults_2;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

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

            exception_lineno = 715;

            goto frame_exception_exit_1;
        }

        tmp_called_name_17 = tmp_mvar_value_18;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__array_split_dispatcher );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__array_split_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_19 );
        tmp_args_element_name_15 = tmp_mvar_value_19;
        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 715;
        {
            PyObject *call_args[] = { tmp_args_element_name_15 };
            tmp_called_name_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
        }

        if ( tmp_called_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 715;

            goto frame_exception_exit_1;
        }
        tmp_defaults_2 = const_tuple_int_0_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_args_element_name_16 = MAKE_FUNCTION_numpy$lib$shape_base$$$function_18_array_split( tmp_defaults_2 );



        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 715;
        {
            PyObject *call_args[] = { tmp_args_element_name_16 };
            tmp_assign_source_51 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
        }

        Py_DECREF( tmp_called_name_16 );
        Py_DECREF( tmp_args_element_name_16 );
        if ( tmp_assign_source_51 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 715;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_array_split, tmp_assign_source_51 );
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_52 = MAKE_FUNCTION_numpy$lib$shape_base$$$function_19__split_dispatcher( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__split_dispatcher, tmp_assign_source_52 );
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_name_18;
        PyObject *tmp_called_name_19;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_defaults_4;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_20 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;

            exception_lineno = 775;

            goto frame_exception_exit_1;
        }

        tmp_called_name_19 = tmp_mvar_value_20;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__split_dispatcher );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__split_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_21 );
        tmp_args_element_name_17 = tmp_mvar_value_21;
        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 775;
        {
            PyObject *call_args[] = { tmp_args_element_name_17 };
            tmp_called_name_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
        }

        if ( tmp_called_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 775;

            goto frame_exception_exit_1;
        }
        tmp_defaults_4 = const_tuple_int_0_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_args_element_name_18 = MAKE_FUNCTION_numpy$lib$shape_base$$$function_20_split( tmp_defaults_4 );



        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 775;
        {
            PyObject *call_args[] = { tmp_args_element_name_18 };
            tmp_assign_source_53 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
        }

        Py_DECREF( tmp_called_name_18 );
        Py_DECREF( tmp_args_element_name_18 );
        if ( tmp_assign_source_53 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 775;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_split, tmp_assign_source_53 );
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = MAKE_FUNCTION_numpy$lib$shape_base$$$function_21__hvdsplit_dispatcher(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__hvdsplit_dispatcher, tmp_assign_source_54 );
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_name_20;
        PyObject *tmp_called_name_21;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_args_element_name_20;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_22 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;

            exception_lineno = 858;

            goto frame_exception_exit_1;
        }

        tmp_called_name_21 = tmp_mvar_value_22;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__hvdsplit_dispatcher );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__hvdsplit_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_23 );
        tmp_args_element_name_19 = tmp_mvar_value_23;
        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 858;
        {
            PyObject *call_args[] = { tmp_args_element_name_19 };
            tmp_called_name_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
        }

        if ( tmp_called_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 858;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_20 = MAKE_FUNCTION_numpy$lib$shape_base$$$function_22_hsplit(  );



        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 858;
        {
            PyObject *call_args[] = { tmp_args_element_name_20 };
            tmp_assign_source_55 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
        }

        Py_DECREF( tmp_called_name_20 );
        Py_DECREF( tmp_args_element_name_20 );
        if ( tmp_assign_source_55 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 858;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_hsplit, tmp_assign_source_55 );
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_name_22;
        PyObject *tmp_called_name_23;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_args_element_name_22;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_24 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;

            exception_lineno = 922;

            goto frame_exception_exit_1;
        }

        tmp_called_name_23 = tmp_mvar_value_24;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__hvdsplit_dispatcher );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__hvdsplit_dispatcher );
        }

        if ( tmp_mvar_value_25 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_hvdsplit_dispatcher" );
            exception_tb = NULL;

            exception_lineno = 922;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_21 = tmp_mvar_value_25;
        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 922;
        {
            PyObject *call_args[] = { tmp_args_element_name_21 };
            tmp_called_name_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
        }

        if ( tmp_called_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 922;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_22 = MAKE_FUNCTION_numpy$lib$shape_base$$$function_23_vsplit(  );



        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 922;
        {
            PyObject *call_args[] = { tmp_args_element_name_22 };
            tmp_assign_source_56 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
        }

        Py_DECREF( tmp_called_name_22 );
        Py_DECREF( tmp_args_element_name_22 );
        if ( tmp_assign_source_56 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 922;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_vsplit, tmp_assign_source_56 );
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_name_24;
        PyObject *tmp_called_name_25;
        PyObject *tmp_mvar_value_26;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_mvar_value_27;
        PyObject *tmp_args_element_name_24;
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_26 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;

            exception_lineno = 975;

            goto frame_exception_exit_1;
        }

        tmp_called_name_25 = tmp_mvar_value_26;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__hvdsplit_dispatcher );

        if (unlikely( tmp_mvar_value_27 == NULL ))
        {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__hvdsplit_dispatcher );
        }

        if ( tmp_mvar_value_27 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_hvdsplit_dispatcher" );
            exception_tb = NULL;

            exception_lineno = 975;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_23 = tmp_mvar_value_27;
        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 975;
        {
            PyObject *call_args[] = { tmp_args_element_name_23 };
            tmp_called_name_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, call_args );
        }

        if ( tmp_called_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 975;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_24 = MAKE_FUNCTION_numpy$lib$shape_base$$$function_24_dsplit(  );



        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 975;
        {
            PyObject *call_args[] = { tmp_args_element_name_24 };
            tmp_assign_source_57 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, call_args );
        }

        Py_DECREF( tmp_called_name_24 );
        Py_DECREF( tmp_args_element_name_24 );
        if ( tmp_assign_source_57 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 975;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_dsplit, tmp_assign_source_57 );
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = MAKE_FUNCTION_numpy$lib$shape_base$$$function_25_get_array_prepare(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_get_array_prepare, tmp_assign_source_58 );
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = MAKE_FUNCTION_numpy$lib$shape_base$$$function_26_get_array_wrap(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_get_array_wrap, tmp_assign_source_59 );
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = MAKE_FUNCTION_numpy$lib$shape_base$$$function_27__kron_dispatcher(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__kron_dispatcher, tmp_assign_source_60 );
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_name_26;
        PyObject *tmp_called_name_27;
        PyObject *tmp_mvar_value_28;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_mvar_value_29;
        PyObject *tmp_args_element_name_26;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_28 == NULL ))
        {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_28 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;

            exception_lineno = 1050;

            goto frame_exception_exit_1;
        }

        tmp_called_name_27 = tmp_mvar_value_28;
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__kron_dispatcher );

        if (unlikely( tmp_mvar_value_29 == NULL ))
        {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__kron_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_29 );
        tmp_args_element_name_25 = tmp_mvar_value_29;
        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 1050;
        {
            PyObject *call_args[] = { tmp_args_element_name_25 };
            tmp_called_name_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_27, call_args );
        }

        if ( tmp_called_name_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1050;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_26 = MAKE_FUNCTION_numpy$lib$shape_base$$$function_28_kron(  );



        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 1050;
        {
            PyObject *call_args[] = { tmp_args_element_name_26 };
            tmp_assign_source_61 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, call_args );
        }

        Py_DECREF( tmp_called_name_26 );
        Py_DECREF( tmp_args_element_name_26 );
        if ( tmp_assign_source_61 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1050;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_kron, tmp_assign_source_61 );
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = MAKE_FUNCTION_numpy$lib$shape_base$$$function_29__tile_dispatcher(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__tile_dispatcher, tmp_assign_source_62 );
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_name_28;
        PyObject *tmp_called_name_29;
        PyObject *tmp_mvar_value_30;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_mvar_value_31;
        PyObject *tmp_args_element_name_28;
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_30 == NULL ))
        {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_30 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;

            exception_lineno = 1154;

            goto frame_exception_exit_1;
        }

        tmp_called_name_29 = tmp_mvar_value_30;
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain__tile_dispatcher );

        if (unlikely( tmp_mvar_value_31 == NULL ))
        {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__tile_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_31 );
        tmp_args_element_name_27 = tmp_mvar_value_31;
        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 1154;
        {
            PyObject *call_args[] = { tmp_args_element_name_27 };
            tmp_called_name_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_29, call_args );
        }

        if ( tmp_called_name_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1154;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_28 = MAKE_FUNCTION_numpy$lib$shape_base$$$function_30_tile(  );



        frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame.f_lineno = 1154;
        {
            PyObject *call_args[] = { tmp_args_element_name_28 };
            tmp_assign_source_63 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_28, call_args );
        }

        Py_DECREF( tmp_called_name_28 );
        Py_DECREF( tmp_args_element_name_28 );
        if ( tmp_assign_source_63 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1154;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain_tile, tmp_assign_source_63 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bf0ab0b0126cbb6df7f45d7c642aec5b );
#endif
    popFrameStack();

    assertFrameObject( frame_bf0ab0b0126cbb6df7f45d7c642aec5b );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bf0ab0b0126cbb6df7f45d7c642aec5b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bf0ab0b0126cbb6df7f45d7c642aec5b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bf0ab0b0126cbb6df7f45d7c642aec5b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bf0ab0b0126cbb6df7f45d7c642aec5b, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_numpy$lib$shape_base, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_numpy$lib$shape_base );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
