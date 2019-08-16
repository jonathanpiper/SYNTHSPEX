/* Generated code for Python module 'mpmath.functions.expintegrals'
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

/* The "_module_mpmath$functions$expintegrals" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_mpmath$functions$expintegrals;
PyDictObject *moduledict_mpmath$functions$expintegrals;

/* The declarations of module constants used, if any. */
extern PyObject *const_complex_0_0__0_5;
extern PyObject *const_str_plain_bad_domain;
static PyObject *const_str_plain_upper_modified;
extern PyObject *const_str_plain_pole;
extern PyObject *const_str_plain_hyp1f2;
extern PyObject *const_str_plain_ei;
extern PyObject *const_str_plain_nan;
extern PyObject *const_str_plain_ln2;
static PyObject *const_str_plain__si_generic;
extern PyObject *const_str_plain_fmul;
extern PyObject *const_str_plain_offset;
extern PyObject *const_str_plain_eps;
static PyObject *const_float_0_813198;
extern PyObject *const_str_plain_expint;
extern PyObject *const_str_plain__im;
extern PyObject *const_str_plain_None;
static PyObject *const_str_plain__erf_complex;
extern PyObject *const_str_plain_mu;
static PyObject *const_tuple_str_plain_ctx_str_plain_z_str_plain_z2_str_plain_v_tuple;
extern PyObject *const_str_plain_T2;
extern PyObject *const_str_plain_ctx;
extern PyObject *const_tuple_int_pos_7_int_pos_4_tuple;
extern PyObject *const_str_plain_ninf;
extern PyObject *const_str_plain_e1;
extern PyObject *const_str_plain_jz;
static PyObject *const_tuple_0ce880323fc56f987ca0bb96874c33ef_tuple;
extern PyObject *const_complex_0_0__1_0;
extern PyObject *const_str_plain_exp;
static PyObject *const_tuple_cb8e16d8c5ec1a09d45f305d26121e62_tuple;
extern PyObject *const_str_plain_nint_distance;
extern PyObject *const_str_plain_fresnelc;
static PyObject *const_complex_m1_0__1_0;
extern PyObject *const_str_plain_one;
extern PyObject *const_str_plain_inf;
static PyObject *const_tuple_b9637c2f025e8923030daad3a6892a36_tuple;
extern PyObject *const_tuple_int_pos_1_false_tuple;
extern PyObject *const_dict_550e1ff28680964f0a1daa61d55eac15;
extern PyObject *const_int_pos_7;
extern PyObject *const_str_plain_ncdf;
static PyObject *const_tuple_0733b6c45345ee7907457ca304a79e98_tuple;
extern PyObject *const_str_plain_npdf;
extern PyObject *const_str_plain_betainc;
extern PyObject *const_str_plain_mult;
extern PyObject *const_str_plain_re;
static PyObject *const_tuple_float__minus_0_5_tuple;
extern PyObject *const_str_plain_mpf;
extern PyObject *const_float__minus_0_25;
extern PyObject *const_list_int_pos_1_list;
extern PyObject *const_str_plain_sign;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_int_neg_1;
static PyObject *const_tuple_3f75cba2b1c1048bb4aa8991eeaa8f7b_tuple;
extern PyObject *const_int_neg_4;
extern PyObject *const_str_plain_prec;
static PyObject *const_str_digest_2e3c4fdd66f6fe1df67f70b28e58a269;
static PyObject *const_str_digest_db4d051d85224eb8d1533d572501fe3f;
static PyObject *const_str_plain_njz;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_isnan;
static PyObject *const_tuple_5e715ae5497fa6e995f02464c23758af_tuple;
extern PyObject *const_str_plain_mag;
extern PyObject *const_int_pos_10;
extern PyObject *const_int_pos_15;
extern PyObject *const_str_plain_hyp1f1;
extern PyObject *const_str_plain__is_real_type;
extern PyObject *const_str_plain_hyperu;
static PyObject *const_str_plain__lower_gamma;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_G;
extern PyObject *const_str_plain_erf;
extern PyObject *const_str_plain_orig;
extern PyObject *const_str_plain_zero;
static PyObject *const_tuple_str_digest_2de530c2fee998aec1202171ca57a4ff_tuple;
extern PyObject *const_str_plain_sigma;
static PyObject *const_tuple_int_0_none_false_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_e188737548f85c41d79331680529a728_tuple;
extern PyObject *const_int_pos_6;
extern PyObject *const_tuple_int_pos_5_int_pos_4_tuple;
extern PyObject *const_int_pos_4;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_1825fc68ee4e2c4b381d3254aada114e_tuple;
static PyObject *const_str_plain_negb;
extern PyObject *const_str_plain_NoConvergence;
extern PyObject *const_str_plain_xre;
extern PyObject *const_str_plain_isint;
extern PyObject *const_str_plain_li;
extern PyObject *const_str_plain_ln;
extern PyObject *const_tuple_str_plain_ctx_str_plain_z_tuple;
extern PyObject *const_int_neg_10;
extern PyObject *const_str_plain_regularized;
extern PyObject *const_str_plain_hypercomb;
static PyObject *const_float_0_53728;
extern PyObject *const_str_plain_isnpint;
static PyObject *const_tuple_a207a414f5e6846342d7187c06469e4f_tuple;
extern PyObject *const_str_plain_z2;
static PyObject *const_str_plain__upper_gamma;
extern PyObject *const_str_plain_beta;
static PyObject *const_tuple_3c17e6c857656cbf81da1e37e251e0aa_tuple;
static PyObject *const_str_plain__ci_generic;
static PyObject *const_tuple_18263b23150953f1ae1bc0f9d8461022_tuple;
extern PyObject *const_str_plain_ci;
static PyObject *const_tuple_e9dd78d8013f04b5d2809573f88e4c4d_tuple;
extern PyObject *const_str_plain_hyp2f1;
extern PyObject *const_str_plain_hyp2f2;
extern PyObject *const_str_plain__e1;
extern PyObject *const_float_0_25;
extern PyObject *const_str_plain_euler;
extern PyObject *const_str_plain_shi;
extern PyObject *const_tuple_str_plain_defun_str_plain_defun_wrapped_tuple;
extern PyObject *const_str_plain_erfi;
extern PyObject *const_float_0_5;
static PyObject *const_complex_m1_0__m1_0;
extern PyObject *const_str_plain_im;
extern PyObject *const_tuple_int_0_int_pos_1_tuple;
extern PyObject *const_str_plain_sqrt;
extern PyObject *const_float_0_9;
extern PyObject *const_str_plain_functions;
static PyObject *const_tuple_fea4a7f72795657b93cc66af03a018c1_tuple;
extern PyObject *const_str_plain_square_exp_arg;
extern PyObject *const_str_plain_real;
static PyObject *const_str_plain__ei_generic;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_d21e2ef918efd29892bd70361ccd40b1_tuple;
extern PyObject *const_str_plain_convert;
extern PyObject *const_list_int_pos_1_int_pos_1_list;
static PyObject *const_str_plain__gamma3;
extern PyObject *const_str_plain_chi;
extern PyObject *const_str_plain_hyper;
extern PyObject *const_int_pos_16;
extern PyObject *const_str_plain_T1;
extern PyObject *const_str_plain__ei;
extern PyObject *const_tuple_int_pos_1_int_pos_4_tuple;
static PyObject *const_tuple_8c1c2d3d365afbbe7d7fb73f1c6bb33e_tuple;
extern PyObject *const_dict_443efe947ecc06c75e237bd79f103c4c;
extern PyObject *const_str_plain_fneg;
extern PyObject *const_str_plain_R;
extern PyObject *const_str_plain_m;
static PyObject *const_str_plain__erfc_complex;
extern PyObject *const_str_plain_h;
extern PyObject *const_tuple_str_plain_ctx_str_plain_n_str_plain_z_tuple;
extern PyObject *const_str_plain_j;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_defun_wrapped;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_b;
static PyObject *const_tuple_int_0_int_pos_1_false_tuple;
extern PyObject *const_int_pos_20;
static PyObject *const_tuple_19e4b5a0fe0a90591f68ce70df5f7ba8_tuple;
static PyObject *const_tuple_b17f88f06cd8f54ae901df06ebc3b0fa_tuple;
extern PyObject *const_str_plain_z;
extern PyObject *const_str_plain_erfinv;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_u;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain_s2;
extern PyObject *const_str_plain_r;
extern PyObject *const_tuple_int_pos_3_int_pos_4_tuple;
extern PyObject *const_str_plain_log;
extern PyObject *const_tuple_int_pos_3_int_pos_2_tuple;
static PyObject *const_str_digest_8341899cc63100d153b360653ca4dffd;
extern PyObject *const_complex_0_0__m0_5;
extern PyObject *const_str_plain_gammainc;
static PyObject *const_str_plain_nega;
extern PyObject *const_str_plain_zreal;
extern PyObject *const_str_plain_erfc;
extern PyObject *const_str_plain_exact;
extern PyObject *const_str_plain__erfc;
static PyObject *const_str_digest_2de530c2fee998aec1202171ca57a4ff;
extern PyObject *const_str_plain__si;
extern PyObject *const_float__minus_0_5;
extern PyObject *const_str_plain__is_complex_type;
extern PyObject *const_str_plain_si;
extern PyObject *const_str_plain_reciprocal;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_nz;
extern PyObject *const_str_plain__expint_int;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_isinf;
extern PyObject *const_str_plain_maxterms;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_fresnels;
extern PyObject *const_str_plain_defun;
extern PyObject *const_str_plain_x1;
extern PyObject *const_str_plain_force_series;
static PyObject *const_str_plain_lower_modified;
extern PyObject *const_str_plain__erf;
extern PyObject *const_str_plain__ci;
static PyObject *const_tuple_str_plain_ctx_str_plain_x_str_plain_mu_str_plain_sigma_tuple;
extern PyObject *const_str_plain_findroot;
extern PyObject *const_str_plain_x2;
extern PyObject *const_tuple_float_0_5_tuple;
static PyObject *const_tuple_str_plain_t_str_plain_x_str_plain_ctx_tuple;
extern PyObject *const_str_plain__gamma_upper_int;
static PyObject *const_tuple_str_plain_ctx_str_plain_z_str_plain_offset_tuple;
extern PyObject *const_str_plain_fdiv;
static PyObject *const_str_plain_nz2;
extern PyObject *const_tuple_int_pos_1_int_pos_2_tuple;
extern PyObject *const_str_plain_imag;
extern PyObject *const_tuple_int_pos_2_tuple;
extern PyObject *const_str_plain_s1;
extern PyObject *const_str_plain__re;
extern PyObject *const_str_plain_zimag;
extern PyObject *const_tuple_false_tuple;
extern PyObject *const_str_plain_gamma;
extern PyObject *const_str_plain_pi;
extern PyObject *const_str_angle_lambda;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_upper_modified = UNSTREAM_STRING( &constant_bin[ 546197 ], 14, 1 );
    const_str_plain__si_generic = UNSTREAM_STRING( &constant_bin[ 546211 ], 11, 1 );
    const_float_0_813198 = UNSTREAM_FLOAT( &constant_bin[ 546222 ] );
    const_str_plain__erf_complex = UNSTREAM_STRING( &constant_bin[ 546230 ], 12, 1 );
    const_tuple_str_plain_ctx_str_plain_z_str_plain_z2_str_plain_v_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ctx_str_plain_z_str_plain_z2_str_plain_v_tuple, 0, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_str_plain_ctx_str_plain_z_str_plain_z2_str_plain_v_tuple, 1, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_str_plain_ctx_str_plain_z_str_plain_z2_str_plain_v_tuple, 2, const_str_plain_z2 ); Py_INCREF( const_str_plain_z2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ctx_str_plain_z_str_plain_z2_str_plain_v_tuple, 3, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    const_tuple_0ce880323fc56f987ca0bb96874c33ef_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_0ce880323fc56f987ca0bb96874c33ef_tuple, 0, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_0ce880323fc56f987ca0bb96874c33ef_tuple, 1, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_0ce880323fc56f987ca0bb96874c33ef_tuple, 2, const_str_plain_G ); Py_INCREF( const_str_plain_G );
    PyTuple_SET_ITEM( const_tuple_0ce880323fc56f987ca0bb96874c33ef_tuple, 3, const_str_plain_T2 ); Py_INCREF( const_str_plain_T2 );
    PyTuple_SET_ITEM( const_tuple_0ce880323fc56f987ca0bb96874c33ef_tuple, 4, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_0ce880323fc56f987ca0bb96874c33ef_tuple, 5, const_str_plain_T1 ); Py_INCREF( const_str_plain_T1 );
    const_str_plain_nega = UNSTREAM_STRING( &constant_bin[ 92022 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_0ce880323fc56f987ca0bb96874c33ef_tuple, 6, const_str_plain_nega ); Py_INCREF( const_str_plain_nega );
    const_tuple_cb8e16d8c5ec1a09d45f305d26121e62_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_cb8e16d8c5ec1a09d45f305d26121e62_tuple, 0, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_cb8e16d8c5ec1a09d45f305d26121e62_tuple, 1, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    const_str_plain_nz = UNSTREAM_STRING( &constant_bin[ 60618 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_cb8e16d8c5ec1a09d45f305d26121e62_tuple, 2, const_str_plain_nz ); Py_INCREF( const_str_plain_nz );
    PyTuple_SET_ITEM( const_tuple_cb8e16d8c5ec1a09d45f305d26121e62_tuple, 3, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_cb8e16d8c5ec1a09d45f305d26121e62_tuple, 4, const_str_plain_zimag ); Py_INCREF( const_str_plain_zimag );
    PyTuple_SET_ITEM( const_tuple_cb8e16d8c5ec1a09d45f305d26121e62_tuple, 5, const_str_plain_zreal ); Py_INCREF( const_str_plain_zreal );
    const_complex_m1_0__1_0 = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 546242 ], 17 );
    const_tuple_b9637c2f025e8923030daad3a6892a36_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_b9637c2f025e8923030daad3a6892a36_tuple, 0, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_b9637c2f025e8923030daad3a6892a36_tuple, 1, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_b9637c2f025e8923030daad3a6892a36_tuple, 2, const_str_plain_mult ); Py_INCREF( const_str_plain_mult );
    PyTuple_SET_ITEM( const_tuple_b9637c2f025e8923030daad3a6892a36_tuple, 3, const_str_plain_reciprocal ); Py_INCREF( const_str_plain_reciprocal );
    PyTuple_SET_ITEM( const_tuple_b9637c2f025e8923030daad3a6892a36_tuple, 4, const_str_plain_prec ); Py_INCREF( const_str_plain_prec );
    PyTuple_SET_ITEM( const_tuple_b9637c2f025e8923030daad3a6892a36_tuple, 5, const_str_plain_z2 ); Py_INCREF( const_str_plain_z2 );
    const_tuple_0733b6c45345ee7907457ca304a79e98_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_0733b6c45345ee7907457ca304a79e98_tuple, 0, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_0733b6c45345ee7907457ca304a79e98_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_0733b6c45345ee7907457ca304a79e98_tuple, 2, const_str_plain_mu ); Py_INCREF( const_str_plain_mu );
    PyTuple_SET_ITEM( const_tuple_0733b6c45345ee7907457ca304a79e98_tuple, 3, const_str_plain_sigma ); Py_INCREF( const_str_plain_sigma );
    PyTuple_SET_ITEM( const_tuple_0733b6c45345ee7907457ca304a79e98_tuple, 4, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    const_tuple_float__minus_0_5_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_float__minus_0_5_tuple, 0, const_float__minus_0_5 ); Py_INCREF( const_float__minus_0_5 );
    const_tuple_3f75cba2b1c1048bb4aa8991eeaa8f7b_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_3f75cba2b1c1048bb4aa8991eeaa8f7b_tuple, 0, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_3f75cba2b1c1048bb4aa8991eeaa8f7b_tuple, 1, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_3f75cba2b1c1048bb4aa8991eeaa8f7b_tuple, 2, const_str_plain_zimag ); Py_INCREF( const_str_plain_zimag );
    PyTuple_SET_ITEM( const_tuple_3f75cba2b1c1048bb4aa8991eeaa8f7b_tuple, 3, const_str_plain_nz ); Py_INCREF( const_str_plain_nz );
    PyTuple_SET_ITEM( const_tuple_3f75cba2b1c1048bb4aa8991eeaa8f7b_tuple, 4, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    const_str_digest_2e3c4fdd66f6fe1df67f70b28e58a269 = UNSTREAM_STRING( &constant_bin[ 546259 ], 38, 0 );
    const_str_digest_db4d051d85224eb8d1533d572501fe3f = UNSTREAM_STRING( &constant_bin[ 546297 ], 71, 0 );
    const_str_plain_njz = UNSTREAM_STRING( &constant_bin[ 546368 ], 3, 1 );
    const_tuple_5e715ae5497fa6e995f02464c23758af_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_5e715ae5497fa6e995f02464c23758af_tuple, 0, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_5e715ae5497fa6e995f02464c23758af_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_5e715ae5497fa6e995f02464c23758af_tuple, 2, const_str_plain_G ); Py_INCREF( const_str_plain_G );
    PyTuple_SET_ITEM( const_tuple_5e715ae5497fa6e995f02464c23758af_tuple, 3, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_5e715ae5497fa6e995f02464c23758af_tuple, 4, const_str_plain_T1 ); Py_INCREF( const_str_plain_T1 );
    const_str_plain_negb = UNSTREAM_STRING( &constant_bin[ 546371 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_5e715ae5497fa6e995f02464c23758af_tuple, 5, const_str_plain_negb ); Py_INCREF( const_str_plain_negb );
    const_str_plain__lower_gamma = UNSTREAM_STRING( &constant_bin[ 546375 ], 12, 1 );
    const_tuple_str_digest_2de530c2fee998aec1202171ca57a4ff_tuple = PyTuple_New( 1 );
    const_str_digest_2de530c2fee998aec1202171ca57a4ff = UNSTREAM_STRING( &constant_bin[ 257038 ], 42, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_2de530c2fee998aec1202171ca57a4ff_tuple, 0, const_str_digest_2de530c2fee998aec1202171ca57a4ff ); Py_INCREF( const_str_digest_2de530c2fee998aec1202171ca57a4ff );
    const_tuple_int_0_none_false_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_int_0_none_false_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_none_false_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_int_0_none_false_tuple, 2, Py_False ); Py_INCREF( Py_False );
    const_tuple_e188737548f85c41d79331680529a728_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_e188737548f85c41d79331680529a728_tuple, 0, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_e188737548f85c41d79331680529a728_tuple, 1, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_e188737548f85c41d79331680529a728_tuple, 2, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_e188737548f85c41d79331680529a728_tuple, 3, const_str_plain_x1 ); Py_INCREF( const_str_plain_x1 );
    PyTuple_SET_ITEM( const_tuple_e188737548f85c41d79331680529a728_tuple, 4, const_str_plain_x2 ); Py_INCREF( const_str_plain_x2 );
    PyTuple_SET_ITEM( const_tuple_e188737548f85c41d79331680529a728_tuple, 5, const_str_plain_regularized ); Py_INCREF( const_str_plain_regularized );
    PyTuple_SET_ITEM( const_tuple_e188737548f85c41d79331680529a728_tuple, 6, const_str_plain_s2 ); Py_INCREF( const_str_plain_s2 );
    PyTuple_SET_ITEM( const_tuple_e188737548f85c41d79331680529a728_tuple, 7, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_e188737548f85c41d79331680529a728_tuple, 8, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_e188737548f85c41d79331680529a728_tuple, 9, const_str_plain_s1 ); Py_INCREF( const_str_plain_s1 );
    PyTuple_SET_ITEM( const_tuple_e188737548f85c41d79331680529a728_tuple, 10, const_str_plain_h ); Py_INCREF( const_str_plain_h );
    PyTuple_SET_ITEM( const_tuple_e188737548f85c41d79331680529a728_tuple, 11, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    const_tuple_1825fc68ee4e2c4b381d3254aada114e_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_1825fc68ee4e2c4b381d3254aada114e_tuple, 0, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_1825fc68ee4e2c4b381d3254aada114e_tuple, 1, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_1825fc68ee4e2c4b381d3254aada114e_tuple, 2, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_1825fc68ee4e2c4b381d3254aada114e_tuple, 3, const_str_plain_regularized ); Py_INCREF( const_str_plain_regularized );
    PyTuple_SET_ITEM( const_tuple_1825fc68ee4e2c4b381d3254aada114e_tuple, 4, const_str_plain_G ); Py_INCREF( const_str_plain_G );
    PyTuple_SET_ITEM( const_tuple_1825fc68ee4e2c4b381d3254aada114e_tuple, 5, const_str_plain_h ); Py_INCREF( const_str_plain_h );
    PyTuple_SET_ITEM( const_tuple_1825fc68ee4e2c4b381d3254aada114e_tuple, 6, const_str_plain_nega ); Py_INCREF( const_str_plain_nega );
    PyTuple_SET_ITEM( const_tuple_1825fc68ee4e2c4b381d3254aada114e_tuple, 7, const_str_plain_orig ); Py_INCREF( const_str_plain_orig );
    const_float_0_53728 = UNSTREAM_FLOAT( &constant_bin[ 546387 ] );
    const_tuple_a207a414f5e6846342d7187c06469e4f_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_a207a414f5e6846342d7187c06469e4f_tuple, 0, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_a207a414f5e6846342d7187c06469e4f_tuple, 1, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    const_str_plain_nz2 = UNSTREAM_STRING( &constant_bin[ 546395 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_a207a414f5e6846342d7187c06469e4f_tuple, 2, const_str_plain_nz2 ); Py_INCREF( const_str_plain_nz2 );
    PyTuple_SET_ITEM( const_tuple_a207a414f5e6846342d7187c06469e4f_tuple, 3, const_str_plain_z2 ); Py_INCREF( const_str_plain_z2 );
    PyTuple_SET_ITEM( const_tuple_a207a414f5e6846342d7187c06469e4f_tuple, 4, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    const_str_plain__upper_gamma = UNSTREAM_STRING( &constant_bin[ 546398 ], 12, 1 );
    const_tuple_3c17e6c857656cbf81da1e37e251e0aa_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_3c17e6c857656cbf81da1e37e251e0aa_tuple, 0, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_3c17e6c857656cbf81da1e37e251e0aa_tuple, 1, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_3c17e6c857656cbf81da1e37e251e0aa_tuple, 2, const_str_plain_jz ); Py_INCREF( const_str_plain_jz );
    PyTuple_SET_ITEM( const_tuple_3c17e6c857656cbf81da1e37e251e0aa_tuple, 3, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_3c17e6c857656cbf81da1e37e251e0aa_tuple, 4, const_str_plain_njz ); Py_INCREF( const_str_plain_njz );
    PyTuple_SET_ITEM( const_tuple_3c17e6c857656cbf81da1e37e251e0aa_tuple, 5, const_str_plain_zreal ); Py_INCREF( const_str_plain_zreal );
    const_str_plain__ci_generic = UNSTREAM_STRING( &constant_bin[ 546410 ], 11, 1 );
    const_tuple_18263b23150953f1ae1bc0f9d8461022_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_18263b23150953f1ae1bc0f9d8461022_tuple, 0, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_18263b23150953f1ae1bc0f9d8461022_tuple, 1, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_18263b23150953f1ae1bc0f9d8461022_tuple, 2, const_str_plain_zimag ); Py_INCREF( const_str_plain_zimag );
    PyTuple_SET_ITEM( const_tuple_18263b23150953f1ae1bc0f9d8461022_tuple, 3, const_str_plain_jz ); Py_INCREF( const_str_plain_jz );
    PyTuple_SET_ITEM( const_tuple_18263b23150953f1ae1bc0f9d8461022_tuple, 4, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_18263b23150953f1ae1bc0f9d8461022_tuple, 5, const_str_plain_njz ); Py_INCREF( const_str_plain_njz );
    PyTuple_SET_ITEM( const_tuple_18263b23150953f1ae1bc0f9d8461022_tuple, 6, const_str_plain_zreal ); Py_INCREF( const_str_plain_zreal );
    const_tuple_e9dd78d8013f04b5d2809573f88e4c4d_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_e9dd78d8013f04b5d2809573f88e4c4d_tuple, 0, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_e9dd78d8013f04b5d2809573f88e4c4d_tuple, 1, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_e9dd78d8013f04b5d2809573f88e4c4d_tuple, 2, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_e9dd78d8013f04b5d2809573f88e4c4d_tuple, 3, const_str_plain_regularized ); Py_INCREF( const_str_plain_regularized );
    PyTuple_SET_ITEM( const_tuple_e9dd78d8013f04b5d2809573f88e4c4d_tuple, 4, const_str_plain_G ); Py_INCREF( const_str_plain_G );
    PyTuple_SET_ITEM( const_tuple_e9dd78d8013f04b5d2809573f88e4c4d_tuple, 5, const_str_plain_h ); Py_INCREF( const_str_plain_h );
    PyTuple_SET_ITEM( const_tuple_e9dd78d8013f04b5d2809573f88e4c4d_tuple, 6, const_str_plain_negb ); Py_INCREF( const_str_plain_negb );
    const_complex_m1_0__m1_0 = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 546421 ], 17 );
    const_tuple_fea4a7f72795657b93cc66af03a018c1_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_fea4a7f72795657b93cc66af03a018c1_tuple, 0, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_fea4a7f72795657b93cc66af03a018c1_tuple, 1, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_fea4a7f72795657b93cc66af03a018c1_tuple, 2, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_fea4a7f72795657b93cc66af03a018c1_tuple, 3, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_fea4a7f72795657b93cc66af03a018c1_tuple, 4, const_str_plain_regularized ); Py_INCREF( const_str_plain_regularized );
    PyTuple_SET_ITEM( const_tuple_fea4a7f72795657b93cc66af03a018c1_tuple, 5, const_str_plain_T2 ); Py_INCREF( const_str_plain_T2 );
    PyTuple_SET_ITEM( const_tuple_fea4a7f72795657b93cc66af03a018c1_tuple, 6, const_str_plain_T1 ); Py_INCREF( const_str_plain_T1 );
    PyTuple_SET_ITEM( const_tuple_fea4a7f72795657b93cc66af03a018c1_tuple, 7, const_str_plain_pole ); Py_INCREF( const_str_plain_pole );
    PyTuple_SET_ITEM( const_tuple_fea4a7f72795657b93cc66af03a018c1_tuple, 8, const_str_plain_R ); Py_INCREF( const_str_plain_R );
    const_str_plain__ei_generic = UNSTREAM_STRING( &constant_bin[ 546438 ], 11, 1 );
    const_tuple_d21e2ef918efd29892bd70361ccd40b1_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_d21e2ef918efd29892bd70361ccd40b1_tuple, 0, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_d21e2ef918efd29892bd70361ccd40b1_tuple, 1, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_d21e2ef918efd29892bd70361ccd40b1_tuple, 2, const_str_plain_im ); Py_INCREF( const_str_plain_im );
    PyTuple_SET_ITEM( const_tuple_d21e2ef918efd29892bd70361ccd40b1_tuple, 3, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_d21e2ef918efd29892bd70361ccd40b1_tuple, 4, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    const_str_plain__gamma3 = UNSTREAM_STRING( &constant_bin[ 546449 ], 7, 1 );
    const_tuple_8c1c2d3d365afbbe7d7fb73f1c6bb33e_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_8c1c2d3d365afbbe7d7fb73f1c6bb33e_tuple, 0, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_8c1c2d3d365afbbe7d7fb73f1c6bb33e_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_8c1c2d3d365afbbe7d7fb73f1c6bb33e_tuple, 2, const_str_plain_xre ); Py_INCREF( const_str_plain_xre );
    PyTuple_SET_ITEM( const_tuple_8c1c2d3d365afbbe7d7fb73f1c6bb33e_tuple, 3, const_str_plain_u ); Py_INCREF( const_str_plain_u );
    PyTuple_SET_ITEM( const_tuple_8c1c2d3d365afbbe7d7fb73f1c6bb33e_tuple, 4, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    const_str_plain__erfc_complex = UNSTREAM_STRING( &constant_bin[ 546456 ], 13, 1 );
    const_tuple_int_0_int_pos_1_false_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_pos_1_false_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_pos_1_false_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_pos_1_false_tuple, 2, Py_False ); Py_INCREF( Py_False );
    const_tuple_19e4b5a0fe0a90591f68ce70df5f7ba8_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_19e4b5a0fe0a90591f68ce70df5f7ba8_tuple, 0, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_19e4b5a0fe0a90591f68ce70df5f7ba8_tuple, 1, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_19e4b5a0fe0a90591f68ce70df5f7ba8_tuple, 2, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_19e4b5a0fe0a90591f68ce70df5f7ba8_tuple, 3, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_19e4b5a0fe0a90591f68ce70df5f7ba8_tuple, 4, const_str_plain_regularized ); Py_INCREF( const_str_plain_regularized );
    const_str_plain_lower_modified = UNSTREAM_STRING( &constant_bin[ 546469 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_19e4b5a0fe0a90591f68ce70df5f7ba8_tuple, 5, const_str_plain_lower_modified ); Py_INCREF( const_str_plain_lower_modified );
    PyTuple_SET_ITEM( const_tuple_19e4b5a0fe0a90591f68ce70df5f7ba8_tuple, 6, const_str_plain_upper_modified ); Py_INCREF( const_str_plain_upper_modified );
    const_tuple_b17f88f06cd8f54ae901df06ebc3b0fa_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_b17f88f06cd8f54ae901df06ebc3b0fa_tuple, 0, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_b17f88f06cd8f54ae901df06ebc3b0fa_tuple, 1, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_b17f88f06cd8f54ae901df06ebc3b0fa_tuple, 2, const_str_plain_G ); Py_INCREF( const_str_plain_G );
    PyTuple_SET_ITEM( const_tuple_b17f88f06cd8f54ae901df06ebc3b0fa_tuple, 3, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_b17f88f06cd8f54ae901df06ebc3b0fa_tuple, 4, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_b17f88f06cd8f54ae901df06ebc3b0fa_tuple, 5, const_str_plain_nega ); Py_INCREF( const_str_plain_nega );
    const_str_digest_8341899cc63100d153b360653ca4dffd = UNSTREAM_STRING( &constant_bin[ 546267 ], 29, 0 );
    const_tuple_str_plain_ctx_str_plain_x_str_plain_mu_str_plain_sigma_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ctx_str_plain_x_str_plain_mu_str_plain_sigma_tuple, 0, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_str_plain_ctx_str_plain_x_str_plain_mu_str_plain_sigma_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_ctx_str_plain_x_str_plain_mu_str_plain_sigma_tuple, 2, const_str_plain_mu ); Py_INCREF( const_str_plain_mu );
    PyTuple_SET_ITEM( const_tuple_str_plain_ctx_str_plain_x_str_plain_mu_str_plain_sigma_tuple, 3, const_str_plain_sigma ); Py_INCREF( const_str_plain_sigma );
    const_tuple_str_plain_t_str_plain_x_str_plain_ctx_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_x_str_plain_ctx_tuple, 0, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_x_str_plain_ctx_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_x_str_plain_ctx_tuple, 2, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    const_tuple_str_plain_ctx_str_plain_z_str_plain_offset_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ctx_str_plain_z_str_plain_offset_tuple, 0, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_str_plain_ctx_str_plain_z_str_plain_offset_tuple, 1, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_str_plain_ctx_str_plain_z_str_plain_offset_tuple, 2, const_str_plain_offset ); Py_INCREF( const_str_plain_offset );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_mpmath$functions$expintegrals( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_9606ad0eadaa4a285dfa0f9305dbed74;
static PyCodeObject *codeobj_06d36594229935102a097b7c7faa5346;
static PyCodeObject *codeobj_125ab5d26887891ea5c067306b26268a;
static PyCodeObject *codeobj_c5ab4a9600cd330dea24453251ed7d8f;
static PyCodeObject *codeobj_e37886ee17fed9a5cc0c0e402c43a577;
static PyCodeObject *codeobj_488351ea5a36efb9cda852ed175f1c4b;
static PyCodeObject *codeobj_46711f24c7a6d66607db5d57710fa037;
static PyCodeObject *codeobj_980e35055d58d0fe0d5a7a367140b75d;
static PyCodeObject *codeobj_990f8fc199cc774a6bbbb03e8291b40d;
static PyCodeObject *codeobj_cb4229f991058b0b9c2f86b71795eb5d;
static PyCodeObject *codeobj_c74430419e29b69e44b4e0ba56a3bf40;
static PyCodeObject *codeobj_be286ab1ed262d5eb5b8faced6390893;
static PyCodeObject *codeobj_0319ecb468246e8e2fbc628ffc184288;
static PyCodeObject *codeobj_dae9bfc2ca3ee8fb412d71d4e7c6acc0;
static PyCodeObject *codeobj_7d2ee6a9722a81c009ccdb402015fb08;
static PyCodeObject *codeobj_d822bf3fbb04bcd3a52f3ccdd744c293;
static PyCodeObject *codeobj_62ffe41ef4fc586b20a5844171116da3;
static PyCodeObject *codeobj_a16fb580e3854d95d5925bf5ee9236ad;
static PyCodeObject *codeobj_e0a5b88f13387d42cb1ddc3a970c6d1c;
static PyCodeObject *codeobj_a287025019639a9c5bb7e2b497394dcb;
static PyCodeObject *codeobj_ade278d4b58a3f0c1806ec8882e2f6e5;
static PyCodeObject *codeobj_c036c8d94b447bab72251732bc63a399;
static PyCodeObject *codeobj_82f330fe39d230cc02ec5c60221e2859;
static PyCodeObject *codeobj_3b8b4ae7817486bbfbb49d6a82c4e6c8;
static PyCodeObject *codeobj_b4c7b2142e65e9ba7b1b0f4f502b94dc;
static PyCodeObject *codeobj_68a4c17ae080fa6fa20d9389a89d2b1f;
static PyCodeObject *codeobj_1abed403ae0025d9738bf5a035bbb4c8;
static PyCodeObject *codeobj_b139de8956e5282e0ecbd44ef1175d4d;
static PyCodeObject *codeobj_82b7d31a509b08b331f051cb5f9a48c1;
static PyCodeObject *codeobj_d9a385b3776b39e026de6ac09af8b77a;
static PyCodeObject *codeobj_1dbef96ddd015c4b50ed3b2510561b4f;
static PyCodeObject *codeobj_c6a58f317ba230d241557e77cab243a1;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_db4d051d85224eb8d1533d572501fe3f;
    codeobj_9606ad0eadaa4a285dfa0f9305dbed74 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 93, const_tuple_str_plain_t_str_plain_x_str_plain_ctx_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_06d36594229935102a097b7c7faa5346 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_2e3c4fdd66f6fe1df67f70b28e58a269, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_125ab5d26887891ea5c067306b26268a = MAKE_CODEOBJ( module_filename_obj, const_str_plain__ci_generic, 336, const_tuple_18263b23150953f1ae1bc0f9d8461022_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c5ab4a9600cd330dea24453251ed7d8f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__ei_generic, 294, const_tuple_d21e2ef918efd29892bd70361ccd40b1_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e37886ee17fed9a5cc0c0e402c43a577 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__erf_complex, 3, const_tuple_str_plain_ctx_str_plain_z_str_plain_z2_str_plain_v_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_488351ea5a36efb9cda852ed175f1c4b = MAKE_CODEOBJ( module_filename_obj, const_str_plain__erfc_complex, 12, const_tuple_a207a414f5e6846342d7187c06469e4f_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_46711f24c7a6d66607db5d57710fa037 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__gamma3, 225, const_tuple_fea4a7f72795657b93cc66af03a018c1_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_980e35055d58d0fe0d5a7a367140b75d = MAKE_CODEOBJ( module_filename_obj, const_str_plain__lower_gamma, 174, const_tuple_e9dd78d8013f04b5d2809573f88e4c4d_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_990f8fc199cc774a6bbbb03e8291b40d = MAKE_CODEOBJ( module_filename_obj, const_str_plain__si_generic, 363, const_tuple_3c17e6c857656cbf81da1e37e251e0aa_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cb4229f991058b0b9c2f86b71795eb5d = MAKE_CODEOBJ( module_filename_obj, const_str_plain__upper_gamma, 186, const_tuple_1825fc68ee4e2c4b381d3254aada114e_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c74430419e29b69e44b4e0ba56a3bf40 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_betainc, 108, const_tuple_e188737548f85c41d79331680529a728_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_be286ab1ed262d5eb5b8faced6390893 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_chi, 384, const_tuple_cb8e16d8c5ec1a09d45f305d26121e62_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0319ecb468246e8e2fbc628ffc184288 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ci, 329, const_tuple_str_plain_ctx_str_plain_z_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_dae9bfc2ca3ee8fb412d71d4e7c6acc0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_e1, 322, const_tuple_str_plain_ctx_str_plain_z_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7d2ee6a9722a81c009ccdb402015fb08 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ei, 287, const_tuple_str_plain_ctx_str_plain_z_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d822bf3fbb04bcd3a52f3ccdd744c293 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_erf, 24, const_tuple_str_plain_ctx_str_plain_z_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_62ffe41ef4fc586b20a5844171116da3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_erfc, 39, const_tuple_str_plain_ctx_str_plain_z_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a16fb580e3854d95d5925bf5ee9236ad = MAKE_CODEOBJ( module_filename_obj, const_str_plain_erfi, 66, const_tuple_str_plain_ctx_str_plain_z_str_plain_z2_str_plain_v_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e0a5b88f13387d42cb1ddc3a970c6d1c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_erfinv, 76, const_tuple_8c1c2d3d365afbbe7d7fb73f1c6bb33e_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a287025019639a9c5bb7e2b497394dcb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_expint, 251, const_tuple_str_plain_ctx_str_plain_n_str_plain_z_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ade278d4b58a3f0c1806ec8882e2f6e5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fresnelc, 419, const_tuple_str_plain_ctx_str_plain_z_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c036c8d94b447bab72251732bc63a399 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fresnels, 411, const_tuple_str_plain_ctx_str_plain_z_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_82f330fe39d230cc02ec5c60221e2859 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_gammainc, 133, const_tuple_19e4b5a0fe0a90591f68ce70df5f7ba8_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3b8b4ae7817486bbfbb49d6a82c4e6c8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_h, 181, const_tuple_5e715ae5497fa6e995f02464c23758af_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_b4c7b2142e65e9ba7b1b0f4f502b94dc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_h, 214, const_tuple_b17f88f06cd8f54ae901df06ebc3b0fa_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_68a4c17ae080fa6fa20d9389a89d2b1f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_h, 219, const_tuple_0ce880323fc56f987ca0bb96874c33ef_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_1abed403ae0025d9738bf5a035bbb4c8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_li, 275, const_tuple_str_plain_ctx_str_plain_z_str_plain_offset_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b139de8956e5282e0ecbd44ef1175d4d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ncdf, 100, const_tuple_0733b6c45345ee7907457ca304a79e98_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_82b7d31a509b08b331f051cb5f9a48c1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_npdf, 95, const_tuple_str_plain_ctx_str_plain_x_str_plain_mu_str_plain_sigma_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d9a385b3776b39e026de6ac09af8b77a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_shi, 398, const_tuple_3f75cba2b1c1048bb4aa8991eeaa8f7b_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1dbef96ddd015c4b50ed3b2510561b4f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_si, 356, const_tuple_str_plain_ctx_str_plain_z_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c6a58f317ba230d241557e77cab243a1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_square_exp_arg, 54, const_tuple_b9637c2f025e8923030daad3a6892a36_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_10_betainc( PyObject *defaults );


static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_11_gammainc( PyObject *defaults );


static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_12__lower_gamma( PyObject *defaults );


static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_12__lower_gamma$$$function_1_h(  );


static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_13__upper_gamma( PyObject *defaults );


static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_13__upper_gamma$$$function_1_h(  );


static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_13__upper_gamma$$$function_2_h(  );


static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_14__gamma3( PyObject *defaults );


static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_15_expint(  );


static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_16_li( PyObject *defaults );


static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_17_ei(  );


static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_18__ei_generic(  );


static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_19_e1(  );


static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_1__erf_complex(  );


static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_20_ci(  );


static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_21__ci_generic(  );


static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_22_si(  );


static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_23__si_generic(  );


static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_24_chi(  );


static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_25_shi(  );


static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_26_fresnels(  );


static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_27_fresnelc(  );


static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_2__erfc_complex(  );


static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_3_erf(  );


static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_4_erfc(  );


static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_5_square_exp_arg( PyObject *defaults );


static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_6_erfi(  );


static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_7_erfinv(  );


static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_7_erfinv$$$function_1_lambda(  );


static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_8_npdf( PyObject *defaults );


static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_9_ncdf( PyObject *defaults );


// The module function definitions.
static PyObject *impl_mpmath$functions$expintegrals$$$function_1__erf_complex( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    PyObject *var_z2 = NULL;
    PyObject *var_v = NULL;
    struct Nuitka_FrameObject *frame_e37886ee17fed9a5cc0c0e402c43a577;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_e37886ee17fed9a5cc0c0e402c43a577 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e37886ee17fed9a5cc0c0e402c43a577, codeobj_e37886ee17fed9a5cc0c0e402c43a577, module_mpmath$functions$expintegrals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e37886ee17fed9a5cc0c0e402c43a577 = cache_frame_e37886ee17fed9a5cc0c0e402c43a577;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e37886ee17fed9a5cc0c0e402c43a577 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e37886ee17fed9a5cc0c0e402c43a577 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_1 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_1 = par_z;
        tmp_args_element_name_2 = const_int_neg_1;
        frame_e37886ee17fed9a5cc0c0e402c43a577->m_frame.f_lineno = 5;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_square_exp_arg, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_z2 == NULL );
        var_z2 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_left_name_3 = const_int_pos_2;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_1 = par_ctx;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sqrt );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ctx );
        tmp_source_name_2 = par_ctx;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_pi );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 7;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_e37886ee17fed9a5cc0c0e402c43a577->m_frame.f_lineno = 7;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = BINARY_OPERATION_DIV( tmp_left_name_3, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_z );
        tmp_right_name_2 = par_z;
        tmp_left_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_2 = par_ctx;
        tmp_args_element_name_4 = const_tuple_int_pos_1_int_pos_2_tuple;
        tmp_args_element_name_5 = const_tuple_int_pos_3_int_pos_2_tuple;
        CHECK_OBJECT( var_z2 );
        tmp_args_element_name_6 = var_z2;
        frame_e37886ee17fed9a5cc0c0e402c43a577->m_frame.f_lineno = 7;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_right_name_3 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_2, const_str_plain_hyp1f1, call_args );
        }

        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 7;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_v == NULL );
        var_v = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_3 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_7 = par_z;
        frame_e37886ee17fed9a5cc0c0e402c43a577->m_frame.f_lineno = 8;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_operand_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain__re, call_args );
        }

        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;
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
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_right_name_4;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_4 = par_ctx;
            CHECK_OBJECT( var_v );
            tmp_args_element_name_8 = var_v;
            frame_e37886ee17fed9a5cc0c0e402c43a577->m_frame.f_lineno = 9;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_left_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain__im, call_args );
            }

            if ( tmp_left_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 9;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_ctx );
            tmp_source_name_3 = par_ctx;
            tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_j );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_4 );

                exception_lineno = 9;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 9;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_v;
                assert( old != NULL );
                var_v = tmp_assign_source_3;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e37886ee17fed9a5cc0c0e402c43a577 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e37886ee17fed9a5cc0c0e402c43a577 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e37886ee17fed9a5cc0c0e402c43a577, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e37886ee17fed9a5cc0c0e402c43a577->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e37886ee17fed9a5cc0c0e402c43a577, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e37886ee17fed9a5cc0c0e402c43a577,
        type_description_1,
        par_ctx,
        par_z,
        var_z2,
        var_v
    );


    // Release cached frame.
    if ( frame_e37886ee17fed9a5cc0c0e402c43a577 == cache_frame_e37886ee17fed9a5cc0c0e402c43a577 )
    {
        Py_DECREF( frame_e37886ee17fed9a5cc0c0e402c43a577 );
    }
    cache_frame_e37886ee17fed9a5cc0c0e402c43a577 = NULL;

    assertFrameObject( frame_e37886ee17fed9a5cc0c0e402c43a577 );

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
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_1__erf_complex );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)var_z2 );
    Py_DECREF( var_z2 );
    var_z2 = NULL;

    CHECK_OBJECT( (PyObject *)var_v );
    Py_DECREF( var_v );
    var_v = NULL;

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

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    Py_XDECREF( var_z2 );
    var_z2 = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_1__erf_complex );
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


