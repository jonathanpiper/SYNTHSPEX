/* Generated code for Python module 'mpmath.matrices.calculus'
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

/* The "_module_mpmath$matrices$calculus" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_mpmath$matrices$calculus;
PyDictObject *moduledict_mpmath$matrices$calculus;

/* The declarations of module constants used, if any. */
extern PyObject *const_tuple_str_plain_xrange_tuple;
extern PyObject *const_str_plain_eye;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_res;
extern PyObject *const_str_plain_MatrixCalculusMethods;
extern PyObject *const_str_plain_mpf;
extern PyObject *const_str_plain_factorial;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_apply;
extern PyObject *const_str_plain_eps;
static PyObject *const_float_0_125;
extern PyObject *const_str_plain_inverse;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_ctx;
static PyObject *const_str_digest_e8747f4674dd7594f0fb789321e0c17e;
static PyObject *const_tuple_str_plain_ctx_str_plain_A_str_plain__may_rotate_str_plain_u_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_mnorm;
static PyObject *const_tuple_str_plain_ctx_str_plain_A_str_plain_B_tuple;
extern PyObject *const_str_plain_inf;
static PyObject *const_str_plain__may_rotate;
static PyObject *const_tuple_a3b5a549b6c79b0270fb0c8dae73b4f8_tuple;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain_mag2;
extern PyObject *const_str_plain_na;
extern PyObject *const_int_pos_128;
extern PyObject *const_str_plain_method;
extern PyObject *const_str_plain_sqrtm;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_int_neg_1;
extern PyObject *const_complex_0_0__m0_5;
extern PyObject *const_str_plain_prec;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_mag;
extern PyObject *const_int_pos_10;
static PyObject *const_str_digest_c8730964663eb5a9b5b434a94f0583e8;
static PyObject *const_builtin_abs;
extern PyObject *const_int_pos_16;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_expm;
static PyObject *const_str_plain__exp_pade;
static PyObject *const_str_plain__sqrtm_rot;
extern PyObject *const_str_plain___file__;
extern PyObject *const_float_0_001;
extern PyObject *const_str_plain_extra;
extern PyObject *const_int_pos_6;
extern PyObject *const_int_pos_4;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___module__;
extern PyObject *const_int_pos_8;
extern PyObject *const_str_plain_NoConvergence;
extern PyObject *const_float_0_3;
extern PyObject *const_str_plain_isint;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_q;
static PyObject *const_tuple_527f359ce81fee9b6a3b2e5bbfdc4340_tuple;
extern PyObject *const_str_plain_xrange;
extern PyObject *const_str_plain_logm;
static PyObject *const_tuple_str_plain_p_str_plain_ctx_tuple;
static PyObject *const_str_plain_Yprev;
extern PyObject *const_str_plain_matrix;
extern PyObject *const_float_0_5;
extern PyObject *const_str_plain_im;
static PyObject *const_str_digest_bcfc1a3a2d98924fa953524946f2fc3c;
static PyObject *const_str_plain_eps_pade;
extern PyObject *const_str_plain_sqrt;
static PyObject *const_str_digest_9f3ad8e5efe87c958ce943d901599f79;
static PyObject *const_str_digest_59f1ba362b95405716bdfca7879d7bf2;
extern PyObject *const_str_plain_dps;
static PyObject *const_tuple_c174dec09b1cbc15829c4f08be83b891_tuple;
static PyObject *const_str_plain_extraq;
extern PyObject *const_str_digest_2ede97835081434196d0c826ef1e1b08;
extern PyObject *const_str_plain_num;
extern PyObject *const_str_plain_L;
extern PyObject *const_str_plain_tol;
extern PyObject *const_str_plain_I;
extern PyObject *const_str_plain_convert;
extern PyObject *const_str_plain_A;
extern PyObject *const_str_plain_B;
extern PyObject *const_str_plain_powm;
static PyObject *const_tuple_builtin_abs_tuple;
extern PyObject *const_str_plain_Z;
static PyObject *const_str_plain_mag1;
extern PyObject *const_str_plain_T;
static PyObject *const_tuple_44b9184419de1aabe0380355b1d8f73e_tuple;
static PyObject *const_str_plain_cx;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_j;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_sinm;
static PyObject *const_tuple_a65d0c3463771599ab132731f5e2bbce_tuple;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_y;
extern PyObject *const_str_plain_taylor;
extern PyObject *const_str_plain_u;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_plain_lu_solve_mat;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_det;
static PyObject *const_str_digest_294ad75697ad91ca889c338d5cc289f3;
static PyObject *const_str_digest_2eaa9523a48d03265227daae962586d7;
extern PyObject *const_str_plain_den;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_511c5d7b56153601ee4cb64cb854cf63;
extern PyObject *const_int_0;
static PyObject *const_str_digest_ae1d1af9ce29cba721a67adf0a3afec1;
static PyObject *const_tuple_str_plain_taylor_tuple;
extern PyObject *const_str_plain_rows;
extern PyObject *const_str_plain_cosm;
extern PyObject *const_tuple_int_pos_2_tuple;
extern PyObject *const_str_plain_pade;
static PyObject *const_str_digest_e62959889d72da096b01003fac677168;
extern PyObject *const_str_plain_X;
extern PyObject *const_str_plain_Y;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_float_0_125 = UNSTREAM_FLOAT( &constant_bin[ 575767 ] );
    const_str_digest_e8747f4674dd7594f0fb789321e0c17e = UNSTREAM_STRING( &constant_bin[ 672550 ], 1004, 0 );
    const_tuple_str_plain_ctx_str_plain_A_str_plain__may_rotate_str_plain_u_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ctx_str_plain_A_str_plain__may_rotate_str_plain_u_tuple, 0, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_str_plain_ctx_str_plain_A_str_plain__may_rotate_str_plain_u_tuple, 1, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    const_str_plain__may_rotate = UNSTREAM_STRING( &constant_bin[ 673554 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ctx_str_plain_A_str_plain__may_rotate_str_plain_u_tuple, 2, const_str_plain__may_rotate ); Py_INCREF( const_str_plain__may_rotate );
    PyTuple_SET_ITEM( const_tuple_str_plain_ctx_str_plain_A_str_plain__may_rotate_str_plain_u_tuple, 3, const_str_plain_u ); Py_INCREF( const_str_plain_u );
    const_tuple_str_plain_ctx_str_plain_A_str_plain_B_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ctx_str_plain_A_str_plain_B_tuple, 0, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_str_plain_ctx_str_plain_A_str_plain_B_tuple, 1, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_str_plain_ctx_str_plain_A_str_plain_B_tuple, 2, const_str_plain_B ); Py_INCREF( const_str_plain_B );
    const_tuple_a3b5a549b6c79b0270fb0c8dae73b4f8_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_a3b5a549b6c79b0270fb0c8dae73b4f8_tuple, 0, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_a3b5a549b6c79b0270fb0c8dae73b4f8_tuple, 1, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_a3b5a549b6c79b0270fb0c8dae73b4f8_tuple, 2, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_a3b5a549b6c79b0270fb0c8dae73b4f8_tuple, 3, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    PyTuple_SET_ITEM( const_tuple_a3b5a549b6c79b0270fb0c8dae73b4f8_tuple, 4, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_a3b5a549b6c79b0270fb0c8dae73b4f8_tuple, 5, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    PyTuple_SET_ITEM( const_tuple_a3b5a549b6c79b0270fb0c8dae73b4f8_tuple, 6, const_str_plain_prec ); Py_INCREF( const_str_plain_prec );
    PyTuple_SET_ITEM( const_tuple_a3b5a549b6c79b0270fb0c8dae73b4f8_tuple, 7, const_str_plain_T ); Py_INCREF( const_str_plain_T );
    PyTuple_SET_ITEM( const_tuple_a3b5a549b6c79b0270fb0c8dae73b4f8_tuple, 8, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    PyTuple_SET_ITEM( const_tuple_a3b5a549b6c79b0270fb0c8dae73b4f8_tuple, 9, const_str_plain_Y ); Py_INCREF( const_str_plain_Y );
    const_str_digest_c8730964663eb5a9b5b434a94f0583e8 = UNSTREAM_STRING( &constant_bin[ 673565 ], 3232, 0 );
    const_builtin_abs = LOOKUP_BUILTIN( const_str_plain_abs );
    const_str_plain__exp_pade = UNSTREAM_STRING( &constant_bin[ 676797 ], 9, 1 );
    const_str_plain__sqrtm_rot = UNSTREAM_STRING( &constant_bin[ 676806 ], 10, 1 );
    const_tuple_527f359ce81fee9b6a3b2e5bbfdc4340_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_527f359ce81fee9b6a3b2e5bbfdc4340_tuple, 0, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_527f359ce81fee9b6a3b2e5bbfdc4340_tuple, 1, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_527f359ce81fee9b6a3b2e5bbfdc4340_tuple, 2, const_str_plain__may_rotate ); Py_INCREF( const_str_plain__may_rotate );
    PyTuple_SET_ITEM( const_tuple_527f359ce81fee9b6a3b2e5bbfdc4340_tuple, 3, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_527f359ce81fee9b6a3b2e5bbfdc4340_tuple, 4, const_str_plain_I ); Py_INCREF( const_str_plain_I );
    PyTuple_SET_ITEM( const_tuple_527f359ce81fee9b6a3b2e5bbfdc4340_tuple, 5, const_str_plain_mag2 ); Py_INCREF( const_str_plain_mag2 );
    PyTuple_SET_ITEM( const_tuple_527f359ce81fee9b6a3b2e5bbfdc4340_tuple, 6, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_527f359ce81fee9b6a3b2e5bbfdc4340_tuple, 7, const_str_plain_prec ); Py_INCREF( const_str_plain_prec );
    PyTuple_SET_ITEM( const_tuple_527f359ce81fee9b6a3b2e5bbfdc4340_tuple, 8, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    const_str_plain_Yprev = UNSTREAM_STRING( &constant_bin[ 676816 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_527f359ce81fee9b6a3b2e5bbfdc4340_tuple, 9, const_str_plain_Yprev ); Py_INCREF( const_str_plain_Yprev );
    PyTuple_SET_ITEM( const_tuple_527f359ce81fee9b6a3b2e5bbfdc4340_tuple, 10, const_str_plain_Y ); Py_INCREF( const_str_plain_Y );
    PyTuple_SET_ITEM( const_tuple_527f359ce81fee9b6a3b2e5bbfdc4340_tuple, 11, const_str_plain_Z ); Py_INCREF( const_str_plain_Z );
    const_str_plain_mag1 = UNSTREAM_STRING( &constant_bin[ 676821 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_527f359ce81fee9b6a3b2e5bbfdc4340_tuple, 12, const_str_plain_mag1 ); Py_INCREF( const_str_plain_mag1 );
    const_tuple_str_plain_p_str_plain_ctx_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_p_str_plain_ctx_tuple, 0, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_str_plain_p_str_plain_ctx_tuple, 1, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    const_str_digest_bcfc1a3a2d98924fa953524946f2fc3c = UNSTREAM_STRING( &constant_bin[ 676825 ], 33, 0 );
    const_str_plain_eps_pade = UNSTREAM_STRING( &constant_bin[ 676858 ], 8, 1 );
    const_str_digest_9f3ad8e5efe87c958ce943d901599f79 = UNSTREAM_STRING( &constant_bin[ 676866 ], 2302, 0 );
    const_str_digest_59f1ba362b95405716bdfca7879d7bf2 = UNSTREAM_STRING( &constant_bin[ 679168 ], 3599, 0 );
    const_tuple_c174dec09b1cbc15829c4f08be83b891_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_c174dec09b1cbc15829c4f08be83b891_tuple, 0, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_c174dec09b1cbc15829c4f08be83b891_tuple, 1, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_c174dec09b1cbc15829c4f08be83b891_tuple, 2, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_c174dec09b1cbc15829c4f08be83b891_tuple, 3, const_str_plain_prec ); Py_INCREF( const_str_plain_prec );
    PyTuple_SET_ITEM( const_tuple_c174dec09b1cbc15829c4f08be83b891_tuple, 4, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_c174dec09b1cbc15829c4f08be83b891_tuple, 5, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    const_str_plain_extraq = UNSTREAM_STRING( &constant_bin[ 682767 ], 6, 1 );
    const_tuple_builtin_abs_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_builtin_abs_tuple, 0, const_builtin_abs ); Py_INCREF( const_builtin_abs );
    const_tuple_44b9184419de1aabe0380355b1d8f73e_tuple = PyTuple_New( 16 );
    PyTuple_SET_ITEM( const_tuple_44b9184419de1aabe0380355b1d8f73e_tuple, 0, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_44b9184419de1aabe0380355b1d8f73e_tuple, 1, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_44b9184419de1aabe0380355b1d8f73e_tuple, 2, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_44b9184419de1aabe0380355b1d8f73e_tuple, 3, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_44b9184419de1aabe0380355b1d8f73e_tuple, 4, const_str_plain_extra ); Py_INCREF( const_str_plain_extra );
    const_str_plain_cx = UNSTREAM_STRING( &constant_bin[ 682773 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_44b9184419de1aabe0380355b1d8f73e_tuple, 5, const_str_plain_cx ); Py_INCREF( const_str_plain_cx );
    PyTuple_SET_ITEM( const_tuple_44b9184419de1aabe0380355b1d8f73e_tuple, 6, const_str_plain_na ); Py_INCREF( const_str_plain_na );
    PyTuple_SET_ITEM( const_tuple_44b9184419de1aabe0380355b1d8f73e_tuple, 7, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_44b9184419de1aabe0380355b1d8f73e_tuple, 8, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    PyTuple_SET_ITEM( const_tuple_44b9184419de1aabe0380355b1d8f73e_tuple, 9, const_str_plain_eps_pade ); Py_INCREF( const_str_plain_eps_pade );
    PyTuple_SET_ITEM( const_tuple_44b9184419de1aabe0380355b1d8f73e_tuple, 10, const_str_plain_prec ); Py_INCREF( const_str_plain_prec );
    PyTuple_SET_ITEM( const_tuple_44b9184419de1aabe0380355b1d8f73e_tuple, 11, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    PyTuple_SET_ITEM( const_tuple_44b9184419de1aabe0380355b1d8f73e_tuple, 12, const_str_plain_extraq ); Py_INCREF( const_str_plain_extraq );
    PyTuple_SET_ITEM( const_tuple_44b9184419de1aabe0380355b1d8f73e_tuple, 13, const_str_plain_num ); Py_INCREF( const_str_plain_num );
    PyTuple_SET_ITEM( const_tuple_44b9184419de1aabe0380355b1d8f73e_tuple, 14, const_str_plain_den ); Py_INCREF( const_str_plain_den );
    PyTuple_SET_ITEM( const_tuple_44b9184419de1aabe0380355b1d8f73e_tuple, 15, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_tuple_a65d0c3463771599ab132731f5e2bbce_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_a65d0c3463771599ab132731f5e2bbce_tuple, 0, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_a65d0c3463771599ab132731f5e2bbce_tuple, 1, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_a65d0c3463771599ab132731f5e2bbce_tuple, 2, const_str_plain_B ); Py_INCREF( const_str_plain_B );
    PyTuple_SET_ITEM( const_tuple_a65d0c3463771599ab132731f5e2bbce_tuple, 3, const_str_plain_I ); Py_INCREF( const_str_plain_I );
    PyTuple_SET_ITEM( const_tuple_a65d0c3463771599ab132731f5e2bbce_tuple, 4, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_a65d0c3463771599ab132731f5e2bbce_tuple, 5, const_str_plain_L ); Py_INCREF( const_str_plain_L );
    PyTuple_SET_ITEM( const_tuple_a65d0c3463771599ab132731f5e2bbce_tuple, 6, const_str_plain_prec ); Py_INCREF( const_str_plain_prec );
    PyTuple_SET_ITEM( const_tuple_a65d0c3463771599ab132731f5e2bbce_tuple, 7, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_a65d0c3463771599ab132731f5e2bbce_tuple, 8, const_str_plain_T ); Py_INCREF( const_str_plain_T );
    PyTuple_SET_ITEM( const_tuple_a65d0c3463771599ab132731f5e2bbce_tuple, 9, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    PyTuple_SET_ITEM( const_tuple_a65d0c3463771599ab132731f5e2bbce_tuple, 10, const_str_plain_X ); Py_INCREF( const_str_plain_X );
    const_str_digest_294ad75697ad91ca889c338d5cc289f3 = UNSTREAM_STRING( &constant_bin[ 682775 ], 300, 0 );
    const_str_digest_2eaa9523a48d03265227daae962586d7 = UNSTREAM_STRING( &constant_bin[ 683075 ], 1862, 0 );
    const_str_digest_511c5d7b56153601ee4cb64cb854cf63 = UNSTREAM_STRING( &constant_bin[ 676833 ], 24, 0 );
    const_str_digest_ae1d1af9ce29cba721a67adf0a3afec1 = UNSTREAM_STRING( &constant_bin[ 684937 ], 66, 0 );
    const_tuple_str_plain_taylor_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_taylor_tuple, 0, const_str_plain_taylor ); Py_INCREF( const_str_plain_taylor );
    const_str_digest_e62959889d72da096b01003fac677168 = UNSTREAM_STRING( &constant_bin[ 685003 ], 1004, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_mpmath$matrices$calculus( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_8dcd6e162663c3f029e7070a5b94eedd;
static PyCodeObject *codeobj_a0df8e1791d2a56a5e5c9d41bb1b2fcf;
static PyCodeObject *codeobj_faabb48dbc141516a4bf3adcf6077f75;
static PyCodeObject *codeobj_78091d750900afffa9560e52fa6d4fcd;
static PyCodeObject *codeobj_06f4662d4ddeabd97909e0b187a81aa2;
static PyCodeObject *codeobj_bbd6b86fdd883d5392f5a528ae03004b;
static PyCodeObject *codeobj_41b0c3eef80f957ccce318d367f6eb14;
static PyCodeObject *codeobj_8bef95f78f86a97cb5f04ca235b32bfa;
static PyCodeObject *codeobj_4229219a0d7a8f3fbf46abeafb3e1eb9;
static PyCodeObject *codeobj_c35fd435d91de227abb829a73e0dbd29;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_ae1d1af9ce29cba721a67adf0a3afec1;
    codeobj_8dcd6e162663c3f029e7070a5b94eedd = MAKE_CODEOBJ( module_filename_obj, const_str_digest_bcfc1a3a2d98924fa953524946f2fc3c, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_a0df8e1791d2a56a5e5c9d41bb1b2fcf = MAKE_CODEOBJ( module_filename_obj, const_str_plain__exp_pade, 7, const_tuple_44b9184419de1aabe0380355b1d8f73e_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_faabb48dbc141516a4bf3adcf6077f75 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__sqrtm_rot, 205, const_tuple_str_plain_ctx_str_plain_A_str_plain__may_rotate_str_plain_u_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_78091d750900afffa9560e52fa6d4fcd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cosm, 147, const_tuple_str_plain_ctx_str_plain_A_str_plain_B_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_06f4662d4ddeabd97909e0b187a81aa2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_eps_pade, 19, const_tuple_str_plain_p_str_plain_ctx_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_bbd6b86fdd883d5392f5a528ae03004b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_expm, 53, const_tuple_a3b5a549b6c79b0270fb0c8dae73b4f8_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_41b0c3eef80f957ccce318d367f6eb14 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_logm, 350, const_tuple_a65d0c3463771599ab132731f5e2bbce_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8bef95f78f86a97cb5f04ca235b32bfa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_powm, 464, const_tuple_c174dec09b1cbc15829c4f08be83b891_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4229219a0d7a8f3fbf46abeafb3e1eb9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sinm, 176, const_tuple_str_plain_ctx_str_plain_A_str_plain_B_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c35fd435d91de227abb829a73e0dbd29 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sqrtm, 211, const_tuple_527f359ce81fee9b6a3b2e5bbfdc4340_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_mpmath$matrices$calculus$$$function_1__exp_pade(  );


static PyObject *MAKE_FUNCTION_mpmath$matrices$calculus$$$function_1__exp_pade$$$function_1_eps_pade(  );


static PyObject *MAKE_FUNCTION_mpmath$matrices$calculus$$$function_2_expm( PyObject *defaults );


static PyObject *MAKE_FUNCTION_mpmath$matrices$calculus$$$function_3_cosm(  );


static PyObject *MAKE_FUNCTION_mpmath$matrices$calculus$$$function_4_sinm(  );


static PyObject *MAKE_FUNCTION_mpmath$matrices$calculus$$$function_5__sqrtm_rot(  );


static PyObject *MAKE_FUNCTION_mpmath$matrices$calculus$$$function_6_sqrtm( PyObject *defaults );


static PyObject *MAKE_FUNCTION_mpmath$matrices$calculus$$$function_7_logm(  );


static PyObject *MAKE_FUNCTION_mpmath$matrices$calculus$$$function_8_powm(  );


// The module function definitions.
static PyObject *impl_mpmath$matrices$calculus$$$function_1__exp_pade( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_ctx = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *par_a = python_pars[ 1 ];
    PyObject *var_c = NULL;
    PyObject *var_f = NULL;
    PyObject *var_extra = NULL;
    PyObject *var_cx = NULL;
    PyObject *var_na = NULL;
    PyObject *var_k = NULL;
    PyObject *var_j = NULL;
    PyObject *var_eps_pade = NULL;
    PyObject *var_prec = NULL;
    PyObject *var_q = NULL;
    PyObject *var_num = NULL;
    PyObject *var_den = NULL;
    PyObject *var_x = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_a0df8e1791d2a56a5e5c9d41bb1b2fcf;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a0df8e1791d2a56a5e5c9d41bb1b2fcf = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_FUNCTION_mpmath$matrices$calculus$$$function_1__exp_pade$$$function_1_eps_pade(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] = par_ctx;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] );


        assert( var_eps_pade == NULL );
        var_eps_pade = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_int_pos_4;
        assert( var_q == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_q = tmp_assign_source_2;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a0df8e1791d2a56a5e5c9d41bb1b2fcf, codeobj_a0df8e1791d2a56a5e5c9d41bb1b2fcf, module_mpmath$matrices$calculus, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a0df8e1791d2a56a5e5c9d41bb1b2fcf = cache_frame_a0df8e1791d2a56a5e5c9d41bb1b2fcf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a0df8e1791d2a56a5e5c9d41bb1b2fcf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a0df8e1791d2a56a5e5c9d41bb1b2fcf ) == 2 ); // Frame stack

    // Framed code:
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( var_eps_pade );
        tmp_called_name_1 = var_eps_pade;
        CHECK_OBJECT( var_q );
        tmp_args_element_name_1 = var_q;
        frame_a0df8e1791d2a56a5e5c9d41bb1b2fcf->m_frame.f_lineno = 25;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "coooooooooooNooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_source_name_1 = PyCell_GET( par_ctx );
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_eps );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 25;
            type_description_1 = "coooooooooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "coooooooooooNooo";
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
        goto loop_end_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( var_q );
        tmp_left_name_1 = var_q;
        tmp_right_name_1 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_INT_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "coooooooooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_left_name_1;
        var_q = tmp_assign_source_3;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "coooooooooooNooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_q );
        tmp_left_name_2 = var_q;
        tmp_right_name_2 = const_int_pos_8;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_INT_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;
            type_description_1 = "coooooooooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = tmp_left_name_2;
        var_q = tmp_assign_source_4;

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_2 != NULL );
        tmp_args_element_name_2 = const_int_pos_1;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_source_name_2 = PyCell_GET( par_ctx );
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_mag );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "coooooooooooNooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_called_instance_1 = PyCell_GET( par_ctx );
        CHECK_OBJECT( par_a );
        tmp_args_element_name_5 = par_a;
        tmp_args_element_name_6 = const_str_plain_inf;
        frame_a0df8e1791d2a56a5e5c9d41bb1b2fcf->m_frame.f_lineno = 29;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_mnorm, call_args );
        }

        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 29;
            type_description_1 = "coooooooooooNooo";
            goto frame_exception_exit_1;
        }
        frame_a0df8e1791d2a56a5e5c9d41bb1b2fcf->m_frame.f_lineno = 29;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "coooooooooooNooo";
            goto frame_exception_exit_1;
        }
        frame_a0df8e1791d2a56a5e5c9d41bb1b2fcf->m_frame.f_lineno = 29;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_int_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_int_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "coooooooooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = PyNumber_Int( tmp_int_arg_1 );
        Py_DECREF( tmp_int_arg_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "coooooooooooNooo";
            goto frame_exception_exit_1;
        }
        assert( var_j == NULL );
        var_j = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( var_q );
        tmp_assign_source_6 = var_q;
        assert( var_extra == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_extra = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_source_name_3 = PyCell_GET( par_ctx );
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_prec );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "coooooooooooNooo";
            goto frame_exception_exit_1;
        }
        assert( var_prec == NULL );
        var_prec = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_source_name_4 = PyCell_GET( par_ctx );
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dps );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "coooooooooooNooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_inplace_assign_attr_1__start == NULL );
        tmp_inplace_assign_attr_1__start = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_3 = tmp_inplace_assign_attr_1__start;
        CHECK_OBJECT( var_extra );
        tmp_left_name_4 = var_extra;
        tmp_right_name_4 = const_int_pos_3;
        tmp_right_name_3 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_2;
        }
        assert( tmp_inplace_assign_attr_1__end == NULL );
        tmp_inplace_assign_attr_1__end = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
        tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_assattr_target_1 = PyCell_GET( par_ctx );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_dps, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "coooooooooooNooo";
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( par_a );
        tmp_left_name_5 = par_a;
        tmp_left_name_6 = const_int_pos_2;
        CHECK_OBJECT( var_j );
        tmp_right_name_6 = var_j;
        tmp_right_name_5 = POWER_OPERATION( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_10 = BINARY_OPERATION_DIV( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_10;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( par_a );
        tmp_source_name_5 = par_a;
        tmp_assign_source_11 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_rows );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_4;
        }
        assert( var_na == NULL );
        var_na = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_called_instance_2 = PyCell_GET( par_ctx );
        CHECK_OBJECT( var_na );
        tmp_args_element_name_7 = var_na;
        frame_a0df8e1791d2a56a5e5c9d41bb1b2fcf->m_frame.f_lineno = 36;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_assign_source_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_eye, call_args );
        }

        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_4;
        }
        assert( var_den == NULL );
        var_den = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_called_instance_3 = PyCell_GET( par_ctx );
        CHECK_OBJECT( var_na );
        tmp_args_element_name_8 = var_na;
        frame_a0df8e1791d2a56a5e5c9d41bb1b2fcf->m_frame.f_lineno = 37;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_assign_source_13 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_eye, call_args );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_4;
        }
        assert( var_num == NULL );
        var_num = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_called_instance_4 = PyCell_GET( par_ctx );
        CHECK_OBJECT( var_na );
        tmp_args_element_name_9 = var_na;
        frame_a0df8e1791d2a56a5e5c9d41bb1b2fcf->m_frame.f_lineno = 38;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_assign_source_14 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_eye, call_args );
        }

        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_4;
        }
        assert( var_x == NULL );
        var_x = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_called_instance_5 = PyCell_GET( par_ctx );
        frame_a0df8e1791d2a56a5e5c9d41bb1b2fcf->m_frame.f_lineno = 39;
        tmp_assign_source_15 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_mpf, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_4;
        }
        assert( var_c == NULL );
        var_c = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_range2_low_1;
        PyObject *tmp_range2_high_1;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        tmp_range2_low_1 = const_int_pos_1;
        CHECK_OBJECT( var_q );
        tmp_left_name_7 = var_q;
        tmp_right_name_7 = const_int_pos_1;
        tmp_range2_high_1 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_range2_high_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_4;
        }
        tmp_iter_arg_1 = BUILTIN_RANGE2( tmp_range2_low_1, tmp_range2_high_1 );
        Py_DECREF( tmp_range2_high_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_4;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_16;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_17 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_17 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "coooooooooooNooo";
                exception_lineno = 40;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_17;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_18 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_18;
            Py_INCREF( var_k );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_6;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_left_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_9;
        PyObject *tmp_right_name_10;
        PyObject *tmp_right_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_left_name_13;
        PyObject *tmp_left_name_14;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_12;
        PyObject *tmp_right_name_13;
        PyObject *tmp_right_name_14;
        PyObject *tmp_right_name_15;
        CHECK_OBJECT( var_c );
        tmp_left_name_8 = var_c;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_source_name_6 = PyCell_GET( par_ctx );
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_mpf );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT( var_q );
        tmp_left_name_11 = var_q;
        CHECK_OBJECT( var_k );
        tmp_right_name_9 = var_k;
        tmp_left_name_10 = BINARY_OPERATION_SUB( tmp_left_name_11, tmp_right_name_9 );
        if ( tmp_left_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 41;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_5;
        }
        tmp_right_name_10 = const_int_pos_1;
        tmp_args_element_name_10 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_10, tmp_right_name_10 );
        Py_DECREF( tmp_left_name_10 );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 41;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_5;
        }
        frame_a0df8e1791d2a56a5e5c9d41bb1b2fcf->m_frame.f_lineno = 41;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_left_name_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_left_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_5;
        }
        tmp_left_name_15 = const_int_pos_2;
        CHECK_OBJECT( var_q );
        tmp_right_name_12 = var_q;
        tmp_left_name_14 = BINARY_OPERATION_MUL( tmp_left_name_15, tmp_right_name_12 );
        if ( tmp_left_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_9 );

            exception_lineno = 41;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT( var_k );
        tmp_right_name_13 = var_k;
        tmp_left_name_13 = BINARY_OPERATION_SUB( tmp_left_name_14, tmp_right_name_13 );
        Py_DECREF( tmp_left_name_14 );
        if ( tmp_left_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_9 );

            exception_lineno = 41;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_5;
        }
        tmp_right_name_14 = const_int_pos_1;
        tmp_left_name_12 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_13, tmp_right_name_14 );
        Py_DECREF( tmp_left_name_13 );
        if ( tmp_left_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_9 );

            exception_lineno = 41;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT( var_k );
        tmp_right_name_15 = var_k;
        tmp_right_name_11 = BINARY_OPERATION_MUL( tmp_left_name_12, tmp_right_name_15 );
        Py_DECREF( tmp_left_name_12 );
        if ( tmp_right_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_9 );

            exception_lineno = 41;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_5;
        }
        tmp_right_name_8 = BINARY_OPERATION_DIV( tmp_left_name_9, tmp_right_name_11 );
        Py_DECREF( tmp_left_name_9 );
        Py_DECREF( tmp_right_name_11 );
        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_5;
        }
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_19 = tmp_left_name_8;
        var_c = tmp_assign_source_19;

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_16;
        CHECK_OBJECT( par_a );
        tmp_left_name_16 = par_a;
        CHECK_OBJECT( var_x );
        tmp_right_name_16 = var_x;
        tmp_assign_source_20 = BINARY_OPERATION_MUL( tmp_left_name_16, tmp_right_name_16 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_x;
            assert( old != NULL );
            var_x = tmp_assign_source_20;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_left_name_17;
        PyObject *tmp_right_name_17;
        CHECK_OBJECT( var_c );
        tmp_left_name_17 = var_c;
        CHECK_OBJECT( var_x );
        tmp_right_name_17 = var_x;
        tmp_assign_source_21 = BINARY_OPERATION_MUL( tmp_left_name_17, tmp_right_name_17 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_cx;
            var_cx = tmp_assign_source_21;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_left_name_18;
        PyObject *tmp_right_name_18;
        CHECK_OBJECT( var_num );
        tmp_left_name_18 = var_num;
        CHECK_OBJECT( var_cx );
        tmp_right_name_18 = var_cx;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_18, tmp_right_name_18 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_22 = tmp_left_name_18;
        var_num = tmp_assign_source_22;

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_left_name_19;
        PyObject *tmp_right_name_19;
        PyObject *tmp_left_name_20;
        PyObject *tmp_left_name_21;
        PyObject *tmp_right_name_20;
        PyObject *tmp_right_name_21;
        CHECK_OBJECT( var_den );
        tmp_left_name_19 = var_den;
        tmp_left_name_21 = const_int_neg_1;
        CHECK_OBJECT( var_k );
        tmp_right_name_20 = var_k;
        tmp_left_name_20 = POWER_OPERATION( tmp_left_name_21, tmp_right_name_20 );
        if ( tmp_left_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT( var_cx );
        tmp_right_name_21 = var_cx;
        tmp_right_name_19 = BINARY_OPERATION_MUL( tmp_left_name_20, tmp_right_name_21 );
        Py_DECREF( tmp_left_name_20 );
        if ( tmp_right_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_5;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_19, tmp_right_name_19 );
        Py_DECREF( tmp_right_name_19 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_23 = tmp_left_name_19;
        var_den = tmp_assign_source_23;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "coooooooooooNooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
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

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_called_instance_6 = PyCell_GET( par_ctx );
        CHECK_OBJECT( var_den );
        tmp_args_element_name_11 = var_den;
        CHECK_OBJECT( var_num );
        tmp_args_element_name_12 = var_num;
        frame_a0df8e1791d2a56a5e5c9d41bb1b2fcf->m_frame.f_lineno = 46;
        {
            PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_assign_source_24 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_6, const_str_plain_lu_solve_mat, call_args );
        }

        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_4;
        }
        assert( var_f == NULL );
        var_f = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_range_arg_1;
        CHECK_OBJECT( var_j );
        tmp_range_arg_1 = var_j;
        tmp_iter_arg_2 = BUILTIN_RANGE( tmp_range_arg_1 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_25 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_4;
        }
        assert( tmp_for_loop_2__for_iterator == NULL );
        tmp_for_loop_2__for_iterator = tmp_assign_source_25;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_26 = ITERATOR_NEXT( tmp_next_source_2 );
        if ( tmp_assign_source_26 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_3;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "coooooooooooNooo";
                exception_lineno = 47;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_26;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT( tmp_for_loop_2__iter_value );
        tmp_assign_source_27 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_27;
            Py_INCREF( var_k );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_left_name_22;
        PyObject *tmp_right_name_22;
        CHECK_OBJECT( var_f );
        tmp_left_name_22 = var_f;
        CHECK_OBJECT( var_f );
        tmp_right_name_22 = var_f;
        tmp_assign_source_28 = BINARY_OPERATION_MUL( tmp_left_name_22, tmp_right_name_22 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "coooooooooooNooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_f;
            assert( old != NULL );
            var_f = tmp_assign_source_28;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "coooooooooooNooo";
        goto try_except_handler_6;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_4;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( var_prec );
        tmp_assattr_name_2 = var_prec;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_assattr_target_2 = PyCell_GET( par_ctx );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_prec, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            Py_DECREF( exception_keeper_type_5 );
            Py_XDECREF( exception_keeper_value_5 );
            Py_XDECREF( exception_keeper_tb_5 );

            exception_lineno = 50;
            type_description_1 = "coooooooooooNooo";
            goto frame_exception_exit_1;
        }
    }
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( var_prec );
        tmp_assattr_name_3 = var_prec;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_assattr_target_3 = PyCell_GET( par_ctx );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_prec, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "coooooooooooNooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_left_name_23;
        PyObject *tmp_right_name_23;
        CHECK_OBJECT( var_f );
        tmp_left_name_23 = var_f;
        tmp_right_name_23 = const_int_pos_1;
        tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_23, tmp_right_name_23 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "coooooooooooNooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a0df8e1791d2a56a5e5c9d41bb1b2fcf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a0df8e1791d2a56a5e5c9d41bb1b2fcf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a0df8e1791d2a56a5e5c9d41bb1b2fcf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a0df8e1791d2a56a5e5c9d41bb1b2fcf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a0df8e1791d2a56a5e5c9d41bb1b2fcf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a0df8e1791d2a56a5e5c9d41bb1b2fcf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a0df8e1791d2a56a5e5c9d41bb1b2fcf,
        type_description_1,
        par_ctx,
        par_a,
        var_c,
        var_f,
        var_extra,
        var_cx,
        var_na,
        var_k,
        var_j,
        var_eps_pade,
        var_prec,
        var_q,
        NULL,
        var_num,
        var_den,
        var_x
    );


    // Release cached frame.
    if ( frame_a0df8e1791d2a56a5e5c9d41bb1b2fcf == cache_frame_a0df8e1791d2a56a5e5c9d41bb1b2fcf )
    {
        Py_DECREF( frame_a0df8e1791d2a56a5e5c9d41bb1b2fcf );
    }
    cache_frame_a0df8e1791d2a56a5e5c9d41bb1b2fcf = NULL;

    assertFrameObject( frame_a0df8e1791d2a56a5e5c9d41bb1b2fcf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$matrices$calculus$$$function_1__exp_pade );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)var_c );
    Py_DECREF( var_c );
    var_c = NULL;

    CHECK_OBJECT( (PyObject *)var_f );
    Py_DECREF( var_f );
    var_f = NULL;

    CHECK_OBJECT( (PyObject *)var_extra );
    Py_DECREF( var_extra );
    var_extra = NULL;

    Py_XDECREF( var_cx );
    var_cx = NULL;

    CHECK_OBJECT( (PyObject *)var_na );
    Py_DECREF( var_na );
    var_na = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    CHECK_OBJECT( (PyObject *)var_j );
    Py_DECREF( var_j );
    var_j = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)var_eps_pade );
    Py_DECREF( var_eps_pade );
    var_eps_pade = NULL;

    CHECK_OBJECT( (PyObject *)var_prec );
    Py_DECREF( var_prec );
    var_prec = NULL;

    CHECK_OBJECT( (PyObject *)var_q );
    Py_DECREF( var_q );
    var_q = NULL;

    CHECK_OBJECT( (PyObject *)var_num );
    Py_DECREF( var_num );
    var_num = NULL;

    CHECK_OBJECT( (PyObject *)var_den );
    Py_DECREF( var_den );
    var_den = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

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

    Py_XDECREF( par_a );
    par_a = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_extra );
    var_extra = NULL;

    Py_XDECREF( var_cx );
    var_cx = NULL;

    Py_XDECREF( var_na );
    var_na = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)var_eps_pade );
    Py_DECREF( var_eps_pade );
    var_eps_pade = NULL;

    Py_XDECREF( var_prec );
    var_prec = NULL;

    Py_XDECREF( var_q );
    var_q = NULL;

    Py_XDECREF( var_num );
    var_num = NULL;

    Py_XDECREF( var_den );
    var_den = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$matrices$calculus$$$function_1__exp_pade );
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


