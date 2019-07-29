/* Generated code for Python module 'numpy.lib.index_tricks'
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

/* The "_module_numpy$lib$index_tricks" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$index_tricks;
PyDictObject *moduledict_numpy$lib$index_tricks;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_partial;
extern PyObject *const_str_plain_coords;
extern PyObject *const_str_plain_order;
static PyObject *const_tuple_str_plain_overrides_str_plain_linspace_tuple;
extern PyObject *const_tuple_type_object_tuple;
static PyObject *const_str_digest_12c1a9c9ac974aef622baf6784c5dccc;
static PyObject *const_str_plain__ix__dispatcher;
static PyObject *const_tuple_str_plain_ravel_multi_index_str_plain_unravel_index_tuple;
extern PyObject *const_str_plain__nx;
static PyObject *const_str_plain_c_;
static PyObject *const_list_fa22549eaa1a878119e86a628980cdb1_list;
static PyObject *const_str_plain_nd_grid;
static PyObject *const_str_plain_ix_;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_tuple_type_ValueError_type_TypeError_tuple;
extern PyObject *const_str_plain_module;
extern PyObject *const_str_plain_subok;
static PyObject *const_str_plain__it;
extern PyObject *const_str_digest_3ebbb82d9800d0665e0803be07081408;
extern PyObject *const_str_plain__x;
extern PyObject *const_str_plain_function_base;
static PyObject *const_str_digest_fc8926c182d686d26fd1d5b3b74287d6;
static PyObject *const_str_plain_mgrid;
extern PyObject *const_str_plain_step;
static PyObject *const_str_plain__fill_diagonal_dispatcher;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_multi_index;
extern PyObject *const_str_plain_axis;
extern PyObject *const_str_plain_next;
static PyObject *const_str_digest_10070abaa510b7ab1f69c9f0869da78b;
extern PyObject *const_str_digest_f462c9dbdab6a6e18585dee27e01f422;
extern PyObject *const_str_plain_start;
extern PyObject *const_str_plain_length;
extern PyObject *const_str_plain_zip;
extern PyObject *const_str_plain_numpy;
static PyObject *const_tuple_4cf701b0d8ee733b9cd41c207320714b_tuple;
static PyObject *const_str_plain_OGridClass;
extern PyObject *const_str_plain_concatenate;
extern PyObject *const_str_plain_find_common_type;
static PyObject *const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple;
static PyObject *const_str_plain_fill_diagonal;
extern PyObject *const_float_1_0;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_str_plain_val;
extern PyObject *const_str_plain_zerosize_ok;
static PyObject *const_str_plain_diag_indices_from;
static PyObject *const_str_digest_3e9c4e5fc3ec9f112df1e590712b1ef6;
static PyObject *const_str_digest_e8301c44a94b8eb84989b73baa2e6baa;
static PyObject *const_str_plain_ndincr;
extern PyObject *const_str_plain_as_strided;
extern PyObject *const_str_plain_int;
extern PyObject *const_dict_6e6659be28864e39bad7cab4409b7e16;
extern PyObject *const_str_plain_type;
static PyObject *const_str_plain_diag_indices;
extern PyObject *const_str_plain_asarray;
static PyObject *const_str_plain__t;
extern PyObject *const_str_plain_flags;
static PyObject *const_str_plain_IndexExpression;
static PyObject *const_tuple_type_IndexError_type_TypeError_tuple;
extern PyObject *const_str_plain_f_locals;
static PyObject *const_tuple_str_plain_self_str_plain_maketuple_tuple;
extern PyObject *const_str_plain___iter__;
static PyObject *const_dict_c94aedb3aac0d244f6f14be59f80d888;
static PyObject *const_str_plain_MGridClass;
extern PyObject *const_str_plain_sum;
static PyObject *const_str_plain_CClass;
static PyObject *const_str_plain__diag_indices_from;
extern PyObject *const_str_plain_None;
static PyObject *const_dict_24180b9cdfcea30958fba9a165d5c6dd;
extern PyObject *const_str_plain_ndmin;
static PyObject *const_str_digest_0e72a689a82b574ba7397ec1f496ec9d;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_digest_f7ae5c6cb3e962c7e29d5d553b183af2;
extern PyObject *const_int_neg_1;
static PyObject *const_str_digest_40f1dc3f07fc4b907728e1e1bbce86a6;
extern PyObject *const_str_digest_aa3423acdb6152e259f846c9911226b3;
static PyObject *const_tuple_str_plain_as_strided_tuple;
extern PyObject *const_str_plain_matrix;
extern PyObject *const_str_plain___next__;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_alltrue;
static PyObject *const_tuple_str_plain_self_str_plain_shape_str_plain_x_tuple;
extern PyObject *const_str_plain_slice;
extern PyObject *const_slice_none_none_none;
extern PyObject *const_str_plain_reshape;
extern PyObject *const_str_plain_nditer;
extern PyObject *const_tuple_str_chr_44_tuple;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_split;
static PyObject *const_str_digest_05bf9275b41389b28bc300349e79abab;
static PyObject *const_str_plain_ogrid;
extern PyObject *const_str_plain_a;
static PyObject *const_str_digest_dc389157f25a06c45c9e142fdf180587;
static PyObject *const_str_digest_d685a6f7f529aa109e07a7b645a1f27e;
extern PyObject *const_str_plain_ndindex;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_plain_self_str_plain_sparse_tuple;
extern PyObject *const_str_plain_out;
extern PyObject *const_str_plain_args;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_nonzero;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_nd;
extern PyObject *const_str_plain_strides;
extern PyObject *const_str_plain_typ;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_digest_e0b85dd40506d9fdc856d21937e604a5;
extern PyObject *const_str_plain_array;
extern PyObject *const_str_plain_iter;
extern PyObject *const_str_plain_arr;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_digest_f104ae7867dfcd3f38891fc4f1b7cd57;
extern PyObject *const_str_plain_issubdtype;
extern PyObject *const_str_plain_swapaxes;
extern PyObject *const_int_pos_3;
static PyObject *const_tuple_str_plain_diff_tuple;
extern PyObject *const_str_plain_wrap;
static PyObject *const_tuple_str_plain_find_common_type_str_plain_issubdtype_tuple;
static PyObject *const_str_digest_1f23860369d1fd3c6fbbd33bcd90092f;
extern PyObject *const_str_plain_ravel_multi_index;
extern PyObject *const_str_chr_44;
extern PyObject *const_str_plain_astype;
extern PyObject *const_str_plain_new;
extern PyObject *const_str_plain_transpose;
static PyObject *const_str_digest_4f6ec58bd7ed319799ea7cbde3aac475;
extern PyObject *const_str_digest_9fcf64fa6d087ae015ed561b4aa4b510;
static PyObject *const_tuple_361f8521ee8ea58d6aae1ce28e9e7cd4_tuple;
extern PyObject *const_str_plain_enumerate;
extern PyObject *const_str_plain_indices;
extern PyObject *const_str_plain_makemat;
extern PyObject *const_tuple_str_plain_numpy_tuple;
extern PyObject *const_str_plain_overrides;
extern PyObject *const_str_plain_unravel_index;
extern PyObject *const_tuple_str_plain_self_str_plain_arr_tuple;
extern PyObject *const_tuple_str_plain_set_module_tuple;
extern PyObject *const_str_plain_AxisConcatenator;
extern PyObject *const_str_plain_functools;
static PyObject *const_tuple_int_0_false_int_pos_1_int_neg_1_tuple;
extern PyObject *const_tuple_str_plain_arr_tuple;
extern PyObject *const_str_plain_num;
extern PyObject *const_str_plain_ndarray;
extern PyObject *const_str_plain_object;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_bool_;
static PyObject *const_tuple_8b1d9aa84ab3dd64b4f74b8839645204_tuple;
extern PyObject *const_str_plain_flat;
extern PyObject *const_str_plain_f_back;
extern PyObject *const_str_plain_numeric;
static PyObject *const_str_digest_72f228572a4b978b6085b081f916a8f6;
extern PyObject *const_tuple_str_plain_args_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_item_tuple;
extern PyObject *const_str_plain_C;
extern PyObject *const_str_digest_67205772204d1e33862eb50e826ab1cb;
extern PyObject *const_str_plain_T;
extern PyObject *const_str_digest_82d72071fc1da9db8c6dd31f1049410c;
static PyObject *const_str_digest_100f78b1941f2d5f8f8676cb34ec95e6;
extern PyObject *const_str_plain_end;
extern PyObject *const_str_plain_linspace;
extern PyObject *const_str_plain_f_globals;
extern PyObject *const_str_plain_slobj;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_ndim;
static PyObject *const_list_str_plain_multi_index_str_plain_zerosize_ok_list;
extern PyObject *const_str_plain_array_function_dispatch;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain_False;
static PyObject *const_str_plain_ndenumerate;
static PyObject *const_dict_0d87fdb65ac69f3e7f132f381a92030e;
extern PyObject *const_str_plain_c;
static PyObject *const_tuple_a46c803e52812f2e40cf2cc56ed548dd_tuple;
extern PyObject *const_str_plain_nn;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_item;
static PyObject *const_str_digest_64e7f7113a33cb08bdcf9c7fa75b9a20;
static PyObject *const_dict_28ebf724697f63eaa96dcded742e9de0;
extern PyObject *const_str_plain_r;
static PyObject *const_str_plain_r_;
extern PyObject *const_str_plain_set_module;
extern PyObject *const_str_plain_s_;
extern PyObject *const_str_plain_index_exp;
static PyObject *const_str_digest_ae18caca66ad511d55f1373e7c1a6603;
static PyObject *const_str_plain_maketuple;
static PyObject *const_tuple_str_plain_r_str_plain_c_tuple;
extern PyObject *const_str_plain_diff;
extern PyObject *const_str_plain_bmat;
static PyObject *const_tuple_6523c2d855309bd42e0139597adf03bb_tuple;
extern PyObject *const_str_plain_core;
static PyObject *const_dict_4e0f6bd0fa1bf86b2858b03e8f58c253;
extern PyObject *const_str_plain_newaxis;
extern PyObject *const_str_plain_ceil;
extern PyObject *const_str_plain_ScalarType;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_dict_b4dcb48ac0b3434981963a3b0a181907;
extern PyObject *const_str_plain_key;
static PyObject *const_tuple_str_plain_n_str_plain_ndim_str_plain_idx_tuple;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_complex;
static PyObject *const_str_digest_3eb9b2ce1271918b85093c648f730487;
extern PyObject *const_str_plain_arange;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
static PyObject *const_str_digest_4eb95f63cad044e31c93dcc516197c0d;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_intp;
extern PyObject *const_str_plain_idx;
extern PyObject *const_str_plain___len__;
extern PyObject *const_str_plain_math;
static PyObject *const_str_plain_trans1d;
static PyObject *const_str_digest_768284c408c3a084dbbd31908c895311;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_str_plain_sparse;
extern PyObject *const_str_plain__getframe;
extern PyObject *const_str_plain_stop;
extern PyObject *const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
extern PyObject *const_str_plain_float;
static PyObject *const_str_digest_9fce22252d81f16af5f47d8c67e196f5;
static PyObject *const_str_digest_a332407a4cd6cc926dbf54a127eff824;
static PyObject *const_str_plain_RClass;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_self;
extern PyObject *const_tuple_int_pos_2_tuple;
static PyObject *const_str_digest_4d27999bfd5f6bdb12905dae26741abe;
extern PyObject *const_tuple_false_tuple;
static PyObject *const_tuple_str_plain_a_str_plain_val_str_plain_wrap_tuple;
extern PyObject *const_str_plain_cumprod;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_matrixlib;
extern PyObject *const_str_plain_zeros_like;
extern PyObject *const_tuple_none_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_str_plain_overrides_str_plain_linspace_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_overrides_str_plain_linspace_tuple, 0, const_str_plain_overrides ); Py_INCREF( const_str_plain_overrides );
    PyTuple_SET_ITEM( const_tuple_str_plain_overrides_str_plain_linspace_tuple, 1, const_str_plain_linspace ); Py_INCREF( const_str_plain_linspace );
    const_str_digest_12c1a9c9ac974aef622baf6784c5dccc = UNSTREAM_STRING( &constant_bin[ 1625611 ], 1193, 0 );
    const_str_plain__ix__dispatcher = UNSTREAM_STRING( &constant_bin[ 1626804 ], 15, 1 );
    const_tuple_str_plain_ravel_multi_index_str_plain_unravel_index_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ravel_multi_index_str_plain_unravel_index_tuple, 0, const_str_plain_ravel_multi_index ); Py_INCREF( const_str_plain_ravel_multi_index );
    PyTuple_SET_ITEM( const_tuple_str_plain_ravel_multi_index_str_plain_unravel_index_tuple, 1, const_str_plain_unravel_index ); Py_INCREF( const_str_plain_unravel_index );
    const_str_plain_c_ = UNSTREAM_STRING( &constant_bin[ 47527 ], 2, 1 );
    const_list_fa22549eaa1a878119e86a628980cdb1_list = PyList_New( 14 );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 0, const_str_plain_ravel_multi_index ); Py_INCREF( const_str_plain_ravel_multi_index );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 1, const_str_plain_unravel_index ); Py_INCREF( const_str_plain_unravel_index );
    const_str_plain_mgrid = UNSTREAM_STRING( &constant_bin[ 803340 ], 5, 1 );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 2, const_str_plain_mgrid ); Py_INCREF( const_str_plain_mgrid );
    const_str_plain_ogrid = UNSTREAM_STRING( &constant_bin[ 803280 ], 5, 1 );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 3, const_str_plain_ogrid ); Py_INCREF( const_str_plain_ogrid );
    const_str_plain_r_ = UNSTREAM_STRING( &constant_bin[ 2091 ], 2, 1 );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 4, const_str_plain_r_ ); Py_INCREF( const_str_plain_r_ );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 5, const_str_plain_c_ ); Py_INCREF( const_str_plain_c_ );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 6, const_str_plain_s_ ); Py_INCREF( const_str_plain_s_ );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 7, const_str_plain_index_exp ); Py_INCREF( const_str_plain_index_exp );
    const_str_plain_ix_ = UNSTREAM_STRING( &constant_bin[ 735337 ], 3, 1 );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 8, const_str_plain_ix_ ); Py_INCREF( const_str_plain_ix_ );
    const_str_plain_ndenumerate = UNSTREAM_STRING( &constant_bin[ 1465877 ], 11, 1 );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 9, const_str_plain_ndenumerate ); Py_INCREF( const_str_plain_ndenumerate );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 10, const_str_plain_ndindex ); Py_INCREF( const_str_plain_ndindex );
    const_str_plain_fill_diagonal = UNSTREAM_STRING( &constant_bin[ 1626819 ], 13, 1 );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 11, const_str_plain_fill_diagonal ); Py_INCREF( const_str_plain_fill_diagonal );
    const_str_plain_diag_indices = UNSTREAM_STRING( &constant_bin[ 1626832 ], 12, 1 );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 12, const_str_plain_diag_indices ); Py_INCREF( const_str_plain_diag_indices );
    const_str_plain_diag_indices_from = UNSTREAM_STRING( &constant_bin[ 1626844 ], 17, 1 );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 13, const_str_plain_diag_indices_from ); Py_INCREF( const_str_plain_diag_indices_from );
    const_str_plain_nd_grid = UNSTREAM_STRING( &constant_bin[ 1625672 ], 7, 1 );
    const_str_plain__it = UNSTREAM_STRING( &constant_bin[ 34763 ], 3, 1 );
    const_str_digest_fc8926c182d686d26fd1d5b3b74287d6 = UNSTREAM_STRING( &constant_bin[ 1626861 ], 1268, 0 );
    const_str_plain__fill_diagonal_dispatcher = UNSTREAM_STRING( &constant_bin[ 1628129 ], 25, 1 );
    const_str_digest_10070abaa510b7ab1f69c9f0869da78b = UNSTREAM_STRING( &constant_bin[ 1628154 ], 2301, 0 );
    const_tuple_4cf701b0d8ee733b9cd41c207320714b_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_4cf701b0d8ee733b9cd41c207320714b_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_4cf701b0d8ee733b9cd41c207320714b_tuple, 1, const_str_plain_new ); Py_INCREF( const_str_plain_new );
    PyTuple_SET_ITEM( const_tuple_4cf701b0d8ee733b9cd41c207320714b_tuple, 2, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_4cf701b0d8ee733b9cd41c207320714b_tuple, 3, const_str_plain_nd ); Py_INCREF( const_str_plain_nd );
    PyTuple_SET_ITEM( const_tuple_4cf701b0d8ee733b9cd41c207320714b_tuple, 4, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    const_str_plain_OGridClass = UNSTREAM_STRING( &constant_bin[ 1630455 ], 10, 1 );
    const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple, 2, const_str_plain_matrix ); Py_INCREF( const_str_plain_matrix );
    PyTuple_SET_ITEM( const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple, 3, const_str_plain_ndmin ); Py_INCREF( const_str_plain_ndmin );
    const_str_plain_trans1d = UNSTREAM_STRING( &constant_bin[ 1630465 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple, 4, const_str_plain_trans1d ); Py_INCREF( const_str_plain_trans1d );
    const_str_digest_3e9c4e5fc3ec9f112df1e590712b1ef6 = UNSTREAM_STRING( &constant_bin[ 1630472 ], 31, 0 );
    const_str_digest_e8301c44a94b8eb84989b73baa2e6baa = UNSTREAM_STRING( &constant_bin[ 1630503 ], 1262, 0 );
    const_str_plain_ndincr = UNSTREAM_STRING( &constant_bin[ 1631765 ], 6, 1 );
    const_str_plain__t = UNSTREAM_STRING( &constant_bin[ 36890 ], 2, 1 );
    const_str_plain_IndexExpression = UNSTREAM_STRING( &constant_bin[ 1627032 ], 15, 1 );
    const_tuple_type_IndexError_type_TypeError_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_type_IndexError_type_TypeError_tuple, 0, (PyObject *)PyExc_IndexError ); Py_INCREF( (PyObject *)PyExc_IndexError );
    PyTuple_SET_ITEM( const_tuple_type_IndexError_type_TypeError_tuple, 1, (PyObject *)PyExc_TypeError ); Py_INCREF( (PyObject *)PyExc_TypeError );
    const_tuple_str_plain_self_str_plain_maketuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_maketuple_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_maketuple = UNSTREAM_STRING( &constant_bin[ 1627424 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_maketuple_tuple, 1, const_str_plain_maketuple ); Py_INCREF( const_str_plain_maketuple );
    const_dict_c94aedb3aac0d244f6f14be59f80d888 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_c94aedb3aac0d244f6f14be59f80d888, const_str_plain_sparse, Py_False );
    assert( PyDict_Size( const_dict_c94aedb3aac0d244f6f14be59f80d888 ) == 1 );
    const_str_plain_MGridClass = UNSTREAM_STRING( &constant_bin[ 1631771 ], 10, 1 );
    const_str_plain_CClass = UNSTREAM_STRING( &constant_bin[ 1631781 ], 6, 1 );
    const_str_plain__diag_indices_from = UNSTREAM_STRING( &constant_bin[ 1631787 ], 18, 1 );
    const_dict_24180b9cdfcea30958fba9a165d5c6dd = _PyDict_NewPresized( 2 );
    const_list_str_plain_multi_index_str_plain_zerosize_ok_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_multi_index_str_plain_zerosize_ok_list, 0, const_str_plain_multi_index ); Py_INCREF( const_str_plain_multi_index );
    PyList_SET_ITEM( const_list_str_plain_multi_index_str_plain_zerosize_ok_list, 1, const_str_plain_zerosize_ok ); Py_INCREF( const_str_plain_zerosize_ok );
    PyDict_SetItem( const_dict_24180b9cdfcea30958fba9a165d5c6dd, const_str_plain_flags, const_list_str_plain_multi_index_str_plain_zerosize_ok_list );
    PyDict_SetItem( const_dict_24180b9cdfcea30958fba9a165d5c6dd, const_str_plain_order, const_str_plain_C );
    assert( PyDict_Size( const_dict_24180b9cdfcea30958fba9a165d5c6dd ) == 2 );
    const_str_digest_0e72a689a82b574ba7397ec1f496ec9d = UNSTREAM_STRING( &constant_bin[ 1631805 ], 43, 0 );
    const_str_digest_f7ae5c6cb3e962c7e29d5d553b183af2 = UNSTREAM_STRING( &constant_bin[ 1631848 ], 276, 0 );
    const_str_digest_40f1dc3f07fc4b907728e1e1bbce86a6 = UNSTREAM_STRING( &constant_bin[ 1632124 ], 751, 0 );
    const_tuple_str_plain_as_strided_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_as_strided_tuple, 0, const_str_plain_as_strided ); Py_INCREF( const_str_plain_as_strided );
    const_tuple_str_plain_self_str_plain_shape_str_plain_x_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_shape_str_plain_x_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_shape_str_plain_x_tuple, 1, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_shape_str_plain_x_tuple, 2, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_digest_05bf9275b41389b28bc300349e79abab = UNSTREAM_STRING( &constant_bin[ 1632875 ], 1383, 0 );
    const_str_digest_dc389157f25a06c45c9e142fdf180587 = UNSTREAM_STRING( &constant_bin[ 1634258 ], 33, 0 );
    const_str_digest_d685a6f7f529aa109e07a7b645a1f27e = UNSTREAM_STRING( &constant_bin[ 1634291 ], 26, 0 );
    const_tuple_str_plain_self_str_plain_sparse_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_sparse_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_sparse_tuple, 1, const_str_plain_sparse ); Py_INCREF( const_str_plain_sparse );
    const_str_digest_e0b85dd40506d9fdc856d21937e604a5 = UNSTREAM_STRING( &constant_bin[ 1634317 ], 3821, 0 );
    const_tuple_str_plain_diff_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_diff_tuple, 0, const_str_plain_diff ); Py_INCREF( const_str_plain_diff );
    const_tuple_str_plain_find_common_type_str_plain_issubdtype_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_find_common_type_str_plain_issubdtype_tuple, 0, const_str_plain_find_common_type ); Py_INCREF( const_str_plain_find_common_type );
    PyTuple_SET_ITEM( const_tuple_str_plain_find_common_type_str_plain_issubdtype_tuple, 1, const_str_plain_issubdtype ); Py_INCREF( const_str_plain_issubdtype );
    const_str_digest_1f23860369d1fd3c6fbbd33bcd90092f = UNSTREAM_STRING( &constant_bin[ 1638138 ], 1589, 0 );
    const_str_digest_4f6ec58bd7ed319799ea7cbde3aac475 = UNSTREAM_STRING( &constant_bin[ 1639727 ], 118, 0 );
    const_tuple_361f8521ee8ea58d6aae1ce28e9e7cd4_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_361f8521ee8ea58d6aae1ce28e9e7cd4_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_361f8521ee8ea58d6aae1ce28e9e7cd4_tuple, 1, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    PyTuple_SET_ITEM( const_tuple_361f8521ee8ea58d6aae1ce28e9e7cd4_tuple, 2, const_str_plain_wrap ); Py_INCREF( const_str_plain_wrap );
    PyTuple_SET_ITEM( const_tuple_361f8521ee8ea58d6aae1ce28e9e7cd4_tuple, 3, const_str_plain_step ); Py_INCREF( const_str_plain_step );
    PyTuple_SET_ITEM( const_tuple_361f8521ee8ea58d6aae1ce28e9e7cd4_tuple, 4, const_str_plain_end ); Py_INCREF( const_str_plain_end );
    const_tuple_int_0_false_int_pos_1_int_neg_1_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_int_0_false_int_pos_1_int_neg_1_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_false_int_pos_1_int_neg_1_tuple, 1, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_int_0_false_int_pos_1_int_neg_1_tuple, 2, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_int_0_false_int_pos_1_int_neg_1_tuple, 3, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    const_tuple_8b1d9aa84ab3dd64b4f74b8839645204_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_8b1d9aa84ab3dd64b4f74b8839645204_tuple, 0, const_str_plain_asarray ); Py_INCREF( const_str_plain_asarray );
    PyTuple_SET_ITEM( const_tuple_8b1d9aa84ab3dd64b4f74b8839645204_tuple, 1, const_str_plain_ScalarType ); Py_INCREF( const_str_plain_ScalarType );
    PyTuple_SET_ITEM( const_tuple_8b1d9aa84ab3dd64b4f74b8839645204_tuple, 2, const_str_plain_array ); Py_INCREF( const_str_plain_array );
    PyTuple_SET_ITEM( const_tuple_8b1d9aa84ab3dd64b4f74b8839645204_tuple, 3, const_str_plain_alltrue ); Py_INCREF( const_str_plain_alltrue );
    PyTuple_SET_ITEM( const_tuple_8b1d9aa84ab3dd64b4f74b8839645204_tuple, 4, const_str_plain_cumprod ); Py_INCREF( const_str_plain_cumprod );
    PyTuple_SET_ITEM( const_tuple_8b1d9aa84ab3dd64b4f74b8839645204_tuple, 5, const_str_plain_arange ); Py_INCREF( const_str_plain_arange );
    PyTuple_SET_ITEM( const_tuple_8b1d9aa84ab3dd64b4f74b8839645204_tuple, 6, const_str_plain_ndim ); Py_INCREF( const_str_plain_ndim );
    const_str_digest_72f228572a4b978b6085b081f916a8f6 = UNSTREAM_STRING( &constant_bin[ 1639845 ], 58, 0 );
    const_tuple_str_plain_self_str_plain_item_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_item_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_item_tuple, 1, const_str_plain_item ); Py_INCREF( const_str_plain_item );
    const_str_digest_100f78b1941f2d5f8f8676cb34ec95e6 = UNSTREAM_STRING( &constant_bin[ 1639903 ], 597, 0 );
    const_dict_0d87fdb65ac69f3e7f132f381a92030e = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_0d87fdb65ac69f3e7f132f381a92030e, const_str_plain_maketuple, Py_True );
    assert( PyDict_Size( const_dict_0d87fdb65ac69f3e7f132f381a92030e ) == 1 );
    const_tuple_a46c803e52812f2e40cf2cc56ed548dd_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_a46c803e52812f2e40cf2cc56ed548dd_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_a46c803e52812f2e40cf2cc56ed548dd_tuple, 1, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_a46c803e52812f2e40cf2cc56ed548dd_tuple, 2, const_str_plain_nn ); Py_INCREF( const_str_plain_nn );
    PyTuple_SET_ITEM( const_tuple_a46c803e52812f2e40cf2cc56ed548dd_tuple, 3, const_str_plain__x ); Py_INCREF( const_str_plain__x );
    PyTuple_SET_ITEM( const_tuple_a46c803e52812f2e40cf2cc56ed548dd_tuple, 4, const_str_plain__t ); Py_INCREF( const_str_plain__t );
    PyTuple_SET_ITEM( const_tuple_a46c803e52812f2e40cf2cc56ed548dd_tuple, 5, const_str_plain_stop ); Py_INCREF( const_str_plain_stop );
    PyTuple_SET_ITEM( const_tuple_a46c803e52812f2e40cf2cc56ed548dd_tuple, 6, const_str_plain_length ); Py_INCREF( const_str_plain_length );
    PyTuple_SET_ITEM( const_tuple_a46c803e52812f2e40cf2cc56ed548dd_tuple, 7, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_a46c803e52812f2e40cf2cc56ed548dd_tuple, 8, const_str_plain_step ); Py_INCREF( const_str_plain_step );
    PyTuple_SET_ITEM( const_tuple_a46c803e52812f2e40cf2cc56ed548dd_tuple, 9, const_str_plain_slobj ); Py_INCREF( const_str_plain_slobj );
    PyTuple_SET_ITEM( const_tuple_a46c803e52812f2e40cf2cc56ed548dd_tuple, 10, const_str_plain_typ ); Py_INCREF( const_str_plain_typ );
    PyTuple_SET_ITEM( const_tuple_a46c803e52812f2e40cf2cc56ed548dd_tuple, 11, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_a46c803e52812f2e40cf2cc56ed548dd_tuple, 12, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    const_str_digest_64e7f7113a33cb08bdcf9c7fa75b9a20 = UNSTREAM_STRING( &constant_bin[ 1640500 ], 249, 0 );
    const_dict_28ebf724697f63eaa96dcded742e9de0 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_28ebf724697f63eaa96dcded742e9de0, const_str_plain_sparse, Py_True );
    assert( PyDict_Size( const_dict_28ebf724697f63eaa96dcded742e9de0 ) == 1 );
    const_str_digest_ae18caca66ad511d55f1373e7c1a6603 = UNSTREAM_STRING( &constant_bin[ 1640749 ], 47, 0 );
    const_tuple_str_plain_r_str_plain_c_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_r_str_plain_c_tuple, 0, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_str_plain_r_str_plain_c_tuple, 1, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    const_tuple_6523c2d855309bd42e0139597adf03bb_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 1640796 ], 317 );
    const_dict_4e0f6bd0fa1bf86b2858b03e8f58c253 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_4e0f6bd0fa1bf86b2858b03e8f58c253, const_str_plain_trans1d, const_int_0 );
    PyDict_SetItem( const_dict_4e0f6bd0fa1bf86b2858b03e8f58c253, const_str_plain_ndmin, const_int_pos_2 );
    assert( PyDict_Size( const_dict_4e0f6bd0fa1bf86b2858b03e8f58c253 ) == 2 );
    const_dict_b4dcb48ac0b3434981963a3b0a181907 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_b4dcb48ac0b3434981963a3b0a181907, const_str_plain_maketuple, Py_False );
    assert( PyDict_Size( const_dict_b4dcb48ac0b3434981963a3b0a181907 ) == 1 );
    const_tuple_str_plain_n_str_plain_ndim_str_plain_idx_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_ndim_str_plain_idx_tuple, 0, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_ndim_str_plain_idx_tuple, 1, const_str_plain_ndim ); Py_INCREF( const_str_plain_ndim );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_ndim_str_plain_idx_tuple, 2, const_str_plain_idx ); Py_INCREF( const_str_plain_idx );
    const_str_digest_3eb9b2ce1271918b85093c648f730487 = UNSTREAM_STRING( &constant_bin[ 1641113 ], 132, 0 );
    const_str_digest_4eb95f63cad044e31c93dcc516197c0d = UNSTREAM_STRING( &constant_bin[ 1641245 ], 1576, 0 );
    const_str_digest_768284c408c3a084dbbd31908c895311 = UNSTREAM_STRING( &constant_bin[ 1642821 ], 25, 0 );
    const_str_digest_9fce22252d81f16af5f47d8c67e196f5 = UNSTREAM_STRING( &constant_bin[ 1642846 ], 32, 0 );
    const_str_digest_a332407a4cd6cc926dbf54a127eff824 = UNSTREAM_STRING( &constant_bin[ 1642878 ], 280, 0 );
    const_str_plain_RClass = UNSTREAM_STRING( &constant_bin[ 1643158 ], 6, 1 );
    const_str_digest_4d27999bfd5f6bdb12905dae26741abe = UNSTREAM_STRING( &constant_bin[ 1643164 ], 421, 0 );
    const_tuple_str_plain_a_str_plain_val_str_plain_wrap_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_val_str_plain_wrap_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_val_str_plain_wrap_tuple, 1, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_val_str_plain_wrap_tuple, 2, const_str_plain_wrap ); Py_INCREF( const_str_plain_wrap );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$lib$index_tricks( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_6f9a5b7b62ba49567e39ae003eb43bf4;
static PyCodeObject *codeobj_ab9d4334dbe3086e5d3385f1368524e9;
static PyCodeObject *codeobj_8165914d6eb2820a2b48f867e160141c;
static PyCodeObject *codeobj_ee1e3dbc441c9e366c0de8d04721722d;
static PyCodeObject *codeobj_517acd3568f021fe2bee67d4dd826ce5;
static PyCodeObject *codeobj_56e753519eceff546d27957b803b5e67;
static PyCodeObject *codeobj_18e3cc71cc5d3c9f13b78442b889f692;
static PyCodeObject *codeobj_4170fc3349084921f0c254a55d8f31a6;
static PyCodeObject *codeobj_cd154c8f9066f1e9c894bd6fe9767aae;
static PyCodeObject *codeobj_2c7028226c767c9125c05937ac4230be;
static PyCodeObject *codeobj_8b4f8611bc7c474c37951a950fa1930b;
static PyCodeObject *codeobj_f80bba10489919ef0e16e9d0214f1893;
static PyCodeObject *codeobj_918f8fea7417c0a2273456875a588f44;
static PyCodeObject *codeobj_4e20cd1670023c7293a2b0b2bb9f42ce;
static PyCodeObject *codeobj_1f8448b512279101876b3679298473af;
static PyCodeObject *codeobj_d107a83379f0fcb186347fe01810c71f;
static PyCodeObject *codeobj_fff1bee415750dfbe468327f06a4c392;
static PyCodeObject *codeobj_7008f10fc7e223b5df75d4d28834a215;
static PyCodeObject *codeobj_0ed8016e12b1f9b3ad0d85ab097172cb;
static PyCodeObject *codeobj_2c6e1487167a05e485820859d636a3d7;
static PyCodeObject *codeobj_a5c2207c9f05e013be473174fede9e72;
static PyCodeObject *codeobj_1f44aa8746a5fbecd3ebba45abf2ebf3;
static PyCodeObject *codeobj_2f3b14b425e1b34aea724d91d2a2e8c6;
static PyCodeObject *codeobj_280db1a390c592a8ad8f93b1745f8461;
static PyCodeObject *codeobj_bff16a04dc3fa084881a4cc5dfe8d590;
static PyCodeObject *codeobj_b4f3bd780014484a8ca912f9e27a8d65;
static PyCodeObject *codeobj_7f6ee236428b5c4a8469969ecbe1c2ad;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_72f228572a4b978b6085b081f916a8f6;
    codeobj_6f9a5b7b62ba49567e39ae003eb43bf4 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_3e9c4e5fc3ec9f112df1e590712b1ef6, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ab9d4334dbe3086e5d3385f1368524e9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_AxisConcatenator, 300, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8165914d6eb2820a2b48f867e160141c = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getitem__, 147, const_tuple_a46c803e52812f2e40cf2cc56ed548dd_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ee1e3dbc441c9e366c0de8d04721722d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getitem__, 316, const_tuple_6523c2d855309bd42e0139597adf03bb_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_517acd3568f021fe2bee67d4dd826ce5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getitem__, 729, const_tuple_str_plain_self_str_plain_item_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_56e753519eceff546d27957b803b5e67 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 144, const_tuple_str_plain_self_str_plain_sparse_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_18e3cc71cc5d3c9f13b78442b889f692 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 251, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4170fc3349084921f0c254a55d8f31a6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 294, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_cd154c8f9066f1e9c894bd6fe9767aae = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 310, const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2c7028226c767c9125c05937ac4230be = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 515, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8b4f8611bc7c474c37951a950fa1930b = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 545, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f80bba10489919ef0e16e9d0214f1893 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 580, const_tuple_str_plain_self_str_plain_arr_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_918f8fea7417c0a2273456875a588f44 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 634, const_tuple_str_plain_self_str_plain_shape_str_plain_x_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4e20cd1670023c7293a2b0b2bb9f42ce = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 726, const_tuple_str_plain_self_str_plain_maketuple_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1f8448b512279101876b3679298473af = MAKE_CODEOBJ( module_filename_obj, const_str_plain___iter__, 597, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d107a83379f0fcb186347fe01810c71f = MAKE_CODEOBJ( module_filename_obj, const_str_plain___iter__, 642, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fff1bee415750dfbe468327f06a4c392 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___len__, 413, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7008f10fc7e223b5df75d4d28834a215 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___next__, 583, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0ed8016e12b1f9b3ad0d85ab097172cb = MAKE_CODEOBJ( module_filename_obj, const_str_plain___next__, 653, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2c6e1487167a05e485820859d636a3d7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__diag_indices_from, 933, const_tuple_str_plain_arr_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a5c2207c9f05e013be473174fede9e72 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fill_diagonal_dispatcher, 745, const_tuple_str_plain_a_str_plain_val_str_plain_wrap_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1f44aa8746a5fbecd3ebba45abf2ebf3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__ix__dispatcher, 32, const_tuple_str_plain_args_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2f3b14b425e1b34aea724d91d2a2e8c6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_diag_indices, 864, const_tuple_str_plain_n_str_plain_ndim_str_plain_idx_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_280db1a390c592a8ad8f93b1745f8461 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_diag_indices_from, 937, const_tuple_str_plain_arr_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_bff16a04dc3fa084881a4cc5dfe8d590 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fill_diagonal, 749, const_tuple_361f8521ee8ea58d6aae1ce28e9e7cd4_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b4f3bd780014484a8ca912f9e27a8d65 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ix_, 36, const_tuple_4cf701b0d8ee733b9cd41c207320714b_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7f6ee236428b5c4a8469969ecbe1c2ad = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ndincr, 645, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_10___init__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_11___init__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_12___init__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_13___next__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_14___iter__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_15___init__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_16___iter__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_17_ndincr(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_18___next__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_19___init__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_1__ix__dispatcher(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_20___getitem__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_21__fill_diagonal_dispatcher( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_22_fill_diagonal( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_23_diag_indices( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_24__diag_indices_from(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_25_diag_indices_from(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_2_ix_(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_3___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_4___getitem__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_5___init__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_6___init__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_7___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_8___getitem__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_9___len__(  );


// The module function definitions.
static PyObject *impl_numpy$lib$index_tricks$$$function_1__ix__dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    CHECK_OBJECT( par_args );
    tmp_return_value = par_args;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_1__ix__dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_1__ix__dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$index_tricks$$$function_2_ix_( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *var_new = NULL;
    PyObject *var_k = NULL;
    PyObject *var_nd = NULL;
    PyObject *var_out = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_b4f3bd780014484a8ca912f9e27a8d65;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b4f3bd780014484a8ca912f9e27a8d65 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New( 0 );
        assert( var_out == NULL );
        var_out = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b4f3bd780014484a8ca912f9e27a8d65, codeobj_b4f3bd780014484a8ca912f9e27a8d65, module_numpy$lib$index_tricks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b4f3bd780014484a8ca912f9e27a8d65 = cache_frame_b4f3bd780014484a8ca912f9e27a8d65;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b4f3bd780014484a8ca912f9e27a8d65 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b4f3bd780014484a8ca912f9e27a8d65 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_args );
        tmp_len_arg_1 = par_args;
        tmp_assign_source_2 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_nd == NULL );
        var_nd = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT( par_args );
        tmp_args_element_name_1 = par_args;
        frame_b4f3bd780014484a8ca912f9e27a8d65->m_frame.f_lineno = 96;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooo";
                exception_lineno = 96;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_1, 0 );
        if ( tmp_assign_source_6 == NULL )
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
            exception_lineno = 96;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


            type_description_1 = "ooooo";
            exception_lineno = 96;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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

                    type_description_1 = "ooooo";
                    exception_lineno = 96;
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

            type_description_1 = "ooooo";
            exception_lineno = 96;
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
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_8;
            Py_INCREF( var_k );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_new;
            var_new = tmp_assign_source_9;
            Py_INCREF( var_new );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_asarray );

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

            exception_lineno = 97;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = tmp_mvar_value_1;
        CHECK_OBJECT( var_new );
        tmp_args_element_name_2 = var_new;
        frame_b4f3bd780014484a8ca912f9e27a8d65->m_frame.f_lineno = 97;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_new;
            assert( old != NULL );
            var_new = tmp_assign_source_10;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( var_new );
        tmp_source_name_1 = var_new;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "ooooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_dc389157f25a06c45c9e142fdf180587;
            frame_b4f3bd780014484a8ca912f9e27a8d65->m_frame.f_lineno = 99;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 99;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( var_new );
        tmp_source_name_2 = var_new;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_size );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ooooo";
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
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_2;
            CHECK_OBJECT( var_new );
            tmp_source_name_3 = var_new;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_astype );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 102;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
                exception_tb = NULL;

                exception_lineno = 102;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_4 = tmp_mvar_value_2;
            tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_intp );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 102;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            frame_b4f3bd780014484a8ca912f9e27a8d65->m_frame.f_lineno = 102;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 102;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_new;
                assert( old != NULL );
                var_new = tmp_assign_source_11;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_4;
        int tmp_truth_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_issubdtype );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_issubdtype );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "issubdtype" );
            exception_tb = NULL;

            exception_lineno = 103;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_4 = tmp_mvar_value_3;
        CHECK_OBJECT( var_new );
        tmp_source_name_5 = var_new;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_args_element_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
            exception_tb = NULL;

            exception_lineno = 103;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_6 = tmp_mvar_value_4;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_bool_ );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 103;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_b4f3bd780014484a8ca912f9e27a8d65->m_frame.f_lineno = 103;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 103;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
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
            PyObject *tmp_assign_source_12;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( var_new );
            tmp_called_instance_1 = var_new;
            frame_b4f3bd780014484a8ca912f9e27a8d65->m_frame.f_lineno = 104;
            tmp_iter_arg_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_nonzero );
            if ( tmp_iter_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }
            tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_3 );
            Py_DECREF( tmp_iter_arg_3 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__source_iter;
                tmp_tuple_unpack_2__source_iter = tmp_assign_source_12;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_3, 0 );
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


                type_description_1 = "ooooo";
                exception_lineno = 104;
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_1;
                tmp_tuple_unpack_2__element_1 = tmp_assign_source_13;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

            tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

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
                        exception_lineno = 104;
                        goto try_except_handler_6;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooo";
                exception_lineno = 104;
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_5;
        // End of try:
        try_end_3:;
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

        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_2;
        // End of try:
        try_end_4:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_14 = tmp_tuple_unpack_2__element_1;
            {
                PyObject *old = var_new;
                assert( old != NULL );
                var_new = tmp_assign_source_14;
                Py_INCREF( var_new );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_7;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_8;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        if ( var_new == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "new" );
            exception_tb = NULL;

            exception_lineno = 105;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_7 = var_new;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_reshape );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_3 = const_tuple_int_pos_1_tuple;
        CHECK_OBJECT( var_k );
        tmp_right_name_1 = var_k;
        tmp_left_name_2 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 105;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        if ( var_new == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_left_name_2 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "new" );
            exception_tb = NULL;

            exception_lineno = 105;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_8 = var_new;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_size );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 105;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_2 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_1 );
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_TUPLE( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 105;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_4 = const_tuple_int_pos_1_tuple;
        CHECK_OBJECT( var_nd );
        tmp_left_name_6 = var_nd;
        CHECK_OBJECT( var_k );
        tmp_right_name_5 = var_k;
        tmp_left_name_5 = BINARY_OPERATION_SUB( tmp_left_name_6, tmp_right_name_5 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 105;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_6 = const_int_pos_1;
        tmp_right_name_4 = BINARY_OPERATION_SUB( tmp_left_name_5, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_5 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 105;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_3 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 105;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 105;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_b4f3bd780014484a8ca912f9e27a8d65->m_frame.f_lineno = 105;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_new;
            var_new = tmp_assign_source_15;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( var_out );
        tmp_called_instance_2 = var_out;
        CHECK_OBJECT( var_new );
        tmp_args_element_name_7 = var_new;
        frame_b4f3bd780014484a8ca912f9e27a8d65->m_frame.f_lineno = 106;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_append, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 106;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_2:;
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
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_tuple_arg_1;
        CHECK_OBJECT( var_out );
        tmp_tuple_arg_1 = var_out;
        tmp_return_value = PySequence_Tuple( tmp_tuple_arg_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4f3bd780014484a8ca912f9e27a8d65 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4f3bd780014484a8ca912f9e27a8d65 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4f3bd780014484a8ca912f9e27a8d65 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b4f3bd780014484a8ca912f9e27a8d65, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b4f3bd780014484a8ca912f9e27a8d65->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b4f3bd780014484a8ca912f9e27a8d65, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b4f3bd780014484a8ca912f9e27a8d65,
        type_description_1,
        par_args,
        var_new,
        var_k,
        var_nd,
        var_out
    );


    // Release cached frame.
    if ( frame_b4f3bd780014484a8ca912f9e27a8d65 == cache_frame_b4f3bd780014484a8ca912f9e27a8d65 )
    {
        Py_DECREF( frame_b4f3bd780014484a8ca912f9e27a8d65 );
    }
    cache_frame_b4f3bd780014484a8ca912f9e27a8d65 = NULL;

    assertFrameObject( frame_b4f3bd780014484a8ca912f9e27a8d65 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_2_ix_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_new );
    var_new = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)var_nd );
    Py_DECREF( var_nd );
    var_nd = NULL;

    CHECK_OBJECT( (PyObject *)var_out );
    Py_DECREF( var_out );
    var_out = NULL;

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

    Py_XDECREF( var_new );
    var_new = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_nd );
    var_nd = NULL;

    CHECK_OBJECT( (PyObject *)var_out );
    Py_DECREF( var_out );
    var_out = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_2_ix_ );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_3___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_sparse = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_56e753519eceff546d27957b803b5e67;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_56e753519eceff546d27957b803b5e67 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_56e753519eceff546d27957b803b5e67, codeobj_56e753519eceff546d27957b803b5e67, module_numpy$lib$index_tricks, sizeof(void *)+sizeof(void *) );
    frame_56e753519eceff546d27957b803b5e67 = cache_frame_56e753519eceff546d27957b803b5e67;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_56e753519eceff546d27957b803b5e67 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_56e753519eceff546d27957b803b5e67 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_sparse );
        tmp_assattr_name_1 = par_sparse;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_sparse, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 145;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_56e753519eceff546d27957b803b5e67 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_56e753519eceff546d27957b803b5e67 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_56e753519eceff546d27957b803b5e67, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_56e753519eceff546d27957b803b5e67->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_56e753519eceff546d27957b803b5e67, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_56e753519eceff546d27957b803b5e67,
        type_description_1,
        par_self,
        par_sparse
    );


    // Release cached frame.
    if ( frame_56e753519eceff546d27957b803b5e67 == cache_frame_56e753519eceff546d27957b803b5e67 )
    {
        Py_DECREF( frame_56e753519eceff546d27957b803b5e67 );
    }
    cache_frame_56e753519eceff546d27957b803b5e67 = NULL;

    assertFrameObject( frame_56e753519eceff546d27957b803b5e67 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_3___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_sparse );
    Py_DECREF( par_sparse );
    par_sparse = NULL;

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

    CHECK_OBJECT( (PyObject *)par_sparse );
    Py_DECREF( par_sparse );
    par_sparse = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_3___init__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_4___getitem__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    PyObject *var_nn = NULL;
    PyObject *var__x = NULL;
    PyObject *var__t = NULL;
    PyObject *var_stop = NULL;
    PyObject *var_length = NULL;
    PyObject *var_start = NULL;
    PyObject *var_step = NULL;
    PyObject *var_slobj = NULL;
    PyObject *var_typ = NULL;
    PyObject *var_k = NULL;
    PyObject *var_size = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_8165914d6eb2820a2b48f867e160141c;
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
    bool tmp_result;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8165914d6eb2820a2b48f867e160141c = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New( 0 );
        assert( var_size == NULL );
        var_size = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = (PyObject *)&PyInt_Type;
        assert( var_typ == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_typ = tmp_assign_source_2;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8165914d6eb2820a2b48f867e160141c, codeobj_8165914d6eb2820a2b48f867e160141c, module_numpy$lib$index_tricks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8165914d6eb2820a2b48f867e160141c = cache_frame_8165914d6eb2820a2b48f867e160141c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8165914d6eb2820a2b48f867e160141c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8165914d6eb2820a2b48f867e160141c ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_range_arg_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_key );
        tmp_len_arg_1 = par_key;
        tmp_range_arg_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_range_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
        Py_DECREF( tmp_range_arg_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooo";
                exception_lineno = 151;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_5;
            Py_INCREF( var_k );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_key );
        tmp_subscribed_name_1 = par_key;
        CHECK_OBJECT( var_k );
        tmp_subscript_name_1 = var_k;
        tmp_source_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_step );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_step;
            var_step = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_source_name_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( par_key );
        tmp_subscribed_name_2 = par_key;
        CHECK_OBJECT( var_k );
        tmp_subscript_name_2 = var_k;
        tmp_source_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_start );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_start;
            var_start = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_start );
        tmp_compexpr_left_1 = var_start;
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
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = const_int_0;
            {
                PyObject *old = var_start;
                assert( old != NULL );
                var_start = tmp_assign_source_8;
                Py_INCREF( var_start );
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_step );
        tmp_compexpr_left_2 = var_step;
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
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = const_int_pos_1;
            {
                PyObject *old = var_step;
                assert( old != NULL );
                var_step = tmp_assign_source_9;
                Py_INCREF( var_step );
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( var_step );
        tmp_isinstance_inst_1 = var_step;
        tmp_isinstance_cls_1 = (PyObject *)&PyComplex_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_int_arg_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( var_size );
            tmp_source_name_3 = var_size;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 159;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_3;
            }
            tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_abs );
            assert( tmp_called_name_2 != NULL );
            CHECK_OBJECT( var_step );
            tmp_args_element_name_2 = var_step;
            frame_8165914d6eb2820a2b48f867e160141c->m_frame.f_lineno = 159;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_int_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_int_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 159;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_3;
            }
            tmp_args_element_name_1 = PyNumber_Int( tmp_int_arg_1 );
            Py_DECREF( tmp_int_arg_1 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 159;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_3;
            }
            frame_8165914d6eb2820a2b48f867e160141c->m_frame.f_lineno = 159;
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


                exception_lineno = 159;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_3;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = (PyObject *)&PyFloat_Type;
            {
                PyObject *old = var_typ;
                var_typ = tmp_assign_source_10;
                Py_INCREF( var_typ );
                Py_XDECREF( old );
            }

        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_int_arg_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_source_name_6;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_right_name_1;
            PyObject *tmp_right_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            CHECK_OBJECT( var_size );
            tmp_source_name_4 = var_size;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 162;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_3;
            }
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_math );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_math );
            }

            if ( tmp_mvar_value_1 == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "math" );
                exception_tb = NULL;

                exception_lineno = 163;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_3;
            }

            tmp_source_name_5 = tmp_mvar_value_1;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ceil );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 163;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( par_key );
            tmp_subscribed_name_3 = par_key;
            CHECK_OBJECT( var_k );
            tmp_subscript_name_3 = var_k;
            tmp_source_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_source_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 163;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_3;
            }
            tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_stop );
            Py_DECREF( tmp_source_name_6 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 163;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( var_start );
            tmp_right_name_1 = var_start;
            tmp_left_name_1 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 163;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( var_step );
            tmp_left_name_3 = var_step;
            tmp_right_name_3 = const_float_1_0;
            tmp_right_name_2 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 163;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_3;
            }
            tmp_args_element_name_4 = BINARY_OPERATION_TRUEDIV( tmp_left_name_1, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 163;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_3;
            }
            frame_8165914d6eb2820a2b48f867e160141c->m_frame.f_lineno = 163;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_int_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_int_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 163;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_3;
            }
            tmp_args_element_name_3 = PyNumber_Int( tmp_int_arg_2 );
            Py_DECREF( tmp_int_arg_2 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 163;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_3;
            }
            frame_8165914d6eb2820a2b48f867e160141c->m_frame.f_lineno = 162;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 162;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_3;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_end_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        PyObject *tmp_isinstance_inst_4;
        PyObject *tmp_isinstance_cls_4;
        PyObject *tmp_source_name_7;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT( var_step );
        tmp_isinstance_inst_2 = var_step;
        tmp_isinstance_cls_2 = (PyObject *)&PyFloat_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
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
        CHECK_OBJECT( var_start );
        tmp_isinstance_inst_3 = var_start;
        tmp_isinstance_cls_3 = (PyObject *)&PyFloat_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_or_left_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_2 == 1 )
        {
            goto or_left_2;
        }
        else
        {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT( par_key );
        tmp_subscribed_name_4 = par_key;
        CHECK_OBJECT( var_k );
        tmp_subscript_name_4 = var_k;
        tmp_source_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_source_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_isinstance_inst_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_stop );
        Py_DECREF( tmp_source_name_7 );
        if ( tmp_isinstance_inst_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_isinstance_cls_4 = (PyObject *)&PyFloat_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_4, tmp_isinstance_cls_4 );
        Py_DECREF( tmp_isinstance_inst_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_or_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
        tmp_condition_result_4 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_4 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = (PyObject *)&PyFloat_Type;
            {
                PyObject *old = var_typ;
                var_typ = tmp_assign_source_11;
                Py_INCREF( var_typ );
                Py_XDECREF( old );
            }

        }
        branch_no_4:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_source_name_8;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_sparse );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 168;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_5 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_12;
            // Tried code:
            {
                PyObject *tmp_assign_source_13;
                PyObject *tmp_iter_arg_2;
                PyObject *tmp_called_name_5;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_left_name_4;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_right_name_4;
                PyObject *tmp_len_arg_2;
                tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_zip );
                assert( tmp_called_name_5 != NULL );
                CHECK_OBJECT( var_size );
                tmp_args_element_name_5 = var_size;
                if ( var_typ == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "typ" );
                    exception_tb = NULL;

                    exception_lineno = 170;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_4;
                }

                tmp_tuple_element_1 = var_typ;
                tmp_left_name_4 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_left_name_4, 0, tmp_tuple_element_1 );
                CHECK_OBJECT( var_size );
                tmp_len_arg_2 = var_size;
                tmp_right_name_4 = BUILTIN_LEN( tmp_len_arg_2 );
                assert( !(tmp_right_name_4 == NULL) );
                tmp_args_element_name_6 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_left_name_4 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_args_element_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 170;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_4;
                }
                frame_8165914d6eb2820a2b48f867e160141c->m_frame.f_lineno = 170;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
                }

                Py_DECREF( tmp_args_element_name_6 );
                if ( tmp_iter_arg_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 170;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_4;
                }
                tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_2 );
                Py_DECREF( tmp_iter_arg_2 );
                if ( tmp_assign_source_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 169;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_4;
                }
                assert( tmp_list_contraction_1__$0 == NULL );
                tmp_list_contraction_1__$0 = tmp_assign_source_13;
            }
            {
                PyObject *tmp_assign_source_14;
                tmp_assign_source_14 = PyList_New( 0 );
                assert( tmp_list_contraction_1__contraction_result == NULL );
                tmp_list_contraction_1__contraction_result = tmp_assign_source_14;
            }
            loop_start_2:;
            {
                PyObject *tmp_next_source_2;
                PyObject *tmp_assign_source_15;
                CHECK_OBJECT( tmp_list_contraction_1__$0 );
                tmp_next_source_2 = tmp_list_contraction_1__$0;
                tmp_assign_source_15 = ITERATOR_NEXT( tmp_next_source_2 );
                if ( tmp_assign_source_15 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_2;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ooooooooooooo";
                        exception_lineno = 169;
                        goto try_except_handler_4;
                    }
                }

                {
                    PyObject *old = tmp_list_contraction_1__iter_value_0;
                    tmp_list_contraction_1__iter_value_0 = tmp_assign_source_15;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_16;
                PyObject *tmp_iter_arg_3;
                CHECK_OBJECT( tmp_list_contraction_1__iter_value_0 );
                tmp_iter_arg_3 = tmp_list_contraction_1__iter_value_0;
                tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_3 );
                if ( tmp_assign_source_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 169;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_5;
                }
                {
                    PyObject *old = tmp_tuple_unpack_1__source_iter;
                    tmp_tuple_unpack_1__source_iter = tmp_assign_source_16;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_17;
                PyObject *tmp_unpack_1;
                CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
                tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
                tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_1, 0 );
                if ( tmp_assign_source_17 == NULL )
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


                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 169;
                    goto try_except_handler_6;
                }
                {
                    PyObject *old = tmp_tuple_unpack_1__element_1;
                    tmp_tuple_unpack_1__element_1 = tmp_assign_source_17;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_18;
                PyObject *tmp_unpack_2;
                CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
                tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
                tmp_assign_source_18 = UNPACK_NEXT( tmp_unpack_2, 1 );
                if ( tmp_assign_source_18 == NULL )
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


                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 169;
                    goto try_except_handler_6;
                }
                {
                    PyObject *old = tmp_tuple_unpack_1__element_2;
                    tmp_tuple_unpack_1__element_2 = tmp_assign_source_18;
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

                            type_description_1 = "ooooooooooooo";
                            exception_lineno = 169;
                            goto try_except_handler_6;
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

                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 169;
                    goto try_except_handler_6;
                }
            }
            goto try_end_2;
            // Exception handler code:
            try_except_handler_6:;
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

            goto try_except_handler_5;
            // End of try:
            try_end_2:;
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

            Py_XDECREF( tmp_tuple_unpack_1__element_1 );
            tmp_tuple_unpack_1__element_1 = NULL;

            Py_XDECREF( tmp_tuple_unpack_1__element_2 );
            tmp_tuple_unpack_1__element_2 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_3;
            exception_value = exception_keeper_value_3;
            exception_tb = exception_keeper_tb_3;
            exception_lineno = exception_keeper_lineno_3;

            goto try_except_handler_4;
            // End of try:
            try_end_3:;
            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
            Py_DECREF( tmp_tuple_unpack_1__source_iter );
            tmp_tuple_unpack_1__source_iter = NULL;

            {
                PyObject *tmp_assign_source_19;
                CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
                tmp_assign_source_19 = tmp_tuple_unpack_1__element_1;
                {
                    PyObject *old = var__x;
                    var__x = tmp_assign_source_19;
                    Py_INCREF( var__x );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_1__element_1 );
            tmp_tuple_unpack_1__element_1 = NULL;

            {
                PyObject *tmp_assign_source_20;
                CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
                tmp_assign_source_20 = tmp_tuple_unpack_1__element_2;
                {
                    PyObject *old = var__t;
                    var__t = tmp_assign_source_20;
                    Py_INCREF( var__t );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_1__element_2 );
            tmp_tuple_unpack_1__element_2 = NULL;

            {
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                PyObject *tmp_called_name_6;
                PyObject *tmp_source_name_9;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_name_1;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_kw_name_1;
                PyObject *tmp_dict_key_1;
                PyObject *tmp_dict_value_1;
                CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
                tmp_append_list_1 = tmp_list_contraction_1__contraction_result;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

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

                    exception_lineno = 169;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_4;
                }

                tmp_source_name_9 = tmp_mvar_value_2;
                tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_arange );
                if ( tmp_called_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 169;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( var__x );
                tmp_tuple_element_2 = var__x;
                tmp_args_name_1 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
                CHECK_OBJECT( var__t );
                tmp_dict_value_1 = var__t;
                tmp_dict_key_1 = const_str_plain_dtype;
                tmp_kw_name_1 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
                assert( !(tmp_res != 0) );
                frame_8165914d6eb2820a2b48f867e160141c->m_frame.f_lineno = 169;
                tmp_append_value_1 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_1, tmp_kw_name_1 );
                Py_DECREF( tmp_called_name_6 );
                Py_DECREF( tmp_args_name_1 );
                Py_DECREF( tmp_kw_name_1 );
                if ( tmp_append_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 169;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_4;
                }
                assert( PyList_Check( tmp_append_list_1 ) );
                tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
                Py_DECREF( tmp_append_value_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 169;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_4;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 169;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_4;
            }
            goto loop_start_2;
            loop_end_2:;
            CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
            tmp_assign_source_12 = tmp_list_contraction_1__contraction_result;
            Py_INCREF( tmp_assign_source_12 );
            goto try_return_handler_4;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_4___getitem__ );
            return NULL;
            // Return handler code:
            try_return_handler_4:;
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
            try_except_handler_4:;
            exception_keeper_type_4 = exception_type;
            exception_keeper_value_4 = exception_value;
            exception_keeper_tb_4 = exception_tb;
            exception_keeper_lineno_4 = exception_lineno;
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
            exception_type = exception_keeper_type_4;
            exception_value = exception_keeper_value_4;
            exception_tb = exception_keeper_tb_4;
            exception_lineno = exception_keeper_lineno_4;

            goto try_except_handler_2;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_4___getitem__ );
            return NULL;
            outline_result_1:;
            assert( var_nn == NULL );
            var_nn = tmp_assign_source_12;
        }
        goto branch_end_5;
        branch_no_5:;
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_10;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

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

                exception_lineno = 172;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_10 = tmp_mvar_value_3;
            tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_indices );
            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 172;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_size );
            tmp_args_element_name_7 = var_size;
            if ( var_typ == NULL )
            {
                Py_DECREF( tmp_called_name_7 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "typ" );
                exception_tb = NULL;

                exception_lineno = 172;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_args_element_name_8 = var_typ;
            frame_8165914d6eb2820a2b48f867e160141c->m_frame.f_lineno = 172;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_called_name_7 );
            if ( tmp_assign_source_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 172;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            assert( var_nn == NULL );
            var_nn = tmp_assign_source_21;
        }
        branch_end_5:;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_range_arg_2;
        PyObject *tmp_len_arg_3;
        CHECK_OBJECT( var_size );
        tmp_len_arg_3 = var_size;
        tmp_range_arg_2 = BUILTIN_LEN( tmp_len_arg_3 );
        assert( !(tmp_range_arg_2 == NULL) );
        tmp_iter_arg_4 = BUILTIN_RANGE( tmp_range_arg_2 );
        Py_DECREF( tmp_range_arg_2 );
        if ( tmp_iter_arg_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_22 = MAKE_ITERATOR( tmp_iter_arg_4 );
        Py_DECREF( tmp_iter_arg_4 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_for_loop_2__for_iterator == NULL );
        tmp_for_loop_2__for_iterator = tmp_assign_source_22;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_next_source_3 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_23 = ITERATOR_NEXT( tmp_next_source_3 );
        if ( tmp_assign_source_23 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_3;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooo";
                exception_lineno = 173;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_23;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT( tmp_for_loop_2__iter_value );
        tmp_assign_source_24 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_24;
            Py_INCREF( var_k );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_source_name_11;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        CHECK_OBJECT( par_key );
        tmp_subscribed_name_5 = par_key;
        CHECK_OBJECT( var_k );
        tmp_subscript_name_5 = var_k;
        tmp_source_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        if ( tmp_source_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 174;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_25 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_step );
        Py_DECREF( tmp_source_name_11 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 174;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_step;
            var_step = tmp_assign_source_25;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_source_name_12;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        CHECK_OBJECT( par_key );
        tmp_subscribed_name_6 = par_key;
        CHECK_OBJECT( var_k );
        tmp_subscript_name_6 = var_k;
        tmp_source_name_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        if ( tmp_source_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_26 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_start );
        Py_DECREF( tmp_source_name_12 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_start;
            var_start = tmp_assign_source_26;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_start );
        tmp_compexpr_left_3 = var_start;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_6 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_27;
            tmp_assign_source_27 = const_int_0;
            {
                PyObject *old = var_start;
                assert( old != NULL );
                var_start = tmp_assign_source_27;
                Py_INCREF( var_start );
                Py_DECREF( old );
            }

        }
        branch_no_6:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( var_step );
        tmp_compexpr_left_4 = var_step;
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_7 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_28;
            tmp_assign_source_28 = const_int_pos_1;
            {
                PyObject *old = var_step;
                assert( old != NULL );
                var_step = tmp_assign_source_28;
                Py_INCREF( var_step );
                Py_DECREF( old );
            }

        }
        branch_no_7:;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_isinstance_inst_5;
        PyObject *tmp_isinstance_cls_5;
        CHECK_OBJECT( var_step );
        tmp_isinstance_inst_5 = var_step;
        tmp_isinstance_cls_5 = (PyObject *)&PyComplex_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_5, tmp_isinstance_cls_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_8 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_29;
            PyObject *tmp_int_arg_3;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_element_name_9;
            tmp_called_name_8 = LOOKUP_BUILTIN( const_str_plain_abs );
            assert( tmp_called_name_8 != NULL );
            CHECK_OBJECT( var_step );
            tmp_args_element_name_9 = var_step;
            frame_8165914d6eb2820a2b48f867e160141c->m_frame.f_lineno = 181;
            {
                PyObject *call_args[] = { tmp_args_element_name_9 };
                tmp_int_arg_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
            }

            if ( tmp_int_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 181;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_7;
            }
            tmp_assign_source_29 = PyNumber_Int( tmp_int_arg_3 );
            Py_DECREF( tmp_int_arg_3 );
            if ( tmp_assign_source_29 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 181;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_7;
            }
            {
                PyObject *old = var_step;
                assert( old != NULL );
                var_step = tmp_assign_source_29;
                Py_DECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( var_step );
            tmp_compexpr_left_5 = var_step;
            tmp_compexpr_right_5 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_INT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 182;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_7;
            }
            tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_30;
                PyObject *tmp_left_name_5;
                PyObject *tmp_left_name_6;
                PyObject *tmp_source_name_13;
                PyObject *tmp_subscribed_name_7;
                PyObject *tmp_subscript_name_7;
                PyObject *tmp_right_name_5;
                PyObject *tmp_right_name_6;
                PyObject *tmp_float_arg_1;
                PyObject *tmp_left_name_7;
                PyObject *tmp_right_name_7;
                CHECK_OBJECT( par_key );
                tmp_subscribed_name_7 = par_key;
                CHECK_OBJECT( var_k );
                tmp_subscript_name_7 = var_k;
                tmp_source_name_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
                if ( tmp_source_name_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 183;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_7;
                }
                tmp_left_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_stop );
                Py_DECREF( tmp_source_name_13 );
                if ( tmp_left_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 183;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_7;
                }
                CHECK_OBJECT( var_start );
                tmp_right_name_5 = var_start;
                tmp_left_name_5 = BINARY_OPERATION_SUB( tmp_left_name_6, tmp_right_name_5 );
                Py_DECREF( tmp_left_name_6 );
                if ( tmp_left_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 183;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_7;
                }
                CHECK_OBJECT( var_step );
                tmp_left_name_7 = var_step;
                tmp_right_name_7 = const_int_pos_1;
                tmp_float_arg_1 = BINARY_OPERATION_SUB( tmp_left_name_7, tmp_right_name_7 );
                if ( tmp_float_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_5 );

                    exception_lineno = 183;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_7;
                }
                tmp_right_name_6 = TO_FLOAT( tmp_float_arg_1 );
                Py_DECREF( tmp_float_arg_1 );
                if ( tmp_right_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_5 );

                    exception_lineno = 183;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_7;
                }
                tmp_assign_source_30 = BINARY_OPERATION_TRUEDIV( tmp_left_name_5, tmp_right_name_6 );
                Py_DECREF( tmp_left_name_5 );
                Py_DECREF( tmp_right_name_6 );
                if ( tmp_assign_source_30 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 183;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_7;
                }
                {
                    PyObject *old = var_step;
                    assert( old != NULL );
                    var_step = tmp_assign_source_30;
                    Py_DECREF( old );
                }

            }
            branch_no_9:;
        }
        branch_no_8:;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_left_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_right_name_9;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( var_nn );
        tmp_subscribed_name_8 = var_nn;
        CHECK_OBJECT( var_k );
        tmp_subscript_name_8 = var_k;
        tmp_left_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
        if ( tmp_left_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_7;
        }
        if ( var_step == NULL )
        {
            Py_DECREF( tmp_left_name_9 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "step" );
            exception_tb = NULL;

            exception_lineno = 184;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_right_name_8 = var_step;
        tmp_left_name_8 = BINARY_OPERATION_MUL( tmp_left_name_9, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_9 );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT( var_start );
        tmp_right_name_9 = var_start;
        tmp_ass_subvalue_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_9 );
        Py_DECREF( tmp_left_name_8 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT( var_nn );
        tmp_ass_subscribed_1 = var_nn;
        CHECK_OBJECT( var_k );
        tmp_ass_subscript_1 = var_k;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_7;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_4;
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
    try_end_4:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_source_name_14;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_14 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_sparse );
        if ( tmp_attribute_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_attribute_value_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_2 );

            exception_lineno = 185;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_10 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_2 );
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_10;
        }
        else
        {
            goto branch_no_10;
        }
        branch_yes_10:;
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_left_name_10;
            PyObject *tmp_list_element_1;
            PyObject *tmp_source_name_15;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_right_name_10;
            PyObject *tmp_len_arg_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

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

                exception_lineno = 186;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_15 = tmp_mvar_value_4;
            tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_newaxis );
            if ( tmp_list_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 186;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_left_name_10 = PyList_New( 1 );
            PyList_SET_ITEM( tmp_left_name_10, 0, tmp_list_element_1 );
            CHECK_OBJECT( var_size );
            tmp_len_arg_4 = var_size;
            tmp_right_name_10 = BUILTIN_LEN( tmp_len_arg_4 );
            assert( !(tmp_right_name_10 == NULL) );
            tmp_assign_source_31 = BINARY_OPERATION_MUL( tmp_left_name_10, tmp_right_name_10 );
            Py_DECREF( tmp_left_name_10 );
            Py_DECREF( tmp_right_name_10 );
            if ( tmp_assign_source_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 186;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            assert( var_slobj == NULL );
            var_slobj = tmp_assign_source_31;
        }
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_iter_arg_5;
            PyObject *tmp_range_arg_3;
            PyObject *tmp_len_arg_5;
            CHECK_OBJECT( var_size );
            tmp_len_arg_5 = var_size;
            tmp_range_arg_3 = BUILTIN_LEN( tmp_len_arg_5 );
            assert( !(tmp_range_arg_3 == NULL) );
            tmp_iter_arg_5 = BUILTIN_RANGE( tmp_range_arg_3 );
            Py_DECREF( tmp_range_arg_3 );
            if ( tmp_iter_arg_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 187;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_32 = MAKE_ITERATOR( tmp_iter_arg_5 );
            Py_DECREF( tmp_iter_arg_5 );
            if ( tmp_assign_source_32 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 187;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            assert( tmp_for_loop_3__for_iterator == NULL );
            tmp_for_loop_3__for_iterator = tmp_assign_source_32;
        }
        // Tried code:
        loop_start_4:;
        {
            PyObject *tmp_next_source_4;
            PyObject *tmp_assign_source_33;
            CHECK_OBJECT( tmp_for_loop_3__for_iterator );
            tmp_next_source_4 = tmp_for_loop_3__for_iterator;
            tmp_assign_source_33 = ITERATOR_NEXT( tmp_next_source_4 );
            if ( tmp_assign_source_33 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_4;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 187;
                    goto try_except_handler_8;
                }
            }

            {
                PyObject *old = tmp_for_loop_3__iter_value;
                tmp_for_loop_3__iter_value = tmp_assign_source_33;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_34;
            CHECK_OBJECT( tmp_for_loop_3__iter_value );
            tmp_assign_source_34 = tmp_for_loop_3__iter_value;
            {
                PyObject *old = var_k;
                var_k = tmp_assign_source_34;
                Py_INCREF( var_k );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            tmp_ass_subvalue_2 = const_slice_none_none_none;
            CHECK_OBJECT( var_slobj );
            tmp_ass_subscribed_2 = var_slobj;
            CHECK_OBJECT( var_k );
            tmp_ass_subscript_2 = var_k;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 188;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_8;
            }
        }
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_subscribed_name_9;
            PyObject *tmp_subscribed_name_10;
            PyObject *tmp_subscript_name_9;
            PyObject *tmp_subscript_name_10;
            PyObject *tmp_tuple_arg_1;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            CHECK_OBJECT( var_nn );
            tmp_subscribed_name_10 = var_nn;
            CHECK_OBJECT( var_k );
            tmp_subscript_name_9 = var_k;
            tmp_subscribed_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_9 );
            if ( tmp_subscribed_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 189;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_8;
            }
            CHECK_OBJECT( var_slobj );
            tmp_tuple_arg_1 = var_slobj;
            tmp_subscript_name_10 = PySequence_Tuple( tmp_tuple_arg_1 );
            if ( tmp_subscript_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscribed_name_9 );

                exception_lineno = 189;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_8;
            }
            tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_10 );
            Py_DECREF( tmp_subscribed_name_9 );
            Py_DECREF( tmp_subscript_name_10 );
            if ( tmp_ass_subvalue_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 189;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_8;
            }
            CHECK_OBJECT( var_nn );
            tmp_ass_subscribed_3 = var_nn;
            CHECK_OBJECT( var_k );
            tmp_ass_subscript_3 = var_k;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
            Py_DECREF( tmp_ass_subvalue_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 189;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_8;
            }
        }
        {
            PyObject *tmp_ass_subvalue_4;
            PyObject *tmp_source_name_16;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_ass_subscribed_4;
            PyObject *tmp_ass_subscript_4;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
                exception_tb = NULL;

                exception_lineno = 190;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_8;
            }

            tmp_source_name_16 = tmp_mvar_value_5;
            tmp_ass_subvalue_4 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_newaxis );
            if ( tmp_ass_subvalue_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 190;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_8;
            }
            CHECK_OBJECT( var_slobj );
            tmp_ass_subscribed_4 = var_slobj;
            CHECK_OBJECT( var_k );
            tmp_ass_subscript_4 = var_k;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
            Py_DECREF( tmp_ass_subvalue_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 190;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_8;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_8;
        }
        goto loop_start_4;
        loop_end_4:;
        goto try_end_5;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_for_loop_3__iter_value );
        tmp_for_loop_3__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
        Py_DECREF( tmp_for_loop_3__for_iterator );
        tmp_for_loop_3__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_2;
        // End of try:
        try_end_5:;
        Py_XDECREF( tmp_for_loop_3__iter_value );
        tmp_for_loop_3__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
        Py_DECREF( tmp_for_loop_3__for_iterator );
        tmp_for_loop_3__for_iterator = NULL;

        branch_no_10:;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_8165914d6eb2820a2b48f867e160141c );
    if ( exception_keeper_tb_7 == NULL )
    {
        exception_keeper_tb_7 = MAKE_TRACEBACK( frame_8165914d6eb2820a2b48f867e160141c, exception_keeper_lineno_7 );
    }
    else if ( exception_keeper_lineno_7 != 0 )
    {
        exception_keeper_tb_7 = ADD_TRACEBACK( exception_keeper_tb_7, frame_8165914d6eb2820a2b48f867e160141c, exception_keeper_lineno_7 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    PUBLISH_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        tmp_compexpr_left_6 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_6 = const_tuple_type_IndexError_type_TypeError_tuple;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_11;
        }
        else
        {
            goto branch_no_11;
        }
        branch_yes_11:;
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_source_name_17;
            CHECK_OBJECT( par_key );
            tmp_source_name_17 = par_key;
            tmp_assign_source_35 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_step );
            if ( tmp_assign_source_35 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 193;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_step;
                var_step = tmp_assign_source_35;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_source_name_18;
            CHECK_OBJECT( par_key );
            tmp_source_name_18 = par_key;
            tmp_assign_source_36 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_stop );
            if ( tmp_assign_source_36 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 194;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_stop == NULL );
            var_stop = tmp_assign_source_36;
        }
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_source_name_19;
            CHECK_OBJECT( par_key );
            tmp_source_name_19 = par_key;
            tmp_assign_source_37 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_start );
            if ( tmp_assign_source_37 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 195;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_start;
                var_start = tmp_assign_source_37;
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            CHECK_OBJECT( var_start );
            tmp_compexpr_left_7 = var_start;
            tmp_compexpr_right_7 = Py_None;
            tmp_condition_result_12 = ( tmp_compexpr_left_7 == tmp_compexpr_right_7 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_12;
            }
            else
            {
                goto branch_no_12;
            }
            branch_yes_12:;
            {
                PyObject *tmp_assign_source_38;
                tmp_assign_source_38 = const_int_0;
                {
                    PyObject *old = var_start;
                    assert( old != NULL );
                    var_start = tmp_assign_source_38;
                    Py_INCREF( var_start );
                    Py_DECREF( old );
                }

            }
            branch_no_12:;
        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_isinstance_inst_6;
            PyObject *tmp_isinstance_cls_6;
            CHECK_OBJECT( var_step );
            tmp_isinstance_inst_6 = var_step;
            tmp_isinstance_cls_6 = (PyObject *)&PyComplex_Type;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_6, tmp_isinstance_cls_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 198;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_13 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_13;
            }
            else
            {
                goto branch_no_13;
            }
            branch_yes_13:;
            {
                PyObject *tmp_assign_source_39;
                PyObject *tmp_called_name_9;
                PyObject *tmp_args_element_name_10;
                tmp_called_name_9 = LOOKUP_BUILTIN( const_str_plain_abs );
                assert( tmp_called_name_9 != NULL );
                CHECK_OBJECT( var_step );
                tmp_args_element_name_10 = var_step;
                frame_8165914d6eb2820a2b48f867e160141c->m_frame.f_lineno = 199;
                {
                    PyObject *call_args[] = { tmp_args_element_name_10 };
                    tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
                }

                if ( tmp_assign_source_39 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 199;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_step;
                    assert( old != NULL );
                    var_step = tmp_assign_source_39;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_40;
                PyObject *tmp_int_arg_4;
                CHECK_OBJECT( var_step );
                tmp_int_arg_4 = var_step;
                tmp_assign_source_40 = PyNumber_Int( tmp_int_arg_4 );
                if ( tmp_assign_source_40 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 200;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_length == NULL );
                var_length = tmp_assign_source_40;
            }
            {
                nuitka_bool tmp_condition_result_14;
                PyObject *tmp_compexpr_left_8;
                PyObject *tmp_compexpr_right_8;
                CHECK_OBJECT( var_step );
                tmp_compexpr_left_8 = var_step;
                tmp_compexpr_right_8 = const_int_pos_1;
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_INT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 201;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_14 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_14;
                }
                else
                {
                    goto branch_no_14;
                }
                branch_yes_14:;
                {
                    PyObject *tmp_assign_source_41;
                    PyObject *tmp_left_name_11;
                    PyObject *tmp_left_name_12;
                    PyObject *tmp_source_name_20;
                    PyObject *tmp_right_name_11;
                    PyObject *tmp_right_name_12;
                    PyObject *tmp_float_arg_2;
                    PyObject *tmp_left_name_13;
                    PyObject *tmp_right_name_13;
                    CHECK_OBJECT( par_key );
                    tmp_source_name_20 = par_key;
                    tmp_left_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_stop );
                    if ( tmp_left_name_12 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 202;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( var_start );
                    tmp_right_name_11 = var_start;
                    tmp_left_name_11 = BINARY_OPERATION_SUB( tmp_left_name_12, tmp_right_name_11 );
                    Py_DECREF( tmp_left_name_12 );
                    if ( tmp_left_name_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 202;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( var_step );
                    tmp_left_name_13 = var_step;
                    tmp_right_name_13 = const_int_pos_1;
                    tmp_float_arg_2 = BINARY_OPERATION_SUB( tmp_left_name_13, tmp_right_name_13 );
                    if ( tmp_float_arg_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_left_name_11 );

                        exception_lineno = 202;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_right_name_12 = TO_FLOAT( tmp_float_arg_2 );
                    Py_DECREF( tmp_float_arg_2 );
                    if ( tmp_right_name_12 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_left_name_11 );

                        exception_lineno = 202;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_41 = BINARY_OPERATION_TRUEDIV( tmp_left_name_11, tmp_right_name_12 );
                    Py_DECREF( tmp_left_name_11 );
                    Py_DECREF( tmp_right_name_12 );
                    if ( tmp_assign_source_41 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 202;
                        type_description_1 = "ooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_step;
                        assert( old != NULL );
                        var_step = tmp_assign_source_41;
                        Py_DECREF( old );
                    }

                }
                branch_no_14:;
            }
            {
                PyObject *tmp_assign_source_42;
                PyObject *tmp_left_name_14;
                PyObject *tmp_source_name_21;
                PyObject *tmp_right_name_14;
                CHECK_OBJECT( par_key );
                tmp_source_name_21 = par_key;
                tmp_left_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_stop );
                if ( tmp_left_name_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 203;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_step );
                tmp_right_name_14 = var_step;
                tmp_assign_source_42 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_14 );
                Py_DECREF( tmp_left_name_14 );
                if ( tmp_assign_source_42 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 203;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_stop;
                    assert( old != NULL );
                    var_stop = tmp_assign_source_42;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_left_name_15;
                PyObject *tmp_left_name_16;
                PyObject *tmp_called_instance_1;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_args_element_name_11;
                PyObject *tmp_args_element_name_12;
                PyObject *tmp_args_element_name_13;
                PyObject *tmp_args_element_name_14;
                PyObject *tmp_right_name_15;
                PyObject *tmp_right_name_16;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

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

                    exception_lineno = 204;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_1 = tmp_mvar_value_6;
                tmp_args_element_name_11 = const_int_0;
                CHECK_OBJECT( var_length );
                tmp_args_element_name_12 = var_length;
                tmp_args_element_name_13 = const_int_pos_1;
                tmp_args_element_name_14 = (PyObject *)&PyFloat_Type;
                frame_8165914d6eb2820a2b48f867e160141c->m_frame.f_lineno = 204;
                {
                    PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14 };
                    tmp_left_name_16 = CALL_METHOD_WITH_ARGS4( tmp_called_instance_1, const_str_plain_arange, call_args );
                }

                if ( tmp_left_name_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 204;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_step );
                tmp_right_name_15 = var_step;
                tmp_left_name_15 = BINARY_OPERATION_MUL( tmp_left_name_16, tmp_right_name_15 );
                Py_DECREF( tmp_left_name_16 );
                if ( tmp_left_name_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 204;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_start );
                tmp_right_name_16 = var_start;
                tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_16 );
                Py_DECREF( tmp_left_name_15 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 204;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_13;
            branch_no_13:;
            {
                PyObject *tmp_called_instance_2;
                PyObject *tmp_mvar_value_7;
                PyObject *tmp_args_element_name_15;
                PyObject *tmp_args_element_name_16;
                PyObject *tmp_args_element_name_17;
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
                }

                if ( tmp_mvar_value_7 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
                    exception_tb = NULL;

                    exception_lineno = 206;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_2 = tmp_mvar_value_7;
                CHECK_OBJECT( var_start );
                tmp_args_element_name_15 = var_start;
                CHECK_OBJECT( var_stop );
                tmp_args_element_name_16 = var_stop;
                CHECK_OBJECT( var_step );
                tmp_args_element_name_17 = var_step;
                frame_8165914d6eb2820a2b48f867e160141c->m_frame.f_lineno = 206;
                {
                    PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17 };
                    tmp_return_value = CALL_METHOD_WITH_ARGS3( tmp_called_instance_2, const_str_plain_arange, call_args );
                }

                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 206;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_end_13:;
        }
        goto branch_end_11;
        branch_no_11:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 148;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_8165914d6eb2820a2b48f867e160141c->m_frame) frame_8165914d6eb2820a2b48f867e160141c->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
        branch_end_11:;
    }
    // End of try:
    try_end_6:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_8165914d6eb2820a2b48f867e160141c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_8165914d6eb2820a2b48f867e160141c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_8165914d6eb2820a2b48f867e160141c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8165914d6eb2820a2b48f867e160141c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8165914d6eb2820a2b48f867e160141c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8165914d6eb2820a2b48f867e160141c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8165914d6eb2820a2b48f867e160141c,
        type_description_1,
        par_self,
        par_key,
        var_nn,
        var__x,
        var__t,
        var_stop,
        var_length,
        var_start,
        var_step,
        var_slobj,
        var_typ,
        var_k,
        var_size
    );


    // Release cached frame.
    if ( frame_8165914d6eb2820a2b48f867e160141c == cache_frame_8165914d6eb2820a2b48f867e160141c )
    {
        Py_DECREF( frame_8165914d6eb2820a2b48f867e160141c );
    }
    cache_frame_8165914d6eb2820a2b48f867e160141c = NULL;

    assertFrameObject( frame_8165914d6eb2820a2b48f867e160141c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_nn );
    tmp_return_value = var_nn;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_4___getitem__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_nn );
    var_nn = NULL;

    Py_XDECREF( var__x );
    var__x = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var__t );
    var__t = NULL;

    Py_XDECREF( var_stop );
    var_stop = NULL;

    Py_XDECREF( var_length );
    var_length = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_step );
    var_step = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    Py_XDECREF( var_slobj );
    var_slobj = NULL;

    Py_XDECREF( var_typ );
    var_typ = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    CHECK_OBJECT( (PyObject *)var_size );
    Py_DECREF( var_size );
    var_size = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_nn );
    var_nn = NULL;

    Py_XDECREF( var__x );
    var__x = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var__t );
    var__t = NULL;

    Py_XDECREF( var_stop );
    var_stop = NULL;

    Py_XDECREF( var_length );
    var_length = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_step );
    var_step = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    Py_XDECREF( var_slobj );
    var_slobj = NULL;

    Py_XDECREF( var_typ );
    var_typ = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    CHECK_OBJECT( (PyObject *)var_size );
    Py_DECREF( var_size );
    var_size = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_4___getitem__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_5___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_18e3cc71cc5d3c9f13b78442b889f692;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_18e3cc71cc5d3c9f13b78442b889f692 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_18e3cc71cc5d3c9f13b78442b889f692, codeobj_18e3cc71cc5d3c9f13b78442b889f692, module_numpy$lib$index_tricks, sizeof(void *) );
    frame_18e3cc71cc5d3c9f13b78442b889f692 = cache_frame_18e3cc71cc5d3c9f13b78442b889f692;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_18e3cc71cc5d3c9f13b78442b889f692 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_18e3cc71cc5d3c9f13b78442b889f692 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_MGridClass );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MGridClass );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "MGridClass" );
            exception_tb = NULL;

            exception_lineno = 252;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_source_name_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 252;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 252;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = PyDict_Copy( const_dict_c94aedb3aac0d244f6f14be59f80d888 );
        frame_18e3cc71cc5d3c9f13b78442b889f692->m_frame.f_lineno = 252;
        tmp_call_result_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 252;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_18e3cc71cc5d3c9f13b78442b889f692 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_18e3cc71cc5d3c9f13b78442b889f692 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_18e3cc71cc5d3c9f13b78442b889f692, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_18e3cc71cc5d3c9f13b78442b889f692->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_18e3cc71cc5d3c9f13b78442b889f692, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_18e3cc71cc5d3c9f13b78442b889f692,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_18e3cc71cc5d3c9f13b78442b889f692 == cache_frame_18e3cc71cc5d3c9f13b78442b889f692 )
    {
        Py_DECREF( frame_18e3cc71cc5d3c9f13b78442b889f692 );
    }
    cache_frame_18e3cc71cc5d3c9f13b78442b889f692 = NULL;

    assertFrameObject( frame_18e3cc71cc5d3c9f13b78442b889f692 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_5___init__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_5___init__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_6___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_4170fc3349084921f0c254a55d8f31a6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4170fc3349084921f0c254a55d8f31a6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4170fc3349084921f0c254a55d8f31a6, codeobj_4170fc3349084921f0c254a55d8f31a6, module_numpy$lib$index_tricks, sizeof(void *) );
    frame_4170fc3349084921f0c254a55d8f31a6 = cache_frame_4170fc3349084921f0c254a55d8f31a6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4170fc3349084921f0c254a55d8f31a6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4170fc3349084921f0c254a55d8f31a6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_OGridClass );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OGridClass );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "OGridClass" );
            exception_tb = NULL;

            exception_lineno = 295;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_source_name_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 295;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 295;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = PyDict_Copy( const_dict_28ebf724697f63eaa96dcded742e9de0 );
        frame_4170fc3349084921f0c254a55d8f31a6->m_frame.f_lineno = 295;
        tmp_call_result_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 295;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4170fc3349084921f0c254a55d8f31a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4170fc3349084921f0c254a55d8f31a6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4170fc3349084921f0c254a55d8f31a6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4170fc3349084921f0c254a55d8f31a6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4170fc3349084921f0c254a55d8f31a6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4170fc3349084921f0c254a55d8f31a6,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_4170fc3349084921f0c254a55d8f31a6 == cache_frame_4170fc3349084921f0c254a55d8f31a6 )
    {
        Py_DECREF( frame_4170fc3349084921f0c254a55d8f31a6 );
    }
    cache_frame_4170fc3349084921f0c254a55d8f31a6 = NULL;

    assertFrameObject( frame_4170fc3349084921f0c254a55d8f31a6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_6___init__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_6___init__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_7___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_matrix = python_pars[ 2 ];
    PyObject *par_ndmin = python_pars[ 3 ];
    PyObject *par_trans1d = python_pars[ 4 ];
    struct Nuitka_FrameObject *frame_cd154c8f9066f1e9c894bd6fe9767aae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cd154c8f9066f1e9c894bd6fe9767aae = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cd154c8f9066f1e9c894bd6fe9767aae, codeobj_cd154c8f9066f1e9c894bd6fe9767aae, module_numpy$lib$index_tricks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cd154c8f9066f1e9c894bd6fe9767aae = cache_frame_cd154c8f9066f1e9c894bd6fe9767aae;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cd154c8f9066f1e9c894bd6fe9767aae );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cd154c8f9066f1e9c894bd6fe9767aae ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_axis );
        tmp_assattr_name_1 = par_axis;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_axis, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 311;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_matrix );
        tmp_assattr_name_2 = par_matrix;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_matrix, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_trans1d );
        tmp_assattr_name_3 = par_trans1d;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_trans1d, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 313;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( par_ndmin );
        tmp_assattr_name_4 = par_ndmin;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_ndmin, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 314;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd154c8f9066f1e9c894bd6fe9767aae );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd154c8f9066f1e9c894bd6fe9767aae );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cd154c8f9066f1e9c894bd6fe9767aae, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cd154c8f9066f1e9c894bd6fe9767aae->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cd154c8f9066f1e9c894bd6fe9767aae, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cd154c8f9066f1e9c894bd6fe9767aae,
        type_description_1,
        par_self,
        par_axis,
        par_matrix,
        par_ndmin,
        par_trans1d
    );


    // Release cached frame.
    if ( frame_cd154c8f9066f1e9c894bd6fe9767aae == cache_frame_cd154c8f9066f1e9c894bd6fe9767aae )
    {
        Py_DECREF( frame_cd154c8f9066f1e9c894bd6fe9767aae );
    }
    cache_frame_cd154c8f9066f1e9c894bd6fe9767aae = NULL;

    assertFrameObject( frame_cd154c8f9066f1e9c894bd6fe9767aae );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_7___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_ndmin );
    Py_DECREF( par_ndmin );
    par_ndmin = NULL;

    CHECK_OBJECT( (PyObject *)par_trans1d );
    Py_DECREF( par_trans1d );
    par_trans1d = NULL;

    CHECK_OBJECT( (PyObject *)par_matrix );
    Py_DECREF( par_matrix );
    par_matrix = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_ndmin );
    Py_DECREF( par_ndmin );
    par_ndmin = NULL;

    CHECK_OBJECT( (PyObject *)par_trans1d );
    Py_DECREF( par_trans1d );
    par_trans1d = NULL;

    CHECK_OBJECT( (PyObject *)par_matrix );
    Py_DECREF( par_matrix );
    par_matrix = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_7___init__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_8___getitem__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    PyObject *var_objs = NULL;
    PyObject *var_frame = NULL;
    PyObject *var_final_dtype = NULL;
    PyObject *var_newobj = NULL;
    PyObject *var_scalar = NULL;
    PyObject *var_defaxes = NULL;
    PyObject *var_size = NULL;
    PyObject *var_matrix = NULL;
    PyObject *var_k2 = NULL;
    PyObject *var_oldndim = NULL;
    PyObject *var_res = NULL;
    PyObject *var_axes = NULL;
    PyObject *var_arraytypes = NULL;
    PyObject *var_start = NULL;
    PyObject *var_k1 = NULL;
    PyObject *var_vec = NULL;
    PyObject *var_axis = NULL;
    PyObject *var_ndmin = NULL;
    PyObject *var_trans1d = NULL;
    PyObject *var_scalars = NULL;
    PyObject *var_stop = NULL;
    PyObject *var_item_ndim = NULL;
    PyObject *var_step = NULL;
    PyObject *var_mymat = NULL;
    PyObject *var_k = NULL;
    PyObject *var_scalartypes = NULL;
    PyObject *var_item = NULL;
    PyObject *var_x = NULL;
    PyObject *var_col = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_ee1e3dbc441c9e366c0de8d04721722d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
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
    bool tmp_result;
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
    static struct Nuitka_FrameObject *cache_frame_ee1e3dbc441c9e366c0de8d04721722d = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ee1e3dbc441c9e366c0de8d04721722d, codeobj_ee1e3dbc441c9e366c0de8d04721722d, module_numpy$lib$index_tricks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ee1e3dbc441c9e366c0de8d04721722d = cache_frame_ee1e3dbc441c9e366c0de8d04721722d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ee1e3dbc441c9e366c0de8d04721722d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ee1e3dbc441c9e366c0de8d04721722d ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_key );
        tmp_isinstance_inst_1 = par_key;
        tmp_isinstance_cls_1 = (PyObject *)&PyString_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 318;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_source_name_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_sys );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
                exception_tb = NULL;

                exception_lineno = 319;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            frame_ee1e3dbc441c9e366c0de8d04721722d->m_frame.f_lineno = 319;
            tmp_source_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__getframe );
            if ( tmp_source_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 319;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_f_back );
            Py_DECREF( tmp_source_name_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 319;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_frame == NULL );
            var_frame = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_source_name_4;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_matrixlib );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_matrixlib );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "matrixlib" );
                exception_tb = NULL;

                exception_lineno = 320;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_bmat );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 320;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_key );
            tmp_args_element_name_1 = par_key;
            CHECK_OBJECT( var_frame );
            tmp_source_name_3 = var_frame;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_f_globals );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 320;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_frame );
            tmp_source_name_4 = var_frame;
            tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_f_locals );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_2 );

                exception_lineno = 320;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_ee1e3dbc441c9e366c0de8d04721722d->m_frame.f_lineno = 320;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 320;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_mymat == NULL );
            var_mymat = tmp_assign_source_2;
        }
        CHECK_OBJECT( var_mymat );
        tmp_return_value = var_mymat;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT( par_key );
        tmp_isinstance_inst_2 = par_key;
        tmp_isinstance_cls_2 = (PyObject *)&PyTuple_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 323;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 323;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( par_key );
            tmp_tuple_element_1 = par_key;
            tmp_assign_source_3 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_assign_source_3, 0, tmp_tuple_element_1 );
            {
                PyObject *old = par_key;
                assert( old != NULL );
                par_key = tmp_assign_source_3;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_trans1d );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_trans1d == NULL );
        var_trans1d = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ndmin );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 328;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ndmin == NULL );
        var_ndmin = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT( par_self );
        tmp_source_name_7 = par_self;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_matrix );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 329;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_matrix == NULL );
        var_matrix = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_source_name_8;
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_axis );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_axis == NULL );
        var_axis = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = PyList_New( 0 );
        assert( var_objs == NULL );
        var_objs = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = PyList_New( 0 );
        assert( var_scalars == NULL );
        var_scalars = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = PyList_New( 0 );
        assert( var_arraytypes == NULL );
        var_arraytypes = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = PyList_New( 0 );
        assert( var_scalartypes == NULL );
        var_scalartypes = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_4;
        tmp_called_name_2 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT( par_key );
        tmp_args_element_name_4 = par_key;
        frame_ee1e3dbc441c9e366c0de8d04721722d->m_frame.f_lineno = 337;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 337;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 337;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
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
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 337;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_13;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 337;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_14;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_1, 0 );
        if ( tmp_assign_source_15 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 337;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_15;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_2, 1 );
        if ( tmp_assign_source_16 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 337;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_16;
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

                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    exception_lineno = 337;
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

            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 337;
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
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_17;
            Py_INCREF( var_k );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_18 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_item;
            var_item = tmp_assign_source_18;
            Py_INCREF( var_item );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = Py_False;
        {
            PyObject *old = var_scalar;
            var_scalar = tmp_assign_source_19;
            Py_INCREF( var_scalar );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        CHECK_OBJECT( var_item );
        tmp_isinstance_inst_3 = var_item;
        tmp_isinstance_cls_3 = (PyObject *)&PySlice_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 339;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_20;
            PyObject *tmp_source_name_9;
            CHECK_OBJECT( var_item );
            tmp_source_name_9 = var_item;
            tmp_assign_source_20 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_step );
            if ( tmp_assign_source_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 340;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_step;
                var_step = tmp_assign_source_20;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_source_name_10;
            CHECK_OBJECT( var_item );
            tmp_source_name_10 = var_item;
            tmp_assign_source_21 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_start );
            if ( tmp_assign_source_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 341;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_start;
                var_start = tmp_assign_source_21;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_source_name_11;
            CHECK_OBJECT( var_item );
            tmp_source_name_11 = var_item;
            tmp_assign_source_22 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_stop );
            if ( tmp_assign_source_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 342;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_stop;
                var_stop = tmp_assign_source_22;
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT( var_start );
            tmp_compexpr_left_1 = var_start;
            tmp_compexpr_right_1 = Py_None;
            tmp_condition_result_4 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_23;
                tmp_assign_source_23 = const_int_0;
                {
                    PyObject *old = var_start;
                    assert( old != NULL );
                    var_start = tmp_assign_source_23;
                    Py_INCREF( var_start );
                    Py_DECREF( old );
                }

            }
            branch_no_4:;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( var_step );
            tmp_compexpr_left_2 = var_step;
            tmp_compexpr_right_2 = Py_None;
            tmp_condition_result_5 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_24;
                tmp_assign_source_24 = const_int_pos_1;
                {
                    PyObject *old = var_step;
                    assert( old != NULL );
                    var_step = tmp_assign_source_24;
                    Py_INCREF( var_step );
                    Py_DECREF( old );
                }

            }
            branch_no_5:;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_isinstance_inst_4;
            PyObject *tmp_isinstance_cls_4;
            CHECK_OBJECT( var_step );
            tmp_isinstance_inst_4 = var_step;
            tmp_isinstance_cls_4 = (PyObject *)&PyComplex_Type;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_4, tmp_isinstance_cls_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 347;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
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
                PyObject *tmp_assign_source_25;
                PyObject *tmp_int_arg_1;
                PyObject *tmp_called_name_3;
                PyObject *tmp_args_element_name_5;
                tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_abs );
                assert( tmp_called_name_3 != NULL );
                CHECK_OBJECT( var_step );
                tmp_args_element_name_5 = var_step;
                frame_ee1e3dbc441c9e366c0de8d04721722d->m_frame.f_lineno = 348;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5 };
                    tmp_int_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                }

                if ( tmp_int_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 348;
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_assign_source_25 = PyNumber_Int( tmp_int_arg_1 );
                Py_DECREF( tmp_int_arg_1 );
                if ( tmp_assign_source_25 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 348;
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = var_size;
                    var_size = tmp_assign_source_25;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_26;
                PyObject *tmp_called_name_4;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_name_1;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_kw_name_1;
                PyObject *tmp_dict_key_1;
                PyObject *tmp_dict_value_1;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_linspace );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linspace );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "linspace" );
                    exception_tb = NULL;

                    exception_lineno = 349;
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    goto try_except_handler_2;
                }

                tmp_called_name_4 = tmp_mvar_value_3;
                CHECK_OBJECT( var_start );
                tmp_tuple_element_2 = var_start;
                tmp_args_name_1 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
                CHECK_OBJECT( var_stop );
                tmp_tuple_element_2 = var_stop;
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
                CHECK_OBJECT( var_size );
                tmp_dict_value_1 = var_size;
                tmp_dict_key_1 = const_str_plain_num;
                tmp_kw_name_1 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
                assert( !(tmp_res != 0) );
                frame_ee1e3dbc441c9e366c0de8d04721722d->m_frame.f_lineno = 349;
                tmp_assign_source_26 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
                Py_DECREF( tmp_args_name_1 );
                Py_DECREF( tmp_kw_name_1 );
                if ( tmp_assign_source_26 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 349;
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = var_newobj;
                    var_newobj = tmp_assign_source_26;
                    Py_XDECREF( old );
                }

            }
            goto branch_end_6;
            branch_no_6:;
            {
                PyObject *tmp_assign_source_27;
                PyObject *tmp_called_instance_2;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_args_element_name_7;
                PyObject *tmp_args_element_name_8;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

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

                    exception_lineno = 351;
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    goto try_except_handler_2;
                }

                tmp_called_instance_2 = tmp_mvar_value_4;
                CHECK_OBJECT( var_start );
                tmp_args_element_name_6 = var_start;
                CHECK_OBJECT( var_stop );
                tmp_args_element_name_7 = var_stop;
                CHECK_OBJECT( var_step );
                tmp_args_element_name_8 = var_step;
                frame_ee1e3dbc441c9e366c0de8d04721722d->m_frame.f_lineno = 351;
                {
                    PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
                    tmp_assign_source_27 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_2, const_str_plain_arange, call_args );
                }

                if ( tmp_assign_source_27 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 351;
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = var_newobj;
                    var_newobj = tmp_assign_source_27;
                    Py_XDECREF( old );
                }

            }
            branch_end_6:;
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( var_ndmin );
            tmp_compexpr_left_3 = var_ndmin;
            tmp_compexpr_right_3 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 352;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
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
                PyObject *tmp_assign_source_28;
                PyObject *tmp_called_name_5;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_args_name_2;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_kw_name_2;
                PyObject *tmp_dict_key_2;
                PyObject *tmp_dict_value_2;
                PyObject *tmp_dict_key_3;
                PyObject *tmp_dict_value_3;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_array );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
                    exception_tb = NULL;

                    exception_lineno = 353;
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    goto try_except_handler_2;
                }

                tmp_called_name_5 = tmp_mvar_value_5;
                CHECK_OBJECT( var_newobj );
                tmp_tuple_element_3 = var_newobj;
                tmp_args_name_2 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
                tmp_dict_value_2 = Py_False;
                tmp_dict_key_2 = const_str_plain_copy;
                tmp_kw_name_2 = _PyDict_NewPresized( 2 );
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
                assert( !(tmp_res != 0) );
                CHECK_OBJECT( var_ndmin );
                tmp_dict_value_3 = var_ndmin;
                tmp_dict_key_3 = const_str_plain_ndmin;
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
                assert( !(tmp_res != 0) );
                frame_ee1e3dbc441c9e366c0de8d04721722d->m_frame.f_lineno = 353;
                tmp_assign_source_28 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
                Py_DECREF( tmp_args_name_2 );
                Py_DECREF( tmp_kw_name_2 );
                if ( tmp_assign_source_28 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 353;
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = var_newobj;
                    assert( old != NULL );
                    var_newobj = tmp_assign_source_28;
                    Py_DECREF( old );
                }

            }
            {
                nuitka_bool tmp_condition_result_8;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                if ( var_trans1d == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "trans1d" );
                    exception_tb = NULL;

                    exception_lineno = 354;
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    goto try_except_handler_2;
                }

                tmp_compexpr_left_4 = var_trans1d;
                tmp_compexpr_right_4 = const_int_neg_1;
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_INT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 354;
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_condition_result_8 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_assign_source_29;
                    PyObject *tmp_called_name_6;
                    PyObject *tmp_source_name_12;
                    PyObject *tmp_args_element_name_9;
                    PyObject *tmp_args_element_name_10;
                    CHECK_OBJECT( var_newobj );
                    tmp_source_name_12 = var_newobj;
                    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_swapaxes );
                    if ( tmp_called_name_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 355;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_args_element_name_9 = const_int_neg_1;
                    if ( var_trans1d == NULL )
                    {
                        Py_DECREF( tmp_called_name_6 );
                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "trans1d" );
                        exception_tb = NULL;

                        exception_lineno = 355;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }

                    tmp_args_element_name_10 = var_trans1d;
                    frame_ee1e3dbc441c9e366c0de8d04721722d->m_frame.f_lineno = 355;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
                        tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
                    }

                    Py_DECREF( tmp_called_name_6 );
                    if ( tmp_assign_source_29 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 355;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_newobj;
                        assert( old != NULL );
                        var_newobj = tmp_assign_source_29;
                        Py_DECREF( old );
                    }

                }
                branch_no_8:;
            }
            branch_no_7:;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_isinstance_inst_5;
            PyObject *tmp_isinstance_cls_5;
            CHECK_OBJECT( var_item );
            tmp_isinstance_inst_5 = var_item;
            tmp_isinstance_cls_5 = (PyObject *)&PyString_Type;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_5, tmp_isinstance_cls_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 356;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                nuitka_bool tmp_condition_result_10;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                CHECK_OBJECT( var_k );
                tmp_compexpr_left_5 = var_k;
                tmp_compexpr_right_5 = const_int_0;
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_INT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 357;
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_condition_result_10 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_10;
                }
                else
                {
                    goto branch_no_10;
                }
                branch_yes_10:;
                {
                    PyObject *tmp_raise_type_1;
                    PyObject *tmp_make_exception_arg_1;
                    tmp_make_exception_arg_1 = const_str_digest_0e72a689a82b574ba7397ec1f496ec9d;
                    frame_ee1e3dbc441c9e366c0de8d04721722d->m_frame.f_lineno = 358;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_1 };
                        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    assert( !(tmp_raise_type_1 == NULL) );
                    exception_type = tmp_raise_type_1;
                    exception_lineno = 358;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                branch_no_10:;
            }
            {
                nuitka_bool tmp_condition_result_11;
                PyObject *tmp_compexpr_left_6;
                PyObject *tmp_compexpr_right_6;
                CHECK_OBJECT( var_item );
                tmp_compexpr_left_6 = var_item;
                tmp_compexpr_right_6 = const_tuple_str_plain_r_str_plain_c_tuple;
                tmp_res = PySequence_Contains( tmp_compexpr_right_6, tmp_compexpr_left_6 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 360;
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_condition_result_11 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_11;
                }
                else
                {
                    goto branch_no_11;
                }
                branch_yes_11:;
                {
                    PyObject *tmp_assign_source_30;
                    tmp_assign_source_30 = Py_True;
                    {
                        PyObject *old = var_matrix;
                        assert( old != NULL );
                        var_matrix = tmp_assign_source_30;
                        Py_INCREF( var_matrix );
                        Py_DECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_31;
                    PyObject *tmp_compexpr_left_7;
                    PyObject *tmp_compexpr_right_7;
                    CHECK_OBJECT( var_item );
                    tmp_compexpr_left_7 = var_item;
                    tmp_compexpr_right_7 = const_str_plain_c;
                    tmp_assign_source_31 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
                    if ( tmp_assign_source_31 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 362;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_col;
                        var_col = tmp_assign_source_31;
                        Py_XDECREF( old );
                    }

                }
                goto loop_start_1;
                branch_no_11:;
            }
            {
                nuitka_bool tmp_condition_result_12;
                PyObject *tmp_compexpr_left_8;
                PyObject *tmp_compexpr_right_8;
                tmp_compexpr_left_8 = const_str_chr_44;
                CHECK_OBJECT( var_item );
                tmp_compexpr_right_8 = var_item;
                tmp_res = PySequence_Contains( tmp_compexpr_right_8, tmp_compexpr_left_8 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 364;
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_condition_result_12 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_12;
                }
                else
                {
                    goto branch_no_12;
                }
                branch_yes_12:;
                {
                    PyObject *tmp_assign_source_32;
                    PyObject *tmp_called_instance_3;
                    CHECK_OBJECT( var_item );
                    tmp_called_instance_3 = var_item;
                    frame_ee1e3dbc441c9e366c0de8d04721722d->m_frame.f_lineno = 365;
                    tmp_assign_source_32 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_44_tuple, 0 ) );

                    if ( tmp_assign_source_32 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 365;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_vec;
                        var_vec = tmp_assign_source_32;
                        Py_XDECREF( old );
                    }

                }
                // Tried code:
                // Tried code:
                {
                    PyObject *tmp_assign_source_33;
                    PyObject *tmp_iter_arg_3;
                    // Tried code:
                    {
                        PyObject *tmp_assign_source_34;
                        PyObject *tmp_iter_arg_4;
                        Py_ssize_t tmp_sliceslicedel_index_lower_1;
                        Py_ssize_t tmp_slice_index_upper_1;
                        PyObject *tmp_slice_source_1;
                        tmp_sliceslicedel_index_lower_1 = 0;
                        tmp_slice_index_upper_1 = 2;
                        CHECK_OBJECT( var_vec );
                        tmp_slice_source_1 = var_vec;
                        tmp_iter_arg_4 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
                        if ( tmp_iter_arg_4 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 367;
                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            goto try_except_handler_7;
                        }
                        tmp_assign_source_34 = MAKE_ITERATOR( tmp_iter_arg_4 );
                        Py_DECREF( tmp_iter_arg_4 );
                        if ( tmp_assign_source_34 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 367;
                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            goto try_except_handler_7;
                        }
                        {
                            PyObject *old = tmp_list_contraction_1__$0;
                            tmp_list_contraction_1__$0 = tmp_assign_source_34;
                            Py_XDECREF( old );
                        }

                    }
                    {
                        PyObject *tmp_assign_source_35;
                        tmp_assign_source_35 = PyList_New( 0 );
                        {
                            PyObject *old = tmp_list_contraction_1__contraction_result;
                            tmp_list_contraction_1__contraction_result = tmp_assign_source_35;
                            Py_XDECREF( old );
                        }

                    }
                    loop_start_2:;
                    {
                        PyObject *tmp_next_source_2;
                        PyObject *tmp_assign_source_36;
                        CHECK_OBJECT( tmp_list_contraction_1__$0 );
                        tmp_next_source_2 = tmp_list_contraction_1__$0;
                        tmp_assign_source_36 = ITERATOR_NEXT( tmp_next_source_2 );
                        if ( tmp_assign_source_36 == NULL )
                        {
                            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                            {

                                goto loop_end_2;
                            }
                            else
                            {

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                type_description_1 = "ooooooooooooooooooooooooooooooo";
                                exception_lineno = 367;
                                goto try_except_handler_7;
                            }
                        }

                        {
                            PyObject *old = tmp_list_contraction_1__iter_value_0;
                            tmp_list_contraction_1__iter_value_0 = tmp_assign_source_36;
                            Py_XDECREF( old );
                        }

                    }
                    {
                        PyObject *tmp_assign_source_37;
                        CHECK_OBJECT( tmp_list_contraction_1__iter_value_0 );
                        tmp_assign_source_37 = tmp_list_contraction_1__iter_value_0;
                        {
                            PyObject *old = var_x;
                            var_x = tmp_assign_source_37;
                            Py_INCREF( var_x );
                            Py_XDECREF( old );
                        }

                    }
                    {
                        PyObject *tmp_append_list_1;
                        PyObject *tmp_append_value_1;
                        PyObject *tmp_int_arg_2;
                        CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
                        tmp_append_list_1 = tmp_list_contraction_1__contraction_result;
                        CHECK_OBJECT( var_x );
                        tmp_int_arg_2 = var_x;
                        tmp_append_value_1 = PyNumber_Int( tmp_int_arg_2 );
                        if ( tmp_append_value_1 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 367;
                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            goto try_except_handler_7;
                        }
                        assert( PyList_Check( tmp_append_list_1 ) );
                        tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
                        Py_DECREF( tmp_append_value_1 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 367;
                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            goto try_except_handler_7;
                        }
                    }
                    if ( CONSIDER_THREADING() == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 367;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_7;
                    }
                    goto loop_start_2;
                    loop_end_2:;
                    CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
                    tmp_iter_arg_3 = tmp_list_contraction_1__contraction_result;
                    Py_INCREF( tmp_iter_arg_3 );
                    goto try_return_handler_7;
                    // tried codes exits in all cases
                    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_8___getitem__ );
                    return NULL;
                    // Return handler code:
                    try_return_handler_7:;
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
                    try_except_handler_7:;
                    exception_keeper_type_3 = exception_type;
                    exception_keeper_value_3 = exception_value;
                    exception_keeper_tb_3 = exception_tb;
                    exception_keeper_lineno_3 = exception_lineno;
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
                    exception_type = exception_keeper_type_3;
                    exception_value = exception_keeper_value_3;
                    exception_tb = exception_keeper_tb_3;
                    exception_lineno = exception_keeper_lineno_3;

                    goto try_except_handler_6;
                    // End of try:
                    // Return statement must have exited already.
                    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_8___getitem__ );
                    return NULL;
                    outline_result_1:;
                    tmp_assign_source_33 = MAKE_ITERATOR( tmp_iter_arg_3 );
                    Py_DECREF( tmp_iter_arg_3 );
                    if ( tmp_assign_source_33 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 367;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_6;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_2__source_iter;
                        tmp_tuple_unpack_2__source_iter = tmp_assign_source_33;
                        Py_XDECREF( old );
                    }

                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_38;
                    PyObject *tmp_unpack_3;
                    CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
                    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
                    tmp_assign_source_38 = UNPACK_NEXT( tmp_unpack_3, 0 );
                    if ( tmp_assign_source_38 == NULL )
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


                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        exception_lineno = 367;
                        goto try_except_handler_8;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_2__element_1;
                        tmp_tuple_unpack_2__element_1 = tmp_assign_source_38;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_39;
                    PyObject *tmp_unpack_4;
                    CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
                    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
                    tmp_assign_source_39 = UNPACK_NEXT( tmp_unpack_4, 1 );
                    if ( tmp_assign_source_39 == NULL )
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


                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        exception_lineno = 367;
                        goto try_except_handler_8;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_2__element_2;
                        tmp_tuple_unpack_2__element_2 = tmp_assign_source_39;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_iterator_name_2;
                    CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
                    tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
                    // Check if iterator has left-over elements.
                    CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

                    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

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

                                type_description_1 = "ooooooooooooooooooooooooooooooo";
                                exception_lineno = 367;
                                goto try_except_handler_8;
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

                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        exception_lineno = 367;
                        goto try_except_handler_8;
                    }
                }
                goto try_end_3;
                // Exception handler code:
                try_except_handler_8:;
                exception_keeper_type_4 = exception_type;
                exception_keeper_value_4 = exception_value;
                exception_keeper_tb_4 = exception_tb;
                exception_keeper_lineno_4 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
                Py_DECREF( tmp_tuple_unpack_2__source_iter );
                tmp_tuple_unpack_2__source_iter = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_4;
                exception_value = exception_keeper_value_4;
                exception_tb = exception_keeper_tb_4;
                exception_lineno = exception_keeper_lineno_4;

                goto try_except_handler_6;
                // End of try:
                try_end_3:;
                goto try_end_4;
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

                Py_XDECREF( tmp_tuple_unpack_2__element_1 );
                tmp_tuple_unpack_2__element_1 = NULL;

                Py_XDECREF( tmp_tuple_unpack_2__element_2 );
                tmp_tuple_unpack_2__element_2 = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_5;
                exception_value = exception_keeper_value_5;
                exception_tb = exception_keeper_tb_5;
                exception_lineno = exception_keeper_lineno_5;

                goto try_except_handler_5;
                // End of try:
                try_end_4:;
                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
                Py_DECREF( tmp_tuple_unpack_2__source_iter );
                tmp_tuple_unpack_2__source_iter = NULL;

                {
                    PyObject *tmp_assign_source_40;
                    CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
                    tmp_assign_source_40 = tmp_tuple_unpack_2__element_1;
                    {
                        PyObject *old = var_axis;
                        assert( old != NULL );
                        var_axis = tmp_assign_source_40;
                        Py_INCREF( var_axis );
                        Py_DECREF( old );
                    }

                }
                Py_XDECREF( tmp_tuple_unpack_2__element_1 );
                tmp_tuple_unpack_2__element_1 = NULL;

                {
                    PyObject *tmp_assign_source_41;
                    CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
                    tmp_assign_source_41 = tmp_tuple_unpack_2__element_2;
                    {
                        PyObject *old = var_ndmin;
                        assert( old != NULL );
                        var_ndmin = tmp_assign_source_41;
                        Py_INCREF( var_ndmin );
                        Py_DECREF( old );
                    }

                }
                Py_XDECREF( tmp_tuple_unpack_2__element_2 );
                tmp_tuple_unpack_2__element_2 = NULL;

                {
                    nuitka_bool tmp_condition_result_13;
                    PyObject *tmp_compexpr_left_9;
                    PyObject *tmp_compexpr_right_9;
                    PyObject *tmp_len_arg_1;
                    CHECK_OBJECT( var_vec );
                    tmp_len_arg_1 = var_vec;
                    tmp_compexpr_left_9 = BUILTIN_LEN( tmp_len_arg_1 );
                    if ( tmp_compexpr_left_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 368;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_5;
                    }
                    tmp_compexpr_right_9 = const_int_pos_3;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
                    Py_DECREF( tmp_compexpr_left_9 );
                    assert( !(tmp_res == -1) );
                    tmp_condition_result_13 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_13;
                    }
                    else
                    {
                        goto branch_no_13;
                    }
                    branch_yes_13:;
                    {
                        PyObject *tmp_assign_source_42;
                        PyObject *tmp_int_arg_3;
                        PyObject *tmp_subscribed_name_1;
                        PyObject *tmp_subscript_name_1;
                        CHECK_OBJECT( var_vec );
                        tmp_subscribed_name_1 = var_vec;
                        tmp_subscript_name_1 = const_int_pos_2;
                        tmp_int_arg_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 2 );
                        if ( tmp_int_arg_3 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 369;
                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            goto try_except_handler_5;
                        }
                        tmp_assign_source_42 = PyNumber_Int( tmp_int_arg_3 );
                        Py_DECREF( tmp_int_arg_3 );
                        if ( tmp_assign_source_42 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 369;
                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            goto try_except_handler_5;
                        }
                        {
                            PyObject *old = var_trans1d;
                            var_trans1d = tmp_assign_source_42;
                            Py_XDECREF( old );
                        }

                    }
                    branch_no_13:;
                }
                goto try_end_5;
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

                // Preserve existing published exception.
                PRESERVE_FRAME_EXCEPTION( frame_ee1e3dbc441c9e366c0de8d04721722d );
                if ( exception_keeper_tb_6 == NULL )
                {
                    exception_keeper_tb_6 = MAKE_TRACEBACK( frame_ee1e3dbc441c9e366c0de8d04721722d, exception_keeper_lineno_6 );
                }
                else if ( exception_keeper_lineno_6 != 0 )
                {
                    exception_keeper_tb_6 = ADD_TRACEBACK( exception_keeper_tb_6, frame_ee1e3dbc441c9e366c0de8d04721722d, exception_keeper_lineno_6 );
                }

                NORMALIZE_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
                PUBLISH_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
                {
                    nuitka_bool tmp_condition_result_14;
                    PyObject *tmp_compexpr_left_10;
                    PyObject *tmp_compexpr_right_10;
                    tmp_compexpr_left_10 = EXC_TYPE(PyThreadState_GET());
                    tmp_compexpr_right_10 = PyExc_Exception;
                    tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_10, tmp_compexpr_right_10 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 371;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_condition_result_14 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_14;
                    }
                    else
                    {
                        goto branch_no_14;
                    }
                    branch_yes_14:;
                    {
                        PyObject *tmp_raise_type_2;
                        PyObject *tmp_make_exception_arg_2;
                        tmp_make_exception_arg_2 = const_str_digest_768284c408c3a084dbbd31908c895311;
                        frame_ee1e3dbc441c9e366c0de8d04721722d->m_frame.f_lineno = 372;
                        {
                            PyObject *call_args[] = { tmp_make_exception_arg_2 };
                            tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                        }

                        assert( !(tmp_raise_type_2 == NULL) );
                        exception_type = tmp_raise_type_2;
                        exception_lineno = 372;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    goto branch_end_14;
                    branch_no_14:;
                    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    if (unlikely( tmp_result == false ))
                    {
                        exception_lineno = 366;
                    }

                    if (exception_tb && exception_tb->tb_frame == &frame_ee1e3dbc441c9e366c0de8d04721722d->m_frame) frame_ee1e3dbc441c9e366c0de8d04721722d->m_frame.f_lineno = exception_tb->tb_lineno;
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    goto try_except_handler_2;
                    branch_end_14:;
                }
                // End of try:
                try_end_5:;
                goto loop_start_1;
                branch_no_12:;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_43;
                PyObject *tmp_int_arg_4;
                CHECK_OBJECT( var_item );
                tmp_int_arg_4 = var_item;
                tmp_assign_source_43 = PyNumber_Int( tmp_int_arg_4 );
                if ( tmp_assign_source_43 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 374;
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    goto try_except_handler_9;
                }
                {
                    PyObject *old = var_axis;
                    assert( old != NULL );
                    var_axis = tmp_assign_source_43;
                    Py_DECREF( old );
                }

            }
            goto try_end_6;
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

            // Preserve existing published exception.
            PRESERVE_FRAME_EXCEPTION( frame_ee1e3dbc441c9e366c0de8d04721722d );
            if ( exception_keeper_tb_7 == NULL )
            {
                exception_keeper_tb_7 = MAKE_TRACEBACK( frame_ee1e3dbc441c9e366c0de8d04721722d, exception_keeper_lineno_7 );
            }
            else if ( exception_keeper_lineno_7 != 0 )
            {
                exception_keeper_tb_7 = ADD_TRACEBACK( exception_keeper_tb_7, frame_ee1e3dbc441c9e366c0de8d04721722d, exception_keeper_lineno_7 );
            }

            NORMALIZE_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
            PUBLISH_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
            {
                nuitka_bool tmp_condition_result_15;
                PyObject *tmp_compexpr_left_11;
                PyObject *tmp_compexpr_right_11;
                tmp_compexpr_left_11 = EXC_TYPE(PyThreadState_GET());
                tmp_compexpr_right_11 = const_tuple_type_ValueError_type_TypeError_tuple;
                tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_11, tmp_compexpr_right_11 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 376;
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_condition_result_15 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_15;
                }
                else
                {
                    goto branch_no_15;
                }
                branch_yes_15:;
                {
                    PyObject *tmp_raise_type_3;
                    PyObject *tmp_make_exception_arg_3;
                    tmp_make_exception_arg_3 = const_str_digest_768284c408c3a084dbbd31908c895311;
                    frame_ee1e3dbc441c9e366c0de8d04721722d->m_frame.f_lineno = 377;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_3 };
                        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    assert( !(tmp_raise_type_3 == NULL) );
                    exception_type = tmp_raise_type_3;
                    exception_lineno = 377;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                goto branch_end_15;
                branch_no_15:;
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 373;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_ee1e3dbc441c9e366c0de8d04721722d->m_frame) frame_ee1e3dbc441c9e366c0de8d04721722d->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
                branch_end_15:;
            }
            // End of try:
            try_end_6:;
            goto loop_start_1;
            goto branch_end_9;
            branch_no_9:;
            {
                nuitka_bool tmp_condition_result_16;
                PyObject *tmp_compexpr_left_12;
                PyObject *tmp_compexpr_right_12;
                PyObject *tmp_type_arg_1;
                PyObject *tmp_mvar_value_6;
                CHECK_OBJECT( var_item );
                tmp_type_arg_1 = var_item;
                tmp_compexpr_left_12 = BUILTIN_TYPE1( tmp_type_arg_1 );
                assert( !(tmp_compexpr_left_12 == NULL) );
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ScalarType );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ScalarType );
                }

                if ( tmp_mvar_value_6 == NULL )
                {
                    Py_DECREF( tmp_compexpr_left_12 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "ScalarType" );
                    exception_tb = NULL;

                    exception_lineno = 378;
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    goto try_except_handler_2;
                }

                tmp_compexpr_right_12 = tmp_mvar_value_6;
                tmp_res = PySequence_Contains( tmp_compexpr_right_12, tmp_compexpr_left_12 );
                Py_DECREF( tmp_compexpr_left_12 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 378;
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_condition_result_16 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_16 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_16;
                }
                else
                {
                    goto branch_no_16;
                }
                branch_yes_16:;
                {
                    PyObject *tmp_assign_source_44;
                    PyObject *tmp_called_name_7;
                    PyObject *tmp_mvar_value_7;
                    PyObject *tmp_args_name_3;
                    PyObject *tmp_tuple_element_4;
                    PyObject *tmp_kw_name_3;
                    PyObject *tmp_dict_key_4;
                    PyObject *tmp_dict_value_4;
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_array );

                    if (unlikely( tmp_mvar_value_7 == NULL ))
                    {
                        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
                    }

                    if ( tmp_mvar_value_7 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
                        exception_tb = NULL;

                        exception_lineno = 379;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }

                    tmp_called_name_7 = tmp_mvar_value_7;
                    CHECK_OBJECT( var_item );
                    tmp_tuple_element_4 = var_item;
                    tmp_args_name_3 = PyTuple_New( 1 );
                    Py_INCREF( tmp_tuple_element_4 );
                    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
                    CHECK_OBJECT( var_ndmin );
                    tmp_dict_value_4 = var_ndmin;
                    tmp_dict_key_4 = const_str_plain_ndmin;
                    tmp_kw_name_3 = _PyDict_NewPresized( 1 );
                    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_4, tmp_dict_value_4 );
                    assert( !(tmp_res != 0) );
                    frame_ee1e3dbc441c9e366c0de8d04721722d->m_frame.f_lineno = 379;
                    tmp_assign_source_44 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_3, tmp_kw_name_3 );
                    Py_DECREF( tmp_args_name_3 );
                    Py_DECREF( tmp_kw_name_3 );
                    if ( tmp_assign_source_44 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 379;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_newobj;
                        var_newobj = tmp_assign_source_44;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_called_name_8;
                    PyObject *tmp_source_name_13;
                    PyObject *tmp_call_result_1;
                    PyObject *tmp_args_element_name_11;
                    PyObject *tmp_len_arg_2;
                    CHECK_OBJECT( var_scalars );
                    tmp_source_name_13 = var_scalars;
                    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_append );
                    if ( tmp_called_name_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 380;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( var_objs );
                    tmp_len_arg_2 = var_objs;
                    tmp_args_element_name_11 = BUILTIN_LEN( tmp_len_arg_2 );
                    assert( !(tmp_args_element_name_11 == NULL) );
                    frame_ee1e3dbc441c9e366c0de8d04721722d->m_frame.f_lineno = 380;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_11 };
                        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
                    }

                    Py_DECREF( tmp_called_name_8 );
                    Py_DECREF( tmp_args_element_name_11 );
                    if ( tmp_call_result_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 380;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    Py_DECREF( tmp_call_result_1 );
                }
                {
                    PyObject *tmp_assign_source_45;
                    tmp_assign_source_45 = Py_True;
                    {
                        PyObject *old = var_scalar;
                        assert( old != NULL );
                        var_scalar = tmp_assign_source_45;
                        Py_INCREF( var_scalar );
                        Py_DECREF( old );
                    }

                }
                {
                    PyObject *tmp_called_name_9;
                    PyObject *tmp_source_name_14;
                    PyObject *tmp_call_result_2;
                    PyObject *tmp_args_element_name_12;
                    PyObject *tmp_source_name_15;
                    CHECK_OBJECT( var_scalartypes );
                    tmp_source_name_14 = var_scalartypes;
                    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_append );
                    if ( tmp_called_name_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 382;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( var_newobj );
                    tmp_source_name_15 = var_newobj;
                    tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_dtype );
                    if ( tmp_args_element_name_12 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_9 );

                        exception_lineno = 382;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    frame_ee1e3dbc441c9e366c0de8d04721722d->m_frame.f_lineno = 382;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_12 };
                        tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
                    }

                    Py_DECREF( tmp_called_name_9 );
                    Py_DECREF( tmp_args_element_name_12 );
                    if ( tmp_call_result_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 382;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    Py_DECREF( tmp_call_result_2 );
                }
                goto branch_end_16;
                branch_no_16:;
                {
                    PyObject *tmp_assign_source_46;
                    PyObject *tmp_called_name_10;
                    PyObject *tmp_mvar_value_8;
                    PyObject *tmp_args_element_name_13;
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ndim );

                    if (unlikely( tmp_mvar_value_8 == NULL ))
                    {
                        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ndim );
                    }

                    if ( tmp_mvar_value_8 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ndim" );
                        exception_tb = NULL;

                        exception_lineno = 384;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }

                    tmp_called_name_10 = tmp_mvar_value_8;
                    CHECK_OBJECT( var_item );
                    tmp_args_element_name_13 = var_item;
                    frame_ee1e3dbc441c9e366c0de8d04721722d->m_frame.f_lineno = 384;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_13 };
                        tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
                    }

                    if ( tmp_assign_source_46 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 384;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_item_ndim;
                        var_item_ndim = tmp_assign_source_46;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_47;
                    PyObject *tmp_called_name_11;
                    PyObject *tmp_mvar_value_9;
                    PyObject *tmp_args_name_4;
                    PyObject *tmp_tuple_element_5;
                    PyObject *tmp_kw_name_4;
                    PyObject *tmp_dict_key_5;
                    PyObject *tmp_dict_value_5;
                    PyObject *tmp_dict_key_6;
                    PyObject *tmp_dict_value_6;
                    PyObject *tmp_dict_key_7;
                    PyObject *tmp_dict_value_7;
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_array );

                    if (unlikely( tmp_mvar_value_9 == NULL ))
                    {
                        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
                    }

                    if ( tmp_mvar_value_9 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
                        exception_tb = NULL;

                        exception_lineno = 385;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }

                    tmp_called_name_11 = tmp_mvar_value_9;
                    CHECK_OBJECT( var_item );
                    tmp_tuple_element_5 = var_item;
                    tmp_args_name_4 = PyTuple_New( 1 );
                    Py_INCREF( tmp_tuple_element_5 );
                    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_5 );
                    tmp_dict_value_5 = Py_False;
                    tmp_dict_key_5 = const_str_plain_copy;
                    tmp_kw_name_4 = _PyDict_NewPresized( 3 );
                    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_5, tmp_dict_value_5 );
                    assert( !(tmp_res != 0) );
                    tmp_dict_value_6 = Py_True;
                    tmp_dict_key_6 = const_str_plain_subok;
                    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_6, tmp_dict_value_6 );
                    assert( !(tmp_res != 0) );
                    CHECK_OBJECT( var_ndmin );
                    tmp_dict_value_7 = var_ndmin;
                    tmp_dict_key_7 = const_str_plain_ndmin;
                    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_7, tmp_dict_value_7 );
                    assert( !(tmp_res != 0) );
                    frame_ee1e3dbc441c9e366c0de8d04721722d->m_frame.f_lineno = 385;
                    tmp_assign_source_47 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_4, tmp_kw_name_4 );
                    Py_DECREF( tmp_args_name_4 );
                    Py_DECREF( tmp_kw_name_4 );
                    if ( tmp_assign_source_47 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 385;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_newobj;
                        var_newobj = tmp_assign_source_47;
                        Py_XDECREF( old );
                    }

                }
                {
                    nuitka_bool tmp_condition_result_17;
                    int tmp_and_left_truth_1;
                    nuitka_bool tmp_and_left_value_1;
                    nuitka_bool tmp_and_right_value_1;
                    PyObject *tmp_compexpr_left_13;
                    PyObject *tmp_compexpr_right_13;
                    PyObject *tmp_compexpr_left_14;
                    PyObject *tmp_compexpr_right_14;
                    if ( var_trans1d == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "trans1d" );
                        exception_tb = NULL;

                        exception_lineno = 386;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }

                    tmp_compexpr_left_13 = var_trans1d;
                    tmp_compexpr_right_13 = const_int_neg_1;
                    tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_INT( tmp_compexpr_left_13, tmp_compexpr_right_13 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 386;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_2;
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
                    CHECK_OBJECT( var_item_ndim );
                    tmp_compexpr_left_14 = var_item_ndim;
                    CHECK_OBJECT( var_ndmin );
                    tmp_compexpr_right_14 = var_ndmin;
                    tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_14, tmp_compexpr_right_14 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 386;
                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    tmp_condition_result_17 = tmp_and_right_value_1;
                    goto and_end_1;
                    and_left_1:;
                    tmp_condition_result_17 = tmp_and_left_value_1;
                    and_end_1:;
                    if ( tmp_condition_result_17 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_17;
                    }
                    else
                    {
                        goto branch_no_17;
                    }
                    branch_yes_17:;
                    {
                        PyObject *tmp_assign_source_48;
                        PyObject *tmp_left_name_1;
                        PyObject *tmp_right_name_1;
                        CHECK_OBJECT( var_ndmin );
                        tmp_left_name_1 = var_ndmin;
                        CHECK_OBJECT( var_item_ndim );
                        tmp_right_name_1 = var_item_ndim;
                        tmp_assign_source_48 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
                        if ( tmp_assign_source_48 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 387;
                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            goto try_except_handler_2;
                        }
                        {
                            PyObject *old = var_k2;
                            var_k2 = tmp_assign_source_48;
                            Py_XDECREF( old );
                        }

                    }
                    {
                        PyObject *tmp_assign_source_49;
                        if ( var_trans1d == NULL )
                        {

                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF( exception_type );
                            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "trans1d" );
                            exception_tb = NULL;

                            exception_lineno = 388;
                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            goto try_except_handler_2;
                        }

                        tmp_assign_source_49 = var_trans1d;
                        {
                            PyObject *old = var_k1;
                            var_k1 = tmp_assign_source_49;
                            Py_INCREF( var_k1 );
                            Py_XDECREF( old );
                        }

                    }
                    {
                        nuitka_bool tmp_condition_result_18;
                        PyObject *tmp_compexpr_left_15;
                        PyObject *tmp_compexpr_right_15;
                        CHECK_OBJECT( var_k1 );
                        tmp_compexpr_left_15 = var_k1;
                        tmp_compexpr_right_15 = const_int_0;
                        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_15, tmp_compexpr_right_15 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 389;
                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            goto try_except_handler_2;
                        }
                        tmp_condition_result_18 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        if ( tmp_condition_result_18 == NUITKA_BOOL_TRUE )
                        {
                            goto branch_yes_18;
                        }
                        else
                        {
                            goto branch_no_18;
                        }
                        branch_yes_18:;
                        {
                            PyObject *tmp_assign_source_50;
                            PyObject *tmp_left_name_2;
                            PyObject *tmp_right_name_2;
                            PyObject *tmp_left_name_3;
                            PyObject *tmp_right_name_3;
                            CHECK_OBJECT( var_k1 );
                            tmp_left_name_2 = var_k1;
                            CHECK_OBJECT( var_k2 );
                            tmp_left_name_3 = var_k2;
                            tmp_right_name_3 = const_int_pos_1;
                            tmp_right_name_2 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_3, tmp_right_name_3 );
                            if ( tmp_right_name_2 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 390;
                                type_description_1 = "ooooooooooooooooooooooooooooooo";
                                goto try_except_handler_2;
                            }
                            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
                            Py_DECREF( tmp_right_name_2 );
                            if ( tmp_result == false )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 390;
                                type_description_1 = "ooooooooooooooooooooooooooooooo";
                                goto try_except_handler_2;
                            }
                            tmp_assign_source_50 = tmp_left_name_2;
                            var_k1 = tmp_assign_source_50;

                        }
                        branch_no_18:;
                    }
                    {
                        PyObject *tmp_assign_source_51;
                        PyObject *tmp_list_arg_1;
                        PyObject *tmp_range_arg_1;
                        CHECK_OBJECT( var_ndmin );
                        tmp_range_arg_1 = var_ndmin;
                        tmp_list_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
                        if ( tmp_list_arg_1 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 391;
                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            goto try_except_handler_2;
                        }
                        tmp_assign_source_51 = PySequence_List( tmp_list_arg_1 );
                        Py_DECREF( tmp_list_arg_1 );
                        if ( tmp_assign_source_51 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 391;
                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            goto try_except_handler_2;
                        }
                        {
                            PyObject *old = var_defaxes;
                            var_defaxes = tmp_assign_source_51;
                            Py_XDECREF( old );
                        }

                    }
                    {
                        PyObject *tmp_assign_source_52;
                        PyObject *tmp_left_name_4;
                        PyObject *tmp_left_name_5;
                        PyObject *tmp_slice_source_2;
                        PyObject *tmp_slice_upper_1;
                        PyObject *tmp_right_name_4;
                        PyObject *tmp_slice_source_3;
                        PyObject *tmp_slice_lower_1;
                        PyObject *tmp_right_name_5;
                        PyObject *tmp_slice_source_4;
                        PyObject *tmp_slice_lower_2;
                        PyObject *tmp_slice_upper_2;
                        CHECK_OBJECT( var_defaxes );
                        tmp_slice_source_2 = var_defaxes;
                        CHECK_OBJECT( var_k1 );
                        tmp_slice_upper_1 = var_k1;
                        tmp_left_name_5 = LOOKUP_SLICE( tmp_slice_source_2, Py_None, tmp_slice_upper_1 );
                        if ( tmp_left_name_5 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 392;
                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            goto try_except_handler_2;
                        }
                        CHECK_OBJECT( var_defaxes );
                        tmp_slice_source_3 = var_defaxes;
                        CHECK_OBJECT( var_k2 );
                        tmp_slice_lower_1 = var_k2;
                        tmp_right_name_4 = LOOKUP_SLICE( tmp_slice_source_3, tmp_slice_lower_1, Py_None );
                        if ( tmp_right_name_4 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_left_name_5 );

                            exception_lineno = 392;
                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            goto try_except_handler_2;
                        }
                        tmp_left_name_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_4 );
                        Py_DECREF( tmp_left_name_5 );
                        Py_DECREF( tmp_right_name_4 );
                        if ( tmp_left_name_4 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 392;
                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            goto try_except_handler_2;
                        }
                        CHECK_OBJECT( var_defaxes );
                        tmp_slice_source_4 = var_defaxes;
                        CHECK_OBJECT( var_k1 );
                        tmp_slice_lower_2 = var_k1;
                        CHECK_OBJECT( var_k2 );
                        tmp_slice_upper_2 = var_k2;
                        tmp_right_name_5 = LOOKUP_SLICE( tmp_slice_source_4, tmp_slice_lower_2, tmp_slice_upper_2 );
                        if ( tmp_right_name_5 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_left_name_4 );

                            exception_lineno = 392;
                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            goto try_except_handler_2;
                        }
                        tmp_assign_source_52 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_5 );
                        Py_DECREF( tmp_left_name_4 );
                        Py_DECREF( tmp_right_name_5 );
                        if ( tmp_assign_source_52 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 392;
                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            goto try_except_handler_2;
                        }
                        {
                            PyObject *old = var_axes;
                            var_axes = tmp_assign_source_52;
                            Py_XDECREF( old );
                        }

                    }
                    {
                        PyObject *tmp_assign_source_53;
                        PyObject *tmp_called_instance_4;
                        PyObject *tmp_args_element_name_14;
                        CHECK_OBJECT( var_newobj );
                        tmp_called_instance_4 = var_newobj;
                        CHECK_OBJECT( var_axes );
                        tmp_args_element_name_14 = var_axes;
                        frame_ee1e3dbc441c9e366c0de8d04721722d->m_frame.f_lineno = 393;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_14 };
                            tmp_assign_source_53 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_transpose, call_args );
                        }

                        if ( tmp_assign_source_53 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 393;
                            type_description_1 = "ooooooooooooooooooooooooooooooo";
                            goto try_except_handler_2;
                        }
                        {
                            PyObject *old = var_newobj;
                            assert( old != NULL );
                            var_newobj = tmp_assign_source_53;
                            Py_DECREF( old );
                        }

                    }
                    branch_no_17:;
                }
                branch_end_16:;
            }
            branch_end_9:;
        }
        branch_end_3:;
    }
    {
        PyObject *tmp_called_name_12;
        PyObject *tmp_source_name_16;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_15;
        CHECK_OBJECT( var_objs );
        tmp_source_name_16 = var_objs;
        tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_append );
        if ( tmp_called_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 394;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if ( var_newobj == NULL )
        {
            Py_DECREF( tmp_called_name_12 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "newobj" );
            exception_tb = NULL;

            exception_lineno = 394;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_15 = var_newobj;
        frame_ee1e3dbc441c9e366c0de8d04721722d->m_frame.f_lineno = 394;
        {
            PyObject *call_args[] = { tmp_args_element_name_15 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
        }

        Py_DECREF( tmp_called_name_12 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 394;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    {
        nuitka_bool tmp_condition_result_19;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_isinstance_inst_6;
        PyObject *tmp_isinstance_cls_6;
        PyObject *tmp_source_name_17;
        PyObject *tmp_mvar_value_10;
        if ( var_scalar == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "scalar" );
            exception_tb = NULL;

            exception_lineno = 395;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_operand_name_2 = var_scalar;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 395;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_left_value_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        if ( var_newobj == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "newobj" );
            exception_tb = NULL;

            exception_lineno = 395;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_isinstance_inst_6 = var_newobj;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
            exception_tb = NULL;

            exception_lineno = 395;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_17 = tmp_mvar_value_10;
        tmp_isinstance_cls_6 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_ndarray );
        if ( tmp_isinstance_cls_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 395;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_6, tmp_isinstance_cls_6 );
        Py_DECREF( tmp_isinstance_cls_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 395;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_19 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_19 = tmp_and_left_value_2;
        and_end_2:;
        if ( tmp_condition_result_19 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_19;
        }
        else
        {
            goto branch_no_19;
        }
        branch_yes_19:;
        {
            PyObject *tmp_called_name_13;
            PyObject *tmp_source_name_18;
            PyObject *tmp_call_result_4;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_source_name_19;
            CHECK_OBJECT( var_arraytypes );
            tmp_source_name_18 = var_arraytypes;
            tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_append );
            if ( tmp_called_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 396;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            if ( var_newobj == NULL )
            {
                Py_DECREF( tmp_called_name_13 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "newobj" );
                exception_tb = NULL;

                exception_lineno = 396;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_19 = var_newobj;
            tmp_args_element_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_dtype );
            if ( tmp_args_element_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_13 );

                exception_lineno = 396;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            frame_ee1e3dbc441c9e366c0de8d04721722d->m_frame.f_lineno = 396;
            {
                PyObject *call_args[] = { tmp_args_element_name_16 };
                tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
            }

            Py_DECREF( tmp_called_name_13 );
            Py_DECREF( tmp_args_element_name_16 );
            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 396;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        branch_no_19:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 337;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_name_14;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_args_element_name_18;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_find_common_type );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_find_common_type );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "find_common_type" );
            exception_tb = NULL;

            exception_lineno = 399;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_14 = tmp_mvar_value_11;
        CHECK_OBJECT( var_arraytypes );
        tmp_args_element_name_17 = var_arraytypes;
        CHECK_OBJECT( var_scalartypes );
        tmp_args_element_name_18 = var_scalartypes;
        frame_ee1e3dbc441c9e366c0de8d04721722d->m_frame.f_lineno = 399;
        {
            PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18 };
            tmp_assign_source_54 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_14, call_args );
        }

        if ( tmp_assign_source_54 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 399;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_final_dtype == NULL );
        var_final_dtype = tmp_assign_source_54;
    }
    {
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_compexpr_left_16;
        PyObject *tmp_compexpr_right_16;
        CHECK_OBJECT( var_final_dtype );
        tmp_compexpr_left_16 = var_final_dtype;
        tmp_compexpr_right_16 = Py_None;
        tmp_condition_result_20 = ( tmp_compexpr_left_16 != tmp_compexpr_right_16 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_20 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_20;
        }
        else
        {
            goto branch_no_20;
        }
        branch_yes_20:;
        {
            PyObject *tmp_assign_source_55;
            PyObject *tmp_iter_arg_5;
            CHECK_OBJECT( var_scalars );
            tmp_iter_arg_5 = var_scalars;
            tmp_assign_source_55 = MAKE_ITERATOR( tmp_iter_arg_5 );
            if ( tmp_assign_source_55 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 401;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_for_loop_2__for_iterator == NULL );
            tmp_for_loop_2__for_iterator = tmp_assign_source_55;
        }
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_56;
            CHECK_OBJECT( tmp_for_loop_2__for_iterator );
            tmp_next_source_3 = tmp_for_loop_2__for_iterator;
            tmp_assign_source_56 = ITERATOR_NEXT( tmp_next_source_3 );
            if ( tmp_assign_source_56 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_3;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    exception_lineno = 401;
                    goto try_except_handler_10;
                }
            }

            {
                PyObject *old = tmp_for_loop_2__iter_value;
                tmp_for_loop_2__iter_value = tmp_assign_source_56;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_57;
            CHECK_OBJECT( tmp_for_loop_2__iter_value );
            tmp_assign_source_57 = tmp_for_loop_2__iter_value;
            {
                PyObject *old = var_k;
                var_k = tmp_assign_source_57;
                Py_INCREF( var_k );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_args_element_name_19;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            CHECK_OBJECT( var_objs );
            tmp_subscribed_name_2 = var_objs;
            CHECK_OBJECT( var_k );
            tmp_subscript_name_2 = var_k;
            tmp_called_instance_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_called_instance_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 402;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_10;
            }
            CHECK_OBJECT( var_final_dtype );
            tmp_args_element_name_19 = var_final_dtype;
            frame_ee1e3dbc441c9e366c0de8d04721722d->m_frame.f_lineno = 402;
            {
                PyObject *call_args[] = { tmp_args_element_name_19 };
                tmp_ass_subvalue_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_astype, call_args );
            }

            Py_DECREF( tmp_called_instance_5 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 402;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_10;
            }
            CHECK_OBJECT( var_objs );
            tmp_ass_subscribed_1 = var_objs;
            CHECK_OBJECT( var_k );
            tmp_ass_subscript_1 = var_k;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 402;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_10;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 401;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        goto loop_start_3;
        loop_end_3:;
        goto try_end_8;
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

        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto frame_exception_exit_1;
        // End of try:
        try_end_8:;
        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        branch_no_20:;
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_name_15;
        PyObject *tmp_source_name_20;
        PyObject *tmp_args_name_5;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_tuple_arg_1;
        PyObject *tmp_kw_name_5;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        CHECK_OBJECT( par_self );
        tmp_source_name_20 = par_self;
        tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_concatenate );
        if ( tmp_called_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 404;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_objs );
        tmp_tuple_arg_1 = var_objs;
        tmp_tuple_element_6 = PySequence_Tuple( tmp_tuple_arg_1 );
        if ( tmp_tuple_element_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_15 );

            exception_lineno = 404;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_5 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_6 );
        CHECK_OBJECT( var_axis );
        tmp_dict_value_8 = var_axis;
        tmp_dict_key_8 = const_str_plain_axis;
        tmp_kw_name_5 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        frame_ee1e3dbc441c9e366c0de8d04721722d->m_frame.f_lineno = 404;
        tmp_assign_source_58 = CALL_FUNCTION( tmp_called_name_15, tmp_args_name_5, tmp_kw_name_5 );
        Py_DECREF( tmp_called_name_15 );
        Py_DECREF( tmp_args_name_5 );
        Py_DECREF( tmp_kw_name_5 );
        if ( tmp_assign_source_58 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 404;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_res == NULL );
        var_res = tmp_assign_source_58;
    }
    {
        nuitka_bool tmp_condition_result_21;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_matrix );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_matrix );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_21 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_21 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_21;
        }
        else
        {
            goto branch_no_21;
        }
        branch_yes_21:;
        {
            PyObject *tmp_assign_source_59;
            PyObject *tmp_source_name_21;
            CHECK_OBJECT( var_res );
            tmp_source_name_21 = var_res;
            tmp_assign_source_59 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_ndim );
            if ( tmp_assign_source_59 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 407;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_oldndim == NULL );
            var_oldndim = tmp_assign_source_59;
        }
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_name_20;
            CHECK_OBJECT( par_self );
            tmp_called_instance_6 = par_self;
            CHECK_OBJECT( var_res );
            tmp_args_element_name_20 = var_res;
            frame_ee1e3dbc441c9e366c0de8d04721722d->m_frame.f_lineno = 408;
            {
                PyObject *call_args[] = { tmp_args_element_name_20 };
                tmp_assign_source_60 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_makemat, call_args );
            }

            if ( tmp_assign_source_60 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 408;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_res;
                assert( old != NULL );
                var_res = tmp_assign_source_60;
                Py_DECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_22;
            int tmp_and_left_truth_3;
            nuitka_bool tmp_and_left_value_3;
            nuitka_bool tmp_and_right_value_3;
            PyObject *tmp_compexpr_left_17;
            PyObject *tmp_compexpr_right_17;
            int tmp_truth_name_2;
            CHECK_OBJECT( var_oldndim );
            tmp_compexpr_left_17 = var_oldndim;
            tmp_compexpr_right_17 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_17, tmp_compexpr_right_17 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 409;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
            if ( tmp_and_left_truth_3 == 1 )
            {
                goto and_right_3;
            }
            else
            {
                goto and_left_3;
            }
            and_right_3:;
            if ( var_col == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "col" );
                exception_tb = NULL;

                exception_lineno = 409;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_truth_name_2 = CHECK_IF_TRUE( var_col );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 409;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_22 = tmp_and_right_value_3;
            goto and_end_3;
            and_left_3:;
            tmp_condition_result_22 = tmp_and_left_value_3;
            and_end_3:;
            if ( tmp_condition_result_22 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_22;
            }
            else
            {
                goto branch_no_22;
            }
            branch_yes_22:;
            {
                PyObject *tmp_assign_source_61;
                PyObject *tmp_source_name_22;
                CHECK_OBJECT( var_res );
                tmp_source_name_22 = var_res;
                tmp_assign_source_61 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_T );
                if ( tmp_assign_source_61 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 410;
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_res;
                    assert( old != NULL );
                    var_res = tmp_assign_source_61;
                    Py_DECREF( old );
                }

            }
            branch_no_22:;
        }
        branch_no_21:;
    }
    if ( var_res == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "res" );
        exception_tb = NULL;

        exception_lineno = 411;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_res;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_ee1e3dbc441c9e366c0de8d04721722d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_ee1e3dbc441c9e366c0de8d04721722d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_ee1e3dbc441c9e366c0de8d04721722d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ee1e3dbc441c9e366c0de8d04721722d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ee1e3dbc441c9e366c0de8d04721722d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ee1e3dbc441c9e366c0de8d04721722d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ee1e3dbc441c9e366c0de8d04721722d,
        type_description_1,
        par_self,
        par_key,
        var_objs,
        var_frame,
        var_final_dtype,
        var_newobj,
        var_scalar,
        var_defaxes,
        var_size,
        var_matrix,
        var_k2,
        var_oldndim,
        var_res,
        var_axes,
        var_arraytypes,
        var_start,
        var_k1,
        var_vec,
        var_axis,
        var_ndmin,
        var_trans1d,
        var_scalars,
        var_stop,
        var_item_ndim,
        var_step,
        var_mymat,
        var_k,
        var_scalartypes,
        var_item,
        var_x,
        var_col
    );


    // Release cached frame.
    if ( frame_ee1e3dbc441c9e366c0de8d04721722d == cache_frame_ee1e3dbc441c9e366c0de8d04721722d )
    {
        Py_DECREF( frame_ee1e3dbc441c9e366c0de8d04721722d );
    }
    cache_frame_ee1e3dbc441c9e366c0de8d04721722d = NULL;

    assertFrameObject( frame_ee1e3dbc441c9e366c0de8d04721722d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_8___getitem__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_objs );
    var_objs = NULL;

    Py_XDECREF( var_frame );
    var_frame = NULL;

    Py_XDECREF( var_final_dtype );
    var_final_dtype = NULL;

    Py_XDECREF( var_newobj );
    var_newobj = NULL;

    Py_XDECREF( var_scalar );
    var_scalar = NULL;

    Py_XDECREF( var_defaxes );
    var_defaxes = NULL;

    Py_XDECREF( var_size );
    var_size = NULL;

    Py_XDECREF( var_matrix );
    var_matrix = NULL;

    Py_XDECREF( var_k2 );
    var_k2 = NULL;

    Py_XDECREF( var_oldndim );
    var_oldndim = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_axes );
    var_axes = NULL;

    Py_XDECREF( var_arraytypes );
    var_arraytypes = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_k1 );
    var_k1 = NULL;

    Py_XDECREF( var_vec );
    var_vec = NULL;

    Py_XDECREF( var_axis );
    var_axis = NULL;

    Py_XDECREF( var_ndmin );
    var_ndmin = NULL;

    Py_XDECREF( var_trans1d );
    var_trans1d = NULL;

    Py_XDECREF( var_scalars );
    var_scalars = NULL;

    Py_XDECREF( var_stop );
    var_stop = NULL;

    Py_XDECREF( var_item_ndim );
    var_item_ndim = NULL;

    Py_XDECREF( var_step );
    var_step = NULL;

    Py_XDECREF( par_key );
    par_key = NULL;

    Py_XDECREF( var_mymat );
    var_mymat = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_scalartypes );
    var_scalartypes = NULL;

    Py_XDECREF( var_item );
    var_item = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_col );
    var_col = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_objs );
    var_objs = NULL;

    Py_XDECREF( var_frame );
    var_frame = NULL;

    Py_XDECREF( var_final_dtype );
    var_final_dtype = NULL;

    Py_XDECREF( var_newobj );
    var_newobj = NULL;

    Py_XDECREF( var_scalar );
    var_scalar = NULL;

    Py_XDECREF( var_defaxes );
    var_defaxes = NULL;

    Py_XDECREF( var_size );
    var_size = NULL;

    Py_XDECREF( var_matrix );
    var_matrix = NULL;

    Py_XDECREF( var_k2 );
    var_k2 = NULL;

    Py_XDECREF( var_oldndim );
    var_oldndim = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_axes );
    var_axes = NULL;

    Py_XDECREF( var_arraytypes );
    var_arraytypes = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_k1 );
    var_k1 = NULL;

    Py_XDECREF( var_vec );
    var_vec = NULL;

    Py_XDECREF( var_axis );
    var_axis = NULL;

    Py_XDECREF( var_ndmin );
    var_ndmin = NULL;

    Py_XDECREF( var_trans1d );
    var_trans1d = NULL;

    Py_XDECREF( var_scalars );
    var_scalars = NULL;

    Py_XDECREF( var_stop );
    var_stop = NULL;

    Py_XDECREF( var_item_ndim );
    var_item_ndim = NULL;

    Py_XDECREF( var_step );
    var_step = NULL;

    Py_XDECREF( par_key );
    par_key = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_scalartypes );
    var_scalartypes = NULL;

    Py_XDECREF( var_item );
    var_item = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_col );
    var_col = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_8___getitem__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_9___len__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = const_int_0;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_9___len__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_9___len__ );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$index_tricks$$$function_10___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_2c7028226c767c9125c05937ac4230be;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2c7028226c767c9125c05937ac4230be = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2c7028226c767c9125c05937ac4230be, codeobj_2c7028226c767c9125c05937ac4230be, module_numpy$lib$index_tricks, sizeof(void *) );
    frame_2c7028226c767c9125c05937ac4230be = cache_frame_2c7028226c767c9125c05937ac4230be;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2c7028226c767c9125c05937ac4230be );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2c7028226c767c9125c05937ac4230be ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "AxisConcatenator" );
            exception_tb = NULL;

            exception_lineno = 516;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_args_element_name_1 = par_self;
        tmp_args_element_name_2 = const_int_0;
        frame_2c7028226c767c9125c05937ac4230be->m_frame.f_lineno = 516;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain___init__, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 516;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2c7028226c767c9125c05937ac4230be );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2c7028226c767c9125c05937ac4230be );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2c7028226c767c9125c05937ac4230be, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2c7028226c767c9125c05937ac4230be->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2c7028226c767c9125c05937ac4230be, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2c7028226c767c9125c05937ac4230be,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_2c7028226c767c9125c05937ac4230be == cache_frame_2c7028226c767c9125c05937ac4230be )
    {
        Py_DECREF( frame_2c7028226c767c9125c05937ac4230be );
    }
    cache_frame_2c7028226c767c9125c05937ac4230be = NULL;

    assertFrameObject( frame_2c7028226c767c9125c05937ac4230be );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_10___init__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_10___init__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_11___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_8b4f8611bc7c474c37951a950fa1930b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8b4f8611bc7c474c37951a950fa1930b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8b4f8611bc7c474c37951a950fa1930b, codeobj_8b4f8611bc7c474c37951a950fa1930b, module_numpy$lib$index_tricks, sizeof(void *) );
    frame_8b4f8611bc7c474c37951a950fa1930b = cache_frame_8b4f8611bc7c474c37951a950fa1930b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8b4f8611bc7c474c37951a950fa1930b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8b4f8611bc7c474c37951a950fa1930b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "AxisConcatenator" );
            exception_tb = NULL;

            exception_lineno = 546;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 546;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_tuple_element_1 = par_self;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_int_neg_1;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_4e0f6bd0fa1bf86b2858b03e8f58c253 );
        frame_8b4f8611bc7c474c37951a950fa1930b->m_frame.f_lineno = 546;
        tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 546;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8b4f8611bc7c474c37951a950fa1930b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8b4f8611bc7c474c37951a950fa1930b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8b4f8611bc7c474c37951a950fa1930b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8b4f8611bc7c474c37951a950fa1930b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8b4f8611bc7c474c37951a950fa1930b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8b4f8611bc7c474c37951a950fa1930b,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_8b4f8611bc7c474c37951a950fa1930b == cache_frame_8b4f8611bc7c474c37951a950fa1930b )
    {
        Py_DECREF( frame_8b4f8611bc7c474c37951a950fa1930b );
    }
    cache_frame_8b4f8611bc7c474c37951a950fa1930b = NULL;

    assertFrameObject( frame_8b4f8611bc7c474c37951a950fa1930b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_11___init__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_11___init__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_12___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_arr = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_f80bba10489919ef0e16e9d0214f1893;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_f80bba10489919ef0e16e9d0214f1893 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f80bba10489919ef0e16e9d0214f1893, codeobj_f80bba10489919ef0e16e9d0214f1893, module_numpy$lib$index_tricks, sizeof(void *)+sizeof(void *) );
    frame_f80bba10489919ef0e16e9d0214f1893 = cache_frame_f80bba10489919ef0e16e9d0214f1893;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f80bba10489919ef0e16e9d0214f1893 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f80bba10489919ef0e16e9d0214f1893 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_asarray );

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

            exception_lineno = 581;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_arr );
        tmp_args_element_name_1 = par_arr;
        frame_f80bba10489919ef0e16e9d0214f1893->m_frame.f_lineno = 581;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 581;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_flat );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 581;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_iter, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 581;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f80bba10489919ef0e16e9d0214f1893 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f80bba10489919ef0e16e9d0214f1893 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f80bba10489919ef0e16e9d0214f1893, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f80bba10489919ef0e16e9d0214f1893->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f80bba10489919ef0e16e9d0214f1893, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f80bba10489919ef0e16e9d0214f1893,
        type_description_1,
        par_self,
        par_arr
    );


    // Release cached frame.
    if ( frame_f80bba10489919ef0e16e9d0214f1893 == cache_frame_f80bba10489919ef0e16e9d0214f1893 )
    {
        Py_DECREF( frame_f80bba10489919ef0e16e9d0214f1893 );
    }
    cache_frame_f80bba10489919ef0e16e9d0214f1893 = NULL;

    assertFrameObject( frame_f80bba10489919ef0e16e9d0214f1893 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_12___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_12___init__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_13___next__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_7008f10fc7e223b5df75d4d28834a215;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7008f10fc7e223b5df75d4d28834a215 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7008f10fc7e223b5df75d4d28834a215, codeobj_7008f10fc7e223b5df75d4d28834a215, module_numpy$lib$index_tricks, sizeof(void *) );
    frame_7008f10fc7e223b5df75d4d28834a215 = cache_frame_7008f10fc7e223b5df75d4d28834a215;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7008f10fc7e223b5df75d4d28834a215 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7008f10fc7e223b5df75d4d28834a215 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_value_name_1;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_iter );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 595;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coords );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 595;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_value_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_iter );
        if ( tmp_value_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 595;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = ITERATOR_NEXT( tmp_value_name_1 );
        Py_DECREF( tmp_value_name_1 );
        if ( tmp_tuple_element_1 == NULL )
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
            Py_DECREF( tmp_return_value );

            type_description_1 = "o";
            exception_lineno = 595;
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7008f10fc7e223b5df75d4d28834a215 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7008f10fc7e223b5df75d4d28834a215 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7008f10fc7e223b5df75d4d28834a215 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7008f10fc7e223b5df75d4d28834a215, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7008f10fc7e223b5df75d4d28834a215->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7008f10fc7e223b5df75d4d28834a215, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7008f10fc7e223b5df75d4d28834a215,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_7008f10fc7e223b5df75d4d28834a215 == cache_frame_7008f10fc7e223b5df75d4d28834a215 )
    {
        Py_DECREF( frame_7008f10fc7e223b5df75d4d28834a215 );
    }
    cache_frame_7008f10fc7e223b5df75d4d28834a215 = NULL;

    assertFrameObject( frame_7008f10fc7e223b5df75d4d28834a215 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_13___next__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_13___next__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_14___iter__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    CHECK_OBJECT( par_self );
    tmp_return_value = par_self;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_14___iter__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_14___iter__ );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$index_tricks$$$function_15___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_shape = python_pars[ 1 ];
    PyObject *var_x = NULL;
    struct Nuitka_FrameObject *frame_918f8fea7417c0a2273456875a588f44;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_918f8fea7417c0a2273456875a588f44 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_918f8fea7417c0a2273456875a588f44, codeobj_918f8fea7417c0a2273456875a588f44, module_numpy$lib$index_tricks, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_918f8fea7417c0a2273456875a588f44 = cache_frame_918f8fea7417c0a2273456875a588f44;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_918f8fea7417c0a2273456875a588f44 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_918f8fea7417c0a2273456875a588f44 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_shape );
        tmp_len_arg_1 = par_shape;
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 635;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        assert( !(tmp_res == -1) );
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
        CHECK_OBJECT( par_shape );
        tmp_subscribed_name_1 = par_shape;
        tmp_subscript_name_1 = const_int_0;
        tmp_isinstance_inst_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_isinstance_inst_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 635;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_inst_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 635;
            type_description_1 = "ooo";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( par_shape );
            tmp_subscribed_name_2 = par_shape;
            tmp_subscript_name_2 = const_int_0;
            tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 636;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_shape;
                assert( old != NULL );
                par_shape = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_as_strided );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_as_strided );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "as_strided" );
            exception_tb = NULL;

            exception_lineno = 637;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

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

            exception_lineno = 637;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        frame_918f8fea7417c0a2273456875a588f44->m_frame.f_lineno = 637;
        tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_zeros, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 637;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_shape );
        tmp_dict_value_1 = par_shape;
        tmp_dict_key_1 = const_str_plain_shape;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
            exception_tb = NULL;

            exception_lineno = 638;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_3;
        CHECK_OBJECT( par_shape );
        tmp_args_element_name_1 = par_shape;
        frame_918f8fea7417c0a2273456875a588f44->m_frame.f_lineno = 638;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_dict_value_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_zeros_like, call_args );
        }

        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );

            exception_lineno = 638;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = const_str_plain_strides;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_918f8fea7417c0a2273456875a588f44->m_frame.f_lineno = 637;
        tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 637;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_x == NULL );
        var_x = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

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

            exception_lineno = 639;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_4;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_nditer );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 639;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_x );
        tmp_tuple_element_2 = var_x;
        tmp_args_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_kw_name_2 = DEEP_COPY( const_dict_24180b9cdfcea30958fba9a165d5c6dd );
        frame_918f8fea7417c0a2273456875a588f44->m_frame.f_lineno = 639;
        tmp_assattr_name_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 639;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__it, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 639;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_918f8fea7417c0a2273456875a588f44 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_918f8fea7417c0a2273456875a588f44 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_918f8fea7417c0a2273456875a588f44, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_918f8fea7417c0a2273456875a588f44->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_918f8fea7417c0a2273456875a588f44, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_918f8fea7417c0a2273456875a588f44,
        type_description_1,
        par_self,
        par_shape,
        var_x
    );


    // Release cached frame.
    if ( frame_918f8fea7417c0a2273456875a588f44 == cache_frame_918f8fea7417c0a2273456875a588f44 )
    {
        Py_DECREF( frame_918f8fea7417c0a2273456875a588f44 );
    }
    cache_frame_918f8fea7417c0a2273456875a588f44 = NULL;

    assertFrameObject( frame_918f8fea7417c0a2273456875a588f44 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_15___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_shape );
    Py_DECREF( par_shape );
    par_shape = NULL;

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

    Py_XDECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_shape );
    par_shape = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_15___init__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_16___iter__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    CHECK_OBJECT( par_self );
    tmp_return_value = par_self;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_16___iter__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_16___iter__ );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$index_tricks$$$function_17_ndincr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_7f6ee236428b5c4a8469969ecbe1c2ad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7f6ee236428b5c4a8469969ecbe1c2ad = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7f6ee236428b5c4a8469969ecbe1c2ad, codeobj_7f6ee236428b5c4a8469969ecbe1c2ad, module_numpy$lib$index_tricks, sizeof(void *) );
    frame_7f6ee236428b5c4a8469969ecbe1c2ad = cache_frame_7f6ee236428b5c4a8469969ecbe1c2ad;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7f6ee236428b5c4a8469969ecbe1c2ad );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7f6ee236428b5c4a8469969ecbe1c2ad ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_value_name_1;
        PyObject *tmp_next_value_1;
        CHECK_OBJECT( par_self );
        tmp_value_name_1 = par_self;
        tmp_next_value_1 = ITERATOR_NEXT( tmp_value_name_1 );
        if ( tmp_next_value_1 == NULL )
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


            type_description_1 = "o";
            exception_lineno = 651;
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_next_value_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7f6ee236428b5c4a8469969ecbe1c2ad );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7f6ee236428b5c4a8469969ecbe1c2ad );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7f6ee236428b5c4a8469969ecbe1c2ad, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7f6ee236428b5c4a8469969ecbe1c2ad->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7f6ee236428b5c4a8469969ecbe1c2ad, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7f6ee236428b5c4a8469969ecbe1c2ad,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_7f6ee236428b5c4a8469969ecbe1c2ad == cache_frame_7f6ee236428b5c4a8469969ecbe1c2ad )
    {
        Py_DECREF( frame_7f6ee236428b5c4a8469969ecbe1c2ad );
    }
    cache_frame_7f6ee236428b5c4a8469969ecbe1c2ad = NULL;

    assertFrameObject( frame_7f6ee236428b5c4a8469969ecbe1c2ad );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_17_ndincr );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_17_ndincr );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_18___next__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_0ed8016e12b1f9b3ad0d85ab097172cb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0ed8016e12b1f9b3ad0d85ab097172cb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0ed8016e12b1f9b3ad0d85ab097172cb, codeobj_0ed8016e12b1f9b3ad0d85ab097172cb, module_numpy$lib$index_tricks, sizeof(void *) );
    frame_0ed8016e12b1f9b3ad0d85ab097172cb = cache_frame_0ed8016e12b1f9b3ad0d85ab097172cb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0ed8016e12b1f9b3ad0d85ab097172cb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0ed8016e12b1f9b3ad0d85ab097172cb ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_value_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_next_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_value_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__it );
        if ( tmp_value_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 665;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_next_value_1 = ITERATOR_NEXT( tmp_value_name_1 );
        Py_DECREF( tmp_value_name_1 );
        if ( tmp_next_value_1 == NULL )
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


            type_description_1 = "o";
            exception_lineno = 665;
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_next_value_1 );
    }
    {
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__it );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 666;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_multi_index );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 666;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0ed8016e12b1f9b3ad0d85ab097172cb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0ed8016e12b1f9b3ad0d85ab097172cb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0ed8016e12b1f9b3ad0d85ab097172cb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0ed8016e12b1f9b3ad0d85ab097172cb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0ed8016e12b1f9b3ad0d85ab097172cb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0ed8016e12b1f9b3ad0d85ab097172cb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0ed8016e12b1f9b3ad0d85ab097172cb,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_0ed8016e12b1f9b3ad0d85ab097172cb == cache_frame_0ed8016e12b1f9b3ad0d85ab097172cb )
    {
        Py_DECREF( frame_0ed8016e12b1f9b3ad0d85ab097172cb );
    }
    cache_frame_0ed8016e12b1f9b3ad0d85ab097172cb = NULL;

    assertFrameObject( frame_0ed8016e12b1f9b3ad0d85ab097172cb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_18___next__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_18___next__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_19___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_maketuple = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_4e20cd1670023c7293a2b0b2bb9f42ce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4e20cd1670023c7293a2b0b2bb9f42ce = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4e20cd1670023c7293a2b0b2bb9f42ce, codeobj_4e20cd1670023c7293a2b0b2bb9f42ce, module_numpy$lib$index_tricks, sizeof(void *)+sizeof(void *) );
    frame_4e20cd1670023c7293a2b0b2bb9f42ce = cache_frame_4e20cd1670023c7293a2b0b2bb9f42ce;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4e20cd1670023c7293a2b0b2bb9f42ce );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4e20cd1670023c7293a2b0b2bb9f42ce ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_maketuple );
        tmp_assattr_name_1 = par_maketuple;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_maketuple, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 727;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4e20cd1670023c7293a2b0b2bb9f42ce );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4e20cd1670023c7293a2b0b2bb9f42ce );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4e20cd1670023c7293a2b0b2bb9f42ce, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4e20cd1670023c7293a2b0b2bb9f42ce->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4e20cd1670023c7293a2b0b2bb9f42ce, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4e20cd1670023c7293a2b0b2bb9f42ce,
        type_description_1,
        par_self,
        par_maketuple
    );


    // Release cached frame.
    if ( frame_4e20cd1670023c7293a2b0b2bb9f42ce == cache_frame_4e20cd1670023c7293a2b0b2bb9f42ce )
    {
        Py_DECREF( frame_4e20cd1670023c7293a2b0b2bb9f42ce );
    }
    cache_frame_4e20cd1670023c7293a2b0b2bb9f42ce = NULL;

    assertFrameObject( frame_4e20cd1670023c7293a2b0b2bb9f42ce );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_19___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_maketuple );
    Py_DECREF( par_maketuple );
    par_maketuple = NULL;

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

    CHECK_OBJECT( (PyObject *)par_maketuple );
    Py_DECREF( par_maketuple );
    par_maketuple = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_19___init__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_20___getitem__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_item = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_517acd3568f021fe2bee67d4dd826ce5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_517acd3568f021fe2bee67d4dd826ce5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_517acd3568f021fe2bee67d4dd826ce5, codeobj_517acd3568f021fe2bee67d4dd826ce5, module_numpy$lib$index_tricks, sizeof(void *)+sizeof(void *) );
    frame_517acd3568f021fe2bee67d4dd826ce5 = cache_frame_517acd3568f021fe2bee67d4dd826ce5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_517acd3568f021fe2bee67d4dd826ce5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_517acd3568f021fe2bee67d4dd826ce5 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_maketuple );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 730;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 730;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
        CHECK_OBJECT( par_item );
        tmp_isinstance_inst_1 = par_item;
        tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 730;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 730;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( par_item );
            tmp_tuple_element_1 = par_item;
            tmp_return_value = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        CHECK_OBJECT( par_item );
        tmp_return_value = par_item;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_517acd3568f021fe2bee67d4dd826ce5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_517acd3568f021fe2bee67d4dd826ce5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_517acd3568f021fe2bee67d4dd826ce5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_517acd3568f021fe2bee67d4dd826ce5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_517acd3568f021fe2bee67d4dd826ce5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_517acd3568f021fe2bee67d4dd826ce5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_517acd3568f021fe2bee67d4dd826ce5,
        type_description_1,
        par_self,
        par_item
    );


    // Release cached frame.
    if ( frame_517acd3568f021fe2bee67d4dd826ce5 == cache_frame_517acd3568f021fe2bee67d4dd826ce5 )
    {
        Py_DECREF( frame_517acd3568f021fe2bee67d4dd826ce5 );
    }
    cache_frame_517acd3568f021fe2bee67d4dd826ce5 = NULL;

    assertFrameObject( frame_517acd3568f021fe2bee67d4dd826ce5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_20___getitem__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_item );
    Py_DECREF( par_item );
    par_item = NULL;

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

    CHECK_OBJECT( (PyObject *)par_item );
    Py_DECREF( par_item );
    par_item = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_20___getitem__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_21__fill_diagonal_dispatcher( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_val = python_pars[ 1 ];
    PyObject *par_wrap = python_pars[ 2 ];
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_21__fill_diagonal_dispatcher );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_wrap );
    Py_DECREF( par_wrap );
    par_wrap = NULL;

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_21__fill_diagonal_dispatcher );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$index_tricks$$$function_22_fill_diagonal( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_val = python_pars[ 1 ];
    PyObject *par_wrap = python_pars[ 2 ];
    PyObject *var_step = NULL;
    PyObject *var_end = NULL;
    struct Nuitka_FrameObject *frame_bff16a04dc3fa084881a4cc5dfe8d590;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_bff16a04dc3fa084881a4cc5dfe8d590 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bff16a04dc3fa084881a4cc5dfe8d590, codeobj_bff16a04dc3fa084881a4cc5dfe8d590, module_numpy$lib$index_tricks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bff16a04dc3fa084881a4cc5dfe8d590 = cache_frame_bff16a04dc3fa084881a4cc5dfe8d590;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bff16a04dc3fa084881a4cc5dfe8d590 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bff16a04dc3fa084881a4cc5dfe8d590 ) == 2 ); // Frame stack

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


            exception_lineno = 843;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 843;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_d685a6f7f529aa109e07a7b645a1f27e;
            frame_bff16a04dc3fa084881a4cc5dfe8d590->m_frame.f_lineno = 844;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 844;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        assert( var_end == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_end = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_a );
        tmp_source_name_2 = par_a;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndim );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 846;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 846;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( par_a );
            tmp_source_name_3 = par_a;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 849;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_int_pos_1;
            tmp_left_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 849;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_int_pos_1;
            tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 849;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_step == NULL );
            var_step = tmp_assign_source_2;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_1;
            CHECK_OBJECT( par_wrap );
            tmp_operand_name_1 = par_wrap;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 851;
                type_description_1 = "ooooo";
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
                PyObject *tmp_assign_source_3;
                PyObject *tmp_left_name_2;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_source_name_4;
                PyObject *tmp_subscript_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_source_name_5;
                PyObject *tmp_subscript_name_3;
                CHECK_OBJECT( par_a );
                tmp_source_name_4 = par_a;
                tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
                if ( tmp_subscribed_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 852;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_subscript_name_2 = const_int_pos_1;
                tmp_left_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 1 );
                Py_DECREF( tmp_subscribed_name_2 );
                if ( tmp_left_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 852;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_a );
                tmp_source_name_5 = par_a;
                tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
                if ( tmp_subscribed_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_2 );

                    exception_lineno = 852;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_subscript_name_3 = const_int_pos_1;
                tmp_right_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 1 );
                Py_DECREF( tmp_subscribed_name_3 );
                if ( tmp_right_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_2 );

                    exception_lineno = 852;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_3 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_left_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 852;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_end;
                    assert( old != NULL );
                    var_end = tmp_assign_source_3;
                    Py_DECREF( old );
                }

            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_6;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_alltrue );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_alltrue );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "alltrue" );
                exception_tb = NULL;

                exception_lineno = 856;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_diff );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_diff );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "diff" );
                exception_tb = NULL;

                exception_lineno = 856;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_a );
            tmp_source_name_6 = par_a;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 856;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            frame_bff16a04dc3fa084881a4cc5dfe8d590->m_frame.f_lineno = 856;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_compexpr_left_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 856;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_int_0;
            tmp_args_element_name_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 856;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            frame_bff16a04dc3fa084881a4cc5dfe8d590->m_frame.f_lineno = 856;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 856;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 856;
                type_description_1 = "ooooo";
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
                PyObject *tmp_raise_type_2;
                PyObject *tmp_make_exception_arg_2;
                tmp_make_exception_arg_2 = const_str_digest_ae18caca66ad511d55f1373e7c1a6603;
                frame_bff16a04dc3fa084881a4cc5dfe8d590->m_frame.f_lineno = 857;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_2 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_2 == NULL) );
                exception_type = tmp_raise_type_2;
                exception_lineno = 857;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            Py_ssize_t tmp_sliceslicedel_index_lower_1;
            Py_ssize_t tmp_slice_index_upper_1;
            PyObject *tmp_slice_source_1;
            PyObject *tmp_source_name_7;
            tmp_left_name_3 = const_int_pos_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_cumprod );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cumprod );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "cumprod" );
                exception_tb = NULL;

                exception_lineno = 858;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            tmp_sliceslicedel_index_lower_1 = 0;
            tmp_slice_index_upper_1 = -1;
            CHECK_OBJECT( par_a );
            tmp_source_name_7 = par_a;
            tmp_slice_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
            if ( tmp_slice_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 858;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
            Py_DECREF( tmp_slice_source_1 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 858;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            frame_bff16a04dc3fa084881a4cc5dfe8d590->m_frame.f_lineno = 858;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 858;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            frame_bff16a04dc3fa084881a4cc5dfe8d590->m_frame.f_lineno = 858;
            tmp_right_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_sum );
            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 858;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_4 = BINARY_OPERATION_ADD_INT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 858;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_step == NULL );
            var_step = tmp_assign_source_4;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_source_name_8;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( par_val );
        tmp_ass_subvalue_1 = par_val;
        CHECK_OBJECT( par_a );
        tmp_source_name_8 = par_a;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_flat );
        if ( tmp_ass_subscribed_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 861;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_start_name_1 = Py_None;
        if ( var_end == NULL )
        {
            Py_DECREF( tmp_ass_subscribed_1 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "end" );
            exception_tb = NULL;

            exception_lineno = 861;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_stop_name_1 = var_end;
        CHECK_OBJECT( var_step );
        tmp_step_name_1 = var_step;
        tmp_ass_subscript_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_ass_subscript_1 == NULL) );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscribed_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 861;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bff16a04dc3fa084881a4cc5dfe8d590 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bff16a04dc3fa084881a4cc5dfe8d590 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bff16a04dc3fa084881a4cc5dfe8d590, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bff16a04dc3fa084881a4cc5dfe8d590->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bff16a04dc3fa084881a4cc5dfe8d590, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bff16a04dc3fa084881a4cc5dfe8d590,
        type_description_1,
        par_a,
        par_val,
        par_wrap,
        var_step,
        var_end
    );


    // Release cached frame.
    if ( frame_bff16a04dc3fa084881a4cc5dfe8d590 == cache_frame_bff16a04dc3fa084881a4cc5dfe8d590 )
    {
        Py_DECREF( frame_bff16a04dc3fa084881a4cc5dfe8d590 );
    }
    cache_frame_bff16a04dc3fa084881a4cc5dfe8d590 = NULL;

    assertFrameObject( frame_bff16a04dc3fa084881a4cc5dfe8d590 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_22_fill_diagonal );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_wrap );
    Py_DECREF( par_wrap );
    par_wrap = NULL;

    CHECK_OBJECT( (PyObject *)var_step );
    Py_DECREF( var_step );
    var_step = NULL;

    Py_XDECREF( var_end );
    var_end = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_wrap );
    Py_DECREF( par_wrap );
    par_wrap = NULL;

    Py_XDECREF( var_step );
    var_step = NULL;

    Py_XDECREF( var_end );
    var_end = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_22_fill_diagonal );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_23_diag_indices( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[ 0 ];
    PyObject *par_ndim = python_pars[ 1 ];
    PyObject *var_idx = NULL;
    struct Nuitka_FrameObject *frame_2f3b14b425e1b34aea724d91d2a2e8c6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2f3b14b425e1b34aea724d91d2a2e8c6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2f3b14b425e1b34aea724d91d2a2e8c6, codeobj_2f3b14b425e1b34aea724d91d2a2e8c6, module_numpy$lib$index_tricks, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2f3b14b425e1b34aea724d91d2a2e8c6 = cache_frame_2f3b14b425e1b34aea724d91d2a2e8c6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2f3b14b425e1b34aea724d91d2a2e8c6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2f3b14b425e1b34aea724d91d2a2e8c6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_arange );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "arange" );
            exception_tb = NULL;

            exception_lineno = 929;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_1 = par_n;
        frame_2f3b14b425e1b34aea724d91d2a2e8c6->m_frame.f_lineno = 929;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 929;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_idx == NULL );
        var_idx = tmp_assign_source_1;
    }
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( var_idx );
        tmp_tuple_element_1 = var_idx;
        tmp_left_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_left_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_ndim );
        tmp_right_name_1 = par_ndim;
        tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 930;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2f3b14b425e1b34aea724d91d2a2e8c6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2f3b14b425e1b34aea724d91d2a2e8c6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2f3b14b425e1b34aea724d91d2a2e8c6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2f3b14b425e1b34aea724d91d2a2e8c6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2f3b14b425e1b34aea724d91d2a2e8c6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2f3b14b425e1b34aea724d91d2a2e8c6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2f3b14b425e1b34aea724d91d2a2e8c6,
        type_description_1,
        par_n,
        par_ndim,
        var_idx
    );


    // Release cached frame.
    if ( frame_2f3b14b425e1b34aea724d91d2a2e8c6 == cache_frame_2f3b14b425e1b34aea724d91d2a2e8c6 )
    {
        Py_DECREF( frame_2f3b14b425e1b34aea724d91d2a2e8c6 );
    }
    cache_frame_2f3b14b425e1b34aea724d91d2a2e8c6 = NULL;

    assertFrameObject( frame_2f3b14b425e1b34aea724d91d2a2e8c6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_23_diag_indices );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ndim );
    Py_DECREF( par_ndim );
    par_ndim = NULL;

    CHECK_OBJECT( (PyObject *)var_idx );
    Py_DECREF( var_idx );
    var_idx = NULL;

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

    CHECK_OBJECT( (PyObject *)par_ndim );
    Py_DECREF( par_ndim );
    par_ndim = NULL;

    Py_XDECREF( var_idx );
    var_idx = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_23_diag_indices );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_24__diag_indices_from( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arr = python_pars[ 0 ];
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_24__diag_indices_from );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_24__diag_indices_from );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$index_tricks$$$function_25_diag_indices_from( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arr = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_280db1a390c592a8ad8f93b1745f8461;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_280db1a390c592a8ad8f93b1745f8461 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_280db1a390c592a8ad8f93b1745f8461, codeobj_280db1a390c592a8ad8f93b1745f8461, module_numpy$lib$index_tricks, sizeof(void *) );
    frame_280db1a390c592a8ad8f93b1745f8461 = cache_frame_280db1a390c592a8ad8f93b1745f8461;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_280db1a390c592a8ad8f93b1745f8461 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_280db1a390c592a8ad8f93b1745f8461 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_arr );
        tmp_source_name_1 = par_arr;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 958;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_2;
        tmp_operand_name_1 = RICH_COMPARE_GTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 958;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 958;
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
            tmp_make_exception_arg_1 = const_str_digest_9fce22252d81f16af5f47d8c67e196f5;
            frame_280db1a390c592a8ad8f93b1745f8461->m_frame.f_lineno = 959;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 959;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_alltrue );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_alltrue );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "alltrue" );
            exception_tb = NULL;

            exception_lineno = 962;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_diff );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_diff );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "diff" );
            exception_tb = NULL;

            exception_lineno = 962;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_arr );
        tmp_source_name_2 = par_arr;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 962;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_280db1a390c592a8ad8f93b1745f8461->m_frame.f_lineno = 962;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_compexpr_left_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 962;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_0;
        tmp_args_element_name_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 962;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_280db1a390c592a8ad8f93b1745f8461->m_frame.f_lineno = 962;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 962;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 962;
            type_description_1 = "o";
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_ae18caca66ad511d55f1373e7c1a6603;
            frame_280db1a390c592a8ad8f93b1745f8461->m_frame.f_lineno = 963;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 963;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_diag_indices );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_diag_indices );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "diag_indices" );
            exception_tb = NULL;

            exception_lineno = 965;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_arr );
        tmp_source_name_3 = par_arr;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 965;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_args_element_name_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 965;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_arr );
        tmp_source_name_4 = par_arr;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ndim );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 965;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_280db1a390c592a8ad8f93b1745f8461->m_frame.f_lineno = 965;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 965;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_280db1a390c592a8ad8f93b1745f8461 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_280db1a390c592a8ad8f93b1745f8461 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_280db1a390c592a8ad8f93b1745f8461 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_280db1a390c592a8ad8f93b1745f8461, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_280db1a390c592a8ad8f93b1745f8461->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_280db1a390c592a8ad8f93b1745f8461, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_280db1a390c592a8ad8f93b1745f8461,
        type_description_1,
        par_arr
    );


    // Release cached frame.
    if ( frame_280db1a390c592a8ad8f93b1745f8461 == cache_frame_280db1a390c592a8ad8f93b1745f8461 )
    {
        Py_DECREF( frame_280db1a390c592a8ad8f93b1745f8461 );
    }
    cache_frame_280db1a390c592a8ad8f93b1745f8461 = NULL;

    assertFrameObject( frame_280db1a390c592a8ad8f93b1745f8461 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_25_diag_indices_from );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_25_diag_indices_from );
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



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_10___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_10___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2c7028226c767c9125c05937ac4230be,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$index_tricks,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_11___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_11___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8b4f8611bc7c474c37951a950fa1930b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$index_tricks,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_12___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_12___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f80bba10489919ef0e16e9d0214f1893,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$index_tricks,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_13___next__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_13___next__,
        const_str_plain___next__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7008f10fc7e223b5df75d4d28834a215,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$index_tricks,
        const_str_digest_f7ae5c6cb3e962c7e29d5d553b183af2,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_14___iter__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_14___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1f8448b512279101876b3679298473af,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$index_tricks,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_15___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_15___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_918f8fea7417c0a2273456875a588f44,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$index_tricks,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_16___iter__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_16___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d107a83379f0fcb186347fe01810c71f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$index_tricks,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_17_ndincr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_17_ndincr,
        const_str_plain_ndincr,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7f6ee236428b5c4a8469969ecbe1c2ad,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$index_tricks,
        const_str_digest_3eb9b2ce1271918b85093c648f730487,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_18___next__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_18___next__,
        const_str_plain___next__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0ed8016e12b1f9b3ad0d85ab097172cb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$index_tricks,
        const_str_digest_64e7f7113a33cb08bdcf9c7fa75b9a20,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_19___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_19___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4e20cd1670023c7293a2b0b2bb9f42ce,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$index_tricks,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_1__ix__dispatcher(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_1__ix__dispatcher,
        const_str_plain__ix__dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1f44aa8746a5fbecd3ebba45abf2ebf3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$index_tricks,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_20___getitem__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_20___getitem__,
        const_str_plain___getitem__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_517acd3568f021fe2bee67d4dd826ce5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$index_tricks,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_21__fill_diagonal_dispatcher( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_21__fill_diagonal_dispatcher,
        const_str_plain__fill_diagonal_dispatcher,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a5c2207c9f05e013be473174fede9e72,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$index_tricks,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_22_fill_diagonal( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_22_fill_diagonal,
        const_str_plain_fill_diagonal,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bff16a04dc3fa084881a4cc5dfe8d590,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$index_tricks,
        const_str_digest_10070abaa510b7ab1f69c9f0869da78b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_23_diag_indices( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_23_diag_indices,
        const_str_plain_diag_indices,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2f3b14b425e1b34aea724d91d2a2e8c6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$index_tricks,
        const_str_digest_4eb95f63cad044e31c93dcc516197c0d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_24__diag_indices_from(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_24__diag_indices_from,
        const_str_plain__diag_indices_from,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2c6e1487167a05e485820859d636a3d7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$index_tricks,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_25_diag_indices_from(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_25_diag_indices_from,
        const_str_plain_diag_indices_from,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_280db1a390c592a8ad8f93b1745f8461,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$index_tricks,
        const_str_digest_a332407a4cd6cc926dbf54a127eff824,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_2_ix_(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_2_ix_,
        const_str_plain_ix_,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b4f3bd780014484a8ca912f9e27a8d65,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$index_tricks,
        const_str_digest_1f23860369d1fd3c6fbbd33bcd90092f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_3___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_56e753519eceff546d27957b803b5e67,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$index_tricks,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_4___getitem__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_4___getitem__,
        const_str_plain___getitem__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8165914d6eb2820a2b48f867e160141c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$index_tricks,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_5___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_18e3cc71cc5d3c9f13b78442b889f692,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$index_tricks,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_6___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4170fc3349084921f0c254a55d8f31a6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$index_tricks,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_7___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_7___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cd154c8f9066f1e9c894bd6fe9767aae,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$index_tricks,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_8___getitem__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_8___getitem__,
        const_str_plain___getitem__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ee1e3dbc441c9e366c0de8d04721722d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$index_tricks,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_9___len__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_9___len__,
        const_str_plain___len__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fff1bee415750dfbe468327f06a4c392,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$lib$index_tricks,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$lib$index_tricks =
{
    PyModuleDef_HEAD_INIT,
    "numpy.lib.index_tricks",
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

MOD_INIT_DECL( numpy$lib$index_tricks )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$lib$index_tricks );
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
    puts("numpy.lib.index_tricks: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.lib.index_tricks: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.lib.index_tricks: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$lib$index_tricks" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$lib$index_tricks = Py_InitModule4(
        "numpy.lib.index_tricks",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_numpy$lib$index_tricks = PyModule_Create( &mdef_numpy$lib$index_tricks );
#endif

    moduledict_numpy$lib$index_tricks = MODULE_DICT( module_numpy$lib$index_tricks );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_numpy$lib$index_tricks,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$index_tricks,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$index_tricks,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_numpy$lib$index_tricks );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_82d72071fc1da9db8c6dd31f1049410c, module_numpy$lib$index_tricks );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
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
    PyObject *tmp_class_creation_4__class = NULL;
    PyObject *tmp_class_creation_4__class_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__class = NULL;
    PyObject *tmp_class_creation_5__class_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__class = NULL;
    PyObject *tmp_class_creation_6__class_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_7__class = NULL;
    PyObject *tmp_class_creation_7__class_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_8__class = NULL;
    PyObject *tmp_class_creation_8__class_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_9__class = NULL;
    PyObject *tmp_class_creation_9__class_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_locals_numpy$lib$index_tricks_109_key___getitem__ = NULL;
    PyObject *tmp_locals_numpy$lib$index_tricks_109_key___init__ = NULL;
    PyObject *tmp_locals_numpy$lib$index_tricks_682_key___getitem__ = NULL;
    PyObject *tmp_locals_numpy$lib$index_tricks_682_key___init__ = NULL;
    PyObject *tmp_select_metaclass_2__base = NULL;
    PyObject *tmp_select_metaclass_3__base = NULL;
    PyObject *tmp_select_metaclass_5__base = NULL;
    PyObject *tmp_select_metaclass_6__base = NULL;
    struct Nuitka_FrameObject *frame_6f9a5b7b62ba49567e39ae003eb43bf4;
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
    int tmp_res;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_numpy$lib$index_tricks_209 = NULL;
    PyObject *tmp_dictset_value;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *locals_numpy$lib$index_tricks_256 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *locals_numpy$lib$index_tricks_300 = NULL;
    struct Nuitka_FrameObject *frame_ab9d4334dbe3086e5d3385f1368524e9_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_ab9d4334dbe3086e5d3385f1368524e9_2 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_numpy$lib$index_tricks_420 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *locals_numpy$lib$index_tricks_520 = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *locals_numpy$lib$index_tricks_553 = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *locals_numpy$lib$index_tricks_604 = NULL;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_72f228572a4b978b6085b081f916a8f6;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
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
    frame_6f9a5b7b62ba49567e39ae003eb43bf4 = MAKE_MODULE_FRAME( codeobj_6f9a5b7b62ba49567e39ae003eb43bf4, module_numpy$lib$index_tricks );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_6f9a5b7b62ba49567e39ae003eb43bf4 );
    assert( Py_REFCNT( frame_6f9a5b7b62ba49567e39ae003eb43bf4 ) == 2 );

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
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_4 );
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
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
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
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$lib$index_tricks;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 3;
        tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_functools, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_sys;
        tmp_globals_name_2 = (PyObject *)moduledict_numpy$lib$index_tricks;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 4;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        assert( !(tmp_assign_source_8 == NULL) );
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_math;
        tmp_globals_name_3 = (PyObject *)moduledict_numpy$lib$index_tricks;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 5;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        assert( !(tmp_assign_source_9 == NULL) );
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_math, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_aa3423acdb6152e259f846c9911226b3;
        tmp_globals_name_4 = (PyObject *)moduledict_numpy$lib$index_tricks;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 7;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_import_name_from_4 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_core );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_numeric );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_aa3423acdb6152e259f846c9911226b3;
        tmp_globals_name_5 = (PyObject *)moduledict_numpy$lib$index_tricks;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_8b1d9aa84ab3dd64b4f74b8839645204_tuple;
        tmp_level_name_5 = const_int_0;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 8;
        tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_asarray );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_asarray, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_ScalarType );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ScalarType, tmp_assign_source_13 );
    }
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


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_array, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_9 = tmp_import_from_2__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_alltrue );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_alltrue, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_10 = tmp_import_from_2__module;
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_cumprod );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_cumprod, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_11 = tmp_import_from_2__module;
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_arange );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_arange, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_12 = tmp_import_from_2__module;
        tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_ndim );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ndim, tmp_assign_source_18 );
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
        PyObject *tmp_assign_source_19;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_digest_67205772204d1e33862eb50e826ab1cb;
        tmp_globals_name_6 = (PyObject *)moduledict_numpy$lib$index_tricks;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_find_common_type_str_plain_issubdtype_tuple;
        tmp_level_name_6 = const_int_0;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 11;
        tmp_assign_source_19 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_13 = tmp_import_from_3__module;
        tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_find_common_type );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_find_common_type, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_14 = tmp_import_from_3__module;
        tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_issubdtype );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_issubdtype, tmp_assign_source_21 );
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
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_digest_f462c9dbdab6a6e18585dee27e01f422;
        tmp_globals_name_7 = (PyObject *)moduledict_numpy$lib$index_tricks;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = Py_None;
        tmp_level_name_7 = const_int_0;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 13;
        tmp_import_name_from_15 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_import_name_from_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_matrixlib );
        Py_DECREF( tmp_import_name_from_15 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_matrixlib, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_plain_function_base;
        tmp_globals_name_8 = (PyObject *)moduledict_numpy$lib$index_tricks;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain_diff_tuple;
        tmp_level_name_8 = const_int_pos_1;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 14;
        tmp_import_name_from_16 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_import_name_from_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_diff );
        Py_DECREF( tmp_import_name_from_16 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_diff, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = const_str_digest_f104ae7867dfcd3f38891fc4f1b7cd57;
        tmp_globals_name_9 = (PyObject *)moduledict_numpy$lib$index_tricks;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = const_tuple_str_plain_ravel_multi_index_str_plain_unravel_index_tuple;
        tmp_level_name_9 = const_int_0;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 15;
        tmp_assign_source_24 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_4__module == NULL );
        tmp_import_from_4__module = tmp_assign_source_24;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_17 = tmp_import_from_4__module;
        tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_ravel_multi_index );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ravel_multi_index, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_18 = tmp_import_from_4__module;
        tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_unravel_index );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_unravel_index, tmp_assign_source_26 );
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
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = const_str_digest_3ebbb82d9800d0665e0803be07081408;
        tmp_globals_name_10 = (PyObject *)moduledict_numpy$lib$index_tricks;
        tmp_locals_name_10 = Py_None;
        tmp_fromlist_name_10 = const_tuple_str_plain_set_module_tuple;
        tmp_level_name_10 = const_int_0;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 16;
        tmp_import_name_from_19 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
        if ( tmp_import_name_from_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_set_module );
        Py_DECREF( tmp_import_name_from_19 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_set_module, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_name_11;
        PyObject *tmp_locals_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
        tmp_globals_name_11 = (PyObject *)moduledict_numpy$lib$index_tricks;
        tmp_locals_name_11 = Py_None;
        tmp_fromlist_name_11 = const_tuple_str_plain_overrides_str_plain_linspace_tuple;
        tmp_level_name_11 = const_int_0;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 17;
        tmp_assign_source_28 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_5__module == NULL );
        tmp_import_from_5__module = tmp_assign_source_28;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_20 = tmp_import_from_5__module;
        tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_overrides );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_overrides, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_21 = tmp_import_from_5__module;
        tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_linspace );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_linspace, tmp_assign_source_30 );
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
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_22;
        PyObject *tmp_name_name_12;
        PyObject *tmp_globals_name_12;
        PyObject *tmp_locals_name_12;
        PyObject *tmp_fromlist_name_12;
        PyObject *tmp_level_name_12;
        tmp_name_name_12 = const_str_digest_9fcf64fa6d087ae015ed561b4aa4b510;
        tmp_globals_name_12 = (PyObject *)moduledict_numpy$lib$index_tricks;
        tmp_locals_name_12 = Py_None;
        tmp_fromlist_name_12 = const_tuple_str_plain_as_strided_tuple;
        tmp_level_name_12 = const_int_0;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 18;
        tmp_import_name_from_22 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
        if ( tmp_import_name_from_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_as_strided );
        Py_DECREF( tmp_import_name_from_22 );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_as_strided, tmp_assign_source_31 );
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
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_functools );

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

            exception_lineno = 21;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_partial );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_overrides );

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

            exception_lineno = 22;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_array_function_dispatch );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_6e6659be28864e39bad7cab4409b7e16 );
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 21;
        tmp_assign_source_32 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_array_function_dispatch, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = LIST_COPY( const_list_fa22549eaa1a878119e86a628980cdb1_list );
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_1__ix__dispatcher(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__ix__dispatcher, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_called_name_3 = tmp_mvar_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__ix__dispatcher );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ix__dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_4 );
        tmp_args_element_name_1 = tmp_mvar_value_4;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 36;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_called_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_2_ix_(  );



        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 36;
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


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ix_, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_false_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_assign_source_37 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_3___init__( tmp_defaults_1 );



            assert( tmp_locals_numpy$lib$index_tricks_109_key___init__ == NULL );
            tmp_locals_numpy$lib$index_tricks_109_key___init__ = tmp_assign_source_37;
        }
        {
            PyObject *tmp_assign_source_38;
            tmp_assign_source_38 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_4___getitem__(  );



            assert( tmp_locals_numpy$lib$index_tricks_109_key___getitem__ == NULL );
            tmp_locals_numpy$lib$index_tricks_109_key___getitem__ = tmp_assign_source_38;
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
            tmp_dict_value_1 = const_str_digest_82d72071fc1da9db8c6dd31f1049410c;
            tmp_dict_key_1 = const_str_plain___module__;
            tmp_assign_source_36 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem( tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_value_2 = const_str_digest_12c1a9c9ac974aef622baf6784c5dccc;
            tmp_dict_key_2 = const_str_plain___doc__;
            tmp_res = PyDict_SetItem( tmp_assign_source_36, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_numpy$lib$index_tricks_109_key___init__ );
            tmp_dict_value_3 = tmp_locals_numpy$lib$index_tricks_109_key___init__;
            tmp_dict_key_3 = const_str_plain___init__;
            tmp_res = PyDict_SetItem( tmp_assign_source_36, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_numpy$lib$index_tricks_109_key___getitem__ );
            tmp_dict_value_4 = tmp_locals_numpy$lib$index_tricks_109_key___getitem__;
            tmp_dict_key_4 = const_str_plain___getitem__;
            tmp_res = PyDict_SetItem( tmp_assign_source_36, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            goto try_return_handler_6;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT( (PyObject *)tmp_locals_numpy$lib$index_tricks_109_key___init__ );
        Py_DECREF( tmp_locals_numpy$lib$index_tricks_109_key___init__ );
        tmp_locals_numpy$lib$index_tricks_109_key___init__ = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_numpy$lib$index_tricks_109_key___getitem__ );
        Py_DECREF( tmp_locals_numpy$lib$index_tricks_109_key___getitem__ );
        tmp_locals_numpy$lib$index_tricks_109_key___getitem__ = NULL;

        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
        return MOD_RETURN_VALUE( NULL );
        outline_result_1:;
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_36;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
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


            exception_lineno = 109;

            goto try_except_handler_7;
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
        tmp_assign_source_39 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;

            goto try_except_handler_7;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_39 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_39 );
        condexpr_end_1:;
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_called_name_4 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_3 = const_str_plain_nd_grid;
        tmp_args_element_name_4 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_5 = tmp_class_creation_1__class_dict;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 109;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;

            goto try_except_handler_7;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_40;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    {
        PyObject *tmp_assign_source_41;
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_assign_source_41 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_nd_grid, tmp_assign_source_41 );
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
        PyObject *tmp_assign_source_42;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_nd_grid );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nd_grid );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "nd_grid" );
            exception_tb = NULL;

            exception_lineno = 209;

            goto try_except_handler_8;
        }

        tmp_tuple_element_2 = tmp_mvar_value_5;
        tmp_assign_source_42 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_assign_source_42, 0, tmp_tuple_element_2 );
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_numpy$lib$index_tricks_209 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_82d72071fc1da9db8c6dd31f1049410c;
        tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_209, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_05bf9275b41389b28bc300349e79abab;
        tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_209, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_5___init__(  );



        tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_209, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_43 = locals_numpy$lib$index_tricks_209;
        Py_INCREF( tmp_assign_source_43 );
        goto try_return_handler_9;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF( locals_numpy$lib$index_tricks_209 );
        locals_numpy$lib$index_tricks_209 = NULL;
        goto outline_result_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
        return MOD_RETURN_VALUE( NULL );
        outline_result_2:;
        assert( tmp_class_creation_2__class_dict == NULL );
        tmp_class_creation_2__class_dict = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
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


            exception_lineno = 209;

            goto try_except_handler_8;
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
        tmp_assign_source_44 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_assign_source_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;

            goto try_except_handler_8;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_subscribed_name_1 = tmp_class_creation_2__bases;
            tmp_subscript_name_1 = const_int_0;
            tmp_assign_source_45 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_assign_source_45 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 209;

                goto try_except_handler_8;
            }
            assert( tmp_select_metaclass_2__base == NULL );
            tmp_select_metaclass_2__base = tmp_assign_source_45;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( tmp_select_metaclass_2__base );
            tmp_source_name_3 = tmp_select_metaclass_2__base;
            tmp_assign_source_44 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
            if ( tmp_assign_source_44 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 209;

                goto try_except_handler_11;
            }
            goto try_return_handler_10;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
        return MOD_RETURN_VALUE( NULL );
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

        {
            PyObject *tmp_type_arg_1;
            Py_DECREF( exception_keeper_type_7 );
            Py_XDECREF( exception_keeper_value_7 );
            Py_XDECREF( exception_keeper_tb_7 );
            CHECK_OBJECT( tmp_select_metaclass_2__base );
            tmp_type_arg_1 = tmp_select_metaclass_2__base;
            tmp_assign_source_44 = BUILTIN_TYPE1( tmp_type_arg_1 );
            assert( !(tmp_assign_source_44 == NULL) );
            goto try_return_handler_10;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
        Py_DECREF( tmp_select_metaclass_2__base );
        tmp_select_metaclass_2__base = NULL;

        goto outline_result_3;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
        Py_DECREF( tmp_select_metaclass_2__base );
        tmp_select_metaclass_2__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
        return MOD_RETURN_VALUE( NULL );
        outline_result_3:;
        condexpr_end_2:;
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_called_name_5 = tmp_class_creation_2__metaclass;
        tmp_args_element_name_6 = const_str_plain_MGridClass;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_args_element_name_7 = tmp_class_creation_2__bases;
        CHECK_OBJECT( tmp_class_creation_2__class_dict );
        tmp_args_element_name_8 = tmp_class_creation_2__class_dict;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 209;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
        }

        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;

            goto try_except_handler_8;
        }
        assert( tmp_class_creation_2__class == NULL );
        tmp_class_creation_2__class = tmp_assign_source_46;
    }
    goto try_end_7;
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

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    {
        PyObject *tmp_assign_source_47;
        CHECK_OBJECT( tmp_class_creation_2__class );
        tmp_assign_source_47 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_MGridClass, tmp_assign_source_47 );
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

    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_MGridClass );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MGridClass );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "MGridClass" );
            exception_tb = NULL;

            exception_lineno = 254;

            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_6;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 254;
        tmp_assign_source_48 = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
        if ( tmp_assign_source_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_mgrid, tmp_assign_source_48 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_nd_grid );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nd_grid );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "nd_grid" );
            exception_tb = NULL;

            exception_lineno = 256;

            goto try_except_handler_12;
        }

        tmp_tuple_element_3 = tmp_mvar_value_7;
        tmp_assign_source_49 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_assign_source_49, 0, tmp_tuple_element_3 );
        assert( tmp_class_creation_3__bases == NULL );
        tmp_class_creation_3__bases = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        {
            PyObject *tmp_set_locals_2;
            tmp_set_locals_2 = PyDict_New();
            locals_numpy$lib$index_tricks_256 = tmp_set_locals_2;
        }
        tmp_dictset_value = const_str_digest_82d72071fc1da9db8c6dd31f1049410c;
        tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_256, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_e8301c44a94b8eb84989b73baa2e6baa;
        tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_256, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_6___init__(  );



        tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_256, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_50 = locals_numpy$lib$index_tricks_256;
        Py_INCREF( tmp_assign_source_50 );
        goto try_return_handler_13;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF( locals_numpy$lib$index_tricks_256 );
        locals_numpy$lib$index_tricks_256 = NULL;
        goto outline_result_4;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
        return MOD_RETURN_VALUE( NULL );
        outline_result_4:;
        assert( tmp_class_creation_3__class_dict == NULL );
        tmp_class_creation_3__class_dict = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_51;
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

            goto try_except_handler_12;
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
        tmp_assign_source_51 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
        if ( tmp_assign_source_51 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;

            goto try_except_handler_12;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        {
            PyObject *tmp_assign_source_52;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_subscribed_name_2 = tmp_class_creation_3__bases;
            tmp_subscript_name_2 = const_int_0;
            tmp_assign_source_52 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
            if ( tmp_assign_source_52 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 256;

                goto try_except_handler_12;
            }
            assert( tmp_select_metaclass_3__base == NULL );
            tmp_select_metaclass_3__base = tmp_assign_source_52;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( tmp_select_metaclass_3__base );
            tmp_source_name_4 = tmp_select_metaclass_3__base;
            tmp_assign_source_51 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_4 );
            if ( tmp_assign_source_51 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 256;

                goto try_except_handler_15;
            }
            goto try_return_handler_14;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_2;
            Py_DECREF( exception_keeper_type_9 );
            Py_XDECREF( exception_keeper_value_9 );
            Py_XDECREF( exception_keeper_tb_9 );
            CHECK_OBJECT( tmp_select_metaclass_3__base );
            tmp_type_arg_2 = tmp_select_metaclass_3__base;
            tmp_assign_source_51 = BUILTIN_TYPE1( tmp_type_arg_2 );
            assert( !(tmp_assign_source_51 == NULL) );
            goto try_return_handler_14;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_3__base );
        Py_DECREF( tmp_select_metaclass_3__base );
        tmp_select_metaclass_3__base = NULL;

        goto outline_result_5;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_3__base );
        Py_DECREF( tmp_select_metaclass_3__base );
        tmp_select_metaclass_3__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
        return MOD_RETURN_VALUE( NULL );
        outline_result_5:;
        condexpr_end_3:;
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_called_name_7 = tmp_class_creation_3__metaclass;
        tmp_args_element_name_9 = const_str_plain_OGridClass;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_args_element_name_10 = tmp_class_creation_3__bases;
        CHECK_OBJECT( tmp_class_creation_3__class_dict );
        tmp_args_element_name_11 = tmp_class_creation_3__class_dict;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 256;
        {
            PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_assign_source_53 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
        }

        if ( tmp_assign_source_53 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;

            goto try_except_handler_12;
        }
        assert( tmp_class_creation_3__class == NULL );
        tmp_class_creation_3__class = tmp_assign_source_53;
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
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
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    {
        PyObject *tmp_assign_source_54;
        CHECK_OBJECT( tmp_class_creation_3__class );
        tmp_assign_source_54 = tmp_class_creation_3__class;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_OGridClass, tmp_assign_source_54 );
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

    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_OGridClass );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OGridClass );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "OGridClass" );
            exception_tb = NULL;

            exception_lineno = 297;

            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = tmp_mvar_value_8;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 297;
        tmp_assign_source_55 = CALL_FUNCTION_NO_ARGS( tmp_called_name_8 );
        if ( tmp_assign_source_55 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ogrid, tmp_assign_source_55 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_56;
        {
            PyObject *tmp_set_locals_3;
            tmp_set_locals_3 = PyDict_New();
            locals_numpy$lib$index_tricks_300 = tmp_set_locals_3;
        }
        tmp_dictset_value = const_str_digest_82d72071fc1da9db8c6dd31f1049410c;
        tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_300, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_4f6ec58bd7ed319799ea7cbde3aac475;
        tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_300, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_ab9d4334dbe3086e5d3385f1368524e9_2, codeobj_ab9d4334dbe3086e5d3385f1368524e9, module_numpy$lib$index_tricks, 0 );
        frame_ab9d4334dbe3086e5d3385f1368524e9_2 = cache_frame_ab9d4334dbe3086e5d3385f1368524e9_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_ab9d4334dbe3086e5d3385f1368524e9_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_ab9d4334dbe3086e5d3385f1368524e9_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_staticmethod_arg_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_9;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "_nx" );
                exception_tb = NULL;

                exception_lineno = 307;

                goto frame_exception_exit_2;
            }

            tmp_source_name_5 = tmp_mvar_value_9;
            tmp_staticmethod_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_concatenate );
            if ( tmp_staticmethod_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 307;

                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_1 );
            Py_DECREF( tmp_staticmethod_arg_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 307;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_300, const_str_plain_concatenate, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 307;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_staticmethod_arg_2;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_10;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_matrixlib );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_matrixlib );
            }

            if ( tmp_mvar_value_10 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "matrixlib" );
                exception_tb = NULL;

                exception_lineno = 308;

                goto frame_exception_exit_2;
            }

            tmp_source_name_6 = tmp_mvar_value_10;
            tmp_staticmethod_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_matrix );
            if ( tmp_staticmethod_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 308;

                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_2 );
            Py_DECREF( tmp_staticmethod_arg_2 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 308;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_300, const_str_plain_makemat, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 308;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_ab9d4334dbe3086e5d3385f1368524e9_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_ab9d4334dbe3086e5d3385f1368524e9_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_ab9d4334dbe3086e5d3385f1368524e9_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_ab9d4334dbe3086e5d3385f1368524e9_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_ab9d4334dbe3086e5d3385f1368524e9_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_ab9d4334dbe3086e5d3385f1368524e9_2,
            type_description_2
        );


        // Release cached frame.
        if ( frame_ab9d4334dbe3086e5d3385f1368524e9_2 == cache_frame_ab9d4334dbe3086e5d3385f1368524e9_2 )
        {
            Py_DECREF( frame_ab9d4334dbe3086e5d3385f1368524e9_2 );
        }
        cache_frame_ab9d4334dbe3086e5d3385f1368524e9_2 = NULL;

        assertFrameObject( frame_ab9d4334dbe3086e5d3385f1368524e9_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_17;
        skip_nested_handling_1:;
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_int_0_false_int_pos_1_int_neg_1_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_dictset_value = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_7___init__( tmp_defaults_2 );



            tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_300, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        tmp_dictset_value = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_8___getitem__(  );



        tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_300, const_str_plain___getitem__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_9___len__(  );



        tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_300, const_str_plain___len__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_assign_source_56 = locals_numpy$lib$index_tricks_300;
        Py_INCREF( tmp_assign_source_56 );
        goto try_return_handler_17;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_17:;
        Py_DECREF( locals_numpy$lib$index_tricks_300 );
        locals_numpy$lib$index_tricks_300 = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_numpy$lib$index_tricks_300 );
        locals_numpy$lib$index_tricks_300 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 300;
        goto try_except_handler_16;
        outline_result_6:;
        assert( tmp_class_creation_4__class_dict == NULL );
        tmp_class_creation_4__class_dict = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
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


            exception_lineno = 300;

            goto try_except_handler_16;
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
        tmp_assign_source_57 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
        if ( tmp_assign_source_57 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 300;

            goto try_except_handler_16;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_assign_source_57 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_57 );
        condexpr_end_4:;
        assert( tmp_class_creation_4__metaclass == NULL );
        tmp_class_creation_4__metaclass = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_name_9;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        CHECK_OBJECT( tmp_class_creation_4__metaclass );
        tmp_called_name_9 = tmp_class_creation_4__metaclass;
        tmp_args_element_name_12 = const_str_plain_AxisConcatenator;
        tmp_args_element_name_13 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_4__class_dict );
        tmp_args_element_name_14 = tmp_class_creation_4__class_dict;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 300;
        {
            PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14 };
            tmp_assign_source_58 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_9, call_args );
        }

        if ( tmp_assign_source_58 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 300;

            goto try_except_handler_16;
        }
        assert( tmp_class_creation_4__class == NULL );
        tmp_class_creation_4__class = tmp_assign_source_58;
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_4__class_dict );
    tmp_class_creation_4__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    {
        PyObject *tmp_assign_source_59;
        CHECK_OBJECT( tmp_class_creation_4__class );
        tmp_assign_source_59 = tmp_class_creation_4__class;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_AxisConcatenator, tmp_assign_source_59 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class );
    Py_DECREF( tmp_class_creation_4__class );
    tmp_class_creation_4__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_dict );
    Py_DECREF( tmp_class_creation_4__class_dict );
    tmp_class_creation_4__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__metaclass );
    Py_DECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_mvar_value_11;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "AxisConcatenator" );
            exception_tb = NULL;

            exception_lineno = 420;

            goto try_except_handler_18;
        }

        tmp_tuple_element_4 = tmp_mvar_value_11;
        tmp_assign_source_60 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_assign_source_60, 0, tmp_tuple_element_4 );
        assert( tmp_class_creation_5__bases == NULL );
        tmp_class_creation_5__bases = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        {
            PyObject *tmp_set_locals_4;
            tmp_set_locals_4 = PyDict_New();
            locals_numpy$lib$index_tricks_420 = tmp_set_locals_4;
        }
        tmp_dictset_value = const_str_digest_82d72071fc1da9db8c6dd31f1049410c;
        tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_420, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_e0b85dd40506d9fdc856d21937e604a5;
        tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_420, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_10___init__(  );



        tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_420, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_61 = locals_numpy$lib$index_tricks_420;
        Py_INCREF( tmp_assign_source_61 );
        goto try_return_handler_19;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_19:;
        Py_DECREF( locals_numpy$lib$index_tricks_420 );
        locals_numpy$lib$index_tricks_420 = NULL;
        goto outline_result_7;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
        return MOD_RETURN_VALUE( NULL );
        outline_result_7:;
        assert( tmp_class_creation_5__class_dict == NULL );
        tmp_class_creation_5__class_dict = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_key_name_9;
        PyObject *tmp_dict_name_9;
        PyObject *tmp_dict_name_10;
        PyObject *tmp_key_name_10;
        tmp_key_name_9 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_5__class_dict );
        tmp_dict_name_9 = tmp_class_creation_5__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_9, tmp_key_name_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 420;

            goto try_except_handler_18;
        }
        tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_5;
        }
        else
        {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT( tmp_class_creation_5__class_dict );
        tmp_dict_name_10 = tmp_class_creation_5__class_dict;
        tmp_key_name_10 = const_str_plain___metaclass__;
        tmp_assign_source_62 = DICT_GET_ITEM( tmp_dict_name_10, tmp_key_name_10 );
        if ( tmp_assign_source_62 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 420;

            goto try_except_handler_18;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        {
            PyObject *tmp_assign_source_63;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT( tmp_class_creation_5__bases );
            tmp_subscribed_name_3 = tmp_class_creation_5__bases;
            tmp_subscript_name_3 = const_int_0;
            tmp_assign_source_63 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
            if ( tmp_assign_source_63 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 420;

                goto try_except_handler_18;
            }
            assert( tmp_select_metaclass_5__base == NULL );
            tmp_select_metaclass_5__base = tmp_assign_source_63;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_7;
            CHECK_OBJECT( tmp_select_metaclass_5__base );
            tmp_source_name_7 = tmp_select_metaclass_5__base;
            tmp_assign_source_62 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_7 );
            if ( tmp_assign_source_62 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 420;

                goto try_except_handler_21;
            }
            goto try_return_handler_20;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_3;
            Py_DECREF( exception_keeper_type_13 );
            Py_XDECREF( exception_keeper_value_13 );
            Py_XDECREF( exception_keeper_tb_13 );
            CHECK_OBJECT( tmp_select_metaclass_5__base );
            tmp_type_arg_3 = tmp_select_metaclass_5__base;
            tmp_assign_source_62 = BUILTIN_TYPE1( tmp_type_arg_3 );
            assert( !(tmp_assign_source_62 == NULL) );
            goto try_return_handler_20;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_20:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_5__base );
        Py_DECREF( tmp_select_metaclass_5__base );
        tmp_select_metaclass_5__base = NULL;

        goto outline_result_8;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_5__base );
        Py_DECREF( tmp_select_metaclass_5__base );
        tmp_select_metaclass_5__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
        return MOD_RETURN_VALUE( NULL );
        outline_result_8:;
        condexpr_end_5:;
        assert( tmp_class_creation_5__metaclass == NULL );
        tmp_class_creation_5__metaclass = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_called_name_10;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        CHECK_OBJECT( tmp_class_creation_5__metaclass );
        tmp_called_name_10 = tmp_class_creation_5__metaclass;
        tmp_args_element_name_15 = const_str_plain_RClass;
        CHECK_OBJECT( tmp_class_creation_5__bases );
        tmp_args_element_name_16 = tmp_class_creation_5__bases;
        CHECK_OBJECT( tmp_class_creation_5__class_dict );
        tmp_args_element_name_17 = tmp_class_creation_5__class_dict;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 420;
        {
            PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17 };
            tmp_assign_source_64 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, call_args );
        }

        if ( tmp_assign_source_64 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 420;

            goto try_except_handler_18;
        }
        assert( tmp_class_creation_5__class == NULL );
        tmp_class_creation_5__class = tmp_assign_source_64;
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_class_creation_5__class_dict );
    tmp_class_creation_5__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    {
        PyObject *tmp_assign_source_65;
        CHECK_OBJECT( tmp_class_creation_5__class );
        tmp_assign_source_65 = tmp_class_creation_5__class;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_RClass, tmp_assign_source_65 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class );
    Py_DECREF( tmp_class_creation_5__class );
    tmp_class_creation_5__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__bases );
    Py_DECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_dict );
    Py_DECREF( tmp_class_creation_5__class_dict );
    tmp_class_creation_5__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__metaclass );
    Py_DECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_name_11;
        PyObject *tmp_mvar_value_12;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_RClass );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RClass );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "RClass" );
            exception_tb = NULL;

            exception_lineno = 518;

            goto frame_exception_exit_1;
        }

        tmp_called_name_11 = tmp_mvar_value_12;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 518;
        tmp_assign_source_66 = CALL_FUNCTION_NO_ARGS( tmp_called_name_11 );
        if ( tmp_assign_source_66 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 518;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_r_, tmp_assign_source_66 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_mvar_value_13;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "AxisConcatenator" );
            exception_tb = NULL;

            exception_lineno = 520;

            goto try_except_handler_22;
        }

        tmp_tuple_element_5 = tmp_mvar_value_13;
        tmp_assign_source_67 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_assign_source_67, 0, tmp_tuple_element_5 );
        assert( tmp_class_creation_6__bases == NULL );
        tmp_class_creation_6__bases = tmp_assign_source_67;
    }
    {
        PyObject *tmp_assign_source_68;
        {
            PyObject *tmp_set_locals_5;
            tmp_set_locals_5 = PyDict_New();
            locals_numpy$lib$index_tricks_520 = tmp_set_locals_5;
        }
        tmp_dictset_value = const_str_digest_82d72071fc1da9db8c6dd31f1049410c;
        tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_520, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_40f1dc3f07fc4b907728e1e1bbce86a6;
        tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_520, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_11___init__(  );



        tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_520, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_68 = locals_numpy$lib$index_tricks_520;
        Py_INCREF( tmp_assign_source_68 );
        goto try_return_handler_23;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_23:;
        Py_DECREF( locals_numpy$lib$index_tricks_520 );
        locals_numpy$lib$index_tricks_520 = NULL;
        goto outline_result_9;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
        return MOD_RETURN_VALUE( NULL );
        outline_result_9:;
        assert( tmp_class_creation_6__class_dict == NULL );
        tmp_class_creation_6__class_dict = tmp_assign_source_68;
    }
    {
        PyObject *tmp_assign_source_69;
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_key_name_11;
        PyObject *tmp_dict_name_11;
        PyObject *tmp_dict_name_12;
        PyObject *tmp_key_name_12;
        tmp_key_name_11 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_6__class_dict );
        tmp_dict_name_11 = tmp_class_creation_6__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_11, tmp_key_name_11 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 520;

            goto try_except_handler_22;
        }
        tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_6;
        }
        else
        {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT( tmp_class_creation_6__class_dict );
        tmp_dict_name_12 = tmp_class_creation_6__class_dict;
        tmp_key_name_12 = const_str_plain___metaclass__;
        tmp_assign_source_69 = DICT_GET_ITEM( tmp_dict_name_12, tmp_key_name_12 );
        if ( tmp_assign_source_69 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 520;

            goto try_except_handler_22;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        {
            PyObject *tmp_assign_source_70;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            CHECK_OBJECT( tmp_class_creation_6__bases );
            tmp_subscribed_name_4 = tmp_class_creation_6__bases;
            tmp_subscript_name_4 = const_int_0;
            tmp_assign_source_70 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
            if ( tmp_assign_source_70 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 520;

                goto try_except_handler_22;
            }
            assert( tmp_select_metaclass_6__base == NULL );
            tmp_select_metaclass_6__base = tmp_assign_source_70;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_8;
            CHECK_OBJECT( tmp_select_metaclass_6__base );
            tmp_source_name_8 = tmp_select_metaclass_6__base;
            tmp_assign_source_69 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_8 );
            if ( tmp_assign_source_69 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 520;

                goto try_except_handler_25;
            }
            goto try_return_handler_24;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_4;
            Py_DECREF( exception_keeper_type_15 );
            Py_XDECREF( exception_keeper_value_15 );
            Py_XDECREF( exception_keeper_tb_15 );
            CHECK_OBJECT( tmp_select_metaclass_6__base );
            tmp_type_arg_4 = tmp_select_metaclass_6__base;
            tmp_assign_source_69 = BUILTIN_TYPE1( tmp_type_arg_4 );
            assert( !(tmp_assign_source_69 == NULL) );
            goto try_return_handler_24;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_24:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_6__base );
        Py_DECREF( tmp_select_metaclass_6__base );
        tmp_select_metaclass_6__base = NULL;

        goto outline_result_10;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_6__base );
        Py_DECREF( tmp_select_metaclass_6__base );
        tmp_select_metaclass_6__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
        return MOD_RETURN_VALUE( NULL );
        outline_result_10:;
        condexpr_end_6:;
        assert( tmp_class_creation_6__metaclass == NULL );
        tmp_class_creation_6__metaclass = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_called_name_12;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        CHECK_OBJECT( tmp_class_creation_6__metaclass );
        tmp_called_name_12 = tmp_class_creation_6__metaclass;
        tmp_args_element_name_18 = const_str_plain_CClass;
        CHECK_OBJECT( tmp_class_creation_6__bases );
        tmp_args_element_name_19 = tmp_class_creation_6__bases;
        CHECK_OBJECT( tmp_class_creation_6__class_dict );
        tmp_args_element_name_20 = tmp_class_creation_6__class_dict;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 520;
        {
            PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20 };
            tmp_assign_source_71 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_12, call_args );
        }

        if ( tmp_assign_source_71 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 520;

            goto try_except_handler_22;
        }
        assert( tmp_class_creation_6__class == NULL );
        tmp_class_creation_6__class = tmp_assign_source_71;
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_class_creation_6__class_dict );
    tmp_class_creation_6__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    {
        PyObject *tmp_assign_source_72;
        CHECK_OBJECT( tmp_class_creation_6__class );
        tmp_assign_source_72 = tmp_class_creation_6__class;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_CClass, tmp_assign_source_72 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class );
    Py_DECREF( tmp_class_creation_6__class );
    tmp_class_creation_6__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__bases );
    Py_DECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class_dict );
    Py_DECREF( tmp_class_creation_6__class_dict );
    tmp_class_creation_6__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__metaclass );
    Py_DECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_name_13;
        PyObject *tmp_mvar_value_14;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_CClass );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CClass );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "CClass" );
            exception_tb = NULL;

            exception_lineno = 549;

            goto frame_exception_exit_1;
        }

        tmp_called_name_13 = tmp_mvar_value_14;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 549;
        tmp_assign_source_73 = CALL_FUNCTION_NO_ARGS( tmp_called_name_13 );
        if ( tmp_assign_source_73 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 549;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_c_, tmp_assign_source_73 );
    }
    {
        PyObject *tmp_assign_source_74;
        {
            PyObject *tmp_set_locals_6;
            tmp_set_locals_6 = PyDict_New();
            locals_numpy$lib$index_tricks_553 = tmp_set_locals_6;
        }
        tmp_dictset_value = const_str_digest_82d72071fc1da9db8c6dd31f1049410c;
        tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_553, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_4d27999bfd5f6bdb12905dae26741abe;
        tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_553, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_12___init__(  );



        tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_553, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_13___next__(  );



        tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_553, const_str_plain___next__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_14___iter__(  );



        tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_553, const_str_plain___iter__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = PyDict_GetItem( locals_numpy$lib$index_tricks_553, const_str_plain___next__ );

        if ( tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "__next__" );
            exception_tb = NULL;

            exception_lineno = 600;

            goto frame_exception_exit_1;
        }

        if ( tmp_dictset_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 600;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_553, const_str_plain_next, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_74 = locals_numpy$lib$index_tricks_553;
        Py_INCREF( tmp_assign_source_74 );
        goto try_return_handler_26;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_26:;
        Py_DECREF( locals_numpy$lib$index_tricks_553 );
        locals_numpy$lib$index_tricks_553 = NULL;
        goto outline_result_11;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
        return MOD_RETURN_VALUE( NULL );
        outline_result_11:;
        assert( tmp_class_creation_7__class_dict == NULL );
        tmp_class_creation_7__class_dict = tmp_assign_source_74;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_75;
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_key_name_13;
        PyObject *tmp_dict_name_13;
        PyObject *tmp_dict_name_14;
        PyObject *tmp_key_name_14;
        tmp_key_name_13 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_7__class_dict );
        tmp_dict_name_13 = tmp_class_creation_7__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_13, tmp_key_name_13 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 553;

            goto try_except_handler_27;
        }
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_7;
        }
        else
        {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT( tmp_class_creation_7__class_dict );
        tmp_dict_name_14 = tmp_class_creation_7__class_dict;
        tmp_key_name_14 = const_str_plain___metaclass__;
        tmp_assign_source_75 = DICT_GET_ITEM( tmp_dict_name_14, tmp_key_name_14 );
        if ( tmp_assign_source_75 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 553;

            goto try_except_handler_27;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_assign_source_75 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_75 );
        condexpr_end_7:;
        assert( tmp_class_creation_7__metaclass == NULL );
        tmp_class_creation_7__metaclass = tmp_assign_source_75;
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_name_14;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_args_element_name_23;
        CHECK_OBJECT( tmp_class_creation_7__metaclass );
        tmp_called_name_14 = tmp_class_creation_7__metaclass;
        tmp_args_element_name_21 = const_str_plain_ndenumerate;
        tmp_args_element_name_22 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_7__class_dict );
        tmp_args_element_name_23 = tmp_class_creation_7__class_dict;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 553;
        {
            PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22, tmp_args_element_name_23 };
            tmp_assign_source_76 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_14, call_args );
        }

        if ( tmp_assign_source_76 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 553;

            goto try_except_handler_27;
        }
        assert( tmp_class_creation_7__class == NULL );
        tmp_class_creation_7__class = tmp_assign_source_76;
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_name_15;
        PyObject *tmp_called_name_16;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_element_name_24;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_set_module );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_set_module );
        }

        if ( tmp_mvar_value_15 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "set_module" );
            exception_tb = NULL;

            exception_lineno = 552;

            goto try_except_handler_27;
        }

        tmp_called_name_16 = tmp_mvar_value_15;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 552;
        tmp_called_name_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, &PyTuple_GET_ITEM( const_tuple_str_plain_numpy_tuple, 0 ) );

        if ( tmp_called_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 552;

            goto try_except_handler_27;
        }
        CHECK_OBJECT( tmp_class_creation_7__class );
        tmp_args_element_name_24 = tmp_class_creation_7__class;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 552;
        {
            PyObject *call_args[] = { tmp_args_element_name_24 };
            tmp_assign_source_77 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
        }

        Py_DECREF( tmp_called_name_15 );
        if ( tmp_assign_source_77 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 552;

            goto try_except_handler_27;
        }
        {
            PyObject *old = tmp_class_creation_7__class;
            assert( old != NULL );
            tmp_class_creation_7__class = tmp_assign_source_77;
            Py_DECREF( old );
        }

    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_7__class );
    tmp_class_creation_7__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class_dict );
    Py_DECREF( tmp_class_creation_7__class_dict );
    tmp_class_creation_7__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    {
        PyObject *tmp_assign_source_78;
        CHECK_OBJECT( tmp_class_creation_7__class );
        tmp_assign_source_78 = tmp_class_creation_7__class;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ndenumerate, tmp_assign_source_78 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class );
    Py_DECREF( tmp_class_creation_7__class );
    tmp_class_creation_7__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class_dict );
    Py_DECREF( tmp_class_creation_7__class_dict );
    tmp_class_creation_7__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__metaclass );
    Py_DECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    {
        PyObject *tmp_assign_source_79;
        {
            PyObject *tmp_set_locals_7;
            tmp_set_locals_7 = PyDict_New();
            locals_numpy$lib$index_tricks_604 = tmp_set_locals_7;
        }
        tmp_dictset_value = const_str_digest_82d72071fc1da9db8c6dd31f1049410c;
        tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_604, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_100f78b1941f2d5f8f8676cb34ec95e6;
        tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_604, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_15___init__(  );



        tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_604, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_16___iter__(  );



        tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_604, const_str_plain___iter__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_17_ndincr(  );



        tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_604, const_str_plain_ndincr, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_18___next__(  );



        tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_604, const_str_plain___next__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = PyDict_GetItem( locals_numpy$lib$index_tricks_604, const_str_plain___next__ );

        if ( tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "__next__" );
            exception_tb = NULL;

            exception_lineno = 668;

            goto frame_exception_exit_1;
        }

        if ( tmp_dictset_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 668;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( locals_numpy$lib$index_tricks_604, const_str_plain_next, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_79 = locals_numpy$lib$index_tricks_604;
        Py_INCREF( tmp_assign_source_79 );
        goto try_return_handler_28;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_28:;
        Py_DECREF( locals_numpy$lib$index_tricks_604 );
        locals_numpy$lib$index_tricks_604 = NULL;
        goto outline_result_12;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
        return MOD_RETURN_VALUE( NULL );
        outline_result_12:;
        assert( tmp_class_creation_8__class_dict == NULL );
        tmp_class_creation_8__class_dict = tmp_assign_source_79;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_80;
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_key_name_15;
        PyObject *tmp_dict_name_15;
        PyObject *tmp_dict_name_16;
        PyObject *tmp_key_name_16;
        tmp_key_name_15 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_8__class_dict );
        tmp_dict_name_15 = tmp_class_creation_8__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_15, tmp_key_name_15 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 604;

            goto try_except_handler_29;
        }
        tmp_condition_result_8 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_8;
        }
        else
        {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT( tmp_class_creation_8__class_dict );
        tmp_dict_name_16 = tmp_class_creation_8__class_dict;
        tmp_key_name_16 = const_str_plain___metaclass__;
        tmp_assign_source_80 = DICT_GET_ITEM( tmp_dict_name_16, tmp_key_name_16 );
        if ( tmp_assign_source_80 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 604;

            goto try_except_handler_29;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_assign_source_80 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_80 );
        condexpr_end_8:;
        assert( tmp_class_creation_8__metaclass == NULL );
        tmp_class_creation_8__metaclass = tmp_assign_source_80;
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_called_name_17;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_args_element_name_27;
        CHECK_OBJECT( tmp_class_creation_8__metaclass );
        tmp_called_name_17 = tmp_class_creation_8__metaclass;
        tmp_args_element_name_25 = const_str_plain_ndindex;
        tmp_args_element_name_26 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_8__class_dict );
        tmp_args_element_name_27 = tmp_class_creation_8__class_dict;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 604;
        {
            PyObject *call_args[] = { tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27 };
            tmp_assign_source_81 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_17, call_args );
        }

        if ( tmp_assign_source_81 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 604;

            goto try_except_handler_29;
        }
        assert( tmp_class_creation_8__class == NULL );
        tmp_class_creation_8__class = tmp_assign_source_81;
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_called_name_18;
        PyObject *tmp_called_name_19;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_args_element_name_28;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_set_module );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_set_module );
        }

        if ( tmp_mvar_value_16 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "set_module" );
            exception_tb = NULL;

            exception_lineno = 603;

            goto try_except_handler_29;
        }

        tmp_called_name_19 = tmp_mvar_value_16;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 603;
        tmp_called_name_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, &PyTuple_GET_ITEM( const_tuple_str_plain_numpy_tuple, 0 ) );

        if ( tmp_called_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 603;

            goto try_except_handler_29;
        }
        CHECK_OBJECT( tmp_class_creation_8__class );
        tmp_args_element_name_28 = tmp_class_creation_8__class;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 603;
        {
            PyObject *call_args[] = { tmp_args_element_name_28 };
            tmp_assign_source_82 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
        }

        Py_DECREF( tmp_called_name_18 );
        if ( tmp_assign_source_82 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 603;

            goto try_except_handler_29;
        }
        {
            PyObject *old = tmp_class_creation_8__class;
            assert( old != NULL );
            tmp_class_creation_8__class = tmp_assign_source_82;
            Py_DECREF( old );
        }

    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_8__class );
    tmp_class_creation_8__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__class_dict );
    Py_DECREF( tmp_class_creation_8__class_dict );
    tmp_class_creation_8__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    {
        PyObject *tmp_assign_source_83;
        CHECK_OBJECT( tmp_class_creation_8__class );
        tmp_assign_source_83 = tmp_class_creation_8__class;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ndindex, tmp_assign_source_83 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__class );
    Py_DECREF( tmp_class_creation_8__class );
    tmp_class_creation_8__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__class_dict );
    Py_DECREF( tmp_class_creation_8__class_dict );
    tmp_class_creation_8__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__metaclass );
    Py_DECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    {
        PyObject *tmp_assign_source_84;
        {
            PyObject *tmp_assign_source_85;
            tmp_assign_source_85 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_19___init__(  );



            assert( tmp_locals_numpy$lib$index_tricks_682_key___init__ == NULL );
            tmp_locals_numpy$lib$index_tricks_682_key___init__ = tmp_assign_source_85;
        }
        {
            PyObject *tmp_assign_source_86;
            tmp_assign_source_86 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_20___getitem__(  );



            assert( tmp_locals_numpy$lib$index_tricks_682_key___getitem__ == NULL );
            tmp_locals_numpy$lib$index_tricks_682_key___getitem__ = tmp_assign_source_86;
        }
        // Tried code:
        {
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            tmp_dict_value_5 = const_str_digest_82d72071fc1da9db8c6dd31f1049410c;
            tmp_dict_key_5 = const_str_plain___module__;
            tmp_assign_source_84 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem( tmp_assign_source_84, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            tmp_dict_value_6 = const_str_digest_fc8926c182d686d26fd1d5b3b74287d6;
            tmp_dict_key_6 = const_str_plain___doc__;
            tmp_res = PyDict_SetItem( tmp_assign_source_84, tmp_dict_key_6, tmp_dict_value_6 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_numpy$lib$index_tricks_682_key___init__ );
            tmp_dict_value_7 = tmp_locals_numpy$lib$index_tricks_682_key___init__;
            tmp_dict_key_7 = const_str_plain___init__;
            tmp_res = PyDict_SetItem( tmp_assign_source_84, tmp_dict_key_7, tmp_dict_value_7 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_numpy$lib$index_tricks_682_key___getitem__ );
            tmp_dict_value_8 = tmp_locals_numpy$lib$index_tricks_682_key___getitem__;
            tmp_dict_key_8 = const_str_plain___getitem__;
            tmp_res = PyDict_SetItem( tmp_assign_source_84, tmp_dict_key_8, tmp_dict_value_8 );
            assert( !(tmp_res != 0) );
            goto try_return_handler_30;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_30:;
        CHECK_OBJECT( (PyObject *)tmp_locals_numpy$lib$index_tricks_682_key___init__ );
        Py_DECREF( tmp_locals_numpy$lib$index_tricks_682_key___init__ );
        tmp_locals_numpy$lib$index_tricks_682_key___init__ = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_numpy$lib$index_tricks_682_key___getitem__ );
        Py_DECREF( tmp_locals_numpy$lib$index_tricks_682_key___getitem__ );
        tmp_locals_numpy$lib$index_tricks_682_key___getitem__ = NULL;

        goto outline_result_13;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
        return MOD_RETURN_VALUE( NULL );
        outline_result_13:;
        assert( tmp_class_creation_9__class_dict == NULL );
        tmp_class_creation_9__class_dict = tmp_assign_source_84;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_87;
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_17;
        PyObject *tmp_dict_name_17;
        PyObject *tmp_dict_name_18;
        PyObject *tmp_key_name_18;
        tmp_key_name_17 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_9__class_dict );
        tmp_dict_name_17 = tmp_class_creation_9__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_17, tmp_key_name_17 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 682;

            goto try_except_handler_31;
        }
        tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_9;
        }
        else
        {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT( tmp_class_creation_9__class_dict );
        tmp_dict_name_18 = tmp_class_creation_9__class_dict;
        tmp_key_name_18 = const_str_plain___metaclass__;
        tmp_assign_source_87 = DICT_GET_ITEM( tmp_dict_name_18, tmp_key_name_18 );
        if ( tmp_assign_source_87 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 682;

            goto try_except_handler_31;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_assign_source_87 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_87 );
        condexpr_end_9:;
        assert( tmp_class_creation_9__metaclass == NULL );
        tmp_class_creation_9__metaclass = tmp_assign_source_87;
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_called_name_20;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_args_element_name_31;
        CHECK_OBJECT( tmp_class_creation_9__metaclass );
        tmp_called_name_20 = tmp_class_creation_9__metaclass;
        tmp_args_element_name_29 = const_str_plain_IndexExpression;
        tmp_args_element_name_30 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_9__class_dict );
        tmp_args_element_name_31 = tmp_class_creation_9__class_dict;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 682;
        {
            PyObject *call_args[] = { tmp_args_element_name_29, tmp_args_element_name_30, tmp_args_element_name_31 };
            tmp_assign_source_88 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_20, call_args );
        }

        if ( tmp_assign_source_88 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 682;

            goto try_except_handler_31;
        }
        assert( tmp_class_creation_9__class == NULL );
        tmp_class_creation_9__class = tmp_assign_source_88;
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__class_dict );
    Py_DECREF( tmp_class_creation_9__class_dict );
    tmp_class_creation_9__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    {
        PyObject *tmp_assign_source_89;
        CHECK_OBJECT( tmp_class_creation_9__class );
        tmp_assign_source_89 = tmp_class_creation_9__class;
        UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_IndexExpression, tmp_assign_source_89 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__class );
    Py_DECREF( tmp_class_creation_9__class );
    tmp_class_creation_9__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__class_dict );
    Py_DECREF( tmp_class_creation_9__class_dict );
    tmp_class_creation_9__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__metaclass );
    Py_DECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_called_name_21;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_IndexExpression );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IndexExpression );
        }

        if ( tmp_mvar_value_17 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "IndexExpression" );
            exception_tb = NULL;

            exception_lineno = 735;

            goto frame_exception_exit_1;
        }

        tmp_called_name_21 = tmp_mvar_value_17;
        tmp_kw_name_2 = PyDict_Copy( const_dict_0d87fdb65ac69f3e7f132f381a92030e );
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 735;
        tmp_assign_source_90 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_21, tmp_kw_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_90 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 735;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_index_exp, tmp_assign_source_90 );
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_name_22;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_kw_name_3;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_IndexExpression );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IndexExpression );
        }

        if ( tmp_mvar_value_18 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "IndexExpression" );
            exception_tb = NULL;

            exception_lineno = 736;

            goto frame_exception_exit_1;
        }

        tmp_called_name_22 = tmp_mvar_value_18;
        tmp_kw_name_3 = PyDict_Copy( const_dict_b4dcb48ac0b3434981963a3b0a181907 );
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 736;
        tmp_assign_source_91 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_22, tmp_kw_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        if ( tmp_assign_source_91 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 736;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_s_, tmp_assign_source_91 );
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_92 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_21__fill_diagonal_dispatcher( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__fill_diagonal_dispatcher, tmp_assign_source_92 );
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_called_name_23;
        PyObject *tmp_called_name_24;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_args_element_name_32;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_args_element_name_33;
        PyObject *tmp_defaults_4;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );
        }

        if ( tmp_mvar_value_19 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "array_function_dispatch" );
            exception_tb = NULL;

            exception_lineno = 749;

            goto frame_exception_exit_1;
        }

        tmp_called_name_24 = tmp_mvar_value_19;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__fill_diagonal_dispatcher );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fill_diagonal_dispatcher );
        }

        CHECK_OBJECT( tmp_mvar_value_20 );
        tmp_args_element_name_32 = tmp_mvar_value_20;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 749;
        {
            PyObject *call_args[] = { tmp_args_element_name_32 };
            tmp_called_name_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, call_args );
        }

        if ( tmp_called_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 749;

            goto frame_exception_exit_1;
        }
        tmp_defaults_4 = const_tuple_false_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_args_element_name_33 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_22_fill_diagonal( tmp_defaults_4 );



        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 749;
        {
            PyObject *call_args[] = { tmp_args_element_name_33 };
            tmp_assign_source_93 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
        }

        Py_DECREF( tmp_called_name_23 );
        Py_DECREF( tmp_args_element_name_33 );
        if ( tmp_assign_source_93 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 749;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_fill_diagonal, tmp_assign_source_93 );
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_called_name_25;
        PyObject *tmp_called_name_26;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_args_element_name_34;
        PyObject *tmp_defaults_5;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_set_module );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_set_module );
        }

        if ( tmp_mvar_value_21 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "set_module" );
            exception_tb = NULL;

            exception_lineno = 864;

            goto frame_exception_exit_1;
        }

        tmp_called_name_26 = tmp_mvar_value_21;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 864;
        tmp_called_name_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, &PyTuple_GET_ITEM( const_tuple_str_plain_numpy_tuple, 0 ) );

        if ( tmp_called_name_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 864;

            goto frame_exception_exit_1;
        }
        tmp_defaults_5 = const_tuple_int_pos_2_tuple;
        Py_INCREF( tmp_defaults_5 );
        tmp_args_element_name_34 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_23_diag_indices( tmp_defaults_5 );



        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 864;
        {
            PyObject *call_args[] = { tmp_args_element_name_34 };
            tmp_assign_source_94 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, call_args );
        }

        Py_DECREF( tmp_called_name_25 );
        Py_DECREF( tmp_args_element_name_34 );
        if ( tmp_assign_source_94 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 864;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_diag_indices, tmp_assign_source_94 );
    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_24__diag_indices_from(  );



        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__diag_indices_from, tmp_assign_source_95 );
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_called_name_27;
        PyObject *tmp_called_name_28;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_args_element_name_35;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_args_element_name_36;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_array_function_dispatch );

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

            exception_lineno = 937;

            goto frame_exception_exit_1;
        }

        tmp_called_name_28 = tmp_mvar_value_22;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__diag_indices_from );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__diag_indices_from );
        }

        CHECK_OBJECT( tmp_mvar_value_23 );
        tmp_args_element_name_35 = tmp_mvar_value_23;
        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 937;
        {
            PyObject *call_args[] = { tmp_args_element_name_35 };
            tmp_called_name_27 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_28, call_args );
        }

        if ( tmp_called_name_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 937;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_36 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_25_diag_indices_from(  );



        frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame.f_lineno = 937;
        {
            PyObject *call_args[] = { tmp_args_element_name_36 };
            tmp_assign_source_96 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_27, call_args );
        }

        Py_DECREF( tmp_called_name_27 );
        Py_DECREF( tmp_args_element_name_36 );
        if ( tmp_assign_source_96 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 937;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_diag_indices_from, tmp_assign_source_96 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6f9a5b7b62ba49567e39ae003eb43bf4 );
#endif
    popFrameStack();

    assertFrameObject( frame_6f9a5b7b62ba49567e39ae003eb43bf4 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6f9a5b7b62ba49567e39ae003eb43bf4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6f9a5b7b62ba49567e39ae003eb43bf4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6f9a5b7b62ba49567e39ae003eb43bf4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6f9a5b7b62ba49567e39ae003eb43bf4, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_numpy$lib$index_tricks );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