static PyObject *impl_mpmath$functions$expintegrals$$$function_2__erfc_complex( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    PyObject *var_nz2 = NULL;
    PyObject *var_z2 = NULL;
    PyObject *var_v = NULL;
    struct Nuitka_FrameObject *frame_488351ea5a36efb9cda852ed175f1c4b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_488351ea5a36efb9cda852ed175f1c4b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_488351ea5a36efb9cda852ed175f1c4b, codeobj_488351ea5a36efb9cda852ed175f1c4b, module_mpmath$functions$expintegrals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_488351ea5a36efb9cda852ed175f1c4b = cache_frame_488351ea5a36efb9cda852ed175f1c4b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_488351ea5a36efb9cda852ed175f1c4b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_488351ea5a36efb9cda852ed175f1c4b ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_1 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_1 = par_z;
        frame_488351ea5a36efb9cda852ed175f1c4b->m_frame.f_lineno = 14;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_compexpr_left_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_re, call_args );
        }

        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_2 = par_ctx;
            CHECK_OBJECT( par_z );
            tmp_args_element_name_2 = par_z;
            frame_488351ea5a36efb9cda852ed175f1c4b->m_frame.f_lineno = 15;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_square_exp_arg, call_args );
            }

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 15;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_z2 == NULL );
            var_z2 = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_1 = par_ctx;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_fneg );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 16;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_z2 );
            tmp_tuple_element_1 = var_z2;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_550e1ff28680964f0a1daa61d55eac15 );
            frame_488351ea5a36efb9cda852ed175f1c4b->m_frame.f_lineno = 16;
            tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 16;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_nz2 == NULL );
            var_nz2 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_right_name_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_3;
            PyObject *tmp_right_name_2;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_args_element_name_7;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_3 = par_ctx;
            CHECK_OBJECT( var_nz2 );
            tmp_args_element_name_3 = var_nz2;
            frame_488351ea5a36efb9cda852ed175f1c4b->m_frame.f_lineno = 17;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_left_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_exp, call_args );
            }

            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 17;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_ctx );
            tmp_source_name_2 = par_ctx;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sqrt );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_2 );

                exception_lineno = 17;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_ctx );
            tmp_source_name_3 = par_ctx;
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_pi );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_2 );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 17;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            frame_488351ea5a36efb9cda852ed175f1c4b->m_frame.f_lineno = 17;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_2 );

                exception_lineno = 17;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = BINARY_OPERATION_DIV( tmp_left_name_2, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_2 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 17;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_4 = par_ctx;
            tmp_args_element_name_5 = const_tuple_int_pos_1_int_pos_2_tuple;
            tmp_args_element_name_6 = const_tuple_int_pos_1_int_pos_2_tuple;
            CHECK_OBJECT( var_z2 );
            tmp_args_element_name_7 = var_z2;
            frame_488351ea5a36efb9cda852ed175f1c4b->m_frame.f_lineno = 17;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
                tmp_right_name_2 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_4, const_str_plain_hyperu, call_args );
            }

            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 17;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 17;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_v == NULL );
            var_v = tmp_assign_source_3;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_name_8;
            tmp_left_name_3 = const_int_pos_1;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_5 = par_ctx;
            CHECK_OBJECT( par_z );
            tmp_args_element_name_8 = par_z;
            frame_488351ea5a36efb9cda852ed175f1c4b->m_frame.f_lineno = 19;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_right_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain__erf_complex, call_args );
            }

            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 19;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_4 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 19;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_v == NULL );
            var_v = tmp_assign_source_4;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_6 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_9 = par_z;
        frame_488351ea5a36efb9cda852ed175f1c4b->m_frame.f_lineno = 20;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_operand_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain__re, call_args );
        }

        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;
            type_description_1 = "ooooo";
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
            PyObject *tmp_assign_source_5;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_left_name_5;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_right_name_5;
            PyObject *tmp_source_name_4;
            tmp_left_name_4 = const_int_pos_1;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_7 = par_ctx;
            CHECK_OBJECT( var_v );
            tmp_args_element_name_10 = var_v;
            frame_488351ea5a36efb9cda852ed175f1c4b->m_frame.f_lineno = 21;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_left_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain__im, call_args );
            }

            if ( tmp_left_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 21;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_ctx );
            tmp_source_name_4 = par_ctx;
            tmp_right_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_j );
            if ( tmp_right_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_5 );

                exception_lineno = 21;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_4 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_5 );
            Py_DECREF( tmp_left_name_5 );
            Py_DECREF( tmp_right_name_5 );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 21;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_5 = BINARY_OPERATION_ADD_INT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 21;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_v;
                assert( old != NULL );
                var_v = tmp_assign_source_5;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    if ( var_v == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "v" );
        exception_tb = NULL;

        exception_lineno = 22;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_v;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_488351ea5a36efb9cda852ed175f1c4b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_488351ea5a36efb9cda852ed175f1c4b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_488351ea5a36efb9cda852ed175f1c4b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_488351ea5a36efb9cda852ed175f1c4b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_488351ea5a36efb9cda852ed175f1c4b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_488351ea5a36efb9cda852ed175f1c4b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_488351ea5a36efb9cda852ed175f1c4b,
        type_description_1,
        par_ctx,
        par_z,
        var_nz2,
        var_z2,
        var_v
    );


    // Release cached frame.
    if ( frame_488351ea5a36efb9cda852ed175f1c4b == cache_frame_488351ea5a36efb9cda852ed175f1c4b )
    {
        Py_DECREF( frame_488351ea5a36efb9cda852ed175f1c4b );
    }
    cache_frame_488351ea5a36efb9cda852ed175f1c4b = NULL;

    assertFrameObject( frame_488351ea5a36efb9cda852ed175f1c4b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_2__erfc_complex );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_nz2 );
    var_nz2 = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    Py_XDECREF( var_z2 );
    var_z2 = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

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

    Py_XDECREF( var_nz2 );
    var_nz2 = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    Py_XDECREF( var_z2 );
    var_z2 = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_2__erfc_complex );
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


static PyObject *impl_mpmath$functions$expintegrals$$$function_3_erf( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_d822bf3fbb04bcd3a52f3ccdd744c293;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_d822bf3fbb04bcd3a52f3ccdd744c293 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d822bf3fbb04bcd3a52f3ccdd744c293, codeobj_d822bf3fbb04bcd3a52f3ccdd744c293, module_mpmath$functions$expintegrals, sizeof(void *)+sizeof(void *) );
    frame_d822bf3fbb04bcd3a52f3ccdd744c293 = cache_frame_d822bf3fbb04bcd3a52f3ccdd744c293;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d822bf3fbb04bcd3a52f3ccdd744c293 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d822bf3fbb04bcd3a52f3ccdd744c293 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_1 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_1 = par_z;
        frame_d822bf3fbb04bcd3a52f3ccdd744c293->m_frame.f_lineno = 26;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_convert, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_z;
            assert( old != NULL );
            par_z = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_2 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_2 = par_z;
        frame_d822bf3fbb04bcd3a52f3ccdd744c293->m_frame.f_lineno = 27;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__is_real_type, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 27;
            type_description_1 = "oo";
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
        // Tried code:
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_3 = par_ctx;
            CHECK_OBJECT( par_z );
            tmp_args_element_name_3 = par_z;
            frame_d822bf3fbb04bcd3a52f3ccdd744c293->m_frame.f_lineno = 29;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain__erf, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 29;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            goto frame_return_exit_1;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_3_erf );
        return NULL;
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
        PRESERVE_FRAME_EXCEPTION( frame_d822bf3fbb04bcd3a52f3ccdd744c293 );
        if ( exception_keeper_tb_1 == NULL )
        {
            exception_keeper_tb_1 = MAKE_TRACEBACK( frame_d822bf3fbb04bcd3a52f3ccdd744c293, exception_keeper_lineno_1 );
        }
        else if ( exception_keeper_lineno_1 != 0 )
        {
            exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_d822bf3fbb04bcd3a52f3ccdd744c293, exception_keeper_lineno_1 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_1 = PyExc_NotImplementedError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 30;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 30;
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
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 28;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_d822bf3fbb04bcd3a52f3ccdd744c293->m_frame) frame_d822bf3fbb04bcd3a52f3ccdd744c293->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
            branch_no_2:;
        }
        goto try_end_1;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_3_erf );
        return NULL;
        // End of try:
        try_end_1:;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_4;
        int tmp_truth_name_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_4 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_4 = par_z;
        frame_d822bf3fbb04bcd3a52f3ccdd744c293->m_frame.f_lineno = 32;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain__is_complex_type, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 32;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
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
        CHECK_OBJECT( par_z );
        tmp_source_name_1 = par_z;
        tmp_operand_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_imag );
        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        // Tried code:
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_type_arg_1;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( par_z );
            tmp_type_arg_1 = par_z;
            tmp_called_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
            assert( !(tmp_called_name_1 == NULL) );
            CHECK_OBJECT( par_ctx );
            tmp_source_name_2 = par_ctx;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__erf );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 34;
                type_description_1 = "oo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( par_z );
            tmp_source_name_3 = par_z;
            tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_real );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 34;
                type_description_1 = "oo";
                goto try_except_handler_3;
            }
            frame_d822bf3fbb04bcd3a52f3ccdd744c293->m_frame.f_lineno = 34;
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
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 34;
                type_description_1 = "oo";
                goto try_except_handler_3;
            }
            frame_d822bf3fbb04bcd3a52f3ccdd744c293->m_frame.f_lineno = 34;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 34;
                type_description_1 = "oo";
                goto try_except_handler_3;
            }
            goto frame_return_exit_1;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_3_erf );
        return NULL;
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
        PRESERVE_FRAME_EXCEPTION( frame_d822bf3fbb04bcd3a52f3ccdd744c293 );
        if ( exception_keeper_tb_2 == NULL )
        {
            exception_keeper_tb_2 = MAKE_TRACEBACK( frame_d822bf3fbb04bcd3a52f3ccdd744c293, exception_keeper_lineno_2 );
        }
        else if ( exception_keeper_lineno_2 != 0 )
        {
            exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_d822bf3fbb04bcd3a52f3ccdd744c293, exception_keeper_lineno_2 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
        PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_2 = PyExc_NotImplementedError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_3 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;
                type_description_1 = "oo";
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
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 33;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_d822bf3fbb04bcd3a52f3ccdd744c293->m_frame) frame_d822bf3fbb04bcd3a52f3ccdd744c293->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
            branch_no_4:;
        }
        goto try_end_2;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_3_erf );
        return NULL;
        // End of try:
        try_end_2:;
        branch_no_3:;
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_5 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_7 = par_z;
        frame_d822bf3fbb04bcd3a52f3ccdd744c293->m_frame.f_lineno = 37;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain__erf_complex, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 1
    RESTORE_FRAME_EXCEPTION( frame_d822bf3fbb04bcd3a52f3ccdd744c293 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_d822bf3fbb04bcd3a52f3ccdd744c293 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_d822bf3fbb04bcd3a52f3ccdd744c293 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d822bf3fbb04bcd3a52f3ccdd744c293, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d822bf3fbb04bcd3a52f3ccdd744c293->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d822bf3fbb04bcd3a52f3ccdd744c293, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d822bf3fbb04bcd3a52f3ccdd744c293,
        type_description_1,
        par_ctx,
        par_z
    );


    // Release cached frame.
    if ( frame_d822bf3fbb04bcd3a52f3ccdd744c293 == cache_frame_d822bf3fbb04bcd3a52f3ccdd744c293 )
    {
        Py_DECREF( frame_d822bf3fbb04bcd3a52f3ccdd744c293 );
    }
    cache_frame_d822bf3fbb04bcd3a52f3ccdd744c293 = NULL;

    assertFrameObject( frame_d822bf3fbb04bcd3a52f3ccdd744c293 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_3_erf );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

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

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_3_erf );
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


static PyObject *impl_mpmath$functions$expintegrals$$$function_4_erfc( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_62ffe41ef4fc586b20a5844171116da3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_62ffe41ef4fc586b20a5844171116da3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_62ffe41ef4fc586b20a5844171116da3, codeobj_62ffe41ef4fc586b20a5844171116da3, module_mpmath$functions$expintegrals, sizeof(void *)+sizeof(void *) );
    frame_62ffe41ef4fc586b20a5844171116da3 = cache_frame_62ffe41ef4fc586b20a5844171116da3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_62ffe41ef4fc586b20a5844171116da3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_62ffe41ef4fc586b20a5844171116da3 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_1 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_1 = par_z;
        frame_62ffe41ef4fc586b20a5844171116da3->m_frame.f_lineno = 41;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_convert, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_z;
            assert( old != NULL );
            par_z = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_2 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_2 = par_z;
        frame_62ffe41ef4fc586b20a5844171116da3->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__is_real_type, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 42;
            type_description_1 = "oo";
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
        // Tried code:
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_3 = par_ctx;
            CHECK_OBJECT( par_z );
            tmp_args_element_name_3 = par_z;
            frame_62ffe41ef4fc586b20a5844171116da3->m_frame.f_lineno = 44;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain__erfc, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 44;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            goto frame_return_exit_1;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_4_erfc );
        return NULL;
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
        PRESERVE_FRAME_EXCEPTION( frame_62ffe41ef4fc586b20a5844171116da3 );
        if ( exception_keeper_tb_1 == NULL )
        {
            exception_keeper_tb_1 = MAKE_TRACEBACK( frame_62ffe41ef4fc586b20a5844171116da3, exception_keeper_lineno_1 );
        }
        else if ( exception_keeper_lineno_1 != 0 )
        {
            exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_62ffe41ef4fc586b20a5844171116da3, exception_keeper_lineno_1 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_1 = PyExc_NotImplementedError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 45;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 45;
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
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 43;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_62ffe41ef4fc586b20a5844171116da3->m_frame) frame_62ffe41ef4fc586b20a5844171116da3->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
            branch_no_2:;
        }
        goto try_end_1;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_4_erfc );
        return NULL;
        // End of try:
        try_end_1:;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_4;
        int tmp_truth_name_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_4 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_4 = par_z;
        frame_62ffe41ef4fc586b20a5844171116da3->m_frame.f_lineno = 47;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain__is_complex_type, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
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
        CHECK_OBJECT( par_z );
        tmp_source_name_1 = par_z;
        tmp_operand_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_imag );
        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        // Tried code:
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_type_arg_1;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( par_z );
            tmp_type_arg_1 = par_z;
            tmp_called_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
            assert( !(tmp_called_name_1 == NULL) );
            CHECK_OBJECT( par_ctx );
            tmp_source_name_2 = par_ctx;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__erfc );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 49;
                type_description_1 = "oo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( par_z );
            tmp_source_name_3 = par_z;
            tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_real );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 49;
                type_description_1 = "oo";
                goto try_except_handler_3;
            }
            frame_62ffe41ef4fc586b20a5844171116da3->m_frame.f_lineno = 49;
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
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 49;
                type_description_1 = "oo";
                goto try_except_handler_3;
            }
            frame_62ffe41ef4fc586b20a5844171116da3->m_frame.f_lineno = 49;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_1 = "oo";
                goto try_except_handler_3;
            }
            goto frame_return_exit_1;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_4_erfc );
        return NULL;
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
        PRESERVE_FRAME_EXCEPTION( frame_62ffe41ef4fc586b20a5844171116da3 );
        if ( exception_keeper_tb_2 == NULL )
        {
            exception_keeper_tb_2 = MAKE_TRACEBACK( frame_62ffe41ef4fc586b20a5844171116da3, exception_keeper_lineno_2 );
        }
        else if ( exception_keeper_lineno_2 != 0 )
        {
            exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_62ffe41ef4fc586b20a5844171116da3, exception_keeper_lineno_2 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
        PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_2 = PyExc_NotImplementedError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_3 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;
                type_description_1 = "oo";
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
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 48;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_62ffe41ef4fc586b20a5844171116da3->m_frame) frame_62ffe41ef4fc586b20a5844171116da3->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
            branch_no_4:;
        }
        goto try_end_2;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_4_erfc );
        return NULL;
        // End of try:
        try_end_2:;
        branch_no_3:;
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_5 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_7 = par_z;
        frame_62ffe41ef4fc586b20a5844171116da3->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain__erfc_complex, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 1
    RESTORE_FRAME_EXCEPTION( frame_62ffe41ef4fc586b20a5844171116da3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_62ffe41ef4fc586b20a5844171116da3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_62ffe41ef4fc586b20a5844171116da3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_62ffe41ef4fc586b20a5844171116da3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_62ffe41ef4fc586b20a5844171116da3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_62ffe41ef4fc586b20a5844171116da3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_62ffe41ef4fc586b20a5844171116da3,
        type_description_1,
        par_ctx,
        par_z
    );


    // Release cached frame.
    if ( frame_62ffe41ef4fc586b20a5844171116da3 == cache_frame_62ffe41ef4fc586b20a5844171116da3 )
    {
        Py_DECREF( frame_62ffe41ef4fc586b20a5844171116da3 );
    }
    cache_frame_62ffe41ef4fc586b20a5844171116da3 = NULL;

    assertFrameObject( frame_62ffe41ef4fc586b20a5844171116da3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_4_erfc );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

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

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_4_erfc );
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


static PyObject *impl_mpmath$functions$expintegrals$$$function_5_square_exp_arg( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    PyObject *par_mult = python_pars[ 2 ];
    PyObject *par_reciprocal = python_pars[ 3 ];
    PyObject *var_prec = NULL;
    PyObject *var_z2 = NULL;
    struct Nuitka_FrameObject *frame_c6a58f317ba230d241557e77cab243a1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c6a58f317ba230d241557e77cab243a1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c6a58f317ba230d241557e77cab243a1, codeobj_c6a58f317ba230d241557e77cab243a1, module_mpmath$functions$expintegrals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c6a58f317ba230d241557e77cab243a1 = cache_frame_c6a58f317ba230d241557e77cab243a1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c6a58f317ba230d241557e77cab243a1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c6a58f317ba230d241557e77cab243a1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_1 = par_ctx;
        tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_prec );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_4;
        tmp_left_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = const_int_pos_20;
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_prec == NULL );
        var_prec = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_reciprocal );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_reciprocal );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
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
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_2 = par_ctx;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_fmul );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_z );
            tmp_tuple_element_1 = par_z;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_z );
            tmp_tuple_element_1 = par_z;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( var_prec );
            tmp_dict_value_1 = var_prec;
            tmp_dict_key_1 = const_str_plain_prec;
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_c6a58f317ba230d241557e77cab243a1->m_frame.f_lineno = 58;
            tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( var_z2 == NULL );
            var_z2 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_3 = par_ctx;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_fdiv );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 59;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_ctx );
            tmp_source_name_4 = par_ctx;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_one );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 59;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_2 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( var_z2 );
            tmp_tuple_element_2 = var_z2;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( var_prec );
            tmp_dict_value_2 = var_prec;
            tmp_dict_key_2 = const_str_plain_prec;
            tmp_kw_name_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_c6a58f317ba230d241557e77cab243a1->m_frame.f_lineno = 59;
            tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 59;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_z2;
                assert( old != NULL );
                var_z2 = tmp_assign_source_3;
                Py_DECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_5;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_5 = par_ctx;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_fmul );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_z );
            tmp_tuple_element_3 = par_z;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( par_z );
            tmp_tuple_element_3 = par_z;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_3 );
            CHECK_OBJECT( var_prec );
            tmp_dict_value_3 = var_prec;
            tmp_dict_key_3 = const_str_plain_prec;
            tmp_kw_name_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            frame_c6a58f317ba230d241557e77cab243a1->m_frame.f_lineno = 61;
            tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_3 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( var_z2 == NULL );
            var_z2 = tmp_assign_source_4;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_mult );
        tmp_compexpr_left_1 = par_mult;
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
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
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_6 = par_ctx;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_fmul );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 63;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_z2 );
            tmp_tuple_element_4 = var_z2;
            tmp_args_name_4 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( par_mult );
            tmp_tuple_element_4 = par_mult;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_4 );
            tmp_kw_name_4 = PyDict_Copy( const_dict_550e1ff28680964f0a1daa61d55eac15 );
            frame_c6a58f317ba230d241557e77cab243a1->m_frame.f_lineno = 63;
            tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_4 );
            Py_DECREF( tmp_kw_name_4 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 63;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_z2;
                assert( old != NULL );
                var_z2 = tmp_assign_source_5;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    if ( var_z2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "z2" );
        exception_tb = NULL;

        exception_lineno = 64;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_z2;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c6a58f317ba230d241557e77cab243a1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c6a58f317ba230d241557e77cab243a1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c6a58f317ba230d241557e77cab243a1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c6a58f317ba230d241557e77cab243a1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c6a58f317ba230d241557e77cab243a1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c6a58f317ba230d241557e77cab243a1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c6a58f317ba230d241557e77cab243a1,
        type_description_1,
        par_ctx,
        par_z,
        par_mult,
        par_reciprocal,
        var_prec,
        var_z2
    );


    // Release cached frame.
    if ( frame_c6a58f317ba230d241557e77cab243a1 == cache_frame_c6a58f317ba230d241557e77cab243a1 )
    {
        Py_DECREF( frame_c6a58f317ba230d241557e77cab243a1 );
    }
    cache_frame_c6a58f317ba230d241557e77cab243a1 = NULL;

    assertFrameObject( frame_c6a58f317ba230d241557e77cab243a1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_5_square_exp_arg );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_reciprocal );
    Py_DECREF( par_reciprocal );
    par_reciprocal = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)var_prec );
    Py_DECREF( var_prec );
    var_prec = NULL;

    CHECK_OBJECT( (PyObject *)par_mult );
    Py_DECREF( par_mult );
    par_mult = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    Py_XDECREF( var_z2 );
    var_z2 = NULL;

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

    CHECK_OBJECT( (PyObject *)par_reciprocal );
    Py_DECREF( par_reciprocal );
    par_reciprocal = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    Py_XDECREF( var_prec );
    var_prec = NULL;

    CHECK_OBJECT( (PyObject *)par_mult );
    Py_DECREF( par_mult );
    par_mult = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    Py_XDECREF( var_z2 );
    var_z2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_5_square_exp_arg );
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


static PyObject *impl_mpmath$functions$expintegrals$$$function_6_erfi( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    PyObject *var_z2 = NULL;
    PyObject *var_v = NULL;
    struct Nuitka_FrameObject *frame_a16fb580e3854d95d5925bf5ee9236ad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a16fb580e3854d95d5925bf5ee9236ad = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a16fb580e3854d95d5925bf5ee9236ad, codeobj_a16fb580e3854d95d5925bf5ee9236ad, module_mpmath$functions$expintegrals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a16fb580e3854d95d5925bf5ee9236ad = cache_frame_a16fb580e3854d95d5925bf5ee9236ad;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a16fb580e3854d95d5925bf5ee9236ad );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a16fb580e3854d95d5925bf5ee9236ad ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( par_z );
        tmp_operand_name_1 = par_z;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
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
        CHECK_OBJECT( par_z );
        tmp_return_value = par_z;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_1 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_1 = par_z;
        frame_a16fb580e3854d95d5925bf5ee9236ad->m_frame.f_lineno = 70;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_square_exp_arg, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_z2 == NULL );
        var_z2 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_left_name_3 = const_int_pos_2;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_1 = par_ctx;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sqrt );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ctx );
        tmp_source_name_2 = par_ctx;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_pi );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 71;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_a16fb580e3854d95d5925bf5ee9236ad->m_frame.f_lineno = 71;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = BINARY_OPERATION_DIV( tmp_left_name_3, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_z );
        tmp_right_name_2 = par_z;
        tmp_left_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_2 = par_ctx;
        tmp_args_element_name_3 = const_tuple_int_pos_1_int_pos_2_tuple;
        tmp_args_element_name_4 = const_tuple_int_pos_3_int_pos_2_tuple;
        CHECK_OBJECT( var_z2 );
        tmp_args_element_name_5 = var_z2;
        frame_a16fb580e3854d95d5925bf5ee9236ad->m_frame.f_lineno = 71;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_right_name_3 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_2, const_str_plain_hyp1f1, call_args );
        }

        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 71;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_v == NULL );
        var_v = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_3 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_6 = par_z;
        frame_a16fb580e3854d95d5925bf5ee9236ad->m_frame.f_lineno = 72;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_operand_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain__re, call_args );
        }

        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "oooo";
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
            PyObject *tmp_left_name_4;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_right_name_4;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_4 = par_ctx;
            CHECK_OBJECT( var_v );
            tmp_args_element_name_7 = var_v;
            frame_a16fb580e3854d95d5925bf5ee9236ad->m_frame.f_lineno = 73;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_left_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain__im, call_args );
            }

            if ( tmp_left_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 73;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_ctx );
            tmp_source_name_3 = par_ctx;
            tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_j );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_4 );

                exception_lineno = 73;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 73;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_v;
                assert( old != NULL );
                var_v = tmp_assign_source_3;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a16fb580e3854d95d5925bf5ee9236ad );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a16fb580e3854d95d5925bf5ee9236ad );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a16fb580e3854d95d5925bf5ee9236ad );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a16fb580e3854d95d5925bf5ee9236ad, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a16fb580e3854d95d5925bf5ee9236ad->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a16fb580e3854d95d5925bf5ee9236ad, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a16fb580e3854d95d5925bf5ee9236ad,
        type_description_1,
        par_ctx,
        par_z,
        var_z2,
        var_v
    );


    // Release cached frame.
    if ( frame_a16fb580e3854d95d5925bf5ee9236ad == cache_frame_a16fb580e3854d95d5925bf5ee9236ad )
    {
        Py_DECREF( frame_a16fb580e3854d95d5925bf5ee9236ad );
    }
    cache_frame_a16fb580e3854d95d5925bf5ee9236ad = NULL;

    assertFrameObject( frame_a16fb580e3854d95d5925bf5ee9236ad );

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
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_6_erfi );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    Py_XDECREF( var_z2 );
    var_z2 = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

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

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    Py_XDECREF( var_z2 );
    var_z2 = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_6_erfi );
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