static PyObject *impl_mpmath$matrices$calculus$$$function_1__exp_pade$$$function_1_eps_pade( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_p = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_06f4662d4ddeabd97909e0b187a81aa2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_06f4662d4ddeabd97909e0b187a81aa2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_06f4662d4ddeabd97909e0b187a81aa2, codeobj_06f4662d4ddeabd97909e0b187a81aa2, module_mpmath$matrices$calculus, sizeof(void *)+sizeof(void *) );
    frame_06f4662d4ddeabd97909e0b187a81aa2 = cache_frame_06f4662d4ddeabd97909e0b187a81aa2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_06f4662d4ddeabd97909e0b187a81aa2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_06f4662d4ddeabd97909e0b187a81aa2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_left_name_6;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_7;
        PyObject *tmp_right_name_8;
        PyObject *tmp_right_name_9;
        PyObject *tmp_left_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_10;
        PyObject *tmp_right_name_11;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ctx" );
            exception_tb = NULL;

            exception_lineno = 20;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        frame_06f4662d4ddeabd97909e0b187a81aa2->m_frame.f_lineno = 20;
        tmp_left_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_mpf, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = const_int_pos_3;
        tmp_left_name_5 = const_int_pos_2;
        CHECK_OBJECT( par_p );
        tmp_right_name_3 = par_p;
        tmp_right_name_2 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_3 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 20;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 20;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = POWER_OPERATION( tmp_left_name_3, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_left_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ctx" );
            exception_tb = NULL;

            exception_lineno = 21;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_p );
        tmp_args_element_name_1 = par_p;
        frame_06f4662d4ddeabd97909e0b187a81aa2->m_frame.f_lineno = 21;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_left_name_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_factorial, call_args );
        }

        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 21;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_right_name_5 = const_int_pos_2;
        tmp_right_name_4 = POWER_OPERATION( tmp_left_name_6, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_6 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 21;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ctx" );
            exception_tb = NULL;

            exception_lineno = 21;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET( self->m_closure[0] );
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_factorial );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 21;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_left_name_9 = const_int_pos_2;
        CHECK_OBJECT( par_p );
        tmp_right_name_7 = par_p;
        tmp_args_element_name_2 = BINARY_OPERATION_MUL( tmp_left_name_9, tmp_right_name_7 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 21;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_06f4662d4ddeabd97909e0b187a81aa2->m_frame.f_lineno = 21;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_left_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 21;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_right_name_8 = const_int_pos_2;
        tmp_left_name_7 = POWER_OPERATION( tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_8 );
        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 21;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_left_name_11 = const_int_pos_2;
        CHECK_OBJECT( par_p );
        tmp_right_name_10 = par_p;
        tmp_left_name_10 = BINARY_OPERATION_MUL( tmp_left_name_11, tmp_right_name_10 );
        if ( tmp_left_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_left_name_7 );

            exception_lineno = 21;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_right_name_11 = const_int_pos_1;
        tmp_right_name_9 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_10, tmp_right_name_11 );
        Py_DECREF( tmp_left_name_10 );
        if ( tmp_right_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_left_name_7 );

            exception_lineno = 21;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_right_name_6 = BINARY_OPERATION_MUL( tmp_left_name_7, tmp_right_name_9 );
        Py_DECREF( tmp_left_name_7 );
        Py_DECREF( tmp_right_name_9 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 21;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_DIV( tmp_left_name_1, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_06f4662d4ddeabd97909e0b187a81aa2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_06f4662d4ddeabd97909e0b187a81aa2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_06f4662d4ddeabd97909e0b187a81aa2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_06f4662d4ddeabd97909e0b187a81aa2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_06f4662d4ddeabd97909e0b187a81aa2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_06f4662d4ddeabd97909e0b187a81aa2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_06f4662d4ddeabd97909e0b187a81aa2,
        type_description_1,
        par_p,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_06f4662d4ddeabd97909e0b187a81aa2 == cache_frame_06f4662d4ddeabd97909e0b187a81aa2 )
    {
        Py_DECREF( frame_06f4662d4ddeabd97909e0b187a81aa2 );
    }
    cache_frame_06f4662d4ddeabd97909e0b187a81aa2 = NULL;

    assertFrameObject( frame_06f4662d4ddeabd97909e0b187a81aa2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$matrices$calculus$$$function_1__exp_pade$$$function_1_eps_pade );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

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

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$matrices$calculus$$$function_1__exp_pade$$$function_1_eps_pade );
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


