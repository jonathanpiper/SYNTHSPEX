/* Generated code for Python module 'mpmath.libmp'
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

/* The "_module_mpmath$libmp" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_mpmath$libmp;
PyDictObject *moduledict_mpmath$libmp;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_degree_fixed;
extern PyObject *const_str_plain_mpi_factorial;
extern PyObject *const_str_plain_mpf_sinh;
extern PyObject *const_str_plain_mpf_cbrt;
extern PyObject *const_str_plain_phi_fixed;
extern PyObject *const_str_plain_mpc_psi;
static PyObject *const_str_digest_dfac757c7e1f19df6f40c6ff21e340fc;
extern PyObject *const_str_plain_ftwo;
extern PyObject *const_str_plain_mpf_bernoulli;
extern PyObject *const_str_plain_sqrtrem;
extern PyObject *const_str_plain_BACKEND;
extern PyObject *const_str_plain_mpi_eq;
extern PyObject *const_str_plain_mpf_gt;
extern PyObject *const_str_plain_mpf_agm;
extern PyObject *const_str_plain_mpf_asin;
extern PyObject *const_str_plain_round_up;
static PyObject *const_tuple_46636736eaeb8a60c69451cb85460230_tuple;
extern PyObject *const_str_plain_mpf_ge;
extern PyObject *const_str_plain_mpf_rgamma;
extern PyObject *const_str_plain_mpc_hash;
extern PyObject *const_str_plain_mpf_sign;
extern PyObject *const_str_plain_round_int;
static PyObject *const_tuple_dec675d933a74404abd43cd96edf11d6_tuple;
extern PyObject *const_str_plain_fnan;
extern PyObject *const_str_plain_from_bstr;
extern PyObject *const_str_plain_mpc_ellipe;
extern PyObject *const_str_plain_mpc_ellipk;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_mpf_degree;
extern PyObject *const_str_plain_mpf_loggamma;
extern PyObject *const_str_plain_from_man_exp;
extern PyObject *const_str_plain_mpf_tan;
extern PyObject *const_str_plain_mpc_cosh;
extern PyObject *const_str_plain_mpc_ceil;
extern PyObject *const_str_plain_mpi_abs;
extern PyObject *const_str_plain_mpc_sub_mpf;
extern PyObject *const_str_plain_mpc_acosh;
static PyObject *const_str_digest_fa452078a62f325ca1c28a686c461da9;
extern PyObject *const_str_plain_mpc_cos_sin_pi;
extern PyObject *const_str_plain_mpi_atan;
extern PyObject *const_str_plain_fone;
extern PyObject *const_str_plain_mpc_loggamma;
extern PyObject *const_str_plain_gammazeta;
extern PyObject *const_str_plain_round_nearest;
extern PyObject *const_str_plain_mpf_perturb;
extern PyObject *const_str_plain_finf;
extern PyObject *const_str_plain_ften;
extern PyObject *const_str_plain_mpc_add_mpf;
extern PyObject *const_str_plain_mpi_ne;
extern PyObject *const_str_plain_mpf_ci_si;
extern PyObject *const_str_plain_ifac;
extern PyObject *const_str_plain_from_Decimal;
extern PyObject *const_str_plain_mpf_glaisher;
extern PyObject *const_str_plain_mpc_square;
extern PyObject *const_str_plain_mpi_mid;
extern PyObject *const_str_plain_mpf_hash;
extern PyObject *const_str_plain_HASH_BITS;
extern PyObject *const_str_plain_mpi_from_str;
extern PyObject *const_str_plain_mpci_mul;
extern PyObject *const_str_plain_mpf_gamma_int;
extern PyObject *const_str_plain_repr_dps;
extern PyObject *const_str_plain_mpc_to_str;
extern PyObject *const_str_plain_twinprime_fixed;
extern PyObject *const_str_plain_mpi_gamma;
extern PyObject *const_str_plain_mpf_frexp;
extern PyObject *const_str_plain_ln10_fixed;
extern PyObject *const_str_plain_from_pickable;
extern PyObject *const_str_plain_numeral;
extern PyObject *const_str_plain_STRICT;
extern PyObject *const_str_plain_mpf_ci;
extern PyObject *const_str_plain_bitcount;
extern PyObject *const_str_plain_mpf_agm1;
extern PyObject *const_str_plain_mpf_lt;
extern PyObject *const_str_plain_to_str;
extern PyObject *const_str_plain_mpf_le;
extern PyObject *const_str_plain_mpf_pi;
extern PyObject *const_str_plain_mpc_besseljn;
extern PyObject *const_str_plain_libmpf;
extern PyObject *const_str_plain_libmpc;
extern PyObject *const_str_plain_mpci_factorial;
extern PyObject *const_str_plain_mpi_neg;
static PyObject *const_str_plain_libmpi;
extern PyObject *const_str_plain_mpf_factorial;
extern PyObject *const_str_plain_mpc_atanh;
extern PyObject *const_str_plain_mpc_tan;
extern PyObject *const_str_plain_stirling1;
extern PyObject *const_str_plain_stirling2;
extern PyObject *const_str_plain_mpci_log;
static PyObject *const_list_str_digest_9d243ed1b665faa52b9045c72f43ba00_list;
extern PyObject *const_str_plain_mpf_atan2;
extern PyObject *const_str_plain_eulernum;
extern PyObject *const_str_plain_mpf_ellipk;
extern PyObject *const_str_plain_mpc_expj;
extern PyObject *const_str_plain_mpf_ellipe;
extern PyObject *const_str_plain_mpf_phi;
extern PyObject *const_str_plain_MPZ_TYPE;
extern PyObject *const_str_plain_mpc_factorial_old;
extern PyObject *const_str_plain_to_rational;
static PyObject *const_str_plain_libhyper;
extern PyObject *const_str_plain_mpf_twinprime;
extern PyObject *const_str_plain_mpc_sqrt;
extern PyObject *const_str_plain_mpci_pos;
extern PyObject *const_str_plain_mpf_atanh;
extern PyObject *const_str_plain_mpci_pow;
extern PyObject *const_str_plain_mpci_sin;
extern PyObject *const_str_plain_mpc_agm1;
extern PyObject *const_str_plain_mpf_cosh;
extern PyObject *const_str_plain_prec_to_dps;
extern PyObject *const_str_plain_mpc_sub;
extern PyObject *const_str_plain_from_rational;
extern PyObject *const_str_plain_mpf_neg;
extern PyObject *const_str_plain_MPZ_ZERO;
extern PyObject *const_str_plain_mpf_mod;
extern PyObject *const_str_plain_mpi_tan;
extern PyObject *const_str_plain_normalize;
extern PyObject *const_str_plain_mpc_div_mpf;
extern PyObject *const_str_plain_mpc_cos_pi;
extern PyObject *const_str_plain_MPZ_FIVE;
extern PyObject *const_str_plain_mpf_hypot;
extern PyObject *const_str_plain_mpf_cos;
extern PyObject *const_str_plain_mpc_atan;
extern PyObject *const_str_plain_from_npfloat;
extern PyObject *const_str_plain_mpf_altzeta;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_mpf_harmonic;
extern PyObject *const_str_plain_mpc_mpf_div;
extern PyObject *const_str_plain_mpf_cos_pi;
extern PyObject *const_str_plain_mpc_cbrt;
extern PyObject *const_str_plain_mpi_pow_int;
extern PyObject *const_str_plain_to_digits_exp;
extern PyObject *const_str_plain_from_int;
extern PyObject *const_str_plain_gmpy;
extern PyObject *const_str_plain_mpf_pos;
extern PyObject *const_str_plain_mpf_pow;
extern PyObject *const_str_plain_MPZ;
static PyObject *const_tuple_a3d8c8b5fcfbdf93c1bd69baf3a76586_tuple;
extern PyObject *const_str_plain_mpci_cos;
extern PyObject *const_str_plain_mpc_pow_mpf;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_mpc_floor;
extern PyObject *const_str_plain_mpf_add;
extern PyObject *const_str_plain_mpf_e;
extern PyObject *const_str_plain_MPZ_ONE;
extern PyObject *const_str_plain_NoConvergence;
extern PyObject *const_str_plain_mpf_zetasum;
extern PyObject *const_str_plain_mpc_conjugate;
static PyObject *const_tuple_5a2e3727f1cdf20a2018a6880e25f3a4_tuple;
extern PyObject *const_str_plain_mpf_fibonacci;
extern PyObject *const_str_plain_mpc_e1;
extern PyObject *const_str_plain_mpf_sqrt;
extern PyObject *const_str_plain_mpc_nint;
extern PyObject *const_str_plain_mpf_log;
extern PyObject *const_str_plain_mpf_sum;
static PyObject *const_tuple_8b1d95bd4357b2553b892072e8c64251_tuple;
extern PyObject *const_str_plain_complex_int_pow;
extern PyObject *const_str_plain_mpf_sub;
extern PyObject *const_str_plain_mpf_exp;
extern PyObject *const_str_plain_mpc_mul_imag_mpf;
extern PyObject *const_str_plain_mpc_zeta;
extern PyObject *const_str_plain_to_man_exp;
extern PyObject *const_str_plain_khinchin_fixed;
extern PyObject *const_str_plain_mpc_ei;
extern PyObject *const_str_plain_round_floor;
static PyObject *const_tuple_7c409a9fe2711bb6e78f9ee471bef826_tuple;
extern PyObject *const_str_plain_mpf_erf;
extern PyObject *const_str_plain_isprime;
extern PyObject *const_str_plain_mpi_rgamma;
extern PyObject *const_str_plain_mpi_str;
extern PyObject *const_str_plain_to_float;
extern PyObject *const_str_plain_mpi_sin;
extern PyObject *const_str_plain_mpf_psi0;
extern PyObject *const_str_plain_mpc_frac;
extern PyObject *const_str_plain_mpc_rgamma;
extern PyObject *const_str_plain_fnone;
extern PyObject *const_str_plain_mpc_arg;
extern PyObject *const_str_plain_fninf;
extern PyObject *const_str_plain_mpf_expj;
extern PyObject *const_str_plain_mpi_mul;
extern PyObject *const_str_plain_mpc_zetasum;
extern PyObject *const_str_plain_mpf_nint;
extern PyObject *const_str_plain_mpi_loggamma;
extern PyObject *const_str_plain_mpc_nthroot;
extern PyObject *const_str_plain_mpc_harmonic;
extern PyObject *const_str_plain_mertens_fixed;
extern PyObject *const_str_plain_mpc_cos_sin;
extern PyObject *const_str_plain_mpf_rdiv_int;
extern PyObject *const_str_plain_mpc_cos;
extern PyObject *const_str_plain_sage;
extern PyObject *const_str_plain_mpc_tanh;
extern PyObject *const_str_plain_mpf_cos_sin_pi;
extern PyObject *const_str_plain_round_down;
extern PyObject *const_str_plain_mpf_expint;
extern PyObject *const_str_plain_to_pickable;
extern PyObject *const_str_plain_mpi_add;
extern PyObject *const_str_plain_mpf_sin_pi;
extern PyObject *const_str_plain_bin_to_radix;
extern PyObject *const_str_plain_mpf_expjpi;
extern PyObject *const_str_plain_backend;
extern PyObject *const_str_plain_HASH_MODULUS;
extern PyObject *const_str_plain_mpi_lt;
extern PyObject *const_str_plain_fhalf;
extern PyObject *const_str_plain_ComplexResult;
extern PyObject *const_str_plain_mpi_le;
extern PyObject *const_str_plain_mpc_add;
extern PyObject *const_str_plain_mpc_asinh;
extern PyObject *const_str_plain_round_ceiling;
extern PyObject *const_str_plain_mpf_floor;
extern PyObject *const_str_plain_math_float_inf;
extern PyObject *const_str_plain_mpf_atan;
extern PyObject *const_str_plain_gcd;
extern PyObject *const_str_plain_mpf_erfc;
extern PyObject *const_str_plain_mpf_eq;
extern PyObject *const_str_plain_mpci_loggamma;
extern PyObject *const_str_plain_mpf_ei;
extern PyObject *const_str_plain_mpf_mul;
extern PyObject *const_str_plain_mpf_mul_int;
extern PyObject *const_str_plain_mpc_pow_int;
extern PyObject *const_str_plain_mpc_gamma;
extern PyObject *const_str_plain_mpc_altzeta;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_str_to_man_exp;
extern PyObject *const_str_plain_mpf_asinh;
extern PyObject *const_str_plain_mpci_rgamma;
extern PyObject *const_str_plain_mpf_besseljn;
extern PyObject *const_str_plain_glaisher_fixed;
extern PyObject *const_str_plain_mpc_asin;
extern PyObject *const_str_plain_mpc_expjpi;
extern PyObject *const_str_plain_mpf_khinchin;
static PyObject *const_str_digest_9d243ed1b665faa52b9045c72f43ba00;
extern PyObject *const_str_plain_catalan_fixed;
extern PyObject *const_str_plain_ln2_fixed;
extern PyObject *const_str_plain_mpc_log;
extern PyObject *const_str_plain_mpf_shift;
extern PyObject *const_str_plain_e_fixed;
extern PyObject *const_str_plain_mpf_acos;
extern PyObject *const_str_plain_fzero;
extern PyObject *const_str_plain_mpf_e1;
extern PyObject *const_str_plain_bernfrac;
extern PyObject *const_str_plain_mpi_gt;
extern PyObject *const_str_plain_mpi_ge;
extern PyObject *const_str_plain_mpf_abs;
extern PyObject *const_str_plain_mpc_mul_int;
extern PyObject *const_str_plain_mpc_si;
extern PyObject *const_str_plain_mpf_ln2;
extern PyObject *const_str_plain_mpf_apery;
extern PyObject *const_str_plain_MPZ_TWO;
extern PyObject *const_str_plain_normalize1;
extern PyObject *const_str_plain_mpf_cosh_sinh;
extern PyObject *const_str_plain_mpci_sub;
extern PyObject *const_str_plain_mpf_pow_int;
extern PyObject *const_str_plain_isqrt;
extern PyObject *const_str_plain_mpc_acos;
extern PyObject *const_str_plain_mpc_psi0;
extern PyObject *const_str_plain_pi_fixed;
extern PyObject *const_str_plain_mpf_cmp;
extern PyObject *const_str_plain_mpc_pow;
extern PyObject *const_str_plain_mpf_cos_sin;
extern PyObject *const_str_plain_mpc_pos;
extern PyObject *const_str_plain_mpc_mul;
extern PyObject *const_str_plain_mpc_ci;
extern PyObject *const_str_plain_make_hyp_summator;
extern PyObject *const_str_plain_from_str;
static PyObject *const_str_digest_e7ca24e04437b3b3f1e7c50bcfbeb8ad;
extern PyObject *const_str_plain_list_primes;
extern PyObject *const_str_plain_mpf_sin;
extern PyObject *const_str_plain_mpc_agm;
extern PyObject *const_str_plain_mpf_log_hypot;
extern PyObject *const_str_plain_agm_fixed;
extern PyObject *const_str_plain_euler_fixed;
static PyObject *const_tuple_71577fd033a8ef0e533e316922c4b52c_tuple;
extern PyObject *const_str_plain_mpf_gamma;
extern PyObject *const_str_plain_mpi_sqrt;
extern PyObject *const_str_plain_mpf_catalan;
extern PyObject *const_str_plain_mpi_delta;
extern PyObject *const_str_plain_int_types;
extern PyObject *const_str_plain_mpf_div;
extern PyObject *const_str_plain_MPZ_THREE;
extern PyObject *const_str_plain_mpf_euler;
extern PyObject *const_str_plain_mpc_one;
extern PyObject *const_str_plain_dps_to_prec;
extern PyObject *const_str_plain_mpf_psi;
extern PyObject *const_str_plain_mpf_zeta;
extern PyObject *const_str_plain_mpf_mertens;
extern PyObject *const_str_plain_mpf_gamma_old;
extern PyObject *const_str_plain_mpf_acosh;
extern PyObject *const_str_plain_from_float;
extern PyObject *const_str_plain_mpi_pow;
extern PyObject *const_str_plain_mpi_pos;
extern PyObject *const_str_plain_mpci_add;
extern PyObject *const_str_plain_mpc_neg;
extern PyObject *const_str_plain_mpc_factorial;
extern PyObject *const_str_plain_to_fixed;
extern PyObject *const_str_plain_mpc_abs;
extern PyObject *const_str_plain_to_bstr;
extern PyObject *const_str_plain_sqrt_fixed;
extern PyObject *const_str_plain_mpf_frac;
extern PyObject *const_str_plain_mpi_exp;
extern PyObject *const_str_plain_mpc_zero;
extern PyObject *const_str_plain_mpf_nthroot;
extern PyObject *const_str_plain_mpf_tanh;
extern PyObject *const_str_plain_mpc_gamma_old;
extern PyObject *const_str_plain_mpi_sub;
extern PyObject *const_str_plain_mpf_si;
extern PyObject *const_str_plain_mpi_log;
extern PyObject *const_str_plain_ifib;
extern PyObject *const_str_plain_mpf_factorial_old;
extern PyObject *const_str_plain_mpc_div;
extern PyObject *const_str_plain_mpi_to_str;
extern PyObject *const_str_plain_mpc_is_infnan;
extern PyObject *const_str_plain_fnzero;
extern PyObject *const_str_plain_apery_fixed;
extern PyObject *const_str_plain_trailing;
extern PyObject *const_str_plain_mpf_zeta_int;
extern PyObject *const_str_plain_log_int_fixed;
extern PyObject *const_str_plain_mpc_mul_mpf;
extern PyObject *const_str_plain_mpci_gamma;
extern PyObject *const_str_plain_mpf_rand;
extern PyObject *const_str_plain_to_int;
extern PyObject *const_str_plain_mpci_neg;
extern PyObject *const_str_plain_mpc_sinh;
extern PyObject *const_str_plain_mpi_atan2;
extern PyObject *const_str_plain_mpc_exp;
extern PyObject *const_str_plain_mpc_two;
extern PyObject *const_str_plain_mpc_is_inf;
extern PyObject *const_str_plain_libintmath;
extern PyObject *const_str_plain_isqrt_small;
extern PyObject *const_str_plain_mpc_half;
extern PyObject *const_str_plain_mpci_exp;
extern PyObject *const_str_plain_mpf_ceil;
extern PyObject *const_str_plain_mpc_fibonacci;
extern PyObject *const_str_plain_mpi_cos_sin;
extern PyObject *const_str_plain_mpc_reciprocal;
extern PyObject *const_str_plain_mpc_is_nonzero;
extern PyObject *const_str_plain_isqrt_fast;
extern PyObject *const_str_plain_moebius;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_mpi_cos;
extern PyObject *const_str_plain_mpi_cot;
extern PyObject *const_str_plain_mpci_div;
extern PyObject *const_str_plain_mpci_abs;
extern PyObject *const_str_plain_mpc_sin;
extern PyObject *const_str_plain_mpc_to_complex;
extern PyObject *const_str_plain_mpc_shift;
static PyObject *const_tuple_cfce3423c2b9bf7b06a11a5166daf91f_tuple;
extern PyObject *const_str_plain_mpi_div;
extern PyObject *const_str_plain_mpc_sin_pi;
extern PyObject *const_str_plain_libelefun;
extern PyObject *const_str_plain_mpf_ln10;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_dfac757c7e1f19df6f40c6ff21e340fc = UNSTREAM_STRING( &constant_bin[ 620831 ], 21, 0 );
    const_tuple_46636736eaeb8a60c69451cb85460230_tuple = PyTuple_New( 18 );
    PyTuple_SET_ITEM( const_tuple_46636736eaeb8a60c69451cb85460230_tuple, 0, const_str_plain_trailing ); Py_INCREF( const_str_plain_trailing );
    PyTuple_SET_ITEM( const_tuple_46636736eaeb8a60c69451cb85460230_tuple, 1, const_str_plain_bitcount ); Py_INCREF( const_str_plain_bitcount );
    PyTuple_SET_ITEM( const_tuple_46636736eaeb8a60c69451cb85460230_tuple, 2, const_str_plain_numeral ); Py_INCREF( const_str_plain_numeral );
    PyTuple_SET_ITEM( const_tuple_46636736eaeb8a60c69451cb85460230_tuple, 3, const_str_plain_bin_to_radix ); Py_INCREF( const_str_plain_bin_to_radix );
    PyTuple_SET_ITEM( const_tuple_46636736eaeb8a60c69451cb85460230_tuple, 4, const_str_plain_isqrt ); Py_INCREF( const_str_plain_isqrt );
    PyTuple_SET_ITEM( const_tuple_46636736eaeb8a60c69451cb85460230_tuple, 5, const_str_plain_isqrt_small ); Py_INCREF( const_str_plain_isqrt_small );
    PyTuple_SET_ITEM( const_tuple_46636736eaeb8a60c69451cb85460230_tuple, 6, const_str_plain_isqrt_fast ); Py_INCREF( const_str_plain_isqrt_fast );
    PyTuple_SET_ITEM( const_tuple_46636736eaeb8a60c69451cb85460230_tuple, 7, const_str_plain_sqrt_fixed ); Py_INCREF( const_str_plain_sqrt_fixed );
    PyTuple_SET_ITEM( const_tuple_46636736eaeb8a60c69451cb85460230_tuple, 8, const_str_plain_sqrtrem ); Py_INCREF( const_str_plain_sqrtrem );
    PyTuple_SET_ITEM( const_tuple_46636736eaeb8a60c69451cb85460230_tuple, 9, const_str_plain_ifib ); Py_INCREF( const_str_plain_ifib );
    PyTuple_SET_ITEM( const_tuple_46636736eaeb8a60c69451cb85460230_tuple, 10, const_str_plain_ifac ); Py_INCREF( const_str_plain_ifac );
    PyTuple_SET_ITEM( const_tuple_46636736eaeb8a60c69451cb85460230_tuple, 11, const_str_plain_list_primes ); Py_INCREF( const_str_plain_list_primes );
    PyTuple_SET_ITEM( const_tuple_46636736eaeb8a60c69451cb85460230_tuple, 12, const_str_plain_isprime ); Py_INCREF( const_str_plain_isprime );
    PyTuple_SET_ITEM( const_tuple_46636736eaeb8a60c69451cb85460230_tuple, 13, const_str_plain_moebius ); Py_INCREF( const_str_plain_moebius );
    PyTuple_SET_ITEM( const_tuple_46636736eaeb8a60c69451cb85460230_tuple, 14, const_str_plain_gcd ); Py_INCREF( const_str_plain_gcd );
    PyTuple_SET_ITEM( const_tuple_46636736eaeb8a60c69451cb85460230_tuple, 15, const_str_plain_eulernum ); Py_INCREF( const_str_plain_eulernum );
    PyTuple_SET_ITEM( const_tuple_46636736eaeb8a60c69451cb85460230_tuple, 16, const_str_plain_stirling1 ); Py_INCREF( const_str_plain_stirling1 );
    PyTuple_SET_ITEM( const_tuple_46636736eaeb8a60c69451cb85460230_tuple, 17, const_str_plain_stirling2 ); Py_INCREF( const_str_plain_stirling2 );
    const_tuple_dec675d933a74404abd43cd96edf11d6_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 620852 ], 549 );
    const_str_digest_fa452078a62f325ca1c28a686c461da9 = UNSTREAM_STRING( &constant_bin[ 621401 ], 63, 0 );
    const_str_plain_libmpi = UNSTREAM_STRING( &constant_bin[ 621464 ], 6, 1 );
    const_list_str_digest_9d243ed1b665faa52b9045c72f43ba00_list = PyList_New( 1 );
    const_str_digest_9d243ed1b665faa52b9045c72f43ba00 = UNSTREAM_STRING( &constant_bin[ 621401 ], 51, 0 );
    PyList_SET_ITEM( const_list_str_digest_9d243ed1b665faa52b9045c72f43ba00_list, 0, const_str_digest_9d243ed1b665faa52b9045c72f43ba00 ); Py_INCREF( const_str_digest_9d243ed1b665faa52b9045c72f43ba00 );
    const_str_plain_libhyper = UNSTREAM_STRING( &constant_bin[ 621470 ], 8, 1 );
    const_tuple_a3d8c8b5fcfbdf93c1bd69baf3a76586_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 621478 ], 979 );
    const_tuple_5a2e3727f1cdf20a2018a6880e25f3a4_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 622457 ], 674 );
    const_tuple_8b1d95bd4357b2553b892072e8c64251_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 623131 ], 691 );
    const_tuple_7c409a9fe2711bb6e78f9ee471bef826_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 623822 ], 911 );
    const_str_digest_e7ca24e04437b3b3f1e7c50bcfbeb8ad = UNSTREAM_STRING( &constant_bin[ 208600 ], 12, 0 );
    const_tuple_71577fd033a8ef0e533e316922c4b52c_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_71577fd033a8ef0e533e316922c4b52c_tuple, 0, const_str_plain_gmpy ); Py_INCREF( const_str_plain_gmpy );
    PyTuple_SET_ITEM( const_tuple_71577fd033a8ef0e533e316922c4b52c_tuple, 1, const_str_plain_sage ); Py_INCREF( const_str_plain_sage );
    PyTuple_SET_ITEM( const_tuple_71577fd033a8ef0e533e316922c4b52c_tuple, 2, const_str_plain_BACKEND ); Py_INCREF( const_str_plain_BACKEND );
    PyTuple_SET_ITEM( const_tuple_71577fd033a8ef0e533e316922c4b52c_tuple, 3, const_str_plain_STRICT ); Py_INCREF( const_str_plain_STRICT );
    PyTuple_SET_ITEM( const_tuple_71577fd033a8ef0e533e316922c4b52c_tuple, 4, const_str_plain_MPZ ); Py_INCREF( const_str_plain_MPZ );
    PyTuple_SET_ITEM( const_tuple_71577fd033a8ef0e533e316922c4b52c_tuple, 5, const_str_plain_MPZ_TYPE ); Py_INCREF( const_str_plain_MPZ_TYPE );
    PyTuple_SET_ITEM( const_tuple_71577fd033a8ef0e533e316922c4b52c_tuple, 6, const_str_plain_MPZ_ZERO ); Py_INCREF( const_str_plain_MPZ_ZERO );
    PyTuple_SET_ITEM( const_tuple_71577fd033a8ef0e533e316922c4b52c_tuple, 7, const_str_plain_MPZ_ONE ); Py_INCREF( const_str_plain_MPZ_ONE );
    PyTuple_SET_ITEM( const_tuple_71577fd033a8ef0e533e316922c4b52c_tuple, 8, const_str_plain_MPZ_TWO ); Py_INCREF( const_str_plain_MPZ_TWO );
    PyTuple_SET_ITEM( const_tuple_71577fd033a8ef0e533e316922c4b52c_tuple, 9, const_str_plain_MPZ_THREE ); Py_INCREF( const_str_plain_MPZ_THREE );
    PyTuple_SET_ITEM( const_tuple_71577fd033a8ef0e533e316922c4b52c_tuple, 10, const_str_plain_MPZ_FIVE ); Py_INCREF( const_str_plain_MPZ_FIVE );
    PyTuple_SET_ITEM( const_tuple_71577fd033a8ef0e533e316922c4b52c_tuple, 11, const_str_plain_int_types ); Py_INCREF( const_str_plain_int_types );
    PyTuple_SET_ITEM( const_tuple_71577fd033a8ef0e533e316922c4b52c_tuple, 12, const_str_plain_HASH_MODULUS ); Py_INCREF( const_str_plain_HASH_MODULUS );
    PyTuple_SET_ITEM( const_tuple_71577fd033a8ef0e533e316922c4b52c_tuple, 13, const_str_plain_HASH_BITS ); Py_INCREF( const_str_plain_HASH_BITS );
    const_tuple_cfce3423c2b9bf7b06a11a5166daf91f_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 624733 ], 331 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_mpmath$libmp( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_e5315ebcdf69bf6225cd518715d8ac3a;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_fa452078a62f325ca1c28a686c461da9;
    codeobj_e5315ebcdf69bf6225cd518715d8ac3a = MAKE_CODEOBJ( module_filename_obj, const_str_digest_dfac757c7e1f19df6f40c6ff21e340fc, 1, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_mpmath$libmp =
{
    PyModuleDef_HEAD_INIT,
    "mpmath.libmp",
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

MOD_INIT_DECL( mpmath$libmp )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_mpmath$libmp );
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
    puts("mpmath.libmp: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("mpmath.libmp: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("mpmath.libmp: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initmpmath$libmp" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_mpmath$libmp = Py_InitModule4(
        "mpmath.libmp",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_mpmath$libmp = PyModule_Create( &mdef_mpmath$libmp );
#endif

    moduledict_mpmath$libmp = MODULE_DICT( module_mpmath$libmp );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_mpmath$libmp,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_mpmath$libmp,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_mpmath$libmp,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_mpmath$libmp );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_e7ca24e04437b3b3f1e7c50bcfbeb8ad, module_mpmath$libmp );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain___name__ ),
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
#if 1
        SET_ATTRIBUTE( spec_value, const_str_plain_submodule_search_locations, PyList_New(0) );
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_import_from_6__module = NULL;
    PyObject *tmp_import_from_7__module = NULL;
    PyObject *tmp_import_from_8__module = NULL;
    struct Nuitka_FrameObject *frame_e5315ebcdf69bf6225cd518715d8ac3a;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_fa452078a62f325ca1c28a686c461da9;
        UPDATE_STRING_DICT0( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = LIST_COPY( const_list_str_digest_9d243ed1b665faa52b9045c72f43ba00_list );
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    }
    // Frame without reuse.
    frame_e5315ebcdf69bf6225cd518715d8ac3a = MAKE_MODULE_FRAME( codeobj_e5315ebcdf69bf6225cd518715d8ac3a, module_mpmath$libmp );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_e5315ebcdf69bf6225cd518715d8ac3a );
    assert( Py_REFCNT( frame_e5315ebcdf69bf6225cd518715d8ac3a ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_libmpf;
        tmp_globals_name_1 = (PyObject *)moduledict_mpmath$libmp;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_a3d8c8b5fcfbdf93c1bd69baf3a76586_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_e5315ebcdf69bf6225cd518715d8ac3a->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_prec_to_dps );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_prec_to_dps, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_dps_to_prec );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_dps_to_prec, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_repr_dps );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_repr_dps, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_4 = tmp_import_from_1__module;
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_round_down );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_round_down, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_5 = tmp_import_from_1__module;
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_round_up );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_round_up, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_6 = tmp_import_from_1__module;
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_round_floor );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_round_floor, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_7 = tmp_import_from_1__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_round_ceiling );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_round_ceiling, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_8 = tmp_import_from_1__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_round_nearest );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_round_nearest, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_9 = tmp_import_from_1__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_to_pickable );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_to_pickable, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_10 = tmp_import_from_1__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_from_pickable );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_from_pickable, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_11 = tmp_import_from_1__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_ComplexResult );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_ComplexResult, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_12 = tmp_import_from_1__module;
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_fzero );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_fzero, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_13 = tmp_import_from_1__module;
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_fnzero );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_fnzero, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_14 = tmp_import_from_1__module;
        tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_fone );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_fone, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_15 = tmp_import_from_1__module;
        tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_fnone );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_fnone, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_16 = tmp_import_from_1__module;
        tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_ftwo );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_ftwo, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_17 = tmp_import_from_1__module;
        tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_ften );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_ften, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_18 = tmp_import_from_1__module;
        tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_fhalf );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_fhalf, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_19 = tmp_import_from_1__module;
        tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_fnan );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_fnan, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_20 = tmp_import_from_1__module;
        tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_finf );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_finf, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_21 = tmp_import_from_1__module;
        tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_fninf );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_fninf, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_22 = tmp_import_from_1__module;
        tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_math_float_inf );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_math_float_inf, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_23 = tmp_import_from_1__module;
        tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_round_int );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_round_int, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_24 = tmp_import_from_1__module;
        tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_24, const_str_plain_normalize );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_normalize, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_25;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_25 = tmp_import_from_1__module;
        tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_25, const_str_plain_normalize1 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_normalize1, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_26;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_26 = tmp_import_from_1__module;
        tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_26, const_str_plain_from_man_exp );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_from_man_exp, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_27;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_27 = tmp_import_from_1__module;
        tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_27, const_str_plain_from_int );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_from_int, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_28;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_28 = tmp_import_from_1__module;
        tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_28, const_str_plain_to_man_exp );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_to_man_exp, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_29;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_29 = tmp_import_from_1__module;
        tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_29, const_str_plain_to_int );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_to_int, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_30;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_30 = tmp_import_from_1__module;
        tmp_assign_source_34 = IMPORT_NAME( tmp_import_name_from_30, const_str_plain_mpf_ceil );
        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_ceil, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_31;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_31 = tmp_import_from_1__module;
        tmp_assign_source_35 = IMPORT_NAME( tmp_import_name_from_31, const_str_plain_mpf_floor );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_floor, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_32;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_32 = tmp_import_from_1__module;
        tmp_assign_source_36 = IMPORT_NAME( tmp_import_name_from_32, const_str_plain_mpf_nint );
        if ( tmp_assign_source_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_nint, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_33;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_33 = tmp_import_from_1__module;
        tmp_assign_source_37 = IMPORT_NAME( tmp_import_name_from_33, const_str_plain_mpf_frac );
        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_frac, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_34;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_34 = tmp_import_from_1__module;
        tmp_assign_source_38 = IMPORT_NAME( tmp_import_name_from_34, const_str_plain_from_float );
        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_from_float, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_35;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_35 = tmp_import_from_1__module;
        tmp_assign_source_39 = IMPORT_NAME( tmp_import_name_from_35, const_str_plain_from_npfloat );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_from_npfloat, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_36;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_36 = tmp_import_from_1__module;
        tmp_assign_source_40 = IMPORT_NAME( tmp_import_name_from_36, const_str_plain_from_Decimal );
        if ( tmp_assign_source_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_from_Decimal, tmp_assign_source_40 );
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_37;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_37 = tmp_import_from_1__module;
        tmp_assign_source_41 = IMPORT_NAME( tmp_import_name_from_37, const_str_plain_to_float );
        if ( tmp_assign_source_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_to_float, tmp_assign_source_41 );
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_38;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_38 = tmp_import_from_1__module;
        tmp_assign_source_42 = IMPORT_NAME( tmp_import_name_from_38, const_str_plain_from_rational );
        if ( tmp_assign_source_42 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_from_rational, tmp_assign_source_42 );
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_import_name_from_39;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_39 = tmp_import_from_1__module;
        tmp_assign_source_43 = IMPORT_NAME( tmp_import_name_from_39, const_str_plain_to_rational );
        if ( tmp_assign_source_43 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_to_rational, tmp_assign_source_43 );
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_import_name_from_40;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_40 = tmp_import_from_1__module;
        tmp_assign_source_44 = IMPORT_NAME( tmp_import_name_from_40, const_str_plain_to_fixed );
        if ( tmp_assign_source_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_to_fixed, tmp_assign_source_44 );
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_import_name_from_41;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_41 = tmp_import_from_1__module;
        tmp_assign_source_45 = IMPORT_NAME( tmp_import_name_from_41, const_str_plain_mpf_rand );
        if ( tmp_assign_source_45 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_rand, tmp_assign_source_45 );
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_import_name_from_42;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_42 = tmp_import_from_1__module;
        tmp_assign_source_46 = IMPORT_NAME( tmp_import_name_from_42, const_str_plain_mpf_eq );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_eq, tmp_assign_source_46 );
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_import_name_from_43;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_43 = tmp_import_from_1__module;
        tmp_assign_source_47 = IMPORT_NAME( tmp_import_name_from_43, const_str_plain_mpf_hash );
        if ( tmp_assign_source_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_hash, tmp_assign_source_47 );
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_import_name_from_44;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_44 = tmp_import_from_1__module;
        tmp_assign_source_48 = IMPORT_NAME( tmp_import_name_from_44, const_str_plain_mpf_cmp );
        if ( tmp_assign_source_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_cmp, tmp_assign_source_48 );
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_import_name_from_45;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_45 = tmp_import_from_1__module;
        tmp_assign_source_49 = IMPORT_NAME( tmp_import_name_from_45, const_str_plain_mpf_lt );
        if ( tmp_assign_source_49 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_lt, tmp_assign_source_49 );
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_import_name_from_46;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_46 = tmp_import_from_1__module;
        tmp_assign_source_50 = IMPORT_NAME( tmp_import_name_from_46, const_str_plain_mpf_le );
        if ( tmp_assign_source_50 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_le, tmp_assign_source_50 );
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_import_name_from_47;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_47 = tmp_import_from_1__module;
        tmp_assign_source_51 = IMPORT_NAME( tmp_import_name_from_47, const_str_plain_mpf_gt );
        if ( tmp_assign_source_51 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_gt, tmp_assign_source_51 );
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_import_name_from_48;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_48 = tmp_import_from_1__module;
        tmp_assign_source_52 = IMPORT_NAME( tmp_import_name_from_48, const_str_plain_mpf_ge );
        if ( tmp_assign_source_52 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_ge, tmp_assign_source_52 );
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_import_name_from_49;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_49 = tmp_import_from_1__module;
        tmp_assign_source_53 = IMPORT_NAME( tmp_import_name_from_49, const_str_plain_mpf_pos );
        if ( tmp_assign_source_53 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_pos, tmp_assign_source_53 );
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_import_name_from_50;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_50 = tmp_import_from_1__module;
        tmp_assign_source_54 = IMPORT_NAME( tmp_import_name_from_50, const_str_plain_mpf_neg );
        if ( tmp_assign_source_54 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_neg, tmp_assign_source_54 );
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_import_name_from_51;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_51 = tmp_import_from_1__module;
        tmp_assign_source_55 = IMPORT_NAME( tmp_import_name_from_51, const_str_plain_mpf_abs );
        if ( tmp_assign_source_55 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_abs, tmp_assign_source_55 );
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_import_name_from_52;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_52 = tmp_import_from_1__module;
        tmp_assign_source_56 = IMPORT_NAME( tmp_import_name_from_52, const_str_plain_mpf_sign );
        if ( tmp_assign_source_56 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_sign, tmp_assign_source_56 );
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_import_name_from_53;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_53 = tmp_import_from_1__module;
        tmp_assign_source_57 = IMPORT_NAME( tmp_import_name_from_53, const_str_plain_mpf_add );
        if ( tmp_assign_source_57 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_add, tmp_assign_source_57 );
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_import_name_from_54;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_54 = tmp_import_from_1__module;
        tmp_assign_source_58 = IMPORT_NAME( tmp_import_name_from_54, const_str_plain_mpf_sub );
        if ( tmp_assign_source_58 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_sub, tmp_assign_source_58 );
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_import_name_from_55;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_55 = tmp_import_from_1__module;
        tmp_assign_source_59 = IMPORT_NAME( tmp_import_name_from_55, const_str_plain_mpf_sum );
        if ( tmp_assign_source_59 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_sum, tmp_assign_source_59 );
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_import_name_from_56;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_56 = tmp_import_from_1__module;
        tmp_assign_source_60 = IMPORT_NAME( tmp_import_name_from_56, const_str_plain_mpf_mul );
        if ( tmp_assign_source_60 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_mul, tmp_assign_source_60 );
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_import_name_from_57;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_57 = tmp_import_from_1__module;
        tmp_assign_source_61 = IMPORT_NAME( tmp_import_name_from_57, const_str_plain_mpf_mul_int );
        if ( tmp_assign_source_61 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_mul_int, tmp_assign_source_61 );
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_import_name_from_58;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_58 = tmp_import_from_1__module;
        tmp_assign_source_62 = IMPORT_NAME( tmp_import_name_from_58, const_str_plain_mpf_shift );
        if ( tmp_assign_source_62 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_shift, tmp_assign_source_62 );
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_import_name_from_59;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_59 = tmp_import_from_1__module;
        tmp_assign_source_63 = IMPORT_NAME( tmp_import_name_from_59, const_str_plain_mpf_frexp );
        if ( tmp_assign_source_63 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_frexp, tmp_assign_source_63 );
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_import_name_from_60;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_60 = tmp_import_from_1__module;
        tmp_assign_source_64 = IMPORT_NAME( tmp_import_name_from_60, const_str_plain_mpf_div );
        if ( tmp_assign_source_64 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_div, tmp_assign_source_64 );
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_import_name_from_61;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_61 = tmp_import_from_1__module;
        tmp_assign_source_65 = IMPORT_NAME( tmp_import_name_from_61, const_str_plain_mpf_rdiv_int );
        if ( tmp_assign_source_65 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_rdiv_int, tmp_assign_source_65 );
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_import_name_from_62;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_62 = tmp_import_from_1__module;
        tmp_assign_source_66 = IMPORT_NAME( tmp_import_name_from_62, const_str_plain_mpf_mod );
        if ( tmp_assign_source_66 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_mod, tmp_assign_source_66 );
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_import_name_from_63;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_63 = tmp_import_from_1__module;
        tmp_assign_source_67 = IMPORT_NAME( tmp_import_name_from_63, const_str_plain_mpf_pow_int );
        if ( tmp_assign_source_67 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_pow_int, tmp_assign_source_67 );
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_import_name_from_64;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_64 = tmp_import_from_1__module;
        tmp_assign_source_68 = IMPORT_NAME( tmp_import_name_from_64, const_str_plain_mpf_perturb );
        if ( tmp_assign_source_68 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_perturb, tmp_assign_source_68 );
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_import_name_from_65;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_65 = tmp_import_from_1__module;
        tmp_assign_source_69 = IMPORT_NAME( tmp_import_name_from_65, const_str_plain_to_digits_exp );
        if ( tmp_assign_source_69 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_to_digits_exp, tmp_assign_source_69 );
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_import_name_from_66;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_66 = tmp_import_from_1__module;
        tmp_assign_source_70 = IMPORT_NAME( tmp_import_name_from_66, const_str_plain_to_str );
        if ( tmp_assign_source_70 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_to_str, tmp_assign_source_70 );
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_import_name_from_67;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_67 = tmp_import_from_1__module;
        tmp_assign_source_71 = IMPORT_NAME( tmp_import_name_from_67, const_str_plain_str_to_man_exp );
        if ( tmp_assign_source_71 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_str_to_man_exp, tmp_assign_source_71 );
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_import_name_from_68;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_68 = tmp_import_from_1__module;
        tmp_assign_source_72 = IMPORT_NAME( tmp_import_name_from_68, const_str_plain_from_str );
        if ( tmp_assign_source_72 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_from_str, tmp_assign_source_72 );
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_import_name_from_69;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_69 = tmp_import_from_1__module;
        tmp_assign_source_73 = IMPORT_NAME( tmp_import_name_from_69, const_str_plain_from_bstr );
        if ( tmp_assign_source_73 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_from_bstr, tmp_assign_source_73 );
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_import_name_from_70;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_70 = tmp_import_from_1__module;
        tmp_assign_source_74 = IMPORT_NAME( tmp_import_name_from_70, const_str_plain_to_bstr );
        if ( tmp_assign_source_74 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_to_bstr, tmp_assign_source_74 );
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_import_name_from_71;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_71 = tmp_import_from_1__module;
        tmp_assign_source_75 = IMPORT_NAME( tmp_import_name_from_71, const_str_plain_mpf_sqrt );
        if ( tmp_assign_source_75 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_sqrt, tmp_assign_source_75 );
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_import_name_from_72;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_72 = tmp_import_from_1__module;
        tmp_assign_source_76 = IMPORT_NAME( tmp_import_name_from_72, const_str_plain_mpf_hypot );
        if ( tmp_assign_source_76 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_hypot, tmp_assign_source_76 );
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
        PyObject *tmp_assign_source_77;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_libmpc;
        tmp_globals_name_2 = (PyObject *)moduledict_mpmath$libmp;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_7c409a9fe2711bb6e78f9ee471bef826_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_e5315ebcdf69bf6225cd518715d8ac3a->m_frame.f_lineno = 17;
        tmp_assign_source_77 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_77 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_77;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_import_name_from_73;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_73 = tmp_import_from_2__module;
        tmp_assign_source_78 = IMPORT_NAME( tmp_import_name_from_73, const_str_plain_mpc_one );
        if ( tmp_assign_source_78 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_one, tmp_assign_source_78 );
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_import_name_from_74;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_74 = tmp_import_from_2__module;
        tmp_assign_source_79 = IMPORT_NAME( tmp_import_name_from_74, const_str_plain_mpc_zero );
        if ( tmp_assign_source_79 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_zero, tmp_assign_source_79 );
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_import_name_from_75;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_75 = tmp_import_from_2__module;
        tmp_assign_source_80 = IMPORT_NAME( tmp_import_name_from_75, const_str_plain_mpc_two );
        if ( tmp_assign_source_80 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_two, tmp_assign_source_80 );
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_import_name_from_76;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_76 = tmp_import_from_2__module;
        tmp_assign_source_81 = IMPORT_NAME( tmp_import_name_from_76, const_str_plain_mpc_half );
        if ( tmp_assign_source_81 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_half, tmp_assign_source_81 );
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_import_name_from_77;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_77 = tmp_import_from_2__module;
        tmp_assign_source_82 = IMPORT_NAME( tmp_import_name_from_77, const_str_plain_mpc_is_inf );
        if ( tmp_assign_source_82 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_is_inf, tmp_assign_source_82 );
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_import_name_from_78;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_78 = tmp_import_from_2__module;
        tmp_assign_source_83 = IMPORT_NAME( tmp_import_name_from_78, const_str_plain_mpc_is_infnan );
        if ( tmp_assign_source_83 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_is_infnan, tmp_assign_source_83 );
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_import_name_from_79;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_79 = tmp_import_from_2__module;
        tmp_assign_source_84 = IMPORT_NAME( tmp_import_name_from_79, const_str_plain_mpc_to_str );
        if ( tmp_assign_source_84 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_to_str, tmp_assign_source_84 );
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_import_name_from_80;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_80 = tmp_import_from_2__module;
        tmp_assign_source_85 = IMPORT_NAME( tmp_import_name_from_80, const_str_plain_mpc_to_complex );
        if ( tmp_assign_source_85 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_to_complex, tmp_assign_source_85 );
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_import_name_from_81;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_81 = tmp_import_from_2__module;
        tmp_assign_source_86 = IMPORT_NAME( tmp_import_name_from_81, const_str_plain_mpc_hash );
        if ( tmp_assign_source_86 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_hash, tmp_assign_source_86 );
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_import_name_from_82;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_82 = tmp_import_from_2__module;
        tmp_assign_source_87 = IMPORT_NAME( tmp_import_name_from_82, const_str_plain_mpc_conjugate );
        if ( tmp_assign_source_87 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_conjugate, tmp_assign_source_87 );
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_import_name_from_83;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_83 = tmp_import_from_2__module;
        tmp_assign_source_88 = IMPORT_NAME( tmp_import_name_from_83, const_str_plain_mpc_is_nonzero );
        if ( tmp_assign_source_88 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_is_nonzero, tmp_assign_source_88 );
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_import_name_from_84;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_84 = tmp_import_from_2__module;
        tmp_assign_source_89 = IMPORT_NAME( tmp_import_name_from_84, const_str_plain_mpc_add );
        if ( tmp_assign_source_89 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_add, tmp_assign_source_89 );
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_import_name_from_85;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_85 = tmp_import_from_2__module;
        tmp_assign_source_90 = IMPORT_NAME( tmp_import_name_from_85, const_str_plain_mpc_add_mpf );
        if ( tmp_assign_source_90 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_add_mpf, tmp_assign_source_90 );
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_import_name_from_86;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_86 = tmp_import_from_2__module;
        tmp_assign_source_91 = IMPORT_NAME( tmp_import_name_from_86, const_str_plain_mpc_sub );
        if ( tmp_assign_source_91 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_sub, tmp_assign_source_91 );
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_import_name_from_87;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_87 = tmp_import_from_2__module;
        tmp_assign_source_92 = IMPORT_NAME( tmp_import_name_from_87, const_str_plain_mpc_sub_mpf );
        if ( tmp_assign_source_92 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_sub_mpf, tmp_assign_source_92 );
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_import_name_from_88;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_88 = tmp_import_from_2__module;
        tmp_assign_source_93 = IMPORT_NAME( tmp_import_name_from_88, const_str_plain_mpc_pos );
        if ( tmp_assign_source_93 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_pos, tmp_assign_source_93 );
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_import_name_from_89;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_89 = tmp_import_from_2__module;
        tmp_assign_source_94 = IMPORT_NAME( tmp_import_name_from_89, const_str_plain_mpc_neg );
        if ( tmp_assign_source_94 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_neg, tmp_assign_source_94 );
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_import_name_from_90;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_90 = tmp_import_from_2__module;
        tmp_assign_source_95 = IMPORT_NAME( tmp_import_name_from_90, const_str_plain_mpc_shift );
        if ( tmp_assign_source_95 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_shift, tmp_assign_source_95 );
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_import_name_from_91;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_91 = tmp_import_from_2__module;
        tmp_assign_source_96 = IMPORT_NAME( tmp_import_name_from_91, const_str_plain_mpc_abs );
        if ( tmp_assign_source_96 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_abs, tmp_assign_source_96 );
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_import_name_from_92;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_92 = tmp_import_from_2__module;
        tmp_assign_source_97 = IMPORT_NAME( tmp_import_name_from_92, const_str_plain_mpc_arg );
        if ( tmp_assign_source_97 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_arg, tmp_assign_source_97 );
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_import_name_from_93;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_93 = tmp_import_from_2__module;
        tmp_assign_source_98 = IMPORT_NAME( tmp_import_name_from_93, const_str_plain_mpc_floor );
        if ( tmp_assign_source_98 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_floor, tmp_assign_source_98 );
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_import_name_from_94;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_94 = tmp_import_from_2__module;
        tmp_assign_source_99 = IMPORT_NAME( tmp_import_name_from_94, const_str_plain_mpc_ceil );
        if ( tmp_assign_source_99 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_ceil, tmp_assign_source_99 );
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_import_name_from_95;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_95 = tmp_import_from_2__module;
        tmp_assign_source_100 = IMPORT_NAME( tmp_import_name_from_95, const_str_plain_mpc_nint );
        if ( tmp_assign_source_100 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_nint, tmp_assign_source_100 );
    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_import_name_from_96;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_96 = tmp_import_from_2__module;
        tmp_assign_source_101 = IMPORT_NAME( tmp_import_name_from_96, const_str_plain_mpc_frac );
        if ( tmp_assign_source_101 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_frac, tmp_assign_source_101 );
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_import_name_from_97;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_97 = tmp_import_from_2__module;
        tmp_assign_source_102 = IMPORT_NAME( tmp_import_name_from_97, const_str_plain_mpc_mul );
        if ( tmp_assign_source_102 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_mul, tmp_assign_source_102 );
    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_import_name_from_98;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_98 = tmp_import_from_2__module;
        tmp_assign_source_103 = IMPORT_NAME( tmp_import_name_from_98, const_str_plain_mpc_square );
        if ( tmp_assign_source_103 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_square, tmp_assign_source_103 );
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_import_name_from_99;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_99 = tmp_import_from_2__module;
        tmp_assign_source_104 = IMPORT_NAME( tmp_import_name_from_99, const_str_plain_mpc_mul_mpf );
        if ( tmp_assign_source_104 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_mul_mpf, tmp_assign_source_104 );
    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_import_name_from_100;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_100 = tmp_import_from_2__module;
        tmp_assign_source_105 = IMPORT_NAME( tmp_import_name_from_100, const_str_plain_mpc_mul_imag_mpf );
        if ( tmp_assign_source_105 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_mul_imag_mpf, tmp_assign_source_105 );
    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_import_name_from_101;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_101 = tmp_import_from_2__module;
        tmp_assign_source_106 = IMPORT_NAME( tmp_import_name_from_101, const_str_plain_mpc_mul_int );
        if ( tmp_assign_source_106 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_mul_int, tmp_assign_source_106 );
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_import_name_from_102;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_102 = tmp_import_from_2__module;
        tmp_assign_source_107 = IMPORT_NAME( tmp_import_name_from_102, const_str_plain_mpc_div );
        if ( tmp_assign_source_107 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_div, tmp_assign_source_107 );
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_import_name_from_103;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_103 = tmp_import_from_2__module;
        tmp_assign_source_108 = IMPORT_NAME( tmp_import_name_from_103, const_str_plain_mpc_div_mpf );
        if ( tmp_assign_source_108 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_div_mpf, tmp_assign_source_108 );
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_import_name_from_104;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_104 = tmp_import_from_2__module;
        tmp_assign_source_109 = IMPORT_NAME( tmp_import_name_from_104, const_str_plain_mpc_reciprocal );
        if ( tmp_assign_source_109 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_reciprocal, tmp_assign_source_109 );
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_import_name_from_105;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_105 = tmp_import_from_2__module;
        tmp_assign_source_110 = IMPORT_NAME( tmp_import_name_from_105, const_str_plain_mpc_mpf_div );
        if ( tmp_assign_source_110 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_mpf_div, tmp_assign_source_110 );
    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_import_name_from_106;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_106 = tmp_import_from_2__module;
        tmp_assign_source_111 = IMPORT_NAME( tmp_import_name_from_106, const_str_plain_complex_int_pow );
        if ( tmp_assign_source_111 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_complex_int_pow, tmp_assign_source_111 );
    }
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_import_name_from_107;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_107 = tmp_import_from_2__module;
        tmp_assign_source_112 = IMPORT_NAME( tmp_import_name_from_107, const_str_plain_mpc_pow );
        if ( tmp_assign_source_112 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_pow, tmp_assign_source_112 );
    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_import_name_from_108;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_108 = tmp_import_from_2__module;
        tmp_assign_source_113 = IMPORT_NAME( tmp_import_name_from_108, const_str_plain_mpc_pow_mpf );
        if ( tmp_assign_source_113 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_pow_mpf, tmp_assign_source_113 );
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_import_name_from_109;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_109 = tmp_import_from_2__module;
        tmp_assign_source_114 = IMPORT_NAME( tmp_import_name_from_109, const_str_plain_mpc_pow_int );
        if ( tmp_assign_source_114 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_pow_int, tmp_assign_source_114 );
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_import_name_from_110;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_110 = tmp_import_from_2__module;
        tmp_assign_source_115 = IMPORT_NAME( tmp_import_name_from_110, const_str_plain_mpc_sqrt );
        if ( tmp_assign_source_115 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_sqrt, tmp_assign_source_115 );
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_import_name_from_111;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_111 = tmp_import_from_2__module;
        tmp_assign_source_116 = IMPORT_NAME( tmp_import_name_from_111, const_str_plain_mpc_nthroot );
        if ( tmp_assign_source_116 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_nthroot, tmp_assign_source_116 );
    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_import_name_from_112;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_112 = tmp_import_from_2__module;
        tmp_assign_source_117 = IMPORT_NAME( tmp_import_name_from_112, const_str_plain_mpc_cbrt );
        if ( tmp_assign_source_117 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_cbrt, tmp_assign_source_117 );
    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_import_name_from_113;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_113 = tmp_import_from_2__module;
        tmp_assign_source_118 = IMPORT_NAME( tmp_import_name_from_113, const_str_plain_mpc_exp );
        if ( tmp_assign_source_118 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_exp, tmp_assign_source_118 );
    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_import_name_from_114;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_114 = tmp_import_from_2__module;
        tmp_assign_source_119 = IMPORT_NAME( tmp_import_name_from_114, const_str_plain_mpc_log );
        if ( tmp_assign_source_119 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_log, tmp_assign_source_119 );
    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_import_name_from_115;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_115 = tmp_import_from_2__module;
        tmp_assign_source_120 = IMPORT_NAME( tmp_import_name_from_115, const_str_plain_mpc_cos );
        if ( tmp_assign_source_120 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_cos, tmp_assign_source_120 );
    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_import_name_from_116;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_116 = tmp_import_from_2__module;
        tmp_assign_source_121 = IMPORT_NAME( tmp_import_name_from_116, const_str_plain_mpc_sin );
        if ( tmp_assign_source_121 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_sin, tmp_assign_source_121 );
    }
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_import_name_from_117;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_117 = tmp_import_from_2__module;
        tmp_assign_source_122 = IMPORT_NAME( tmp_import_name_from_117, const_str_plain_mpc_tan );
        if ( tmp_assign_source_122 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_tan, tmp_assign_source_122 );
    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_import_name_from_118;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_118 = tmp_import_from_2__module;
        tmp_assign_source_123 = IMPORT_NAME( tmp_import_name_from_118, const_str_plain_mpc_cos_pi );
        if ( tmp_assign_source_123 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_cos_pi, tmp_assign_source_123 );
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_import_name_from_119;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_119 = tmp_import_from_2__module;
        tmp_assign_source_124 = IMPORT_NAME( tmp_import_name_from_119, const_str_plain_mpc_sin_pi );
        if ( tmp_assign_source_124 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_sin_pi, tmp_assign_source_124 );
    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_import_name_from_120;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_120 = tmp_import_from_2__module;
        tmp_assign_source_125 = IMPORT_NAME( tmp_import_name_from_120, const_str_plain_mpc_cosh );
        if ( tmp_assign_source_125 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_cosh, tmp_assign_source_125 );
    }
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_import_name_from_121;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_121 = tmp_import_from_2__module;
        tmp_assign_source_126 = IMPORT_NAME( tmp_import_name_from_121, const_str_plain_mpc_sinh );
        if ( tmp_assign_source_126 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_sinh, tmp_assign_source_126 );
    }
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_import_name_from_122;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_122 = tmp_import_from_2__module;
        tmp_assign_source_127 = IMPORT_NAME( tmp_import_name_from_122, const_str_plain_mpc_tanh );
        if ( tmp_assign_source_127 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_tanh, tmp_assign_source_127 );
    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_import_name_from_123;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_123 = tmp_import_from_2__module;
        tmp_assign_source_128 = IMPORT_NAME( tmp_import_name_from_123, const_str_plain_mpc_atan );
        if ( tmp_assign_source_128 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_atan, tmp_assign_source_128 );
    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_import_name_from_124;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_124 = tmp_import_from_2__module;
        tmp_assign_source_129 = IMPORT_NAME( tmp_import_name_from_124, const_str_plain_mpc_acos );
        if ( tmp_assign_source_129 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_acos, tmp_assign_source_129 );
    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_import_name_from_125;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_125 = tmp_import_from_2__module;
        tmp_assign_source_130 = IMPORT_NAME( tmp_import_name_from_125, const_str_plain_mpc_asin );
        if ( tmp_assign_source_130 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_asin, tmp_assign_source_130 );
    }
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_import_name_from_126;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_126 = tmp_import_from_2__module;
        tmp_assign_source_131 = IMPORT_NAME( tmp_import_name_from_126, const_str_plain_mpc_asinh );
        if ( tmp_assign_source_131 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_asinh, tmp_assign_source_131 );
    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_import_name_from_127;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_127 = tmp_import_from_2__module;
        tmp_assign_source_132 = IMPORT_NAME( tmp_import_name_from_127, const_str_plain_mpc_acosh );
        if ( tmp_assign_source_132 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_acosh, tmp_assign_source_132 );
    }
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_import_name_from_128;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_128 = tmp_import_from_2__module;
        tmp_assign_source_133 = IMPORT_NAME( tmp_import_name_from_128, const_str_plain_mpc_atanh );
        if ( tmp_assign_source_133 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_atanh, tmp_assign_source_133 );
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_import_name_from_129;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_129 = tmp_import_from_2__module;
        tmp_assign_source_134 = IMPORT_NAME( tmp_import_name_from_129, const_str_plain_mpc_fibonacci );
        if ( tmp_assign_source_134 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_fibonacci, tmp_assign_source_134 );
    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_import_name_from_130;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_130 = tmp_import_from_2__module;
        tmp_assign_source_135 = IMPORT_NAME( tmp_import_name_from_130, const_str_plain_mpf_expj );
        if ( tmp_assign_source_135 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_expj, tmp_assign_source_135 );
    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_import_name_from_131;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_131 = tmp_import_from_2__module;
        tmp_assign_source_136 = IMPORT_NAME( tmp_import_name_from_131, const_str_plain_mpf_expjpi );
        if ( tmp_assign_source_136 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_expjpi, tmp_assign_source_136 );
    }
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_import_name_from_132;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_132 = tmp_import_from_2__module;
        tmp_assign_source_137 = IMPORT_NAME( tmp_import_name_from_132, const_str_plain_mpc_expj );
        if ( tmp_assign_source_137 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_expj, tmp_assign_source_137 );
    }
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_import_name_from_133;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_133 = tmp_import_from_2__module;
        tmp_assign_source_138 = IMPORT_NAME( tmp_import_name_from_133, const_str_plain_mpc_expjpi );
        if ( tmp_assign_source_138 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_expjpi, tmp_assign_source_138 );
    }
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_import_name_from_134;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_134 = tmp_import_from_2__module;
        tmp_assign_source_139 = IMPORT_NAME( tmp_import_name_from_134, const_str_plain_mpc_cos_sin );
        if ( tmp_assign_source_139 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_cos_sin, tmp_assign_source_139 );
    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_import_name_from_135;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_135 = tmp_import_from_2__module;
        tmp_assign_source_140 = IMPORT_NAME( tmp_import_name_from_135, const_str_plain_mpc_cos_sin_pi );
        if ( tmp_assign_source_140 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_cos_sin_pi, tmp_assign_source_140 );
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
        PyObject *tmp_assign_source_141;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_libelefun;
        tmp_globals_name_3 = (PyObject *)moduledict_mpmath$libmp;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_dec675d933a74404abd43cd96edf11d6_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_e5315ebcdf69bf6225cd518715d8ac3a->m_frame.f_lineno = 31;
        tmp_assign_source_141 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_141 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_141;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_import_name_from_136;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_136 = tmp_import_from_3__module;
        tmp_assign_source_142 = IMPORT_NAME( tmp_import_name_from_136, const_str_plain_ln2_fixed );
        if ( tmp_assign_source_142 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_ln2_fixed, tmp_assign_source_142 );
    }
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_import_name_from_137;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_137 = tmp_import_from_3__module;
        tmp_assign_source_143 = IMPORT_NAME( tmp_import_name_from_137, const_str_plain_mpf_ln2 );
        if ( tmp_assign_source_143 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_ln2, tmp_assign_source_143 );
    }
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_import_name_from_138;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_138 = tmp_import_from_3__module;
        tmp_assign_source_144 = IMPORT_NAME( tmp_import_name_from_138, const_str_plain_ln10_fixed );
        if ( tmp_assign_source_144 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_ln10_fixed, tmp_assign_source_144 );
    }
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_import_name_from_139;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_139 = tmp_import_from_3__module;
        tmp_assign_source_145 = IMPORT_NAME( tmp_import_name_from_139, const_str_plain_mpf_ln10 );
        if ( tmp_assign_source_145 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_ln10, tmp_assign_source_145 );
    }
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_import_name_from_140;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_140 = tmp_import_from_3__module;
        tmp_assign_source_146 = IMPORT_NAME( tmp_import_name_from_140, const_str_plain_pi_fixed );
        if ( tmp_assign_source_146 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_pi_fixed, tmp_assign_source_146 );
    }
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_import_name_from_141;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_141 = tmp_import_from_3__module;
        tmp_assign_source_147 = IMPORT_NAME( tmp_import_name_from_141, const_str_plain_mpf_pi );
        if ( tmp_assign_source_147 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_pi, tmp_assign_source_147 );
    }
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_import_name_from_142;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_142 = tmp_import_from_3__module;
        tmp_assign_source_148 = IMPORT_NAME( tmp_import_name_from_142, const_str_plain_e_fixed );
        if ( tmp_assign_source_148 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_e_fixed, tmp_assign_source_148 );
    }
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_import_name_from_143;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_143 = tmp_import_from_3__module;
        tmp_assign_source_149 = IMPORT_NAME( tmp_import_name_from_143, const_str_plain_mpf_e );
        if ( tmp_assign_source_149 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_e, tmp_assign_source_149 );
    }
    {
        PyObject *tmp_assign_source_150;
        PyObject *tmp_import_name_from_144;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_144 = tmp_import_from_3__module;
        tmp_assign_source_150 = IMPORT_NAME( tmp_import_name_from_144, const_str_plain_phi_fixed );
        if ( tmp_assign_source_150 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_phi_fixed, tmp_assign_source_150 );
    }
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_import_name_from_145;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_145 = tmp_import_from_3__module;
        tmp_assign_source_151 = IMPORT_NAME( tmp_import_name_from_145, const_str_plain_mpf_phi );
        if ( tmp_assign_source_151 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_phi, tmp_assign_source_151 );
    }
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_import_name_from_146;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_146 = tmp_import_from_3__module;
        tmp_assign_source_152 = IMPORT_NAME( tmp_import_name_from_146, const_str_plain_degree_fixed );
        if ( tmp_assign_source_152 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_degree_fixed, tmp_assign_source_152 );
    }
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_import_name_from_147;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_147 = tmp_import_from_3__module;
        tmp_assign_source_153 = IMPORT_NAME( tmp_import_name_from_147, const_str_plain_mpf_degree );
        if ( tmp_assign_source_153 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_degree, tmp_assign_source_153 );
    }
    {
        PyObject *tmp_assign_source_154;
        PyObject *tmp_import_name_from_148;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_148 = tmp_import_from_3__module;
        tmp_assign_source_154 = IMPORT_NAME( tmp_import_name_from_148, const_str_plain_mpf_pow );
        if ( tmp_assign_source_154 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_pow, tmp_assign_source_154 );
    }
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_import_name_from_149;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_149 = tmp_import_from_3__module;
        tmp_assign_source_155 = IMPORT_NAME( tmp_import_name_from_149, const_str_plain_mpf_nthroot );
        if ( tmp_assign_source_155 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_nthroot, tmp_assign_source_155 );
    }
    {
        PyObject *tmp_assign_source_156;
        PyObject *tmp_import_name_from_150;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_150 = tmp_import_from_3__module;
        tmp_assign_source_156 = IMPORT_NAME( tmp_import_name_from_150, const_str_plain_mpf_cbrt );
        if ( tmp_assign_source_156 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_cbrt, tmp_assign_source_156 );
    }
    {
        PyObject *tmp_assign_source_157;
        PyObject *tmp_import_name_from_151;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_151 = tmp_import_from_3__module;
        tmp_assign_source_157 = IMPORT_NAME( tmp_import_name_from_151, const_str_plain_log_int_fixed );
        if ( tmp_assign_source_157 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_log_int_fixed, tmp_assign_source_157 );
    }
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_import_name_from_152;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_152 = tmp_import_from_3__module;
        tmp_assign_source_158 = IMPORT_NAME( tmp_import_name_from_152, const_str_plain_agm_fixed );
        if ( tmp_assign_source_158 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_agm_fixed, tmp_assign_source_158 );
    }
    {
        PyObject *tmp_assign_source_159;
        PyObject *tmp_import_name_from_153;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_153 = tmp_import_from_3__module;
        tmp_assign_source_159 = IMPORT_NAME( tmp_import_name_from_153, const_str_plain_mpf_log );
        if ( tmp_assign_source_159 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_log, tmp_assign_source_159 );
    }
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_import_name_from_154;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_154 = tmp_import_from_3__module;
        tmp_assign_source_160 = IMPORT_NAME( tmp_import_name_from_154, const_str_plain_mpf_log_hypot );
        if ( tmp_assign_source_160 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_log_hypot, tmp_assign_source_160 );
    }
    {
        PyObject *tmp_assign_source_161;
        PyObject *tmp_import_name_from_155;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_155 = tmp_import_from_3__module;
        tmp_assign_source_161 = IMPORT_NAME( tmp_import_name_from_155, const_str_plain_mpf_exp );
        if ( tmp_assign_source_161 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_exp, tmp_assign_source_161 );
    }
    {
        PyObject *tmp_assign_source_162;
        PyObject *tmp_import_name_from_156;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_156 = tmp_import_from_3__module;
        tmp_assign_source_162 = IMPORT_NAME( tmp_import_name_from_156, const_str_plain_mpf_cos_sin );
        if ( tmp_assign_source_162 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_cos_sin, tmp_assign_source_162 );
    }
    {
        PyObject *tmp_assign_source_163;
        PyObject *tmp_import_name_from_157;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_157 = tmp_import_from_3__module;
        tmp_assign_source_163 = IMPORT_NAME( tmp_import_name_from_157, const_str_plain_mpf_cos );
        if ( tmp_assign_source_163 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_cos, tmp_assign_source_163 );
    }
    {
        PyObject *tmp_assign_source_164;
        PyObject *tmp_import_name_from_158;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_158 = tmp_import_from_3__module;
        tmp_assign_source_164 = IMPORT_NAME( tmp_import_name_from_158, const_str_plain_mpf_sin );
        if ( tmp_assign_source_164 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_sin, tmp_assign_source_164 );
    }
    {
        PyObject *tmp_assign_source_165;
        PyObject *tmp_import_name_from_159;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_159 = tmp_import_from_3__module;
        tmp_assign_source_165 = IMPORT_NAME( tmp_import_name_from_159, const_str_plain_mpf_tan );
        if ( tmp_assign_source_165 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_tan, tmp_assign_source_165 );
    }
    {
        PyObject *tmp_assign_source_166;
        PyObject *tmp_import_name_from_160;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_160 = tmp_import_from_3__module;
        tmp_assign_source_166 = IMPORT_NAME( tmp_import_name_from_160, const_str_plain_mpf_cos_sin_pi );
        if ( tmp_assign_source_166 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_cos_sin_pi, tmp_assign_source_166 );
    }
    {
        PyObject *tmp_assign_source_167;
        PyObject *tmp_import_name_from_161;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_161 = tmp_import_from_3__module;
        tmp_assign_source_167 = IMPORT_NAME( tmp_import_name_from_161, const_str_plain_mpf_cos_pi );
        if ( tmp_assign_source_167 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_cos_pi, tmp_assign_source_167 );
    }
    {
        PyObject *tmp_assign_source_168;
        PyObject *tmp_import_name_from_162;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_162 = tmp_import_from_3__module;
        tmp_assign_source_168 = IMPORT_NAME( tmp_import_name_from_162, const_str_plain_mpf_sin_pi );
        if ( tmp_assign_source_168 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_sin_pi, tmp_assign_source_168 );
    }
    {
        PyObject *tmp_assign_source_169;
        PyObject *tmp_import_name_from_163;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_163 = tmp_import_from_3__module;
        tmp_assign_source_169 = IMPORT_NAME( tmp_import_name_from_163, const_str_plain_mpf_cosh_sinh );
        if ( tmp_assign_source_169 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_cosh_sinh, tmp_assign_source_169 );
    }
    {
        PyObject *tmp_assign_source_170;
        PyObject *tmp_import_name_from_164;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_164 = tmp_import_from_3__module;
        tmp_assign_source_170 = IMPORT_NAME( tmp_import_name_from_164, const_str_plain_mpf_cosh );
        if ( tmp_assign_source_170 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_cosh, tmp_assign_source_170 );
    }
    {
        PyObject *tmp_assign_source_171;
        PyObject *tmp_import_name_from_165;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_165 = tmp_import_from_3__module;
        tmp_assign_source_171 = IMPORT_NAME( tmp_import_name_from_165, const_str_plain_mpf_sinh );
        if ( tmp_assign_source_171 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_sinh, tmp_assign_source_171 );
    }
    {
        PyObject *tmp_assign_source_172;
        PyObject *tmp_import_name_from_166;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_166 = tmp_import_from_3__module;
        tmp_assign_source_172 = IMPORT_NAME( tmp_import_name_from_166, const_str_plain_mpf_tanh );
        if ( tmp_assign_source_172 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_tanh, tmp_assign_source_172 );
    }
    {
        PyObject *tmp_assign_source_173;
        PyObject *tmp_import_name_from_167;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_167 = tmp_import_from_3__module;
        tmp_assign_source_173 = IMPORT_NAME( tmp_import_name_from_167, const_str_plain_mpf_atan );
        if ( tmp_assign_source_173 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_atan, tmp_assign_source_173 );
    }
    {
        PyObject *tmp_assign_source_174;
        PyObject *tmp_import_name_from_168;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_168 = tmp_import_from_3__module;
        tmp_assign_source_174 = IMPORT_NAME( tmp_import_name_from_168, const_str_plain_mpf_atan2 );
        if ( tmp_assign_source_174 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_atan2, tmp_assign_source_174 );
    }
    {
        PyObject *tmp_assign_source_175;
        PyObject *tmp_import_name_from_169;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_169 = tmp_import_from_3__module;
        tmp_assign_source_175 = IMPORT_NAME( tmp_import_name_from_169, const_str_plain_mpf_asin );
        if ( tmp_assign_source_175 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_asin, tmp_assign_source_175 );
    }
    {
        PyObject *tmp_assign_source_176;
        PyObject *tmp_import_name_from_170;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_170 = tmp_import_from_3__module;
        tmp_assign_source_176 = IMPORT_NAME( tmp_import_name_from_170, const_str_plain_mpf_acos );
        if ( tmp_assign_source_176 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_acos, tmp_assign_source_176 );
    }
    {
        PyObject *tmp_assign_source_177;
        PyObject *tmp_import_name_from_171;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_171 = tmp_import_from_3__module;
        tmp_assign_source_177 = IMPORT_NAME( tmp_import_name_from_171, const_str_plain_mpf_asinh );
        if ( tmp_assign_source_177 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_asinh, tmp_assign_source_177 );
    }
    {
        PyObject *tmp_assign_source_178;
        PyObject *tmp_import_name_from_172;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_172 = tmp_import_from_3__module;
        tmp_assign_source_178 = IMPORT_NAME( tmp_import_name_from_172, const_str_plain_mpf_acosh );
        if ( tmp_assign_source_178 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_acosh, tmp_assign_source_178 );
    }
    {
        PyObject *tmp_assign_source_179;
        PyObject *tmp_import_name_from_173;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_173 = tmp_import_from_3__module;
        tmp_assign_source_179 = IMPORT_NAME( tmp_import_name_from_173, const_str_plain_mpf_atanh );
        if ( tmp_assign_source_179 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_atanh, tmp_assign_source_179 );
    }
    {
        PyObject *tmp_assign_source_180;
        PyObject *tmp_import_name_from_174;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_174 = tmp_import_from_3__module;
        tmp_assign_source_180 = IMPORT_NAME( tmp_import_name_from_174, const_str_plain_mpf_fibonacci );
        if ( tmp_assign_source_180 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_fibonacci, tmp_assign_source_180 );
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
        PyObject *tmp_assign_source_181;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_libhyper;
        tmp_globals_name_4 = (PyObject *)moduledict_mpmath$libmp;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_cfce3423c2b9bf7b06a11a5166daf91f_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_e5315ebcdf69bf6225cd518715d8ac3a->m_frame.f_lineno = 40;
        tmp_assign_source_181 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_181 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_4__module == NULL );
        tmp_import_from_4__module = tmp_assign_source_181;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_182;
        PyObject *tmp_import_name_from_175;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_175 = tmp_import_from_4__module;
        tmp_assign_source_182 = IMPORT_NAME( tmp_import_name_from_175, const_str_plain_NoConvergence );
        if ( tmp_assign_source_182 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_NoConvergence, tmp_assign_source_182 );
    }
    {
        PyObject *tmp_assign_source_183;
        PyObject *tmp_import_name_from_176;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_176 = tmp_import_from_4__module;
        tmp_assign_source_183 = IMPORT_NAME( tmp_import_name_from_176, const_str_plain_make_hyp_summator );
        if ( tmp_assign_source_183 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_make_hyp_summator, tmp_assign_source_183 );
    }
    {
        PyObject *tmp_assign_source_184;
        PyObject *tmp_import_name_from_177;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_177 = tmp_import_from_4__module;
        tmp_assign_source_184 = IMPORT_NAME( tmp_import_name_from_177, const_str_plain_mpf_erf );
        if ( tmp_assign_source_184 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_erf, tmp_assign_source_184 );
    }
    {
        PyObject *tmp_assign_source_185;
        PyObject *tmp_import_name_from_178;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_178 = tmp_import_from_4__module;
        tmp_assign_source_185 = IMPORT_NAME( tmp_import_name_from_178, const_str_plain_mpf_erfc );
        if ( tmp_assign_source_185 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_erfc, tmp_assign_source_185 );
    }
    {
        PyObject *tmp_assign_source_186;
        PyObject *tmp_import_name_from_179;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_179 = tmp_import_from_4__module;
        tmp_assign_source_186 = IMPORT_NAME( tmp_import_name_from_179, const_str_plain_mpf_ei );
        if ( tmp_assign_source_186 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_ei, tmp_assign_source_186 );
    }
    {
        PyObject *tmp_assign_source_187;
        PyObject *tmp_import_name_from_180;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_180 = tmp_import_from_4__module;
        tmp_assign_source_187 = IMPORT_NAME( tmp_import_name_from_180, const_str_plain_mpc_ei );
        if ( tmp_assign_source_187 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_ei, tmp_assign_source_187 );
    }
    {
        PyObject *tmp_assign_source_188;
        PyObject *tmp_import_name_from_181;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_181 = tmp_import_from_4__module;
        tmp_assign_source_188 = IMPORT_NAME( tmp_import_name_from_181, const_str_plain_mpf_e1 );
        if ( tmp_assign_source_188 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_e1, tmp_assign_source_188 );
    }
    {
        PyObject *tmp_assign_source_189;
        PyObject *tmp_import_name_from_182;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_182 = tmp_import_from_4__module;
        tmp_assign_source_189 = IMPORT_NAME( tmp_import_name_from_182, const_str_plain_mpc_e1 );
        if ( tmp_assign_source_189 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_e1, tmp_assign_source_189 );
    }
    {
        PyObject *tmp_assign_source_190;
        PyObject *tmp_import_name_from_183;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_183 = tmp_import_from_4__module;
        tmp_assign_source_190 = IMPORT_NAME( tmp_import_name_from_183, const_str_plain_mpf_expint );
        if ( tmp_assign_source_190 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_expint, tmp_assign_source_190 );
    }
    {
        PyObject *tmp_assign_source_191;
        PyObject *tmp_import_name_from_184;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_184 = tmp_import_from_4__module;
        tmp_assign_source_191 = IMPORT_NAME( tmp_import_name_from_184, const_str_plain_mpf_ci_si );
        if ( tmp_assign_source_191 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_ci_si, tmp_assign_source_191 );
    }
    {
        PyObject *tmp_assign_source_192;
        PyObject *tmp_import_name_from_185;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_185 = tmp_import_from_4__module;
        tmp_assign_source_192 = IMPORT_NAME( tmp_import_name_from_185, const_str_plain_mpf_ci );
        if ( tmp_assign_source_192 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_ci, tmp_assign_source_192 );
    }
    {
        PyObject *tmp_assign_source_193;
        PyObject *tmp_import_name_from_186;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_186 = tmp_import_from_4__module;
        tmp_assign_source_193 = IMPORT_NAME( tmp_import_name_from_186, const_str_plain_mpf_si );
        if ( tmp_assign_source_193 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_si, tmp_assign_source_193 );
    }
    {
        PyObject *tmp_assign_source_194;
        PyObject *tmp_import_name_from_187;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_187 = tmp_import_from_4__module;
        tmp_assign_source_194 = IMPORT_NAME( tmp_import_name_from_187, const_str_plain_mpc_ci );
        if ( tmp_assign_source_194 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_ci, tmp_assign_source_194 );
    }
    {
        PyObject *tmp_assign_source_195;
        PyObject *tmp_import_name_from_188;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_188 = tmp_import_from_4__module;
        tmp_assign_source_195 = IMPORT_NAME( tmp_import_name_from_188, const_str_plain_mpc_si );
        if ( tmp_assign_source_195 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_si, tmp_assign_source_195 );
    }
    {
        PyObject *tmp_assign_source_196;
        PyObject *tmp_import_name_from_189;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_189 = tmp_import_from_4__module;
        tmp_assign_source_196 = IMPORT_NAME( tmp_import_name_from_189, const_str_plain_mpf_besseljn );
        if ( tmp_assign_source_196 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_besseljn, tmp_assign_source_196 );
    }
    {
        PyObject *tmp_assign_source_197;
        PyObject *tmp_import_name_from_190;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_190 = tmp_import_from_4__module;
        tmp_assign_source_197 = IMPORT_NAME( tmp_import_name_from_190, const_str_plain_mpc_besseljn );
        if ( tmp_assign_source_197 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_besseljn, tmp_assign_source_197 );
    }
    {
        PyObject *tmp_assign_source_198;
        PyObject *tmp_import_name_from_191;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_191 = tmp_import_from_4__module;
        tmp_assign_source_198 = IMPORT_NAME( tmp_import_name_from_191, const_str_plain_mpf_agm );
        if ( tmp_assign_source_198 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_agm, tmp_assign_source_198 );
    }
    {
        PyObject *tmp_assign_source_199;
        PyObject *tmp_import_name_from_192;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_192 = tmp_import_from_4__module;
        tmp_assign_source_199 = IMPORT_NAME( tmp_import_name_from_192, const_str_plain_mpf_agm1 );
        if ( tmp_assign_source_199 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_agm1, tmp_assign_source_199 );
    }
    {
        PyObject *tmp_assign_source_200;
        PyObject *tmp_import_name_from_193;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_193 = tmp_import_from_4__module;
        tmp_assign_source_200 = IMPORT_NAME( tmp_import_name_from_193, const_str_plain_mpc_agm );
        if ( tmp_assign_source_200 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_agm, tmp_assign_source_200 );
    }
    {
        PyObject *tmp_assign_source_201;
        PyObject *tmp_import_name_from_194;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_194 = tmp_import_from_4__module;
        tmp_assign_source_201 = IMPORT_NAME( tmp_import_name_from_194, const_str_plain_mpc_agm1 );
        if ( tmp_assign_source_201 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_agm1, tmp_assign_source_201 );
    }
    {
        PyObject *tmp_assign_source_202;
        PyObject *tmp_import_name_from_195;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_195 = tmp_import_from_4__module;
        tmp_assign_source_202 = IMPORT_NAME( tmp_import_name_from_195, const_str_plain_mpf_ellipk );
        if ( tmp_assign_source_202 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_ellipk, tmp_assign_source_202 );
    }
    {
        PyObject *tmp_assign_source_203;
        PyObject *tmp_import_name_from_196;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_196 = tmp_import_from_4__module;
        tmp_assign_source_203 = IMPORT_NAME( tmp_import_name_from_196, const_str_plain_mpc_ellipk );
        if ( tmp_assign_source_203 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_ellipk, tmp_assign_source_203 );
    }
    {
        PyObject *tmp_assign_source_204;
        PyObject *tmp_import_name_from_197;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_197 = tmp_import_from_4__module;
        tmp_assign_source_204 = IMPORT_NAME( tmp_import_name_from_197, const_str_plain_mpf_ellipe );
        if ( tmp_assign_source_204 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_ellipe, tmp_assign_source_204 );
    }
    {
        PyObject *tmp_assign_source_205;
        PyObject *tmp_import_name_from_198;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_198 = tmp_import_from_4__module;
        tmp_assign_source_205 = IMPORT_NAME( tmp_import_name_from_198, const_str_plain_mpc_ellipe );
        if ( tmp_assign_source_205 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_ellipe, tmp_assign_source_205 );
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
        PyObject *tmp_assign_source_206;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_gammazeta;
        tmp_globals_name_5 = (PyObject *)moduledict_mpmath$libmp;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_8b1d95bd4357b2553b892072e8c64251_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_e5315ebcdf69bf6225cd518715d8ac3a->m_frame.f_lineno = 46;
        tmp_assign_source_206 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_assign_source_206 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_5__module == NULL );
        tmp_import_from_5__module = tmp_assign_source_206;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_207;
        PyObject *tmp_import_name_from_199;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_199 = tmp_import_from_5__module;
        tmp_assign_source_207 = IMPORT_NAME( tmp_import_name_from_199, const_str_plain_catalan_fixed );
        if ( tmp_assign_source_207 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_catalan_fixed, tmp_assign_source_207 );
    }
    {
        PyObject *tmp_assign_source_208;
        PyObject *tmp_import_name_from_200;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_200 = tmp_import_from_5__module;
        tmp_assign_source_208 = IMPORT_NAME( tmp_import_name_from_200, const_str_plain_mpf_catalan );
        if ( tmp_assign_source_208 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_catalan, tmp_assign_source_208 );
    }
    {
        PyObject *tmp_assign_source_209;
        PyObject *tmp_import_name_from_201;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_201 = tmp_import_from_5__module;
        tmp_assign_source_209 = IMPORT_NAME( tmp_import_name_from_201, const_str_plain_khinchin_fixed );
        if ( tmp_assign_source_209 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_khinchin_fixed, tmp_assign_source_209 );
    }
    {
        PyObject *tmp_assign_source_210;
        PyObject *tmp_import_name_from_202;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_202 = tmp_import_from_5__module;
        tmp_assign_source_210 = IMPORT_NAME( tmp_import_name_from_202, const_str_plain_mpf_khinchin );
        if ( tmp_assign_source_210 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_khinchin, tmp_assign_source_210 );
    }
    {
        PyObject *tmp_assign_source_211;
        PyObject *tmp_import_name_from_203;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_203 = tmp_import_from_5__module;
        tmp_assign_source_211 = IMPORT_NAME( tmp_import_name_from_203, const_str_plain_glaisher_fixed );
        if ( tmp_assign_source_211 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_glaisher_fixed, tmp_assign_source_211 );
    }
    {
        PyObject *tmp_assign_source_212;
        PyObject *tmp_import_name_from_204;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_204 = tmp_import_from_5__module;
        tmp_assign_source_212 = IMPORT_NAME( tmp_import_name_from_204, const_str_plain_mpf_glaisher );
        if ( tmp_assign_source_212 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_glaisher, tmp_assign_source_212 );
    }
    {
        PyObject *tmp_assign_source_213;
        PyObject *tmp_import_name_from_205;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_205 = tmp_import_from_5__module;
        tmp_assign_source_213 = IMPORT_NAME( tmp_import_name_from_205, const_str_plain_apery_fixed );
        if ( tmp_assign_source_213 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_apery_fixed, tmp_assign_source_213 );
    }
    {
        PyObject *tmp_assign_source_214;
        PyObject *tmp_import_name_from_206;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_206 = tmp_import_from_5__module;
        tmp_assign_source_214 = IMPORT_NAME( tmp_import_name_from_206, const_str_plain_mpf_apery );
        if ( tmp_assign_source_214 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_apery, tmp_assign_source_214 );
    }
    {
        PyObject *tmp_assign_source_215;
        PyObject *tmp_import_name_from_207;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_207 = tmp_import_from_5__module;
        tmp_assign_source_215 = IMPORT_NAME( tmp_import_name_from_207, const_str_plain_euler_fixed );
        if ( tmp_assign_source_215 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_euler_fixed, tmp_assign_source_215 );
    }
    {
        PyObject *tmp_assign_source_216;
        PyObject *tmp_import_name_from_208;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_208 = tmp_import_from_5__module;
        tmp_assign_source_216 = IMPORT_NAME( tmp_import_name_from_208, const_str_plain_mpf_euler );
        if ( tmp_assign_source_216 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_euler, tmp_assign_source_216 );
    }
    {
        PyObject *tmp_assign_source_217;
        PyObject *tmp_import_name_from_209;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_209 = tmp_import_from_5__module;
        tmp_assign_source_217 = IMPORT_NAME( tmp_import_name_from_209, const_str_plain_mertens_fixed );
        if ( tmp_assign_source_217 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mertens_fixed, tmp_assign_source_217 );
    }
    {
        PyObject *tmp_assign_source_218;
        PyObject *tmp_import_name_from_210;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_210 = tmp_import_from_5__module;
        tmp_assign_source_218 = IMPORT_NAME( tmp_import_name_from_210, const_str_plain_mpf_mertens );
        if ( tmp_assign_source_218 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_mertens, tmp_assign_source_218 );
    }
    {
        PyObject *tmp_assign_source_219;
        PyObject *tmp_import_name_from_211;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_211 = tmp_import_from_5__module;
        tmp_assign_source_219 = IMPORT_NAME( tmp_import_name_from_211, const_str_plain_twinprime_fixed );
        if ( tmp_assign_source_219 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_twinprime_fixed, tmp_assign_source_219 );
    }
    {
        PyObject *tmp_assign_source_220;
        PyObject *tmp_import_name_from_212;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_212 = tmp_import_from_5__module;
        tmp_assign_source_220 = IMPORT_NAME( tmp_import_name_from_212, const_str_plain_mpf_twinprime );
        if ( tmp_assign_source_220 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_twinprime, tmp_assign_source_220 );
    }
    {
        PyObject *tmp_assign_source_221;
        PyObject *tmp_import_name_from_213;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_213 = tmp_import_from_5__module;
        tmp_assign_source_221 = IMPORT_NAME( tmp_import_name_from_213, const_str_plain_mpf_bernoulli );
        if ( tmp_assign_source_221 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_bernoulli, tmp_assign_source_221 );
    }
    {
        PyObject *tmp_assign_source_222;
        PyObject *tmp_import_name_from_214;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_214 = tmp_import_from_5__module;
        tmp_assign_source_222 = IMPORT_NAME( tmp_import_name_from_214, const_str_plain_bernfrac );
        if ( tmp_assign_source_222 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_bernfrac, tmp_assign_source_222 );
    }
    {
        PyObject *tmp_assign_source_223;
        PyObject *tmp_import_name_from_215;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_215 = tmp_import_from_5__module;
        tmp_assign_source_223 = IMPORT_NAME( tmp_import_name_from_215, const_str_plain_mpf_gamma_int );
        if ( tmp_assign_source_223 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_gamma_int, tmp_assign_source_223 );
    }
    {
        PyObject *tmp_assign_source_224;
        PyObject *tmp_import_name_from_216;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_216 = tmp_import_from_5__module;
        tmp_assign_source_224 = IMPORT_NAME( tmp_import_name_from_216, const_str_plain_mpf_factorial );
        if ( tmp_assign_source_224 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_factorial, tmp_assign_source_224 );
    }
    {
        PyObject *tmp_assign_source_225;
        PyObject *tmp_import_name_from_217;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_217 = tmp_import_from_5__module;
        tmp_assign_source_225 = IMPORT_NAME( tmp_import_name_from_217, const_str_plain_mpc_factorial );
        if ( tmp_assign_source_225 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_factorial, tmp_assign_source_225 );
    }
    {
        PyObject *tmp_assign_source_226;
        PyObject *tmp_import_name_from_218;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_218 = tmp_import_from_5__module;
        tmp_assign_source_226 = IMPORT_NAME( tmp_import_name_from_218, const_str_plain_mpf_gamma );
        if ( tmp_assign_source_226 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_gamma, tmp_assign_source_226 );
    }
    {
        PyObject *tmp_assign_source_227;
        PyObject *tmp_import_name_from_219;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_219 = tmp_import_from_5__module;
        tmp_assign_source_227 = IMPORT_NAME( tmp_import_name_from_219, const_str_plain_mpc_gamma );
        if ( tmp_assign_source_227 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_gamma, tmp_assign_source_227 );
    }
    {
        PyObject *tmp_assign_source_228;
        PyObject *tmp_import_name_from_220;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_220 = tmp_import_from_5__module;
        tmp_assign_source_228 = IMPORT_NAME( tmp_import_name_from_220, const_str_plain_mpf_loggamma );
        if ( tmp_assign_source_228 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_loggamma, tmp_assign_source_228 );
    }
    {
        PyObject *tmp_assign_source_229;
        PyObject *tmp_import_name_from_221;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_221 = tmp_import_from_5__module;
        tmp_assign_source_229 = IMPORT_NAME( tmp_import_name_from_221, const_str_plain_mpc_loggamma );
        if ( tmp_assign_source_229 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_loggamma, tmp_assign_source_229 );
    }
    {
        PyObject *tmp_assign_source_230;
        PyObject *tmp_import_name_from_222;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_222 = tmp_import_from_5__module;
        tmp_assign_source_230 = IMPORT_NAME( tmp_import_name_from_222, const_str_plain_mpf_rgamma );
        if ( tmp_assign_source_230 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_rgamma, tmp_assign_source_230 );
    }
    {
        PyObject *tmp_assign_source_231;
        PyObject *tmp_import_name_from_223;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_223 = tmp_import_from_5__module;
        tmp_assign_source_231 = IMPORT_NAME( tmp_import_name_from_223, const_str_plain_mpc_rgamma );
        if ( tmp_assign_source_231 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_rgamma, tmp_assign_source_231 );
    }
    {
        PyObject *tmp_assign_source_232;
        PyObject *tmp_import_name_from_224;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_224 = tmp_import_from_5__module;
        tmp_assign_source_232 = IMPORT_NAME( tmp_import_name_from_224, const_str_plain_mpf_gamma_old );
        if ( tmp_assign_source_232 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_gamma_old, tmp_assign_source_232 );
    }
    {
        PyObject *tmp_assign_source_233;
        PyObject *tmp_import_name_from_225;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_225 = tmp_import_from_5__module;
        tmp_assign_source_233 = IMPORT_NAME( tmp_import_name_from_225, const_str_plain_mpc_gamma_old );
        if ( tmp_assign_source_233 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_gamma_old, tmp_assign_source_233 );
    }
    {
        PyObject *tmp_assign_source_234;
        PyObject *tmp_import_name_from_226;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_226 = tmp_import_from_5__module;
        tmp_assign_source_234 = IMPORT_NAME( tmp_import_name_from_226, const_str_plain_mpf_factorial_old );
        if ( tmp_assign_source_234 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_factorial_old, tmp_assign_source_234 );
    }
    {
        PyObject *tmp_assign_source_235;
        PyObject *tmp_import_name_from_227;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_227 = tmp_import_from_5__module;
        tmp_assign_source_235 = IMPORT_NAME( tmp_import_name_from_227, const_str_plain_mpc_factorial_old );
        if ( tmp_assign_source_235 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_factorial_old, tmp_assign_source_235 );
    }
    {
        PyObject *tmp_assign_source_236;
        PyObject *tmp_import_name_from_228;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_228 = tmp_import_from_5__module;
        tmp_assign_source_236 = IMPORT_NAME( tmp_import_name_from_228, const_str_plain_mpf_harmonic );
        if ( tmp_assign_source_236 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_harmonic, tmp_assign_source_236 );
    }
    {
        PyObject *tmp_assign_source_237;
        PyObject *tmp_import_name_from_229;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_229 = tmp_import_from_5__module;
        tmp_assign_source_237 = IMPORT_NAME( tmp_import_name_from_229, const_str_plain_mpc_harmonic );
        if ( tmp_assign_source_237 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_harmonic, tmp_assign_source_237 );
    }
    {
        PyObject *tmp_assign_source_238;
        PyObject *tmp_import_name_from_230;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_230 = tmp_import_from_5__module;
        tmp_assign_source_238 = IMPORT_NAME( tmp_import_name_from_230, const_str_plain_mpf_psi0 );
        if ( tmp_assign_source_238 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_psi0, tmp_assign_source_238 );
    }
    {
        PyObject *tmp_assign_source_239;
        PyObject *tmp_import_name_from_231;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_231 = tmp_import_from_5__module;
        tmp_assign_source_239 = IMPORT_NAME( tmp_import_name_from_231, const_str_plain_mpc_psi0 );
        if ( tmp_assign_source_239 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_psi0, tmp_assign_source_239 );
    }
    {
        PyObject *tmp_assign_source_240;
        PyObject *tmp_import_name_from_232;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_232 = tmp_import_from_5__module;
        tmp_assign_source_240 = IMPORT_NAME( tmp_import_name_from_232, const_str_plain_mpf_psi );
        if ( tmp_assign_source_240 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_psi, tmp_assign_source_240 );
    }
    {
        PyObject *tmp_assign_source_241;
        PyObject *tmp_import_name_from_233;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_233 = tmp_import_from_5__module;
        tmp_assign_source_241 = IMPORT_NAME( tmp_import_name_from_233, const_str_plain_mpc_psi );
        if ( tmp_assign_source_241 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_psi, tmp_assign_source_241 );
    }
    {
        PyObject *tmp_assign_source_242;
        PyObject *tmp_import_name_from_234;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_234 = tmp_import_from_5__module;
        tmp_assign_source_242 = IMPORT_NAME( tmp_import_name_from_234, const_str_plain_mpf_zeta_int );
        if ( tmp_assign_source_242 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_zeta_int, tmp_assign_source_242 );
    }
    {
        PyObject *tmp_assign_source_243;
        PyObject *tmp_import_name_from_235;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_235 = tmp_import_from_5__module;
        tmp_assign_source_243 = IMPORT_NAME( tmp_import_name_from_235, const_str_plain_mpf_zeta );
        if ( tmp_assign_source_243 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_zeta, tmp_assign_source_243 );
    }
    {
        PyObject *tmp_assign_source_244;
        PyObject *tmp_import_name_from_236;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_236 = tmp_import_from_5__module;
        tmp_assign_source_244 = IMPORT_NAME( tmp_import_name_from_236, const_str_plain_mpc_zeta );
        if ( tmp_assign_source_244 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_zeta, tmp_assign_source_244 );
    }
    {
        PyObject *tmp_assign_source_245;
        PyObject *tmp_import_name_from_237;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_237 = tmp_import_from_5__module;
        tmp_assign_source_245 = IMPORT_NAME( tmp_import_name_from_237, const_str_plain_mpf_altzeta );
        if ( tmp_assign_source_245 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_altzeta, tmp_assign_source_245 );
    }
    {
        PyObject *tmp_assign_source_246;
        PyObject *tmp_import_name_from_238;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_238 = tmp_import_from_5__module;
        tmp_assign_source_246 = IMPORT_NAME( tmp_import_name_from_238, const_str_plain_mpc_altzeta );
        if ( tmp_assign_source_246 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_altzeta, tmp_assign_source_246 );
    }
    {
        PyObject *tmp_assign_source_247;
        PyObject *tmp_import_name_from_239;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_239 = tmp_import_from_5__module;
        tmp_assign_source_247 = IMPORT_NAME( tmp_import_name_from_239, const_str_plain_mpf_zetasum );
        if ( tmp_assign_source_247 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpf_zetasum, tmp_assign_source_247 );
    }
    {
        PyObject *tmp_assign_source_248;
        PyObject *tmp_import_name_from_240;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_240 = tmp_import_from_5__module;
        tmp_assign_source_248 = IMPORT_NAME( tmp_import_name_from_240, const_str_plain_mpc_zetasum );
        if ( tmp_assign_source_248 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpc_zetasum, tmp_assign_source_248 );
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
        PyObject *tmp_assign_source_249;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_libmpi;
        tmp_globals_name_6 = (PyObject *)moduledict_mpmath$libmp;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_5a2e3727f1cdf20a2018a6880e25f3a4_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_e5315ebcdf69bf6225cd518715d8ac3a->m_frame.f_lineno = 58;
        tmp_assign_source_249 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_assign_source_249 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_6__module == NULL );
        tmp_import_from_6__module = tmp_assign_source_249;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_250;
        PyObject *tmp_import_name_from_241;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_241 = tmp_import_from_6__module;
        tmp_assign_source_250 = IMPORT_NAME( tmp_import_name_from_241, const_str_plain_mpi_str );
        if ( tmp_assign_source_250 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_str, tmp_assign_source_250 );
    }
    {
        PyObject *tmp_assign_source_251;
        PyObject *tmp_import_name_from_242;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_242 = tmp_import_from_6__module;
        tmp_assign_source_251 = IMPORT_NAME( tmp_import_name_from_242, const_str_plain_mpi_from_str );
        if ( tmp_assign_source_251 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_from_str, tmp_assign_source_251 );
    }
    {
        PyObject *tmp_assign_source_252;
        PyObject *tmp_import_name_from_243;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_243 = tmp_import_from_6__module;
        tmp_assign_source_252 = IMPORT_NAME( tmp_import_name_from_243, const_str_plain_mpi_to_str );
        if ( tmp_assign_source_252 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_to_str, tmp_assign_source_252 );
    }
    {
        PyObject *tmp_assign_source_253;
        PyObject *tmp_import_name_from_244;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_244 = tmp_import_from_6__module;
        tmp_assign_source_253 = IMPORT_NAME( tmp_import_name_from_244, const_str_plain_mpi_eq );
        if ( tmp_assign_source_253 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_eq, tmp_assign_source_253 );
    }
    {
        PyObject *tmp_assign_source_254;
        PyObject *tmp_import_name_from_245;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_245 = tmp_import_from_6__module;
        tmp_assign_source_254 = IMPORT_NAME( tmp_import_name_from_245, const_str_plain_mpi_ne );
        if ( tmp_assign_source_254 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_ne, tmp_assign_source_254 );
    }
    {
        PyObject *tmp_assign_source_255;
        PyObject *tmp_import_name_from_246;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_246 = tmp_import_from_6__module;
        tmp_assign_source_255 = IMPORT_NAME( tmp_import_name_from_246, const_str_plain_mpi_lt );
        if ( tmp_assign_source_255 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_lt, tmp_assign_source_255 );
    }
    {
        PyObject *tmp_assign_source_256;
        PyObject *tmp_import_name_from_247;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_247 = tmp_import_from_6__module;
        tmp_assign_source_256 = IMPORT_NAME( tmp_import_name_from_247, const_str_plain_mpi_le );
        if ( tmp_assign_source_256 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_le, tmp_assign_source_256 );
    }
    {
        PyObject *tmp_assign_source_257;
        PyObject *tmp_import_name_from_248;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_248 = tmp_import_from_6__module;
        tmp_assign_source_257 = IMPORT_NAME( tmp_import_name_from_248, const_str_plain_mpi_gt );
        if ( tmp_assign_source_257 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_gt, tmp_assign_source_257 );
    }
    {
        PyObject *tmp_assign_source_258;
        PyObject *tmp_import_name_from_249;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_249 = tmp_import_from_6__module;
        tmp_assign_source_258 = IMPORT_NAME( tmp_import_name_from_249, const_str_plain_mpi_ge );
        if ( tmp_assign_source_258 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_ge, tmp_assign_source_258 );
    }
    {
        PyObject *tmp_assign_source_259;
        PyObject *tmp_import_name_from_250;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_250 = tmp_import_from_6__module;
        tmp_assign_source_259 = IMPORT_NAME( tmp_import_name_from_250, const_str_plain_mpi_add );
        if ( tmp_assign_source_259 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_add, tmp_assign_source_259 );
    }
    {
        PyObject *tmp_assign_source_260;
        PyObject *tmp_import_name_from_251;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_251 = tmp_import_from_6__module;
        tmp_assign_source_260 = IMPORT_NAME( tmp_import_name_from_251, const_str_plain_mpi_sub );
        if ( tmp_assign_source_260 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_sub, tmp_assign_source_260 );
    }
    {
        PyObject *tmp_assign_source_261;
        PyObject *tmp_import_name_from_252;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_252 = tmp_import_from_6__module;
        tmp_assign_source_261 = IMPORT_NAME( tmp_import_name_from_252, const_str_plain_mpi_delta );
        if ( tmp_assign_source_261 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_delta, tmp_assign_source_261 );
    }
    {
        PyObject *tmp_assign_source_262;
        PyObject *tmp_import_name_from_253;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_253 = tmp_import_from_6__module;
        tmp_assign_source_262 = IMPORT_NAME( tmp_import_name_from_253, const_str_plain_mpi_mid );
        if ( tmp_assign_source_262 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_mid, tmp_assign_source_262 );
    }
    {
        PyObject *tmp_assign_source_263;
        PyObject *tmp_import_name_from_254;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_254 = tmp_import_from_6__module;
        tmp_assign_source_263 = IMPORT_NAME( tmp_import_name_from_254, const_str_plain_mpi_pos );
        if ( tmp_assign_source_263 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_pos, tmp_assign_source_263 );
    }
    {
        PyObject *tmp_assign_source_264;
        PyObject *tmp_import_name_from_255;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_255 = tmp_import_from_6__module;
        tmp_assign_source_264 = IMPORT_NAME( tmp_import_name_from_255, const_str_plain_mpi_neg );
        if ( tmp_assign_source_264 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_neg, tmp_assign_source_264 );
    }
    {
        PyObject *tmp_assign_source_265;
        PyObject *tmp_import_name_from_256;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_256 = tmp_import_from_6__module;
        tmp_assign_source_265 = IMPORT_NAME( tmp_import_name_from_256, const_str_plain_mpi_abs );
        if ( tmp_assign_source_265 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_abs, tmp_assign_source_265 );
    }
    {
        PyObject *tmp_assign_source_266;
        PyObject *tmp_import_name_from_257;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_257 = tmp_import_from_6__module;
        tmp_assign_source_266 = IMPORT_NAME( tmp_import_name_from_257, const_str_plain_mpi_mul );
        if ( tmp_assign_source_266 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_mul, tmp_assign_source_266 );
    }
    {
        PyObject *tmp_assign_source_267;
        PyObject *tmp_import_name_from_258;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_258 = tmp_import_from_6__module;
        tmp_assign_source_267 = IMPORT_NAME( tmp_import_name_from_258, const_str_plain_mpi_div );
        if ( tmp_assign_source_267 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_div, tmp_assign_source_267 );
    }
    {
        PyObject *tmp_assign_source_268;
        PyObject *tmp_import_name_from_259;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_259 = tmp_import_from_6__module;
        tmp_assign_source_268 = IMPORT_NAME( tmp_import_name_from_259, const_str_plain_mpi_exp );
        if ( tmp_assign_source_268 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_exp, tmp_assign_source_268 );
    }
    {
        PyObject *tmp_assign_source_269;
        PyObject *tmp_import_name_from_260;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_260 = tmp_import_from_6__module;
        tmp_assign_source_269 = IMPORT_NAME( tmp_import_name_from_260, const_str_plain_mpi_log );
        if ( tmp_assign_source_269 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_log, tmp_assign_source_269 );
    }
    {
        PyObject *tmp_assign_source_270;
        PyObject *tmp_import_name_from_261;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_261 = tmp_import_from_6__module;
        tmp_assign_source_270 = IMPORT_NAME( tmp_import_name_from_261, const_str_plain_mpi_sqrt );
        if ( tmp_assign_source_270 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_sqrt, tmp_assign_source_270 );
    }
    {
        PyObject *tmp_assign_source_271;
        PyObject *tmp_import_name_from_262;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_262 = tmp_import_from_6__module;
        tmp_assign_source_271 = IMPORT_NAME( tmp_import_name_from_262, const_str_plain_mpi_pow_int );
        if ( tmp_assign_source_271 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_pow_int, tmp_assign_source_271 );
    }
    {
        PyObject *tmp_assign_source_272;
        PyObject *tmp_import_name_from_263;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_263 = tmp_import_from_6__module;
        tmp_assign_source_272 = IMPORT_NAME( tmp_import_name_from_263, const_str_plain_mpi_pow );
        if ( tmp_assign_source_272 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_pow, tmp_assign_source_272 );
    }
    {
        PyObject *tmp_assign_source_273;
        PyObject *tmp_import_name_from_264;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_264 = tmp_import_from_6__module;
        tmp_assign_source_273 = IMPORT_NAME( tmp_import_name_from_264, const_str_plain_mpi_cos_sin );
        if ( tmp_assign_source_273 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_cos_sin, tmp_assign_source_273 );
    }
    {
        PyObject *tmp_assign_source_274;
        PyObject *tmp_import_name_from_265;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_265 = tmp_import_from_6__module;
        tmp_assign_source_274 = IMPORT_NAME( tmp_import_name_from_265, const_str_plain_mpi_cos );
        if ( tmp_assign_source_274 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_cos, tmp_assign_source_274 );
    }
    {
        PyObject *tmp_assign_source_275;
        PyObject *tmp_import_name_from_266;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_266 = tmp_import_from_6__module;
        tmp_assign_source_275 = IMPORT_NAME( tmp_import_name_from_266, const_str_plain_mpi_sin );
        if ( tmp_assign_source_275 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_sin, tmp_assign_source_275 );
    }
    {
        PyObject *tmp_assign_source_276;
        PyObject *tmp_import_name_from_267;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_267 = tmp_import_from_6__module;
        tmp_assign_source_276 = IMPORT_NAME( tmp_import_name_from_267, const_str_plain_mpi_tan );
        if ( tmp_assign_source_276 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_tan, tmp_assign_source_276 );
    }
    {
        PyObject *tmp_assign_source_277;
        PyObject *tmp_import_name_from_268;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_268 = tmp_import_from_6__module;
        tmp_assign_source_277 = IMPORT_NAME( tmp_import_name_from_268, const_str_plain_mpi_cot );
        if ( tmp_assign_source_277 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_cot, tmp_assign_source_277 );
    }
    {
        PyObject *tmp_assign_source_278;
        PyObject *tmp_import_name_from_269;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_269 = tmp_import_from_6__module;
        tmp_assign_source_278 = IMPORT_NAME( tmp_import_name_from_269, const_str_plain_mpi_atan );
        if ( tmp_assign_source_278 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_atan, tmp_assign_source_278 );
    }
    {
        PyObject *tmp_assign_source_279;
        PyObject *tmp_import_name_from_270;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_270 = tmp_import_from_6__module;
        tmp_assign_source_279 = IMPORT_NAME( tmp_import_name_from_270, const_str_plain_mpi_atan2 );
        if ( tmp_assign_source_279 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_atan2, tmp_assign_source_279 );
    }
    {
        PyObject *tmp_assign_source_280;
        PyObject *tmp_import_name_from_271;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_271 = tmp_import_from_6__module;
        tmp_assign_source_280 = IMPORT_NAME( tmp_import_name_from_271, const_str_plain_mpci_pos );
        if ( tmp_assign_source_280 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpci_pos, tmp_assign_source_280 );
    }
    {
        PyObject *tmp_assign_source_281;
        PyObject *tmp_import_name_from_272;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_272 = tmp_import_from_6__module;
        tmp_assign_source_281 = IMPORT_NAME( tmp_import_name_from_272, const_str_plain_mpci_neg );
        if ( tmp_assign_source_281 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpci_neg, tmp_assign_source_281 );
    }
    {
        PyObject *tmp_assign_source_282;
        PyObject *tmp_import_name_from_273;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_273 = tmp_import_from_6__module;
        tmp_assign_source_282 = IMPORT_NAME( tmp_import_name_from_273, const_str_plain_mpci_add );
        if ( tmp_assign_source_282 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpci_add, tmp_assign_source_282 );
    }
    {
        PyObject *tmp_assign_source_283;
        PyObject *tmp_import_name_from_274;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_274 = tmp_import_from_6__module;
        tmp_assign_source_283 = IMPORT_NAME( tmp_import_name_from_274, const_str_plain_mpci_sub );
        if ( tmp_assign_source_283 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpci_sub, tmp_assign_source_283 );
    }
    {
        PyObject *tmp_assign_source_284;
        PyObject *tmp_import_name_from_275;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_275 = tmp_import_from_6__module;
        tmp_assign_source_284 = IMPORT_NAME( tmp_import_name_from_275, const_str_plain_mpci_mul );
        if ( tmp_assign_source_284 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpci_mul, tmp_assign_source_284 );
    }
    {
        PyObject *tmp_assign_source_285;
        PyObject *tmp_import_name_from_276;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_276 = tmp_import_from_6__module;
        tmp_assign_source_285 = IMPORT_NAME( tmp_import_name_from_276, const_str_plain_mpci_div );
        if ( tmp_assign_source_285 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpci_div, tmp_assign_source_285 );
    }
    {
        PyObject *tmp_assign_source_286;
        PyObject *tmp_import_name_from_277;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_277 = tmp_import_from_6__module;
        tmp_assign_source_286 = IMPORT_NAME( tmp_import_name_from_277, const_str_plain_mpci_pow );
        if ( tmp_assign_source_286 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpci_pow, tmp_assign_source_286 );
    }
    {
        PyObject *tmp_assign_source_287;
        PyObject *tmp_import_name_from_278;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_278 = tmp_import_from_6__module;
        tmp_assign_source_287 = IMPORT_NAME( tmp_import_name_from_278, const_str_plain_mpci_abs );
        if ( tmp_assign_source_287 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpci_abs, tmp_assign_source_287 );
    }
    {
        PyObject *tmp_assign_source_288;
        PyObject *tmp_import_name_from_279;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_279 = tmp_import_from_6__module;
        tmp_assign_source_288 = IMPORT_NAME( tmp_import_name_from_279, const_str_plain_mpci_pow );
        if ( tmp_assign_source_288 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpci_pow, tmp_assign_source_288 );
    }
    {
        PyObject *tmp_assign_source_289;
        PyObject *tmp_import_name_from_280;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_280 = tmp_import_from_6__module;
        tmp_assign_source_289 = IMPORT_NAME( tmp_import_name_from_280, const_str_plain_mpci_exp );
        if ( tmp_assign_source_289 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpci_exp, tmp_assign_source_289 );
    }
    {
        PyObject *tmp_assign_source_290;
        PyObject *tmp_import_name_from_281;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_281 = tmp_import_from_6__module;
        tmp_assign_source_290 = IMPORT_NAME( tmp_import_name_from_281, const_str_plain_mpci_log );
        if ( tmp_assign_source_290 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpci_log, tmp_assign_source_290 );
    }
    {
        PyObject *tmp_assign_source_291;
        PyObject *tmp_import_name_from_282;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_282 = tmp_import_from_6__module;
        tmp_assign_source_291 = IMPORT_NAME( tmp_import_name_from_282, const_str_plain_mpci_cos );
        if ( tmp_assign_source_291 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpci_cos, tmp_assign_source_291 );
    }
    {
        PyObject *tmp_assign_source_292;
        PyObject *tmp_import_name_from_283;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_283 = tmp_import_from_6__module;
        tmp_assign_source_292 = IMPORT_NAME( tmp_import_name_from_283, const_str_plain_mpci_sin );
        if ( tmp_assign_source_292 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpci_sin, tmp_assign_source_292 );
    }
    {
        PyObject *tmp_assign_source_293;
        PyObject *tmp_import_name_from_284;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_284 = tmp_import_from_6__module;
        tmp_assign_source_293 = IMPORT_NAME( tmp_import_name_from_284, const_str_plain_mpi_gamma );
        if ( tmp_assign_source_293 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_gamma, tmp_assign_source_293 );
    }
    {
        PyObject *tmp_assign_source_294;
        PyObject *tmp_import_name_from_285;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_285 = tmp_import_from_6__module;
        tmp_assign_source_294 = IMPORT_NAME( tmp_import_name_from_285, const_str_plain_mpci_gamma );
        if ( tmp_assign_source_294 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpci_gamma, tmp_assign_source_294 );
    }
    {
        PyObject *tmp_assign_source_295;
        PyObject *tmp_import_name_from_286;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_286 = tmp_import_from_6__module;
        tmp_assign_source_295 = IMPORT_NAME( tmp_import_name_from_286, const_str_plain_mpi_loggamma );
        if ( tmp_assign_source_295 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_loggamma, tmp_assign_source_295 );
    }
    {
        PyObject *tmp_assign_source_296;
        PyObject *tmp_import_name_from_287;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_287 = tmp_import_from_6__module;
        tmp_assign_source_296 = IMPORT_NAME( tmp_import_name_from_287, const_str_plain_mpci_loggamma );
        if ( tmp_assign_source_296 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpci_loggamma, tmp_assign_source_296 );
    }
    {
        PyObject *tmp_assign_source_297;
        PyObject *tmp_import_name_from_288;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_288 = tmp_import_from_6__module;
        tmp_assign_source_297 = IMPORT_NAME( tmp_import_name_from_288, const_str_plain_mpi_rgamma );
        if ( tmp_assign_source_297 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_rgamma, tmp_assign_source_297 );
    }
    {
        PyObject *tmp_assign_source_298;
        PyObject *tmp_import_name_from_289;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_289 = tmp_import_from_6__module;
        tmp_assign_source_298 = IMPORT_NAME( tmp_import_name_from_289, const_str_plain_mpci_rgamma );
        if ( tmp_assign_source_298 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpci_rgamma, tmp_assign_source_298 );
    }
    {
        PyObject *tmp_assign_source_299;
        PyObject *tmp_import_name_from_290;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_290 = tmp_import_from_6__module;
        tmp_assign_source_299 = IMPORT_NAME( tmp_import_name_from_290, const_str_plain_mpi_factorial );
        if ( tmp_assign_source_299 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpi_factorial, tmp_assign_source_299 );
    }
    {
        PyObject *tmp_assign_source_300;
        PyObject *tmp_import_name_from_291;
        CHECK_OBJECT( tmp_import_from_6__module );
        tmp_import_name_from_291 = tmp_import_from_6__module;
        tmp_assign_source_300 = IMPORT_NAME( tmp_import_name_from_291, const_str_plain_mpci_factorial );
        if ( tmp_assign_source_300 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_mpci_factorial, tmp_assign_source_300 );
    }
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_6__module );
    Py_DECREF( tmp_import_from_6__module );
    tmp_import_from_6__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_6__module );
    Py_DECREF( tmp_import_from_6__module );
    tmp_import_from_6__module = NULL;

    {
        PyObject *tmp_assign_source_301;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_libintmath;
        tmp_globals_name_7 = (PyObject *)moduledict_mpmath$libmp;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_46636736eaeb8a60c69451cb85460230_tuple;
        tmp_level_name_7 = const_int_pos_1;
        frame_e5315ebcdf69bf6225cd518715d8ac3a->m_frame.f_lineno = 72;
        tmp_assign_source_301 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_assign_source_301 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_7__module == NULL );
        tmp_import_from_7__module = tmp_assign_source_301;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_302;
        PyObject *tmp_import_name_from_292;
        CHECK_OBJECT( tmp_import_from_7__module );
        tmp_import_name_from_292 = tmp_import_from_7__module;
        tmp_assign_source_302 = IMPORT_NAME( tmp_import_name_from_292, const_str_plain_trailing );
        if ( tmp_assign_source_302 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_trailing, tmp_assign_source_302 );
    }
    {
        PyObject *tmp_assign_source_303;
        PyObject *tmp_import_name_from_293;
        CHECK_OBJECT( tmp_import_from_7__module );
        tmp_import_name_from_293 = tmp_import_from_7__module;
        tmp_assign_source_303 = IMPORT_NAME( tmp_import_name_from_293, const_str_plain_bitcount );
        if ( tmp_assign_source_303 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_bitcount, tmp_assign_source_303 );
    }
    {
        PyObject *tmp_assign_source_304;
        PyObject *tmp_import_name_from_294;
        CHECK_OBJECT( tmp_import_from_7__module );
        tmp_import_name_from_294 = tmp_import_from_7__module;
        tmp_assign_source_304 = IMPORT_NAME( tmp_import_name_from_294, const_str_plain_numeral );
        if ( tmp_assign_source_304 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_numeral, tmp_assign_source_304 );
    }
    {
        PyObject *tmp_assign_source_305;
        PyObject *tmp_import_name_from_295;
        CHECK_OBJECT( tmp_import_from_7__module );
        tmp_import_name_from_295 = tmp_import_from_7__module;
        tmp_assign_source_305 = IMPORT_NAME( tmp_import_name_from_295, const_str_plain_bin_to_radix );
        if ( tmp_assign_source_305 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_bin_to_radix, tmp_assign_source_305 );
    }
    {
        PyObject *tmp_assign_source_306;
        PyObject *tmp_import_name_from_296;
        CHECK_OBJECT( tmp_import_from_7__module );
        tmp_import_name_from_296 = tmp_import_from_7__module;
        tmp_assign_source_306 = IMPORT_NAME( tmp_import_name_from_296, const_str_plain_isqrt );
        if ( tmp_assign_source_306 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_isqrt, tmp_assign_source_306 );
    }
    {
        PyObject *tmp_assign_source_307;
        PyObject *tmp_import_name_from_297;
        CHECK_OBJECT( tmp_import_from_7__module );
        tmp_import_name_from_297 = tmp_import_from_7__module;
        tmp_assign_source_307 = IMPORT_NAME( tmp_import_name_from_297, const_str_plain_isqrt_small );
        if ( tmp_assign_source_307 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_isqrt_small, tmp_assign_source_307 );
    }
    {
        PyObject *tmp_assign_source_308;
        PyObject *tmp_import_name_from_298;
        CHECK_OBJECT( tmp_import_from_7__module );
        tmp_import_name_from_298 = tmp_import_from_7__module;
        tmp_assign_source_308 = IMPORT_NAME( tmp_import_name_from_298, const_str_plain_isqrt_fast );
        if ( tmp_assign_source_308 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_isqrt_fast, tmp_assign_source_308 );
    }
    {
        PyObject *tmp_assign_source_309;
        PyObject *tmp_import_name_from_299;
        CHECK_OBJECT( tmp_import_from_7__module );
        tmp_import_name_from_299 = tmp_import_from_7__module;
        tmp_assign_source_309 = IMPORT_NAME( tmp_import_name_from_299, const_str_plain_sqrt_fixed );
        if ( tmp_assign_source_309 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_sqrt_fixed, tmp_assign_source_309 );
    }
    {
        PyObject *tmp_assign_source_310;
        PyObject *tmp_import_name_from_300;
        CHECK_OBJECT( tmp_import_from_7__module );
        tmp_import_name_from_300 = tmp_import_from_7__module;
        tmp_assign_source_310 = IMPORT_NAME( tmp_import_name_from_300, const_str_plain_sqrtrem );
        if ( tmp_assign_source_310 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_sqrtrem, tmp_assign_source_310 );
    }
    {
        PyObject *tmp_assign_source_311;
        PyObject *tmp_import_name_from_301;
        CHECK_OBJECT( tmp_import_from_7__module );
        tmp_import_name_from_301 = tmp_import_from_7__module;
        tmp_assign_source_311 = IMPORT_NAME( tmp_import_name_from_301, const_str_plain_ifib );
        if ( tmp_assign_source_311 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_ifib, tmp_assign_source_311 );
    }
    {
        PyObject *tmp_assign_source_312;
        PyObject *tmp_import_name_from_302;
        CHECK_OBJECT( tmp_import_from_7__module );
        tmp_import_name_from_302 = tmp_import_from_7__module;
        tmp_assign_source_312 = IMPORT_NAME( tmp_import_name_from_302, const_str_plain_ifac );
        if ( tmp_assign_source_312 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_ifac, tmp_assign_source_312 );
    }
    {
        PyObject *tmp_assign_source_313;
        PyObject *tmp_import_name_from_303;
        CHECK_OBJECT( tmp_import_from_7__module );
        tmp_import_name_from_303 = tmp_import_from_7__module;
        tmp_assign_source_313 = IMPORT_NAME( tmp_import_name_from_303, const_str_plain_list_primes );
        if ( tmp_assign_source_313 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_list_primes, tmp_assign_source_313 );
    }
    {
        PyObject *tmp_assign_source_314;
        PyObject *tmp_import_name_from_304;
        CHECK_OBJECT( tmp_import_from_7__module );
        tmp_import_name_from_304 = tmp_import_from_7__module;
        tmp_assign_source_314 = IMPORT_NAME( tmp_import_name_from_304, const_str_plain_isprime );
        if ( tmp_assign_source_314 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_isprime, tmp_assign_source_314 );
    }
    {
        PyObject *tmp_assign_source_315;
        PyObject *tmp_import_name_from_305;
        CHECK_OBJECT( tmp_import_from_7__module );
        tmp_import_name_from_305 = tmp_import_from_7__module;
        tmp_assign_source_315 = IMPORT_NAME( tmp_import_name_from_305, const_str_plain_moebius );
        if ( tmp_assign_source_315 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_moebius, tmp_assign_source_315 );
    }
    {
        PyObject *tmp_assign_source_316;
        PyObject *tmp_import_name_from_306;
        CHECK_OBJECT( tmp_import_from_7__module );
        tmp_import_name_from_306 = tmp_import_from_7__module;
        tmp_assign_source_316 = IMPORT_NAME( tmp_import_name_from_306, const_str_plain_gcd );
        if ( tmp_assign_source_316 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_gcd, tmp_assign_source_316 );
    }
    {
        PyObject *tmp_assign_source_317;
        PyObject *tmp_import_name_from_307;
        CHECK_OBJECT( tmp_import_from_7__module );
        tmp_import_name_from_307 = tmp_import_from_7__module;
        tmp_assign_source_317 = IMPORT_NAME( tmp_import_name_from_307, const_str_plain_eulernum );
        if ( tmp_assign_source_317 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_eulernum, tmp_assign_source_317 );
    }
    {
        PyObject *tmp_assign_source_318;
        PyObject *tmp_import_name_from_308;
        CHECK_OBJECT( tmp_import_from_7__module );
        tmp_import_name_from_308 = tmp_import_from_7__module;
        tmp_assign_source_318 = IMPORT_NAME( tmp_import_name_from_308, const_str_plain_stirling1 );
        if ( tmp_assign_source_318 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_stirling1, tmp_assign_source_318 );
    }
    {
        PyObject *tmp_assign_source_319;
        PyObject *tmp_import_name_from_309;
        CHECK_OBJECT( tmp_import_from_7__module );
        tmp_import_name_from_309 = tmp_import_from_7__module;
        tmp_assign_source_319 = IMPORT_NAME( tmp_import_name_from_309, const_str_plain_stirling2 );
        if ( tmp_assign_source_319 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_stirling2, tmp_assign_source_319 );
    }
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_7__module );
    Py_DECREF( tmp_import_from_7__module );
    tmp_import_from_7__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_7__module );
    Py_DECREF( tmp_import_from_7__module );
    tmp_import_from_7__module = NULL;

    {
        PyObject *tmp_assign_source_320;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_plain_backend;
        tmp_globals_name_8 = (PyObject *)moduledict_mpmath$libmp;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_71577fd033a8ef0e533e316922c4b52c_tuple;
        tmp_level_name_8 = const_int_pos_1;
        frame_e5315ebcdf69bf6225cd518715d8ac3a->m_frame.f_lineno = 76;
        tmp_assign_source_320 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_assign_source_320 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_8__module == NULL );
        tmp_import_from_8__module = tmp_assign_source_320;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_321;
        PyObject *tmp_import_name_from_310;
        CHECK_OBJECT( tmp_import_from_8__module );
        tmp_import_name_from_310 = tmp_import_from_8__module;
        tmp_assign_source_321 = IMPORT_NAME( tmp_import_name_from_310, const_str_plain_gmpy );
        if ( tmp_assign_source_321 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_gmpy, tmp_assign_source_321 );
    }
    {
        PyObject *tmp_assign_source_322;
        PyObject *tmp_import_name_from_311;
        CHECK_OBJECT( tmp_import_from_8__module );
        tmp_import_name_from_311 = tmp_import_from_8__module;
        tmp_assign_source_322 = IMPORT_NAME( tmp_import_name_from_311, const_str_plain_sage );
        if ( tmp_assign_source_322 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_sage, tmp_assign_source_322 );
    }
    {
        PyObject *tmp_assign_source_323;
        PyObject *tmp_import_name_from_312;
        CHECK_OBJECT( tmp_import_from_8__module );
        tmp_import_name_from_312 = tmp_import_from_8__module;
        tmp_assign_source_323 = IMPORT_NAME( tmp_import_name_from_312, const_str_plain_BACKEND );
        if ( tmp_assign_source_323 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_BACKEND, tmp_assign_source_323 );
    }
    {
        PyObject *tmp_assign_source_324;
        PyObject *tmp_import_name_from_313;
        CHECK_OBJECT( tmp_import_from_8__module );
        tmp_import_name_from_313 = tmp_import_from_8__module;
        tmp_assign_source_324 = IMPORT_NAME( tmp_import_name_from_313, const_str_plain_STRICT );
        if ( tmp_assign_source_324 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_STRICT, tmp_assign_source_324 );
    }
    {
        PyObject *tmp_assign_source_325;
        PyObject *tmp_import_name_from_314;
        CHECK_OBJECT( tmp_import_from_8__module );
        tmp_import_name_from_314 = tmp_import_from_8__module;
        tmp_assign_source_325 = IMPORT_NAME( tmp_import_name_from_314, const_str_plain_MPZ );
        if ( tmp_assign_source_325 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_MPZ, tmp_assign_source_325 );
    }
    {
        PyObject *tmp_assign_source_326;
        PyObject *tmp_import_name_from_315;
        CHECK_OBJECT( tmp_import_from_8__module );
        tmp_import_name_from_315 = tmp_import_from_8__module;
        tmp_assign_source_326 = IMPORT_NAME( tmp_import_name_from_315, const_str_plain_MPZ_TYPE );
        if ( tmp_assign_source_326 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_MPZ_TYPE, tmp_assign_source_326 );
    }
    {
        PyObject *tmp_assign_source_327;
        PyObject *tmp_import_name_from_316;
        CHECK_OBJECT( tmp_import_from_8__module );
        tmp_import_name_from_316 = tmp_import_from_8__module;
        tmp_assign_source_327 = IMPORT_NAME( tmp_import_name_from_316, const_str_plain_MPZ_ZERO );
        if ( tmp_assign_source_327 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_MPZ_ZERO, tmp_assign_source_327 );
    }
    {
        PyObject *tmp_assign_source_328;
        PyObject *tmp_import_name_from_317;
        CHECK_OBJECT( tmp_import_from_8__module );
        tmp_import_name_from_317 = tmp_import_from_8__module;
        tmp_assign_source_328 = IMPORT_NAME( tmp_import_name_from_317, const_str_plain_MPZ_ONE );
        if ( tmp_assign_source_328 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_MPZ_ONE, tmp_assign_source_328 );
    }
    {
        PyObject *tmp_assign_source_329;
        PyObject *tmp_import_name_from_318;
        CHECK_OBJECT( tmp_import_from_8__module );
        tmp_import_name_from_318 = tmp_import_from_8__module;
        tmp_assign_source_329 = IMPORT_NAME( tmp_import_name_from_318, const_str_plain_MPZ_TWO );
        if ( tmp_assign_source_329 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_MPZ_TWO, tmp_assign_source_329 );
    }
    {
        PyObject *tmp_assign_source_330;
        PyObject *tmp_import_name_from_319;
        CHECK_OBJECT( tmp_import_from_8__module );
        tmp_import_name_from_319 = tmp_import_from_8__module;
        tmp_assign_source_330 = IMPORT_NAME( tmp_import_name_from_319, const_str_plain_MPZ_THREE );
        if ( tmp_assign_source_330 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_MPZ_THREE, tmp_assign_source_330 );
    }
    {
        PyObject *tmp_assign_source_331;
        PyObject *tmp_import_name_from_320;
        CHECK_OBJECT( tmp_import_from_8__module );
        tmp_import_name_from_320 = tmp_import_from_8__module;
        tmp_assign_source_331 = IMPORT_NAME( tmp_import_name_from_320, const_str_plain_MPZ_FIVE );
        if ( tmp_assign_source_331 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_MPZ_FIVE, tmp_assign_source_331 );
    }
    {
        PyObject *tmp_assign_source_332;
        PyObject *tmp_import_name_from_321;
        CHECK_OBJECT( tmp_import_from_8__module );
        tmp_import_name_from_321 = tmp_import_from_8__module;
        tmp_assign_source_332 = IMPORT_NAME( tmp_import_name_from_321, const_str_plain_int_types );
        if ( tmp_assign_source_332 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_int_types, tmp_assign_source_332 );
    }
    {
        PyObject *tmp_assign_source_333;
        PyObject *tmp_import_name_from_322;
        CHECK_OBJECT( tmp_import_from_8__module );
        tmp_import_name_from_322 = tmp_import_from_8__module;
        tmp_assign_source_333 = IMPORT_NAME( tmp_import_name_from_322, const_str_plain_HASH_MODULUS );
        if ( tmp_assign_source_333 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_HASH_MODULUS, tmp_assign_source_333 );
    }
    {
        PyObject *tmp_assign_source_334;
        PyObject *tmp_import_name_from_323;
        CHECK_OBJECT( tmp_import_from_8__module );
        tmp_import_name_from_323 = tmp_import_from_8__module;
        tmp_assign_source_334 = IMPORT_NAME( tmp_import_name_from_323, const_str_plain_HASH_BITS );
        if ( tmp_assign_source_334 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain_HASH_BITS, tmp_assign_source_334 );
    }
    goto try_end_8;
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_8__module );
    Py_DECREF( tmp_import_from_8__module );
    tmp_import_from_8__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e5315ebcdf69bf6225cd518715d8ac3a );
#endif
    popFrameStack();

    assertFrameObject( frame_e5315ebcdf69bf6225cd518715d8ac3a );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e5315ebcdf69bf6225cd518715d8ac3a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e5315ebcdf69bf6225cd518715d8ac3a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e5315ebcdf69bf6225cd518715d8ac3a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e5315ebcdf69bf6225cd518715d8ac3a, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_8__module );
    Py_DECREF( tmp_import_from_8__module );
    tmp_import_from_8__module = NULL;


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 1 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_mpmath$libmp );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