static PyObject *impl_mpmath$functions$expintegrals$$$function_7_erfinv( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_ctx = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_x = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *var_xre = NULL;
    PyObject *var_u = NULL;
    PyObject *var_a = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_e0a5b88f13387d42cb1ddc3a970c6d1c;
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
    static struct Nuitka_FrameObject *cache_frame_e0a5b88f13387d42cb1ddc3a970c6d1c = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e0a5b88f13387d42cb1ddc3a970c6d1c, codeobj_e0a5b88f13387d42cb1ddc3a970c6d1c, module_mpmath$functions$expintegrals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e0a5b88f13387d42cb1ddc3a970c6d1c = cache_frame_e0a5b88f13387d42cb1ddc3a970c6d1c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e0a5b88f13387d42cb1ddc3a970c6d1c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e0a5b88f13387d42cb1ddc3a970c6d1c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_called_instance_1 = PyCell_GET( par_ctx );
        CHECK_OBJECT( PyCell_GET( par_x ) );
        tmp_args_element_name_1 = PyCell_GET( par_x );
        frame_e0a5b88f13387d42cb1ddc3a970c6d1c->m_frame.f_lineno = 78;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__re, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        assert( var_xre == NULL );
        var_xre = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_xre );
        tmp_compexpr_left_1 = var_xre;
        CHECK_OBJECT( PyCell_GET( par_x ) );
        tmp_compexpr_right_1 = PyCell_GET( par_x );
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "ccooo";
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
        CHECK_OBJECT( var_xre );
        tmp_compexpr_left_2 = var_xre;
        tmp_compexpr_right_2 = const_int_neg_1;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "ccooo";
            goto frame_exception_exit_1;
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
        CHECK_OBJECT( var_xre );
        tmp_compexpr_left_3 = var_xre;
        tmp_compexpr_right_3 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
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
            CHECK_OBJECT( PyCell_GET( par_ctx ) );
            tmp_called_instance_2 = PyCell_GET( par_ctx );
            frame_e0a5b88f13387d42cb1ddc3a970c6d1c->m_frame.f_lineno = 80;
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_bad_domain, &PyTuple_GET_ITEM( const_tuple_str_digest_2de530c2fee998aec1202171ca57a4ff_tuple, 0 ) );

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 80;
                type_description_1 = "ccooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( var_xre );
        tmp_assign_source_2 = var_xre;
        {
            PyObject *old = PyCell_GET( par_x );
            PyCell_SET( par_x, tmp_assign_source_2 );
            Py_INCREF( tmp_assign_source_2 );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( PyCell_GET( par_x ) );
        tmp_operand_name_1 = PyCell_GET( par_x );
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "ccooo";
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
        CHECK_OBJECT( PyCell_GET( par_x ) );
        tmp_return_value = PyCell_GET( par_x );
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( PyCell_GET( par_x ) );
        tmp_compexpr_left_4 = PyCell_GET( par_x );
        tmp_compexpr_right_4 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "ccooo";
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
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( PyCell_GET( par_ctx ) );
            tmp_source_name_1 = PyCell_GET( par_ctx );
            tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_inf );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;
                type_description_1 = "ccooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( PyCell_GET( par_x ) );
        tmp_compexpr_left_5 = PyCell_GET( par_x );
        tmp_compexpr_right_5 = const_int_neg_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;
            type_description_1 = "ccooo";
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
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( PyCell_GET( par_ctx ) );
            tmp_source_name_2 = PyCell_GET( par_ctx );
            tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ninf );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;
                type_description_1 = "ccooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_abs );
        assert( tmp_called_name_1 != NULL );
        CHECK_OBJECT( PyCell_GET( par_x ) );
        tmp_args_element_name_2 = PyCell_GET( par_x );
        frame_e0a5b88f13387d42cb1ddc3a970c6d1c->m_frame.f_lineno = 86;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_compexpr_left_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_compexpr_left_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_6 = const_float_0_9;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        Py_DECREF( tmp_compexpr_left_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "ccooo";
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_2;
            PyObject *tmp_right_name_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            tmp_left_name_2 = const_float_0_53728;
            CHECK_OBJECT( PyCell_GET( par_x ) );
            tmp_left_name_3 = PyCell_GET( par_x );
            tmp_right_name_2 = const_int_pos_3;
            tmp_right_name_1 = POWER_OPERATION( tmp_left_name_3, tmp_right_name_2 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 87;
                type_description_1 = "ccooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 87;
                type_description_1 = "ccooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_4 = const_float_0_813198;
            CHECK_OBJECT( PyCell_GET( par_x ) );
            tmp_right_name_4 = PyCell_GET( par_x );
            tmp_right_name_3 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_4 );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 87;
                type_description_1 = "ccooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 87;
                type_description_1 = "ccooo";
                goto frame_exception_exit_1;
            }
            assert( var_a == NULL );
            var_a = tmp_assign_source_3;
        }
        goto branch_end_5;
        branch_no_5:;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_left_name_5;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_5;
            PyObject *tmp_source_name_4;
            PyObject *tmp_right_name_6;
            PyObject *tmp_left_name_7;
            PyObject *tmp_left_name_8;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_right_name_7;
            PyObject *tmp_right_name_8;
            CHECK_OBJECT( PyCell_GET( par_ctx ) );
            tmp_source_name_3 = PyCell_GET( par_ctx );
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ln );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 90;
                type_description_1 = "ccooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_6 = const_int_pos_2;
            CHECK_OBJECT( PyCell_GET( par_ctx ) );
            tmp_source_name_4 = PyCell_GET( par_ctx );
            tmp_right_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_pi );
            if ( tmp_right_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 90;
                type_description_1 = "ccooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_5 = BINARY_OPERATION_DIV( tmp_left_name_6, tmp_right_name_5 );
            Py_DECREF( tmp_right_name_5 );
            if ( tmp_left_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 90;
                type_description_1 = "ccooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_abs );
            assert( tmp_called_name_3 != NULL );
            CHECK_OBJECT( PyCell_GET( par_x ) );
            tmp_args_element_name_4 = PyCell_GET( par_x );
            frame_e0a5b88f13387d42cb1ddc3a970c6d1c->m_frame.f_lineno = 90;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_left_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_left_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_left_name_5 );

                exception_lineno = 90;
                type_description_1 = "ccooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_7 = const_int_pos_1;
            tmp_left_name_7 = BINARY_OPERATION_SUB( tmp_left_name_8, tmp_right_name_7 );
            Py_DECREF( tmp_left_name_8 );
            if ( tmp_left_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_left_name_5 );

                exception_lineno = 90;
                type_description_1 = "ccooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_8 = const_int_pos_2;
            tmp_right_name_6 = POWER_OPERATION( tmp_left_name_7, tmp_right_name_8 );
            Py_DECREF( tmp_left_name_7 );
            if ( tmp_right_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_left_name_5 );

                exception_lineno = 90;
                type_description_1 = "ccooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_3 = BINARY_OPERATION_DIV( tmp_left_name_5, tmp_right_name_6 );
            Py_DECREF( tmp_left_name_5 );
            Py_DECREF( tmp_right_name_6 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 90;
                type_description_1 = "ccooo";
                goto frame_exception_exit_1;
            }
            frame_e0a5b88f13387d42cb1ddc3a970c6d1c->m_frame.f_lineno = 90;
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


                exception_lineno = 90;
                type_description_1 = "ccooo";
                goto frame_exception_exit_1;
            }
            assert( var_u == NULL );
            var_u = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_left_name_9;
            PyObject *tmp_left_name_10;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_right_name_9;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_left_name_11;
            PyObject *tmp_right_name_10;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_right_name_11;
            PyObject *tmp_called_instance_5;
            CHECK_OBJECT( PyCell_GET( par_ctx ) );
            tmp_called_instance_3 = PyCell_GET( par_ctx );
            CHECK_OBJECT( PyCell_GET( par_x ) );
            tmp_args_element_name_5 = PyCell_GET( par_x );
            frame_e0a5b88f13387d42cb1ddc3a970c6d1c->m_frame.f_lineno = 91;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_left_name_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_sign, call_args );
            }

            if ( tmp_left_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 91;
                type_description_1 = "ccooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( PyCell_GET( par_ctx ) );
            tmp_source_name_5 = PyCell_GET( par_ctx );
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_sqrt );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_10 );

                exception_lineno = 91;
                type_description_1 = "ccooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_u );
            tmp_left_name_11 = var_u;
            CHECK_OBJECT( PyCell_GET( par_ctx ) );
            tmp_called_instance_4 = PyCell_GET( par_ctx );
            CHECK_OBJECT( var_u );
            tmp_args_element_name_7 = var_u;
            frame_e0a5b88f13387d42cb1ddc3a970c6d1c->m_frame.f_lineno = 91;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_right_name_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_ln, call_args );
            }

            if ( tmp_right_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_10 );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 91;
                type_description_1 = "ccooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_6 = BINARY_OPERATION_SUB( tmp_left_name_11, tmp_right_name_10 );
            Py_DECREF( tmp_right_name_10 );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_10 );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 91;
                type_description_1 = "ccooo";
                goto frame_exception_exit_1;
            }
            frame_e0a5b88f13387d42cb1ddc3a970c6d1c->m_frame.f_lineno = 91;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_right_name_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_right_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_10 );

                exception_lineno = 91;
                type_description_1 = "ccooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_9 = BINARY_OPERATION_MUL( tmp_left_name_10, tmp_right_name_9 );
            Py_DECREF( tmp_left_name_10 );
            Py_DECREF( tmp_right_name_9 );
            if ( tmp_left_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 91;
                type_description_1 = "ccooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( PyCell_GET( par_ctx ) );
            tmp_called_instance_5 = PyCell_GET( par_ctx );
            frame_e0a5b88f13387d42cb1ddc3a970c6d1c->m_frame.f_lineno = 91;
            tmp_right_name_11 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_sqrt, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

            if ( tmp_right_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_9 );

                exception_lineno = 91;
                type_description_1 = "ccooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_5 = BINARY_OPERATION_DIV( tmp_left_name_9, tmp_right_name_11 );
            Py_DECREF( tmp_left_name_9 );
            Py_DECREF( tmp_right_name_11 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 91;
                type_description_1 = "ccooo";
                goto frame_exception_exit_1;
            }
            assert( var_a == NULL );
            var_a = tmp_assign_source_5;
        }
        branch_end_5:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_source_name_6 = PyCell_GET( par_ctx );
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_prec );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_inplace_assign_attr_1__start == NULL );
        tmp_inplace_assign_attr_1__start = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_12 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_12 = const_int_pos_10;
        tmp_assign_source_7 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_12, tmp_right_name_12 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "ccooo";
            goto try_except_handler_2;
        }
        assert( tmp_inplace_assign_attr_1__end == NULL );
        tmp_inplace_assign_attr_1__end = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
        tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_assattr_target_1 = PyCell_GET( par_ctx );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_prec, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "ccooo";
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

    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_called_instance_6 = PyCell_GET( par_ctx );
        tmp_args_element_name_8 = MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_7_erfinv$$$function_1_lambda(  );

        ((struct Nuitka_FunctionObject *)tmp_args_element_name_8)->m_closure[0] = par_ctx;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_args_element_name_8)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_args_element_name_8)->m_closure[1] = par_x;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_args_element_name_8)->m_closure[1] );


        CHECK_OBJECT( var_a );
        tmp_args_element_name_9 = var_a;
        frame_e0a5b88f13387d42cb1ddc3a970c6d1c->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_6, const_str_plain_findroot, call_args );
        }

        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ccooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e0a5b88f13387d42cb1ddc3a970c6d1c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e0a5b88f13387d42cb1ddc3a970c6d1c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e0a5b88f13387d42cb1ddc3a970c6d1c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e0a5b88f13387d42cb1ddc3a970c6d1c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e0a5b88f13387d42cb1ddc3a970c6d1c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e0a5b88f13387d42cb1ddc3a970c6d1c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e0a5b88f13387d42cb1ddc3a970c6d1c,
        type_description_1,
        par_ctx,
        par_x,
        var_xre,
        var_u,
        var_a
    );


    // Release cached frame.
    if ( frame_e0a5b88f13387d42cb1ddc3a970c6d1c == cache_frame_e0a5b88f13387d42cb1ddc3a970c6d1c )
    {
        Py_DECREF( frame_e0a5b88f13387d42cb1ddc3a970c6d1c );
    }
    cache_frame_e0a5b88f13387d42cb1ddc3a970c6d1c = NULL;

    assertFrameObject( frame_e0a5b88f13387d42cb1ddc3a970c6d1c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_7_erfinv );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_xre );
    Py_DECREF( var_xre );
    var_xre = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_u );
    var_u = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

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

    Py_XDECREF( var_xre );
    var_xre = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_u );
    var_u = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_7_erfinv );
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


static PyObject *impl_mpmath$functions$expintegrals$$$function_7_erfinv$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_9606ad0eadaa4a285dfa0f9305dbed74;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9606ad0eadaa4a285dfa0f9305dbed74 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9606ad0eadaa4a285dfa0f9305dbed74, codeobj_9606ad0eadaa4a285dfa0f9305dbed74, module_mpmath$functions$expintegrals, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9606ad0eadaa4a285dfa0f9305dbed74 = cache_frame_9606ad0eadaa4a285dfa0f9305dbed74;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9606ad0eadaa4a285dfa0f9305dbed74 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9606ad0eadaa4a285dfa0f9305dbed74 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_right_name_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ctx" );
            exception_tb = NULL;

            exception_lineno = 93;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_t );
        tmp_args_element_name_1 = par_t;
        frame_9606ad0eadaa4a285dfa0f9305dbed74->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_left_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_erf, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "x" );
            exception_tb = NULL;

            exception_lineno = 93;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = PyCell_GET( self->m_closure[1] );
        tmp_return_value = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9606ad0eadaa4a285dfa0f9305dbed74 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9606ad0eadaa4a285dfa0f9305dbed74 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9606ad0eadaa4a285dfa0f9305dbed74 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9606ad0eadaa4a285dfa0f9305dbed74, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9606ad0eadaa4a285dfa0f9305dbed74->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9606ad0eadaa4a285dfa0f9305dbed74, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9606ad0eadaa4a285dfa0f9305dbed74,
        type_description_1,
        par_t,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_9606ad0eadaa4a285dfa0f9305dbed74 == cache_frame_9606ad0eadaa4a285dfa0f9305dbed74 )
    {
        Py_DECREF( frame_9606ad0eadaa4a285dfa0f9305dbed74 );
    }
    cache_frame_9606ad0eadaa4a285dfa0f9305dbed74 = NULL;

    assertFrameObject( frame_9606ad0eadaa4a285dfa0f9305dbed74 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_7_erfinv$$$function_1_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

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

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_7_erfinv$$$function_1_lambda );
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


static PyObject *impl_mpmath$functions$expintegrals$$$function_8_npdf( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_x = python_pars[ 1 ];
    PyObject *par_mu = python_pars[ 2 ];
    PyObject *par_sigma = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_82b7d31a509b08b331f051cb5f9a48c1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_82b7d31a509b08b331f051cb5f9a48c1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_82b7d31a509b08b331f051cb5f9a48c1, codeobj_82b7d31a509b08b331f051cb5f9a48c1, module_mpmath$functions$expintegrals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_82b7d31a509b08b331f051cb5f9a48c1 = cache_frame_82b7d31a509b08b331f051cb5f9a48c1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_82b7d31a509b08b331f051cb5f9a48c1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_82b7d31a509b08b331f051cb5f9a48c1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_1 = par_ctx;
        CHECK_OBJECT( par_sigma );
        tmp_args_element_name_1 = par_sigma;
        frame_82b7d31a509b08b331f051cb5f9a48c1->m_frame.f_lineno = 97;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_convert, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_sigma;
            assert( old != NULL );
            par_sigma = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_4;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_1 = par_ctx;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_exp );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x );
        tmp_left_name_4 = par_x;
        CHECK_OBJECT( par_mu );
        tmp_right_name_1 = par_mu;
        tmp_left_name_3 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_1 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 98;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = const_int_pos_2;
        tmp_operand_name_1 = POWER_OPERATION( tmp_left_name_3, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 98;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 98;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_5 = const_int_pos_2;
        CHECK_OBJECT( par_sigma );
        tmp_left_name_6 = par_sigma;
        tmp_right_name_5 = const_int_pos_2;
        tmp_right_name_4 = POWER_OPERATION( tmp_left_name_6, tmp_right_name_5 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 98;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 98;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = BINARY_OPERATION_DIV( tmp_left_name_2, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 98;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_82b7d31a509b08b331f051cb5f9a48c1->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_sigma );
        tmp_left_name_7 = par_sigma;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_2 = par_ctx;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sqrt );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 98;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_8 = const_int_pos_2;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_3 = par_ctx;
        tmp_right_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_pi );
        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 98;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = BINARY_OPERATION_MUL( tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 98;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_82b7d31a509b08b331f051cb5f9a48c1->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_right_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 98;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_6 = BINARY_OPERATION_MUL( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 98;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_DIV( tmp_left_name_1, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_82b7d31a509b08b331f051cb5f9a48c1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_82b7d31a509b08b331f051cb5f9a48c1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_82b7d31a509b08b331f051cb5f9a48c1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_82b7d31a509b08b331f051cb5f9a48c1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_82b7d31a509b08b331f051cb5f9a48c1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_82b7d31a509b08b331f051cb5f9a48c1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_82b7d31a509b08b331f051cb5f9a48c1,
        type_description_1,
        par_ctx,
        par_x,
        par_mu,
        par_sigma
    );


    // Release cached frame.
    if ( frame_82b7d31a509b08b331f051cb5f9a48c1 == cache_frame_82b7d31a509b08b331f051cb5f9a48c1 )
    {
        Py_DECREF( frame_82b7d31a509b08b331f051cb5f9a48c1 );
    }
    cache_frame_82b7d31a509b08b331f051cb5f9a48c1 = NULL;

    assertFrameObject( frame_82b7d31a509b08b331f051cb5f9a48c1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_8_npdf );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_mu );
    Py_DECREF( par_mu );
    par_mu = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_sigma );
    Py_DECREF( par_sigma );
    par_sigma = NULL;

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

    CHECK_OBJECT( (PyObject *)par_mu );
    Py_DECREF( par_mu );
    par_mu = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_sigma );
    Py_DECREF( par_sigma );
    par_sigma = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_8_npdf );
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


static PyObject *impl_mpmath$functions$expintegrals$$$function_9_ncdf( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_x = python_pars[ 1 ];
    PyObject *par_mu = python_pars[ 2 ];
    PyObject *par_sigma = python_pars[ 3 ];
    PyObject *var_a = NULL;
    struct Nuitka_FrameObject *frame_b139de8956e5282e0ecbd44ef1175d4d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b139de8956e5282e0ecbd44ef1175d4d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b139de8956e5282e0ecbd44ef1175d4d, codeobj_b139de8956e5282e0ecbd44ef1175d4d, module_mpmath$functions$expintegrals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b139de8956e5282e0ecbd44ef1175d4d = cache_frame_b139de8956e5282e0ecbd44ef1175d4d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b139de8956e5282e0ecbd44ef1175d4d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b139de8956e5282e0ecbd44ef1175d4d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_x );
        tmp_left_name_2 = par_x;
        CHECK_OBJECT( par_mu );
        tmp_right_name_1 = par_mu;
        tmp_left_name_1 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_sigma );
        tmp_left_name_3 = par_sigma;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_1 = par_ctx;
        frame_b139de8956e5282e0ecbd44ef1175d4d->m_frame.f_lineno = 102;
        tmp_right_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_sqrt, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 102;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 102;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_DIV( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_a == NULL );
        var_a = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_a );
        tmp_compexpr_left_1 = var_a;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
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
            PyObject *tmp_left_name_4;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_right_name_4;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_1 = par_ctx;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_erfc );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_a );
            tmp_operand_name_1 = var_a;
            tmp_args_element_name_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 104;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            frame_b139de8956e5282e0ecbd44ef1175d4d->m_frame.f_lineno = 104;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_left_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_left_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_4 = const_int_pos_2;
            tmp_return_value = BINARY_OPERATION_DIV( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_4 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_left_name_5;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_5;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_right_name_6;
            tmp_left_name_6 = const_int_pos_1;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_2 = par_ctx;
            CHECK_OBJECT( var_a );
            tmp_args_element_name_2 = var_a;
            frame_b139de8956e5282e0ecbd44ef1175d4d->m_frame.f_lineno = 106;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_right_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_erf, call_args );
            }

            if ( tmp_right_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 106;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_5 = BINARY_OPERATION_ADD_INT_OBJECT( tmp_left_name_6, tmp_right_name_5 );
            Py_DECREF( tmp_right_name_5 );
            if ( tmp_left_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 106;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_6 = const_int_pos_2;
            tmp_return_value = BINARY_OPERATION_DIV( tmp_left_name_5, tmp_right_name_6 );
            Py_DECREF( tmp_left_name_5 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 106;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b139de8956e5282e0ecbd44ef1175d4d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b139de8956e5282e0ecbd44ef1175d4d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b139de8956e5282e0ecbd44ef1175d4d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b139de8956e5282e0ecbd44ef1175d4d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b139de8956e5282e0ecbd44ef1175d4d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b139de8956e5282e0ecbd44ef1175d4d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b139de8956e5282e0ecbd44ef1175d4d,
        type_description_1,
        par_ctx,
        par_x,
        par_mu,
        par_sigma,
        var_a
    );


    // Release cached frame.
    if ( frame_b139de8956e5282e0ecbd44ef1175d4d == cache_frame_b139de8956e5282e0ecbd44ef1175d4d )
    {
        Py_DECREF( frame_b139de8956e5282e0ecbd44ef1175d4d );
    }
    cache_frame_b139de8956e5282e0ecbd44ef1175d4d = NULL;

    assertFrameObject( frame_b139de8956e5282e0ecbd44ef1175d4d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_9_ncdf );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_mu );
    Py_DECREF( par_mu );
    par_mu = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_sigma );
    Py_DECREF( par_sigma );
    par_sigma = NULL;

    CHECK_OBJECT( (PyObject *)var_a );
    Py_DECREF( var_a );
    var_a = NULL;

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

    CHECK_OBJECT( (PyObject *)par_mu );
    Py_DECREF( par_mu );
    par_mu = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_sigma );
    Py_DECREF( par_sigma );
    par_sigma = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_9_ncdf );
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


static PyObject *impl_mpmath$functions$expintegrals$$$function_10_betainc( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_a = python_pars[ 1 ];
    PyObject *par_b = python_pars[ 2 ];
    PyObject *par_x1 = python_pars[ 3 ];
    PyObject *par_x2 = python_pars[ 4 ];
    PyObject *par_regularized = python_pars[ 5 ];
    PyObject *var_s2 = NULL;
    PyObject *var_d = NULL;
    PyObject *var_m = NULL;
    PyObject *var_s1 = NULL;
    PyObject *var_h = NULL;
    PyObject *var_v = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    PyObject *tmp_inplace_assign_attr_2__end = NULL;
    PyObject *tmp_inplace_assign_attr_2__start = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_c74430419e29b69e44b4e0ba56a3bf40;
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
    bool tmp_result;
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
    static struct Nuitka_FrameObject *cache_frame_c74430419e29b69e44b4e0ba56a3bf40 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c74430419e29b69e44b4e0ba56a3bf40, codeobj_c74430419e29b69e44b4e0ba56a3bf40, module_mpmath$functions$expintegrals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c74430419e29b69e44b4e0ba56a3bf40 = cache_frame_c74430419e29b69e44b4e0ba56a3bf40;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c74430419e29b69e44b4e0ba56a3bf40 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c74430419e29b69e44b4e0ba56a3bf40 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_x1 );
        tmp_compexpr_left_1 = par_x1;
        CHECK_OBJECT( par_x2 );
        tmp_compexpr_right_1 = par_x2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;
            type_description_1 = "oooooooooooo";
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
            tmp_assign_source_1 = const_int_0;
            assert( var_v == NULL );
            Py_INCREF( tmp_assign_source_1 );
            var_v = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            CHECK_OBJECT( par_x1 );
            tmp_operand_name_1 = par_x1;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 112;
                type_description_1 = "oooooooooooo";
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
                nuitka_bool tmp_condition_result_3;
                int tmp_and_left_truth_1;
                nuitka_bool tmp_and_left_value_1;
                nuitka_bool tmp_and_right_value_1;
                PyObject *tmp_compexpr_left_2;
                PyObject *tmp_compexpr_right_2;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                CHECK_OBJECT( par_x1 );
                tmp_compexpr_left_2 = par_x1;
                tmp_compexpr_right_2 = const_int_0;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 113;
                    type_description_1 = "oooooooooooo";
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
                CHECK_OBJECT( par_x2 );
                tmp_compexpr_left_3 = par_x2;
                tmp_compexpr_right_3 = const_int_pos_1;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 113;
                    type_description_1 = "oooooooooooo";
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
                    PyObject *tmp_assign_source_2;
                    PyObject *tmp_called_instance_1;
                    PyObject *tmp_args_element_name_1;
                    PyObject *tmp_args_element_name_2;
                    CHECK_OBJECT( par_ctx );
                    tmp_called_instance_1 = par_ctx;
                    CHECK_OBJECT( par_a );
                    tmp_args_element_name_1 = par_a;
                    CHECK_OBJECT( par_b );
                    tmp_args_element_name_2 = par_b;
                    frame_c74430419e29b69e44b4e0ba56a3bf40->m_frame.f_lineno = 114;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_beta, call_args );
                    }

                    if ( tmp_assign_source_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 114;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_v == NULL );
                    var_v = tmp_assign_source_2;
                }
                goto branch_end_3;
                branch_no_3:;
                {
                    PyObject *tmp_assign_source_3;
                    PyObject *tmp_left_name_1;
                    PyObject *tmp_left_name_2;
                    PyObject *tmp_left_name_3;
                    PyObject *tmp_right_name_1;
                    PyObject *tmp_right_name_2;
                    PyObject *tmp_called_name_1;
                    PyObject *tmp_source_name_1;
                    PyObject *tmp_args_element_name_3;
                    PyObject *tmp_args_element_name_4;
                    PyObject *tmp_left_name_4;
                    PyObject *tmp_right_name_3;
                    PyObject *tmp_args_element_name_5;
                    PyObject *tmp_left_name_5;
                    PyObject *tmp_right_name_4;
                    PyObject *tmp_args_element_name_6;
                    PyObject *tmp_right_name_5;
                    CHECK_OBJECT( par_x2 );
                    tmp_left_name_3 = par_x2;
                    CHECK_OBJECT( par_a );
                    tmp_right_name_1 = par_a;
                    tmp_left_name_2 = POWER_OPERATION( tmp_left_name_3, tmp_right_name_1 );
                    if ( tmp_left_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 116;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_ctx );
                    tmp_source_name_1 = par_ctx;
                    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_hyp2f1 );
                    if ( tmp_called_name_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_left_name_2 );

                        exception_lineno = 116;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_a );
                    tmp_args_element_name_3 = par_a;
                    tmp_left_name_4 = const_int_pos_1;
                    CHECK_OBJECT( par_b );
                    tmp_right_name_3 = par_b;
                    tmp_args_element_name_4 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_3 );
                    if ( tmp_args_element_name_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_left_name_2 );
                        Py_DECREF( tmp_called_name_1 );

                        exception_lineno = 116;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_a );
                    tmp_left_name_5 = par_a;
                    tmp_right_name_4 = const_int_pos_1;
                    tmp_args_element_name_5 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_5, tmp_right_name_4 );
                    if ( tmp_args_element_name_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_left_name_2 );
                        Py_DECREF( tmp_called_name_1 );
                        Py_DECREF( tmp_args_element_name_4 );

                        exception_lineno = 116;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_x2 );
                    tmp_args_element_name_6 = par_x2;
                    frame_c74430419e29b69e44b4e0ba56a3bf40->m_frame.f_lineno = 116;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
                        tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
                    }

                    Py_DECREF( tmp_called_name_1 );
                    Py_DECREF( tmp_args_element_name_4 );
                    Py_DECREF( tmp_args_element_name_5 );
                    if ( tmp_right_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_left_name_2 );

                        exception_lineno = 116;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_left_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
                    Py_DECREF( tmp_left_name_2 );
                    Py_DECREF( tmp_right_name_2 );
                    if ( tmp_left_name_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 116;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_a );
                    tmp_right_name_5 = par_a;
                    tmp_assign_source_3 = BINARY_OPERATION_DIV( tmp_left_name_1, tmp_right_name_5 );
                    Py_DECREF( tmp_left_name_1 );
                    if ( tmp_assign_source_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 116;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_v == NULL );
                    var_v = tmp_assign_source_3;
                }
                branch_end_3:;
            }
            goto branch_end_2;
            branch_no_2:;
            // Tried code:
            {
                PyObject *tmp_assign_source_4;
                PyObject *tmp_iter_arg_1;
                PyObject *tmp_called_instance_2;
                PyObject *tmp_args_element_name_7;
                CHECK_OBJECT( par_ctx );
                tmp_called_instance_2 = par_ctx;
                CHECK_OBJECT( par_a );
                tmp_args_element_name_7 = par_a;
                frame_c74430419e29b69e44b4e0ba56a3bf40->m_frame.f_lineno = 118;
                {
                    PyObject *call_args[] = { tmp_args_element_name_7 };
                    tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_nint_distance, call_args );
                }

                if ( tmp_iter_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 118;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_2;
                }
                tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
                Py_DECREF( tmp_iter_arg_1 );
                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 118;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_2;
                }
                assert( tmp_tuple_unpack_1__source_iter == NULL );
                tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_5;
                PyObject *tmp_unpack_1;
                CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
                tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
                tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_1, 0 );
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


                    type_description_1 = "oooooooooooo";
                    exception_lineno = 118;
                    goto try_except_handler_3;
                }
                assert( tmp_tuple_unpack_1__element_1 == NULL );
                tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
            }
            {
                PyObject *tmp_assign_source_6;
                PyObject *tmp_unpack_2;
                CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
                tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
                tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


                    type_description_1 = "oooooooooooo";
                    exception_lineno = 118;
                    goto try_except_handler_3;
                }
                assert( tmp_tuple_unpack_1__element_2 == NULL );
                tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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

                            type_description_1 = "oooooooooooo";
                            exception_lineno = 118;
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

                    type_description_1 = "oooooooooooo";
                    exception_lineno = 118;
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
                PyObject *tmp_assign_source_7;
                CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
                tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
                assert( var_m == NULL );
                Py_INCREF( tmp_assign_source_7 );
                var_m = tmp_assign_source_7;
            }
            Py_XDECREF( tmp_tuple_unpack_1__element_1 );
            tmp_tuple_unpack_1__element_1 = NULL;

            {
                PyObject *tmp_assign_source_8;
                CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
                tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
                assert( var_d == NULL );
                Py_INCREF( tmp_assign_source_8 );
                var_d = tmp_assign_source_8;
            }
            Py_XDECREF( tmp_tuple_unpack_1__element_2 );
            tmp_tuple_unpack_1__element_2 = NULL;

            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                CHECK_OBJECT( var_m );
                tmp_compexpr_left_4 = var_m;
                tmp_compexpr_right_4 = const_int_0;
                tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_INT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 119;
                    type_description_1 = "oooooooooooo";
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
                    PyObject *tmp_compexpr_left_5;
                    PyObject *tmp_compexpr_right_5;
                    PyObject *tmp_operand_name_2;
                    PyObject *tmp_source_name_2;
                    CHECK_OBJECT( var_d );
                    tmp_compexpr_left_5 = var_d;
                    CHECK_OBJECT( par_ctx );
                    tmp_source_name_2 = par_ctx;
                    tmp_operand_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_prec );
                    if ( tmp_operand_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 120;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_right_5 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
                    Py_DECREF( tmp_operand_name_2 );
                    if ( tmp_compexpr_right_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 120;
                        type_description_1 = "oooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                    Py_DECREF( tmp_compexpr_right_5 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 120;
                        type_description_1 = "oooooooooooo";
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
                        PyObject *tmp_assign_source_9;
                        PyObject *tmp_operand_name_3;
                        PyObject *tmp_source_name_3;
                        CHECK_OBJECT( par_ctx );
                        tmp_source_name_3 = par_ctx;
                        tmp_operand_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_eps );
                        if ( tmp_operand_name_3 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 121;
                            type_description_1 = "oooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_assign_source_9 = UNARY_OPERATION( PyNumber_Positive, tmp_operand_name_3 );
                        Py_DECREF( tmp_operand_name_3 );
                        if ( tmp_assign_source_9 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 121;
                            type_description_1 = "oooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        assert( var_h == NULL );
                        var_h = tmp_assign_source_9;
                    }
                    {
                        PyObject *tmp_assign_source_10;
                        PyObject *tmp_source_name_4;
                        CHECK_OBJECT( par_ctx );
                        tmp_source_name_4 = par_ctx;
                        tmp_assign_source_10 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_prec );
                        if ( tmp_assign_source_10 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 122;
                            type_description_1 = "oooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        assert( tmp_inplace_assign_attr_1__start == NULL );
                        tmp_inplace_assign_attr_1__start = tmp_assign_source_10;
                    }
                    // Tried code:
                    {
                        PyObject *tmp_assign_source_11;
                        PyObject *tmp_left_name_6;
                        PyObject *tmp_right_name_6;
                        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
                        tmp_left_name_6 = tmp_inplace_assign_attr_1__start;
                        tmp_right_name_6 = const_int_pos_2;
                        tmp_assign_source_11 = BINARY_OPERATION( PyNumber_InPlaceMultiply, tmp_left_name_6, tmp_right_name_6 );
                        if ( tmp_assign_source_11 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 122;
                            type_description_1 = "oooooooooooo";
                            goto try_except_handler_4;
                        }
                        assert( tmp_inplace_assign_attr_1__end == NULL );
                        tmp_inplace_assign_attr_1__end = tmp_assign_source_11;
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


                            exception_lineno = 122;
                            type_description_1 = "oooooooooooo";
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

                    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
                    Py_DECREF( tmp_inplace_assign_attr_1__end );
                    tmp_inplace_assign_attr_1__end = NULL;

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

                    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
                    Py_DECREF( tmp_inplace_assign_attr_1__start );
                    tmp_inplace_assign_attr_1__start = NULL;

                    // Re-raise.
                    exception_type = exception_keeper_type_4;
                    exception_value = exception_keeper_value_4;
                    exception_tb = exception_keeper_tb_4;
                    exception_lineno = exception_keeper_lineno_4;

                    goto frame_exception_exit_1;
                    // End of try:
                    try_end_4:;
                    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
                    Py_DECREF( tmp_inplace_assign_attr_1__end );
                    tmp_inplace_assign_attr_1__end = NULL;

                    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
                    Py_DECREF( tmp_inplace_assign_attr_1__start );
                    tmp_inplace_assign_attr_1__start = NULL;

                    {
                        PyObject *tmp_assign_source_12;
                        PyObject *tmp_left_name_7;
                        PyObject *tmp_right_name_7;
                        CHECK_OBJECT( par_a );
                        tmp_left_name_7 = par_a;
                        CHECK_OBJECT( var_h );
                        tmp_right_name_7 = var_h;
                        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_7, tmp_right_name_7 );
                        if ( tmp_result == false )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 123;
                            type_description_1 = "oooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_assign_source_12 = tmp_left_name_7;
                        par_a = tmp_assign_source_12;

                    }
                    goto branch_end_5;
                    branch_no_5:;
                    {
                        nuitka_bool tmp_condition_result_6;
                        PyObject *tmp_compexpr_left_6;
                        PyObject *tmp_compexpr_right_6;
                        CHECK_OBJECT( var_d );
                        tmp_compexpr_left_6 = var_d;
                        tmp_compexpr_right_6 = const_int_neg_4;
                        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 124;
                            type_description_1 = "oooooooooooo";
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
                            PyObject *tmp_assign_source_13;
                            PyObject *tmp_source_name_5;
                            CHECK_OBJECT( par_ctx );
                            tmp_source_name_5 = par_ctx;
                            tmp_assign_source_13 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_prec );
                            if ( tmp_assign_source_13 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 125;
                                type_description_1 = "oooooooooooo";
                                goto frame_exception_exit_1;
                            }
                            assert( tmp_inplace_assign_attr_2__start == NULL );
                            tmp_inplace_assign_attr_2__start = tmp_assign_source_13;
                        }
                        // Tried code:
                        {
                            PyObject *tmp_assign_source_14;
                            PyObject *tmp_left_name_8;
                            PyObject *tmp_right_name_8;
                            CHECK_OBJECT( tmp_inplace_assign_attr_2__start );
                            tmp_left_name_8 = tmp_inplace_assign_attr_2__start;
                            CHECK_OBJECT( var_d );
                            tmp_right_name_8 = var_d;
                            tmp_assign_source_14 = BINARY_OPERATION( PyNumber_InPlaceSubtract, tmp_left_name_8, tmp_right_name_8 );
                            if ( tmp_assign_source_14 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 125;
                                type_description_1 = "oooooooooooo";
                                goto try_except_handler_6;
                            }
                            assert( tmp_inplace_assign_attr_2__end == NULL );
                            tmp_inplace_assign_attr_2__end = tmp_assign_source_14;
                        }
                        // Tried code:
                        {
                            PyObject *tmp_assattr_name_2;
                            PyObject *tmp_assattr_target_2;
                            CHECK_OBJECT( tmp_inplace_assign_attr_2__end );
                            tmp_assattr_name_2 = tmp_inplace_assign_attr_2__end;
                            CHECK_OBJECT( par_ctx );
                            tmp_assattr_target_2 = par_ctx;
                            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_prec, tmp_assattr_name_2 );
                            if ( tmp_result == false )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 125;
                                type_description_1 = "oooooooooooo";
                                goto try_except_handler_7;
                            }
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

                        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__end );
                        Py_DECREF( tmp_inplace_assign_attr_2__end );
                        tmp_inplace_assign_attr_2__end = NULL;

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

                        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__start );
                        Py_DECREF( tmp_inplace_assign_attr_2__start );
                        tmp_inplace_assign_attr_2__start = NULL;

                        // Re-raise.
                        exception_type = exception_keeper_type_6;
                        exception_value = exception_keeper_value_6;
                        exception_tb = exception_keeper_tb_6;
                        exception_lineno = exception_keeper_lineno_6;

                        goto frame_exception_exit_1;
                        // End of try:
                        try_end_6:;
                        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__end );
                        Py_DECREF( tmp_inplace_assign_attr_2__end );
                        tmp_inplace_assign_attr_2__end = NULL;

                        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__start );
                        Py_DECREF( tmp_inplace_assign_attr_2__start );
                        tmp_inplace_assign_attr_2__start = NULL;

                        branch_no_6:;
                    }
                    branch_end_5:;
                }
                branch_no_4:;
            }
            {
                PyObject *tmp_assign_source_15;
                PyObject *tmp_left_name_9;
                PyObject *tmp_left_name_10;
                PyObject *tmp_right_name_9;
                PyObject *tmp_right_name_10;
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_6;
                PyObject *tmp_args_element_name_8;
                PyObject *tmp_args_element_name_9;
                PyObject *tmp_left_name_11;
                PyObject *tmp_right_name_11;
                PyObject *tmp_args_element_name_10;
                PyObject *tmp_left_name_12;
                PyObject *tmp_right_name_12;
                PyObject *tmp_args_element_name_11;
                CHECK_OBJECT( par_x2 );
                tmp_left_name_10 = par_x2;
                if ( par_a == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "a" );
                    exception_tb = NULL;

                    exception_lineno = 126;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_right_name_9 = par_a;
                tmp_left_name_9 = POWER_OPERATION( tmp_left_name_10, tmp_right_name_9 );
                if ( tmp_left_name_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 126;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_ctx );
                tmp_source_name_6 = par_ctx;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_hyp2f1 );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_9 );

                    exception_lineno = 126;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                if ( par_a == NULL )
                {
                    Py_DECREF( tmp_left_name_9 );
                    Py_DECREF( tmp_called_name_2 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "a" );
                    exception_tb = NULL;

                    exception_lineno = 126;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_8 = par_a;
                tmp_left_name_11 = const_int_pos_1;
                CHECK_OBJECT( par_b );
                tmp_right_name_11 = par_b;
                tmp_args_element_name_9 = BINARY_OPERATION_SUB( tmp_left_name_11, tmp_right_name_11 );
                if ( tmp_args_element_name_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_9 );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 126;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                if ( par_a == NULL )
                {
                    Py_DECREF( tmp_left_name_9 );
                    Py_DECREF( tmp_called_name_2 );
                    Py_DECREF( tmp_args_element_name_9 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "a" );
                    exception_tb = NULL;

                    exception_lineno = 126;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_left_name_12 = par_a;
                tmp_right_name_12 = const_int_pos_1;
                tmp_args_element_name_10 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_12, tmp_right_name_12 );
                if ( tmp_args_element_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_9 );
                    Py_DECREF( tmp_called_name_2 );
                    Py_DECREF( tmp_args_element_name_9 );

                    exception_lineno = 126;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_x2 );
                tmp_args_element_name_11 = par_x2;
                frame_c74430419e29b69e44b4e0ba56a3bf40->m_frame.f_lineno = 126;
                {
                    PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
                    tmp_right_name_10 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_9 );
                Py_DECREF( tmp_args_element_name_10 );
                if ( tmp_right_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_9 );

                    exception_lineno = 126;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_15 = BINARY_OPERATION_MUL( tmp_left_name_9, tmp_right_name_10 );
                Py_DECREF( tmp_left_name_9 );
                Py_DECREF( tmp_right_name_10 );
                if ( tmp_assign_source_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 126;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_s1 == NULL );
                var_s1 = tmp_assign_source_15;
            }
            {
                PyObject *tmp_assign_source_16;
                PyObject *tmp_left_name_13;
                PyObject *tmp_left_name_14;
                PyObject *tmp_right_name_13;
                PyObject *tmp_right_name_14;
                PyObject *tmp_called_name_3;
                PyObject *tmp_source_name_7;
                PyObject *tmp_args_element_name_12;
                PyObject *tmp_args_element_name_13;
                PyObject *tmp_left_name_15;
                PyObject *tmp_right_name_15;
                PyObject *tmp_args_element_name_14;
                PyObject *tmp_left_name_16;
                PyObject *tmp_right_name_16;
                PyObject *tmp_args_element_name_15;
                CHECK_OBJECT( par_x1 );
                tmp_left_name_14 = par_x1;
                if ( par_a == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "a" );
                    exception_tb = NULL;

                    exception_lineno = 127;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_right_name_13 = par_a;
                tmp_left_name_13 = POWER_OPERATION( tmp_left_name_14, tmp_right_name_13 );
                if ( tmp_left_name_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 127;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_ctx );
                tmp_source_name_7 = par_ctx;
                tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_hyp2f1 );
                if ( tmp_called_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_13 );

                    exception_lineno = 127;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                if ( par_a == NULL )
                {
                    Py_DECREF( tmp_left_name_13 );
                    Py_DECREF( tmp_called_name_3 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "a" );
                    exception_tb = NULL;

                    exception_lineno = 127;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_12 = par_a;
                tmp_left_name_15 = const_int_pos_1;
                CHECK_OBJECT( par_b );
                tmp_right_name_15 = par_b;
                tmp_args_element_name_13 = BINARY_OPERATION_SUB( tmp_left_name_15, tmp_right_name_15 );
                if ( tmp_args_element_name_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_13 );
                    Py_DECREF( tmp_called_name_3 );

                    exception_lineno = 127;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                if ( par_a == NULL )
                {
                    Py_DECREF( tmp_left_name_13 );
                    Py_DECREF( tmp_called_name_3 );
                    Py_DECREF( tmp_args_element_name_13 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "a" );
                    exception_tb = NULL;

                    exception_lineno = 127;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_left_name_16 = par_a;
                tmp_right_name_16 = const_int_pos_1;
                tmp_args_element_name_14 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_16, tmp_right_name_16 );
                if ( tmp_args_element_name_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_13 );
                    Py_DECREF( tmp_called_name_3 );
                    Py_DECREF( tmp_args_element_name_13 );

                    exception_lineno = 127;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_x1 );
                tmp_args_element_name_15 = par_x1;
                frame_c74430419e29b69e44b4e0ba56a3bf40->m_frame.f_lineno = 127;
                {
                    PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
                    tmp_right_name_14 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_element_name_13 );
                Py_DECREF( tmp_args_element_name_14 );
                if ( tmp_right_name_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_13 );

                    exception_lineno = 127;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_16 = BINARY_OPERATION_MUL( tmp_left_name_13, tmp_right_name_14 );
                Py_DECREF( tmp_left_name_13 );
                Py_DECREF( tmp_right_name_14 );
                if ( tmp_assign_source_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 127;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_s2 == NULL );
                var_s2 = tmp_assign_source_16;
            }
            {
                PyObject *tmp_assign_source_17;
                PyObject *tmp_left_name_17;
                PyObject *tmp_left_name_18;
                PyObject *tmp_right_name_17;
                PyObject *tmp_right_name_18;
                CHECK_OBJECT( var_s1 );
                tmp_left_name_18 = var_s1;
                CHECK_OBJECT( var_s2 );
                tmp_right_name_17 = var_s2;
                tmp_left_name_17 = BINARY_OPERATION_SUB( tmp_left_name_18, tmp_right_name_17 );
                if ( tmp_left_name_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 128;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                if ( par_a == NULL )
                {
                    Py_DECREF( tmp_left_name_17 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "a" );
                    exception_tb = NULL;

                    exception_lineno = 128;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_right_name_18 = par_a;
                tmp_assign_source_17 = BINARY_OPERATION_DIV( tmp_left_name_17, tmp_right_name_18 );
                Py_DECREF( tmp_left_name_17 );
                if ( tmp_assign_source_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 128;
                    type_description_1 = "oooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_v == NULL );
                var_v = tmp_assign_source_17;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_regularized );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_regularized );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_18;
            PyObject *tmp_left_name_19;
            PyObject *tmp_right_name_19;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_8;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_args_element_name_17;
            if ( var_v == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "v" );
                exception_tb = NULL;

                exception_lineno = 130;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_19 = var_v;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_8 = par_ctx;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_beta );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 130;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            if ( par_a == NULL )
            {
                Py_DECREF( tmp_called_name_4 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "a" );
                exception_tb = NULL;

                exception_lineno = 130;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_16 = par_a;
            CHECK_OBJECT( par_b );
            tmp_args_element_name_17 = par_b;
            frame_c74430419e29b69e44b4e0ba56a3bf40->m_frame.f_lineno = 130;
            {
                PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17 };
                tmp_right_name_19 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            if ( tmp_right_name_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 130;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceDivide, &tmp_left_name_19, tmp_right_name_19 );
            Py_DECREF( tmp_right_name_19 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 130;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_18 = tmp_left_name_19;
            var_v = tmp_assign_source_18;

        }
        branch_no_7:;
    }
    if ( var_v == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "v" );
        exception_tb = NULL;

        exception_lineno = 131;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_v;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c74430419e29b69e44b4e0ba56a3bf40 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c74430419e29b69e44b4e0ba56a3bf40 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c74430419e29b69e44b4e0ba56a3bf40 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c74430419e29b69e44b4e0ba56a3bf40, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c74430419e29b69e44b4e0ba56a3bf40->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c74430419e29b69e44b4e0ba56a3bf40, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c74430419e29b69e44b4e0ba56a3bf40,
        type_description_1,
        par_ctx,
        par_a,
        par_b,
        par_x1,
        par_x2,
        par_regularized,
        var_s2,
        var_d,
        var_m,
        var_s1,
        var_h,
        var_v
    );


    // Release cached frame.
    if ( frame_c74430419e29b69e44b4e0ba56a3bf40 == cache_frame_c74430419e29b69e44b4e0ba56a3bf40 )
    {
        Py_DECREF( frame_c74430419e29b69e44b4e0ba56a3bf40 );
    }
    cache_frame_c74430419e29b69e44b4e0ba56a3bf40 = NULL;

    assertFrameObject( frame_c74430419e29b69e44b4e0ba56a3bf40 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_10_betainc );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_a );
    par_a = NULL;

    Py_XDECREF( var_s2 );
    var_s2 = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_s1 );
    var_s1 = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_regularized );
    Py_DECREF( par_regularized );
    par_regularized = NULL;

    Py_XDECREF( var_h );
    var_h = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    CHECK_OBJECT( (PyObject *)par_x2 );
    Py_DECREF( par_x2 );
    par_x2 = NULL;

    CHECK_OBJECT( (PyObject *)par_x1 );
    Py_DECREF( par_x1 );
    par_x1 = NULL;

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

    Py_XDECREF( par_a );
    par_a = NULL;

    Py_XDECREF( var_s2 );
    var_s2 = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_s1 );
    var_s1 = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_regularized );
    Py_DECREF( par_regularized );
    par_regularized = NULL;

    Py_XDECREF( var_h );
    var_h = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    CHECK_OBJECT( (PyObject *)par_x2 );
    Py_DECREF( par_x2 );
    par_x2 = NULL;

    CHECK_OBJECT( (PyObject *)par_x1 );
    Py_DECREF( par_x1 );
    par_x1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_10_betainc );
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