static PyObject *impl_mpmath$matrices$calculus$$$function_2_expm( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_A = python_pars[ 1 ];
    PyObject *par_method = python_pars[ 2 ];
    PyObject *var_res = NULL;
    PyObject *var_k = NULL;
    PyObject *var_j = NULL;
    PyObject *var_prec = NULL;
    PyObject *var_T = NULL;
    PyObject *var_tol = NULL;
    PyObject *var_Y = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    PyObject *tmp_inplace_assign_attr_2__end = NULL;
    PyObject *tmp_inplace_assign_attr_2__start = NULL;
    struct Nuitka_FrameObject *frame_bbd6b86fdd883d5392f5a528ae03004b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
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
    PyObject *tmp_return_value = NULL;
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
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_bbd6b86fdd883d5392f5a528ae03004b = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bbd6b86fdd883d5392f5a528ae03004b, codeobj_bbd6b86fdd883d5392f5a528ae03004b, module_mpmath$matrices$calculus, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bbd6b86fdd883d5392f5a528ae03004b = cache_frame_bbd6b86fdd883d5392f5a528ae03004b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bbd6b86fdd883d5392f5a528ae03004b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bbd6b86fdd883d5392f5a528ae03004b ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_method );
        tmp_compexpr_left_1 = par_method;
        tmp_compexpr_right_1 = const_str_plain_pade;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "oooooooooo";
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
            CHECK_OBJECT( par_ctx );
            tmp_source_name_1 = par_ctx;
            tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_prec );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 115;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_prec == NULL );
            var_prec = tmp_assign_source_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_1 = par_ctx;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_1 = par_A;
            frame_bbd6b86fdd883d5392f5a528ae03004b->m_frame.f_lineno = 117;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_matrix, call_args );
            }

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 117;
                type_description_1 = "oooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = par_A;
                assert( old != NULL );
                par_A = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_2 = par_ctx;
            tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_prec );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 118;
                type_description_1 = "oooooooooo";
                goto try_except_handler_2;
            }
            assert( tmp_inplace_assign_attr_1__start == NULL );
            tmp_inplace_assign_attr_1__start = tmp_assign_source_3;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
            tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
            tmp_left_name_2 = const_int_pos_2;
            CHECK_OBJECT( par_A );
            tmp_source_name_3 = par_A;
            tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_rows );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 118;
                type_description_1 = "oooooooooo";
                goto try_except_handler_3;
            }
            tmp_right_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 118;
                type_description_1 = "oooooooooo";
                goto try_except_handler_3;
            }
            tmp_assign_source_4 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 118;
                type_description_1 = "oooooooooo";
                goto try_except_handler_3;
            }
            assert( tmp_inplace_assign_attr_1__end == NULL );
            tmp_inplace_assign_attr_1__end = tmp_assign_source_4;
        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
            tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
            CHECK_OBJECT( par_ctx );
            tmp_assattr_target_1 = par_ctx;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_prec, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 118;
                type_description_1 = "oooooooooo";
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
        Py_DECREF( tmp_inplace_assign_attr_1__end );
        tmp_inplace_assign_attr_1__end = NULL;

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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
        Py_DECREF( tmp_inplace_assign_attr_1__start );
        tmp_inplace_assign_attr_1__start = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_2;
        // End of try:
        try_end_2:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
        Py_DECREF( tmp_inplace_assign_attr_1__end );
        tmp_inplace_assign_attr_1__end = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
        Py_DECREF( tmp_inplace_assign_attr_1__start );
        tmp_inplace_assign_attr_1__start = NULL;

        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_2 = par_ctx;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_2 = par_A;
            frame_bbd6b86fdd883d5392f5a528ae03004b->m_frame.f_lineno = 119;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__exp_pade, call_args );
            }

            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 119;
                type_description_1 = "oooooooooo";
                goto try_except_handler_2;
            }
            assert( var_res == NULL );
            var_res = tmp_assign_source_5;
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

        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            CHECK_OBJECT( var_prec );
            tmp_assattr_name_2 = var_prec;
            CHECK_OBJECT( par_ctx );
            tmp_assattr_target_2 = par_ctx;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_prec, tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_3 );
                Py_XDECREF( exception_keeper_value_3 );
                Py_XDECREF( exception_keeper_tb_3 );

                exception_lineno = 121;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
        }
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_1;
        // End of try:
        try_end_3:;
        {
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_assattr_target_3;
            CHECK_OBJECT( var_prec );
            tmp_assattr_name_3 = var_prec;
            CHECK_OBJECT( par_ctx );
            tmp_assattr_target_3 = par_ctx;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_prec, tmp_assattr_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 121;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
        }
        CHECK_OBJECT( var_res );
        tmp_return_value = var_res;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_3 = par_ctx;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_3 = par_A;
        frame_bbd6b86fdd883d5392f5a528ae03004b->m_frame.f_lineno = 123;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_matrix, call_args );
        }

        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_A;
            assert( old != NULL );
            par_A = tmp_assign_source_6;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_4 = par_ctx;
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_prec );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_prec == NULL );
        var_prec = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_1 != NULL );
        tmp_args_element_name_4 = const_int_pos_1;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_5 = par_ctx;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_mag );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_4 = par_ctx;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_7 = par_A;
        tmp_args_element_name_8 = const_str_plain_inf;
        frame_bbd6b86fdd883d5392f5a528ae03004b->m_frame.f_lineno = 125;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_args_element_name_6 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_mnorm, call_args );
        }

        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 125;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bbd6b86fdd883d5392f5a528ae03004b->m_frame.f_lineno = 125;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_args_element_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bbd6b86fdd883d5392f5a528ae03004b->m_frame.f_lineno = 125;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_int_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_int_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = PyNumber_Int( tmp_int_arg_1 );
        Py_DECREF( tmp_int_arg_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_j == NULL );
        var_j = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( var_j );
        tmp_left_name_3 = var_j;
        tmp_left_name_4 = const_float_0_5;
        CHECK_OBJECT( var_prec );
        tmp_left_name_5 = var_prec;
        tmp_right_name_5 = const_float_0_5;
        tmp_right_name_4 = POWER_OPERATION( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_int_arg_2 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_int_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = PyNumber_Int( tmp_int_arg_2 );
        Py_DECREF( tmp_int_arg_2 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = tmp_left_name_3;
        var_j = tmp_assign_source_9;

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_6 = par_ctx;
        tmp_assign_source_10 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_prec );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        assert( tmp_inplace_assign_attr_2__start == NULL );
        tmp_inplace_assign_attr_2__start = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        CHECK_OBJECT( tmp_inplace_assign_attr_2__start );
        tmp_left_name_6 = tmp_inplace_assign_attr_2__start;
        tmp_left_name_7 = const_int_pos_10;
        tmp_left_name_8 = const_int_pos_2;
        CHECK_OBJECT( var_j );
        tmp_right_name_8 = var_j;
        tmp_right_name_7 = BINARY_OPERATION_MUL( tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        tmp_right_name_6 = BINARY_OPERATION_ADD_INT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_11 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "oooooooooo";
            goto try_except_handler_6;
        }
        assert( tmp_inplace_assign_attr_2__end == NULL );
        tmp_inplace_assign_attr_2__end = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( tmp_inplace_assign_attr_2__end );
        tmp_assattr_name_4 = tmp_inplace_assign_attr_2__end;
        CHECK_OBJECT( par_ctx );
        tmp_assattr_target_4 = par_ctx;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_prec, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "oooooooooo";
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__end );
    Py_DECREF( tmp_inplace_assign_attr_2__end );
    tmp_inplace_assign_attr_2__end = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_6;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__start );
    Py_DECREF( tmp_inplace_assign_attr_2__start );
    tmp_inplace_assign_attr_2__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_5;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__end );
    Py_DECREF( tmp_inplace_assign_attr_2__end );
    tmp_inplace_assign_attr_2__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__start );
    Py_DECREF( tmp_inplace_assign_attr_2__start );
    tmp_inplace_assign_attr_2__start = NULL;

    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_7 = par_ctx;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_eps );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_12 = UNARY_OPERATION( PyNumber_Positive, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        assert( var_tol == NULL );
        var_tol = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        CHECK_OBJECT( par_A );
        tmp_left_name_9 = par_A;
        tmp_left_name_10 = const_int_pos_2;
        CHECK_OBJECT( var_j );
        tmp_right_name_10 = var_j;
        tmp_right_name_9 = POWER_OPERATION( tmp_left_name_10, tmp_right_name_10 );
        if ( tmp_right_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_13 = BINARY_OPERATION_DIV( tmp_left_name_9, tmp_right_name_9 );
        Py_DECREF( tmp_right_name_9 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = par_A;
            assert( old != NULL );
            par_A = tmp_assign_source_13;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( par_A );
        tmp_assign_source_14 = par_A;
        assert( var_T == NULL );
        Py_INCREF( tmp_assign_source_14 );
        var_T = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_left_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_11;
        PyObject *tmp_right_name_12;
        CHECK_OBJECT( par_A );
        tmp_left_name_12 = par_A;
        tmp_right_name_11 = const_int_0;
        tmp_left_name_11 = POWER_OPERATION( tmp_left_name_12, tmp_right_name_11 );
        if ( tmp_left_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT( par_A );
        tmp_right_name_12 = par_A;
        tmp_assign_source_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_12 );
        Py_DECREF( tmp_left_name_11 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        assert( var_Y == NULL );
        var_Y = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = const_int_pos_2;
        assert( var_k == NULL );
        Py_INCREF( tmp_assign_source_16 );
        var_k = tmp_assign_source_16;
    }
    loop_start_1:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_15;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT( var_T );
        tmp_left_name_13 = var_T;
        CHECK_OBJECT( par_A );
        tmp_left_name_14 = par_A;
        tmp_left_name_15 = const_int_pos_1;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_5 = par_ctx;
        CHECK_OBJECT( var_k );
        tmp_args_element_name_9 = var_k;
        frame_bbd6b86fdd883d5392f5a528ae03004b->m_frame.f_lineno = 135;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_right_name_15 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_mpf, call_args );
        }

        if ( tmp_right_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        tmp_right_name_14 = BINARY_OPERATION_DIV( tmp_left_name_15, tmp_right_name_15 );
        Py_DECREF( tmp_right_name_15 );
        if ( tmp_right_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        tmp_right_name_13 = BINARY_OPERATION_MUL( tmp_left_name_14, tmp_right_name_14 );
        Py_DECREF( tmp_right_name_14 );
        if ( tmp_right_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_13, tmp_right_name_13 );
        Py_DECREF( tmp_right_name_13 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_17 = tmp_left_name_13;
        var_T = tmp_assign_source_17;

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_6 = par_ctx;
        CHECK_OBJECT( var_T );
        tmp_args_element_name_10 = var_T;
        tmp_args_element_name_11 = const_str_plain_inf;
        frame_bbd6b86fdd883d5392f5a528ae03004b->m_frame.f_lineno = 136;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_compexpr_left_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_6, const_str_plain_mnorm, call_args );
        }

        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT( var_tol );
        tmp_compexpr_right_2 = var_tol;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
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
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_16;
        CHECK_OBJECT( var_Y );
        tmp_left_name_16 = var_Y;
        CHECK_OBJECT( var_T );
        tmp_right_name_16 = var_T;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_16, tmp_right_name_16 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_18 = tmp_left_name_16;
        var_Y = tmp_assign_source_18;

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_left_name_17;
        PyObject *tmp_right_name_17;
        CHECK_OBJECT( var_k );
        tmp_left_name_17 = var_k;
        tmp_right_name_17 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_INT_INPLACE( &tmp_left_name_17, tmp_right_name_17 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_19 = tmp_left_name_17;
        var_k = tmp_assign_source_19;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_12;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_mpmath$matrices$calculus, (Nuitka_StringObject *)const_str_plain_xrange );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_xrange );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "xrange" );
            exception_tb = NULL;

            exception_lineno = 140;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }

        tmp_called_name_3 = tmp_mvar_value_1;
        CHECK_OBJECT( var_j );
        tmp_args_element_name_12 = var_j;
        frame_bbd6b86fdd883d5392f5a528ae03004b->m_frame.f_lineno = 140;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_20 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_20;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_21 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_21 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooo";
                exception_lineno = 140;
                goto try_except_handler_8;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_21;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_22 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_k;
            assert( old != NULL );
            var_k = tmp_assign_source_22;
            Py_INCREF( var_k );
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_left_name_18;
        PyObject *tmp_right_name_18;
        CHECK_OBJECT( var_Y );
        tmp_left_name_18 = var_Y;
        CHECK_OBJECT( var_Y );
        tmp_right_name_18 = var_Y;
        tmp_assign_source_23 = BINARY_OPERATION_MUL( tmp_left_name_18, tmp_right_name_18 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;
            type_description_1 = "oooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_Y;
            assert( old != NULL );
            var_Y = tmp_assign_source_23;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_1 = "oooooooooo";
        goto try_except_handler_8;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_6;
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

    goto try_except_handler_5;
    // End of try:
    try_end_6:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT( var_prec );
        tmp_assattr_name_5 = var_prec;
        CHECK_OBJECT( par_ctx );
        tmp_assattr_target_5 = par_ctx;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_prec, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            Py_DECREF( exception_keeper_type_7 );
            Py_XDECREF( exception_keeper_value_7 );
            Py_XDECREF( exception_keeper_tb_7 );

            exception_lineno = 143;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT( var_prec );
        tmp_assattr_name_6 = var_prec;
        CHECK_OBJECT( par_ctx );
        tmp_assattr_target_6 = par_ctx;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_prec, tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_left_name_19;
        PyObject *tmp_right_name_19;
        CHECK_OBJECT( var_Y );
        tmp_left_name_19 = var_Y;
        tmp_right_name_19 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_19, tmp_right_name_19 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = tmp_left_name_19;
        var_Y = tmp_assign_source_24;

    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bbd6b86fdd883d5392f5a528ae03004b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bbd6b86fdd883d5392f5a528ae03004b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bbd6b86fdd883d5392f5a528ae03004b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bbd6b86fdd883d5392f5a528ae03004b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bbd6b86fdd883d5392f5a528ae03004b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bbd6b86fdd883d5392f5a528ae03004b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bbd6b86fdd883d5392f5a528ae03004b,
        type_description_1,
        par_ctx,
        par_A,
        par_method,
        var_res,
        var_k,
        var_j,
        var_prec,
        var_T,
        var_tol,
        var_Y
    );


    // Release cached frame.
    if ( frame_bbd6b86fdd883d5392f5a528ae03004b == cache_frame_bbd6b86fdd883d5392f5a528ae03004b )
    {
        Py_DECREF( frame_bbd6b86fdd883d5392f5a528ae03004b );
    }
    cache_frame_bbd6b86fdd883d5392f5a528ae03004b = NULL;

    assertFrameObject( frame_bbd6b86fdd883d5392f5a528ae03004b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_Y );
    tmp_return_value = var_Y;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$matrices$calculus$$$function_2_expm );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)var_prec );
    Py_DECREF( var_prec );
    var_prec = NULL;

    Py_XDECREF( var_T );
    var_T = NULL;

    Py_XDECREF( var_tol );
    var_tol = NULL;

    Py_XDECREF( var_Y );
    var_Y = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

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

    Py_XDECREF( par_A );
    par_A = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    Py_XDECREF( var_prec );
    var_prec = NULL;

    Py_XDECREF( var_T );
    var_T = NULL;

    Py_XDECREF( var_tol );
    var_tol = NULL;

    Py_XDECREF( var_Y );
    var_Y = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$matrices$calculus$$$function_2_expm );
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


