/* Generated code for Python module 'numpy.polynomial.polyutils'
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

/* The "_module_numpy$polynomial$polyutils" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$polynomial$polyutils;
PyDictObject *moduledict_numpy$polynomial$polyutils;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_copy;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_RankWarning;
static PyObject *const_str_digest_8cddc816cdb78f26976645673d7a8785;
extern PyObject *const_str_plain_type;
static PyObject *const_str_digest_5f6e888b6d9f94b8cf5cdf4f9e641288;
extern PyObject *const_str_plain_as_series;
static PyObject *const_str_digest_86a0b56433fe35dfdaa0791504789667;
static PyObject *const_str_digest_f6944356c8987164c4200fa24fd72607;
static PyObject *const_tuple_19907d688f6cb634a9161a58edd9e0a3_tuple;
extern PyObject *const_str_plain_typecodes;
extern PyObject *const_str_plain_real;
extern PyObject *const_str_plain_trimcoef;
static PyObject *const_list_5140ad4e1b77591e9582f3c8be3d2cbb_list;
extern PyObject *const_str_plain_ret;
static PyObject *const_str_plain_PolyBase;
extern PyObject *const_str_plain_object;
static PyObject *const_tuple_str_plain_c_str_plain_tol_str_plain_ind_tuple;
extern PyObject *const_dict_1eef64507cf3de8ea0ea857c5e7e1090;
extern PyObject *const_str_plain_ind;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_mapdomain;
extern PyObject *const_str_plain_dtype;
static PyObject *const_str_digest_338f0160593f851c0143eebfd79bfeca;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_rmin;
extern PyObject *const_str_plain_off;
static PyObject *const_tuple_str_plain_seq_str_plain_i_tuple;
extern PyObject *const_str_plain_rmax;
extern PyObject *const_str_plain_mapparms;
static PyObject *const_str_digest_ab1a29ebd75ef6b4e43e6d8f6635134e;
extern PyObject *const_str_plain_ndmin;
extern PyObject *const_str_plain_common_type;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_plain_trim;
static PyObject *const_str_digest_5ac73218234819aaa97a51e223a25152;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_seq;
static PyObject *const_str_digest_d4402ccc6609c8cb901f6facc83c7413;
static PyObject *const_tuple_f5b5b5c2efb12413f142b4ac40bdb11b_tuple;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain_max;
extern PyObject *const_dict_ee9b50b2ea01af7ea63a79da3e3468b3;
static PyObject *const_str_digest_fec7117366bd52892d39d8e43ffa8ae4;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_nonzero;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_846377ae7ebf64e407501456090ac4b6;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_df4438039abddc03aa325ded7a3d73dd;
extern PyObject *const_tuple_true_tuple;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain_PolyError;
extern PyObject *const_str_plain_array;
static PyObject *const_str_digest_21a64dcb81594be5923fffb0d0da01da;
static PyObject *const_str_plain_imin;
extern PyObject *const_str_plain_arrays;
extern PyObject *const_str_plain_new;
static PyObject *const_str_plain_alist;
extern PyObject *const_str_plain_old;
static PyObject *const_str_plain_newlen;
extern PyObject *const_str_plain_empty;
extern PyObject *const_str_plain_tol;
extern PyObject *const_str_plain_scl;
static PyObject *const_str_digest_c3fbef28d81c0d779c444231a45b0d97;
extern PyObject *const_str_plain_trimseq;
static PyObject *const_str_digest_a0d13325845562e4bbc31bdb2ba6618b;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_x;
static PyObject *const_dict_4a5e683ee4476635c0e42e04a0a8b1fd;
static PyObject *const_tuple_36fd3ac76d66d43dd4afe932ec888ab2_tuple;
extern PyObject *const_str_plain_np;
static PyObject *const_tuple_1418022a7538ea41dc3498c2be51bc57_tuple;
extern PyObject *const_str_plain_Complex;
extern PyObject *const_str_plain_tmp;
extern PyObject *const_str_plain_char;
extern PyObject *const_str_plain_any;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_digest_69cd6e1f2931773d8876e0702857c0ba;
static PyObject *const_str_digest_627bb2bfc3f5e65b70d6af42f332de37;
extern PyObject *const_str_plain_UserWarning;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_tuple_type_Exception_tuple;
static PyObject *const_dict_ef40a0f54134c28d5296f4277b9744e7;
extern PyObject *const_str_plain_asanyarray;
extern PyObject *const_str_plain_division;
static PyObject *const_str_digest_c33c3dfe4ecbe4552a6e4d75b21c1f15;
static PyObject *const_str_plain_PolyDomainError;
static PyObject *const_str_plain_oldlen;
extern PyObject *const_str_plain_imag;
static PyObject *const_str_digest_d2799ae06bf19fd354ec2489a69daa20;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_getdomain;
extern PyObject *const_str_plain_imax;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_8cddc816cdb78f26976645673d7a8785 = UNSTREAM_STRING( &constant_bin[ 2382969 ], 24, 0 );
    const_str_digest_5f6e888b6d9f94b8cf5cdf4f9e641288 = UNSTREAM_STRING( &constant_bin[ 2382993 ], 1575, 0 );
    const_str_digest_86a0b56433fe35dfdaa0791504789667 = UNSTREAM_STRING( &constant_bin[ 2384568 ], 35, 0 );
    const_str_digest_f6944356c8987164c4200fa24fd72607 = UNSTREAM_STRING( &constant_bin[ 2384603 ], 1083, 0 );
    const_tuple_19907d688f6cb634a9161a58edd9e0a3_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_19907d688f6cb634a9161a58edd9e0a3_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_plain_rmin = UNSTREAM_STRING( &constant_bin[ 2535 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_19907d688f6cb634a9161a58edd9e0a3_tuple, 1, const_str_plain_rmin ); Py_INCREF( const_str_plain_rmin );
    const_str_plain_imin = UNSTREAM_STRING( &constant_bin[ 253163 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_19907d688f6cb634a9161a58edd9e0a3_tuple, 2, const_str_plain_imin ); Py_INCREF( const_str_plain_imin );
    PyTuple_SET_ITEM( const_tuple_19907d688f6cb634a9161a58edd9e0a3_tuple, 3, const_str_plain_rmax ); Py_INCREF( const_str_plain_rmax );
    PyTuple_SET_ITEM( const_tuple_19907d688f6cb634a9161a58edd9e0a3_tuple, 4, const_str_plain_imax ); Py_INCREF( const_str_plain_imax );
    const_list_5140ad4e1b77591e9582f3c8be3d2cbb_list = PyList_New( 10 );
    PyList_SET_ITEM( const_list_5140ad4e1b77591e9582f3c8be3d2cbb_list, 0, const_str_plain_RankWarning ); Py_INCREF( const_str_plain_RankWarning );
    const_str_plain_PolyError = UNSTREAM_STRING( &constant_bin[ 2385686 ], 9, 1 );
    PyList_SET_ITEM( const_list_5140ad4e1b77591e9582f3c8be3d2cbb_list, 1, const_str_plain_PolyError ); Py_INCREF( const_str_plain_PolyError );
    const_str_plain_PolyDomainError = UNSTREAM_STRING( &constant_bin[ 2385695 ], 15, 1 );
    PyList_SET_ITEM( const_list_5140ad4e1b77591e9582f3c8be3d2cbb_list, 2, const_str_plain_PolyDomainError ); Py_INCREF( const_str_plain_PolyDomainError );
    PyList_SET_ITEM( const_list_5140ad4e1b77591e9582f3c8be3d2cbb_list, 3, const_str_plain_as_series ); Py_INCREF( const_str_plain_as_series );
    PyList_SET_ITEM( const_list_5140ad4e1b77591e9582f3c8be3d2cbb_list, 4, const_str_plain_trimseq ); Py_INCREF( const_str_plain_trimseq );
    PyList_SET_ITEM( const_list_5140ad4e1b77591e9582f3c8be3d2cbb_list, 5, const_str_plain_trimcoef ); Py_INCREF( const_str_plain_trimcoef );
    PyList_SET_ITEM( const_list_5140ad4e1b77591e9582f3c8be3d2cbb_list, 6, const_str_plain_getdomain ); Py_INCREF( const_str_plain_getdomain );
    PyList_SET_ITEM( const_list_5140ad4e1b77591e9582f3c8be3d2cbb_list, 7, const_str_plain_mapdomain ); Py_INCREF( const_str_plain_mapdomain );
    PyList_SET_ITEM( const_list_5140ad4e1b77591e9582f3c8be3d2cbb_list, 8, const_str_plain_mapparms ); Py_INCREF( const_str_plain_mapparms );
    const_str_plain_PolyBase = UNSTREAM_STRING( &constant_bin[ 2106952 ], 8, 1 );
    PyList_SET_ITEM( const_list_5140ad4e1b77591e9582f3c8be3d2cbb_list, 9, const_str_plain_PolyBase ); Py_INCREF( const_str_plain_PolyBase );
    const_tuple_str_plain_c_str_plain_tol_str_plain_ind_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_c_str_plain_tol_str_plain_ind_tuple, 0, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_str_plain_c_str_plain_tol_str_plain_ind_tuple, 1, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    PyTuple_SET_ITEM( const_tuple_str_plain_c_str_plain_tol_str_plain_ind_tuple, 2, const_str_plain_ind ); Py_INCREF( const_str_plain_ind );
    const_str_digest_338f0160593f851c0143eebfd79bfeca = UNSTREAM_STRING( &constant_bin[ 2385710 ], 26, 0 );
    const_tuple_str_plain_seq_str_plain_i_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_seq_str_plain_i_tuple, 0, const_str_plain_seq ); Py_INCREF( const_str_plain_seq );
    PyTuple_SET_ITEM( const_tuple_str_plain_seq_str_plain_i_tuple, 1, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_str_digest_ab1a29ebd75ef6b4e43e6d8f6635134e = UNSTREAM_STRING( &constant_bin[ 2385736 ], 214, 0 );
    const_str_digest_5ac73218234819aaa97a51e223a25152 = UNSTREAM_STRING( &constant_bin[ 2385950 ], 1828, 0 );
    const_str_digest_d4402ccc6609c8cb901f6facc83c7413 = UNSTREAM_STRING( &constant_bin[ 2387778 ], 38, 0 );
    const_tuple_f5b5b5c2efb12413f142b4ac40bdb11b_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_f5b5b5c2efb12413f142b4ac40bdb11b_tuple, 0, const_str_plain_old ); Py_INCREF( const_str_plain_old );
    PyTuple_SET_ITEM( const_tuple_f5b5b5c2efb12413f142b4ac40bdb11b_tuple, 1, const_str_plain_new ); Py_INCREF( const_str_plain_new );
    PyTuple_SET_ITEM( const_tuple_f5b5b5c2efb12413f142b4ac40bdb11b_tuple, 2, const_str_plain_scl ); Py_INCREF( const_str_plain_scl );
    const_str_plain_oldlen = UNSTREAM_STRING( &constant_bin[ 2387816 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_f5b5b5c2efb12413f142b4ac40bdb11b_tuple, 3, const_str_plain_oldlen ); Py_INCREF( const_str_plain_oldlen );
    const_str_plain_newlen = UNSTREAM_STRING( &constant_bin[ 2387822 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_f5b5b5c2efb12413f142b4ac40bdb11b_tuple, 4, const_str_plain_newlen ); Py_INCREF( const_str_plain_newlen );
    PyTuple_SET_ITEM( const_tuple_f5b5b5c2efb12413f142b4ac40bdb11b_tuple, 5, const_str_plain_off ); Py_INCREF( const_str_plain_off );
    const_str_digest_fec7117366bd52892d39d8e43ffa8ae4 = UNSTREAM_STRING( &constant_bin[ 2387828 ], 509, 0 );
    const_str_digest_846377ae7ebf64e407501456090ac4b6 = UNSTREAM_STRING( &constant_bin[ 2388337 ], 164, 0 );
    const_str_digest_df4438039abddc03aa325ded7a3d73dd = UNSTREAM_STRING( &constant_bin[ 2388501 ], 59, 0 );
    const_str_digest_21a64dcb81594be5923fffb0d0da01da = UNSTREAM_STRING( &constant_bin[ 2388560 ], 37, 0 );
    const_str_plain_alist = UNSTREAM_STRING( &constant_bin[ 2074047 ], 5, 1 );
    const_str_digest_c3fbef28d81c0d779c444231a45b0d97 = UNSTREAM_STRING( &constant_bin[ 2388597 ], 1105, 0 );
    const_str_digest_a0d13325845562e4bbc31bdb2ba6618b = UNSTREAM_STRING( &constant_bin[ 2384576 ], 26, 0 );
    const_dict_4a5e683ee4476635c0e42e04a0a8b1fd = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_4a5e683ee4476635c0e42e04a0a8b1fd, const_str_plain___module__, const_str_digest_a0d13325845562e4bbc31bdb2ba6618b );
    PyDict_SetItem( const_dict_4a5e683ee4476635c0e42e04a0a8b1fd, const_str_plain___doc__, const_str_digest_ab1a29ebd75ef6b4e43e6d8f6635134e );
    assert( PyDict_Size( const_dict_4a5e683ee4476635c0e42e04a0a8b1fd ) == 2 );
    const_tuple_36fd3ac76d66d43dd4afe932ec888ab2_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_36fd3ac76d66d43dd4afe932ec888ab2_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_36fd3ac76d66d43dd4afe932ec888ab2_tuple, 1, const_str_plain_old ); Py_INCREF( const_str_plain_old );
    PyTuple_SET_ITEM( const_tuple_36fd3ac76d66d43dd4afe932ec888ab2_tuple, 2, const_str_plain_new ); Py_INCREF( const_str_plain_new );
    PyTuple_SET_ITEM( const_tuple_36fd3ac76d66d43dd4afe932ec888ab2_tuple, 3, const_str_plain_scl ); Py_INCREF( const_str_plain_scl );
    PyTuple_SET_ITEM( const_tuple_36fd3ac76d66d43dd4afe932ec888ab2_tuple, 4, const_str_plain_off ); Py_INCREF( const_str_plain_off );
    const_tuple_1418022a7538ea41dc3498c2be51bc57_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_1418022a7538ea41dc3498c2be51bc57_tuple, 0, const_str_plain_alist ); Py_INCREF( const_str_plain_alist );
    PyTuple_SET_ITEM( const_tuple_1418022a7538ea41dc3498c2be51bc57_tuple, 1, const_str_plain_trim ); Py_INCREF( const_str_plain_trim );
    PyTuple_SET_ITEM( const_tuple_1418022a7538ea41dc3498c2be51bc57_tuple, 2, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_1418022a7538ea41dc3498c2be51bc57_tuple, 3, const_str_plain_arrays ); Py_INCREF( const_str_plain_arrays );
    PyTuple_SET_ITEM( const_tuple_1418022a7538ea41dc3498c2be51bc57_tuple, 4, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_1418022a7538ea41dc3498c2be51bc57_tuple, 5, const_str_plain_ret ); Py_INCREF( const_str_plain_ret );
    PyTuple_SET_ITEM( const_tuple_1418022a7538ea41dc3498c2be51bc57_tuple, 6, const_str_plain_tmp ); Py_INCREF( const_str_plain_tmp );
    const_str_digest_69cd6e1f2931773d8876e0702857c0ba = UNSTREAM_STRING( &constant_bin[ 2389702 ], 62, 0 );
    const_str_digest_627bb2bfc3f5e65b70d6af42f332de37 = UNSTREAM_STRING( &constant_bin[ 2389764 ], 1332, 0 );
    const_dict_ef40a0f54134c28d5296f4277b9744e7 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_ef40a0f54134c28d5296f4277b9744e7, const_str_plain___module__, const_str_digest_a0d13325845562e4bbc31bdb2ba6618b );
    PyDict_SetItem( const_dict_ef40a0f54134c28d5296f4277b9744e7, const_str_plain___doc__, const_str_digest_21a64dcb81594be5923fffb0d0da01da );
    assert( PyDict_Size( const_dict_ef40a0f54134c28d5296f4277b9744e7 ) == 2 );
    const_str_digest_c33c3dfe4ecbe4552a6e4d75b21c1f15 = UNSTREAM_STRING( &constant_bin[ 2391096 ], 28, 0 );
    const_str_digest_d2799ae06bf19fd354ec2489a69daa20 = UNSTREAM_STRING( &constant_bin[ 2391124 ], 1003, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$polynomial$polyutils( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_ad899be6e77d08c0cbca5bc3ed54cabb;
static PyCodeObject *codeobj_b92a5fefd45533b4c2da8ac167fbab36;
static PyCodeObject *codeobj_6db8eb26762881c5fe2bf102a2214015;
static PyCodeObject *codeobj_0bdbc5aa5cf59805bc818ae14ab9079c;
static PyCodeObject *codeobj_9cb560a4fff901a410a26835e0313bec;
static PyCodeObject *codeobj_7c64684bafbfb7c5a06a02c577ddff75;
static PyCodeObject *codeobj_46602207b2781146f0eee5f5b2d55c41;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_69cd6e1f2931773d8876e0702857c0ba;
    codeobj_ad899be6e77d08c0cbca5bc3ed54cabb = MAKE_CODEOBJ( module_filename_obj, const_str_digest_86a0b56433fe35dfdaa0791504789667, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b92a5fefd45533b4c2da8ac167fbab36 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_as_series, 124, const_tuple_1418022a7538ea41dc3498c2be51bc57_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6db8eb26762881c5fe2bf102a2214015 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getdomain, 254, const_tuple_19907d688f6cb634a9161a58edd9e0a3_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0bdbc5aa5cf59805bc818ae14ab9079c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_mapdomain, 347, const_tuple_36fd3ac76d66d43dd4afe932ec888ab2_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9cb560a4fff901a410a26835e0313bec = MAKE_CODEOBJ( module_filename_obj, const_str_plain_mapparms, 300, const_tuple_f5b5b5c2efb12413f142b4ac40bdb11b_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7c64684bafbfb7c5a06a02c577ddff75 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_trimcoef, 200, const_tuple_str_plain_c_str_plain_tol_str_plain_ind_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_46602207b2781146f0eee5f5b2d55c41 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_trimseq, 94, const_tuple_str_plain_seq_str_plain_i_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3_complex_call_helper_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_1_trimseq(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_2_as_series( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_3_trimcoef( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_4_getdomain(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_5_mapparms(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_6_mapdomain(  );


// The module function definitions.
static PyObject *impl_numpy$polynomial$polyutils$$$function_1_trimseq( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_seq = python_pars[ 0 ];
    PyObject *var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_46602207b2781146f0eee5f5b2d55c41;
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
    static struct Nuitka_FrameObject *cache_frame_46602207b2781146f0eee5f5b2d55c41 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_46602207b2781146f0eee5f5b2d55c41, codeobj_46602207b2781146f0eee5f5b2d55c41, module_numpy$polynomial$polyutils, sizeof(void *)+sizeof(void *) );
    frame_46602207b2781146f0eee5f5b2d55c41 = cache_frame_46602207b2781146f0eee5f5b2d55c41;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_46602207b2781146f0eee5f5b2d55c41 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_46602207b2781146f0eee5f5b2d55c41 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_seq );
        tmp_len_arg_1 = par_seq;
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        assert( !(tmp_res == -1) );
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
        CHECK_OBJECT( par_seq );
        tmp_return_value = par_seq;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_range3_low_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_len_arg_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_range3_high_1;
            PyObject *tmp_range3_step_1;
            CHECK_OBJECT( par_seq );
            tmp_len_arg_2 = par_seq;
            tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_2 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 118;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_int_pos_1;
            tmp_range3_low_1 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_range3_low_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 118;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_range3_high_1 = const_int_neg_1;
            tmp_range3_step_1 = const_int_neg_1;
            tmp_iter_arg_1 = BUILTIN_RANGE3( tmp_range3_low_1, tmp_range3_high_1, tmp_range3_step_1 );
            Py_DECREF( tmp_range3_low_1 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 118;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 118;
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
                    exception_lineno = 118;
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
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_seq );
            tmp_subscribed_name_1 = par_seq;
            CHECK_OBJECT( var_i );
            tmp_subscript_name_1 = var_i;
            tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 119;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            tmp_compexpr_right_2 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_INT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 119;
                type_description_1 = "oo";
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
            goto loop_end_1;
            branch_no_2:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
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
            PyObject *tmp_slice_source_1;
            PyObject *tmp_slice_upper_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( par_seq );
            tmp_slice_source_1 = par_seq;
            if ( var_i == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "i" );
                exception_tb = NULL;

                exception_lineno = 121;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_2 = var_i;
            tmp_right_name_2 = const_int_pos_1;
            tmp_slice_upper_1 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_slice_upper_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 121;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = LOOKUP_SLICE( tmp_slice_source_1, Py_None, tmp_slice_upper_1 );
            Py_DECREF( tmp_slice_upper_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 121;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_46602207b2781146f0eee5f5b2d55c41 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_46602207b2781146f0eee5f5b2d55c41 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_46602207b2781146f0eee5f5b2d55c41 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_46602207b2781146f0eee5f5b2d55c41, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_46602207b2781146f0eee5f5b2d55c41->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_46602207b2781146f0eee5f5b2d55c41, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_46602207b2781146f0eee5f5b2d55c41,
        type_description_1,
        par_seq,
        var_i
    );


    // Release cached frame.
    if ( frame_46602207b2781146f0eee5f5b2d55c41 == cache_frame_46602207b2781146f0eee5f5b2d55c41 )
    {
        Py_DECREF( frame_46602207b2781146f0eee5f5b2d55c41 );
    }
    cache_frame_46602207b2781146f0eee5f5b2d55c41 = NULL;

    assertFrameObject( frame_46602207b2781146f0eee5f5b2d55c41 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_1_trimseq );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)par_seq );
    Py_DECREF( par_seq );
    par_seq = NULL;

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

    Py_XDECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)par_seq );
    Py_DECREF( par_seq );
    par_seq = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_1_trimseq );
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


static PyObject *impl_numpy$polynomial$polyutils$$$function_2_as_series( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_alist = python_pars[ 0 ];
    PyObject *par_trim = python_pars[ 1 ];
    PyObject *var_a = NULL;
    PyObject *var_arrays = NULL;
    PyObject *var_dtype = NULL;
    PyObject *var_ret = NULL;
    PyObject *var_tmp = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    PyObject *tmp_list_contraction_2__$0 = NULL;
    PyObject *tmp_list_contraction_2__contraction_result = NULL;
    PyObject *tmp_list_contraction_2__iter_value_0 = NULL;
    PyObject *tmp_list_contraction_3__$0 = NULL;
    PyObject *tmp_list_contraction_3__contraction_result = NULL;
    PyObject *tmp_list_contraction_3__iter_value_0 = NULL;
    PyObject *tmp_list_contraction_4__$0 = NULL;
    PyObject *tmp_list_contraction_4__contraction_result = NULL;
    PyObject *tmp_list_contraction_4__iter_value_0 = NULL;
    PyObject *tmp_list_contraction_5__$0 = NULL;
    PyObject *tmp_list_contraction_5__contraction_result = NULL;
    PyObject *tmp_list_contraction_5__iter_value_0 = NULL;
    PyObject *tmp_list_contraction_6__$0 = NULL;
    PyObject *tmp_list_contraction_6__contraction_result = NULL;
    PyObject *tmp_list_contraction_6__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_b92a5fefd45533b4c2da8ac167fbab36;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    bool tmp_result;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    static struct Nuitka_FrameObject *cache_frame_b92a5fefd45533b4c2da8ac167fbab36 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b92a5fefd45533b4c2da8ac167fbab36, codeobj_b92a5fefd45533b4c2da8ac167fbab36, module_numpy$polynomial$polyutils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b92a5fefd45533b4c2da8ac167fbab36 = cache_frame_b92a5fefd45533b4c2da8ac167fbab36;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b92a5fefd45533b4c2da8ac167fbab36 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b92a5fefd45533b4c2da8ac167fbab36 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( par_alist );
            tmp_iter_arg_1 = par_alist;
            tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 174;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            assert( tmp_list_contraction_1__$0 == NULL );
            tmp_list_contraction_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = PyList_New( 0 );
            assert( tmp_list_contraction_1__contraction_result == NULL );
            tmp_list_contraction_1__contraction_result = tmp_assign_source_3;
        }
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT( tmp_list_contraction_1__$0 );
            tmp_next_source_1 = tmp_list_contraction_1__$0;
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
                    type_description_1 = "ooooooo";
                    exception_lineno = 174;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_list_contraction_1__iter_value_0;
                tmp_list_contraction_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT( tmp_list_contraction_1__iter_value_0 );
            tmp_assign_source_5 = tmp_list_contraction_1__iter_value_0;
            {
                PyObject *old = var_a;
                var_a = tmp_assign_source_5;
                Py_INCREF( var_a );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
            tmp_append_list_1 = tmp_list_contraction_1__contraction_result;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
                exception_tb = NULL;

                exception_lineno = 174;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }

            tmp_source_name_1 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 174;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_a );
            tmp_tuple_element_1 = var_a;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_1eef64507cf3de8ea0ea857c5e7e1090 );
            frame_b92a5fefd45533b4c2da8ac167fbab36->m_frame.f_lineno = 174;
            tmp_append_value_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 174;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 174;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 174;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
        tmp_assign_source_1 = tmp_list_contraction_1__contraction_result;
        Py_INCREF( tmp_assign_source_1 );
        goto try_return_handler_2;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
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
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
        return NULL;
        outline_result_1:;
        assert( var_arrays == NULL );
        var_arrays = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_min );
        assert( tmp_called_name_2 != NULL );
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT( var_arrays );
            tmp_iter_arg_2 = var_arrays;
            tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 175;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            assert( tmp_list_contraction_2__$0 == NULL );
            tmp_list_contraction_2__$0 = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = PyList_New( 0 );
            assert( tmp_list_contraction_2__contraction_result == NULL );
            tmp_list_contraction_2__contraction_result = tmp_assign_source_7;
        }
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( tmp_list_contraction_2__$0 );
            tmp_next_source_2 = tmp_list_contraction_2__$0;
            tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_8 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooo";
                    exception_lineno = 175;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_list_contraction_2__iter_value_0;
                tmp_list_contraction_2__iter_value_0 = tmp_assign_source_8;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( tmp_list_contraction_2__iter_value_0 );
            tmp_assign_source_9 = tmp_list_contraction_2__iter_value_0;
            {
                PyObject *old = var_a;
                var_a = tmp_assign_source_9;
                Py_INCREF( var_a );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( tmp_list_contraction_2__contraction_result );
            tmp_append_list_2 = tmp_list_contraction_2__contraction_result;
            CHECK_OBJECT( var_a );
            tmp_source_name_2 = var_a;
            tmp_append_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_size );
            if ( tmp_append_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 175;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            assert( PyList_Check( tmp_append_list_2 ) );
            tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
            Py_DECREF( tmp_append_value_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 175;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT( tmp_list_contraction_2__contraction_result );
        tmp_args_element_name_1 = tmp_list_contraction_2__contraction_result;
        Py_INCREF( tmp_args_element_name_1 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT( (PyObject *)tmp_list_contraction_2__$0 );
        Py_DECREF( tmp_list_contraction_2__$0 );
        tmp_list_contraction_2__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_list_contraction_2__contraction_result );
        Py_DECREF( tmp_list_contraction_2__contraction_result );
        tmp_list_contraction_2__contraction_result = NULL;

        Py_XDECREF( tmp_list_contraction_2__iter_value_0 );
        tmp_list_contraction_2__iter_value_0 = NULL;

        goto outline_result_2;
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

        Py_XDECREF( tmp_list_contraction_2__$0 );
        tmp_list_contraction_2__$0 = NULL;

        Py_XDECREF( tmp_list_contraction_2__contraction_result );
        tmp_list_contraction_2__contraction_result = NULL;

        Py_XDECREF( tmp_list_contraction_2__iter_value_0 );
        tmp_list_contraction_2__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
        return NULL;
        outline_result_2:;
        frame_b92a5fefd45533b4c2da8ac167fbab36->m_frame.f_lineno = 175;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "ooooooo";
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
            tmp_make_exception_arg_1 = const_str_digest_338f0160593f851c0143eebfd79bfeca;
            frame_b92a5fefd45533b4c2da8ac167fbab36->m_frame.f_lineno = 176;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 176;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_1;
        tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_any );
        assert( tmp_called_name_3 != NULL );
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT( var_arrays );
            tmp_iter_arg_3 = var_arrays;
            tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_3 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 177;
                type_description_1 = "ooooooo";
                goto try_except_handler_4;
            }
            assert( tmp_list_contraction_3__$0 == NULL );
            tmp_list_contraction_3__$0 = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = PyList_New( 0 );
            assert( tmp_list_contraction_3__contraction_result == NULL );
            tmp_list_contraction_3__contraction_result = tmp_assign_source_11;
        }
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT( tmp_list_contraction_3__$0 );
            tmp_next_source_3 = tmp_list_contraction_3__$0;
            tmp_assign_source_12 = ITERATOR_NEXT( tmp_next_source_3 );
            if ( tmp_assign_source_12 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_3;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooo";
                    exception_lineno = 177;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_list_contraction_3__iter_value_0;
                tmp_list_contraction_3__iter_value_0 = tmp_assign_source_12;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT( tmp_list_contraction_3__iter_value_0 );
            tmp_assign_source_13 = tmp_list_contraction_3__iter_value_0;
            {
                PyObject *old = var_a;
                var_a = tmp_assign_source_13;
                Py_INCREF( var_a );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_3;
            PyObject *tmp_append_value_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( tmp_list_contraction_3__contraction_result );
            tmp_append_list_3 = tmp_list_contraction_3__contraction_result;
            CHECK_OBJECT( var_a );
            tmp_source_name_3 = var_a;
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ndim );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 177;
                type_description_1 = "ooooooo";
                goto try_except_handler_4;
            }
            tmp_compexpr_right_2 = const_int_pos_1;
            tmp_append_value_3 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_append_value_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 177;
                type_description_1 = "ooooooo";
                goto try_except_handler_4;
            }
            assert( PyList_Check( tmp_append_list_3 ) );
            tmp_res = PyList_Append( tmp_append_list_3, tmp_append_value_3 );
            Py_DECREF( tmp_append_value_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 177;
                type_description_1 = "ooooooo";
                goto try_except_handler_4;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT( tmp_list_contraction_3__contraction_result );
        tmp_args_element_name_2 = tmp_list_contraction_3__contraction_result;
        Py_INCREF( tmp_args_element_name_2 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT( (PyObject *)tmp_list_contraction_3__$0 );
        Py_DECREF( tmp_list_contraction_3__$0 );
        tmp_list_contraction_3__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_list_contraction_3__contraction_result );
        Py_DECREF( tmp_list_contraction_3__contraction_result );
        tmp_list_contraction_3__contraction_result = NULL;

        Py_XDECREF( tmp_list_contraction_3__iter_value_0 );
        tmp_list_contraction_3__iter_value_0 = NULL;

        goto outline_result_3;
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

        Py_XDECREF( tmp_list_contraction_3__$0 );
        tmp_list_contraction_3__$0 = NULL;

        Py_XDECREF( tmp_list_contraction_3__contraction_result );
        tmp_list_contraction_3__contraction_result = NULL;

        Py_XDECREF( tmp_list_contraction_3__iter_value_0 );
        tmp_list_contraction_3__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
        return NULL;
        outline_result_3:;
        frame_b92a5fefd45533b4c2da8ac167fbab36->m_frame.f_lineno = 177;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 177;
            type_description_1 = "ooooooo";
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_c33c3dfe4ecbe4552a6e4d75b21c1f15;
            frame_b92a5fefd45533b4c2da8ac167fbab36->m_frame.f_lineno = 178;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 178;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_trim );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_trim );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "ooooooo";
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
            PyObject *tmp_assign_source_14;
            // Tried code:
            {
                PyObject *tmp_assign_source_15;
                PyObject *tmp_iter_arg_4;
                CHECK_OBJECT( var_arrays );
                tmp_iter_arg_4 = var_arrays;
                tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_4 );
                if ( tmp_assign_source_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 180;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }
                assert( tmp_list_contraction_4__$0 == NULL );
                tmp_list_contraction_4__$0 = tmp_assign_source_15;
            }
            {
                PyObject *tmp_assign_source_16;
                tmp_assign_source_16 = PyList_New( 0 );
                assert( tmp_list_contraction_4__contraction_result == NULL );
                tmp_list_contraction_4__contraction_result = tmp_assign_source_16;
            }
            loop_start_4:;
            {
                PyObject *tmp_next_source_4;
                PyObject *tmp_assign_source_17;
                CHECK_OBJECT( tmp_list_contraction_4__$0 );
                tmp_next_source_4 = tmp_list_contraction_4__$0;
                tmp_assign_source_17 = ITERATOR_NEXT( tmp_next_source_4 );
                if ( tmp_assign_source_17 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_4;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ooooooo";
                        exception_lineno = 180;
                        goto try_except_handler_5;
                    }
                }

                {
                    PyObject *old = tmp_list_contraction_4__iter_value_0;
                    tmp_list_contraction_4__iter_value_0 = tmp_assign_source_17;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_18;
                CHECK_OBJECT( tmp_list_contraction_4__iter_value_0 );
                tmp_assign_source_18 = tmp_list_contraction_4__iter_value_0;
                {
                    PyObject *old = var_a;
                    var_a = tmp_assign_source_18;
                    Py_INCREF( var_a );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_append_list_4;
                PyObject *tmp_append_value_4;
                PyObject *tmp_called_name_4;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_3;
                CHECK_OBJECT( tmp_list_contraction_4__contraction_result );
                tmp_append_list_4 = tmp_list_contraction_4__contraction_result;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_trimseq );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_trimseq );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "trimseq" );
                    exception_tb = NULL;

                    exception_lineno = 180;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }

                tmp_called_name_4 = tmp_mvar_value_2;
                CHECK_OBJECT( var_a );
                tmp_args_element_name_3 = var_a;
                frame_b92a5fefd45533b4c2da8ac167fbab36->m_frame.f_lineno = 180;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_append_value_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                }

                if ( tmp_append_value_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 180;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }
                assert( PyList_Check( tmp_append_list_4 ) );
                tmp_res = PyList_Append( tmp_append_list_4, tmp_append_value_4 );
                Py_DECREF( tmp_append_value_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 180;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 180;
                type_description_1 = "ooooooo";
                goto try_except_handler_5;
            }
            goto loop_start_4;
            loop_end_4:;
            CHECK_OBJECT( tmp_list_contraction_4__contraction_result );
            tmp_assign_source_14 = tmp_list_contraction_4__contraction_result;
            Py_INCREF( tmp_assign_source_14 );
            goto try_return_handler_5;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
            return NULL;
            // Return handler code:
            try_return_handler_5:;
            CHECK_OBJECT( (PyObject *)tmp_list_contraction_4__$0 );
            Py_DECREF( tmp_list_contraction_4__$0 );
            tmp_list_contraction_4__$0 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_list_contraction_4__contraction_result );
            Py_DECREF( tmp_list_contraction_4__contraction_result );
            tmp_list_contraction_4__contraction_result = NULL;

            Py_XDECREF( tmp_list_contraction_4__iter_value_0 );
            tmp_list_contraction_4__iter_value_0 = NULL;

            goto outline_result_4;
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

            Py_XDECREF( tmp_list_contraction_4__$0 );
            tmp_list_contraction_4__$0 = NULL;

            Py_XDECREF( tmp_list_contraction_4__contraction_result );
            tmp_list_contraction_4__contraction_result = NULL;

            Py_XDECREF( tmp_list_contraction_4__iter_value_0 );
            tmp_list_contraction_4__iter_value_0 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_4;
            exception_value = exception_keeper_value_4;
            exception_tb = exception_keeper_tb_4;
            exception_lineno = exception_keeper_lineno_4;

            goto frame_exception_exit_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
            return NULL;
            outline_result_4:;
            {
                PyObject *old = var_arrays;
                assert( old != NULL );
                var_arrays = tmp_assign_source_14;
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_4;
        int tmp_truth_name_3;
        tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_any );
        assert( tmp_called_name_5 != NULL );
        // Tried code:
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_iter_arg_5;
            CHECK_OBJECT( var_arrays );
            tmp_iter_arg_5 = var_arrays;
            tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_5 );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 182;
                type_description_1 = "ooooooo";
                goto try_except_handler_6;
            }
            assert( tmp_list_contraction_5__$0 == NULL );
            tmp_list_contraction_5__$0 = tmp_assign_source_19;
        }
        {
            PyObject *tmp_assign_source_20;
            tmp_assign_source_20 = PyList_New( 0 );
            assert( tmp_list_contraction_5__contraction_result == NULL );
            tmp_list_contraction_5__contraction_result = tmp_assign_source_20;
        }
        loop_start_5:;
        {
            PyObject *tmp_next_source_5;
            PyObject *tmp_assign_source_21;
            CHECK_OBJECT( tmp_list_contraction_5__$0 );
            tmp_next_source_5 = tmp_list_contraction_5__$0;
            tmp_assign_source_21 = ITERATOR_NEXT( tmp_next_source_5 );
            if ( tmp_assign_source_21 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_5;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooo";
                    exception_lineno = 182;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_list_contraction_5__iter_value_0;
                tmp_list_contraction_5__iter_value_0 = tmp_assign_source_21;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_22;
            CHECK_OBJECT( tmp_list_contraction_5__iter_value_0 );
            tmp_assign_source_22 = tmp_list_contraction_5__iter_value_0;
            {
                PyObject *old = var_a;
                var_a = tmp_assign_source_22;
                Py_INCREF( var_a );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_5;
            PyObject *tmp_append_value_5;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_3;
            CHECK_OBJECT( tmp_list_contraction_5__contraction_result );
            tmp_append_list_5 = tmp_list_contraction_5__contraction_result;
            CHECK_OBJECT( var_a );
            tmp_source_name_4 = var_a;
            tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dtype );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 182;
                type_description_1 = "ooooooo";
                goto try_except_handler_6;
            }
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_compexpr_left_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
                exception_tb = NULL;

                exception_lineno = 182;
                type_description_1 = "ooooooo";
                goto try_except_handler_6;
            }

            tmp_called_instance_1 = tmp_mvar_value_3;
            frame_b92a5fefd45533b4c2da8ac167fbab36->m_frame.f_lineno = 182;
            tmp_compexpr_right_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dtype, &PyTuple_GET_ITEM( const_tuple_type_object_tuple, 0 ) );

            if ( tmp_compexpr_right_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_3 );

                exception_lineno = 182;
                type_description_1 = "ooooooo";
                goto try_except_handler_6;
            }
            tmp_append_value_5 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            Py_DECREF( tmp_compexpr_right_3 );
            if ( tmp_append_value_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 182;
                type_description_1 = "ooooooo";
                goto try_except_handler_6;
            }
            assert( PyList_Check( tmp_append_list_5 ) );
            tmp_res = PyList_Append( tmp_append_list_5, tmp_append_value_5 );
            Py_DECREF( tmp_append_value_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 182;
                type_description_1 = "ooooooo";
                goto try_except_handler_6;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "ooooooo";
            goto try_except_handler_6;
        }
        goto loop_start_5;
        loop_end_5:;
        CHECK_OBJECT( tmp_list_contraction_5__contraction_result );
        tmp_args_element_name_4 = tmp_list_contraction_5__contraction_result;
        Py_INCREF( tmp_args_element_name_4 );
        goto try_return_handler_6;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT( (PyObject *)tmp_list_contraction_5__$0 );
        Py_DECREF( tmp_list_contraction_5__$0 );
        tmp_list_contraction_5__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_list_contraction_5__contraction_result );
        Py_DECREF( tmp_list_contraction_5__contraction_result );
        tmp_list_contraction_5__contraction_result = NULL;

        Py_XDECREF( tmp_list_contraction_5__iter_value_0 );
        tmp_list_contraction_5__iter_value_0 = NULL;

        goto outline_result_5;
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

        Py_XDECREF( tmp_list_contraction_5__$0 );
        tmp_list_contraction_5__$0 = NULL;

        Py_XDECREF( tmp_list_contraction_5__contraction_result );
        tmp_list_contraction_5__contraction_result = NULL;

        Py_XDECREF( tmp_list_contraction_5__iter_value_0 );
        tmp_list_contraction_5__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
        return NULL;
        outline_result_5:;
        frame_b92a5fefd45533b4c2da8ac167fbab36->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 182;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
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
            tmp_assign_source_23 = PyList_New( 0 );
            assert( var_ret == NULL );
            var_ret = tmp_assign_source_23;
        }
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_iter_arg_6;
            CHECK_OBJECT( var_arrays );
            tmp_iter_arg_6 = var_arrays;
            tmp_assign_source_24 = MAKE_ITERATOR( tmp_iter_arg_6 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 184;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_for_loop_1__for_iterator == NULL );
            tmp_for_loop_1__for_iterator = tmp_assign_source_24;
        }
        // Tried code:
        loop_start_6:;
        {
            PyObject *tmp_next_source_6;
            PyObject *tmp_assign_source_25;
            CHECK_OBJECT( tmp_for_loop_1__for_iterator );
            tmp_next_source_6 = tmp_for_loop_1__for_iterator;
            tmp_assign_source_25 = ITERATOR_NEXT( tmp_next_source_6 );
            if ( tmp_assign_source_25 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_6;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooo";
                    exception_lineno = 184;
                    goto try_except_handler_7;
                }
            }

            {
                PyObject *old = tmp_for_loop_1__iter_value;
                tmp_for_loop_1__iter_value = tmp_assign_source_25;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_26;
            CHECK_OBJECT( tmp_for_loop_1__iter_value );
            tmp_assign_source_26 = tmp_for_loop_1__iter_value;
            {
                PyObject *old = var_a;
                var_a = tmp_assign_source_26;
                Py_INCREF( var_a );
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_4;
            CHECK_OBJECT( var_a );
            tmp_source_name_5 = var_a;
            tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
            if ( tmp_compexpr_left_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 185;
                type_description_1 = "ooooooo";
                goto try_except_handler_7;
            }
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_compexpr_left_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
                exception_tb = NULL;

                exception_lineno = 185;
                type_description_1 = "ooooooo";
                goto try_except_handler_7;
            }

            tmp_called_instance_2 = tmp_mvar_value_4;
            frame_b92a5fefd45533b4c2da8ac167fbab36->m_frame.f_lineno = 185;
            tmp_compexpr_right_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_dtype, &PyTuple_GET_ITEM( const_tuple_type_object_tuple, 0 ) );

            if ( tmp_compexpr_right_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_4 );

                exception_lineno = 185;
                type_description_1 = "ooooooo";
                goto try_except_handler_7;
            }
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_left_4 );
            Py_DECREF( tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 185;
                type_description_1 = "ooooooo";
                goto try_except_handler_7;
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
                PyObject *tmp_assign_source_27;
                PyObject *tmp_called_name_6;
                PyObject *tmp_source_name_6;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_args_name_2;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_len_arg_1;
                PyObject *tmp_kw_name_2;
                PyObject *tmp_dict_key_1;
                PyObject *tmp_dict_value_1;
                PyObject *tmp_called_instance_3;
                PyObject *tmp_mvar_value_6;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
                    exception_tb = NULL;

                    exception_lineno = 186;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_7;
                }

                tmp_source_name_6 = tmp_mvar_value_5;
                tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_empty );
                if ( tmp_called_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 186;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_7;
                }
                CHECK_OBJECT( var_a );
                tmp_len_arg_1 = var_a;
                tmp_tuple_element_2 = BUILTIN_LEN( tmp_len_arg_1 );
                if ( tmp_tuple_element_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_6 );

                    exception_lineno = 186;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_7;
                }
                tmp_args_name_2 = PyTuple_New( 1 );
                PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_6 == NULL )
                {
                    Py_DECREF( tmp_called_name_6 );
                    Py_DECREF( tmp_args_name_2 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
                    exception_tb = NULL;

                    exception_lineno = 186;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_7;
                }

                tmp_called_instance_3 = tmp_mvar_value_6;
                frame_b92a5fefd45533b4c2da8ac167fbab36->m_frame.f_lineno = 186;
                tmp_dict_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_dtype, &PyTuple_GET_ITEM( const_tuple_type_object_tuple, 0 ) );

                if ( tmp_dict_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_6 );
                    Py_DECREF( tmp_args_name_2 );

                    exception_lineno = 186;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_7;
                }
                tmp_dict_key_1 = const_str_plain_dtype;
                tmp_kw_name_2 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
                Py_DECREF( tmp_dict_value_1 );
                assert( !(tmp_res != 0) );
                frame_b92a5fefd45533b4c2da8ac167fbab36->m_frame.f_lineno = 186;
                tmp_assign_source_27 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_2, tmp_kw_name_2 );
                Py_DECREF( tmp_called_name_6 );
                Py_DECREF( tmp_args_name_2 );
                Py_DECREF( tmp_kw_name_2 );
                if ( tmp_assign_source_27 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 186;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_7;
                }
                {
                    PyObject *old = var_tmp;
                    var_tmp = tmp_assign_source_27;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_sliceass_value_1;
                Py_ssize_t tmp_sliceslicedel_index_lower_1;
                Py_ssize_t tmp_slice_index_upper_1;
                PyObject *tmp_slice_source_1;
                PyObject *tmp_sliceass_target_1;
                Py_ssize_t tmp_sliceassslicedel_index_lower_1;
                Py_ssize_t tmp_sliceass_index_upper_1;
                tmp_sliceslicedel_index_lower_1 = 0;
                tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
                CHECK_OBJECT( var_a );
                tmp_slice_source_1 = var_a;
                tmp_sliceass_value_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
                if ( tmp_sliceass_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 187;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_7;
                }
                CHECK_OBJECT( var_tmp );
                tmp_sliceass_target_1 = var_tmp;
                tmp_sliceassslicedel_index_lower_1 = 0;
                tmp_sliceass_index_upper_1 = PY_SSIZE_T_MAX;
                tmp_result = SET_INDEX_SLICE( tmp_sliceass_target_1, tmp_sliceassslicedel_index_lower_1, tmp_sliceass_index_upper_1, tmp_sliceass_value_1 );
                Py_DECREF( tmp_sliceass_value_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 187;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_7;
                }
            }
            {
                PyObject *tmp_called_instance_4;
                PyObject *tmp_call_result_3;
                PyObject *tmp_args_element_name_5;
                CHECK_OBJECT( var_ret );
                tmp_called_instance_4 = var_ret;
                CHECK_OBJECT( var_tmp );
                tmp_args_element_name_5 = var_tmp;
                frame_b92a5fefd45533b4c2da8ac167fbab36->m_frame.f_lineno = 188;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5 };
                    tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_append, call_args );
                }

                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 188;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_7;
                }
                Py_DECREF( tmp_call_result_3 );
            }
            goto branch_end_5;
            branch_no_5:;
            {
                PyObject *tmp_called_name_7;
                PyObject *tmp_source_name_7;
                PyObject *tmp_call_result_4;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_called_instance_5;
                CHECK_OBJECT( var_ret );
                tmp_source_name_7 = var_ret;
                tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_append );
                if ( tmp_called_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 190;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_7;
                }
                CHECK_OBJECT( var_a );
                tmp_called_instance_5 = var_a;
                frame_b92a5fefd45533b4c2da8ac167fbab36->m_frame.f_lineno = 190;
                tmp_args_element_name_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_copy );
                if ( tmp_args_element_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_7 );

                    exception_lineno = 190;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_7;
                }
                frame_b92a5fefd45533b4c2da8ac167fbab36->m_frame.f_lineno = 190;
                {
                    PyObject *call_args[] = { tmp_args_element_name_6 };
                    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
                }

                Py_DECREF( tmp_called_name_7 );
                Py_DECREF( tmp_args_element_name_6 );
                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 190;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_7;
                }
                Py_DECREF( tmp_call_result_4 );
            }
            branch_end_5:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "ooooooo";
            goto try_except_handler_7;
        }
        goto loop_start_6;
        loop_end_6:;
        goto try_end_1;
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
        try_end_1:;
        Py_XDECREF( tmp_for_loop_1__iter_value );
        tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
        Py_DECREF( tmp_for_loop_1__for_iterator );
        tmp_for_loop_1__for_iterator = NULL;

        goto branch_end_4;
        branch_no_4:;
        // Tried code:
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_dircall_arg2_1;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
                exception_tb = NULL;

                exception_lineno = 193;
                type_description_1 = "ooooooo";
                goto try_except_handler_8;
            }

            tmp_source_name_8 = tmp_mvar_value_7;
            tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_common_type );
            if ( tmp_dircall_arg1_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 193;
                type_description_1 = "ooooooo";
                goto try_except_handler_8;
            }
            CHECK_OBJECT( var_arrays );
            tmp_dircall_arg2_1 = var_arrays;
            Py_INCREF( tmp_dircall_arg2_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
                tmp_assign_source_28 = impl___internal__$$$function_3_complex_call_helper_star_list( dir_call_args );
            }
            if ( tmp_assign_source_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 193;
                type_description_1 = "ooooooo";
                goto try_except_handler_8;
            }
            assert( var_dtype == NULL );
            var_dtype = tmp_assign_source_28;
        }
        goto try_end_2;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Preserve existing published exception.
        PRESERVE_FRAME_EXCEPTION( frame_b92a5fefd45533b4c2da8ac167fbab36 );
        if ( exception_keeper_tb_7 == NULL )
        {
            exception_keeper_tb_7 = MAKE_TRACEBACK( frame_b92a5fefd45533b4c2da8ac167fbab36, exception_keeper_lineno_7 );
        }
        else if ( exception_keeper_lineno_7 != 0 )
        {
            exception_keeper_tb_7 = ADD_TRACEBACK( exception_keeper_tb_7, frame_b92a5fefd45533b4c2da8ac167fbab36, exception_keeper_lineno_7 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
        PUBLISH_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            tmp_compexpr_left_5 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_5 = PyExc_Exception;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 194;
                type_description_1 = "ooooooo";
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
                PyObject *tmp_raise_type_3;
                PyObject *tmp_make_exception_arg_3;
                tmp_make_exception_arg_3 = const_str_digest_d4402ccc6609c8cb901f6facc83c7413;
                frame_b92a5fefd45533b4c2da8ac167fbab36->m_frame.f_lineno = 195;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_3 };
                    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_3 == NULL) );
                exception_type = tmp_raise_type_3;
                exception_lineno = 195;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            goto branch_end_6;
            branch_no_6:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 192;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_b92a5fefd45533b4c2da8ac167fbab36->m_frame) frame_b92a5fefd45533b4c2da8ac167fbab36->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
            branch_end_6:;
        }
        // End of try:
        try_end_2:;
        {
            PyObject *tmp_assign_source_29;
            // Tried code:
            {
                PyObject *tmp_assign_source_30;
                PyObject *tmp_iter_arg_7;
                CHECK_OBJECT( var_arrays );
                tmp_iter_arg_7 = var_arrays;
                tmp_assign_source_30 = MAKE_ITERATOR( tmp_iter_arg_7 );
                if ( tmp_assign_source_30 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 196;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_9;
                }
                assert( tmp_list_contraction_6__$0 == NULL );
                tmp_list_contraction_6__$0 = tmp_assign_source_30;
            }
            {
                PyObject *tmp_assign_source_31;
                tmp_assign_source_31 = PyList_New( 0 );
                assert( tmp_list_contraction_6__contraction_result == NULL );
                tmp_list_contraction_6__contraction_result = tmp_assign_source_31;
            }
            loop_start_7:;
            {
                PyObject *tmp_next_source_7;
                PyObject *tmp_assign_source_32;
                CHECK_OBJECT( tmp_list_contraction_6__$0 );
                tmp_next_source_7 = tmp_list_contraction_6__$0;
                tmp_assign_source_32 = ITERATOR_NEXT( tmp_next_source_7 );
                if ( tmp_assign_source_32 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_7;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ooooooo";
                        exception_lineno = 196;
                        goto try_except_handler_9;
                    }
                }

                {
                    PyObject *old = tmp_list_contraction_6__iter_value_0;
                    tmp_list_contraction_6__iter_value_0 = tmp_assign_source_32;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_33;
                CHECK_OBJECT( tmp_list_contraction_6__iter_value_0 );
                tmp_assign_source_33 = tmp_list_contraction_6__iter_value_0;
                {
                    PyObject *old = var_a;
                    var_a = tmp_assign_source_33;
                    Py_INCREF( var_a );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_append_list_6;
                PyObject *tmp_append_value_6;
                PyObject *tmp_called_name_8;
                PyObject *tmp_source_name_9;
                PyObject *tmp_mvar_value_8;
                PyObject *tmp_args_name_3;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_kw_name_3;
                PyObject *tmp_dict_key_2;
                PyObject *tmp_dict_value_2;
                PyObject *tmp_dict_key_3;
                PyObject *tmp_dict_value_3;
                CHECK_OBJECT( tmp_list_contraction_6__contraction_result );
                tmp_append_list_6 = tmp_list_contraction_6__contraction_result;
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_8 == NULL ))
                {
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_8 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
                    exception_tb = NULL;

                    exception_lineno = 196;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_9;
                }

                tmp_source_name_9 = tmp_mvar_value_8;
                tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_array );
                if ( tmp_called_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 196;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_9;
                }
                CHECK_OBJECT( var_a );
                tmp_tuple_element_3 = var_a;
                tmp_args_name_3 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
                tmp_dict_value_2 = const_int_pos_1;
                tmp_dict_key_2 = const_str_plain_copy;
                tmp_kw_name_3 = _PyDict_NewPresized( 2 );
                tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_2, tmp_dict_value_2 );
                assert( !(tmp_res != 0) );
                CHECK_OBJECT( var_dtype );
                tmp_dict_value_3 = var_dtype;
                tmp_dict_key_3 = const_str_plain_dtype;
                tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
                assert( !(tmp_res != 0) );
                frame_b92a5fefd45533b4c2da8ac167fbab36->m_frame.f_lineno = 196;
                tmp_append_value_6 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_3, tmp_kw_name_3 );
                Py_DECREF( tmp_called_name_8 );
                Py_DECREF( tmp_args_name_3 );
                Py_DECREF( tmp_kw_name_3 );
                if ( tmp_append_value_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 196;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_9;
                }
                assert( PyList_Check( tmp_append_list_6 ) );
                tmp_res = PyList_Append( tmp_append_list_6, tmp_append_value_6 );
                Py_DECREF( tmp_append_value_6 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 196;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_9;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 196;
                type_description_1 = "ooooooo";
                goto try_except_handler_9;
            }
            goto loop_start_7;
            loop_end_7:;
            CHECK_OBJECT( tmp_list_contraction_6__contraction_result );
            tmp_assign_source_29 = tmp_list_contraction_6__contraction_result;
            Py_INCREF( tmp_assign_source_29 );
            goto try_return_handler_9;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
            return NULL;
            // Return handler code:
            try_return_handler_9:;
            CHECK_OBJECT( (PyObject *)tmp_list_contraction_6__$0 );
            Py_DECREF( tmp_list_contraction_6__$0 );
            tmp_list_contraction_6__$0 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_list_contraction_6__contraction_result );
            Py_DECREF( tmp_list_contraction_6__contraction_result );
            tmp_list_contraction_6__contraction_result = NULL;

            Py_XDECREF( tmp_list_contraction_6__iter_value_0 );
            tmp_list_contraction_6__iter_value_0 = NULL;

            goto outline_result_6;
            // Exception handler code:
            try_except_handler_9:;
            exception_keeper_type_8 = exception_type;
            exception_keeper_value_8 = exception_value;
            exception_keeper_tb_8 = exception_tb;
            exception_keeper_lineno_8 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( tmp_list_contraction_6__$0 );
            tmp_list_contraction_6__$0 = NULL;

            Py_XDECREF( tmp_list_contraction_6__contraction_result );
            tmp_list_contraction_6__contraction_result = NULL;

            Py_XDECREF( tmp_list_contraction_6__iter_value_0 );
            tmp_list_contraction_6__iter_value_0 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_8;
            exception_value = exception_keeper_value_8;
            exception_tb = exception_keeper_tb_8;
            exception_lineno = exception_keeper_lineno_8;

            goto frame_exception_exit_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
            return NULL;
            outline_result_6:;
            assert( var_ret == NULL );
            var_ret = tmp_assign_source_29;
        }
        branch_end_4:;
    }

#if 1
    RESTORE_FRAME_EXCEPTION( frame_b92a5fefd45533b4c2da8ac167fbab36 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_b92a5fefd45533b4c2da8ac167fbab36 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b92a5fefd45533b4c2da8ac167fbab36, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b92a5fefd45533b4c2da8ac167fbab36->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b92a5fefd45533b4c2da8ac167fbab36, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b92a5fefd45533b4c2da8ac167fbab36,
        type_description_1,
        par_alist,
        par_trim,
        var_a,
        var_arrays,
        var_dtype,
        var_ret,
        var_tmp
    );


    // Release cached frame.
    if ( frame_b92a5fefd45533b4c2da8ac167fbab36 == cache_frame_b92a5fefd45533b4c2da8ac167fbab36 )
    {
        Py_DECREF( frame_b92a5fefd45533b4c2da8ac167fbab36 );
    }
    cache_frame_b92a5fefd45533b4c2da8ac167fbab36 = NULL;

    assertFrameObject( frame_b92a5fefd45533b4c2da8ac167fbab36 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_ret );
    tmp_return_value = var_ret;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_trim );
    Py_DECREF( par_trim );
    par_trim = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    CHECK_OBJECT( (PyObject *)var_arrays );
    Py_DECREF( var_arrays );
    var_arrays = NULL;

    Py_XDECREF( var_dtype );
    var_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_alist );
    Py_DECREF( par_alist );
    par_alist = NULL;

    CHECK_OBJECT( (PyObject *)var_ret );
    Py_DECREF( var_ret );
    var_ret = NULL;

    Py_XDECREF( var_tmp );
    var_tmp = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_trim );
    Py_DECREF( par_trim );
    par_trim = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_arrays );
    var_arrays = NULL;

    Py_XDECREF( var_dtype );
    var_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_alist );
    Py_DECREF( par_alist );
    par_alist = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    Py_XDECREF( var_tmp );
    var_tmp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
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


static PyObject *impl_numpy$polynomial$polyutils$$$function_3_trimcoef( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *par_tol = python_pars[ 1 ];
    PyObject *var_ind = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_7c64684bafbfb7c5a06a02c577ddff75;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7c64684bafbfb7c5a06a02c577ddff75 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7c64684bafbfb7c5a06a02c577ddff75, codeobj_7c64684bafbfb7c5a06a02c577ddff75, module_numpy$polynomial$polyutils, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7c64684bafbfb7c5a06a02c577ddff75 = cache_frame_7c64684bafbfb7c5a06a02c577ddff75;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7c64684bafbfb7c5a06a02c577ddff75 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7c64684bafbfb7c5a06a02c577ddff75 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_tol );
        tmp_compexpr_left_1 = par_tol;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_8cddc816cdb78f26976645673d7a8785;
            frame_7c64684bafbfb7c5a06a02c577ddff75->m_frame.f_lineno = 245;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 245;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_element_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_as_series );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_as_series );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "as_series" );
            exception_tb = NULL;

            exception_lineno = 247;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_c );
        tmp_list_element_1 = par_c;
        tmp_args_element_name_1 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
        frame_7c64684bafbfb7c5a06a02c577ddff75->m_frame.f_lineno = 247;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0 );
        if ( tmp_assign_source_2 == NULL )
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


            type_description_1 = "ooo";
            exception_lineno = 247;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
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

                    type_description_1 = "ooo";
                    exception_lineno = 247;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooo";
            exception_lineno = 247;
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
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_3 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_c;
            assert( old != NULL );
            par_c = tmp_assign_source_3;
            Py_INCREF( par_c );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
            exception_tb = NULL;

            exception_lineno = 248;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_nonzero );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
            exception_tb = NULL;

            exception_lineno = 248;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        CHECK_OBJECT( par_c );
        tmp_args_element_name_3 = par_c;
        frame_7c64684bafbfb7c5a06a02c577ddff75->m_frame.f_lineno = 248;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_compexpr_left_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_abs, call_args );
        }

        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 248;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_tol );
        tmp_compexpr_right_2 = par_tol;
        tmp_args_element_name_2 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 248;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        frame_7c64684bafbfb7c5a06a02c577ddff75->m_frame.f_lineno = 248;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 0 );
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


            type_description_1 = "ooo";
            exception_lineno = 248;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_5;
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

                    type_description_1 = "ooo";
                    exception_lineno = 248;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooo";
            exception_lineno = 248;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

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

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_6 = tmp_tuple_unpack_2__element_1;
        assert( var_ind == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_ind = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( var_ind );
        tmp_len_arg_1 = var_ind;
        tmp_compexpr_left_3 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        assert( !(tmp_res == -1) );
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
            PyObject *tmp_left_name_1;
            Py_ssize_t tmp_sliceslicedel_index_lower_1;
            Py_ssize_t tmp_slice_index_upper_1;
            PyObject *tmp_slice_source_1;
            PyObject *tmp_right_name_1;
            tmp_sliceslicedel_index_lower_1 = 0;
            tmp_slice_index_upper_1 = 1;
            CHECK_OBJECT( par_c );
            tmp_slice_source_1 = par_c;
            tmp_left_name_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 250;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_int_0;
            tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 250;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_slice_source_2;
            PyObject *tmp_slice_upper_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( par_c );
            tmp_slice_source_2 = par_c;
            CHECK_OBJECT( var_ind );
            tmp_subscribed_name_1 = var_ind;
            tmp_subscript_name_1 = const_int_neg_1;
            tmp_left_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, -1 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 252;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = const_int_pos_1;
            tmp_slice_upper_1 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_slice_upper_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 252;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_called_instance_2 = LOOKUP_SLICE( tmp_slice_source_2, Py_None, tmp_slice_upper_1 );
            Py_DECREF( tmp_slice_upper_1 );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 252;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_7c64684bafbfb7c5a06a02c577ddff75->m_frame.f_lineno = 252;
            tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_copy );
            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 252;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7c64684bafbfb7c5a06a02c577ddff75 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7c64684bafbfb7c5a06a02c577ddff75 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7c64684bafbfb7c5a06a02c577ddff75 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7c64684bafbfb7c5a06a02c577ddff75, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7c64684bafbfb7c5a06a02c577ddff75->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7c64684bafbfb7c5a06a02c577ddff75, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7c64684bafbfb7c5a06a02c577ddff75,
        type_description_1,
        par_c,
        par_tol,
        var_ind
    );


    // Release cached frame.
    if ( frame_7c64684bafbfb7c5a06a02c577ddff75 == cache_frame_7c64684bafbfb7c5a06a02c577ddff75 )
    {
        Py_DECREF( frame_7c64684bafbfb7c5a06a02c577ddff75 );
    }
    cache_frame_7c64684bafbfb7c5a06a02c577ddff75 = NULL;

    assertFrameObject( frame_7c64684bafbfb7c5a06a02c577ddff75 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_3_trimcoef );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_ind );
    Py_DECREF( var_ind );
    var_ind = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

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

    Py_XDECREF( var_ind );
    var_ind = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_3_trimcoef );
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


static PyObject *impl_numpy$polynomial$polyutils$$$function_4_getdomain( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *var_rmin = NULL;
    PyObject *var_imin = NULL;
    PyObject *var_rmax = NULL;
    PyObject *var_imax = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_6db8eb26762881c5fe2bf102a2214015;
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
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6db8eb26762881c5fe2bf102a2214015 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6db8eb26762881c5fe2bf102a2214015, codeobj_6db8eb26762881c5fe2bf102a2214015, module_numpy$polynomial$polyutils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6db8eb26762881c5fe2bf102a2214015 = cache_frame_6db8eb26762881c5fe2bf102a2214015;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6db8eb26762881c5fe2bf102a2214015 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6db8eb26762881c5fe2bf102a2214015 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_as_series );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_as_series );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "as_series" );
            exception_tb = NULL;

            exception_lineno = 292;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_list_element_1 = par_x;
        tmp_tuple_element_1 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_tuple_element_1, 0, tmp_list_element_1 );
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_ee9b50b2ea01af7ea63a79da3e3468b3 );
        frame_6db8eb26762881c5fe2bf102a2214015->m_frame.f_lineno = 292;
        tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 292;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 292;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0 );
        if ( tmp_assign_source_2 == NULL )
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
            exception_lineno = 292;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
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
                    exception_lineno = 292;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooo";
            exception_lineno = 292;
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
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_3 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_x;
            assert( old != NULL );
            par_x = tmp_assign_source_3;
            Py_INCREF( par_x );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_x );
        tmp_source_name_2 = par_x;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 293;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_char );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 293;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
            exception_tb = NULL;

            exception_lineno = 293;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_2;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_typecodes );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 293;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_str_plain_Complex;
        tmp_compexpr_right_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 293;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 293;
            type_description_1 = "ooooo";
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
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( par_x );
            tmp_source_name_4 = par_x;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_real );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 294;
                type_description_1 = "ooooo";
                goto try_except_handler_4;
            }
            frame_6db8eb26762881c5fe2bf102a2214015->m_frame.f_lineno = 294;
            tmp_tuple_element_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_min );
            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 294;
                type_description_1 = "ooooo";
                goto try_except_handler_4;
            }
            tmp_iter_arg_2 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_iter_arg_2, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( par_x );
            tmp_source_name_5 = par_x;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_real );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_iter_arg_2 );

                exception_lineno = 294;
                type_description_1 = "ooooo";
                goto try_except_handler_4;
            }
            frame_6db8eb26762881c5fe2bf102a2214015->m_frame.f_lineno = 294;
            tmp_tuple_element_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_max );
            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_iter_arg_2 );

                exception_lineno = 294;
                type_description_1 = "ooooo";
                goto try_except_handler_4;
            }
            PyTuple_SET_ITEM( tmp_iter_arg_2, 1, tmp_tuple_element_2 );
            tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 294;
                type_description_1 = "ooooo";
                goto try_except_handler_4;
            }
            assert( tmp_tuple_unpack_2__source_iter == NULL );
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_4;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 0 );
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


                type_description_1 = "ooooo";
                exception_lineno = 294;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_1 == NULL );
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_3, 1 );
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
                exception_lineno = 294;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_2 == NULL );
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_6;
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

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

        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_1;
        // End of try:
        try_end_4:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_7 = tmp_tuple_unpack_2__element_1;
            assert( var_rmin == NULL );
            Py_INCREF( tmp_assign_source_7 );
            var_rmin = tmp_assign_source_7;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_8 = tmp_tuple_unpack_2__element_2;
            assert( var_rmax == NULL );
            Py_INCREF( tmp_assign_source_8 );
            var_rmax = tmp_assign_source_8;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_source_name_6;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_source_name_7;
            CHECK_OBJECT( par_x );
            tmp_source_name_6 = par_x;
            tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_imag );
            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 295;
                type_description_1 = "ooooo";
                goto try_except_handler_6;
            }
            frame_6db8eb26762881c5fe2bf102a2214015->m_frame.f_lineno = 295;
            tmp_tuple_element_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_min );
            Py_DECREF( tmp_called_instance_3 );
            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 295;
                type_description_1 = "ooooo";
                goto try_except_handler_6;
            }
            tmp_iter_arg_3 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_iter_arg_3, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( par_x );
            tmp_source_name_7 = par_x;
            tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_imag );
            if ( tmp_called_instance_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_iter_arg_3 );

                exception_lineno = 295;
                type_description_1 = "ooooo";
                goto try_except_handler_6;
            }
            frame_6db8eb26762881c5fe2bf102a2214015->m_frame.f_lineno = 295;
            tmp_tuple_element_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_max );
            Py_DECREF( tmp_called_instance_4 );
            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_iter_arg_3 );

                exception_lineno = 295;
                type_description_1 = "ooooo";
                goto try_except_handler_6;
            }
            PyTuple_SET_ITEM( tmp_iter_arg_3, 1, tmp_tuple_element_3 );
            tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_3 );
            Py_DECREF( tmp_iter_arg_3 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 295;
                type_description_1 = "ooooo";
                goto try_except_handler_6;
            }
            assert( tmp_tuple_unpack_3__source_iter == NULL );
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_9;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_4, 0 );
            if ( tmp_assign_source_10 == NULL )
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
                exception_lineno = 295;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_1 == NULL );
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_5, 1 );
            if ( tmp_assign_source_11 == NULL )
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
                exception_lineno = 295;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_2 == NULL );
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_11;
        }
        goto try_end_5;
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
        Py_DECREF( tmp_tuple_unpack_3__source_iter );
        tmp_tuple_unpack_3__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        try_end_5:;
        goto try_end_6;
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

        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto frame_exception_exit_1;
        // End of try:
        try_end_6:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
        Py_DECREF( tmp_tuple_unpack_3__source_iter );
        tmp_tuple_unpack_3__source_iter = NULL;

        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
            tmp_assign_source_12 = tmp_tuple_unpack_3__element_1;
            assert( var_imin == NULL );
            Py_INCREF( tmp_assign_source_12 );
            var_imin = tmp_assign_source_12;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        {
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
            tmp_assign_source_13 = tmp_tuple_unpack_3__element_2;
            assert( var_imax == NULL );
            Py_INCREF( tmp_assign_source_13 );
            var_imax = tmp_assign_source_13;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_2 );
        tmp_tuple_unpack_3__element_2 = NULL;

        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_real_arg_1;
            PyObject *tmp_imag_arg_1;
            PyObject *tmp_real_arg_2;
            PyObject *tmp_imag_arg_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
                exception_tb = NULL;

                exception_lineno = 296;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_3;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_array );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 296;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_rmin );
            tmp_real_arg_1 = var_rmin;
            CHECK_OBJECT( var_imin );
            tmp_imag_arg_1 = var_imin;
            tmp_tuple_element_4 = BUILTIN_COMPLEX2( tmp_real_arg_1, tmp_imag_arg_1 );
            if ( tmp_tuple_element_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 296;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_1 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( var_rmax );
            tmp_real_arg_2 = var_rmax;
            CHECK_OBJECT( var_imax );
            tmp_imag_arg_2 = var_imax;
            tmp_tuple_element_4 = BUILTIN_COMPLEX2( tmp_real_arg_2, tmp_imag_arg_2 );
            if ( tmp_tuple_element_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_1 );

                exception_lineno = 296;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_args_element_name_1, 1, tmp_tuple_element_4 );
            frame_6db8eb26762881c5fe2bf102a2214015->m_frame.f_lineno = 296;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 296;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_9;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_called_instance_6;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
                exception_tb = NULL;

                exception_lineno = 298;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_9 = tmp_mvar_value_4;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_array );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 298;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_x );
            tmp_called_instance_5 = par_x;
            frame_6db8eb26762881c5fe2bf102a2214015->m_frame.f_lineno = 298;
            tmp_tuple_element_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_min );
            if ( tmp_tuple_element_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 298;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_2 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_5 );
            CHECK_OBJECT( par_x );
            tmp_called_instance_6 = par_x;
            frame_6db8eb26762881c5fe2bf102a2214015->m_frame.f_lineno = 298;
            tmp_tuple_element_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_max );
            if ( tmp_tuple_element_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_element_name_2 );

                exception_lineno = 298;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_5 );
            frame_6db8eb26762881c5fe2bf102a2214015->m_frame.f_lineno = 298;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 298;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6db8eb26762881c5fe2bf102a2214015 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6db8eb26762881c5fe2bf102a2214015 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6db8eb26762881c5fe2bf102a2214015 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6db8eb26762881c5fe2bf102a2214015, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6db8eb26762881c5fe2bf102a2214015->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6db8eb26762881c5fe2bf102a2214015, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6db8eb26762881c5fe2bf102a2214015,
        type_description_1,
        par_x,
        var_rmin,
        var_imin,
        var_rmax,
        var_imax
    );


    // Release cached frame.
    if ( frame_6db8eb26762881c5fe2bf102a2214015 == cache_frame_6db8eb26762881c5fe2bf102a2214015 )
    {
        Py_DECREF( frame_6db8eb26762881c5fe2bf102a2214015 );
    }
    cache_frame_6db8eb26762881c5fe2bf102a2214015 = NULL;

    assertFrameObject( frame_6db8eb26762881c5fe2bf102a2214015 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_4_getdomain );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_rmin );
    var_rmin = NULL;

    Py_XDECREF( var_imin );
    var_imin = NULL;

    Py_XDECREF( var_rmax );
    var_rmax = NULL;

    Py_XDECREF( var_imax );
    var_imax = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_rmin );
    var_rmin = NULL;

    Py_XDECREF( var_imin );
    var_imin = NULL;

    Py_XDECREF( var_rmax );
    var_rmax = NULL;

    Py_XDECREF( var_imax );
    var_imax = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_4_getdomain );
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


static PyObject *impl_numpy$polynomial$polyutils$$$function_5_mapparms( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_old = python_pars[ 0 ];
    PyObject *par_new = python_pars[ 1 ];
    PyObject *var_scl = NULL;
    PyObject *var_oldlen = NULL;
    PyObject *var_newlen = NULL;
    PyObject *var_off = NULL;
    struct Nuitka_FrameObject *frame_9cb560a4fff901a410a26835e0313bec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9cb560a4fff901a410a26835e0313bec = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9cb560a4fff901a410a26835e0313bec, codeobj_9cb560a4fff901a410a26835e0313bec, module_numpy$polynomial$polyutils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9cb560a4fff901a410a26835e0313bec = cache_frame_9cb560a4fff901a410a26835e0313bec;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9cb560a4fff901a410a26835e0313bec );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9cb560a4fff901a410a26835e0313bec ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( par_old );
        tmp_subscribed_name_1 = par_old;
        tmp_subscript_name_1 = const_int_pos_1;
        tmp_left_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 341;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_old );
        tmp_subscribed_name_2 = par_old;
        tmp_subscript_name_2 = const_int_0;
        tmp_right_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 341;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 341;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_oldlen == NULL );
        var_oldlen = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT( par_new );
        tmp_subscribed_name_3 = par_new;
        tmp_subscript_name_3 = const_int_pos_1;
        tmp_left_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 342;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_new );
        tmp_subscribed_name_4 = par_new;
        tmp_subscript_name_4 = const_int_0;
        tmp_right_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 342;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 342;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_newlen == NULL );
        var_newlen = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_right_name_3;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_right_name_4;
        PyObject *tmp_left_name_6;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_right_name_5;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( par_old );
        tmp_subscribed_name_5 = par_old;
        tmp_subscript_name_5 = const_int_pos_1;
        tmp_left_name_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 1 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 343;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_new );
        tmp_subscribed_name_6 = par_new;
        tmp_subscript_name_6 = const_int_0;
        tmp_right_name_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, 0 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 343;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_5 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 343;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_old );
        tmp_subscribed_name_7 = par_old;
        tmp_subscript_name_7 = const_int_0;
        tmp_left_name_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_7, tmp_subscript_name_7, 0 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 343;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_new );
        tmp_subscribed_name_8 = par_new;
        tmp_subscript_name_8 = const_int_pos_1;
        tmp_right_name_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_8, tmp_subscript_name_8, 1 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 343;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = BINARY_OPERATION_MUL( tmp_left_name_6, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 343;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 343;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_oldlen );
        tmp_right_name_6 = var_oldlen;
        tmp_assign_source_3 = BINARY_OPERATION_TRUEDIV( tmp_left_name_3, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 343;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_off == NULL );
        var_off = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT( var_newlen );
        tmp_left_name_7 = var_newlen;
        CHECK_OBJECT( var_oldlen );
        tmp_right_name_7 = var_oldlen;
        tmp_assign_source_4 = BINARY_OPERATION_TRUEDIV( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_scl == NULL );
        var_scl = tmp_assign_source_4;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9cb560a4fff901a410a26835e0313bec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9cb560a4fff901a410a26835e0313bec );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9cb560a4fff901a410a26835e0313bec, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9cb560a4fff901a410a26835e0313bec->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9cb560a4fff901a410a26835e0313bec, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9cb560a4fff901a410a26835e0313bec,
        type_description_1,
        par_old,
        par_new,
        var_scl,
        var_oldlen,
        var_newlen,
        var_off
    );


    // Release cached frame.
    if ( frame_9cb560a4fff901a410a26835e0313bec == cache_frame_9cb560a4fff901a410a26835e0313bec )
    {
        Py_DECREF( frame_9cb560a4fff901a410a26835e0313bec );
    }
    cache_frame_9cb560a4fff901a410a26835e0313bec = NULL;

    assertFrameObject( frame_9cb560a4fff901a410a26835e0313bec );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( var_off );
        tmp_tuple_element_1 = var_off;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_scl );
        tmp_tuple_element_1 = var_scl;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_5_mapparms );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_scl );
    Py_DECREF( var_scl );
    var_scl = NULL;

    CHECK_OBJECT( (PyObject *)var_oldlen );
    Py_DECREF( var_oldlen );
    var_oldlen = NULL;

    CHECK_OBJECT( (PyObject *)par_old );
    Py_DECREF( par_old );
    par_old = NULL;

    CHECK_OBJECT( (PyObject *)var_newlen );
    Py_DECREF( var_newlen );
    var_newlen = NULL;

    CHECK_OBJECT( (PyObject *)var_off );
    Py_DECREF( var_off );
    var_off = NULL;

    CHECK_OBJECT( (PyObject *)par_new );
    Py_DECREF( par_new );
    par_new = NULL;

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

    Py_XDECREF( var_oldlen );
    var_oldlen = NULL;

    CHECK_OBJECT( (PyObject *)par_old );
    Py_DECREF( par_old );
    par_old = NULL;

    Py_XDECREF( var_newlen );
    var_newlen = NULL;

    Py_XDECREF( var_off );
    var_off = NULL;

    CHECK_OBJECT( (PyObject *)par_new );
    Py_DECREF( par_new );
    par_new = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_5_mapparms );
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


static PyObject *impl_numpy$polynomial$polyutils$$$function_6_mapdomain( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_old = python_pars[ 1 ];
    PyObject *par_new = python_pars[ 2 ];
    PyObject *var_scl = NULL;
    PyObject *var_off = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_0bdbc5aa5cf59805bc818ae14ab9079c;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0bdbc5aa5cf59805bc818ae14ab9079c = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0bdbc5aa5cf59805bc818ae14ab9079c, codeobj_0bdbc5aa5cf59805bc818ae14ab9079c, module_numpy$polynomial$polyutils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0bdbc5aa5cf59805bc818ae14ab9079c = cache_frame_0bdbc5aa5cf59805bc818ae14ab9079c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0bdbc5aa5cf59805bc818ae14ab9079c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0bdbc5aa5cf59805bc818ae14ab9079c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
            exception_tb = NULL;

            exception_lineno = 410;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_0bdbc5aa5cf59805bc818ae14ab9079c->m_frame.f_lineno = 410;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_asanyarray, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 410;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert( old != NULL );
            par_x = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_mapparms );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mapparms );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "mapparms" );
            exception_tb = NULL;

            exception_lineno = 411;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_old );
        tmp_args_element_name_2 = par_old;
        CHECK_OBJECT( par_new );
        tmp_args_element_name_3 = par_new;
        frame_0bdbc5aa5cf59805bc818ae14ab9079c->m_frame.f_lineno = 411;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 411;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 411;
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
            exception_lineno = 411;
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
            exception_lineno = 411;
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
                    exception_lineno = 411;
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
            exception_lineno = 411;
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
        assert( var_off == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_off = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert( var_scl == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_scl = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_off );
        tmp_left_name_1 = var_off;
        CHECK_OBJECT( var_scl );
        tmp_left_name_2 = var_scl;
        CHECK_OBJECT( par_x );
        tmp_right_name_2 = par_x;
        tmp_right_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 412;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 412;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0bdbc5aa5cf59805bc818ae14ab9079c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0bdbc5aa5cf59805bc818ae14ab9079c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0bdbc5aa5cf59805bc818ae14ab9079c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0bdbc5aa5cf59805bc818ae14ab9079c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0bdbc5aa5cf59805bc818ae14ab9079c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0bdbc5aa5cf59805bc818ae14ab9079c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0bdbc5aa5cf59805bc818ae14ab9079c,
        type_description_1,
        par_x,
        par_old,
        par_new,
        var_scl,
        var_off
    );


    // Release cached frame.
    if ( frame_0bdbc5aa5cf59805bc818ae14ab9079c == cache_frame_0bdbc5aa5cf59805bc818ae14ab9079c )
    {
        Py_DECREF( frame_0bdbc5aa5cf59805bc818ae14ab9079c );
    }
    cache_frame_0bdbc5aa5cf59805bc818ae14ab9079c = NULL;

    assertFrameObject( frame_0bdbc5aa5cf59805bc818ae14ab9079c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_6_mapdomain );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)var_scl );
    Py_DECREF( var_scl );
    var_scl = NULL;

    CHECK_OBJECT( (PyObject *)par_old );
    Py_DECREF( par_old );
    par_old = NULL;

    CHECK_OBJECT( (PyObject *)var_off );
    Py_DECREF( var_off );
    var_off = NULL;

    CHECK_OBJECT( (PyObject *)par_new );
    Py_DECREF( par_new );
    par_new = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_scl );
    var_scl = NULL;

    CHECK_OBJECT( (PyObject *)par_old );
    Py_DECREF( par_old );
    par_old = NULL;

    Py_XDECREF( var_off );
    var_off = NULL;

    CHECK_OBJECT( (PyObject *)par_new );
    Py_DECREF( par_new );
    par_new = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_6_mapdomain );
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



static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_1_trimseq(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polyutils$$$function_1_trimseq,
        const_str_plain_trimseq,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_46602207b2781146f0eee5f5b2d55c41,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polyutils,
        const_str_digest_fec7117366bd52892d39d8e43ffa8ae4,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_2_as_series( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polyutils$$$function_2_as_series,
        const_str_plain_as_series,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b92a5fefd45533b4c2da8ac167fbab36,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polyutils,
        const_str_digest_5f6e888b6d9f94b8cf5cdf4f9e641288,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_3_trimcoef( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polyutils$$$function_3_trimcoef,
        const_str_plain_trimcoef,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7c64684bafbfb7c5a06a02c577ddff75,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polyutils,
        const_str_digest_627bb2bfc3f5e65b70d6af42f332de37,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_4_getdomain(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polyutils$$$function_4_getdomain,
        const_str_plain_getdomain,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6db8eb26762881c5fe2bf102a2214015,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polyutils,
        const_str_digest_f6944356c8987164c4200fa24fd72607,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_5_mapparms(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polyutils$$$function_5_mapparms,
        const_str_plain_mapparms,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9cb560a4fff901a410a26835e0313bec,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polyutils,
        const_str_digest_d2799ae06bf19fd354ec2489a69daa20,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_6_mapdomain(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polyutils$$$function_6_mapdomain,
        const_str_plain_mapdomain,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0bdbc5aa5cf59805bc818ae14ab9079c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polyutils,
        const_str_digest_5ac73218234819aaa97a51e223a25152,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$polynomial$polyutils =
{
    PyModuleDef_HEAD_INIT,
    "numpy.polynomial.polyutils",
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

MOD_INIT_DECL( numpy$polynomial$polyutils )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$polynomial$polyutils );
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
    puts("numpy.polynomial.polyutils: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.polynomial.polyutils: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.polynomial.polyutils: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$polynomial$polyutils" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$polynomial$polyutils = Py_InitModule4(
        "numpy.polynomial.polyutils",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_numpy$polynomial$polyutils = PyModule_Create( &mdef_numpy$polynomial$polyutils );
#endif

    moduledict_numpy$polynomial$polyutils = MODULE_DICT( module_numpy$polynomial$polyutils );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_numpy$polynomial$polyutils,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$polynomial$polyutils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$polynomial$polyutils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_numpy$polynomial$polyutils );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_a0d13325845562e4bbc31bdb2ba6618b, module_numpy$polynomial$polyutils );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
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
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
    PyObject *tmp_select_metaclass_3__base = NULL;
    struct Nuitka_FrameObject *frame_ad899be6e77d08c0cbca5bc3ed54cabb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *locals_numpy$polynomial$polyutils_58 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
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
    PyObject *locals_numpy$polynomial$polyutils_66 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_c3fbef28d81c0d779c444231a45b0d97;
        UPDATE_STRING_DICT0( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_69cd6e1f2931773d8876e0702857c0ba;
        UPDATE_STRING_DICT0( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
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
    frame_ad899be6e77d08c0cbca5bc3ed54cabb = MAKE_MODULE_FRAME( codeobj_ad899be6e77d08c0cbca5bc3ed54cabb, module_numpy$polynomial$polyutils );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_ad899be6e77d08c0cbca5bc3ed54cabb );
    assert( Py_REFCNT( frame_ad899be6e77d08c0cbca5bc3ed54cabb ) == 2 );

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


            exception_lineno = 46;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_4 );
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


            exception_lineno = 46;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
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


            exception_lineno = 46;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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
        tmp_name_name_1 = const_str_plain_numpy;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$polynomial$polyutils;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_ad899be6e77d08c0cbca5bc3ed54cabb->m_frame.f_lineno = 48;
        tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = LIST_COPY( const_list_5140ad4e1b77591e9582f3c8be3d2cbb_list );
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_UserWarning );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UserWarning );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "UserWarning" );
            exception_tb = NULL;

            exception_lineno = 58;

            goto try_except_handler_2;
        }

        tmp_tuple_element_1 = tmp_mvar_value_1;
        tmp_assign_source_9 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_9, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_numpy$polynomial$polyutils_58 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_a0d13325845562e4bbc31bdb2ba6618b;
        tmp_res = PyDict_SetItem( locals_numpy$polynomial$polyutils_58, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_df4438039abddc03aa325ded7a3d73dd;
        tmp_res = PyDict_SetItem( locals_numpy$polynomial$polyutils_58, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_10 = locals_numpy$polynomial$polyutils_58;
        Py_INCREF( tmp_assign_source_10 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_numpy$polynomial$polyutils_58 );
        locals_numpy$polynomial$polyutils_58 = NULL;
        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils );
        return MOD_RETURN_VALUE( NULL );
        outline_result_1:;
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
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


            exception_lineno = 58;

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
        tmp_assign_source_11 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_subscribed_name_1 = tmp_class_creation_1__bases;
            tmp_subscript_name_1 = const_int_0;
            tmp_assign_source_12 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;

                goto try_except_handler_2;
            }
            assert( tmp_select_metaclass_1__base == NULL );
            tmp_select_metaclass_1__base = tmp_assign_source_12;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( tmp_select_metaclass_1__base );
            tmp_source_name_1 = tmp_select_metaclass_1__base;
            tmp_assign_source_11 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;

                goto try_except_handler_5;
            }
            goto try_return_handler_4;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils );
        return MOD_RETURN_VALUE( NULL );
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

        {
            PyObject *tmp_type_arg_1;
            Py_DECREF( exception_keeper_type_2 );
            Py_XDECREF( exception_keeper_value_2 );
            Py_XDECREF( exception_keeper_tb_2 );
            CHECK_OBJECT( tmp_select_metaclass_1__base );
            tmp_type_arg_1 = tmp_select_metaclass_1__base;
            tmp_assign_source_11 = BUILTIN_TYPE1( tmp_type_arg_1 );
            assert( !(tmp_assign_source_11 == NULL) );
            goto try_return_handler_4;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
        Py_DECREF( tmp_select_metaclass_1__base );
        tmp_select_metaclass_1__base = NULL;

        goto outline_result_2;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
        Py_DECREF( tmp_select_metaclass_1__base );
        tmp_select_metaclass_1__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils );
        return MOD_RETURN_VALUE( NULL );
        outline_result_2:;
        condexpr_end_1:;
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = const_str_plain_RankWarning;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_args_element_name_2 = tmp_class_creation_1__bases;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_ad899be6e77d08c0cbca5bc3ed54cabb->m_frame.f_lineno = 58;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_13;
    }
    goto try_end_2;
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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_dict );
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
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_assign_source_14 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_RankWarning, tmp_assign_source_14 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = PyDict_Copy( const_dict_ef40a0f54134c28d5296f4277b9744e7 );
        assert( tmp_class_creation_2__class_dict == NULL );
        tmp_class_creation_2__class_dict = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
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


            exception_lineno = 62;

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
        tmp_assign_source_16 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;

            goto try_except_handler_6;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_assign_source_16 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_16 );
        condexpr_end_2:;
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_called_name_2 = tmp_class_creation_2__metaclass;
        tmp_args_element_name_4 = const_str_plain_PolyError;
        tmp_args_element_name_5 = const_tuple_type_Exception_tuple;
        CHECK_OBJECT( tmp_class_creation_2__class_dict );
        tmp_args_element_name_6 = tmp_class_creation_2__class_dict;
        frame_ad899be6e77d08c0cbca5bc3ed54cabb->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;

            goto try_except_handler_6;
        }
        assert( tmp_class_creation_2__class == NULL );
        tmp_class_creation_2__class = tmp_assign_source_17;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT( tmp_class_creation_2__class );
        tmp_assign_source_18 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_PolyError, tmp_assign_source_18 );
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
        PyObject *tmp_assign_source_19;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_PolyError );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PolyError );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "PolyError" );
            exception_tb = NULL;

            exception_lineno = 66;

            goto try_except_handler_7;
        }

        tmp_tuple_element_2 = tmp_mvar_value_2;
        tmp_assign_source_19 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_assign_source_19, 0, tmp_tuple_element_2 );
        assert( tmp_class_creation_3__bases == NULL );
        tmp_class_creation_3__bases = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        {
            PyObject *tmp_set_locals_2;
            tmp_set_locals_2 = PyDict_New();
            locals_numpy$polynomial$polyutils_66 = tmp_set_locals_2;
        }
        tmp_dictset_value = const_str_digest_a0d13325845562e4bbc31bdb2ba6618b;
        tmp_res = PyDict_SetItem( locals_numpy$polynomial$polyutils_66, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_846377ae7ebf64e407501456090ac4b6;
        tmp_res = PyDict_SetItem( locals_numpy$polynomial$polyutils_66, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_20 = locals_numpy$polynomial$polyutils_66;
        Py_INCREF( tmp_assign_source_20 );
        goto try_return_handler_8;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF( locals_numpy$polynomial$polyutils_66 );
        locals_numpy$polynomial$polyutils_66 = NULL;
        goto outline_result_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils );
        return MOD_RETURN_VALUE( NULL );
        outline_result_3:;
        assert( tmp_class_creation_3__class_dict == NULL );
        tmp_class_creation_3__class_dict = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
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


            exception_lineno = 66;

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
        tmp_assign_source_21 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;

            goto try_except_handler_7;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_subscribed_name_2 = tmp_class_creation_3__bases;
            tmp_subscript_name_2 = const_int_0;
            tmp_assign_source_22 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
            if ( tmp_assign_source_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;

                goto try_except_handler_7;
            }
            assert( tmp_select_metaclass_3__base == NULL );
            tmp_select_metaclass_3__base = tmp_assign_source_22;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( tmp_select_metaclass_3__base );
            tmp_source_name_2 = tmp_select_metaclass_3__base;
            tmp_assign_source_21 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_2 );
            if ( tmp_assign_source_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;

                goto try_except_handler_10;
            }
            goto try_return_handler_9;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_2;
            Py_DECREF( exception_keeper_type_5 );
            Py_XDECREF( exception_keeper_value_5 );
            Py_XDECREF( exception_keeper_tb_5 );
            CHECK_OBJECT( tmp_select_metaclass_3__base );
            tmp_type_arg_2 = tmp_select_metaclass_3__base;
            tmp_assign_source_21 = BUILTIN_TYPE1( tmp_type_arg_2 );
            assert( !(tmp_assign_source_21 == NULL) );
            goto try_return_handler_9;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_3__base );
        Py_DECREF( tmp_select_metaclass_3__base );
        tmp_select_metaclass_3__base = NULL;

        goto outline_result_4;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_3__base );
        Py_DECREF( tmp_select_metaclass_3__base );
        tmp_select_metaclass_3__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils );
        return MOD_RETURN_VALUE( NULL );
        outline_result_4:;
        condexpr_end_3:;
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_called_name_3 = tmp_class_creation_3__metaclass;
        tmp_args_element_name_7 = const_str_plain_PolyDomainError;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_args_element_name_8 = tmp_class_creation_3__bases;
        CHECK_OBJECT( tmp_class_creation_3__class_dict );
        tmp_args_element_name_9 = tmp_class_creation_3__class_dict;
        frame_ad899be6e77d08c0cbca5bc3ed54cabb->m_frame.f_lineno = 66;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;

            goto try_except_handler_7;
        }
        assert( tmp_class_creation_3__class == NULL );
        tmp_class_creation_3__class = tmp_assign_source_23;
    }
    goto try_end_4;
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

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT( tmp_class_creation_3__class );
        tmp_assign_source_24 = tmp_class_creation_3__class;
        UPDATE_STRING_DICT0( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_PolyDomainError, tmp_assign_source_24 );
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
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = PyDict_Copy( const_dict_4a5e683ee4476635c0e42e04a0a8b1fd );
        assert( tmp_class_creation_4__class_dict == NULL );
        tmp_class_creation_4__class_dict = tmp_assign_source_25;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_26;
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


            exception_lineno = 79;

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
        tmp_assign_source_26 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;

            goto try_except_handler_11;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_assign_source_26 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_26 );
        condexpr_end_4:;
        assert( tmp_class_creation_4__metaclass == NULL );
        tmp_class_creation_4__metaclass = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        CHECK_OBJECT( tmp_class_creation_4__metaclass );
        tmp_called_name_4 = tmp_class_creation_4__metaclass;
        tmp_args_element_name_10 = const_str_plain_PolyBase;
        tmp_args_element_name_11 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_4__class_dict );
        tmp_args_element_name_12 = tmp_class_creation_4__class_dict;
        frame_ad899be6e77d08c0cbca5bc3ed54cabb->m_frame.f_lineno = 79;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;

            goto try_except_handler_11;
        }
        assert( tmp_class_creation_4__class == NULL );
        tmp_class_creation_4__class = tmp_assign_source_27;
    }
    goto try_end_5;
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_dict );
    Py_DECREF( tmp_class_creation_4__class_dict );
    tmp_class_creation_4__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ad899be6e77d08c0cbca5bc3ed54cabb );
#endif
    popFrameStack();

    assertFrameObject( frame_ad899be6e77d08c0cbca5bc3ed54cabb );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ad899be6e77d08c0cbca5bc3ed54cabb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ad899be6e77d08c0cbca5bc3ed54cabb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ad899be6e77d08c0cbca5bc3ed54cabb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ad899be6e77d08c0cbca5bc3ed54cabb, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT( tmp_class_creation_4__class );
        tmp_assign_source_28 = tmp_class_creation_4__class;
        UPDATE_STRING_DICT0( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_PolyBase, tmp_assign_source_28 );
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

    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_1_trimseq(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_trimseq, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_true_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_30 = MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_2_as_series( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_as_series, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_int_0_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_31 = MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_3_trimcoef( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_trimcoef, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_4_getdomain(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_getdomain, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_5_mapparms(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_mapparms, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_6_mapdomain(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_mapdomain, tmp_assign_source_34 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_numpy$polynomial$polyutils );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