static PyObject *impl_mpmath$functions$expintegrals$$$function_11_gammainc( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    PyObject *par_a = python_pars[ 2 ];
    PyObject *par_b = python_pars[ 3 ];
    PyObject *par_regularized = python_pars[ 4 ];
    PyObject *var_lower_modified = NULL;
    PyObject *var_upper_modified = NULL;
    struct Nuitka_FrameObject *frame_82f330fe39d230cc02ec5c60221e2859;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_82f330fe39d230cc02ec5c60221e2859 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_82f330fe39d230cc02ec5c60221e2859, codeobj_82f330fe39d230cc02ec5c60221e2859, module_mpmath$functions$expintegrals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_82f330fe39d230cc02ec5c60221e2859 = cache_frame_82f330fe39d230cc02ec5c60221e2859;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_82f330fe39d230cc02ec5c60221e2859 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_82f330fe39d230cc02ec5c60221e2859 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_value_name_1;
        CHECK_OBJECT( par_regularized );
        tmp_value_name_1 = par_regularized;
        tmp_res = CHECK_IF_TRUE( tmp_value_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        {
            PyObject *old = par_regularized;
            assert( old != NULL );
            par_regularized = tmp_assign_source_1;
            Py_INCREF( par_regularized );
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_1 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_1 = par_z;
        frame_82f330fe39d230cc02ec5c60221e2859->m_frame.f_lineno = 136;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_convert, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_z;
            assert( old != NULL );
            par_z = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_a );
        tmp_compexpr_left_1 = par_a;
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
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_1 = par_ctx;
            tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_zero );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 138;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_a;
                assert( old != NULL );
                par_a = tmp_assign_source_3;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = Py_False;
            assert( var_lower_modified == NULL );
            Py_INCREF( tmp_assign_source_4 );
            var_lower_modified = tmp_assign_source_4;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_2 = par_ctx;
            CHECK_OBJECT( par_a );
            tmp_args_element_name_2 = par_a;
            frame_82f330fe39d230cc02ec5c60221e2859->m_frame.f_lineno = 141;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_convert, call_args );
            }

            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 141;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_a;
                assert( old != NULL );
                par_a = tmp_assign_source_5;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_a );
            tmp_compexpr_left_2 = par_a;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_2 = par_ctx;
            tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_zero );
            if ( tmp_compexpr_right_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 142;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_6 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 142;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_lower_modified == NULL );
            var_lower_modified = tmp_assign_source_6;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_b );
        tmp_compexpr_left_3 = par_b;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_3 = par_ctx;
            tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_inf );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 144;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_b;
                assert( old != NULL );
                par_b = tmp_assign_source_7;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = Py_False;
            assert( var_upper_modified == NULL );
            Py_INCREF( tmp_assign_source_8 );
            var_upper_modified = tmp_assign_source_8;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_3 = par_ctx;
            CHECK_OBJECT( par_b );
            tmp_args_element_name_3 = par_b;
            frame_82f330fe39d230cc02ec5c60221e2859->m_frame.f_lineno = 147;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_assign_source_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_convert, call_args );
            }

            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 147;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_b;
                assert( old != NULL );
                par_b = tmp_assign_source_9;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( par_b );
            tmp_compexpr_left_4 = par_b;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_4 = par_ctx;
            tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_inf );
            if ( tmp_compexpr_right_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 148;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_10 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_right_4 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 148;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_upper_modified == NULL );
            var_upper_modified = tmp_assign_source_10;
        }
        branch_end_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        CHECK_OBJECT( var_upper_modified );
        tmp_or_left_value_1 = var_upper_modified;
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_1 = "ooooooo";
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
        CHECK_OBJECT( var_lower_modified );
        tmp_or_right_value_1 = var_lower_modified;
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


            exception_lineno = 150;
            type_description_1 = "ooooooo";
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
            nuitka_bool tmp_condition_result_4;
            int tmp_truth_name_1;
            CHECK_OBJECT( par_regularized );
            tmp_truth_name_1 = CHECK_IF_TRUE( par_regularized );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 151;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_4 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                PyObject *tmp_called_instance_4;
                PyObject *tmp_args_element_name_4;
                CHECK_OBJECT( par_ctx );
                tmp_called_instance_4 = par_ctx;
                CHECK_OBJECT( par_z );
                tmp_args_element_name_4 = par_z;
                frame_82f330fe39d230cc02ec5c60221e2859->m_frame.f_lineno = 152;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4 };
                    tmp_compexpr_left_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_re, call_args );
                }

                if ( tmp_compexpr_left_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 152;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_5 = const_int_0;
                tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                Py_DECREF( tmp_compexpr_left_5 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 152;
                    type_description_1 = "ooooooo";
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
                    PyObject *tmp_source_name_5;
                    CHECK_OBJECT( par_ctx );
                    tmp_source_name_5 = par_ctx;
                    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_inf );
                    if ( tmp_return_value == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 153;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    goto frame_return_exit_1;
                }
                goto branch_end_5;
                branch_no_5:;
                {
                    nuitka_bool tmp_condition_result_6;
                    PyObject *tmp_compexpr_left_6;
                    PyObject *tmp_compexpr_right_6;
                    PyObject *tmp_called_instance_5;
                    PyObject *tmp_args_element_name_5;
                    CHECK_OBJECT( par_ctx );
                    tmp_called_instance_5 = par_ctx;
                    CHECK_OBJECT( par_z );
                    tmp_args_element_name_5 = par_z;
                    frame_82f330fe39d230cc02ec5c60221e2859->m_frame.f_lineno = 154;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_5 };
                        tmp_compexpr_left_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_re, call_args );
                    }

                    if ( tmp_compexpr_left_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 154;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_compexpr_right_6 = const_int_0;
                    tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
                    Py_DECREF( tmp_compexpr_left_6 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 154;
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
                        PyObject *tmp_source_name_6;
                        CHECK_OBJECT( par_ctx );
                        tmp_source_name_6 = par_ctx;
                        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_one );
                        if ( tmp_return_value == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 155;
                            type_description_1 = "ooooooo";
                            goto frame_exception_exit_1;
                        }
                        goto frame_return_exit_1;
                    }
                    goto branch_end_6;
                    branch_no_6:;
                    {
                        PyObject *tmp_source_name_7;
                        CHECK_OBJECT( par_ctx );
                        tmp_source_name_7 = par_ctx;
                        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_nan );
                        if ( tmp_return_value == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 157;
                            type_description_1 = "ooooooo";
                            goto frame_exception_exit_1;
                        }
                        goto frame_return_exit_1;
                    }
                    branch_end_6:;
                }
                branch_end_5:;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_name_6;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_6 = par_ctx;
            CHECK_OBJECT( par_z );
            tmp_args_element_name_6 = par_z;
            frame_82f330fe39d230cc02ec5c60221e2859->m_frame.f_lineno = 158;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_gamma, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 158;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        CHECK_OBJECT( par_a );
        tmp_compexpr_left_7 = par_a;
        CHECK_OBJECT( par_b );
        tmp_compexpr_right_7 = par_b;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
            type_description_1 = "ooooooo";
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
            PyObject *tmp_source_name_8;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_8 = par_ctx;
            tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_zero );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 160;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_7:;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_7 = par_ctx;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_7 = par_a;
        frame_82f330fe39d230cc02ec5c60221e2859->m_frame.f_lineno = 162;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_compexpr_left_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_re, call_args );
        }

        if ( tmp_compexpr_left_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_8 = par_ctx;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_8 = par_b;
        frame_82f330fe39d230cc02ec5c60221e2859->m_frame.f_lineno = 162;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_compexpr_right_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_re, call_args );
        }

        if ( tmp_compexpr_right_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_8 );

            exception_lineno = 162;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        Py_DECREF( tmp_compexpr_left_8 );
        Py_DECREF( tmp_compexpr_right_8 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
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
            PyObject *tmp_operand_name_2;
            PyObject *tmp_called_instance_9;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_args_element_name_12;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_9 = par_ctx;
            CHECK_OBJECT( par_z );
            tmp_args_element_name_9 = par_z;
            CHECK_OBJECT( par_b );
            tmp_args_element_name_10 = par_b;
            CHECK_OBJECT( par_a );
            tmp_args_element_name_11 = par_a;
            CHECK_OBJECT( par_regularized );
            tmp_args_element_name_12 = par_regularized;
            frame_82f330fe39d230cc02ec5c60221e2859->m_frame.f_lineno = 163;
            {
                PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
                tmp_operand_name_2 = CALL_METHOD_WITH_ARGS4( tmp_called_instance_9, const_str_plain_gammainc, call_args );
            }

            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 163;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 163;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_8:;
    }
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_2;
        int tmp_truth_name_3;
        CHECK_OBJECT( var_upper_modified );
        tmp_truth_name_2 = CHECK_IF_TRUE( var_upper_modified );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_lower_modified );
        tmp_truth_name_3 = CHECK_IF_TRUE( var_lower_modified );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_9 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_9 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_operand_name_3;
            PyObject *tmp_called_instance_10;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_args_element_name_16;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_10 = par_ctx;
            CHECK_OBJECT( par_z );
            tmp_args_element_name_13 = par_z;
            CHECK_OBJECT( par_a );
            tmp_args_element_name_14 = par_a;
            CHECK_OBJECT( par_b );
            tmp_args_element_name_15 = par_b;
            CHECK_OBJECT( par_regularized );
            tmp_args_element_name_16 = par_regularized;
            frame_82f330fe39d230cc02ec5c60221e2859->m_frame.f_lineno = 166;
            {
                PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16 };
                tmp_operand_name_3 = CALL_METHOD_WITH_ARGS4( tmp_called_instance_10, const_str_plain__gamma3, call_args );
            }

            if ( tmp_operand_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = UNARY_OPERATION( PyNumber_Positive, tmp_operand_name_3 );
            Py_DECREF( tmp_operand_name_3 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_9;
        branch_no_9:;
        {
            nuitka_bool tmp_condition_result_10;
            int tmp_truth_name_4;
            CHECK_OBJECT( var_lower_modified );
            tmp_truth_name_4 = CHECK_IF_TRUE( var_lower_modified );
            if ( tmp_truth_name_4 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 168;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_10 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_instance_11;
                PyObject *tmp_args_element_name_17;
                PyObject *tmp_args_element_name_18;
                PyObject *tmp_args_element_name_19;
                CHECK_OBJECT( par_ctx );
                tmp_called_instance_11 = par_ctx;
                CHECK_OBJECT( par_z );
                tmp_args_element_name_17 = par_z;
                CHECK_OBJECT( par_a );
                tmp_args_element_name_18 = par_a;
                CHECK_OBJECT( par_regularized );
                tmp_args_element_name_19 = par_regularized;
                frame_82f330fe39d230cc02ec5c60221e2859->m_frame.f_lineno = 169;
                {
                    PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19 };
                    tmp_return_value = CALL_METHOD_WITH_ARGS3( tmp_called_instance_11, const_str_plain__upper_gamma, call_args );
                }

                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 169;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_10;
            branch_no_10:;
            {
                nuitka_bool tmp_condition_result_11;
                int tmp_truth_name_5;
                CHECK_OBJECT( var_upper_modified );
                tmp_truth_name_5 = CHECK_IF_TRUE( var_upper_modified );
                if ( tmp_truth_name_5 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 171;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_11 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_called_instance_12;
                    PyObject *tmp_args_element_name_20;
                    PyObject *tmp_args_element_name_21;
                    PyObject *tmp_args_element_name_22;
                    CHECK_OBJECT( par_ctx );
                    tmp_called_instance_12 = par_ctx;
                    CHECK_OBJECT( par_z );
                    tmp_args_element_name_20 = par_z;
                    CHECK_OBJECT( par_b );
                    tmp_args_element_name_21 = par_b;
                    CHECK_OBJECT( par_regularized );
                    tmp_args_element_name_22 = par_regularized;
                    frame_82f330fe39d230cc02ec5c60221e2859->m_frame.f_lineno = 172;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_20, tmp_args_element_name_21, tmp_args_element_name_22 };
                        tmp_return_value = CALL_METHOD_WITH_ARGS3( tmp_called_instance_12, const_str_plain__lower_gamma, call_args );
                    }

                    if ( tmp_return_value == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 172;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    goto frame_return_exit_1;
                }
                branch_no_11:;
            }
            branch_end_10:;
        }
        branch_end_9:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_82f330fe39d230cc02ec5c60221e2859 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_82f330fe39d230cc02ec5c60221e2859 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_82f330fe39d230cc02ec5c60221e2859 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_82f330fe39d230cc02ec5c60221e2859, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_82f330fe39d230cc02ec5c60221e2859->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_82f330fe39d230cc02ec5c60221e2859, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_82f330fe39d230cc02ec5c60221e2859,
        type_description_1,
        par_ctx,
        par_z,
        par_a,
        par_b,
        par_regularized,
        var_lower_modified,
        var_upper_modified
    );


    // Release cached frame.
    if ( frame_82f330fe39d230cc02ec5c60221e2859 == cache_frame_82f330fe39d230cc02ec5c60221e2859 )
    {
        Py_DECREF( frame_82f330fe39d230cc02ec5c60221e2859 );
    }
    cache_frame_82f330fe39d230cc02ec5c60221e2859 = NULL;

    assertFrameObject( frame_82f330fe39d230cc02ec5c60221e2859 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_11_gammainc );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)var_lower_modified );
    Py_DECREF( var_lower_modified );
    var_lower_modified = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_regularized );
    Py_DECREF( par_regularized );
    par_regularized = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)var_upper_modified );
    Py_DECREF( var_upper_modified );
    var_upper_modified = NULL;

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

    Py_XDECREF( par_b );
    par_b = NULL;

    Py_XDECREF( var_lower_modified );
    var_lower_modified = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_regularized );
    Py_DECREF( par_regularized );
    par_regularized = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    Py_XDECREF( var_upper_modified );
    var_upper_modified = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_11_gammainc );
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


static PyObject *impl_mpmath$functions$expintegrals$$$function_12__lower_gamma( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_ctx = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *par_z = python_pars[ 1 ];
    struct Nuitka_CellObject *par_b = PyCell_NEW1( python_pars[ 2 ] );
    PyObject *par_regularized = python_pars[ 3 ];
    struct Nuitka_CellObject *var_G = PyCell_EMPTY();
    PyObject *var_h = NULL;
    struct Nuitka_CellObject *var_negb = PyCell_EMPTY();
    struct Nuitka_FrameObject *frame_980e35055d58d0fe0d5a7a367140b75d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_980e35055d58d0fe0d5a7a367140b75d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_980e35055d58d0fe0d5a7a367140b75d, codeobj_980e35055d58d0fe0d5a7a367140b75d, module_mpmath$functions$expintegrals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_980e35055d58d0fe0d5a7a367140b75d = cache_frame_980e35055d58d0fe0d5a7a367140b75d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_980e35055d58d0fe0d5a7a367140b75d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_980e35055d58d0fe0d5a7a367140b75d ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_called_instance_1 = PyCell_GET( par_ctx );
        CHECK_OBJECT( par_z );
        tmp_args_element_name_1 = par_z;
        frame_980e35055d58d0fe0d5a7a367140b75d->m_frame.f_lineno = 177;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_isnpint, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
            type_description_1 = "cocococ";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 177;
            type_description_1 = "cocococ";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_type_arg_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( par_z );
            tmp_type_arg_1 = par_z;
            tmp_called_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
            assert( !(tmp_called_name_1 == NULL) );
            CHECK_OBJECT( PyCell_GET( par_ctx ) );
            tmp_source_name_1 = PyCell_GET( par_ctx );
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_inf );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 178;
                type_description_1 = "cocococ";
                goto frame_exception_exit_1;
            }
            frame_980e35055d58d0fe0d5a7a367140b75d->m_frame.f_lineno = 178;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 178;
                type_description_1 = "cocococ";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_z );
        tmp_list_element_1 = par_z;
        tmp_left_name_1 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_left_name_1, 0, tmp_list_element_1 );
        CHECK_OBJECT( par_regularized );
        tmp_right_name_1 = par_regularized;
        tmp_assign_source_1 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "cocococ";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_G ) == NULL );
        PyCell_SET( var_G, tmp_assign_source_1 );

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_source_name_2 = PyCell_GET( par_ctx );
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_fneg );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;
            type_description_1 = "cocococ";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( PyCell_GET( par_b ) );
        tmp_tuple_element_1 = PyCell_GET( par_b );
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_550e1ff28680964f0a1daa61d55eac15 );
        frame_980e35055d58d0fe0d5a7a367140b75d->m_frame.f_lineno = 180;
        tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;
            type_description_1 = "cocococ";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_negb ) == NULL );
        PyCell_SET( var_negb, tmp_assign_source_2 );

    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_12__lower_gamma$$$function_1_h(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[0] = var_G;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[1] = par_b;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[1] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[2] = par_ctx;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[2] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[3] = var_negb;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[3] );


        assert( var_h == NULL );
        var_h = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_list_element_2;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_called_instance_2 = PyCell_GET( par_ctx );
        CHECK_OBJECT( var_h );
        tmp_args_element_name_3 = var_h;
        CHECK_OBJECT( par_z );
        tmp_list_element_2 = par_z;
        tmp_args_element_name_4 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_2 );
        PyList_SET_ITEM( tmp_args_element_name_4, 0, tmp_list_element_2 );
        frame_980e35055d58d0fe0d5a7a367140b75d->m_frame.f_lineno = 184;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_hypercomb, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "cocococ";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_980e35055d58d0fe0d5a7a367140b75d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_980e35055d58d0fe0d5a7a367140b75d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_980e35055d58d0fe0d5a7a367140b75d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_980e35055d58d0fe0d5a7a367140b75d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_980e35055d58d0fe0d5a7a367140b75d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_980e35055d58d0fe0d5a7a367140b75d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_980e35055d58d0fe0d5a7a367140b75d,
        type_description_1,
        par_ctx,
        par_z,
        par_b,
        par_regularized,
        var_G,
        var_h,
        var_negb
    );


    // Release cached frame.
    if ( frame_980e35055d58d0fe0d5a7a367140b75d == cache_frame_980e35055d58d0fe0d5a7a367140b75d )
    {
        Py_DECREF( frame_980e35055d58d0fe0d5a7a367140b75d );
    }
    cache_frame_980e35055d58d0fe0d5a7a367140b75d = NULL;

    assertFrameObject( frame_980e35055d58d0fe0d5a7a367140b75d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_12__lower_gamma );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)var_G );
    Py_DECREF( var_G );
    var_G = NULL;

    Py_XDECREF( var_h );
    var_h = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_regularized );
    Py_DECREF( par_regularized );
    par_regularized = NULL;

    CHECK_OBJECT( (PyObject *)var_negb );
    Py_DECREF( var_negb );
    var_negb = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

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

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)var_G );
    Py_DECREF( var_G );
    var_G = NULL;

    Py_XDECREF( var_h );
    var_h = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_regularized );
    Py_DECREF( par_regularized );
    par_regularized = NULL;

    CHECK_OBJECT( (PyObject *)var_negb );
    Py_DECREF( var_negb );
    var_negb = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_12__lower_gamma );
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


static PyObject *impl_mpmath$functions$expintegrals$$$function_12__lower_gamma$$$function_1_h( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_z = python_pars[ 0 ];
    PyObject *var_T1 = NULL;
    struct Nuitka_FrameObject *frame_3b8b4ae7817486bbfbb49d6a82c4e6c8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3b8b4ae7817486bbfbb49d6a82c4e6c8 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3b8b4ae7817486bbfbb49d6a82c4e6c8, codeobj_3b8b4ae7817486bbfbb49d6a82c4e6c8, module_mpmath$functions$expintegrals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3b8b4ae7817486bbfbb49d6a82c4e6c8 = cache_frame_3b8b4ae7817486bbfbb49d6a82c4e6c8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3b8b4ae7817486bbfbb49d6a82c4e6c8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3b8b4ae7817486bbfbb49d6a82c4e6c8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_element_2;
        PyObject *tmp_list_element_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ctx" );
            exception_tb = NULL;

            exception_lineno = 182;
            type_description_1 = "occcoc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET( self->m_closure[2] );
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_exp );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "occcoc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[3] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "negb" );
            exception_tb = NULL;

            exception_lineno = 182;
            type_description_1 = "occcoc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = PyCell_GET( self->m_closure[3] );
        frame_3b8b4ae7817486bbfbb49d6a82c4e6c8->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "occcoc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = PyList_New( 3 );
        PyList_SET_ITEM( tmp_tuple_element_1, 0, tmp_list_element_1 );
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_tuple_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "b" );
            exception_tb = NULL;

            exception_lineno = 182;
            type_description_1 = "occcoc";
            goto frame_exception_exit_1;
        }

        tmp_list_element_1 = PyCell_GET( self->m_closure[1] );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_tuple_element_1, 1, tmp_list_element_1 );
        CHECK_OBJECT( par_z );
        tmp_list_element_1 = par_z;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_tuple_element_1, 2, tmp_list_element_1 );
        tmp_assign_source_1 = PyTuple_New( 7 );
        PyTuple_SET_ITEM( tmp_assign_source_1, 0, tmp_tuple_element_1 );
        tmp_list_element_2 = const_int_pos_1;
        tmp_tuple_element_1 = PyList_New( 3 );
        Py_INCREF( tmp_list_element_2 );
        PyList_SET_ITEM( tmp_tuple_element_1, 0, tmp_list_element_2 );
        CHECK_OBJECT( par_z );
        tmp_list_element_2 = par_z;
        Py_INCREF( tmp_list_element_2 );
        PyList_SET_ITEM( tmp_tuple_element_1, 1, tmp_list_element_2 );
        tmp_list_element_2 = const_int_neg_1;
        Py_INCREF( tmp_list_element_2 );
        PyList_SET_ITEM( tmp_tuple_element_1, 2, tmp_list_element_2 );
        PyTuple_SET_ITEM( tmp_assign_source_1, 1, tmp_tuple_element_1 );
        tmp_tuple_element_1 = PyList_New( 0 );
        PyTuple_SET_ITEM( tmp_assign_source_1, 2, tmp_tuple_element_1 );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_assign_source_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "G" );
            exception_tb = NULL;

            exception_lineno = 182;
            type_description_1 = "occcoc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[0] );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_1, 3, tmp_tuple_element_1 );
        tmp_tuple_element_1 = LIST_COPY( const_list_int_pos_1_list );
        PyTuple_SET_ITEM( tmp_assign_source_1, 4, tmp_tuple_element_1 );
        tmp_left_name_1 = const_int_pos_1;
        CHECK_OBJECT( par_z );
        tmp_right_name_1 = par_z;
        tmp_list_element_3 = BINARY_OPERATION_ADD_INT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_list_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );

            exception_lineno = 182;
            type_description_1 = "occcoc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = PyList_New( 1 );
        PyList_SET_ITEM( tmp_tuple_element_1, 0, tmp_list_element_3 );
        PyTuple_SET_ITEM( tmp_assign_source_1, 5, tmp_tuple_element_1 );
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_assign_source_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "b" );
            exception_tb = NULL;

            exception_lineno = 182;
            type_description_1 = "occcoc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[1] );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_1, 6, tmp_tuple_element_1 );
        assert( var_T1 == NULL );
        var_T1 = tmp_assign_source_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b8b4ae7817486bbfbb49d6a82c4e6c8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b8b4ae7817486bbfbb49d6a82c4e6c8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3b8b4ae7817486bbfbb49d6a82c4e6c8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3b8b4ae7817486bbfbb49d6a82c4e6c8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3b8b4ae7817486bbfbb49d6a82c4e6c8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3b8b4ae7817486bbfbb49d6a82c4e6c8,
        type_description_1,
        par_z,
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[2],
        var_T1,
        self->m_closure[3]
    );


    // Release cached frame.
    if ( frame_3b8b4ae7817486bbfbb49d6a82c4e6c8 == cache_frame_3b8b4ae7817486bbfbb49d6a82c4e6c8 )
    {
        Py_DECREF( frame_3b8b4ae7817486bbfbb49d6a82c4e6c8 );
    }
    cache_frame_3b8b4ae7817486bbfbb49d6a82c4e6c8 = NULL;

    assertFrameObject( frame_3b8b4ae7817486bbfbb49d6a82c4e6c8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT( var_T1 );
        tmp_tuple_element_2 = var_T1;
        tmp_return_value = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_12__lower_gamma$$$function_1_h );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_T1 );
    Py_DECREF( var_T1 );
    var_T1 = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

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

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_12__lower_gamma$$$function_1_h );
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