static PyObject *impl_mpmath$matrices$calculus$$$function_3_cosm( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_A = python_pars[ 1 ];
    PyObject *var_B = NULL;
    struct Nuitka_FrameObject *frame_78091d750900afffa9560e52fa6d4fcd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_78091d750900afffa9560e52fa6d4fcd = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_78091d750900afffa9560e52fa6d4fcd, codeobj_78091d750900afffa9560e52fa6d4fcd, module_mpmath$matrices$calculus, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_78091d750900afffa9560e52fa6d4fcd = cache_frame_78091d750900afffa9560e52fa6d4fcd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_78091d750900afffa9560e52fa6d4fcd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_78091d750900afffa9560e52fa6d4fcd ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_4;
        tmp_left_name_1 = const_float_0_5;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_1 = par_ctx;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_expm );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_left_name_3 = par_A;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_2 = par_ctx;
        tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_j );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 171;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 171;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_78091d750900afffa9560e52fa6d4fcd->m_frame.f_lineno = 171;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_left_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ctx );
        tmp_source_name_3 = par_ctx;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_expm );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 171;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_left_name_4 = par_A;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_4 = par_ctx;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_j );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 171;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 171;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 171;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_78091d750900afffa9560e52fa6d4fcd->m_frame.f_lineno = 171;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 171;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_B == NULL );
        var_B = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_sum_sequence_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( par_A );
        tmp_source_name_5 = par_A;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_apply );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ctx );
        tmp_source_name_6 = par_ctx;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_im );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 172;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_78091d750900afffa9560e52fa6d4fcd->m_frame.f_lineno = 172;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_78091d750900afffa9560e52fa6d4fcd->m_frame.f_lineno = 172;
        tmp_sum_sequence_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_apply, &PyTuple_GET_ITEM( const_tuple_builtin_abs_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_sum_sequence_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = BUILTIN_SUM1( tmp_sum_sequence_1 );
        Py_DECREF( tmp_sum_sequence_1 );
        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_7;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT( var_B );
            tmp_source_name_7 = var_B;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_apply );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 173;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_ctx );
            tmp_source_name_8 = par_ctx;
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_re );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 173;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_78091d750900afffa9560e52fa6d4fcd->m_frame.f_lineno = 173;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 173;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_B;
                assert( old != NULL );
                var_B = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_78091d750900afffa9560e52fa6d4fcd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_78091d750900afffa9560e52fa6d4fcd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_78091d750900afffa9560e52fa6d4fcd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_78091d750900afffa9560e52fa6d4fcd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_78091d750900afffa9560e52fa6d4fcd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_78091d750900afffa9560e52fa6d4fcd,
        type_description_1,
        par_ctx,
        par_A,
        var_B
    );


    // Release cached frame.
    if ( frame_78091d750900afffa9560e52fa6d4fcd == cache_frame_78091d750900afffa9560e52fa6d4fcd )
    {
        Py_DECREF( frame_78091d750900afffa9560e52fa6d4fcd );
    }
    cache_frame_78091d750900afffa9560e52fa6d4fcd = NULL;

    assertFrameObject( frame_78091d750900afffa9560e52fa6d4fcd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_B );
    tmp_return_value = var_B;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$matrices$calculus$$$function_3_cosm );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)var_B );
    Py_DECREF( var_B );
    var_B = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

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

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    Py_XDECREF( var_B );
    var_B = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$matrices$calculus$$$function_3_cosm );
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