static PyObject *impl_mpmath$functions$expintegrals$$$function_13__upper_gamma( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_ctx = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *par_z = python_pars[ 1 ];
    struct Nuitka_CellObject *par_a = PyCell_NEW1( python_pars[ 2 ] );
    PyObject *par_regularized = python_pars[ 3 ];
    struct Nuitka_CellObject *var_G = PyCell_EMPTY();
    PyObject *var_h = NULL;
    struct Nuitka_CellObject *var_nega = PyCell_EMPTY();
    PyObject *var_orig = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_cb4229f991058b0b9c2f86b71795eb5d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    int tmp_res;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_cb4229f991058b0b9c2f86b71795eb5d = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cb4229f991058b0b9c2f86b71795eb5d, codeobj_cb4229f991058b0b9c2f86b71795eb5d, module_mpmath$functions$expintegrals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cb4229f991058b0b9c2f86b71795eb5d = cache_frame_cb4229f991058b0b9c2f86b71795eb5d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cb4229f991058b0b9c2f86b71795eb5d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cb4229f991058b0b9c2f86b71795eb5d ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_called_instance_1 = PyCell_GET( par_ctx );
        CHECK_OBJECT( par_z );
        tmp_args_element_name_1 = par_z;
        frame_cb4229f991058b0b9c2f86b71795eb5d->m_frame.f_lineno = 189;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_isint, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "cocococo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 189;
            type_description_1 = "cocococo";
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
        // Tried code:
        {
            nuitka_bool tmp_condition_result_2;
            int tmp_truth_name_2;
            CHECK_OBJECT( par_regularized );
            tmp_truth_name_2 = CHECK_IF_TRUE( par_regularized );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 191;
                type_description_1 = "cocococo";
                goto try_except_handler_2;
            }
            tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_called_instance_2;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_element_name_2;
                int tmp_truth_name_3;
                CHECK_OBJECT( PyCell_GET( par_ctx ) );
                tmp_called_instance_2 = PyCell_GET( par_ctx );
                CHECK_OBJECT( par_z );
                tmp_args_element_name_2 = par_z;
                frame_cb4229f991058b0b9c2f86b71795eb5d->m_frame.f_lineno = 193;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2 };
                    tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_isnpint, call_args );
                }

                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 193;
                    type_description_1 = "cocococo";
                    goto try_except_handler_2;
                }
                tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_2 );
                if ( tmp_truth_name_3 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_call_result_2 );

                    exception_lineno = 193;
                    type_description_1 = "cocococo";
                    goto try_except_handler_2;
                }
                tmp_condition_result_3 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_2 );
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
                    PyObject *tmp_type_arg_1;
                    PyObject *tmp_args_element_name_3;
                    PyObject *tmp_source_name_1;
                    CHECK_OBJECT( par_z );
                    tmp_type_arg_1 = par_z;
                    tmp_called_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
                    assert( !(tmp_called_name_1 == NULL) );
                    CHECK_OBJECT( PyCell_GET( par_ctx ) );
                    tmp_source_name_1 = PyCell_GET( par_ctx );
                    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_zero );
                    if ( tmp_args_element_name_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_1 );

                        exception_lineno = 194;
                        type_description_1 = "cocococo";
                        goto try_except_handler_2;
                    }
                    frame_cb4229f991058b0b9c2f86b71795eb5d->m_frame.f_lineno = 194;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_3 };
                        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                    }

                    Py_DECREF( tmp_called_name_1 );
                    Py_DECREF( tmp_args_element_name_3 );
                    if ( tmp_return_value == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 194;
                        type_description_1 = "cocococo";
                        goto try_except_handler_2;
                    }
                    goto frame_return_exit_1;
                }
                branch_no_3:;
            }
            {
                PyObject *tmp_assign_source_1;
                PyObject *tmp_source_name_2;
                CHECK_OBJECT( PyCell_GET( par_ctx ) );
                tmp_source_name_2 = PyCell_GET( par_ctx );
                tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_prec );
                if ( tmp_assign_source_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 195;
                    type_description_1 = "cocococo";
                    goto try_except_handler_2;
                }
                assert( var_orig == NULL );
                var_orig = tmp_assign_source_1;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_2;
                PyObject *tmp_source_name_3;
                CHECK_OBJECT( PyCell_GET( par_ctx ) );
                tmp_source_name_3 = PyCell_GET( par_ctx );
                tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_prec );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 197;
                    type_description_1 = "cocococo";
                    goto try_except_handler_3;
                }
                assert( tmp_inplace_assign_attr_1__start == NULL );
                tmp_inplace_assign_attr_1__start = tmp_assign_source_2;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
                tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
                tmp_right_name_1 = const_int_pos_10;
                tmp_assign_source_3 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 197;
                    type_description_1 = "cocococo";
                    goto try_except_handler_4;
                }
                assert( tmp_inplace_assign_attr_1__end == NULL );
                tmp_inplace_assign_attr_1__end = tmp_assign_source_3;
            }
            // Tried code:
            {
                PyObject *tmp_assattr_name_1;
                PyObject *tmp_assattr_target_1;
                CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
                tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
                CHECK_OBJECT( PyCell_GET( par_ctx ) );
                tmp_assattr_target_1 = PyCell_GET( par_ctx );
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_prec, tmp_assattr_name_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 197;
                    type_description_1 = "cocococo";
                    goto try_except_handler_5;
                }
            }
            goto try_end_1;
            // Exception handler code:
            try_except_handler_5:;
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

            goto try_except_handler_4;
            // End of try:
            try_end_1:;
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

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
            Py_DECREF( tmp_inplace_assign_attr_1__start );
            tmp_inplace_assign_attr_1__start = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto try_except_handler_3;
            // End of try:
            try_end_2:;
            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
            Py_DECREF( tmp_inplace_assign_attr_1__end );
            tmp_inplace_assign_attr_1__end = NULL;

            CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
            Py_DECREF( tmp_inplace_assign_attr_1__start );
            tmp_inplace_assign_attr_1__start = NULL;

            {
                PyObject *tmp_left_name_2;
                PyObject *tmp_called_instance_3;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_right_name_2;
                PyObject *tmp_called_instance_4;
                PyObject *tmp_args_element_name_6;
                CHECK_OBJECT( PyCell_GET( par_ctx ) );
                tmp_called_instance_3 = PyCell_GET( par_ctx );
                CHECK_OBJECT( par_z );
                tmp_args_element_name_4 = par_z;
                CHECK_OBJECT( PyCell_GET( par_a ) );
                tmp_args_element_name_5 = PyCell_GET( par_a );
                frame_cb4229f991058b0b9c2f86b71795eb5d->m_frame.f_lineno = 198;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                    tmp_left_name_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain__gamma_upper_int, call_args );
                }

                if ( tmp_left_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 198;
                    type_description_1 = "cocococo";
                    goto try_except_handler_3;
                }
                CHECK_OBJECT( PyCell_GET( par_ctx ) );
                tmp_called_instance_4 = PyCell_GET( par_ctx );
                CHECK_OBJECT( par_z );
                tmp_args_element_name_6 = par_z;
                frame_cb4229f991058b0b9c2f86b71795eb5d->m_frame.f_lineno = 198;
                {
                    PyObject *call_args[] = { tmp_args_element_name_6 };
                    tmp_right_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_gamma, call_args );
                }

                if ( tmp_right_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_2 );

                    exception_lineno = 198;
                    type_description_1 = "cocococo";
                    goto try_except_handler_3;
                }
                tmp_return_value = BINARY_OPERATION_DIV( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_left_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 198;
                    type_description_1 = "cocococo";
                    goto try_except_handler_3;
                }
                goto try_return_handler_3;
            }
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_13__upper_gamma );
            return NULL;
            // Return handler code:
            try_return_handler_3:;
            {
                PyObject *tmp_assattr_name_2;
                PyObject *tmp_assattr_target_2;
                CHECK_OBJECT( var_orig );
                tmp_assattr_name_2 = var_orig;
                CHECK_OBJECT( PyCell_GET( par_ctx ) );
                tmp_assattr_target_2 = PyCell_GET( par_ctx );
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_prec, tmp_assattr_name_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 200;
                    type_description_1 = "cocococo";
                    goto try_except_handler_2;
                }
            }
            goto frame_return_exit_1;
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

            {
                PyObject *tmp_assattr_name_3;
                PyObject *tmp_assattr_target_3;
                CHECK_OBJECT( var_orig );
                tmp_assattr_name_3 = var_orig;
                CHECK_OBJECT( PyCell_GET( par_ctx ) );
                tmp_assattr_target_3 = PyCell_GET( par_ctx );
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_prec, tmp_assattr_name_3 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    Py_DECREF( exception_keeper_type_3 );
                    Py_XDECREF( exception_keeper_value_3 );
                    Py_XDECREF( exception_keeper_tb_3 );

                    exception_lineno = 200;
                    type_description_1 = "cocococo";
                    goto try_except_handler_2;
                }
            }
            // Re-raise.
            exception_type = exception_keeper_type_3;
            exception_value = exception_keeper_value_3;
            exception_tb = exception_keeper_tb_3;
            exception_lineno = exception_keeper_lineno_3;

            goto try_except_handler_2;
            // End of try:
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_called_instance_5;
                PyObject *tmp_args_element_name_7;
                PyObject *tmp_args_element_name_8;
                CHECK_OBJECT( PyCell_GET( par_ctx ) );
                tmp_called_instance_5 = PyCell_GET( par_ctx );
                CHECK_OBJECT( par_z );
                tmp_args_element_name_7 = par_z;
                CHECK_OBJECT( PyCell_GET( par_a ) );
                tmp_args_element_name_8 = PyCell_GET( par_a );
                frame_cb4229f991058b0b9c2f86b71795eb5d->m_frame.f_lineno = 202;
                {
                    PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                    tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain__gamma_upper_int, call_args );
                }

                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 202;
                    type_description_1 = "cocococo";
                    goto try_except_handler_2;
                }
                goto frame_return_exit_1;
            }
            branch_end_2:;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_13__upper_gamma );
        return NULL;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Preserve existing published exception.
        PRESERVE_FRAME_EXCEPTION( frame_cb4229f991058b0b9c2f86b71795eb5d );
        if ( exception_keeper_tb_4 == NULL )
        {
            exception_keeper_tb_4 = MAKE_TRACEBACK( frame_cb4229f991058b0b9c2f86b71795eb5d, exception_keeper_lineno_4 );
        }
        else if ( exception_keeper_lineno_4 != 0 )
        {
            exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, frame_cb4229f991058b0b9c2f86b71795eb5d, exception_keeper_lineno_4 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
        PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_1 = PyExc_NotImplementedError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 203;
                type_description_1 = "cocococo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 203;
                type_description_1 = "cocococo";
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
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 190;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_cb4229f991058b0b9c2f86b71795eb5d->m_frame) frame_cb4229f991058b0b9c2f86b71795eb5d->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "cocococo";
            goto frame_exception_exit_1;
            branch_no_4:;
        }
        goto try_end_3;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_13__upper_gamma );
        return NULL;
        // End of try:
        try_end_3:;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_z );
        tmp_compexpr_left_2 = par_z;
        tmp_compexpr_right_2 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;
            type_description_1 = "cocococo";
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
        CHECK_OBJECT( PyCell_GET( par_a ) );
        tmp_compexpr_left_3 = PyCell_GET( par_a );
        tmp_compexpr_right_3 = const_int_neg_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;
            type_description_1 = "cocococo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_left_name_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_3;
            PyObject *tmp_right_name_4;
            CHECK_OBJECT( par_z );
            tmp_left_name_4 = par_z;
            CHECK_OBJECT( PyCell_GET( par_a ) );
            tmp_right_name_3 = PyCell_GET( par_a );
            tmp_left_name_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_3 );
            if ( tmp_left_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 207;
                type_description_1 = "cocococo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_4 = const_int_0;
            tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_3 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 207;
                type_description_1 = "cocococo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( par_z );
        tmp_compexpr_left_4 = par_z;
        tmp_compexpr_right_4 = const_int_pos_3;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;
            type_description_1 = "cocococo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( PyCell_GET( par_a ) );
        tmp_compexpr_left_5 = PyCell_GET( par_a );
        tmp_compexpr_right_5 = const_complex_m1_0__m1_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;
            type_description_1 = "cocococo";
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
        CHECK_OBJECT( PyCell_GET( par_a ) );
        tmp_compexpr_left_6 = PyCell_GET( par_a );
        tmp_compexpr_right_6 = const_complex_m1_0__1_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;
            type_description_1 = "cocococo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_and_right_value_2 = tmp_or_left_value_1;
        or_end_1:;
        tmp_condition_result_6 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_6 = tmp_and_left_value_2;
        and_end_2:;
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
            PyObject *tmp_left_name_5;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_5;
            PyObject *tmp_right_name_6;
            CHECK_OBJECT( par_z );
            tmp_left_name_6 = par_z;
            CHECK_OBJECT( PyCell_GET( par_a ) );
            tmp_right_name_5 = PyCell_GET( par_a );
            tmp_left_name_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_5 );
            if ( tmp_left_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 209;
                type_description_1 = "cocococo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_6 = const_int_0;
            tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_6 );
            Py_DECREF( tmp_left_name_5 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 209;
                type_description_1 = "cocococo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_6:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_source_name_4 = PyCell_GET( par_ctx );
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_fneg );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "cocococo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( PyCell_GET( par_a ) );
        tmp_tuple_element_1 = PyCell_GET( par_a );
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_550e1ff28680964f0a1daa61d55eac15 );
        frame_cb4229f991058b0b9c2f86b71795eb5d->m_frame.f_lineno = 210;
        tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "cocococo";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_nega ) == NULL );
        PyCell_SET( var_nega, tmp_assign_source_4 );

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_7;
        PyObject *tmp_list_element_1;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT( par_z );
        tmp_list_element_1 = par_z;
        tmp_left_name_7 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_left_name_7, 0, tmp_list_element_1 );
        CHECK_OBJECT( par_regularized );
        tmp_right_name_7 = par_regularized;
        tmp_assign_source_5 = BINARY_OPERATION_MUL( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_7 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "cocococo";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_G ) == NULL );
        PyCell_SET( var_G, tmp_assign_source_5 );

    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_13__upper_gamma$$$function_1_h(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_6)->m_closure[0] = var_G;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_6)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_6)->m_closure[1] = par_a;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_6)->m_closure[1] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_6)->m_closure[2] = par_ctx;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_6)->m_closure[2] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_6)->m_closure[3] = var_nega;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_6)->m_closure[3] );


        assert( var_h == NULL );
        var_h = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_list_element_2;
        PyObject *tmp_kw_name_2;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_source_name_5 = PyCell_GET( par_ctx );
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_hypercomb );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "cocococo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( var_h );
        tmp_tuple_element_2 = var_h;
        tmp_args_name_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_z );
        tmp_list_element_2 = par_z;
        tmp_tuple_element_2 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_2 );
        PyList_SET_ITEM( tmp_tuple_element_2, 0, tmp_list_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
        tmp_kw_name_2 = PyDict_Copy( const_dict_443efe947ecc06c75e237bd79f103c4c );
        frame_cb4229f991058b0b9c2f86b71795eb5d->m_frame.f_lineno = 217;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "cocococo";
            goto try_except_handler_6;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_13__upper_gamma );
    return NULL;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_cb4229f991058b0b9c2f86b71795eb5d );
    if ( exception_keeper_tb_5 == NULL )
    {
        exception_keeper_tb_5 = MAKE_TRACEBACK( frame_cb4229f991058b0b9c2f86b71795eb5d, exception_keeper_lineno_5 );
    }
    else if ( exception_keeper_lineno_5 != 0 )
    {
        exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_cb4229f991058b0b9c2f86b71795eb5d, exception_keeper_lineno_5 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_source_name_6;
        tmp_compexpr_left_7 = EXC_TYPE(PyThreadState_GET());
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_source_name_6 = PyCell_GET( par_ctx );
        tmp_compexpr_right_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_NoConvergence );
        if ( tmp_compexpr_right_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "cocococo";
            goto frame_exception_exit_1;
        }
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        Py_DECREF( tmp_compexpr_right_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "cocococo";
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
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_13__upper_gamma$$$function_2_h(  );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[0] = var_G;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[0] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[1] = par_a;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[1] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[2] = par_ctx;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[2] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[3] = var_nega;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[3] );


            {
                PyObject *old = var_h;
                assert( old != NULL );
                var_h = tmp_assign_source_7;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_list_element_3;
            CHECK_OBJECT( PyCell_GET( par_ctx ) );
            tmp_called_instance_6 = PyCell_GET( par_ctx );
            CHECK_OBJECT( var_h );
            tmp_args_element_name_9 = var_h;
            CHECK_OBJECT( par_z );
            tmp_list_element_3 = par_z;
            tmp_args_element_name_10 = PyList_New( 1 );
            Py_INCREF( tmp_list_element_3 );
            PyList_SET_ITEM( tmp_args_element_name_10, 0, tmp_list_element_3 );
            frame_cb4229f991058b0b9c2f86b71795eb5d->m_frame.f_lineno = 223;
            {
                PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
                tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_6, const_str_plain_hypercomb, call_args );
            }

            Py_DECREF( tmp_args_element_name_10 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 223;
                type_description_1 = "cocococo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_7;
        branch_no_7:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 213;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_cb4229f991058b0b9c2f86b71795eb5d->m_frame) frame_cb4229f991058b0b9c2f86b71795eb5d->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "cocococo";
        goto frame_exception_exit_1;
        branch_end_7:;
    }
    // End of try:

#if 1
    RESTORE_FRAME_EXCEPTION( frame_cb4229f991058b0b9c2f86b71795eb5d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_cb4229f991058b0b9c2f86b71795eb5d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_cb4229f991058b0b9c2f86b71795eb5d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cb4229f991058b0b9c2f86b71795eb5d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cb4229f991058b0b9c2f86b71795eb5d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cb4229f991058b0b9c2f86b71795eb5d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cb4229f991058b0b9c2f86b71795eb5d,
        type_description_1,
        par_ctx,
        par_z,
        par_a,
        par_regularized,
        var_G,
        var_h,
        var_nega,
        var_orig
    );


    // Release cached frame.
    if ( frame_cb4229f991058b0b9c2f86b71795eb5d == cache_frame_cb4229f991058b0b9c2f86b71795eb5d )
    {
        Py_DECREF( frame_cb4229f991058b0b9c2f86b71795eb5d );
    }
    cache_frame_cb4229f991058b0b9c2f86b71795eb5d = NULL;

    assertFrameObject( frame_cb4229f991058b0b9c2f86b71795eb5d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_13__upper_gamma );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)var_G );
    Py_DECREF( var_G );
    var_G = NULL;

    Py_XDECREF( var_h );
    var_h = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_regularized );
    Py_DECREF( par_regularized );
    par_regularized = NULL;

    CHECK_OBJECT( (PyObject *)var_nega );
    Py_DECREF( var_nega );
    var_nega = NULL;

    Py_XDECREF( var_orig );
    var_orig = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)var_G );
    Py_DECREF( var_G );
    var_G = NULL;

    Py_XDECREF( var_h );
    var_h = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_regularized );
    Py_DECREF( par_regularized );
    par_regularized = NULL;

    CHECK_OBJECT( (PyObject *)var_nega );
    Py_DECREF( var_nega );
    var_nega = NULL;

    Py_XDECREF( var_orig );
    var_orig = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_13__upper_gamma );
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


static PyObject *impl_mpmath$functions$expintegrals$$$function_13__upper_gamma$$$function_1_h( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_z = python_pars[ 0 ];
    PyObject *var_r = NULL;
    struct Nuitka_FrameObject *frame_b4c7b2142e65e9ba7b1b0f4f502b94dc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b4c7b2142e65e9ba7b1b0f4f502b94dc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b4c7b2142e65e9ba7b1b0f4f502b94dc, codeobj_b4c7b2142e65e9ba7b1b0f4f502b94dc, module_mpmath$functions$expintegrals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b4c7b2142e65e9ba7b1b0f4f502b94dc = cache_frame_b4c7b2142e65e9ba7b1b0f4f502b94dc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b4c7b2142e65e9ba7b1b0f4f502b94dc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b4c7b2142e65e9ba7b1b0f4f502b94dc ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_z );
        tmp_left_name_1 = par_z;
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_1 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "occcoc";
            goto frame_exception_exit_1;
        }
        assert( var_r == NULL );
        var_r = tmp_assign_source_1;
    }
    {
        PyObject *tmp_list_element_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_list_element_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_element_3;
        PyObject *tmp_list_element_4;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ctx" );
            exception_tb = NULL;

            exception_lineno = 216;
            type_description_1 = "occcoc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET( self->m_closure[2] );
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_exp );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;
            type_description_1 = "occcoc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[3] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "nega" );
            exception_tb = NULL;

            exception_lineno = 216;
            type_description_1 = "occcoc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = PyCell_GET( self->m_closure[3] );
        frame_b4c7b2142e65e9ba7b1b0f4f502b94dc->m_frame.f_lineno = 216;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_list_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;
            type_description_1 = "occcoc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = PyList_New( 2 );
        PyList_SET_ITEM( tmp_tuple_element_1, 0, tmp_list_element_2 );
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_tuple_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "a" );
            exception_tb = NULL;

            exception_lineno = 216;
            type_description_1 = "occcoc";
            goto frame_exception_exit_1;
        }

        tmp_list_element_2 = PyCell_GET( self->m_closure[1] );
        Py_INCREF( tmp_list_element_2 );
        PyList_SET_ITEM( tmp_tuple_element_1, 1, tmp_list_element_2 );
        tmp_list_element_1 = PyTuple_New( 7 );
        PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_1 );
        tmp_list_element_3 = const_int_pos_1;
        tmp_tuple_element_1 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_3 );
        PyList_SET_ITEM( tmp_tuple_element_1, 0, tmp_list_element_3 );
        CHECK_OBJECT( var_r );
        tmp_list_element_3 = var_r;
        Py_INCREF( tmp_list_element_3 );
        PyList_SET_ITEM( tmp_tuple_element_1, 1, tmp_list_element_3 );
        PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_1 );
        tmp_tuple_element_1 = PyList_New( 0 );
        PyTuple_SET_ITEM( tmp_list_element_1, 2, tmp_tuple_element_1 );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_list_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "G" );
            exception_tb = NULL;

            exception_lineno = 216;
            type_description_1 = "occcoc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[0] );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_list_element_1, 3, tmp_tuple_element_1 );
        tmp_list_element_4 = const_int_pos_1;
        tmp_tuple_element_1 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_4 );
        PyList_SET_ITEM( tmp_tuple_element_1, 0, tmp_list_element_4 );
        CHECK_OBJECT( var_r );
        tmp_operand_name_1 = var_r;
        tmp_list_element_4 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        if ( tmp_list_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_list_element_1 );
            Py_DECREF( tmp_tuple_element_1 );

            exception_lineno = 216;
            type_description_1 = "occcoc";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_tuple_element_1, 1, tmp_list_element_4 );
        PyTuple_SET_ITEM( tmp_list_element_1, 4, tmp_tuple_element_1 );
        tmp_tuple_element_1 = PyList_New( 0 );
        PyTuple_SET_ITEM( tmp_list_element_1, 5, tmp_tuple_element_1 );
        tmp_left_name_2 = const_int_pos_1;
        if ( PyCell_GET( self->m_closure[3] ) == NULL )
        {
            Py_DECREF( tmp_list_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "nega" );
            exception_tb = NULL;

            exception_lineno = 216;
            type_description_1 = "occcoc";
            goto frame_exception_exit_1;
        }

        tmp_right_name_2 = PyCell_GET( self->m_closure[3] );
        tmp_tuple_element_1 = BINARY_OPERATION_DIV( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_list_element_1 );

            exception_lineno = 216;
            type_description_1 = "occcoc";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_list_element_1, 6, tmp_tuple_element_1 );
        tmp_return_value = PyList_New( 1 );
        PyList_SET_ITEM( tmp_return_value, 0, tmp_list_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4c7b2142e65e9ba7b1b0f4f502b94dc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4c7b2142e65e9ba7b1b0f4f502b94dc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4c7b2142e65e9ba7b1b0f4f502b94dc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b4c7b2142e65e9ba7b1b0f4f502b94dc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b4c7b2142e65e9ba7b1b0f4f502b94dc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b4c7b2142e65e9ba7b1b0f4f502b94dc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b4c7b2142e65e9ba7b1b0f4f502b94dc,
        type_description_1,
        par_z,
        self->m_closure[1],
        self->m_closure[0],
        self->m_closure[2],
        var_r,
        self->m_closure[3]
    );


    // Release cached frame.
    if ( frame_b4c7b2142e65e9ba7b1b0f4f502b94dc == cache_frame_b4c7b2142e65e9ba7b1b0f4f502b94dc )
    {
        Py_DECREF( frame_b4c7b2142e65e9ba7b1b0f4f502b94dc );
    }
    cache_frame_b4c7b2142e65e9ba7b1b0f4f502b94dc = NULL;

    assertFrameObject( frame_b4c7b2142e65e9ba7b1b0f4f502b94dc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_13__upper_gamma$$$function_1_h );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)var_r );
    Py_DECREF( var_r );
    var_r = NULL;

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

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_13__upper_gamma$$$function_1_h );
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


static PyObject *impl_mpmath$functions$expintegrals$$$function_13__upper_gamma$$$function_2_h( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_z = python_pars[ 0 ];
    PyObject *var_T2 = NULL;
    PyObject *var_T1 = NULL;
    struct Nuitka_FrameObject *frame_68a4c17ae080fa6fa20d9389a89d2b1f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_68a4c17ae080fa6fa20d9389a89d2b1f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_68a4c17ae080fa6fa20d9389a89d2b1f, codeobj_68a4c17ae080fa6fa20d9389a89d2b1f, module_mpmath$functions$expintegrals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_68a4c17ae080fa6fa20d9389a89d2b1f = cache_frame_68a4c17ae080fa6fa20d9389a89d2b1f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_68a4c17ae080fa6fa20d9389a89d2b1f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_68a4c17ae080fa6fa20d9389a89d2b1f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_list_element_2;
        tmp_tuple_element_1 = PyList_New( 0 );
        tmp_assign_source_1 = PyTuple_New( 7 );
        PyTuple_SET_ITEM( tmp_assign_source_1, 0, tmp_tuple_element_1 );
        tmp_list_element_1 = const_int_pos_1;
        tmp_tuple_element_1 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_tuple_element_1, 0, tmp_list_element_1 );
        CHECK_OBJECT( par_z );
        tmp_left_name_1 = par_z;
        tmp_right_name_1 = const_int_pos_1;
        tmp_list_element_1 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_1 );
            Py_DECREF( tmp_tuple_element_1 );

            exception_lineno = 220;
            type_description_1 = "occococ";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_tuple_element_1, 1, tmp_list_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_z );
        tmp_list_element_2 = par_z;
        tmp_tuple_element_1 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_2 );
        PyList_SET_ITEM( tmp_tuple_element_1, 0, tmp_list_element_2 );
        PyTuple_SET_ITEM( tmp_assign_source_1, 2, tmp_tuple_element_1 );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_assign_source_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "G" );
            exception_tb = NULL;

            exception_lineno = 220;
            type_description_1 = "occococ";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[0] );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_1, 3, tmp_tuple_element_1 );
        tmp_tuple_element_1 = PyList_New( 0 );
        PyTuple_SET_ITEM( tmp_assign_source_1, 4, tmp_tuple_element_1 );
        tmp_tuple_element_1 = PyList_New( 0 );
        PyTuple_SET_ITEM( tmp_assign_source_1, 5, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_int_0;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_1, 6, tmp_tuple_element_1 );
        assert( var_T1 == NULL );
        var_T1 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_list_element_3;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_element_4;
        PyObject *tmp_list_element_5;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ctx" );
            exception_tb = NULL;

            exception_lineno = 221;
            type_description_1 = "occococ";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET( self->m_closure[2] );
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_exp );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "occococ";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[3] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "nega" );
            exception_tb = NULL;

            exception_lineno = 221;
            type_description_1 = "occococ";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = PyCell_GET( self->m_closure[3] );
        frame_68a4c17ae080fa6fa20d9389a89d2b1f->m_frame.f_lineno = 221;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "occococ";
            goto frame_exception_exit_1;
        }
        tmp_list_element_3 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_list_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "occococ";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = PyList_New( 3 );
        PyList_SET_ITEM( tmp_tuple_element_2, 0, tmp_list_element_3 );
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_tuple_element_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "a" );
            exception_tb = NULL;

            exception_lineno = 221;
            type_description_1 = "occococ";
            goto frame_exception_exit_1;
        }

        tmp_list_element_3 = PyCell_GET( self->m_closure[1] );
        Py_INCREF( tmp_list_element_3 );
        PyList_SET_ITEM( tmp_tuple_element_2, 1, tmp_list_element_3 );
        CHECK_OBJECT( par_z );
        tmp_list_element_3 = par_z;
        Py_INCREF( tmp_list_element_3 );
        PyList_SET_ITEM( tmp_tuple_element_2, 2, tmp_list_element_3 );
        tmp_assign_source_2 = PyTuple_New( 7 );
        PyTuple_SET_ITEM( tmp_assign_source_2, 0, tmp_tuple_element_2 );
        tmp_list_element_4 = const_int_pos_1;
        tmp_tuple_element_2 = PyList_New( 3 );
        Py_INCREF( tmp_list_element_4 );
        PyList_SET_ITEM( tmp_tuple_element_2, 0, tmp_list_element_4 );
        CHECK_OBJECT( par_z );
        tmp_list_element_4 = par_z;
        Py_INCREF( tmp_list_element_4 );
        PyList_SET_ITEM( tmp_tuple_element_2, 1, tmp_list_element_4 );
        tmp_list_element_4 = const_int_neg_1;
        Py_INCREF( tmp_list_element_4 );
        PyList_SET_ITEM( tmp_tuple_element_2, 2, tmp_list_element_4 );
        PyTuple_SET_ITEM( tmp_assign_source_2, 1, tmp_tuple_element_2 );
        tmp_tuple_element_2 = PyList_New( 0 );
        PyTuple_SET_ITEM( tmp_assign_source_2, 2, tmp_tuple_element_2 );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_assign_source_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "G" );
            exception_tb = NULL;

            exception_lineno = 221;
            type_description_1 = "occococ";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = PyCell_GET( self->m_closure[0] );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_assign_source_2, 3, tmp_tuple_element_2 );
        tmp_tuple_element_2 = LIST_COPY( const_list_int_pos_1_list );
        PyTuple_SET_ITEM( tmp_assign_source_2, 4, tmp_tuple_element_2 );
        tmp_left_name_2 = const_int_pos_1;
        CHECK_OBJECT( par_z );
        tmp_right_name_2 = par_z;
        tmp_list_element_5 = BINARY_OPERATION_ADD_INT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_list_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_2 );

            exception_lineno = 221;
            type_description_1 = "occococ";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = PyList_New( 1 );
        PyList_SET_ITEM( tmp_tuple_element_2, 0, tmp_list_element_5 );
        PyTuple_SET_ITEM( tmp_assign_source_2, 5, tmp_tuple_element_2 );
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_assign_source_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "a" );
            exception_tb = NULL;

            exception_lineno = 221;
            type_description_1 = "occococ";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = PyCell_GET( self->m_closure[1] );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_assign_source_2, 6, tmp_tuple_element_2 );
        assert( var_T2 == NULL );
        var_T2 = tmp_assign_source_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_68a4c17ae080fa6fa20d9389a89d2b1f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_68a4c17ae080fa6fa20d9389a89d2b1f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_68a4c17ae080fa6fa20d9389a89d2b1f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_68a4c17ae080fa6fa20d9389a89d2b1f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_68a4c17ae080fa6fa20d9389a89d2b1f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_68a4c17ae080fa6fa20d9389a89d2b1f,
        type_description_1,
        par_z,
        self->m_closure[1],
        self->m_closure[0],
        var_T2,
        self->m_closure[2],
        var_T1,
        self->m_closure[3]
    );


    // Release cached frame.
    if ( frame_68a4c17ae080fa6fa20d9389a89d2b1f == cache_frame_68a4c17ae080fa6fa20d9389a89d2b1f )
    {
        Py_DECREF( frame_68a4c17ae080fa6fa20d9389a89d2b1f );
    }
    cache_frame_68a4c17ae080fa6fa20d9389a89d2b1f = NULL;

    assertFrameObject( frame_68a4c17ae080fa6fa20d9389a89d2b1f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT( var_T1 );
        tmp_tuple_element_3 = var_T1;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( var_T2 );
        tmp_tuple_element_3 = var_T2;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_13__upper_gamma$$$function_2_h );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)var_T2 );
    Py_DECREF( var_T2 );
    var_T2 = NULL;

    CHECK_OBJECT( (PyObject *)var_T1 );
    Py_DECREF( var_T1 );
    var_T1 = NULL;

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

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    Py_XDECREF( var_T1 );
    var_T1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_13__upper_gamma$$$function_2_h );
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


static PyObject *impl_mpmath$functions$expintegrals$$$function_14__gamma3( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    PyObject *par_a = python_pars[ 2 ];
    PyObject *par_b = python_pars[ 3 ];
    PyObject *par_regularized = python_pars[ 4 ];
    PyObject *var_T2 = NULL;
    PyObject *var_T1 = NULL;
    PyObject *var_pole = NULL;
    PyObject *var_R = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    PyObject *tmp_inplace_assign_attr_2__end = NULL;
    PyObject *tmp_inplace_assign_attr_2__start = NULL;
    struct Nuitka_FrameObject *frame_46711f24c7a6d66607db5d57710fa037;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    static struct Nuitka_FrameObject *cache_frame_46711f24c7a6d66607db5d57710fa037 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_46711f24c7a6d66607db5d57710fa037, codeobj_46711f24c7a6d66607db5d57710fa037, module_mpmath$functions$expintegrals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_46711f24c7a6d66607db5d57710fa037 = cache_frame_46711f24c7a6d66607db5d57710fa037;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_46711f24c7a6d66607db5d57710fa037 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_46711f24c7a6d66607db5d57710fa037 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_1 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_1 = par_z;
        frame_46711f24c7a6d66607db5d57710fa037->m_frame.f_lineno = 227;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_isnpint, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_pole == NULL );
        var_pole = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_regularized );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_regularized );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 228;
            type_description_1 = "ooooooooo";
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
        CHECK_OBJECT( var_pole );
        tmp_truth_name_2 = CHECK_IF_TRUE( var_pole );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 228;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_1 = par_ctx;
            tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_zero );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 229;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_2 = par_ctx;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_prec );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 231;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_inplace_assign_attr_2__start == NULL );
        tmp_inplace_assign_attr_2__start = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_2__start );
        tmp_left_name_1 = tmp_inplace_assign_attr_2__start;
        tmp_right_name_1 = const_int_pos_15;
        tmp_assign_source_3 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 231;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        assert( tmp_inplace_assign_attr_2__end == NULL );
        tmp_inplace_assign_attr_2__end = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_2__end );
        tmp_assattr_name_1 = tmp_inplace_assign_attr_2__end;
        CHECK_OBJECT( par_ctx );
        tmp_assattr_target_1 = par_ctx;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_prec, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 231;
            type_description_1 = "ooooooooo";
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__end );
    Py_DECREF( tmp_inplace_assign_attr_2__end );
    tmp_inplace_assign_attr_2__end = NULL;

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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__start );
    Py_DECREF( tmp_inplace_assign_attr_2__start );
    tmp_inplace_assign_attr_2__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__end );
    Py_DECREF( tmp_inplace_assign_attr_2__end );
    tmp_inplace_assign_attr_2__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_2__start );
    Py_DECREF( tmp_inplace_assign_attr_2__start );
    tmp_inplace_assign_attr_2__start = NULL;

    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_3 = par_ctx;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_gammainc );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 234;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_z );
        tmp_tuple_element_1 = par_z;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_regularized );
        tmp_dict_value_1 = par_regularized;
        tmp_dict_key_1 = const_str_plain_regularized;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_46711f24c7a6d66607db5d57710fa037->m_frame.f_lineno = 234;
        tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 234;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert( var_T1 == NULL );
        var_T1 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_4 = par_ctx;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_gammainc );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_z );
        tmp_tuple_element_2 = par_z;
        tmp_args_name_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_b );
        tmp_tuple_element_2 = par_b;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
        CHECK_OBJECT( par_regularized );
        tmp_dict_value_2 = par_regularized;
        tmp_dict_key_2 = const_str_plain_regularized;
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_46711f24c7a6d66607db5d57710fa037->m_frame.f_lineno = 235;
        tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert( var_T2 == NULL );
        var_T2 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_T1 );
        tmp_left_name_2 = var_T1;
        CHECK_OBJECT( var_T2 );
        tmp_right_name_2 = var_T2;
        tmp_assign_source_6 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert( var_R == NULL );
        var_R = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_2 = par_ctx;
        CHECK_OBJECT( var_R );
        tmp_args_element_name_2 = var_R;
        frame_46711f24c7a6d66607db5d57710fa037->m_frame.f_lineno = 237;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_left_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_mag, call_args );
        }

        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_3 != NULL );
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_3 = par_ctx;
        CHECK_OBJECT( var_T1 );
        tmp_args_element_name_4 = var_T1;
        frame_46711f24c7a6d66607db5d57710fa037->m_frame.f_lineno = 237;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_args_element_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_mag, call_args );
        }

        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 237;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_4 = par_ctx;
        CHECK_OBJECT( var_T2 );
        tmp_args_element_name_6 = var_T2;
        frame_46711f24c7a6d66607db5d57710fa037->m_frame.f_lineno = 237;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_args_element_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_mag, call_args );
        }

        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 237;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        frame_46711f24c7a6d66607db5d57710fa037->m_frame.f_lineno = 237;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_5 };
            tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 237;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_left_1 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_1 = const_int_neg_10;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "ooooooooo";
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
        CHECK_OBJECT( var_R );
        tmp_return_value = var_R;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_2;
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_pole );
        tmp_operand_name_1 = var_pole;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 239;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
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
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_5 = par_ctx;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_gammainc );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 240;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_z );
            tmp_tuple_element_3 = par_z;
            tmp_args_name_3 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
            tmp_tuple_element_3 = const_int_0;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_3 );
            CHECK_OBJECT( par_b );
            tmp_tuple_element_3 = par_b;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_3, 2, tmp_tuple_element_3 );
            CHECK_OBJECT( par_regularized );
            tmp_dict_value_3 = par_regularized;
            tmp_dict_key_3 = const_str_plain_regularized;
            tmp_kw_name_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            frame_46711f24c7a6d66607db5d57710fa037->m_frame.f_lineno = 240;
            tmp_assign_source_7 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_3 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 240;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_T1;
                assert( old != NULL );
                var_T1 = tmp_assign_source_7;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_6 = par_ctx;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_gammainc );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 241;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_z );
            tmp_tuple_element_4 = par_z;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_4 );
            tmp_tuple_element_4 = const_int_0;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_4 );
            CHECK_OBJECT( par_a );
            tmp_tuple_element_4 = par_a;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_4 );
            CHECK_OBJECT( par_regularized );
            tmp_dict_value_4 = par_regularized;
            tmp_dict_key_4 = const_str_plain_regularized;
            tmp_kw_name_4 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            frame_46711f24c7a6d66607db5d57710fa037->m_frame.f_lineno = 241;
            tmp_assign_source_8 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_4 );
            Py_DECREF( tmp_kw_name_4 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 241;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_T2;
                assert( old != NULL );
                var_T2 = tmp_assign_source_8;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            CHECK_OBJECT( var_T1 );
            tmp_left_name_4 = var_T1;
            CHECK_OBJECT( var_T2 );
            tmp_right_name_4 = var_T2;
            tmp_assign_source_9 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_4 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 242;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_R;
                assert( old != NULL );
                var_R = tmp_assign_source_9;
                Py_DECREF( old );
            }

        }
        CHECK_OBJECT( var_R );
        tmp_return_value = var_R;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_2;
        branch_no_3:;
    }
    goto try_end_3;
    // Return handler code:
    try_return_handler_2:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_7 = par_ctx;
        tmp_assign_source_10 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_prec );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_inplace_assign_attr_1__start == NULL );
        tmp_inplace_assign_attr_1__start = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_5 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_5 = const_int_pos_15;
        tmp_assign_source_11 = BINARY_OPERATION( PyNumber_InPlaceSubtract, tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }
        assert( tmp_inplace_assign_attr_1__end == NULL );
        tmp_inplace_assign_attr_1__end = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
        tmp_assattr_name_2 = tmp_inplace_assign_attr_1__end;
        CHECK_OBJECT( par_ctx );
        tmp_assattr_target_2 = par_ctx;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_prec, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;
            type_description_1 = "ooooooooo";
            goto try_except_handler_6;
        }
    }
    goto try_end_4;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    goto try_end_5;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    goto frame_return_exit_1;
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

    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_source_name_8;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_8 = par_ctx;
        tmp_assign_source_12 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_prec );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            Py_DECREF( exception_keeper_type_5 );
            Py_XDECREF( exception_keeper_value_5 );
            Py_XDECREF( exception_keeper_tb_5 );

            exception_lineno = 248;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_inplace_assign_attr_1__start == NULL );
        tmp_inplace_assign_attr_1__start = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_6 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_6 = const_int_pos_15;
        tmp_assign_source_13 = BINARY_OPERATION( PyNumber_InPlaceSubtract, tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            Py_DECREF( exception_keeper_type_5 );
            Py_XDECREF( exception_keeper_value_5 );
            Py_XDECREF( exception_keeper_tb_5 );

            exception_lineno = 248;
            type_description_1 = "ooooooooo";
            goto try_except_handler_7;
        }
        assert( tmp_inplace_assign_attr_1__end == NULL );
        tmp_inplace_assign_attr_1__end = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
        tmp_assattr_name_3 = tmp_inplace_assign_attr_1__end;
        CHECK_OBJECT( par_ctx );
        tmp_assattr_target_3 = par_ctx;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_prec, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            Py_DECREF( exception_keeper_type_5 );
            Py_XDECREF( exception_keeper_value_5 );
            Py_XDECREF( exception_keeper_tb_5 );

            exception_lineno = 248;
            type_description_1 = "ooooooooo";
            goto try_except_handler_8;
        }
    }
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_7;
    // End of try:
    try_end_6:;
    goto try_end_7;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_9 = par_ctx;
        tmp_assign_source_14 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_prec );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_inplace_assign_attr_1__start == NULL );
        tmp_inplace_assign_attr_1__start = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_7 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_7 = const_int_pos_15;
        tmp_assign_source_15 = BINARY_OPERATION( PyNumber_InPlaceSubtract, tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;
            type_description_1 = "ooooooooo";
            goto try_except_handler_9;
        }
        assert( tmp_inplace_assign_attr_1__end == NULL );
        tmp_inplace_assign_attr_1__end = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
        tmp_assattr_name_4 = tmp_inplace_assign_attr_1__end;
        CHECK_OBJECT( par_ctx );
        tmp_assattr_target_4 = par_ctx;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_prec, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;
            type_description_1 = "ooooooooo";
            goto try_except_handler_10;
        }
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_9;
    // End of try:
    try_end_8:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF( tmp_raise_type_1 );
        exception_lineno = 249;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_46711f24c7a6d66607db5d57710fa037 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_46711f24c7a6d66607db5d57710fa037 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_46711f24c7a6d66607db5d57710fa037 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_46711f24c7a6d66607db5d57710fa037, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_46711f24c7a6d66607db5d57710fa037->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_46711f24c7a6d66607db5d57710fa037, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_46711f24c7a6d66607db5d57710fa037,
        type_description_1,
        par_ctx,
        par_z,
        par_a,
        par_b,
        par_regularized,
        var_T2,
        var_T1,
        var_pole,
        var_R
    );


    // Release cached frame.
    if ( frame_46711f24c7a6d66607db5d57710fa037 == cache_frame_46711f24c7a6d66607db5d57710fa037 )
    {
        Py_DECREF( frame_46711f24c7a6d66607db5d57710fa037 );
    }
    cache_frame_46711f24c7a6d66607db5d57710fa037 = NULL;

    assertFrameObject( frame_46711f24c7a6d66607db5d57710fa037 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_14__gamma3 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    Py_XDECREF( var_T2 );
    var_T2 = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    Py_XDECREF( var_T1 );
    var_T1 = NULL;

    CHECK_OBJECT( (PyObject *)par_regularized );
    Py_DECREF( par_regularized );
    par_regularized = NULL;

    CHECK_OBJECT( (PyObject *)var_pole );
    Py_DECREF( var_pole );
    var_pole = NULL;

    Py_XDECREF( var_R );
    var_R = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    Py_XDECREF( var_T2 );
    var_T2 = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    Py_XDECREF( var_T1 );
    var_T1 = NULL;

    CHECK_OBJECT( (PyObject *)par_regularized );
    Py_DECREF( par_regularized );
    par_regularized = NULL;

    Py_XDECREF( var_pole );
    var_pole = NULL;

    Py_XDECREF( var_R );
    var_R = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_14__gamma3 );
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


static PyObject *impl_mpmath$functions$expintegrals$$$function_15_expint( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_z = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_a287025019639a9c5bb7e2b497394dcb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_a287025019639a9c5bb7e2b497394dcb = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a287025019639a9c5bb7e2b497394dcb, codeobj_a287025019639a9c5bb7e2b497394dcb, module_mpmath$functions$expintegrals, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a287025019639a9c5bb7e2b497394dcb = cache_frame_a287025019639a9c5bb7e2b497394dcb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a287025019639a9c5bb7e2b497394dcb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a287025019639a9c5bb7e2b497394dcb ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_1 = par_ctx;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_1 = par_n;
        frame_a287025019639a9c5bb7e2b497394dcb->m_frame.f_lineno = 253;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_isint, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 253;
            type_description_1 = "ooo";
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
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_2 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_2 = par_z;
        frame_a287025019639a9c5bb7e2b497394dcb->m_frame.f_lineno = 253;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__is_real_type, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 253;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
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
        // Tried code:
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_3 = par_ctx;
            CHECK_OBJECT( par_n );
            tmp_args_element_name_3 = par_n;
            CHECK_OBJECT( par_z );
            tmp_args_element_name_4 = par_z;
            frame_a287025019639a9c5bb7e2b497394dcb->m_frame.f_lineno = 255;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain__expint_int, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 255;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            goto frame_return_exit_1;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_15_expint );
        return NULL;
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
        PRESERVE_FRAME_EXCEPTION( frame_a287025019639a9c5bb7e2b497394dcb );
        if ( exception_keeper_tb_1 == NULL )
        {
            exception_keeper_tb_1 = MAKE_TRACEBACK( frame_a287025019639a9c5bb7e2b497394dcb, exception_keeper_lineno_1 );
        }
        else if ( exception_keeper_lineno_1 != 0 )
        {
            exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_a287025019639a9c5bb7e2b497394dcb, exception_keeper_lineno_1 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_1 = PyExc_NotImplementedError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 256;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 256;
                type_description_1 = "ooo";
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
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 254;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_a287025019639a9c5bb7e2b497394dcb->m_frame) frame_a287025019639a9c5bb7e2b497394dcb->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
            branch_no_2:;
        }
        goto try_end_1;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_15_expint );
        return NULL;
        // End of try:
        try_end_1:;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_5;
        int tmp_truth_name_3;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_6;
        int tmp_truth_name_4;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_4 = par_ctx;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_5 = par_n;
        frame_a287025019639a9c5bb7e2b497394dcb->m_frame.f_lineno = 258;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_isnan, call_args );
        }

        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 258;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_3 );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_3 );

            exception_lineno = 258;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_3 );
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
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_5 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_6 = par_z;
        frame_a287025019639a9c5bb7e2b497394dcb->m_frame.f_lineno = 258;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_isnan, call_args );
        }

        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 258;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE( tmp_call_result_4 );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_4 );

            exception_lineno = 258;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_4 );
        tmp_condition_result_3 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_3 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( par_z );
            tmp_left_name_1 = par_z;
            CHECK_OBJECT( par_n );
            tmp_right_name_1 = par_n;
            tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 259;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_z );
        tmp_compexpr_left_2 = par_z;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_1 = par_ctx;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_inf );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 260;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 260;
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
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            tmp_left_name_2 = const_int_pos_1;
            CHECK_OBJECT( par_z );
            tmp_right_name_2 = par_z;
            tmp_return_value = BINARY_OPERATION_DIV( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 261;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_z );
        tmp_compexpr_left_3 = par_z;
        tmp_compexpr_right_3 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;
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
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_name_7;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_6 = par_ctx;
            CHECK_OBJECT( par_n );
            tmp_args_element_name_7 = par_n;
            frame_a287025019639a9c5bb7e2b497394dcb->m_frame.f_lineno = 264;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_compexpr_left_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_re, call_args );
            }

            if ( tmp_compexpr_left_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 264;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_4 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_INT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_left_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 264;
                type_description_1 = "ooo";
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
                PyObject *tmp_called_name_1;
                PyObject *tmp_type_arg_1;
                PyObject *tmp_args_element_name_8;
                PyObject *tmp_source_name_2;
                CHECK_OBJECT( par_z );
                tmp_type_arg_1 = par_z;
                tmp_called_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
                assert( !(tmp_called_name_1 == NULL) );
                CHECK_OBJECT( par_ctx );
                tmp_source_name_2 = par_ctx;
                tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_inf );
                if ( tmp_args_element_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_1 );

                    exception_lineno = 266;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                frame_a287025019639a9c5bb7e2b497394dcb->m_frame.f_lineno = 266;
                {
                    PyObject *call_args[] = { tmp_args_element_name_8 };
                    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                }

                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_8 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 266;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_6;
            branch_no_6:;
            {
                PyObject *tmp_left_name_3;
                PyObject *tmp_source_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                CHECK_OBJECT( par_ctx );
                tmp_source_name_3 = par_ctx;
                tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_one );
                if ( tmp_left_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 268;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_n );
                tmp_left_name_4 = par_n;
                tmp_right_name_4 = const_int_pos_1;
                tmp_right_name_3 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_4 );
                if ( tmp_right_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_3 );

                    exception_lineno = 268;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_return_value = BINARY_OPERATION_DIV( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_left_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 268;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_end_6:;
        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( par_n );
        tmp_compexpr_left_5 = par_n;
        tmp_compexpr_right_5 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;
            type_description_1 = "ooo";
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
            PyObject *tmp_left_name_5;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_right_name_5;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_4 = par_ctx;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_exp );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 270;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_z );
            tmp_operand_name_2 = par_z;
            tmp_args_element_name_9 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
            if ( tmp_args_element_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 270;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_a287025019639a9c5bb7e2b497394dcb->m_frame.f_lineno = 270;
            {
                PyObject *call_args[] = { tmp_args_element_name_9 };
                tmp_left_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_9 );
            if ( tmp_left_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 270;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_z );
            tmp_right_name_5 = par_z;
            tmp_return_value = BINARY_OPERATION_DIV( tmp_left_name_5, tmp_right_name_5 );
            Py_DECREF( tmp_left_name_5 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 270;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_7:;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( par_n );
        tmp_compexpr_left_6 = par_n;
        tmp_compexpr_right_6 = const_int_neg_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 271;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
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
            PyObject *tmp_left_name_6;
            PyObject *tmp_left_name_7;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_5;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_right_name_6;
            PyObject *tmp_left_name_8;
            PyObject *tmp_right_name_7;
            PyObject *tmp_right_name_8;
            PyObject *tmp_left_name_9;
            PyObject *tmp_right_name_9;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_5 = par_ctx;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_exp );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 272;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_z );
            tmp_operand_name_3 = par_z;
            tmp_args_element_name_10 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_3 );
            if ( tmp_args_element_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 272;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_a287025019639a9c5bb7e2b497394dcb->m_frame.f_lineno = 272;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_left_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_10 );
            if ( tmp_left_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 272;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_z );
            tmp_left_name_8 = par_z;
            tmp_right_name_7 = const_int_pos_1;
            tmp_right_name_6 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_8, tmp_right_name_7 );
            if ( tmp_right_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_7 );

                exception_lineno = 272;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_6 = BINARY_OPERATION_MUL( tmp_left_name_7, tmp_right_name_6 );
            Py_DECREF( tmp_left_name_7 );
            Py_DECREF( tmp_right_name_6 );
            if ( tmp_left_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 272;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_z );
            tmp_left_name_9 = par_z;
            tmp_right_name_9 = const_int_pos_2;
            tmp_right_name_8 = POWER_OPERATION( tmp_left_name_9, tmp_right_name_9 );
            if ( tmp_right_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_6 );

                exception_lineno = 272;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = BINARY_OPERATION_DIV( tmp_left_name_6, tmp_right_name_8 );
            Py_DECREF( tmp_left_name_6 );
            Py_DECREF( tmp_right_name_8 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 272;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_8:;
    }
    {
        PyObject *tmp_left_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_10;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_11;
        PyObject *tmp_right_name_12;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_6;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        PyObject *tmp_args_element_name_12;
        CHECK_OBJECT( par_z );
        tmp_left_name_11 = par_z;
        CHECK_OBJECT( par_n );
        tmp_left_name_12 = par_n;
        tmp_right_name_11 = const_int_pos_1;
        tmp_right_name_10 = BINARY_OPERATION_SUB( tmp_left_name_12, tmp_right_name_11 );
        if ( tmp_right_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 273;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_10 = POWER_OPERATION( tmp_left_name_11, tmp_right_name_10 );
        Py_DECREF( tmp_right_name_10 );
        if ( tmp_left_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 273;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ctx );
        tmp_source_name_6 = par_ctx;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_gammainc );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_10 );

            exception_lineno = 273;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_13 = const_int_pos_1;
        CHECK_OBJECT( par_n );
        tmp_right_name_13 = par_n;
        tmp_args_element_name_11 = BINARY_OPERATION_SUB( tmp_left_name_13, tmp_right_name_13 );
        if ( tmp_args_element_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_10 );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 273;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_z );
        tmp_args_element_name_12 = par_z;
        frame_a287025019639a9c5bb7e2b497394dcb->m_frame.f_lineno = 273;
        {
            PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_right_name_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_11 );
        if ( tmp_right_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_10 );

            exception_lineno = 273;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_10, tmp_right_name_12 );
        Py_DECREF( tmp_left_name_10 );
        Py_DECREF( tmp_right_name_12 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 273;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 1
    RESTORE_FRAME_EXCEPTION( frame_a287025019639a9c5bb7e2b497394dcb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_a287025019639a9c5bb7e2b497394dcb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_a287025019639a9c5bb7e2b497394dcb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a287025019639a9c5bb7e2b497394dcb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a287025019639a9c5bb7e2b497394dcb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a287025019639a9c5bb7e2b497394dcb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a287025019639a9c5bb7e2b497394dcb,
        type_description_1,
        par_ctx,
        par_n,
        par_z
    );


    // Release cached frame.
    if ( frame_a287025019639a9c5bb7e2b497394dcb == cache_frame_a287025019639a9c5bb7e2b497394dcb )
    {
        Py_DECREF( frame_a287025019639a9c5bb7e2b497394dcb );
    }
    cache_frame_a287025019639a9c5bb7e2b497394dcb = NULL;

    assertFrameObject( frame_a287025019639a9c5bb7e2b497394dcb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_15_expint );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

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

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_15_expint );
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


static PyObject *impl_mpmath$functions$expintegrals$$$function_16_li( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    PyObject *par_offset = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_1abed403ae0025d9738bf5a035bbb4c8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1abed403ae0025d9738bf5a035bbb4c8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1abed403ae0025d9738bf5a035bbb4c8, codeobj_1abed403ae0025d9738bf5a035bbb4c8, module_mpmath$functions$expintegrals, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1abed403ae0025d9738bf5a035bbb4c8 = cache_frame_1abed403ae0025d9738bf5a035bbb4c8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1abed403ae0025d9738bf5a035bbb4c8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1abed403ae0025d9738bf5a035bbb4c8 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_offset );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_offset );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 277;
            type_description_1 = "ooo";
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
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT( par_z );
            tmp_compexpr_left_1 = par_z;
            tmp_compexpr_right_1 = const_int_pos_2;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 278;
                type_description_1 = "ooo";
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
                PyObject *tmp_source_name_1;
                CHECK_OBJECT( par_ctx );
                tmp_source_name_1 = par_ctx;
                tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_zero );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 279;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_no_2:;
        }
        {
            PyObject *tmp_left_name_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_2 = par_ctx;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ei );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 280;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_1 = par_ctx;
            CHECK_OBJECT( par_z );
            tmp_args_element_name_2 = par_z;
            frame_1abed403ae0025d9738bf5a035bbb4c8->m_frame.f_lineno = 280;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_ln, call_args );
            }

            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 280;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_1abed403ae0025d9738bf5a035bbb4c8->m_frame.f_lineno = 280;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 280;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_ctx );
            tmp_source_name_3 = par_ctx;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ei );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 280;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_ctx );
            tmp_source_name_4 = par_ctx;
            tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ln2 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 280;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_1abed403ae0025d9738bf5a035bbb4c8->m_frame.f_lineno = 280;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 280;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 280;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( par_z );
        tmp_operand_name_1 = par_z;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 281;
            type_description_1 = "ooo";
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
        CHECK_OBJECT( par_z );
        tmp_return_value = par_z;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_z );
        tmp_compexpr_left_2 = par_z;
        tmp_compexpr_right_2 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 283;
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
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_5 = par_ctx;
            tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ninf );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 284;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_4:;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_6;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_6 = par_ctx;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ei );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 285;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_2 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_5 = par_z;
        frame_1abed403ae0025d9738bf5a035bbb4c8->m_frame.f_lineno = 285;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_ln, call_args );
        }

        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 285;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1abed403ae0025d9738bf5a035bbb4c8->m_frame.f_lineno = 285;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 285;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1abed403ae0025d9738bf5a035bbb4c8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1abed403ae0025d9738bf5a035bbb4c8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1abed403ae0025d9738bf5a035bbb4c8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1abed403ae0025d9738bf5a035bbb4c8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1abed403ae0025d9738bf5a035bbb4c8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1abed403ae0025d9738bf5a035bbb4c8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1abed403ae0025d9738bf5a035bbb4c8,
        type_description_1,
        par_ctx,
        par_z,
        par_offset
    );


    // Release cached frame.
    if ( frame_1abed403ae0025d9738bf5a035bbb4c8 == cache_frame_1abed403ae0025d9738bf5a035bbb4c8 )
    {
        Py_DECREF( frame_1abed403ae0025d9738bf5a035bbb4c8 );
    }
    cache_frame_1abed403ae0025d9738bf5a035bbb4c8 = NULL;

    assertFrameObject( frame_1abed403ae0025d9738bf5a035bbb4c8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_16_li );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_offset );
    Py_DECREF( par_offset );
    par_offset = NULL;

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

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_offset );
    Py_DECREF( par_offset );
    par_offset = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_16_li );
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


static PyObject *impl_mpmath$functions$expintegrals$$$function_17_ei( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_7d2ee6a9722a81c009ccdb402015fb08;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_7d2ee6a9722a81c009ccdb402015fb08 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7d2ee6a9722a81c009ccdb402015fb08, codeobj_7d2ee6a9722a81c009ccdb402015fb08, module_mpmath$functions$expintegrals, sizeof(void *)+sizeof(void *) );
    frame_7d2ee6a9722a81c009ccdb402015fb08 = cache_frame_7d2ee6a9722a81c009ccdb402015fb08;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7d2ee6a9722a81c009ccdb402015fb08 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7d2ee6a9722a81c009ccdb402015fb08 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_1 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_1 = par_z;
        frame_7d2ee6a9722a81c009ccdb402015fb08->m_frame.f_lineno = 290;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__ei, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 290;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_17_ei );
    return NULL;
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
    PRESERVE_FRAME_EXCEPTION( frame_7d2ee6a9722a81c009ccdb402015fb08 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_7d2ee6a9722a81c009ccdb402015fb08, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_7d2ee6a9722a81c009ccdb402015fb08, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_NotImplementedError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 291;
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_2 = par_ctx;
            CHECK_OBJECT( par_z );
            tmp_args_element_name_2 = par_z;
            frame_7d2ee6a9722a81c009ccdb402015fb08->m_frame.f_lineno = 292;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__ei_generic, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 292;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 289;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_7d2ee6a9722a81c009ccdb402015fb08->m_frame) frame_7d2ee6a9722a81c009ccdb402015fb08->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
        branch_end_1:;
    }
    // End of try:

#if 1
    RESTORE_FRAME_EXCEPTION( frame_7d2ee6a9722a81c009ccdb402015fb08 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_7d2ee6a9722a81c009ccdb402015fb08 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_7d2ee6a9722a81c009ccdb402015fb08 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7d2ee6a9722a81c009ccdb402015fb08, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7d2ee6a9722a81c009ccdb402015fb08->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7d2ee6a9722a81c009ccdb402015fb08, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7d2ee6a9722a81c009ccdb402015fb08,
        type_description_1,
        par_ctx,
        par_z
    );


    // Release cached frame.
    if ( frame_7d2ee6a9722a81c009ccdb402015fb08 == cache_frame_7d2ee6a9722a81c009ccdb402015fb08 )
    {
        Py_DECREF( frame_7d2ee6a9722a81c009ccdb402015fb08 );
    }
    cache_frame_7d2ee6a9722a81c009ccdb402015fb08 = NULL;

    assertFrameObject( frame_7d2ee6a9722a81c009ccdb402015fb08 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_17_ei );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

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

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_17_ei );
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


static PyObject *impl_mpmath$functions$expintegrals$$$function_18__ei_generic( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    PyObject *var_im = NULL;
    PyObject *var_r = NULL;
    PyObject *var_v = NULL;
    struct Nuitka_FrameObject *frame_c5ab4a9600cd330dea24453251ed7d8f;
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
    static struct Nuitka_FrameObject *cache_frame_c5ab4a9600cd330dea24453251ed7d8f = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c5ab4a9600cd330dea24453251ed7d8f, codeobj_c5ab4a9600cd330dea24453251ed7d8f, module_mpmath$functions$expintegrals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c5ab4a9600cd330dea24453251ed7d8f = cache_frame_c5ab4a9600cd330dea24453251ed7d8f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c5ab4a9600cd330dea24453251ed7d8f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c5ab4a9600cd330dea24453251ed7d8f ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_z );
        tmp_compexpr_left_1 = par_z;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_1 = par_ctx;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_inf );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 298;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 298;
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
        CHECK_OBJECT( par_z );
        tmp_return_value = par_z;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_z );
        tmp_compexpr_left_2 = par_z;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_2 = par_ctx;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ninf );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 300;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 300;
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
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_3 = par_ctx;
            tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_zero );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 301;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_1 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_1 = par_z;
        frame_c5ab4a9600cd330dea24453251ed7d8f->m_frame.f_lineno = 302;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_compexpr_left_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_mag, call_args );
        }

        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 302;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 302;
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
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_4 = par_ctx;
            tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_one );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 304;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_z );
            tmp_right_name_1 = par_z;
            tmp_assign_source_1 = BINARY_OPERATION_DIV( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 304;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            assert( var_r == NULL );
            var_r = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_source_name_6;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_right_name_3;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_2 = par_ctx;
            CHECK_OBJECT( par_z );
            tmp_args_element_name_2 = par_z;
            frame_c5ab4a9600cd330dea24453251ed7d8f->m_frame.f_lineno = 305;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_left_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_exp, call_args );
            }

            if ( tmp_left_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 305;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_ctx );
            tmp_source_name_5 = par_ctx;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_hyper );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );

                exception_lineno = 305;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            tmp_tuple_element_1 = LIST_COPY( const_list_int_pos_1_int_pos_1_list );
            tmp_args_name_1 = PyTuple_New( 3 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_tuple_element_1 = PyList_New( 0 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( var_r );
            tmp_tuple_element_1 = var_r;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
            CHECK_OBJECT( par_ctx );
            tmp_source_name_6 = par_ctx;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_prec );
            if ( tmp_dict_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_name_1 );

                exception_lineno = 306;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            tmp_dict_key_1 = const_str_plain_maxterms;
            tmp_kw_name_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_value_2 = Py_True;
            tmp_dict_key_2 = const_str_plain_force_series;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_c5ab4a9600cd330dea24453251ed7d8f->m_frame.f_lineno = 305;
            tmp_right_name_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );

                exception_lineno = 305;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            tmp_left_name_2 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_3 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 305;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_z );
            tmp_right_name_3 = par_z;
            tmp_assign_source_2 = BINARY_OPERATION_DIV( tmp_left_name_2, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 306;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            assert( var_v == NULL );
            var_v = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_3 = par_ctx;
            CHECK_OBJECT( par_z );
            tmp_args_element_name_3 = par_z;
            frame_c5ab4a9600cd330dea24453251ed7d8f->m_frame.f_lineno = 307;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain__im, call_args );
            }

            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 307;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            assert( var_im == NULL );
            var_im = tmp_assign_source_3;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( var_im );
            tmp_compexpr_left_4 = var_im;
            tmp_compexpr_right_4 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 308;
                type_description_1 = "ooooo";
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
                PyObject *tmp_assign_source_4;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                PyObject *tmp_left_name_5;
                PyObject *tmp_source_name_7;
                PyObject *tmp_right_name_5;
                PyObject *tmp_source_name_8;
                CHECK_OBJECT( var_v );
                tmp_left_name_4 = var_v;
                CHECK_OBJECT( par_ctx );
                tmp_source_name_7 = par_ctx;
                tmp_left_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_pi );
                if ( tmp_left_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 309;
                    type_description_1 = "ooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT( par_ctx );
                tmp_source_name_8 = par_ctx;
                tmp_right_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_j );
                if ( tmp_right_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_5 );

                    exception_lineno = 309;
                    type_description_1 = "ooooo";
                    goto try_except_handler_2;
                }
                tmp_right_name_4 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_5 );
                Py_DECREF( tmp_left_name_5 );
                Py_DECREF( tmp_right_name_5 );
                if ( tmp_right_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 309;
                    type_description_1 = "ooooo";
                    goto try_except_handler_2;
                }
                tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 309;
                    type_description_1 = "ooooo";
                    goto try_except_handler_2;
                }
                tmp_assign_source_4 = tmp_left_name_4;
                var_v = tmp_assign_source_4;

            }
            branch_no_4:;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( var_im );
            tmp_compexpr_left_5 = var_im;
            tmp_compexpr_right_5 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 310;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
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
                PyObject *tmp_assign_source_5;
                PyObject *tmp_left_name_6;
                PyObject *tmp_right_name_6;
                PyObject *tmp_left_name_7;
                PyObject *tmp_source_name_9;
                PyObject *tmp_right_name_7;
                PyObject *tmp_source_name_10;
                CHECK_OBJECT( var_v );
                tmp_left_name_6 = var_v;
                CHECK_OBJECT( par_ctx );
                tmp_source_name_9 = par_ctx;
                tmp_left_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_pi );
                if ( tmp_left_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 311;
                    type_description_1 = "ooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT( par_ctx );
                tmp_source_name_10 = par_ctx;
                tmp_right_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_j );
                if ( tmp_right_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_7 );

                    exception_lineno = 311;
                    type_description_1 = "ooooo";
                    goto try_except_handler_2;
                }
                tmp_right_name_6 = BINARY_OPERATION_MUL( tmp_left_name_7, tmp_right_name_7 );
                Py_DECREF( tmp_left_name_7 );
                Py_DECREF( tmp_right_name_7 );
                if ( tmp_right_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 311;
                    type_description_1 = "ooooo";
                    goto try_except_handler_2;
                }
                tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_6, tmp_right_name_6 );
                Py_DECREF( tmp_right_name_6 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 311;
                    type_description_1 = "ooooo";
                    goto try_except_handler_2;
                }
                tmp_assign_source_5 = tmp_left_name_6;
                var_v = tmp_assign_source_5;

            }
            branch_no_5:;
        }
        if ( var_v == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "v" );
            exception_tb = NULL;

            exception_lineno = 312;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_return_value = var_v;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_18__ei_generic );
        return NULL;
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
        PRESERVE_FRAME_EXCEPTION( frame_c5ab4a9600cd330dea24453251ed7d8f );
        if ( exception_keeper_tb_1 == NULL )
        {
            exception_keeper_tb_1 = MAKE_TRACEBACK( frame_c5ab4a9600cd330dea24453251ed7d8f, exception_keeper_lineno_1 );
        }
        else if ( exception_keeper_lineno_1 != 0 )
        {
            exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_c5ab4a9600cd330dea24453251ed7d8f, exception_keeper_lineno_1 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            PyObject *tmp_source_name_11;
            tmp_compexpr_left_6 = EXC_TYPE(PyThreadState_GET());
            CHECK_OBJECT( par_ctx );
            tmp_source_name_11 = par_ctx;
            tmp_compexpr_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_NoConvergence );
            if ( tmp_compexpr_right_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 313;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            Py_DECREF( tmp_compexpr_right_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 313;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 313;
                type_description_1 = "ooooo";
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
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 303;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_c5ab4a9600cd330dea24453251ed7d8f->m_frame) frame_c5ab4a9600cd330dea24453251ed7d8f->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
            branch_no_6:;
        }
        goto try_end_1;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_18__ei_generic );
        return NULL;
        // End of try:
        try_end_1:;
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_8;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_right_name_9;
        PyObject *tmp_source_name_12;
        CHECK_OBJECT( par_z );
        tmp_left_name_9 = par_z;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_4 = par_ctx;
        tmp_args_element_name_4 = const_int_pos_1;
        tmp_args_element_name_5 = const_int_pos_1;
        tmp_args_element_name_6 = const_int_pos_2;
        tmp_args_element_name_7 = const_int_pos_2;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_8 = par_z;
        frame_c5ab4a9600cd330dea24453251ed7d8f->m_frame.f_lineno = 315;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_right_name_8 = CALL_METHOD_WITH_ARGS5( tmp_called_instance_4, const_str_plain_hyp2f2, call_args );
        }

        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_8 = BINARY_OPERATION_MUL( tmp_left_name_9, tmp_right_name_8 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ctx );
        tmp_source_name_12 = par_ctx;
        tmp_right_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_euler );
        if ( tmp_right_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );

            exception_lineno = 315;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_9 );
        Py_DECREF( tmp_left_name_8 );
        Py_DECREF( tmp_right_name_9 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_9;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_5 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_9 = par_z;
        frame_c5ab4a9600cd330dea24453251ed7d8f->m_frame.f_lineno = 316;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain__im, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 316;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 316;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            PyObject *tmp_assign_source_7;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_10;
            PyObject *tmp_left_name_11;
            PyObject *tmp_right_name_11;
            PyObject *tmp_left_name_12;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_right_name_12;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_13;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_left_name_13;
            PyObject *tmp_source_name_14;
            PyObject *tmp_right_name_13;
            CHECK_OBJECT( var_v );
            tmp_left_name_10 = var_v;
            tmp_left_name_11 = const_float_0_5;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_6 = par_ctx;
            CHECK_OBJECT( par_z );
            tmp_args_element_name_10 = par_z;
            frame_c5ab4a9600cd330dea24453251ed7d8f->m_frame.f_lineno = 317;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_left_name_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_log, call_args );
            }

            if ( tmp_left_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 317;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_ctx );
            tmp_source_name_13 = par_ctx;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_log );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_12 );

                exception_lineno = 317;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_ctx );
            tmp_source_name_14 = par_ctx;
            tmp_left_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_one );
            if ( tmp_left_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_12 );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 317;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_z );
            tmp_right_name_13 = par_z;
            tmp_args_element_name_11 = BINARY_OPERATION_DIV( tmp_left_name_13, tmp_right_name_13 );
            Py_DECREF( tmp_left_name_13 );
            if ( tmp_args_element_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_12 );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 317;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            frame_c5ab4a9600cd330dea24453251ed7d8f->m_frame.f_lineno = 317;
            {
                PyObject *call_args[] = { tmp_args_element_name_11 };
                tmp_right_name_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_11 );
            if ( tmp_right_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_12 );

                exception_lineno = 317;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_11 = BINARY_OPERATION_SUB( tmp_left_name_12, tmp_right_name_12 );
            Py_DECREF( tmp_left_name_12 );
            Py_DECREF( tmp_right_name_12 );
            if ( tmp_right_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 317;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_10 = BINARY_OPERATION_MUL( tmp_left_name_11, tmp_right_name_11 );
            Py_DECREF( tmp_right_name_11 );
            if ( tmp_right_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 317;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_10, tmp_right_name_10 );
            Py_DECREF( tmp_right_name_10 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 317;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_7 = tmp_left_name_10;
            var_v = tmp_assign_source_7;

        }
        goto branch_end_7;
        branch_no_7:;
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_left_name_14;
            PyObject *tmp_right_name_14;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_15;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_13;
            CHECK_OBJECT( var_v );
            tmp_left_name_14 = var_v;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_15 = par_ctx;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_log );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 319;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_abs );
            assert( tmp_called_name_4 != NULL );
            CHECK_OBJECT( par_z );
            tmp_args_element_name_13 = par_z;
            frame_c5ab4a9600cd330dea24453251ed7d8f->m_frame.f_lineno = 319;
            {
                PyObject *call_args[] = { tmp_args_element_name_13 };
                tmp_args_element_name_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            if ( tmp_args_element_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 319;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            frame_c5ab4a9600cd330dea24453251ed7d8f->m_frame.f_lineno = 319;
            {
                PyObject *call_args[] = { tmp_args_element_name_12 };
                tmp_right_name_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_12 );
            if ( tmp_right_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 319;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_14, tmp_right_name_14 );
            Py_DECREF( tmp_right_name_14 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 319;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_8 = tmp_left_name_14;
            var_v = tmp_assign_source_8;

        }
        branch_end_7:;
    }

#if 1
    RESTORE_FRAME_EXCEPTION( frame_c5ab4a9600cd330dea24453251ed7d8f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_c5ab4a9600cd330dea24453251ed7d8f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_c5ab4a9600cd330dea24453251ed7d8f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c5ab4a9600cd330dea24453251ed7d8f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c5ab4a9600cd330dea24453251ed7d8f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c5ab4a9600cd330dea24453251ed7d8f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c5ab4a9600cd330dea24453251ed7d8f,
        type_description_1,
        par_ctx,
        par_z,
        var_im,
        var_r,
        var_v
    );


    // Release cached frame.
    if ( frame_c5ab4a9600cd330dea24453251ed7d8f == cache_frame_c5ab4a9600cd330dea24453251ed7d8f )
    {
        Py_DECREF( frame_c5ab4a9600cd330dea24453251ed7d8f );
    }
    cache_frame_c5ab4a9600cd330dea24453251ed7d8f = NULL;

    assertFrameObject( frame_c5ab4a9600cd330dea24453251ed7d8f );

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
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_18__ei_generic );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_im );
    var_im = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

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

    Py_XDECREF( var_im );
    var_im = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

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
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_18__ei_generic );
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