static PyObject *impl_mpmath$matrices$calculus$$$function_4_sinm( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_A = python_pars[ 1 ];
    PyObject *var_B = NULL;
    struct Nuitka_FrameObject *frame_4229219a0d7a8f3fbf46abeafb3e1eb9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4229219a0d7a8f3fbf46abeafb3e1eb9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4229219a0d7a8f3fbf46abeafb3e1eb9, codeobj_4229219a0d7a8f3fbf46abeafb3e1eb9, module_mpmath$matrices$calculus, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4229219a0d7a8f3fbf46abeafb3e1eb9 = cache_frame_4229219a0d7a8f3fbf46abeafb3e1eb9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4229219a0d7a8f3fbf46abeafb3e1eb9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4229219a0d7a8f3fbf46abeafb3e1eb9 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_4;
        tmp_left_name_1 = const_complex_0_0__m0_5;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_1 = par_ctx;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_expm );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_left_name_3 = par_A;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_2 = par_ctx;
        tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_j );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 200;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 200;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_4229219a0d7a8f3fbf46abeafb3e1eb9->m_frame.f_lineno = 200;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_left_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ctx );
        tmp_source_name_3 = par_ctx;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_expm );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 200;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_left_name_4 = par_A;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_4 = par_ctx;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_j );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 200;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 200;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 200;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_4229219a0d7a8f3fbf46abeafb3e1eb9->m_frame.f_lineno = 200;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 200;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_B == NULL );
        var_B = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_sum_sequence_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( par_A );
        tmp_source_name_5 = par_A;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_apply );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ctx );
        tmp_source_name_6 = par_ctx;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_im );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 201;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_4229219a0d7a8f3fbf46abeafb3e1eb9->m_frame.f_lineno = 201;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_4229219a0d7a8f3fbf46abeafb3e1eb9->m_frame.f_lineno = 201;
        tmp_sum_sequence_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_apply, &PyTuple_GET_ITEM( const_tuple_builtin_abs_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_sum_sequence_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = BUILTIN_SUM1( tmp_sum_sequence_1 );
        Py_DECREF( tmp_sum_sequence_1 );
        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_7;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT( var_B );
            tmp_source_name_7 = var_B;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_apply );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 202;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_ctx );
            tmp_source_name_8 = par_ctx;
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_re );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 202;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_4229219a0d7a8f3fbf46abeafb3e1eb9->m_frame.f_lineno = 202;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 202;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_B;
                assert( old != NULL );
                var_B = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4229219a0d7a8f3fbf46abeafb3e1eb9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4229219a0d7a8f3fbf46abeafb3e1eb9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4229219a0d7a8f3fbf46abeafb3e1eb9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4229219a0d7a8f3fbf46abeafb3e1eb9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4229219a0d7a8f3fbf46abeafb3e1eb9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4229219a0d7a8f3fbf46abeafb3e1eb9,
        type_description_1,
        par_ctx,
        par_A,
        var_B
    );


    // Release cached frame.
    if ( frame_4229219a0d7a8f3fbf46abeafb3e1eb9 == cache_frame_4229219a0d7a8f3fbf46abeafb3e1eb9 )
    {
        Py_DECREF( frame_4229219a0d7a8f3fbf46abeafb3e1eb9 );
    }
    cache_frame_4229219a0d7a8f3fbf46abeafb3e1eb9 = NULL;

    assertFrameObject( frame_4229219a0d7a8f3fbf46abeafb3e1eb9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_B );
    tmp_return_value = var_B;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$matrices$calculus$$$function_4_sinm );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)var_B );
    Py_DECREF( var_B );
    var_B = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

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

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    Py_XDECREF( var_B );
    var_B = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$matrices$calculus$$$function_4_sinm );
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


static PyObject *impl_mpmath$matrices$calculus$$$function_5__sqrtm_rot( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_A = python_pars[ 1 ];
    PyObject *par__may_rotate = python_pars[ 2 ];
    PyObject *var_u = NULL;
    struct Nuitka_FrameObject *frame_faabb48dbc141516a4bf3adcf6077f75;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_faabb48dbc141516a4bf3adcf6077f75 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_faabb48dbc141516a4bf3adcf6077f75, codeobj_faabb48dbc141516a4bf3adcf6077f75, module_mpmath$matrices$calculus, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_faabb48dbc141516a4bf3adcf6077f75 = cache_frame_faabb48dbc141516a4bf3adcf6077f75;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_faabb48dbc141516a4bf3adcf6077f75 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_faabb48dbc141516a4bf3adcf6077f75 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_1 = par_ctx;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_j );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_float_0_3;
        tmp_assign_source_1 = POWER_OPERATION( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_u == NULL );
        var_u = tmp_assign_source_1;
    }
    {
        PyObject *tmp_left_name_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_2 = par_ctx;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sqrtm );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_u );
        tmp_left_name_3 = var_u;
        CHECK_OBJECT( par_A );
        tmp_right_name_2 = par_A;
        tmp_args_element_name_1 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 209;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par__may_rotate );
        tmp_args_element_name_2 = par__may_rotate;
        frame_faabb48dbc141516a4bf3adcf6077f75->m_frame.f_lineno = 209;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_left_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_1 = par_ctx;
        CHECK_OBJECT( var_u );
        tmp_args_element_name_3 = var_u;
        frame_faabb48dbc141516a4bf3adcf6077f75->m_frame.f_lineno = 209;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_right_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_sqrt, call_args );
        }

        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 209;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_DIV( tmp_left_name_2, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_faabb48dbc141516a4bf3adcf6077f75 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_faabb48dbc141516a4bf3adcf6077f75 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_faabb48dbc141516a4bf3adcf6077f75 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_faabb48dbc141516a4bf3adcf6077f75, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_faabb48dbc141516a4bf3adcf6077f75->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_faabb48dbc141516a4bf3adcf6077f75, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_faabb48dbc141516a4bf3adcf6077f75,
        type_description_1,
        par_ctx,
        par_A,
        par__may_rotate,
        var_u
    );


    // Release cached frame.
    if ( frame_faabb48dbc141516a4bf3adcf6077f75 == cache_frame_faabb48dbc141516a4bf3adcf6077f75 )
    {
        Py_DECREF( frame_faabb48dbc141516a4bf3adcf6077f75 );
    }
    cache_frame_faabb48dbc141516a4bf3adcf6077f75 = NULL;

    assertFrameObject( frame_faabb48dbc141516a4bf3adcf6077f75 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$matrices$calculus$$$function_5__sqrtm_rot );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)var_u );
    Py_DECREF( var_u );
    var_u = NULL;

    CHECK_OBJECT( (PyObject *)par__may_rotate );
    Py_DECREF( par__may_rotate );
    par__may_rotate = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

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

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    Py_XDECREF( var_u );
    var_u = NULL;

    CHECK_OBJECT( (PyObject *)par__may_rotate );
    Py_DECREF( par__may_rotate );
    par__may_rotate = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$matrices$calculus$$$function_5__sqrtm_rot );
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