static PyObject *impl_mpmath$functions$expintegrals$$$function_19_e1( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_dae9bfc2ca3ee8fb412d71d4e7c6acc0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_dae9bfc2ca3ee8fb412d71d4e7c6acc0 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dae9bfc2ca3ee8fb412d71d4e7c6acc0, codeobj_dae9bfc2ca3ee8fb412d71d4e7c6acc0, module_mpmath$functions$expintegrals, sizeof(void *)+sizeof(void *) );
    frame_dae9bfc2ca3ee8fb412d71d4e7c6acc0 = cache_frame_dae9bfc2ca3ee8fb412d71d4e7c6acc0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dae9bfc2ca3ee8fb412d71d4e7c6acc0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dae9bfc2ca3ee8fb412d71d4e7c6acc0 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_1 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_1 = par_z;
        frame_dae9bfc2ca3ee8fb412d71d4e7c6acc0->m_frame.f_lineno = 325;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__e1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 325;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_19_e1 );
    return NULL;
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
    PRESERVE_FRAME_EXCEPTION( frame_dae9bfc2ca3ee8fb412d71d4e7c6acc0 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_dae9bfc2ca3ee8fb412d71d4e7c6acc0, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_dae9bfc2ca3ee8fb412d71d4e7c6acc0, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_NotImplementedError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 326;
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_2 = par_ctx;
            tmp_args_element_name_2 = const_int_pos_1;
            CHECK_OBJECT( par_z );
            tmp_args_element_name_3 = par_z;
            frame_dae9bfc2ca3ee8fb412d71d4e7c6acc0->m_frame.f_lineno = 327;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_expint, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 327;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 324;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_dae9bfc2ca3ee8fb412d71d4e7c6acc0->m_frame) frame_dae9bfc2ca3ee8fb412d71d4e7c6acc0->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
        branch_end_1:;
    }
    // End of try:

#if 1
    RESTORE_FRAME_EXCEPTION( frame_dae9bfc2ca3ee8fb412d71d4e7c6acc0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_dae9bfc2ca3ee8fb412d71d4e7c6acc0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_dae9bfc2ca3ee8fb412d71d4e7c6acc0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dae9bfc2ca3ee8fb412d71d4e7c6acc0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dae9bfc2ca3ee8fb412d71d4e7c6acc0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dae9bfc2ca3ee8fb412d71d4e7c6acc0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dae9bfc2ca3ee8fb412d71d4e7c6acc0,
        type_description_1,
        par_ctx,
        par_z
    );


    // Release cached frame.
    if ( frame_dae9bfc2ca3ee8fb412d71d4e7c6acc0 == cache_frame_dae9bfc2ca3ee8fb412d71d4e7c6acc0 )
    {
        Py_DECREF( frame_dae9bfc2ca3ee8fb412d71d4e7c6acc0 );
    }
    cache_frame_dae9bfc2ca3ee8fb412d71d4e7c6acc0 = NULL;

    assertFrameObject( frame_dae9bfc2ca3ee8fb412d71d4e7c6acc0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_19_e1 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

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

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_19_e1 );
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


static PyObject *impl_mpmath$functions$expintegrals$$$function_20_ci( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_0319ecb468246e8e2fbc628ffc184288;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_0319ecb468246e8e2fbc628ffc184288 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0319ecb468246e8e2fbc628ffc184288, codeobj_0319ecb468246e8e2fbc628ffc184288, module_mpmath$functions$expintegrals, sizeof(void *)+sizeof(void *) );
    frame_0319ecb468246e8e2fbc628ffc184288 = cache_frame_0319ecb468246e8e2fbc628ffc184288;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0319ecb468246e8e2fbc628ffc184288 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0319ecb468246e8e2fbc628ffc184288 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_1 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_1 = par_z;
        frame_0319ecb468246e8e2fbc628ffc184288->m_frame.f_lineno = 332;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__ci, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 332;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_20_ci );
    return NULL;
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
    PRESERVE_FRAME_EXCEPTION( frame_0319ecb468246e8e2fbc628ffc184288 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_0319ecb468246e8e2fbc628ffc184288, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_0319ecb468246e8e2fbc628ffc184288, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_NotImplementedError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 333;
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_2 = par_ctx;
            CHECK_OBJECT( par_z );
            tmp_args_element_name_2 = par_z;
            frame_0319ecb468246e8e2fbc628ffc184288->m_frame.f_lineno = 334;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__ci_generic, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 334;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 331;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_0319ecb468246e8e2fbc628ffc184288->m_frame) frame_0319ecb468246e8e2fbc628ffc184288->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
        branch_end_1:;
    }
    // End of try:

#if 1
    RESTORE_FRAME_EXCEPTION( frame_0319ecb468246e8e2fbc628ffc184288 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_0319ecb468246e8e2fbc628ffc184288 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_0319ecb468246e8e2fbc628ffc184288 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0319ecb468246e8e2fbc628ffc184288, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0319ecb468246e8e2fbc628ffc184288->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0319ecb468246e8e2fbc628ffc184288, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0319ecb468246e8e2fbc628ffc184288,
        type_description_1,
        par_ctx,
        par_z
    );


    // Release cached frame.
    if ( frame_0319ecb468246e8e2fbc628ffc184288 == cache_frame_0319ecb468246e8e2fbc628ffc184288 )
    {
        Py_DECREF( frame_0319ecb468246e8e2fbc628ffc184288 );
    }
    cache_frame_0319ecb468246e8e2fbc628ffc184288 = NULL;

    assertFrameObject( frame_0319ecb468246e8e2fbc628ffc184288 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_20_ci );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

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

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_20_ci );
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


static PyObject *impl_mpmath$functions$expintegrals$$$function_21__ci_generic( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    PyObject *var_zimag = NULL;
    PyObject *var_jz = NULL;
    PyObject *var_v = NULL;
    PyObject *var_njz = NULL;
    PyObject *var_zreal = NULL;
    struct Nuitka_FrameObject *frame_125ab5d26887891ea5c067306b26268a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_125ab5d26887891ea5c067306b26268a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_125ab5d26887891ea5c067306b26268a, codeobj_125ab5d26887891ea5c067306b26268a, module_mpmath$functions$expintegrals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_125ab5d26887891ea5c067306b26268a = cache_frame_125ab5d26887891ea5c067306b26268a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_125ab5d26887891ea5c067306b26268a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_125ab5d26887891ea5c067306b26268a ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_1 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_1 = par_z;
        frame_125ab5d26887891ea5c067306b26268a->m_frame.f_lineno = 338;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_isinf, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 338;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 338;
            type_description_1 = "ooooooo";
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
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( par_z );
            tmp_compexpr_left_1 = par_z;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_1 = par_ctx;
            tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_inf );
            if ( tmp_compexpr_right_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 339;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            Py_DECREF( tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 339;
                type_description_1 = "ooooooo";
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
                PyObject *tmp_source_name_2;
                CHECK_OBJECT( par_ctx );
                tmp_source_name_2 = par_ctx;
                tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_zero );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 339;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_no_2:;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( par_z );
            tmp_compexpr_left_2 = par_z;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_3 = par_ctx;
            tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ninf );
            if ( tmp_compexpr_right_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 340;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 340;
                type_description_1 = "ooooooo";
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
                PyObject *tmp_left_name_1;
                PyObject *tmp_source_name_4;
                PyObject *tmp_right_name_1;
                CHECK_OBJECT( par_ctx );
                tmp_source_name_4 = par_ctx;
                tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_pi );
                if ( tmp_left_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 340;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_1 = const_complex_0_0__1_0;
                tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_left_name_1 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 340;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_no_3:;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_6;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_5 = par_ctx;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_fmul );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 341;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ctx );
        tmp_source_name_6 = par_ctx;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_j );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 341;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_z );
        tmp_tuple_element_1 = par_z;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_550e1ff28680964f0a1daa61d55eac15 );
        frame_125ab5d26887891ea5c067306b26268a->m_frame.f_lineno = 341;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 341;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_jz == NULL );
        var_jz = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_7;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_2;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_7 = par_ctx;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_fneg );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 342;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_jz );
        tmp_tuple_element_2 = var_jz;
        tmp_args_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_kw_name_2 = PyDict_Copy( const_dict_550e1ff28680964f0a1daa61d55eac15 );
        frame_125ab5d26887891ea5c067306b26268a->m_frame.f_lineno = 342;
        tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 342;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_njz == NULL );
        var_njz = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_3;
        tmp_left_name_2 = const_float_0_5;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_2 = par_ctx;
        CHECK_OBJECT( var_jz );
        tmp_args_element_name_2 = var_jz;
        frame_125ab5d26887891ea5c067306b26268a->m_frame.f_lineno = 343;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_left_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_ei, call_args );
        }

        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 343;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_3 = par_ctx;
        CHECK_OBJECT( var_njz );
        tmp_args_element_name_3 = var_njz;
        frame_125ab5d26887891ea5c067306b26268a->m_frame.f_lineno = 343;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_right_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_ei, call_args );
        }

        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 343;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 343;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 343;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_v == NULL );
        var_v = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_4 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_4 = par_z;
        frame_125ab5d26887891ea5c067306b26268a->m_frame.f_lineno = 344;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain__re, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_zreal == NULL );
        var_zreal = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_5 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_5 = par_z;
        frame_125ab5d26887891ea5c067306b26268a->m_frame.f_lineno = 345;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain__im, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 345;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_zimag == NULL );
        var_zimag = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_zreal );
        tmp_compexpr_left_3 = var_zreal;
        tmp_compexpr_right_3 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "ooooooo";
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
            CHECK_OBJECT( var_zimag );
            tmp_compexpr_left_4 = var_zimag;
            tmp_compexpr_right_4 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 347;
                type_description_1 = "ooooooo";
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
                PyObject *tmp_assign_source_6;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                PyObject *tmp_left_name_5;
                PyObject *tmp_source_name_8;
                PyObject *tmp_right_name_5;
                CHECK_OBJECT( var_v );
                tmp_left_name_4 = var_v;
                CHECK_OBJECT( par_ctx );
                tmp_source_name_8 = par_ctx;
                tmp_left_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_pi );
                if ( tmp_left_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 347;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_5 = const_complex_0_0__0_5;
                tmp_right_name_4 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_5 );
                Py_DECREF( tmp_left_name_5 );
                if ( tmp_right_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 347;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 347;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_6 = tmp_left_name_4;
                var_v = tmp_assign_source_6;

            }
            branch_no_5:;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( var_zimag );
            tmp_compexpr_left_5 = var_zimag;
            tmp_compexpr_right_5 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 348;
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
                PyObject *tmp_assign_source_7;
                PyObject *tmp_left_name_6;
                PyObject *tmp_right_name_6;
                PyObject *tmp_left_name_7;
                PyObject *tmp_source_name_9;
                PyObject *tmp_right_name_7;
                CHECK_OBJECT( var_v );
                tmp_left_name_6 = var_v;
                CHECK_OBJECT( par_ctx );
                tmp_source_name_9 = par_ctx;
                tmp_left_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_pi );
                if ( tmp_left_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 348;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_7 = const_complex_0_0__0_5;
                tmp_right_name_6 = BINARY_OPERATION_MUL( tmp_left_name_7, tmp_right_name_7 );
                Py_DECREF( tmp_left_name_7 );
                if ( tmp_right_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 348;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_6, tmp_right_name_6 );
                Py_DECREF( tmp_right_name_6 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 348;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_7 = tmp_left_name_6;
                var_v = tmp_assign_source_7;

            }
            branch_no_6:;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( var_zreal );
        tmp_compexpr_left_6 = var_zreal;
        tmp_compexpr_right_6 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 349;
            type_description_1 = "ooooooo";
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
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            CHECK_OBJECT( var_zimag );
            tmp_compexpr_left_7 = var_zimag;
            tmp_compexpr_right_7 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_INT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 350;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
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
                PyObject *tmp_assign_source_8;
                PyObject *tmp_left_name_8;
                PyObject *tmp_right_name_8;
                PyObject *tmp_left_name_9;
                PyObject *tmp_source_name_10;
                PyObject *tmp_right_name_9;
                if ( var_v == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "v" );
                    exception_tb = NULL;

                    exception_lineno = 350;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_left_name_8 = var_v;
                CHECK_OBJECT( par_ctx );
                tmp_source_name_10 = par_ctx;
                tmp_left_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_pi );
                if ( tmp_left_name_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 350;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_9 = const_complex_0_0__1_0;
                tmp_right_name_8 = BINARY_OPERATION_MUL( tmp_left_name_9, tmp_right_name_9 );
                Py_DECREF( tmp_left_name_9 );
                if ( tmp_right_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 350;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_8, tmp_right_name_8 );
                Py_DECREF( tmp_right_name_8 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 350;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_8 = tmp_left_name_8;
                var_v = tmp_assign_source_8;

            }
            branch_no_8:;
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            CHECK_OBJECT( var_zimag );
            tmp_compexpr_left_8 = var_zimag;
            tmp_compexpr_right_8 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 351;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
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
                PyObject *tmp_assign_source_9;
                PyObject *tmp_left_name_10;
                PyObject *tmp_right_name_10;
                PyObject *tmp_left_name_11;
                PyObject *tmp_source_name_11;
                PyObject *tmp_right_name_11;
                if ( var_v == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "v" );
                    exception_tb = NULL;

                    exception_lineno = 351;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_left_name_10 = var_v;
                CHECK_OBJECT( par_ctx );
                tmp_source_name_11 = par_ctx;
                tmp_left_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_pi );
                if ( tmp_left_name_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 351;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_11 = const_complex_0_0__1_0;
                tmp_right_name_10 = BINARY_OPERATION_MUL( tmp_left_name_11, tmp_right_name_11 );
                Py_DECREF( tmp_left_name_11 );
                if ( tmp_right_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 351;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_10, tmp_right_name_10 );
                Py_DECREF( tmp_right_name_10 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 351;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_9 = tmp_left_name_10;
                var_v = tmp_assign_source_9;

            }
            branch_no_9:;
        }
        branch_no_7:;
    }
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_6;
        int tmp_truth_name_2;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_6 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_6 = par_z;
        frame_125ab5d26887891ea5c067306b26268a->m_frame.f_lineno = 352;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain__is_real_type, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 352;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 352;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
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
        CHECK_OBJECT( var_zreal );
        tmp_compexpr_left_9 = var_zreal;
        tmp_compexpr_right_9 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 352;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_10 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_10 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_12;
            PyObject *tmp_args_element_name_7;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_12 = par_ctx;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__re );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 353;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            if ( var_v == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "v" );
                exception_tb = NULL;

                exception_lineno = 353;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_7 = var_v;
            frame_125ab5d26887891ea5c067306b26268a->m_frame.f_lineno = 353;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 353;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_v;
                var_v = tmp_assign_source_10;
                Py_XDECREF( old );
            }

        }
        branch_no_10:;
    }
    if ( var_v == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "v" );
        exception_tb = NULL;

        exception_lineno = 354;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_v;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_125ab5d26887891ea5c067306b26268a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_125ab5d26887891ea5c067306b26268a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_125ab5d26887891ea5c067306b26268a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_125ab5d26887891ea5c067306b26268a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_125ab5d26887891ea5c067306b26268a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_125ab5d26887891ea5c067306b26268a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_125ab5d26887891ea5c067306b26268a,
        type_description_1,
        par_ctx,
        par_z,
        var_zimag,
        var_jz,
        var_v,
        var_njz,
        var_zreal
    );


    // Release cached frame.
    if ( frame_125ab5d26887891ea5c067306b26268a == cache_frame_125ab5d26887891ea5c067306b26268a )
    {
        Py_DECREF( frame_125ab5d26887891ea5c067306b26268a );
    }
    cache_frame_125ab5d26887891ea5c067306b26268a = NULL;

    assertFrameObject( frame_125ab5d26887891ea5c067306b26268a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_21__ci_generic );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_zimag );
    var_zimag = NULL;

    Py_XDECREF( var_jz );
    var_jz = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_njz );
    var_njz = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    Py_XDECREF( var_zreal );
    var_zreal = NULL;

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

    Py_XDECREF( var_zimag );
    var_zimag = NULL;

    Py_XDECREF( var_jz );
    var_jz = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_njz );
    var_njz = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    Py_XDECREF( var_zreal );
    var_zreal = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_21__ci_generic );
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


static PyObject *impl_mpmath$functions$expintegrals$$$function_22_si( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_1dbef96ddd015c4b50ed3b2510561b4f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_1dbef96ddd015c4b50ed3b2510561b4f = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1dbef96ddd015c4b50ed3b2510561b4f, codeobj_1dbef96ddd015c4b50ed3b2510561b4f, module_mpmath$functions$expintegrals, sizeof(void *)+sizeof(void *) );
    frame_1dbef96ddd015c4b50ed3b2510561b4f = cache_frame_1dbef96ddd015c4b50ed3b2510561b4f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1dbef96ddd015c4b50ed3b2510561b4f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1dbef96ddd015c4b50ed3b2510561b4f ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_1 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_1 = par_z;
        frame_1dbef96ddd015c4b50ed3b2510561b4f->m_frame.f_lineno = 359;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__si, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 359;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_22_si );
    return NULL;
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
    PRESERVE_FRAME_EXCEPTION( frame_1dbef96ddd015c4b50ed3b2510561b4f );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_1dbef96ddd015c4b50ed3b2510561b4f, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_1dbef96ddd015c4b50ed3b2510561b4f, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_NotImplementedError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 360;
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_2 = par_ctx;
            CHECK_OBJECT( par_z );
            tmp_args_element_name_2 = par_z;
            frame_1dbef96ddd015c4b50ed3b2510561b4f->m_frame.f_lineno = 361;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__si_generic, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 361;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 358;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_1dbef96ddd015c4b50ed3b2510561b4f->m_frame) frame_1dbef96ddd015c4b50ed3b2510561b4f->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
        branch_end_1:;
    }
    // End of try:

#if 1
    RESTORE_FRAME_EXCEPTION( frame_1dbef96ddd015c4b50ed3b2510561b4f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_1dbef96ddd015c4b50ed3b2510561b4f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_1dbef96ddd015c4b50ed3b2510561b4f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1dbef96ddd015c4b50ed3b2510561b4f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1dbef96ddd015c4b50ed3b2510561b4f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1dbef96ddd015c4b50ed3b2510561b4f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1dbef96ddd015c4b50ed3b2510561b4f,
        type_description_1,
        par_ctx,
        par_z
    );


    // Release cached frame.
    if ( frame_1dbef96ddd015c4b50ed3b2510561b4f == cache_frame_1dbef96ddd015c4b50ed3b2510561b4f )
    {
        Py_DECREF( frame_1dbef96ddd015c4b50ed3b2510561b4f );
    }
    cache_frame_1dbef96ddd015c4b50ed3b2510561b4f = NULL;

    assertFrameObject( frame_1dbef96ddd015c4b50ed3b2510561b4f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_22_si );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

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

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_22_si );
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


static PyObject *impl_mpmath$functions$expintegrals$$$function_23__si_generic( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    PyObject *var_jz = NULL;
    PyObject *var_v = NULL;
    PyObject *var_njz = NULL;
    PyObject *var_zreal = NULL;
    struct Nuitka_FrameObject *frame_990f8fc199cc774a6bbbb03e8291b40d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_990f8fc199cc774a6bbbb03e8291b40d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_990f8fc199cc774a6bbbb03e8291b40d, codeobj_990f8fc199cc774a6bbbb03e8291b40d, module_mpmath$functions$expintegrals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_990f8fc199cc774a6bbbb03e8291b40d = cache_frame_990f8fc199cc774a6bbbb03e8291b40d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_990f8fc199cc774a6bbbb03e8291b40d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_990f8fc199cc774a6bbbb03e8291b40d ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_1 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_1 = par_z;
        frame_990f8fc199cc774a6bbbb03e8291b40d->m_frame.f_lineno = 365;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_isinf, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 365;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 365;
            type_description_1 = "oooooo";
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
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( par_z );
            tmp_compexpr_left_1 = par_z;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_1 = par_ctx;
            tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_inf );
            if ( tmp_compexpr_right_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 366;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            Py_DECREF( tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 366;
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
            {
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_source_name_2;
                tmp_left_name_1 = const_float_0_5;
                CHECK_OBJECT( par_ctx );
                tmp_source_name_2 = par_ctx;
                tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_pi );
                if ( tmp_right_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 366;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 366;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_no_2:;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( par_z );
            tmp_compexpr_left_2 = par_z;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_3 = par_ctx;
            tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ninf );
            if ( tmp_compexpr_right_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 367;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 367;
                type_description_1 = "oooooo";
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
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_source_name_4;
                tmp_left_name_2 = const_float__minus_0_5;
                CHECK_OBJECT( par_ctx );
                tmp_source_name_4 = par_ctx;
                tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_pi );
                if ( tmp_right_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 367;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 367;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_no_3:;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_2 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_2 = par_z;
        frame_990f8fc199cc774a6bbbb03e8291b40d->m_frame.f_lineno = 369;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_compexpr_left_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_mag, call_args );
        }

        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 369;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = const_int_neg_1;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_INT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 369;
            type_description_1 = "oooooo";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_source_name_6;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_5 = par_ctx;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_fmul );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 370;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_ctx );
            tmp_source_name_6 = par_ctx;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_j );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 370;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_1 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_z );
            tmp_tuple_element_1 = par_z;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_550e1ff28680964f0a1daa61d55eac15 );
            frame_990f8fc199cc774a6bbbb03e8291b40d->m_frame.f_lineno = 370;
            tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 370;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( var_jz == NULL );
            var_jz = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_7;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_7 = par_ctx;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_fneg );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 371;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_jz );
            tmp_tuple_element_2 = var_jz;
            tmp_args_name_2 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_kw_name_2 = PyDict_Copy( const_dict_550e1ff28680964f0a1daa61d55eac15 );
            frame_990f8fc199cc774a6bbbb03e8291b40d->m_frame.f_lineno = 371;
            tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 371;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( var_njz == NULL );
            var_njz = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_right_name_4;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_name_4;
            tmp_left_name_3 = const_complex_0_0__m0_5;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_3 = par_ctx;
            CHECK_OBJECT( var_jz );
            tmp_args_element_name_3 = var_jz;
            frame_990f8fc199cc774a6bbbb03e8291b40d->m_frame.f_lineno = 372;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_left_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_ei, call_args );
            }

            if ( tmp_left_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 372;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_4 = par_ctx;
            CHECK_OBJECT( var_njz );
            tmp_args_element_name_4 = var_njz;
            frame_990f8fc199cc774a6bbbb03e8291b40d->m_frame.f_lineno = 372;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_right_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_ei, call_args );
            }

            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_4 );

                exception_lineno = 372;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_3 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 372;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 372;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( var_v == NULL );
            var_v = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_name_5;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_5 = par_ctx;
            CHECK_OBJECT( par_z );
            tmp_args_element_name_5 = par_z;
            frame_990f8fc199cc774a6bbbb03e8291b40d->m_frame.f_lineno = 373;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain__re, call_args );
            }

            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 373;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( var_zreal == NULL );
            var_zreal = tmp_assign_source_4;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( var_zreal );
            tmp_compexpr_left_4 = var_zreal;
            tmp_compexpr_right_4 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 374;
                type_description_1 = "oooooo";
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
                PyObject *tmp_assign_source_5;
                PyObject *tmp_left_name_5;
                PyObject *tmp_right_name_5;
                PyObject *tmp_left_name_6;
                PyObject *tmp_right_name_6;
                PyObject *tmp_source_name_8;
                CHECK_OBJECT( var_v );
                tmp_left_name_5 = var_v;
                tmp_left_name_6 = const_float_0_5;
                CHECK_OBJECT( par_ctx );
                tmp_source_name_8 = par_ctx;
                tmp_right_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_pi );
                if ( tmp_right_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 375;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_5 = BINARY_OPERATION_MUL( tmp_left_name_6, tmp_right_name_6 );
                Py_DECREF( tmp_right_name_6 );
                if ( tmp_right_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 375;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_5, tmp_right_name_5 );
                Py_DECREF( tmp_right_name_5 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 375;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_5 = tmp_left_name_5;
                var_v = tmp_assign_source_5;

            }
            branch_no_5:;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( var_zreal );
            tmp_compexpr_left_5 = var_zreal;
            tmp_compexpr_right_5 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 376;
                type_description_1 = "oooooo";
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
                PyObject *tmp_assign_source_6;
                PyObject *tmp_left_name_7;
                PyObject *tmp_right_name_7;
                PyObject *tmp_left_name_8;
                PyObject *tmp_right_name_8;
                PyObject *tmp_source_name_9;
                CHECK_OBJECT( var_v );
                tmp_left_name_7 = var_v;
                tmp_left_name_8 = const_float_0_5;
                CHECK_OBJECT( par_ctx );
                tmp_source_name_9 = par_ctx;
                tmp_right_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_pi );
                if ( tmp_right_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 377;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_7 = BINARY_OPERATION_MUL( tmp_left_name_8, tmp_right_name_8 );
                Py_DECREF( tmp_right_name_8 );
                if ( tmp_right_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 377;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_7, tmp_right_name_7 );
                Py_DECREF( tmp_right_name_7 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 377;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_6 = tmp_left_name_7;
                var_v = tmp_assign_source_6;

            }
            branch_no_6:;
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_6;
            int tmp_truth_name_2;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_6 = par_ctx;
            CHECK_OBJECT( par_z );
            tmp_args_element_name_6 = par_z;
            frame_990f8fc199cc774a6bbbb03e8291b40d->m_frame.f_lineno = 378;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain__is_real_type, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 378;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_2 );

                exception_lineno = 378;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_7 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_2 );
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
                PyObject *tmp_assign_source_7;
                PyObject *tmp_called_name_3;
                PyObject *tmp_source_name_10;
                PyObject *tmp_args_element_name_7;
                CHECK_OBJECT( par_ctx );
                tmp_source_name_10 = par_ctx;
                tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__re );
                if ( tmp_called_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 379;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                if ( var_v == NULL )
                {
                    Py_DECREF( tmp_called_name_3 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "v" );
                    exception_tb = NULL;

                    exception_lineno = 379;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_7 = var_v;
                frame_990f8fc199cc774a6bbbb03e8291b40d->m_frame.f_lineno = 379;
                {
                    PyObject *call_args[] = { tmp_args_element_name_7 };
                    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_called_name_3 );
                if ( tmp_assign_source_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 379;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_v;
                    var_v = tmp_assign_source_7;
                    Py_XDECREF( old );
                }

            }
            branch_no_7:;
        }
        if ( var_v == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "v" );
            exception_tb = NULL;

            exception_lineno = 380;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_return_value = var_v;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_4;
        branch_no_4:;
        {
            PyObject *tmp_left_name_9;
            PyObject *tmp_right_name_9;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_11;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_left_name_10;
            PyObject *tmp_left_name_11;
            PyObject *tmp_right_name_10;
            PyObject *tmp_right_name_11;
            CHECK_OBJECT( par_z );
            tmp_left_name_9 = par_z;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_11 = par_ctx;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_hyp1f2 );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 382;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_8 = const_tuple_int_pos_1_int_pos_2_tuple;
            tmp_args_element_name_9 = const_tuple_int_pos_3_int_pos_2_tuple;
            tmp_args_element_name_10 = const_tuple_int_pos_3_int_pos_2_tuple;
            tmp_left_name_11 = const_float__minus_0_25;
            CHECK_OBJECT( par_z );
            tmp_right_name_10 = par_z;
            tmp_left_name_10 = BINARY_OPERATION_MUL( tmp_left_name_11, tmp_right_name_10 );
            if ( tmp_left_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 382;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_z );
            tmp_right_name_11 = par_z;
            tmp_args_element_name_11 = BINARY_OPERATION_MUL( tmp_left_name_10, tmp_right_name_11 );
            Py_DECREF( tmp_left_name_10 );
            if ( tmp_args_element_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 382;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_990f8fc199cc774a6bbbb03e8291b40d->m_frame.f_lineno = 382;
            {
                PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
                tmp_right_name_9 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_11 );
            if ( tmp_right_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 382;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_9, tmp_right_name_9 );
            Py_DECREF( tmp_right_name_9 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 382;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_4:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_990f8fc199cc774a6bbbb03e8291b40d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_990f8fc199cc774a6bbbb03e8291b40d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_990f8fc199cc774a6bbbb03e8291b40d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_990f8fc199cc774a6bbbb03e8291b40d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_990f8fc199cc774a6bbbb03e8291b40d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_990f8fc199cc774a6bbbb03e8291b40d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_990f8fc199cc774a6bbbb03e8291b40d,
        type_description_1,
        par_ctx,
        par_z,
        var_jz,
        var_v,
        var_njz,
        var_zreal
    );


    // Release cached frame.
    if ( frame_990f8fc199cc774a6bbbb03e8291b40d == cache_frame_990f8fc199cc774a6bbbb03e8291b40d )
    {
        Py_DECREF( frame_990f8fc199cc774a6bbbb03e8291b40d );
    }
    cache_frame_990f8fc199cc774a6bbbb03e8291b40d = NULL;

    assertFrameObject( frame_990f8fc199cc774a6bbbb03e8291b40d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_23__si_generic );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_jz );
    var_jz = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_njz );
    var_njz = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    Py_XDECREF( var_zreal );
    var_zreal = NULL;

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

    Py_XDECREF( var_jz );
    var_jz = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_njz );
    var_njz = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    Py_XDECREF( var_zreal );
    var_zreal = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_23__si_generic );
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


static PyObject *impl_mpmath$functions$expintegrals$$$function_24_chi( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    PyObject *var_nz = NULL;
    PyObject *var_v = NULL;
    PyObject *var_zimag = NULL;
    PyObject *var_zreal = NULL;
    struct Nuitka_FrameObject *frame_be286ab1ed262d5eb5b8faced6390893;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_be286ab1ed262d5eb5b8faced6390893 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_be286ab1ed262d5eb5b8faced6390893, codeobj_be286ab1ed262d5eb5b8faced6390893, module_mpmath$functions$expintegrals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_be286ab1ed262d5eb5b8faced6390893 = cache_frame_be286ab1ed262d5eb5b8faced6390893;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_be286ab1ed262d5eb5b8faced6390893 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_be286ab1ed262d5eb5b8faced6390893 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_1 = par_ctx;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_fneg );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_z );
        tmp_tuple_element_1 = par_z;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_550e1ff28680964f0a1daa61d55eac15 );
        frame_be286ab1ed262d5eb5b8faced6390893->m_frame.f_lineno = 386;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_nz == NULL );
        var_nz = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        tmp_left_name_1 = const_float_0_5;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_1 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_1 = par_z;
        frame_be286ab1ed262d5eb5b8faced6390893->m_frame.f_lineno = 387;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_left_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_ei, call_args );
        }

        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_2 = par_ctx;
        CHECK_OBJECT( var_nz );
        tmp_args_element_name_2 = var_nz;
        frame_be286ab1ed262d5eb5b8faced6390893->m_frame.f_lineno = 387;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_right_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_ei, call_args );
        }

        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 387;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_v == NULL );
        var_v = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_3 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_3 = par_z;
        frame_be286ab1ed262d5eb5b8faced6390893->m_frame.f_lineno = 388;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain__re, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 388;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_zreal == NULL );
        var_zreal = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_4 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_4 = par_z;
        frame_be286ab1ed262d5eb5b8faced6390893->m_frame.f_lineno = 389;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain__im, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 389;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_zimag == NULL );
        var_zimag = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_zimag );
        tmp_compexpr_left_1 = var_zimag;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 390;
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
            PyObject *tmp_assign_source_5;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_source_name_2;
            PyObject *tmp_right_name_4;
            CHECK_OBJECT( var_v );
            tmp_left_name_3 = var_v;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_2 = par_ctx;
            tmp_left_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_pi );
            if ( tmp_left_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 391;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_4 = const_complex_0_0__0_5;
            tmp_right_name_3 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_4 );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 391;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 391;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_5 = tmp_left_name_3;
            var_v = tmp_assign_source_5;

        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( var_zimag );
            tmp_compexpr_left_2 = var_zimag;
            tmp_compexpr_right_2 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
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
            {
                PyObject *tmp_assign_source_6;
                PyObject *tmp_left_name_5;
                PyObject *tmp_right_name_5;
                PyObject *tmp_left_name_6;
                PyObject *tmp_source_name_3;
                PyObject *tmp_right_name_6;
                CHECK_OBJECT( var_v );
                tmp_left_name_5 = var_v;
                CHECK_OBJECT( par_ctx );
                tmp_source_name_3 = par_ctx;
                tmp_left_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_pi );
                if ( tmp_left_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 393;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_6 = const_complex_0_0__0_5;
                tmp_right_name_5 = BINARY_OPERATION_MUL( tmp_left_name_6, tmp_right_name_6 );
                Py_DECREF( tmp_left_name_6 );
                if ( tmp_right_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 393;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_5, tmp_right_name_5 );
                Py_DECREF( tmp_right_name_5 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 393;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_6 = tmp_left_name_5;
                var_v = tmp_assign_source_6;

            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                CHECK_OBJECT( var_zreal );
                tmp_compexpr_left_3 = var_zreal;
                tmp_compexpr_right_3 = const_int_0;
                tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 394;
                    type_description_1 = "oooooo";
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
                    PyObject *tmp_assign_source_7;
                    PyObject *tmp_left_name_7;
                    PyObject *tmp_right_name_7;
                    PyObject *tmp_left_name_8;
                    PyObject *tmp_source_name_4;
                    PyObject *tmp_right_name_8;
                    CHECK_OBJECT( var_v );
                    tmp_left_name_7 = var_v;
                    CHECK_OBJECT( par_ctx );
                    tmp_source_name_4 = par_ctx;
                    tmp_left_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_pi );
                    if ( tmp_left_name_8 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 395;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_right_name_8 = const_complex_0_0__1_0;
                    tmp_right_name_7 = BINARY_OPERATION_MUL( tmp_left_name_8, tmp_right_name_8 );
                    Py_DECREF( tmp_left_name_8 );
                    if ( tmp_right_name_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 395;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_7, tmp_right_name_7 );
                    Py_DECREF( tmp_right_name_7 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 395;
                        type_description_1 = "oooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_7 = tmp_left_name_7;
                    var_v = tmp_assign_source_7;

                }
                branch_no_3:;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    if ( var_v == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "v" );
        exception_tb = NULL;

        exception_lineno = 396;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_v;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_be286ab1ed262d5eb5b8faced6390893 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_be286ab1ed262d5eb5b8faced6390893 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_be286ab1ed262d5eb5b8faced6390893 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_be286ab1ed262d5eb5b8faced6390893, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_be286ab1ed262d5eb5b8faced6390893->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_be286ab1ed262d5eb5b8faced6390893, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_be286ab1ed262d5eb5b8faced6390893,
        type_description_1,
        par_ctx,
        par_z,
        var_nz,
        var_v,
        var_zimag,
        var_zreal
    );


    // Release cached frame.
    if ( frame_be286ab1ed262d5eb5b8faced6390893 == cache_frame_be286ab1ed262d5eb5b8faced6390893 )
    {
        Py_DECREF( frame_be286ab1ed262d5eb5b8faced6390893 );
    }
    cache_frame_be286ab1ed262d5eb5b8faced6390893 = NULL;

    assertFrameObject( frame_be286ab1ed262d5eb5b8faced6390893 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_24_chi );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)var_nz );
    Py_DECREF( var_nz );
    var_nz = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    CHECK_OBJECT( (PyObject *)var_zimag );
    Py_DECREF( var_zimag );
    var_zimag = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)var_zreal );
    Py_DECREF( var_zreal );
    var_zreal = NULL;

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

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    Py_XDECREF( var_nz );
    var_nz = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_zimag );
    var_zimag = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    Py_XDECREF( var_zreal );
    var_zreal = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_24_chi );
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