static PyObject *impl_mpmath$matrices$calculus$$$function_6_sqrtm( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_A = python_pars[ 1 ];
    PyObject *par__may_rotate = python_pars[ 2 ];
    PyObject *var_d = NULL;
    PyObject *var_I = NULL;
    PyObject *var_mag2 = NULL;
    PyObject *var_k = NULL;
    PyObject *var_prec = NULL;
    PyObject *var_tol = NULL;
    PyObject *var_Yprev = NULL;
    PyObject *var_Y = NULL;
    PyObject *var_Z = NULL;
    PyObject *var_mag1 = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_c35fd435d91de227abb829a73e0dbd29;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_c35fd435d91de227abb829a73e0dbd29 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c35fd435d91de227abb829a73e0dbd29, codeobj_c35fd435d91de227abb829a73e0dbd29, module_mpmath$matrices$calculus, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c35fd435d91de227abb829a73e0dbd29 = cache_frame_c35fd435d91de227abb829a73e0dbd29;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c35fd435d91de227abb829a73e0dbd29 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c35fd435d91de227abb829a73e0dbd29 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_1 = par_ctx;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        frame_c35fd435d91de227abb829a73e0dbd29->m_frame.f_lineno = 310;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_matrix, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 310;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_A;
            assert( old != NULL );
            par_A = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_A );
        tmp_left_name_1 = par_A;
        tmp_right_name_1 = const_int_0;
        tmp_compexpr_left_1 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_compexpr_right_1 = par_A;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
            type_description_1 = "ooooooooooooo";
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
        CHECK_OBJECT( par_A );
        tmp_return_value = par_A;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_1 = par_ctx;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_prec );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 314;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_prec == NULL );
        var_prec = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( par__may_rotate );
        tmp_truth_name_1 = CHECK_IF_TRUE( par__may_rotate );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "ooooooooooooo";
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_2 = par_ctx;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_2 = par_A;
            frame_c35fd435d91de227abb829a73e0dbd29->m_frame.f_lineno = 316;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_det, call_args );
            }

            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 316;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_d == NULL );
            var_d = tmp_assign_source_3;
        }
        {
            nuitka_bool tmp_condition_result_3;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_name_5;
            tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_abs );
            assert( tmp_called_name_1 != NULL );
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_3 = par_ctx;
            CHECK_OBJECT( var_d );
            tmp_args_element_name_4 = var_d;
            frame_c35fd435d91de227abb829a73e0dbd29->m_frame.f_lineno = 317;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_args_element_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_im, call_args );
            }

            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 317;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_c35fd435d91de227abb829a73e0dbd29->m_frame.f_lineno = 317;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_compexpr_left_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 317;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_2 = const_int_pos_16;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_2 = par_ctx;
            tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_eps );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_2 );

                exception_lineno = 317;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_compexpr_right_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_2 );

                exception_lineno = 317;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 317;
                type_description_1 = "ooooooooooooo";
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
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_4 = par_ctx;
            CHECK_OBJECT( var_d );
            tmp_args_element_name_5 = var_d;
            frame_c35fd435d91de227abb829a73e0dbd29->m_frame.f_lineno = 317;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_compexpr_left_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_re, call_args );
            }

            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 317;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 317;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_3;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_args_element_name_7;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                CHECK_OBJECT( par_ctx );
                tmp_source_name_3 = par_ctx;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__sqrtm_rot );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 318;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_A );
                tmp_args_element_name_6 = par_A;
                CHECK_OBJECT( par__may_rotate );
                tmp_left_name_3 = par__may_rotate;
                tmp_right_name_3 = const_int_pos_1;
                tmp_args_element_name_7 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_3 );
                if ( tmp_args_element_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 318;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_c35fd435d91de227abb829a73e0dbd29->m_frame.f_lineno = 318;
                {
                    PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
                    tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_7 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 318;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_no_3:;
        }
        branch_no_2:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_4 = par_ctx;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_prec );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 320;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_inplace_assign_attr_1__start == NULL );
        tmp_inplace_assign_attr_1__start = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_4 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_4 = const_int_pos_10;
        tmp_assign_source_5 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 320;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        assert( tmp_inplace_assign_attr_1__end == NULL );
        tmp_inplace_assign_attr_1__end = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
        tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
        CHECK_OBJECT( par_ctx );
        tmp_assattr_target_1 = par_ctx;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_prec, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 320;
            type_description_1 = "ooooooooooooo";
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_5;
        PyObject *tmp_source_name_5;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_5 = par_ctx;
        tmp_left_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_eps );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 321;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_5 = const_int_pos_128;
        tmp_assign_source_6 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_5 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 321;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        assert( var_tol == NULL );
        var_tol = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( par_A );
        tmp_assign_source_7 = par_A;
        assert( var_Y == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_Y = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( par_A );
        tmp_left_name_6 = par_A;
        tmp_right_name_6 = const_int_0;
        tmp_assign_source_8 = POWER_OPERATION( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 323;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_assign_unpack_1__assign_source == NULL );
        tmp_assign_unpack_1__assign_source = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
        tmp_assign_source_9 = tmp_assign_unpack_1__assign_source;
        assert( var_Z == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_Z = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
        tmp_assign_source_10 = tmp_assign_unpack_1__assign_source;
        assert( var_I == NULL );
        Py_INCREF( tmp_assign_source_10 );
        var_I = tmp_assign_source_10;
    }
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
    Py_DECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = const_int_0;
        assert( var_k == NULL );
        Py_INCREF( tmp_assign_source_11 );
        var_k = tmp_assign_source_11;
    }
    loop_start_1:;
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( var_Y );
        tmp_assign_source_12 = var_Y;
        {
            PyObject *old = var_Yprev;
            var_Yprev = tmp_assign_source_12;
            Py_INCREF( var_Yprev );
            Py_XDECREF( old );
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_name_9;
        tmp_left_name_7 = const_float_0_5;
        CHECK_OBJECT( var_Y );
        tmp_left_name_8 = var_Y;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_5 = par_ctx;
        CHECK_OBJECT( var_Z );
        tmp_args_element_name_8 = var_Z;
        frame_c35fd435d91de227abb829a73e0dbd29->m_frame.f_lineno = 329;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_right_name_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_inverse, call_args );
        }

        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 329;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_right_name_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 329;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_tuple_element_1 = BINARY_OPERATION_MUL( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 329;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_iter_arg_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_1 );
        tmp_left_name_9 = const_float_0_5;
        CHECK_OBJECT( var_Z );
        tmp_left_name_10 = var_Z;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_6 = par_ctx;
        CHECK_OBJECT( var_Y );
        tmp_args_element_name_9 = var_Y;
        frame_c35fd435d91de227abb829a73e0dbd29->m_frame.f_lineno = 329;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_right_name_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_inverse, call_args );
        }

        if ( tmp_right_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_iter_arg_1 );

            exception_lineno = 329;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_right_name_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
        Py_DECREF( tmp_right_name_10 );
        if ( tmp_right_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_iter_arg_1 );

            exception_lineno = 329;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_tuple_element_1 = BINARY_OPERATION_MUL( tmp_left_name_9, tmp_right_name_9 );
        Py_DECREF( tmp_right_name_9 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_iter_arg_1 );

            exception_lineno = 329;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_1 );
        tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 329;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_13;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT( tmp_unpack_1, 0 );
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 329;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_14;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 329;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_15;
            Py_XDECREF( old );
        }

    }
    goto try_end_3;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_6;
    // End of try:
    try_end_3:;
    goto try_end_4;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_c35fd435d91de227abb829a73e0dbd29 );
    if ( exception_keeper_tb_5 == NULL )
    {
        exception_keeper_tb_5 = MAKE_TRACEBACK( frame_c35fd435d91de227abb829a73e0dbd29, exception_keeper_lineno_5 );
    }
    else if ( exception_keeper_lineno_5 != 0 )
    {
        exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_c35fd435d91de227abb829a73e0dbd29, exception_keeper_lineno_5 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_4 = PyExc_ZeroDivisionError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 330;
            type_description_1 = "ooooooooooooo";
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
            nuitka_bool tmp_condition_result_5;
            int tmp_truth_name_2;
            CHECK_OBJECT( par__may_rotate );
            tmp_truth_name_2 = CHECK_IF_TRUE( par__may_rotate );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 331;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_5 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_16;
                PyObject *tmp_called_name_3;
                PyObject *tmp_source_name_6;
                PyObject *tmp_args_element_name_10;
                PyObject *tmp_args_element_name_11;
                PyObject *tmp_left_name_11;
                PyObject *tmp_right_name_11;
                CHECK_OBJECT( par_ctx );
                tmp_source_name_6 = par_ctx;
                tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__sqrtm_rot );
                if ( tmp_called_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 332;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT( par_A );
                tmp_args_element_name_10 = par_A;
                CHECK_OBJECT( par__may_rotate );
                tmp_left_name_11 = par__may_rotate;
                tmp_right_name_11 = const_int_pos_1;
                tmp_args_element_name_11 = BINARY_OPERATION_SUB( tmp_left_name_11, tmp_right_name_11 );
                if ( tmp_args_element_name_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_3 );

                    exception_lineno = 332;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_2;
                }
                frame_c35fd435d91de227abb829a73e0dbd29->m_frame.f_lineno = 332;
                {
                    PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
                    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_element_name_11 );
                if ( tmp_assign_source_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 332;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = var_Y;
                    assert( old != NULL );
                    var_Y = tmp_assign_source_16;
                    Py_DECREF( old );
                }

            }
            goto loop_end_1;
            goto branch_end_5;
            branch_no_5:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 335;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_c35fd435d91de227abb829a73e0dbd29->m_frame) frame_c35fd435d91de227abb829a73e0dbd29->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
            branch_end_5:;
        }
        goto branch_end_4;
        branch_no_4:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 328;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_c35fd435d91de227abb829a73e0dbd29->m_frame) frame_c35fd435d91de227abb829a73e0dbd29->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
        branch_end_4:;
    }
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_Y;
            assert( old != NULL );
            var_Y = tmp_assign_source_17;
            Py_INCREF( var_Y );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_18 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_Z;
            assert( old != NULL );
            var_Z = tmp_assign_source_18;
            Py_INCREF( var_Z );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_7;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        PyObject *tmp_args_element_name_13;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_7 = par_ctx;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_mnorm );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 336;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_Y );
        tmp_left_name_12 = var_Y;
        CHECK_OBJECT( var_Yprev );
        tmp_right_name_12 = var_Yprev;
        tmp_args_element_name_12 = BINARY_OPERATION_SUB( tmp_left_name_12, tmp_right_name_12 );
        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 336;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_13 = const_str_plain_inf;
        frame_c35fd435d91de227abb829a73e0dbd29->m_frame.f_lineno = 336;
        {
            PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
            tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 336;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_mag1;
            var_mag1 = tmp_assign_source_19;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_7 = par_ctx;
        CHECK_OBJECT( var_Y );
        tmp_args_element_name_14 = var_Y;
        tmp_args_element_name_15 = const_str_plain_inf;
        frame_c35fd435d91de227abb829a73e0dbd29->m_frame.f_lineno = 337;
        {
            PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
            tmp_assign_source_20 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_7, const_str_plain_mnorm, call_args );
        }

        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 337;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_mag2;
            var_mag2 = tmp_assign_source_20;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        CHECK_OBJECT( var_mag1 );
        tmp_compexpr_left_5 = var_mag1;
        CHECK_OBJECT( var_mag2 );
        tmp_left_name_13 = var_mag2;
        CHECK_OBJECT( var_tol );
        tmp_right_name_13 = var_tol;
        tmp_compexpr_right_5 = BINARY_OPERATION_MUL( tmp_left_name_13, tmp_right_name_13 );
        if ( tmp_compexpr_right_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 338;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 338;
            type_description_1 = "ooooooooooooo";
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
        goto loop_end_1;
        branch_no_6:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_3;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        CHECK_OBJECT( par__may_rotate );
        tmp_truth_name_3 = CHECK_IF_TRUE( par__may_rotate );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 340;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
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
        CHECK_OBJECT( var_k );
        tmp_compexpr_left_6 = var_k;
        tmp_compexpr_right_6 = const_int_pos_6;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 340;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
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
        CHECK_OBJECT( var_mag1 );
        tmp_compexpr_left_7 = var_mag1;
        CHECK_OBJECT( var_mag2 );
        tmp_left_name_14 = var_mag2;
        tmp_right_name_14 = const_float_0_001;
        tmp_compexpr_right_7 = BINARY_OPERATION_MUL( tmp_left_name_14, tmp_right_name_14 );
        if ( tmp_compexpr_right_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 340;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        Py_DECREF( tmp_compexpr_right_7 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 340;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 340;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_3 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_2 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_and_right_value_2 = tmp_and_left_value_3;
        and_end_3:;
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
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_8;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_left_name_15;
            PyObject *tmp_right_name_15;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_8 = par_ctx;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__sqrtm_rot );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 341;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_A );
            tmp_args_element_name_16 = par_A;
            CHECK_OBJECT( par__may_rotate );
            tmp_left_name_15 = par__may_rotate;
            tmp_right_name_15 = const_int_pos_1;
            tmp_args_element_name_17 = BINARY_OPERATION_SUB( tmp_left_name_15, tmp_right_name_15 );
            if ( tmp_args_element_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 341;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            frame_c35fd435d91de227abb829a73e0dbd29->m_frame.f_lineno = 341;
            {
                PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_17 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 341;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            goto try_return_handler_2;
        }
        branch_no_7:;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_16;
        CHECK_OBJECT( var_k );
        tmp_left_name_16 = var_k;
        tmp_right_name_16 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_INT_INPLACE( &tmp_left_name_16, tmp_right_name_16 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 342;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_21 = tmp_left_name_16;
        var_k = tmp_assign_source_21;

    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT( var_k );
        tmp_compexpr_left_8 = var_k;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_9 = par_ctx;
        tmp_compexpr_right_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_prec );
        if ( tmp_compexpr_right_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 343;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        Py_DECREF( tmp_compexpr_right_8 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 343;
            type_description_1 = "ooooooooooooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_source_name_10;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_10 = par_ctx;
            tmp_raise_type_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_NoConvergence );
            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 344;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 344;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        branch_no_8:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 326;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_6;
    // Return handler code:
    try_return_handler_2:;
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( var_prec );
        tmp_assattr_name_2 = var_prec;
        CHECK_OBJECT( par_ctx );
        tmp_assattr_target_2 = par_ctx;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_prec, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    goto frame_return_exit_1;
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

    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( var_prec );
        tmp_assattr_name_3 = var_prec;
        CHECK_OBJECT( par_ctx );
        tmp_assattr_target_3 = par_ctx;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_prec, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            Py_DECREF( exception_keeper_type_6 );
            Py_XDECREF( exception_keeper_value_6 );
            Py_XDECREF( exception_keeper_tb_6 );

            exception_lineno = 346;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( var_prec );
        tmp_assattr_name_4 = var_prec;
        CHECK_OBJECT( par_ctx );
        tmp_assattr_target_4 = par_ctx;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_prec, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_left_name_17;
        PyObject *tmp_right_name_17;
        CHECK_OBJECT( var_Y );
        tmp_left_name_17 = var_Y;
        tmp_right_name_17 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_17, tmp_right_name_17 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 347;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = tmp_left_name_17;
        var_Y = tmp_assign_source_22;

    }

#if 1
    RESTORE_FRAME_EXCEPTION( frame_c35fd435d91de227abb829a73e0dbd29 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_c35fd435d91de227abb829a73e0dbd29 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_c35fd435d91de227abb829a73e0dbd29 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c35fd435d91de227abb829a73e0dbd29, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c35fd435d91de227abb829a73e0dbd29->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c35fd435d91de227abb829a73e0dbd29, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c35fd435d91de227abb829a73e0dbd29,
        type_description_1,
        par_ctx,
        par_A,
        par__may_rotate,
        var_d,
        var_I,
        var_mag2,
        var_k,
        var_prec,
        var_tol,
        var_Yprev,
        var_Y,
        var_Z,
        var_mag1
    );


    // Release cached frame.
    if ( frame_c35fd435d91de227abb829a73e0dbd29 == cache_frame_c35fd435d91de227abb829a73e0dbd29 )
    {
        Py_DECREF( frame_c35fd435d91de227abb829a73e0dbd29 );
    }
    cache_frame_c35fd435d91de227abb829a73e0dbd29 = NULL;

    assertFrameObject( frame_c35fd435d91de227abb829a73e0dbd29 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_Y );
    tmp_return_value = var_Y;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$matrices$calculus$$$function_6_sqrtm );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_I );
    var_I = NULL;

    Py_XDECREF( var_mag2 );
    var_mag2 = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    CHECK_OBJECT( (PyObject *)par__may_rotate );
    Py_DECREF( par__may_rotate );
    par__may_rotate = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    Py_XDECREF( var_prec );
    var_prec = NULL;

    Py_XDECREF( var_tol );
    var_tol = NULL;

    Py_XDECREF( var_Yprev );
    var_Yprev = NULL;

    Py_XDECREF( var_Y );
    var_Y = NULL;

    Py_XDECREF( var_Z );
    var_Z = NULL;

    Py_XDECREF( var_mag1 );
    var_mag1 = NULL;

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

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_I );
    var_I = NULL;

    Py_XDECREF( var_mag2 );
    var_mag2 = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    CHECK_OBJECT( (PyObject *)par__may_rotate );
    Py_DECREF( par__may_rotate );
    par__may_rotate = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    Py_XDECREF( var_prec );
    var_prec = NULL;

    Py_XDECREF( var_tol );
    var_tol = NULL;

    Py_XDECREF( var_Yprev );
    var_Yprev = NULL;

    Py_XDECREF( var_Y );
    var_Y = NULL;

    Py_XDECREF( var_Z );
    var_Z = NULL;

    Py_XDECREF( var_mag1 );
    var_mag1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$matrices$calculus$$$function_6_sqrtm );
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


static PyObject *impl_mpmath$matrices$calculus$$$function_7_logm( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_A = python_pars[ 1 ];
    PyObject *var_B = NULL;
    PyObject *var_I = NULL;
    PyObject *var_k = NULL;
    PyObject *var_L = NULL;
    PyObject *var_prec = NULL;
    PyObject *var_n = NULL;
    PyObject *var_T = NULL;
    PyObject *var_tol = NULL;
    PyObject *var_X = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_41b0c3eef80f957ccce318d367f6eb14;
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
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_41b0c3eef80f957ccce318d367f6eb14 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_41b0c3eef80f957ccce318d367f6eb14, codeobj_41b0c3eef80f957ccce318d367f6eb14, module_mpmath$matrices$calculus, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_41b0c3eef80f957ccce318d367f6eb14 = cache_frame_41b0c3eef80f957ccce318d367f6eb14;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_41b0c3eef80f957ccce318d367f6eb14 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_41b0c3eef80f957ccce318d367f6eb14 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_1 = par_ctx;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        frame_41b0c3eef80f957ccce318d367f6eb14->m_frame.f_lineno = 432;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_matrix, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 432;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_A;
            assert( old != NULL );
            par_A = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_1 = par_ctx;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_prec );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 433;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_prec == NULL );
        var_prec = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_2 = par_ctx;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_prec );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 435;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_inplace_assign_attr_1__start == NULL );
        tmp_inplace_assign_attr_1__start = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_1 = const_int_pos_10;
        tmp_assign_source_4 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 435;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        assert( tmp_inplace_assign_attr_1__end == NULL );
        tmp_inplace_assign_attr_1__end = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
        tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
        CHECK_OBJECT( par_ctx );
        tmp_assattr_target_1 = par_ctx;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_prec, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 435;
            type_description_1 = "ooooooooooo";
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_3 = par_ctx;
        tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_eps );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 436;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_2 = const_int_pos_128;
        tmp_assign_source_5 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 436;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        assert( var_tol == NULL );
        var_tol = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( par_A );
        tmp_left_name_3 = par_A;
        tmp_right_name_3 = const_int_0;
        tmp_assign_source_6 = POWER_OPERATION( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 437;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        assert( var_I == NULL );
        var_I = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( par_A );
        tmp_assign_source_7 = par_A;
        assert( var_B == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_B = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = const_int_0;
        assert( var_n == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_n = tmp_assign_source_8;
    }
    loop_start_1:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_2 = par_ctx;
        CHECK_OBJECT( var_B );
        tmp_args_element_name_2 = var_B;
        frame_41b0c3eef80f957ccce318d367f6eb14->m_frame.f_lineno = 441;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_sqrtm, call_args );
        }

        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 441;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_B;
            assert( old != NULL );
            var_B = tmp_assign_source_9;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( var_n );
        tmp_left_name_4 = var_n;
        tmp_right_name_4 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_INT_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 442;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_10 = tmp_left_name_4;
        var_n = tmp_assign_source_10;

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_4 = par_ctx;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_mnorm );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 443;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_B );
        tmp_left_name_5 = var_B;
        CHECK_OBJECT( var_I );
        tmp_right_name_5 = var_I;
        tmp_args_element_name_3 = BINARY_OPERATION_SUB( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 443;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_4 = const_str_plain_inf;
        frame_41b0c3eef80f957ccce318d367f6eb14->m_frame.f_lineno = 443;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 443;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_1 = const_float_0_125;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 443;
            type_description_1 = "ooooooooooo";
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
        goto loop_end_1;
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 440;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( var_B );
        tmp_left_name_6 = var_B;
        CHECK_OBJECT( var_I );
        tmp_right_name_6 = var_I;
        tmp_assign_source_11 = BINARY_OPERATION_SUB( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 445;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_assign_unpack_1__assign_source == NULL );
        tmp_assign_unpack_1__assign_source = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
        tmp_assign_source_12 = tmp_assign_unpack_1__assign_source;
        assert( var_T == NULL );
        Py_INCREF( tmp_assign_source_12 );
        var_T = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
        tmp_assign_source_13 = tmp_assign_unpack_1__assign_source;
        assert( var_X == NULL );
        Py_INCREF( tmp_assign_source_13 );
        var_X = tmp_assign_source_13;
    }
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
    Py_DECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT( var_X );
        tmp_left_name_7 = var_X;
        tmp_right_name_7 = const_int_0;
        tmp_assign_source_14 = BINARY_OPERATION_MUL( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 446;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        assert( var_L == NULL );
        var_L = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = const_int_pos_1;
        assert( var_k == NULL );
        Py_INCREF( tmp_assign_source_15 );
        var_k = tmp_assign_source_15;
    }
    loop_start_2:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_op_bitand_res_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_k );
        tmp_left_name_8 = var_k;
        tmp_right_name_8 = const_int_pos_1;
        tmp_op_bitand_res_1 = BINARY_OPERATION( PyNumber_And, tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_op_bitand_res_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 449;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_op_bitand_res_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_op_bitand_res_1 );

            exception_lineno = 449;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
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
            PyObject *tmp_assign_source_16;
            PyObject *tmp_left_name_9;
            PyObject *tmp_right_name_9;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_10;
            CHECK_OBJECT( var_L );
            tmp_left_name_9 = var_L;
            CHECK_OBJECT( var_T );
            tmp_left_name_10 = var_T;
            CHECK_OBJECT( var_k );
            tmp_right_name_10 = var_k;
            tmp_right_name_9 = BINARY_OPERATION_DIV( tmp_left_name_10, tmp_right_name_10 );
            if ( tmp_right_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 450;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_9, tmp_right_name_9 );
            Py_DECREF( tmp_right_name_9 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 450;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_16 = tmp_left_name_9;
            var_L = tmp_assign_source_16;

        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_left_name_11;
            PyObject *tmp_right_name_11;
            PyObject *tmp_left_name_12;
            PyObject *tmp_right_name_12;
            CHECK_OBJECT( var_L );
            tmp_left_name_11 = var_L;
            CHECK_OBJECT( var_T );
            tmp_left_name_12 = var_T;
            CHECK_OBJECT( var_k );
            tmp_right_name_12 = var_k;
            tmp_right_name_11 = BINARY_OPERATION_DIV( tmp_left_name_12, tmp_right_name_12 );
            if ( tmp_right_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 452;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_11, tmp_right_name_11 );
            Py_DECREF( tmp_right_name_11 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 452;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_17 = tmp_left_name_11;
            var_L = tmp_assign_source_17;

        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        CHECK_OBJECT( var_T );
        tmp_left_name_13 = var_T;
        CHECK_OBJECT( var_X );
        tmp_right_name_13 = var_X;
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_13, tmp_right_name_13 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 453;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_18 = tmp_left_name_13;
        var_T = tmp_assign_source_18;

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_3 = par_ctx;
        CHECK_OBJECT( var_T );
        tmp_args_element_name_5 = var_T;
        tmp_args_element_name_6 = const_str_plain_inf;
        frame_41b0c3eef80f957ccce318d367f6eb14->m_frame.f_lineno = 454;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_compexpr_left_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_mnorm, call_args );
        }

        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 454;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_tol );
        tmp_compexpr_right_2 = var_tol;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 454;
            type_description_1 = "ooooooooooo";
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
        goto loop_end_2;
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        CHECK_OBJECT( var_k );
        tmp_left_name_14 = var_k;
        tmp_right_name_14 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_INT_INPLACE( &tmp_left_name_14, tmp_right_name_14 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 456;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_19 = tmp_left_name_14;
        var_k = tmp_assign_source_19;

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( var_k );
        tmp_compexpr_left_3 = var_k;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_5 = par_ctx;
        tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_prec );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 457;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 457;
            type_description_1 = "ooooooooooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_6 = par_ctx;
            tmp_raise_type_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_NoConvergence );
            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 458;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 458;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        branch_no_4:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 448;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_2;
    loop_end_2:;
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

    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( var_prec );
        tmp_assattr_name_2 = var_prec;
        CHECK_OBJECT( par_ctx );
        tmp_assattr_target_2 = par_ctx;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_prec, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            Py_DECREF( exception_keeper_type_3 );
            Py_XDECREF( exception_keeper_value_3 );
            Py_XDECREF( exception_keeper_tb_3 );

            exception_lineno = 460;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( var_prec );
        tmp_assattr_name_3 = var_prec;
        CHECK_OBJECT( par_ctx );
        tmp_assattr_target_3 = par_ctx;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_prec, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 460;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_15;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_16;
        CHECK_OBJECT( var_L );
        tmp_left_name_15 = var_L;
        tmp_left_name_16 = const_int_pos_2;
        CHECK_OBJECT( var_n );
        tmp_right_name_16 = var_n;
        tmp_right_name_15 = POWER_OPERATION( tmp_left_name_16, tmp_right_name_16 );
        if ( tmp_right_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 461;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_15, tmp_right_name_15 );
        Py_DECREF( tmp_right_name_15 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 461;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = tmp_left_name_15;
        var_L = tmp_assign_source_20;

    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_41b0c3eef80f957ccce318d367f6eb14 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_41b0c3eef80f957ccce318d367f6eb14 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_41b0c3eef80f957ccce318d367f6eb14, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_41b0c3eef80f957ccce318d367f6eb14->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_41b0c3eef80f957ccce318d367f6eb14, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_41b0c3eef80f957ccce318d367f6eb14,
        type_description_1,
        par_ctx,
        par_A,
        var_B,
        var_I,
        var_k,
        var_L,
        var_prec,
        var_n,
        var_T,
        var_tol,
        var_X
    );


    // Release cached frame.
    if ( frame_41b0c3eef80f957ccce318d367f6eb14 == cache_frame_41b0c3eef80f957ccce318d367f6eb14 )
    {
        Py_DECREF( frame_41b0c3eef80f957ccce318d367f6eb14 );
    }
    cache_frame_41b0c3eef80f957ccce318d367f6eb14 = NULL;

    assertFrameObject( frame_41b0c3eef80f957ccce318d367f6eb14 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_L );
    tmp_return_value = var_L;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$matrices$calculus$$$function_7_logm );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)var_B );
    Py_DECREF( var_B );
    var_B = NULL;

    CHECK_OBJECT( (PyObject *)var_I );
    Py_DECREF( var_I );
    var_I = NULL;

    CHECK_OBJECT( (PyObject *)var_k );
    Py_DECREF( var_k );
    var_k = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)var_L );
    Py_DECREF( var_L );
    var_L = NULL;

    CHECK_OBJECT( (PyObject *)var_prec );
    Py_DECREF( var_prec );
    var_prec = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_T );
    Py_DECREF( var_T );
    var_T = NULL;

    CHECK_OBJECT( (PyObject *)var_tol );
    Py_DECREF( var_tol );
    var_tol = NULL;

    CHECK_OBJECT( (PyObject *)var_X );
    Py_DECREF( var_X );
    var_X = NULL;

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

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    Py_XDECREF( var_B );
    var_B = NULL;

    Py_XDECREF( var_I );
    var_I = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    Py_XDECREF( var_L );
    var_L = NULL;

    Py_XDECREF( var_prec );
    var_prec = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_T );
    var_T = NULL;

    Py_XDECREF( var_tol );
    var_tol = NULL;

    Py_XDECREF( var_X );
    var_X = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$matrices$calculus$$$function_7_logm );
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


static PyObject *impl_mpmath$matrices$calculus$$$function_8_powm( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_A = python_pars[ 1 ];
    PyObject *par_r = python_pars[ 2 ];
    PyObject *var_prec = NULL;
    PyObject *var_v = NULL;
    PyObject *var_y = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_8bef95f78f86a97cb5f04ca235b32bfa;
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
    static struct Nuitka_FrameObject *cache_frame_8bef95f78f86a97cb5f04ca235b32bfa = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8bef95f78f86a97cb5f04ca235b32bfa, codeobj_8bef95f78f86a97cb5f04ca235b32bfa, module_mpmath$matrices$calculus, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8bef95f78f86a97cb5f04ca235b32bfa = cache_frame_8bef95f78f86a97cb5f04ca235b32bfa;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8bef95f78f86a97cb5f04ca235b32bfa );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8bef95f78f86a97cb5f04ca235b32bfa ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_1 = par_ctx;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        frame_8bef95f78f86a97cb5f04ca235b32bfa->m_frame.f_lineno = 516;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_matrix, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 516;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_A;
            assert( old != NULL );
            par_A = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_2 = par_ctx;
        CHECK_OBJECT( par_r );
        tmp_args_element_name_2 = par_r;
        frame_8bef95f78f86a97cb5f04ca235b32bfa->m_frame.f_lineno = 517;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_convert, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 517;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_r;
            assert( old != NULL );
            par_r = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_1 = par_ctx;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_prec );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 518;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_prec == NULL );
        var_prec = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_2 = par_ctx;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_prec );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 520;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert( tmp_inplace_assign_attr_1__start == NULL );
        tmp_inplace_assign_attr_1__start = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_1 = const_int_pos_10;
        tmp_assign_source_5 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 520;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        assert( tmp_inplace_assign_attr_1__end == NULL );
        tmp_inplace_assign_attr_1__end = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
        tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
        CHECK_OBJECT( par_ctx );
        tmp_assattr_target_1 = par_ctx;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_prec, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 520;
            type_description_1 = "oooooo";
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_3 = par_ctx;
        CHECK_OBJECT( par_r );
        tmp_args_element_name_3 = par_r;
        frame_8bef95f78f86a97cb5f04ca235b32bfa->m_frame.f_lineno = 521;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_isint, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 521;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 521;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_int_arg_1;
            CHECK_OBJECT( par_A );
            tmp_left_name_2 = par_A;
            CHECK_OBJECT( par_r );
            tmp_int_arg_1 = par_r;
            tmp_right_name_2 = PyNumber_Int( tmp_int_arg_1 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 522;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_6 = POWER_OPERATION( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 522;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            assert( var_v == NULL );
            var_v = tmp_assign_source_6;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            int tmp_truth_name_2;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_3 = par_ctx;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_isint );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 523;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_r );
            tmp_left_name_3 = par_r;
            tmp_right_name_3 = const_int_pos_2;
            tmp_args_element_name_4 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 523;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            frame_8bef95f78f86a97cb5f04ca235b32bfa->m_frame.f_lineno = 523;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 523;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_2 );

                exception_lineno = 523;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_2 );
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
                PyObject *tmp_int_arg_2;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                CHECK_OBJECT( par_r );
                tmp_left_name_4 = par_r;
                tmp_right_name_4 = const_int_pos_2;
                tmp_int_arg_2 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_4 );
                if ( tmp_int_arg_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 524;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                tmp_assign_source_7 = PyNumber_Int( tmp_int_arg_2 );
                Py_DECREF( tmp_int_arg_2 );
                if ( tmp_assign_source_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 524;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                assert( var_y == NULL );
                var_y = tmp_assign_source_7;
            }
            {
                PyObject *tmp_assign_source_8;
                PyObject *tmp_left_name_5;
                PyObject *tmp_called_instance_4;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_right_name_5;
                CHECK_OBJECT( par_ctx );
                tmp_called_instance_4 = par_ctx;
                CHECK_OBJECT( par_A );
                tmp_args_element_name_5 = par_A;
                frame_8bef95f78f86a97cb5f04ca235b32bfa->m_frame.f_lineno = 525;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5 };
                    tmp_left_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_sqrtm, call_args );
                }

                if ( tmp_left_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 525;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT( var_y );
                tmp_right_name_5 = var_y;
                tmp_assign_source_8 = POWER_OPERATION( tmp_left_name_5, tmp_right_name_5 );
                Py_DECREF( tmp_left_name_5 );
                if ( tmp_assign_source_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 525;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                assert( var_v == NULL );
                var_v = tmp_assign_source_8;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_9;
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_4;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_left_name_6;
                PyObject *tmp_right_name_6;
                PyObject *tmp_called_instance_5;
                PyObject *tmp_args_element_name_7;
                CHECK_OBJECT( par_ctx );
                tmp_source_name_4 = par_ctx;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_expm );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 527;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT( par_r );
                tmp_left_name_6 = par_r;
                CHECK_OBJECT( par_ctx );
                tmp_called_instance_5 = par_ctx;
                CHECK_OBJECT( par_A );
                tmp_args_element_name_7 = par_A;
                frame_8bef95f78f86a97cb5f04ca235b32bfa->m_frame.f_lineno = 527;
                {
                    PyObject *call_args[] = { tmp_args_element_name_7 };
                    tmp_right_name_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_logm, call_args );
                }

                if ( tmp_right_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 527;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                tmp_args_element_name_6 = BINARY_OPERATION_MUL( tmp_left_name_6, tmp_right_name_6 );
                Py_DECREF( tmp_right_name_6 );
                if ( tmp_args_element_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 527;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                frame_8bef95f78f86a97cb5f04ca235b32bfa->m_frame.f_lineno = 527;
                {
                    PyObject *call_args[] = { tmp_args_element_name_6 };
                    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_6 );
                if ( tmp_assign_source_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 527;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                assert( var_v == NULL );
                var_v = tmp_assign_source_9;
            }
            branch_end_2:;
        }
        branch_end_1:;
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

    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( var_prec );
        tmp_assattr_name_2 = var_prec;
        CHECK_OBJECT( par_ctx );
        tmp_assattr_target_2 = par_ctx;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_prec, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            Py_DECREF( exception_keeper_type_3 );
            Py_XDECREF( exception_keeper_value_3 );
            Py_XDECREF( exception_keeper_tb_3 );

            exception_lineno = 529;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( var_prec );
        tmp_assattr_name_3 = var_prec;
        CHECK_OBJECT( par_ctx );
        tmp_assattr_target_3 = par_ctx;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_prec, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 529;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        if ( var_v == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "v" );
            exception_tb = NULL;

            exception_lineno = 530;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_7 = var_v;
        tmp_right_name_7 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 530;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = tmp_left_name_7;
        var_v = tmp_assign_source_10;

    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8bef95f78f86a97cb5f04ca235b32bfa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8bef95f78f86a97cb5f04ca235b32bfa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8bef95f78f86a97cb5f04ca235b32bfa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8bef95f78f86a97cb5f04ca235b32bfa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8bef95f78f86a97cb5f04ca235b32bfa, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8bef95f78f86a97cb5f04ca235b32bfa,
        type_description_1,
        par_ctx,
        par_A,
        par_r,
        var_prec,
        var_v,
        var_y
    );


    // Release cached frame.
    if ( frame_8bef95f78f86a97cb5f04ca235b32bfa == cache_frame_8bef95f78f86a97cb5f04ca235b32bfa )
    {
        Py_DECREF( frame_8bef95f78f86a97cb5f04ca235b32bfa );
    }
    cache_frame_8bef95f78f86a97cb5f04ca235b32bfa = NULL;

    assertFrameObject( frame_8bef95f78f86a97cb5f04ca235b32bfa );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_v );
    tmp_return_value = var_v;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$matrices$calculus$$$function_8_powm );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)var_prec );
    Py_DECREF( var_prec );
    var_prec = NULL;

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    CHECK_OBJECT( (PyObject *)var_v );
    Py_DECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

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

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    Py_XDECREF( var_prec );
    var_prec = NULL;

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$matrices$calculus$$$function_8_powm );
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