static PyObject *impl_mpmath$functions$expintegrals$$$function_25_shi( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    PyObject *var_zimag = NULL;
    PyObject *var_nz = NULL;
    PyObject *var_v = NULL;
    struct Nuitka_FrameObject *frame_d9a385b3776b39e026de6ac09af8b77a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d9a385b3776b39e026de6ac09af8b77a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d9a385b3776b39e026de6ac09af8b77a, codeobj_d9a385b3776b39e026de6ac09af8b77a, module_mpmath$functions$expintegrals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d9a385b3776b39e026de6ac09af8b77a = cache_frame_d9a385b3776b39e026de6ac09af8b77a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d9a385b3776b39e026de6ac09af8b77a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d9a385b3776b39e026de6ac09af8b77a ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_1 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_1 = par_z;
        frame_d9a385b3776b39e026de6ac09af8b77a->m_frame.f_lineno = 401;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_compexpr_left_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_mag, call_args );
        }

        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 401;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_neg_1;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 401;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_1 = par_ctx;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_fneg );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 402;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_z );
            tmp_tuple_element_1 = par_z;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_550e1ff28680964f0a1daa61d55eac15 );
            frame_d9a385b3776b39e026de6ac09af8b77a->m_frame.f_lineno = 402;
            tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 402;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_nz == NULL );
            var_nz = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_3;
            tmp_left_name_1 = const_float_0_5;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_2 = par_ctx;
            CHECK_OBJECT( par_z );
            tmp_args_element_name_2 = par_z;
            frame_d9a385b3776b39e026de6ac09af8b77a->m_frame.f_lineno = 403;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_left_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_ei, call_args );
            }

            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 403;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_3 = par_ctx;
            CHECK_OBJECT( var_nz );
            tmp_args_element_name_3 = var_nz;
            frame_d9a385b3776b39e026de6ac09af8b77a->m_frame.f_lineno = 403;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_right_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_ei, call_args );
            }

            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_2 );

                exception_lineno = 403;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 403;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 403;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_v == NULL );
            var_v = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_name_4;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_4 = par_ctx;
            CHECK_OBJECT( par_z );
            tmp_args_element_name_4 = par_z;
            frame_d9a385b3776b39e026de6ac09af8b77a->m_frame.f_lineno = 404;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain__im, call_args );
            }

            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 404;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_zimag == NULL );
            var_zimag = tmp_assign_source_3;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( var_zimag );
            tmp_compexpr_left_2 = var_zimag;
            tmp_compexpr_right_2 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 405;
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
                PyObject *tmp_assign_source_4;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                PyObject *tmp_source_name_2;
                CHECK_OBJECT( var_v );
                tmp_left_name_3 = var_v;
                tmp_left_name_4 = const_complex_0_0__0_5;
                CHECK_OBJECT( par_ctx );
                tmp_source_name_2 = par_ctx;
                tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_pi );
                if ( tmp_right_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 405;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_3 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_right_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 405;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 405;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_4 = tmp_left_name_3;
                var_v = tmp_assign_source_4;

            }
            branch_no_2:;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( var_zimag );
            tmp_compexpr_left_3 = var_zimag;
            tmp_compexpr_right_3 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 406;
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
                PyObject *tmp_assign_source_5;
                PyObject *tmp_left_name_5;
                PyObject *tmp_right_name_5;
                PyObject *tmp_left_name_6;
                PyObject *tmp_right_name_6;
                PyObject *tmp_source_name_3;
                CHECK_OBJECT( var_v );
                tmp_left_name_5 = var_v;
                tmp_left_name_6 = const_complex_0_0__0_5;
                CHECK_OBJECT( par_ctx );
                tmp_source_name_3 = par_ctx;
                tmp_right_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_pi );
                if ( tmp_right_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 406;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_5 = BINARY_OPERATION_MUL( tmp_left_name_6, tmp_right_name_6 );
                Py_DECREF( tmp_right_name_6 );
                if ( tmp_right_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 406;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
                Py_DECREF( tmp_right_name_5 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 406;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_5 = tmp_left_name_5;
                var_v = tmp_assign_source_5;

            }
            branch_no_3:;
        }
        if ( var_v == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "v" );
            exception_tb = NULL;

            exception_lineno = 407;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_return_value = var_v;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_left_name_8;
            PyObject *tmp_left_name_9;
            PyObject *tmp_right_name_8;
            PyObject *tmp_right_name_9;
            CHECK_OBJECT( par_z );
            tmp_left_name_7 = par_z;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_4 = par_ctx;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_hyp1f2 );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 409;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_5 = const_tuple_int_pos_1_int_pos_2_tuple;
            tmp_args_element_name_6 = const_tuple_int_pos_3_int_pos_2_tuple;
            tmp_args_element_name_7 = const_tuple_int_pos_3_int_pos_2_tuple;
            tmp_left_name_9 = const_float_0_25;
            CHECK_OBJECT( par_z );
            tmp_right_name_8 = par_z;
            tmp_left_name_8 = BINARY_OPERATION_MUL( tmp_left_name_9, tmp_right_name_8 );
            if ( tmp_left_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 409;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_z );
            tmp_right_name_9 = par_z;
            tmp_args_element_name_8 = BINARY_OPERATION_MUL( tmp_left_name_8, tmp_right_name_9 );
            Py_DECREF( tmp_left_name_8 );
            if ( tmp_args_element_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 409;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            frame_d9a385b3776b39e026de6ac09af8b77a->m_frame.f_lineno = 409;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
                tmp_right_name_7 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_8 );
            if ( tmp_right_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 409;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_7, tmp_right_name_7 );
            Py_DECREF( tmp_right_name_7 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 409;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9a385b3776b39e026de6ac09af8b77a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9a385b3776b39e026de6ac09af8b77a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9a385b3776b39e026de6ac09af8b77a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d9a385b3776b39e026de6ac09af8b77a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d9a385b3776b39e026de6ac09af8b77a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d9a385b3776b39e026de6ac09af8b77a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d9a385b3776b39e026de6ac09af8b77a,
        type_description_1,
        par_ctx,
        par_z,
        var_zimag,
        var_nz,
        var_v
    );


    // Release cached frame.
    if ( frame_d9a385b3776b39e026de6ac09af8b77a == cache_frame_d9a385b3776b39e026de6ac09af8b77a )
    {
        Py_DECREF( frame_d9a385b3776b39e026de6ac09af8b77a );
    }
    cache_frame_d9a385b3776b39e026de6ac09af8b77a = NULL;

    assertFrameObject( frame_d9a385b3776b39e026de6ac09af8b77a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_25_shi );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_zimag );
    var_zimag = NULL;

    Py_XDECREF( var_nz );
    var_nz = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

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

    Py_XDECREF( var_zimag );
    var_zimag = NULL;

    Py_XDECREF( var_nz );
    var_nz = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_25_shi );
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


static PyObject *impl_mpmath$functions$expintegrals$$$function_26_fresnels( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_c036c8d94b447bab72251732bc63a399;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c036c8d94b447bab72251732bc63a399 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c036c8d94b447bab72251732bc63a399, codeobj_c036c8d94b447bab72251732bc63a399, module_mpmath$functions$expintegrals, sizeof(void *)+sizeof(void *) );
    frame_c036c8d94b447bab72251732bc63a399 = cache_frame_c036c8d94b447bab72251732bc63a399;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c036c8d94b447bab72251732bc63a399 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c036c8d94b447bab72251732bc63a399 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_z );
        tmp_compexpr_left_1 = par_z;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_1 = par_ctx;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_inf );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 413;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 413;
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
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_1 = par_ctx;
            frame_c036c8d94b447bab72251732bc63a399->m_frame.f_lineno = 414;
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_mpf, &PyTuple_GET_ITEM( const_tuple_float_0_5_tuple, 0 ) );

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 414;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_z );
        tmp_compexpr_left_2 = par_z;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_2 = par_ctx;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ninf );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 415;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 415;
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
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_2 = par_ctx;
            frame_c036c8d94b447bab72251732bc63a399->m_frame.f_lineno = 416;
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_mpf, &PyTuple_GET_ITEM( const_tuple_float__minus_0_5_tuple, 0 ) );

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 416;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_left_name_7;
        PyObject *tmp_source_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_7;
        PyObject *tmp_right_name_8;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_3 = par_ctx;
        tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_pi );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 417;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_z );
        tmp_left_name_4 = par_z;
        tmp_right_name_2 = const_int_pos_3;
        tmp_right_name_1 = POWER_OPERATION( tmp_left_name_4, tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 417;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 417;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = const_int_pos_6;
        tmp_left_name_1 = BINARY_OPERATION_DIV( tmp_left_name_2, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 417;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ctx );
        tmp_source_name_4 = par_ctx;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_hyp1f2 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 417;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = const_tuple_int_pos_3_int_pos_4_tuple;
        tmp_args_element_name_2 = const_tuple_int_pos_3_int_pos_2_tuple;
        tmp_args_element_name_3 = const_tuple_int_pos_7_int_pos_4_tuple;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_5 = par_ctx;
        tmp_left_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_pi );
        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 417;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_5 = const_int_pos_2;
        tmp_operand_name_1 = POWER_OPERATION( tmp_left_name_7, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_7 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 417;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_6 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 417;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_z );
        tmp_left_name_8 = par_z;
        tmp_right_name_7 = const_int_pos_4;
        tmp_right_name_6 = POWER_OPERATION( tmp_left_name_8, tmp_right_name_7 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 417;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_5 = BINARY_OPERATION_MUL( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 417;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_8 = const_int_pos_16;
        tmp_args_element_name_4 = BINARY_OPERATION_DIV( tmp_left_name_5, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_5 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 417;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_c036c8d94b447bab72251732bc63a399->m_frame.f_lineno = 417;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 417;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 417;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c036c8d94b447bab72251732bc63a399 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c036c8d94b447bab72251732bc63a399 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c036c8d94b447bab72251732bc63a399 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c036c8d94b447bab72251732bc63a399, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c036c8d94b447bab72251732bc63a399->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c036c8d94b447bab72251732bc63a399, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c036c8d94b447bab72251732bc63a399,
        type_description_1,
        par_ctx,
        par_z
    );


    // Release cached frame.
    if ( frame_c036c8d94b447bab72251732bc63a399 == cache_frame_c036c8d94b447bab72251732bc63a399 )
    {
        Py_DECREF( frame_c036c8d94b447bab72251732bc63a399 );
    }
    cache_frame_c036c8d94b447bab72251732bc63a399 = NULL;

    assertFrameObject( frame_c036c8d94b447bab72251732bc63a399 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_26_fresnels );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

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

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

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
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_26_fresnels );
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


static PyObject *impl_mpmath$functions$expintegrals$$$function_27_fresnelc( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_ade278d4b58a3f0c1806ec8882e2f6e5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ade278d4b58a3f0c1806ec8882e2f6e5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ade278d4b58a3f0c1806ec8882e2f6e5, codeobj_ade278d4b58a3f0c1806ec8882e2f6e5, module_mpmath$functions$expintegrals, sizeof(void *)+sizeof(void *) );
    frame_ade278d4b58a3f0c1806ec8882e2f6e5 = cache_frame_ade278d4b58a3f0c1806ec8882e2f6e5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ade278d4b58a3f0c1806ec8882e2f6e5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ade278d4b58a3f0c1806ec8882e2f6e5 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_z );
        tmp_compexpr_left_1 = par_z;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_1 = par_ctx;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_inf );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 421;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 421;
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
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_1 = par_ctx;
            frame_ade278d4b58a3f0c1806ec8882e2f6e5->m_frame.f_lineno = 422;
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_mpf, &PyTuple_GET_ITEM( const_tuple_float_0_5_tuple, 0 ) );

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 422;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_z );
        tmp_compexpr_left_2 = par_z;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_2 = par_ctx;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ninf );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 423;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 423;
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
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_2 = par_ctx;
            frame_ade278d4b58a3f0c1806ec8882e2f6e5->m_frame.f_lineno = 424;
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_mpf, &PyTuple_GET_ITEM( const_tuple_float__minus_0_5_tuple, 0 ) );

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 424;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_left_name_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( par_z );
        tmp_left_name_1 = par_z;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_3 = par_ctx;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_hyp1f2 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 425;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = const_tuple_int_pos_1_int_pos_4_tuple;
        tmp_args_element_name_2 = const_tuple_int_pos_1_int_pos_2_tuple;
        tmp_args_element_name_3 = const_tuple_int_pos_5_int_pos_4_tuple;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_4 = par_ctx;
        tmp_left_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_pi );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 425;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = const_int_pos_2;
        tmp_operand_name_1 = POWER_OPERATION( tmp_left_name_4, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 425;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 425;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_z );
        tmp_left_name_5 = par_z;
        tmp_right_name_4 = const_int_pos_4;
        tmp_right_name_3 = POWER_OPERATION( tmp_left_name_5, tmp_right_name_4 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 425;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 425;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_5 = const_int_pos_16;
        tmp_args_element_name_4 = BINARY_OPERATION_DIV( tmp_left_name_2, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 425;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_ade278d4b58a3f0c1806ec8882e2f6e5->m_frame.f_lineno = 425;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 425;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 425;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ade278d4b58a3f0c1806ec8882e2f6e5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ade278d4b58a3f0c1806ec8882e2f6e5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ade278d4b58a3f0c1806ec8882e2f6e5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ade278d4b58a3f0c1806ec8882e2f6e5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ade278d4b58a3f0c1806ec8882e2f6e5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ade278d4b58a3f0c1806ec8882e2f6e5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ade278d4b58a3f0c1806ec8882e2f6e5,
        type_description_1,
        par_ctx,
        par_z
    );


    // Release cached frame.
    if ( frame_ade278d4b58a3f0c1806ec8882e2f6e5 == cache_frame_ade278d4b58a3f0c1806ec8882e2f6e5 )
    {
        Py_DECREF( frame_ade278d4b58a3f0c1806ec8882e2f6e5 );
    }
    cache_frame_ade278d4b58a3f0c1806ec8882e2f6e5 = NULL;

    assertFrameObject( frame_ade278d4b58a3f0c1806ec8882e2f6e5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_27_fresnelc );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

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

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

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
    NUITKA_CANNOT_GET_HERE( mpmath$functions$expintegrals$$$function_27_fresnelc );
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



static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_10_betainc( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$expintegrals$$$function_10_betainc,
        const_str_plain_betainc,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c74430419e29b69e44b4e0ba56a3bf40,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$expintegrals,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_11_gammainc( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$expintegrals$$$function_11_gammainc,
        const_str_plain_gammainc,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_82f330fe39d230cc02ec5c60221e2859,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$expintegrals,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_12__lower_gamma( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$expintegrals$$$function_12__lower_gamma,
        const_str_plain__lower_gamma,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_980e35055d58d0fe0d5a7a367140b75d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$expintegrals,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_12__lower_gamma$$$function_1_h(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$expintegrals$$$function_12__lower_gamma$$$function_1_h,
        const_str_plain_h,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3b8b4ae7817486bbfbb49d6a82c4e6c8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$expintegrals,
        NULL,
        4
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_13__upper_gamma( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$expintegrals$$$function_13__upper_gamma,
        const_str_plain__upper_gamma,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cb4229f991058b0b9c2f86b71795eb5d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$expintegrals,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_13__upper_gamma$$$function_1_h(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$expintegrals$$$function_13__upper_gamma$$$function_1_h,
        const_str_plain_h,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b4c7b2142e65e9ba7b1b0f4f502b94dc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$expintegrals,
        NULL,
        4
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_13__upper_gamma$$$function_2_h(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$expintegrals$$$function_13__upper_gamma$$$function_2_h,
        const_str_plain_h,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_68a4c17ae080fa6fa20d9389a89d2b1f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$expintegrals,
        NULL,
        4
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_14__gamma3( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$expintegrals$$$function_14__gamma3,
        const_str_plain__gamma3,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_46711f24c7a6d66607db5d57710fa037,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$expintegrals,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_15_expint(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$expintegrals$$$function_15_expint,
        const_str_plain_expint,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a287025019639a9c5bb7e2b497394dcb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$expintegrals,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_16_li( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$expintegrals$$$function_16_li,
        const_str_plain_li,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1abed403ae0025d9738bf5a035bbb4c8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$expintegrals,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_17_ei(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$expintegrals$$$function_17_ei,
        const_str_plain_ei,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7d2ee6a9722a81c009ccdb402015fb08,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$expintegrals,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_18__ei_generic(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$expintegrals$$$function_18__ei_generic,
        const_str_plain__ei_generic,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c5ab4a9600cd330dea24453251ed7d8f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$expintegrals,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_19_e1(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$expintegrals$$$function_19_e1,
        const_str_plain_e1,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_dae9bfc2ca3ee8fb412d71d4e7c6acc0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$expintegrals,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_1__erf_complex(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$expintegrals$$$function_1__erf_complex,
        const_str_plain__erf_complex,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e37886ee17fed9a5cc0c0e402c43a577,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$expintegrals,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_20_ci(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$expintegrals$$$function_20_ci,
        const_str_plain_ci,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0319ecb468246e8e2fbc628ffc184288,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$expintegrals,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_21__ci_generic(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$expintegrals$$$function_21__ci_generic,
        const_str_plain__ci_generic,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_125ab5d26887891ea5c067306b26268a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$expintegrals,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_22_si(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$expintegrals$$$function_22_si,
        const_str_plain_si,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1dbef96ddd015c4b50ed3b2510561b4f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$expintegrals,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_23__si_generic(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$expintegrals$$$function_23__si_generic,
        const_str_plain__si_generic,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_990f8fc199cc774a6bbbb03e8291b40d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$expintegrals,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_24_chi(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$expintegrals$$$function_24_chi,
        const_str_plain_chi,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_be286ab1ed262d5eb5b8faced6390893,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$expintegrals,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_25_shi(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$expintegrals$$$function_25_shi,
        const_str_plain_shi,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d9a385b3776b39e026de6ac09af8b77a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$expintegrals,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_26_fresnels(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$expintegrals$$$function_26_fresnels,
        const_str_plain_fresnels,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c036c8d94b447bab72251732bc63a399,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$expintegrals,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_27_fresnelc(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$expintegrals$$$function_27_fresnelc,
        const_str_plain_fresnelc,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ade278d4b58a3f0c1806ec8882e2f6e5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$expintegrals,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_2__erfc_complex(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$expintegrals$$$function_2__erfc_complex,
        const_str_plain__erfc_complex,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_488351ea5a36efb9cda852ed175f1c4b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$expintegrals,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_3_erf(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$expintegrals$$$function_3_erf,
        const_str_plain_erf,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d822bf3fbb04bcd3a52f3ccdd744c293,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$expintegrals,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_4_erfc(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$expintegrals$$$function_4_erfc,
        const_str_plain_erfc,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_62ffe41ef4fc586b20a5844171116da3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$expintegrals,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_5_square_exp_arg( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$expintegrals$$$function_5_square_exp_arg,
        const_str_plain_square_exp_arg,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c6a58f317ba230d241557e77cab243a1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$expintegrals,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_6_erfi(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$expintegrals$$$function_6_erfi,
        const_str_plain_erfi,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a16fb580e3854d95d5925bf5ee9236ad,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$expintegrals,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_7_erfinv(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$expintegrals$$$function_7_erfinv,
        const_str_plain_erfinv,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e0a5b88f13387d42cb1ddc3a970c6d1c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$expintegrals,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_7_erfinv$$$function_1_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$expintegrals$$$function_7_erfinv$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9606ad0eadaa4a285dfa0f9305dbed74,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$expintegrals,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_8_npdf( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$expintegrals$$$function_8_npdf,
        const_str_plain_npdf,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_82b7d31a509b08b331f051cb5f9a48c1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$expintegrals,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_9_ncdf( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$expintegrals$$$function_9_ncdf,
        const_str_plain_ncdf,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b139de8956e5282e0ecbd44ef1175d4d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$expintegrals,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_mpmath$functions$expintegrals =
{
    PyModuleDef_HEAD_INIT,
    "mpmath.functions.expintegrals",
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

MOD_INIT_DECL( mpmath$functions$expintegrals )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_mpmath$functions$expintegrals );
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
    puts("mpmath.functions.expintegrals: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("mpmath.functions.expintegrals: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("mpmath.functions.expintegrals: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initmpmath$functions$expintegrals" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_mpmath$functions$expintegrals = Py_InitModule4(
        "mpmath.functions.expintegrals",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_mpmath$functions$expintegrals = PyModule_Create( &mdef_mpmath$functions$expintegrals );
#endif

    moduledict_mpmath$functions$expintegrals = MODULE_DICT( module_mpmath$functions$expintegrals );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_mpmath$functions$expintegrals,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_mpmath$functions$expintegrals,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_mpmath$functions$expintegrals,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_mpmath$functions$expintegrals );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_8341899cc63100d153b360653ca4dffd, module_mpmath$functions$expintegrals );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_06d36594229935102a097b7c7faa5346;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_db4d051d85224eb8d1533d572501fe3f;
        UPDATE_STRING_DICT0( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_06d36594229935102a097b7c7faa5346 = MAKE_MODULE_FRAME( codeobj_06d36594229935102a097b7c7faa5346, module_mpmath$functions$expintegrals );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_06d36594229935102a097b7c7faa5346 );
    assert( Py_REFCNT( frame_06d36594229935102a097b7c7faa5346 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_functions;
        tmp_globals_name_1 = (PyObject *)moduledict_mpmath$functions$expintegrals;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_defun_str_plain_defun_wrapped_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_06d36594229935102a097b7c7faa5346->m_frame.f_lineno = 1;
        tmp_assign_source_3 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_defun );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_defun, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_defun_wrapped );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_defun_wrapped, tmp_assign_source_5 );
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
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_defun_wrapped );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defun_wrapped );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "defun_wrapped" );
            exception_tb = NULL;

            exception_lineno = 3;

            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_args_element_name_1 = MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_1__erf_complex(  );



        frame_06d36594229935102a097b7c7faa5346->m_frame.f_lineno = 3;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain__erf_complex, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_defun_wrapped );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defun_wrapped );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "defun_wrapped" );
            exception_tb = NULL;

            exception_lineno = 12;

            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        tmp_args_element_name_2 = MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_2__erfc_complex(  );



        frame_06d36594229935102a097b7c7faa5346->m_frame.f_lineno = 12;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain__erfc_complex, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_defun );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defun );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "defun" );
            exception_tb = NULL;

            exception_lineno = 24;

            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        tmp_args_element_name_3 = MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_3_erf(  );



        frame_06d36594229935102a097b7c7faa5346->m_frame.f_lineno = 24;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_erf, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_defun );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defun );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "defun" );
            exception_tb = NULL;

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        tmp_args_element_name_4 = MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_4_erfc(  );



        frame_06d36594229935102a097b7c7faa5346->m_frame.f_lineno = 39;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_erfc, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_defaults_1;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_defun );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defun );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "defun" );
            exception_tb = NULL;

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_5;
        tmp_defaults_1 = const_tuple_int_pos_1_false_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_args_element_name_5 = MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_5_square_exp_arg( tmp_defaults_1 );



        frame_06d36594229935102a097b7c7faa5346->m_frame.f_lineno = 54;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_square_exp_arg, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_defun_wrapped );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defun_wrapped );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "defun_wrapped" );
            exception_tb = NULL;

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_6;
        tmp_args_element_name_6 = MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_6_erfi(  );



        frame_06d36594229935102a097b7c7faa5346->m_frame.f_lineno = 66;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_erfi, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_defun_wrapped );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defun_wrapped );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "defun_wrapped" );
            exception_tb = NULL;

            exception_lineno = 76;

            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_7;
        tmp_args_element_name_7 = MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_7_erfinv(  );



        frame_06d36594229935102a097b7c7faa5346->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_erfinv, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_defaults_2;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_defun_wrapped );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defun_wrapped );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "defun_wrapped" );
            exception_tb = NULL;

            exception_lineno = 95;

            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = tmp_mvar_value_8;
        tmp_defaults_2 = const_tuple_int_0_int_pos_1_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_args_element_name_8 = MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_8_npdf( tmp_defaults_2 );



        frame_06d36594229935102a097b7c7faa5346->m_frame.f_lineno = 95;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_npdf, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_defaults_3;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_defun_wrapped );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defun_wrapped );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "defun_wrapped" );
            exception_tb = NULL;

            exception_lineno = 100;

            goto frame_exception_exit_1;
        }

        tmp_called_name_9 = tmp_mvar_value_9;
        tmp_defaults_3 = const_tuple_int_0_int_pos_1_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_args_element_name_9 = MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_9_ncdf( tmp_defaults_3 );



        frame_06d36594229935102a097b7c7faa5346->m_frame.f_lineno = 100;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_ncdf, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_10;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_defaults_4;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_defun_wrapped );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defun_wrapped );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "defun_wrapped" );
            exception_tb = NULL;

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }

        tmp_called_name_10 = tmp_mvar_value_10;
        tmp_defaults_4 = const_tuple_int_0_int_pos_1_false_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_args_element_name_10 = MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_10_betainc( tmp_defaults_4 );



        frame_06d36594229935102a097b7c7faa5346->m_frame.f_lineno = 108;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_betainc, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_11;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_defaults_5;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_defun );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defun );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "defun" );
            exception_tb = NULL;

            exception_lineno = 133;

            goto frame_exception_exit_1;
        }

        tmp_called_name_11 = tmp_mvar_value_11;
        tmp_defaults_5 = const_tuple_int_0_none_false_tuple;
        Py_INCREF( tmp_defaults_5 );
        tmp_args_element_name_11 = MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_11_gammainc( tmp_defaults_5 );



        frame_06d36594229935102a097b7c7faa5346->m_frame.f_lineno = 133;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
        }

        Py_DECREF( tmp_args_element_name_11 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_gammainc, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_12;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_defaults_6;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_defun );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defun );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "defun" );
            exception_tb = NULL;

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }

        tmp_called_name_12 = tmp_mvar_value_12;
        tmp_defaults_6 = const_tuple_false_tuple;
        Py_INCREF( tmp_defaults_6 );
        tmp_args_element_name_12 = MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_12__lower_gamma( tmp_defaults_6 );



        frame_06d36594229935102a097b7c7faa5346->m_frame.f_lineno = 174;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
        }

        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain__lower_gamma, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_13;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_defaults_7;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_defun );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defun );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "defun" );
            exception_tb = NULL;

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }

        tmp_called_name_13 = tmp_mvar_value_13;
        tmp_defaults_7 = const_tuple_false_tuple;
        Py_INCREF( tmp_defaults_7 );
        tmp_args_element_name_13 = MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_13__upper_gamma( tmp_defaults_7 );



        frame_06d36594229935102a097b7c7faa5346->m_frame.f_lineno = 186;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
        }

        Py_DECREF( tmp_args_element_name_13 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain__upper_gamma, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_14;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_defaults_8;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_defun );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defun );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "defun" );
            exception_tb = NULL;

            exception_lineno = 225;

            goto frame_exception_exit_1;
        }

        tmp_called_name_14 = tmp_mvar_value_14;
        tmp_defaults_8 = const_tuple_false_tuple;
        Py_INCREF( tmp_defaults_8 );
        tmp_args_element_name_14 = MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_14__gamma3( tmp_defaults_8 );



        frame_06d36594229935102a097b7c7faa5346->m_frame.f_lineno = 225;
        {
            PyObject *call_args[] = { tmp_args_element_name_14 };
            tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
        }

        Py_DECREF( tmp_args_element_name_14 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain__gamma3, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_15;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_element_name_15;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_defun_wrapped );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defun_wrapped );
        }

        if ( tmp_mvar_value_15 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "defun_wrapped" );
            exception_tb = NULL;

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }

        tmp_called_name_15 = tmp_mvar_value_15;
        tmp_args_element_name_15 = MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_15_expint(  );



        frame_06d36594229935102a097b7c7faa5346->m_frame.f_lineno = 251;
        {
            PyObject *call_args[] = { tmp_args_element_name_15 };
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
        }

        Py_DECREF( tmp_args_element_name_15 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_expint, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_16;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_defaults_9;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_defun_wrapped );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defun_wrapped );
        }

        if ( tmp_mvar_value_16 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "defun_wrapped" );
            exception_tb = NULL;

            exception_lineno = 275;

            goto frame_exception_exit_1;
        }

        tmp_called_name_16 = tmp_mvar_value_16;
        tmp_defaults_9 = const_tuple_false_tuple;
        Py_INCREF( tmp_defaults_9 );
        tmp_args_element_name_16 = MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_16_li( tmp_defaults_9 );



        frame_06d36594229935102a097b7c7faa5346->m_frame.f_lineno = 275;
        {
            PyObject *call_args[] = { tmp_args_element_name_16 };
            tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
        }

        Py_DECREF( tmp_args_element_name_16 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_li, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_name_17;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_args_element_name_17;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_defun );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defun );
        }

        if ( tmp_mvar_value_17 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "defun" );
            exception_tb = NULL;

            exception_lineno = 287;

            goto frame_exception_exit_1;
        }

        tmp_called_name_17 = tmp_mvar_value_17;
        tmp_args_element_name_17 = MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_17_ei(  );



        frame_06d36594229935102a097b7c7faa5346->m_frame.f_lineno = 287;
        {
            PyObject *call_args[] = { tmp_args_element_name_17 };
            tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
        }

        Py_DECREF( tmp_args_element_name_17 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_ei, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_18;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_args_element_name_18;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_defun_wrapped );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defun_wrapped );
        }

        if ( tmp_mvar_value_18 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "defun_wrapped" );
            exception_tb = NULL;

            exception_lineno = 294;

            goto frame_exception_exit_1;
        }

        tmp_called_name_18 = tmp_mvar_value_18;
        tmp_args_element_name_18 = MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_18__ei_generic(  );



        frame_06d36594229935102a097b7c7faa5346->m_frame.f_lineno = 294;
        {
            PyObject *call_args[] = { tmp_args_element_name_18 };
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
        }

        Py_DECREF( tmp_args_element_name_18 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain__ei_generic, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_name_19;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_args_element_name_19;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_defun );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defun );
        }

        if ( tmp_mvar_value_19 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "defun" );
            exception_tb = NULL;

            exception_lineno = 322;

            goto frame_exception_exit_1;
        }

        tmp_called_name_19 = tmp_mvar_value_19;
        tmp_args_element_name_19 = MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_19_e1(  );



        frame_06d36594229935102a097b7c7faa5346->m_frame.f_lineno = 322;
        {
            PyObject *call_args[] = { tmp_args_element_name_19 };
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
        }

        Py_DECREF( tmp_args_element_name_19 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_e1, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_name_20;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_args_element_name_20;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_defun );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defun );
        }

        if ( tmp_mvar_value_20 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "defun" );
            exception_tb = NULL;

            exception_lineno = 329;

            goto frame_exception_exit_1;
        }

        tmp_called_name_20 = tmp_mvar_value_20;
        tmp_args_element_name_20 = MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_20_ci(  );



        frame_06d36594229935102a097b7c7faa5346->m_frame.f_lineno = 329;
        {
            PyObject *call_args[] = { tmp_args_element_name_20 };
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
        }

        Py_DECREF( tmp_args_element_name_20 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_ci, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_name_21;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_args_element_name_21;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_defun_wrapped );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defun_wrapped );
        }

        if ( tmp_mvar_value_21 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "defun_wrapped" );
            exception_tb = NULL;

            exception_lineno = 336;

            goto frame_exception_exit_1;
        }

        tmp_called_name_21 = tmp_mvar_value_21;
        tmp_args_element_name_21 = MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_21__ci_generic(  );



        frame_06d36594229935102a097b7c7faa5346->m_frame.f_lineno = 336;
        {
            PyObject *call_args[] = { tmp_args_element_name_21 };
            tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
        }

        Py_DECREF( tmp_args_element_name_21 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain__ci_generic, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_name_22;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_args_element_name_22;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_defun );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defun );
        }

        if ( tmp_mvar_value_22 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "defun" );
            exception_tb = NULL;

            exception_lineno = 356;

            goto frame_exception_exit_1;
        }

        tmp_called_name_22 = tmp_mvar_value_22;
        tmp_args_element_name_22 = MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_22_si(  );



        frame_06d36594229935102a097b7c7faa5346->m_frame.f_lineno = 356;
        {
            PyObject *call_args[] = { tmp_args_element_name_22 };
            tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
        }

        Py_DECREF( tmp_args_element_name_22 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 356;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_si, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_name_23;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_args_element_name_23;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_defun_wrapped );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defun_wrapped );
        }

        if ( tmp_mvar_value_23 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "defun_wrapped" );
            exception_tb = NULL;

            exception_lineno = 363;

            goto frame_exception_exit_1;
        }

        tmp_called_name_23 = tmp_mvar_value_23;
        tmp_args_element_name_23 = MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_23__si_generic(  );



        frame_06d36594229935102a097b7c7faa5346->m_frame.f_lineno = 363;
        {
            PyObject *call_args[] = { tmp_args_element_name_23 };
            tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
        }

        Py_DECREF( tmp_args_element_name_23 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain__si_generic, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_name_24;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_args_element_name_24;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_defun_wrapped );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defun_wrapped );
        }

        if ( tmp_mvar_value_24 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "defun_wrapped" );
            exception_tb = NULL;

            exception_lineno = 384;

            goto frame_exception_exit_1;
        }

        tmp_called_name_24 = tmp_mvar_value_24;
        tmp_args_element_name_24 = MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_24_chi(  );



        frame_06d36594229935102a097b7c7faa5346->m_frame.f_lineno = 384;
        {
            PyObject *call_args[] = { tmp_args_element_name_24 };
            tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, call_args );
        }

        Py_DECREF( tmp_args_element_name_24 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 384;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_chi, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_name_25;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_args_element_name_25;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_defun_wrapped );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defun_wrapped );
        }

        if ( tmp_mvar_value_25 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "defun_wrapped" );
            exception_tb = NULL;

            exception_lineno = 398;

            goto frame_exception_exit_1;
        }

        tmp_called_name_25 = tmp_mvar_value_25;
        tmp_args_element_name_25 = MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_25_shi(  );



        frame_06d36594229935102a097b7c7faa5346->m_frame.f_lineno = 398;
        {
            PyObject *call_args[] = { tmp_args_element_name_25 };
            tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, call_args );
        }

        Py_DECREF( tmp_args_element_name_25 );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 398;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_shi, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_name_26;
        PyObject *tmp_mvar_value_26;
        PyObject *tmp_args_element_name_26;
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_defun_wrapped );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defun_wrapped );
        }

        if ( tmp_mvar_value_26 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "defun_wrapped" );
            exception_tb = NULL;

            exception_lineno = 411;

            goto frame_exception_exit_1;
        }

        tmp_called_name_26 = tmp_mvar_value_26;
        tmp_args_element_name_26 = MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_26_fresnels(  );



        frame_06d36594229935102a097b7c7faa5346->m_frame.f_lineno = 411;
        {
            PyObject *call_args[] = { tmp_args_element_name_26 };
            tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, call_args );
        }

        Py_DECREF( tmp_args_element_name_26 );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 411;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_fresnels, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_name_27;
        PyObject *tmp_mvar_value_27;
        PyObject *tmp_args_element_name_27;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_defun_wrapped );

        if (unlikely( tmp_mvar_value_27 == NULL ))
        {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defun_wrapped );
        }

        if ( tmp_mvar_value_27 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "defun_wrapped" );
            exception_tb = NULL;

            exception_lineno = 419;

            goto frame_exception_exit_1;
        }

        tmp_called_name_27 = tmp_mvar_value_27;
        tmp_args_element_name_27 = MAKE_FUNCTION_mpmath$functions$expintegrals$$$function_27_fresnelc(  );



        frame_06d36594229935102a097b7c7faa5346->m_frame.f_lineno = 419;
        {
            PyObject *call_args[] = { tmp_args_element_name_27 };
            tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_27, call_args );
        }

        Py_DECREF( tmp_args_element_name_27 );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain_fresnelc, tmp_assign_source_32 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_06d36594229935102a097b7c7faa5346 );
#endif
    popFrameStack();

    assertFrameObject( frame_06d36594229935102a097b7c7faa5346 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_06d36594229935102a097b7c7faa5346 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_06d36594229935102a097b7c7faa5346, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_06d36594229935102a097b7c7faa5346->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_06d36594229935102a097b7c7faa5346, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$expintegrals, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_mpmath$functions$expintegrals );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