static PyObject *MAKE_FUNCTION_mpmath$matrices$calculus$$$function_1__exp_pade(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$matrices$calculus$$$function_1__exp_pade,
        const_str_plain__exp_pade,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a0df8e1791d2a56a5e5c9d41bb1b2fcf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$matrices$calculus,
        const_str_digest_294ad75697ad91ca889c338d5cc289f3,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$matrices$calculus$$$function_1__exp_pade$$$function_1_eps_pade(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$matrices$calculus$$$function_1__exp_pade$$$function_1_eps_pade,
        const_str_plain_eps_pade,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_06f4662d4ddeabd97909e0b187a81aa2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$matrices$calculus,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$matrices$calculus$$$function_2_expm( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$matrices$calculus$$$function_2_expm,
        const_str_plain_expm,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bbd6b86fdd883d5392f5a528ae03004b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$matrices$calculus,
        const_str_digest_9f3ad8e5efe87c958ce943d901599f79,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$matrices$calculus$$$function_3_cosm(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$matrices$calculus$$$function_3_cosm,
        const_str_plain_cosm,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_78091d750900afffa9560e52fa6d4fcd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$matrices$calculus,
        const_str_digest_e8747f4674dd7594f0fb789321e0c17e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$matrices$calculus$$$function_4_sinm(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$matrices$calculus$$$function_4_sinm,
        const_str_plain_sinm,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4229219a0d7a8f3fbf46abeafb3e1eb9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$matrices$calculus,
        const_str_digest_e62959889d72da096b01003fac677168,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$matrices$calculus$$$function_5__sqrtm_rot(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$matrices$calculus$$$function_5__sqrtm_rot,
        const_str_plain__sqrtm_rot,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_faabb48dbc141516a4bf3adcf6077f75,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$matrices$calculus,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$matrices$calculus$$$function_6_sqrtm( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$matrices$calculus$$$function_6_sqrtm,
        const_str_plain_sqrtm,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c35fd435d91de227abb829a73e0dbd29,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$matrices$calculus,
        const_str_digest_59f1ba362b95405716bdfca7879d7bf2,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$matrices$calculus$$$function_7_logm(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$matrices$calculus$$$function_7_logm,
        const_str_plain_logm,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_41b0c3eef80f957ccce318d367f6eb14,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$matrices$calculus,
        const_str_digest_c8730964663eb5a9b5b434a94f0583e8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$matrices$calculus$$$function_8_powm(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$matrices$calculus$$$function_8_powm,
        const_str_plain_powm,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8bef95f78f86a97cb5f04ca235b32bfa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$matrices$calculus,
        const_str_digest_2eaa9523a48d03265227daae962586d7,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_mpmath$matrices$calculus =
{
    PyModuleDef_HEAD_INIT,
    "mpmath.matrices.calculus",
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

MOD_INIT_DECL( mpmath$matrices$calculus )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_mpmath$matrices$calculus );
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
    puts("mpmath.matrices.calculus: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("mpmath.matrices.calculus: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("mpmath.matrices.calculus: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initmpmath$matrices$calculus" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_mpmath$matrices$calculus = Py_InitModule4(
        "mpmath.matrices.calculus",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_mpmath$matrices$calculus = PyModule_Create( &mdef_mpmath$matrices$calculus );
#endif

    moduledict_mpmath$matrices$calculus = MODULE_DICT( module_mpmath$matrices$calculus );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_mpmath$matrices$calculus, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_mpmath$matrices$calculus,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_mpmath$matrices$calculus, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_mpmath$matrices$calculus,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_mpmath$matrices$calculus, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_mpmath$matrices$calculus,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_mpmath$matrices$calculus );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_511c5d7b56153601ee4cb64cb854cf63, module_mpmath$matrices$calculus );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_mpmath$matrices$calculus, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_mpmath$matrices$calculus, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_mpmath$matrices$calculus, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_mpmath$matrices$calculus, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_mpmath$matrices$calculus, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_mpmath$matrices$calculus, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_locals_mpmath$matrices$calculus_5_key__exp_pade = NULL;
    PyObject *tmp_locals_mpmath$matrices$calculus_5_key__sqrtm_rot = NULL;
    PyObject *tmp_locals_mpmath$matrices$calculus_5_key_cosm = NULL;
    PyObject *tmp_locals_mpmath$matrices$calculus_5_key_expm = NULL;
    PyObject *tmp_locals_mpmath$matrices$calculus_5_key_logm = NULL;
    PyObject *tmp_locals_mpmath$matrices$calculus_5_key_powm = NULL;
    PyObject *tmp_locals_mpmath$matrices$calculus_5_key_sinm = NULL;
    PyObject *tmp_locals_mpmath$matrices$calculus_5_key_sqrtm = NULL;
    struct Nuitka_FrameObject *frame_8dcd6e162663c3f029e7070a5b94eedd;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_mpmath$matrices$calculus, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_ae1d1af9ce29cba721a67adf0a3afec1;
        UPDATE_STRING_DICT0( moduledict_mpmath$matrices$calculus, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_8dcd6e162663c3f029e7070a5b94eedd = MAKE_MODULE_FRAME( codeobj_8dcd6e162663c3f029e7070a5b94eedd, module_mpmath$matrices$calculus );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_8dcd6e162663c3f029e7070a5b94eedd );
    assert( Py_REFCNT( frame_8dcd6e162663c3f029e7070a5b94eedd ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_2ede97835081434196d0c826ef1e1b08;
        tmp_globals_name_1 = (PyObject *)moduledict_mpmath$matrices$calculus;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_xrange_tuple;
        tmp_level_name_1 = const_int_pos_2;
        frame_8dcd6e162663c3f029e7070a5b94eedd->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_xrange );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$matrices$calculus, (Nuitka_StringObject *)const_str_plain_xrange, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = MAKE_FUNCTION_mpmath$matrices$calculus$$$function_1__exp_pade(  );



            assert( tmp_locals_mpmath$matrices$calculus_5_key__exp_pade == NULL );
            tmp_locals_mpmath$matrices$calculus_5_key__exp_pade = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_str_plain_taylor_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_assign_source_6 = MAKE_FUNCTION_mpmath$matrices$calculus$$$function_2_expm( tmp_defaults_1 );



            assert( tmp_locals_mpmath$matrices$calculus_5_key_expm == NULL );
            tmp_locals_mpmath$matrices$calculus_5_key_expm = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = MAKE_FUNCTION_mpmath$matrices$calculus$$$function_3_cosm(  );



            assert( tmp_locals_mpmath$matrices$calculus_5_key_cosm == NULL );
            tmp_locals_mpmath$matrices$calculus_5_key_cosm = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = MAKE_FUNCTION_mpmath$matrices$calculus$$$function_4_sinm(  );



            assert( tmp_locals_mpmath$matrices$calculus_5_key_sinm == NULL );
            tmp_locals_mpmath$matrices$calculus_5_key_sinm = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = MAKE_FUNCTION_mpmath$matrices$calculus$$$function_5__sqrtm_rot(  );



            assert( tmp_locals_mpmath$matrices$calculus_5_key__sqrtm_rot == NULL );
            tmp_locals_mpmath$matrices$calculus_5_key__sqrtm_rot = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_int_pos_2_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_assign_source_10 = MAKE_FUNCTION_mpmath$matrices$calculus$$$function_6_sqrtm( tmp_defaults_2 );



            assert( tmp_locals_mpmath$matrices$calculus_5_key_sqrtm == NULL );
            tmp_locals_mpmath$matrices$calculus_5_key_sqrtm = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = MAKE_FUNCTION_mpmath$matrices$calculus$$$function_7_logm(  );



            assert( tmp_locals_mpmath$matrices$calculus_5_key_logm == NULL );
            tmp_locals_mpmath$matrices$calculus_5_key_logm = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = MAKE_FUNCTION_mpmath$matrices$calculus$$$function_8_powm(  );



            assert( tmp_locals_mpmath$matrices$calculus_5_key_powm == NULL );
            tmp_locals_mpmath$matrices$calculus_5_key_powm = tmp_assign_source_12;
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
            tmp_dict_value_1 = const_str_digest_511c5d7b56153601ee4cb64cb854cf63;
            tmp_dict_key_1 = const_str_plain___module__;
            tmp_assign_source_4 = _PyDict_NewPresized( 9 );
            tmp_res = PyDict_SetItem( tmp_assign_source_4, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_mpmath$matrices$calculus_5_key__exp_pade );
            tmp_dict_value_2 = tmp_locals_mpmath$matrices$calculus_5_key__exp_pade;
            tmp_dict_key_2 = const_str_plain__exp_pade;
            tmp_res = PyDict_SetItem( tmp_assign_source_4, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_mpmath$matrices$calculus_5_key_expm );
            tmp_dict_value_3 = tmp_locals_mpmath$matrices$calculus_5_key_expm;
            tmp_dict_key_3 = const_str_plain_expm;
            tmp_res = PyDict_SetItem( tmp_assign_source_4, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_mpmath$matrices$calculus_5_key_cosm );
            tmp_dict_value_4 = tmp_locals_mpmath$matrices$calculus_5_key_cosm;
            tmp_dict_key_4 = const_str_plain_cosm;
            tmp_res = PyDict_SetItem( tmp_assign_source_4, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_mpmath$matrices$calculus_5_key_sinm );
            tmp_dict_value_5 = tmp_locals_mpmath$matrices$calculus_5_key_sinm;
            tmp_dict_key_5 = const_str_plain_sinm;
            tmp_res = PyDict_SetItem( tmp_assign_source_4, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_mpmath$matrices$calculus_5_key__sqrtm_rot );
            tmp_dict_value_6 = tmp_locals_mpmath$matrices$calculus_5_key__sqrtm_rot;
            tmp_dict_key_6 = const_str_plain__sqrtm_rot;
            tmp_res = PyDict_SetItem( tmp_assign_source_4, tmp_dict_key_6, tmp_dict_value_6 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_mpmath$matrices$calculus_5_key_sqrtm );
            tmp_dict_value_7 = tmp_locals_mpmath$matrices$calculus_5_key_sqrtm;
            tmp_dict_key_7 = const_str_plain_sqrtm;
            tmp_res = PyDict_SetItem( tmp_assign_source_4, tmp_dict_key_7, tmp_dict_value_7 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_mpmath$matrices$calculus_5_key_logm );
            tmp_dict_value_8 = tmp_locals_mpmath$matrices$calculus_5_key_logm;
            tmp_dict_key_8 = const_str_plain_logm;
            tmp_res = PyDict_SetItem( tmp_assign_source_4, tmp_dict_key_8, tmp_dict_value_8 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_mpmath$matrices$calculus_5_key_powm );
            tmp_dict_value_9 = tmp_locals_mpmath$matrices$calculus_5_key_powm;
            tmp_dict_key_9 = const_str_plain_powm;
            tmp_res = PyDict_SetItem( tmp_assign_source_4, tmp_dict_key_9, tmp_dict_value_9 );
            assert( !(tmp_res != 0) );
            goto try_return_handler_1;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( mpmath$matrices$calculus );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT( (PyObject *)tmp_locals_mpmath$matrices$calculus_5_key__exp_pade );
        Py_DECREF( tmp_locals_mpmath$matrices$calculus_5_key__exp_pade );
        tmp_locals_mpmath$matrices$calculus_5_key__exp_pade = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_mpmath$matrices$calculus_5_key_expm );
        Py_DECREF( tmp_locals_mpmath$matrices$calculus_5_key_expm );
        tmp_locals_mpmath$matrices$calculus_5_key_expm = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_mpmath$matrices$calculus_5_key_cosm );
        Py_DECREF( tmp_locals_mpmath$matrices$calculus_5_key_cosm );
        tmp_locals_mpmath$matrices$calculus_5_key_cosm = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_mpmath$matrices$calculus_5_key_sinm );
        Py_DECREF( tmp_locals_mpmath$matrices$calculus_5_key_sinm );
        tmp_locals_mpmath$matrices$calculus_5_key_sinm = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_mpmath$matrices$calculus_5_key__sqrtm_rot );
        Py_DECREF( tmp_locals_mpmath$matrices$calculus_5_key__sqrtm_rot );
        tmp_locals_mpmath$matrices$calculus_5_key__sqrtm_rot = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_mpmath$matrices$calculus_5_key_sqrtm );
        Py_DECREF( tmp_locals_mpmath$matrices$calculus_5_key_sqrtm );
        tmp_locals_mpmath$matrices$calculus_5_key_sqrtm = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_mpmath$matrices$calculus_5_key_logm );
        Py_DECREF( tmp_locals_mpmath$matrices$calculus_5_key_logm );
        tmp_locals_mpmath$matrices$calculus_5_key_logm = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_mpmath$matrices$calculus_5_key_powm );
        Py_DECREF( tmp_locals_mpmath$matrices$calculus_5_key_powm );
        tmp_locals_mpmath$matrices$calculus_5_key_powm = NULL;

        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( mpmath$matrices$calculus );
        return MOD_RETURN_VALUE( NULL );
        outline_result_1:;
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
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


            exception_lineno = 5;

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
        tmp_assign_source_13 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_13 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_13 );
        condexpr_end_1:;
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = const_str_plain_MatrixCalculusMethods;
        tmp_args_element_name_2 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_8dcd6e162663c3f029e7070a5b94eedd->m_frame.f_lineno = 5;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_14;
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8dcd6e162663c3f029e7070a5b94eedd );
#endif
    popFrameStack();

    assertFrameObject( frame_8dcd6e162663c3f029e7070a5b94eedd );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8dcd6e162663c3f029e7070a5b94eedd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8dcd6e162663c3f029e7070a5b94eedd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8dcd6e162663c3f029e7070a5b94eedd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8dcd6e162663c3f029e7070a5b94eedd, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_assign_source_15 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0( moduledict_mpmath$matrices$calculus, (Nuitka_StringObject *)const_str_plain_MatrixCalculusMethods, tmp_assign_source_15 );
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
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_mpmath$matrices$calculus, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_mpmath$matrices$calculus );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
