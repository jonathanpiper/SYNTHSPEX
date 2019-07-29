/* Generated code for Python module 'mpmath'
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

/* The "_module_mpmath" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_mpmath;
PyDictObject *moduledict_mpmath;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_5c38ad7369b75f02738f6999a2f7fd58;
extern PyObject *const_str_plain_eye;
extern PyObject *const_str_plain_nprint;
extern PyObject *const_str_plain_nan;
extern PyObject *const_str_plain_primepi2;
extern PyObject *const_str_plain_fmul;
extern PyObject *const_str_plain_airybi;
extern PyObject *const_str_plain_invlaptalbot;
extern PyObject *const_str_plain_qfac;
extern PyObject *const_str_plain_degrees;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_plain_eps;
extern PyObject *const_str_plain_plot;
extern PyObject *const_str_plain_testdir;
extern PyObject *const_str_plain_round;
extern PyObject *const_str_plain_inverse;
extern PyObject *const_str_plain_scorerhi;
extern PyObject *const_str_plain_mpmath;
extern PyObject *const_str_plain_expm1;
extern PyObject *const_str_plain___path__;
static PyObject *const_tuple_str_plain_MPContext_tuple;
extern PyObject *const_str_plain_inf;
extern PyObject *const_str_plain_npdf;
extern PyObject *const_str_plain_betainc;
extern PyObject *const_str_plain_diffs;
extern PyObject *const_str_plain_pslq;
static PyObject *const_str_plain_runtests;
extern PyObject *const_str_plain_abspath;
extern PyObject *const_str_plain_eighe;
extern PyObject *const_str_plain_argv;
static PyObject *const_tuple_str_plain_monitor_str_plain_timing_tuple;
extern PyObject *const_str_plain_multiplicity;
extern PyObject *const_str_plain_fprod;
extern PyObject *const_str_plain_write;
extern PyObject *const_str_plain_twinprime;
extern PyObject *const_str_plain_diffun;
extern PyObject *const_str_plain_elliprc;
extern PyObject *const_str_plain_sign;
extern PyObject *const_str_plain_besseljzero;
extern PyObject *const_str_plain_hurwitz;
extern PyObject *const_str_plain_isnan;
extern PyObject *const_str_plain_bei;
extern PyObject *const_str_plain_rect;
extern PyObject *const_str_plain_chebyfit;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_nstr;
extern PyObject *const_str_plain_riemannr;
extern PyObject *const_str_plain_sec;
extern PyObject *const_str_plain_workdps;
extern PyObject *const_str_plain_qr_solve;
extern PyObject *const_str_plain_legendre;
extern PyObject *const_str_plain_hypot;
extern PyObject *const_str_plain_jacobian;
extern PyObject *const_str_plain_gammaprod;
extern PyObject *const_str_plain_isnormal;
extern PyObject *const_str_plain_isint;
extern PyObject *const_str_plain_ellippi;
extern PyObject *const_str_plain_isinf;
extern PyObject *const_str_plain_glaisher;
extern PyObject *const_str_plain_elliprg;
extern PyObject *const_str_plain_schur;
extern PyObject *const_str_plain_hankel2;
extern PyObject *const_str_plain_hyp2f0;
extern PyObject *const_str_plain_hyp2f1;
extern PyObject *const_str_plain_hyp2f2;
extern PyObject *const_str_plain_hyp2f3;
extern PyObject *const_str_plain_hankel1;
extern PyObject *const_str_plain_elliprd;
extern PyObject *const_str_plain_sqrt;
extern PyObject *const_str_plain_appellf4;
extern PyObject *const_str_plain_appellf3;
extern PyObject *const_str_plain_appellf2;
extern PyObject *const_str_plain_appellf1;
extern PyObject *const_str_plain_apery;
extern PyObject *const_str_plain_zeta;
extern PyObject *const_str_plain_sincpi;
extern PyObject *const_str_plain_barnesg;
extern PyObject *const_str_plain_splot;
extern PyObject *const_str_plain_bessely;
extern PyObject *const_str_plain_sinc;
extern PyObject *const_str_plain_sinh;
extern PyObject *const_str_plain_sinm;
extern PyObject *const_str_plain_besseli;
extern PyObject *const_str_plain_besselj;
extern PyObject *const_str_plain_besselk;
extern PyObject *const_str_plain_extraprec;
extern PyObject *const_str_plain_verbose;
extern PyObject *const_str_plain_importdir;
extern PyObject *const_str_plain_det;
extern PyObject *const_str_plain_fdot;
extern PyObject *const_str_plain_cot;
extern PyObject *const_str_plain_cos;
extern PyObject *const_str_plain_extradps;
extern PyObject *const_str_plain_gegenbauer;
extern PyObject *const_str_plain_stirling1;
extern PyObject *const_str_plain_stirling2;
extern PyObject *const_str_plain_hilbert;
extern PyObject *const_str_plain_cos_sin;
extern PyObject *const_str_plain_laguerre;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_log1p;
extern PyObject *const_str_plain_power;
extern PyObject *const_str_plain_absmin;
extern PyObject *const_str_plain_differint;
extern PyObject *const_str_plain_expjpi;
extern PyObject *const_str_plain_expj;
extern PyObject *const_str_plain_mfrom;
extern PyObject *const_str_plain_polar;
extern PyObject *const_str_plain_backlunds;
extern PyObject *const_str_plain_sech;
extern PyObject *const_str_plain_log10;
extern PyObject *const_str_plain_randmatrix;
extern PyObject *const_tuple_str_chr_45_tuple;
extern PyObject *const_str_plain_chebyt;
extern PyObject *const_str_plain__mpf_module;
extern PyObject *const_str_plain_coulombf;
extern PyObject *const_str_plain_atan;
extern PyObject *const_str_plain_gauss_quadrature;
extern PyObject *const_str_plain_isfinite;
extern PyObject *const_str_plain_t2;
static PyObject *const_str_plain_run_docstring_examples;
extern PyObject *const_str_plain_chop;
extern PyObject *const_str_digest_e399ba4554180f37de594a6743234f17;
static PyObject *const_tuple_str_plain_FPContext_tuple;
static PyObject *const_str_plain_usertools;
extern PyObject *const_str_plain_residual;
extern PyObject *const_str_plain_csch;
extern PyObject *const_str_plain_nint_distance;
extern PyObject *const_str_plain_unitroots;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_str_plain_asech;
extern PyObject *const_str_plain_asec;
extern PyObject *const_str_plain_airyaizero;
extern PyObject *const_str_plain_rf;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain_limit;
extern PyObject *const_str_plain_cond;
extern PyObject *const_str_plain_cholesky;
extern PyObject *const_str_plain_conj;
static PyObject *const_tuple_str_plain_getsourcefile_tuple;
extern PyObject *const_str_plain_hyper2d;
extern PyObject *const_str_plain_ber;
extern PyObject *const_str_plain_webere;
extern PyObject *const_str_plain_hermite;
extern PyObject *const_str_plain_mag;
extern PyObject *const_str_plain_besselyzero;
extern PyObject *const_str_plain_hyp1f2;
extern PyObject *const_str_plain_hyp1f1;
extern PyObject *const_str_plain_findpoly;
extern PyObject *const_str_plain_expm;
extern PyObject *const_str_plain___version__;
extern PyObject *const_str_plain_acsch;
extern PyObject *const_str_plain_odefun;
extern PyObject *const_str_plain_memoize;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_primezeta;
extern PyObject *const_str_plain_clsin;
extern PyObject *const_str_plain_acos;
extern PyObject *const_str_plain_acot;
extern PyObject *const_str_plain_arg;
extern PyObject *const_str_plain_workprec;
extern PyObject *const_str_plain_asinh;
static PyObject *const_tuple_c91ec0628b9a363a9aae3627f8f7622e_tuple;
extern PyObject *const_str_plain_qbarfrom;
extern PyObject *const_str_plain_altzeta;
extern PyObject *const_str_plain_beta;
static PyObject *const_str_digest_2f034170825bb6c984aad3fc0b9b467a;
static PyObject *const_tuple_e816fc61eb1df1cf9ba6173200ce0245_tuple;
extern PyObject *const_str_chr_45;
static PyObject *const_tuple_str_plain_ctx_mp_tuple;
extern PyObject *const_str_plain_atanh;
extern PyObject *const_str_plain_chebyu;
extern PyObject *const_str_plain_shi;
extern PyObject *const_str_plain_khinchin;
static PyObject *const_str_digest_77cbe1c98d1133a02fdcd6032b35ecc0;
extern PyObject *const_str_plain_qr;
extern PyObject *const_str_plain_qp;
extern PyObject *const_str_plain_hypercomb;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_linspace;
extern PyObject *const_str_plain_atan2;
extern PyObject *const_str_plain_invlapstehfest;
extern PyObject *const_str_plain_primepi;
extern PyObject *const_str_plain_diffs_exp;
extern PyObject *const_str_plain_chi;
extern PyObject *const_str_plain_hyper;
extern PyObject *const_str_plain_fabs;
extern PyObject *const_str_plain_nsum;
extern PyObject *const_str_plain_polyval;
extern PyObject *const_str_plain_FPContext;
extern PyObject *const_str_plain_nthroot;
extern PyObject *const_str_digest_409868245cb421b4cd0ecede43982749;
extern PyObject *const_str_plain_ellipf;
extern PyObject *const_str_plain_ellipe;
extern PyObject *const_str_plain_ceil;
extern PyObject *const_str_plain_ellipk;
extern PyObject *const_str_plain_log;
extern PyObject *const_str_plain_ci;
extern PyObject *const_str_plain_gammainc;
extern PyObject *const_str_plain_fmod;
extern PyObject *const_str_plain_eulerpoly;
extern PyObject *const_str_plain_bernpoly;
extern PyObject *const_str_plain_mpmathify;
extern PyObject *const_str_plain_kleinj;
extern PyObject *const_str_plain_tanh;
extern PyObject *const_str_plain_arange;
extern PyObject *const_str_plain_absmax;
extern PyObject *const_str_plain_angerj;
extern PyObject *const_str_plain_diag;
extern PyObject *const_str_plain_tests;
extern PyObject *const_str_plain_sumap;
extern PyObject *const_str_plain_findroot;
extern PyObject *const_str_plain_siegeltheta;
extern PyObject *const_str_plain_globs;
extern PyObject *const_str_plain_phi;
extern PyObject *const_str_plain_cospi;
extern PyObject *const_str_plain__fp;
extern PyObject *const_str_plain_j1;
extern PyObject *const_str_plain_j0;
extern PyObject *const_str_plain_mpc;
extern PyObject *const_str_plain_mpf;
extern PyObject *const_str_plain_factorial;
static PyObject *const_str_plain_mpi;
extern PyObject *const_str_plain_catalan;
extern PyObject *const_str_plain_testit;
extern PyObject *const_str_plain_kei;
extern PyObject *const_str_plain_mp;
extern PyObject *const_str_plain_ker;
extern PyObject *const_str_plain_eig;
extern PyObject *const_str_plain_qfrom;
extern PyObject *const_str_plain_dirichlet;
extern PyObject *const_str_plain_fresnels;
extern PyObject *const_str_plain_siegelz;
extern PyObject *const_str_plain_t1;
extern PyObject *const_str_plain_fresnelc;
extern PyObject *const_str_plain_expint;
extern PyObject *const_str_plain_ncdf;
extern PyObject *const_str_plain_polyexp;
extern PyObject *const_str_plain_timeit;
extern PyObject *const_str_plain_quadts;
extern PyObject *const_str_plain_rand;
extern PyObject *const_str_plain_sqrtm;
extern PyObject *const_str_plain_airybizero;
extern PyObject *const_str_plain_default_timer;
extern PyObject *const_str_plain_timing;
extern PyObject *const_str_plain_lommels1;
extern PyObject *const_str_plain_hyp0f1;
extern PyObject *const_str_plain_lommels2;
extern PyObject *const_str_plain_eig_sort;
extern PyObject *const_str_plain_erf;
extern PyObject *const_str_plain_unitvector;
extern PyObject *const_str_plain_lu_solve;
extern PyObject *const_str_plain_sumem;
extern PyObject *const_str_plain_ldexp;
extern PyObject *const_str_plain_cbrt;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_legenp;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_invlapdehoog;
extern PyObject *const_str_plain_polyroots;
extern PyObject *const_str_plain_fourier;
extern PyObject *const_str_plain_cohen_alt;
static PyObject *const_str_digest_68e779b074842129991baeb4e329e7d3;
extern PyObject *const_str_plain_ellipfun;
extern PyObject *const_str_plain_lambertw;
extern PyObject *const_str_plain_logm;
extern PyObject *const_str_plain_fac;
extern PyObject *const_str_plain_legenq;
extern PyObject *const_str_plain_eigh;
extern PyObject *const_str_plain_grampoint;
extern PyObject *const_str_plain_lerchphi;
extern PyObject *const_str_plain_doctests;
extern PyObject *const_str_plain_almosteq;
extern PyObject *const_str_plain_matrix;
extern PyObject *const_str_plain_coth;
extern PyObject *const_str_plain__mp;
extern PyObject *const_str_plain_im;
static PyObject *const_str_plain_doctest;
static PyObject *const_str_plain_iv;
extern PyObject *const_str_plain_degree;
extern PyObject *const_str_plain_harmonic;
extern PyObject *const_str_plain_levin;
extern PyObject *const_str_plain_ff;
extern PyObject *const_str_plain_convert;
extern PyObject *const_str_plain_monitor;
extern PyObject *const_str_plain_extend;
extern PyObject *const_str_plain_asin;
extern PyObject *const_str_plain_fp;
extern PyObject *const_str_plain_powm;
extern PyObject *const_str_plain_bernfrac;
extern PyObject *const_str_plain_struvel;
extern PyObject *const_str_plain_stdout;
extern PyObject *const_str_plain_struveh;
extern PyObject *const_str_plain_fac2;
extern PyObject *const_str_plain_zetazero;
extern PyObject *const_str_plain_elliprj;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_j;
extern PyObject *const_str_plain_elliprf;
extern PyObject *const_str_plain_e;
extern PyObject *const_str_plain_mertens;
extern PyObject *const_str_plain_whitm;
extern PyObject *const_str_plain_diff;
extern PyObject *const_str_plain_eigsy;
extern PyObject *const_str_plain_floor;
extern PyObject *const_str_plain_jacobi;
extern PyObject *const_str_plain_taylor;
extern PyObject *const_str_plain_cholesky_solve;
extern PyObject *const_str_plain_secondzeta;
extern PyObject *const_str_plain_MPIntervalContext;
extern PyObject *const_str_plain_flush;
extern PyObject *const_str_plain_clock;
extern PyObject *const_str_plain_acsc;
static PyObject *const_str_plain_ctx_iv;
static PyObject *const_str_digest_5cffb50e847fa2fa292443490e78c71b;
extern PyObject *const_str_plain_invertlaplace;
extern PyObject *const_str_plain_eulernum;
extern PyObject *const_str_plain_svd_r;
extern PyObject *const_str_plain_coulombc;
extern PyObject *const_str_plain__mpi;
extern PyObject *const_str_plain_coulombg;
extern PyObject *const_str_plain_svd_c;
extern PyObject *const_str_plain_identify;
extern PyObject *const_str_plain_richardson;
extern PyObject *const_str_plain_cospi_sinpi;
extern PyObject *const_str_plain_fibonacci;
extern PyObject *const_str_plain_cyclotomic;
extern PyObject *const_str_plain_swap_row;
extern PyObject *const_str_plain_sin;
extern PyObject *const_str_plain_superfac;
extern PyObject *const_str_plain_binomial;
extern PyObject *const_str_plain_acosh;
static PyObject *const_str_plain__ctx_mp;
extern PyObject *const_str_plain_whitw;
extern PyObject *const_str_plain_digamma;
extern PyObject *const_str_plain_pi;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_fraction;
extern PyObject *const_str_plain_make_mpf;
extern PyObject *const_str_plain_make_mpc;
extern PyObject *const_str_plain_kfrom;
extern PyObject *const_str_plain_cplot;
extern PyObject *const_str_plain_loggamma;
extern PyObject *const_str_plain_ei;
extern PyObject *const_str_plain_ln2;
extern PyObject *const_str_plain_polylog;
extern PyObject *const_tuple_str_plain_default_timer_tuple;
extern PyObject *const_str_plain__iv;
extern PyObject *const_str_plain_shanks;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_spherharm;
extern PyObject *const_str_plain_scorergi;
extern PyObject *const_str_plain_ones;
extern PyObject *const_str_plain_svd;
static PyObject *const_str_plain_sn;
extern PyObject *const_str_plain_ninf;
static PyObject *const_list_str_digest_5c38ad7369b75f02738f6999a2f7fd58_list;
extern PyObject *const_str_plain_e1;
extern PyObject *const_str_plain_jtheta;
extern PyObject *const_str_plain_frexp;
extern PyObject *const_str_plain_exp;
extern PyObject *const_str_plain_difference;
extern PyObject *const_str_plain_nint;
extern PyObject *const_str_plain_mnorm;
extern PyObject *const_str_plain_qgamma;
extern PyObject *const_str_plain_fib;
extern PyObject *const_str_plain_acoth;
extern PyObject *const_str_plain_psi;
extern PyObject *const_str_plain_quadgl;
extern PyObject *const_str_plain_csc;
extern PyObject *const_str_plain_pcfd;
static PyObject *const_str_plain_ctx_fp;
extern PyObject *const_str_plain_hyperu;
extern PyObject *const_str_plain_tan;
extern PyObject *const_str_plain_qhyper;
extern PyObject *const_str_plain_pcfv;
extern PyObject *const_str_plain_pcfw;
extern PyObject *const_str_plain_maxcalls;
extern PyObject *const_str_plain_pcfu;
extern PyObject *const_str_plain_norm;
extern PyObject *const_str_plain_frac;
extern PyObject *const_str_plain_autoprec;
extern PyObject *const_str_plain_nzeros;
static PyObject *const_str_digest_12b97a31591c9d83854270dd07619af3;
extern PyObject *const_str_plain_li;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain_bihyper;
extern PyObject *const_str_plain_ln;
extern PyObject *const_str_plain_hessenberg;
extern PyObject *const_str_plain_lu;
extern PyObject *const_str_plain_clcos;
extern PyObject *const_str_plain_mangoldt;
extern PyObject *const_str_plain_hyp3f2;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_sinpi;
extern PyObject *const_str_plain_enumerate;
extern PyObject *const_str_plain_euler;
extern PyObject *const_str_plain_fsum;
extern PyObject *const_str_plain_fsub;
extern PyObject *const_str_plain_rgamma;
extern PyObject *const_str_plain_diffs_prod;
extern PyObject *const_str_plain_filter;
extern PyObject *const_str_plain_fourierval;
static PyObject *const_str_plain_pat;
extern PyObject *const_str_plain_airyai;
extern PyObject *const_str_plain_fneg;
static PyObject *const_str_plain_ctx_mp;
extern PyObject *const_str_plain_obj;
extern PyObject *const_str_plain_erfinv;
extern PyObject *const_str_space;
extern PyObject *const_str_plain_inspect;
extern PyObject *const_str_plain_erfi;
extern PyObject *const_str_plain_agm;
extern PyObject *const_str_plain_erfc;
extern PyObject *const_str_plain_phase;
static PyObject *const_tuple_str_plain_runtests_tuple;
extern PyObject *const_str_plain_radians;
extern PyObject *const_str_plain_polygamma;
extern PyObject *const_str_plain_MPContext;
static PyObject *const_tuple_str_plain_MPIntervalContext_tuple;
extern PyObject *const_str_plain_si;
extern PyObject *const_str_plain_pade;
extern PyObject *const_str_plain_ln10;
extern PyObject *const_str_plain_stieltjes;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_quadosc;
extern PyObject *const_str_plain_meijerg;
static PyObject *const_str_digest_9e201a54a40776fc73764baea405bf58;
extern PyObject *const_str_plain_fadd;
extern PyObject *const_str_plain_bernoulli;
extern PyObject *const_str_plain_cosh;
extern PyObject *const_str_plain_cosm;
extern PyObject *const_str_plain_fdiv;
extern PyObject *const_str_plain_root;
extern PyObject *const_str_plain_powm1;
extern PyObject *const_str_plain_quad;
extern PyObject *const_str_plain_getsourcefile;
extern PyObject *const_str_plain_nprod;
extern PyObject *const_str_plain_gamma;
extern PyObject *const_str_plain_hyperfac;
extern PyObject *const_str_plain_bell;
extern PyObject *const_str_plain_taufrom;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_5c38ad7369b75f02738f6999a2f7fd58 = UNSTREAM_STRING( &constant_bin[ 48644 ], 45, 0 );
    const_tuple_str_plain_MPContext_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_MPContext_tuple, 0, const_str_plain_MPContext ); Py_INCREF( const_str_plain_MPContext );
    const_str_plain_runtests = UNSTREAM_STRING( &constant_bin[ 48689 ], 8, 1 );
    const_tuple_str_plain_monitor_str_plain_timing_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_monitor_str_plain_timing_tuple, 0, const_str_plain_monitor ); Py_INCREF( const_str_plain_monitor );
    PyTuple_SET_ITEM( const_tuple_str_plain_monitor_str_plain_timing_tuple, 1, const_str_plain_timing ); Py_INCREF( const_str_plain_timing );
    const_str_plain_run_docstring_examples = UNSTREAM_STRING( &constant_bin[ 48697 ], 22, 1 );
    const_tuple_str_plain_FPContext_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_FPContext_tuple, 0, const_str_plain_FPContext ); Py_INCREF( const_str_plain_FPContext );
    const_str_plain_usertools = UNSTREAM_STRING( &constant_bin[ 48719 ], 9, 1 );
    const_tuple_str_plain_getsourcefile_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_getsourcefile_tuple, 0, const_str_plain_getsourcefile ); Py_INCREF( const_str_plain_getsourcefile );
    const_tuple_c91ec0628b9a363a9aae3627f8f7622e_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_c91ec0628b9a363a9aae3627f8f7622e_tuple, 0, const_str_plain_filter ); Py_INCREF( const_str_plain_filter );
    PyTuple_SET_ITEM( const_tuple_c91ec0628b9a363a9aae3627f8f7622e_tuple, 1, const_str_plain_sys ); Py_INCREF( const_str_plain_sys );
    PyTuple_SET_ITEM( const_tuple_c91ec0628b9a363a9aae3627f8f7622e_tuple, 2, const_str_plain_obj ); Py_INCREF( const_str_plain_obj );
    PyTuple_SET_ITEM( const_tuple_c91ec0628b9a363a9aae3627f8f7622e_tuple, 3, const_str_plain_clock ); Py_INCREF( const_str_plain_clock );
    PyTuple_SET_ITEM( const_tuple_c91ec0628b9a363a9aae3627f8f7622e_tuple, 4, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_c91ec0628b9a363a9aae3627f8f7622e_tuple, 5, const_str_plain_t2 ); Py_INCREF( const_str_plain_t2 );
    PyTuple_SET_ITEM( const_tuple_c91ec0628b9a363a9aae3627f8f7622e_tuple, 6, const_str_plain_t1 ); Py_INCREF( const_str_plain_t1 );
    const_str_plain_sn = UNSTREAM_STRING( &constant_bin[ 46601 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_c91ec0628b9a363a9aae3627f8f7622e_tuple, 7, const_str_plain_sn ); Py_INCREF( const_str_plain_sn );
    PyTuple_SET_ITEM( const_tuple_c91ec0628b9a363a9aae3627f8f7622e_tuple, 8, const_str_plain_arg ); Py_INCREF( const_str_plain_arg );
    const_str_plain_pat = UNSTREAM_STRING( &constant_bin[ 16897 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_c91ec0628b9a363a9aae3627f8f7622e_tuple, 9, const_str_plain_pat ); Py_INCREF( const_str_plain_pat );
    PyTuple_SET_ITEM( const_tuple_c91ec0628b9a363a9aae3627f8f7622e_tuple, 10, const_str_plain_globs ); Py_INCREF( const_str_plain_globs );
    const_str_plain_doctest = UNSTREAM_STRING( &constant_bin[ 48728 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_c91ec0628b9a363a9aae3627f8f7622e_tuple, 11, const_str_plain_doctest ); Py_INCREF( const_str_plain_doctest );
    const_str_digest_2f034170825bb6c984aad3fc0b9b467a = UNSTREAM_STRING( &constant_bin[ 48735 ], 5, 0 );
    const_tuple_e816fc61eb1df1cf9ba6173200ce0245_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_e816fc61eb1df1cf9ba6173200ce0245_tuple, 0, const_str_plain_getsourcefile ); Py_INCREF( const_str_plain_getsourcefile );
    PyTuple_SET_ITEM( const_tuple_e816fc61eb1df1cf9ba6173200ce0245_tuple, 1, const_str_plain_tests ); Py_INCREF( const_str_plain_tests );
    PyTuple_SET_ITEM( const_tuple_e816fc61eb1df1cf9ba6173200ce0245_tuple, 2, const_str_plain_os ); Py_INCREF( const_str_plain_os );
    PyTuple_SET_ITEM( const_tuple_e816fc61eb1df1cf9ba6173200ce0245_tuple, 3, const_str_plain_importdir ); Py_INCREF( const_str_plain_importdir );
    PyTuple_SET_ITEM( const_tuple_e816fc61eb1df1cf9ba6173200ce0245_tuple, 4, const_str_plain_testdir ); Py_INCREF( const_str_plain_testdir );
    const_tuple_str_plain_ctx_mp_tuple = PyTuple_New( 1 );
    const_str_plain_ctx_mp = UNSTREAM_STRING( &constant_bin[ 48740 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ctx_mp_tuple, 0, const_str_plain_ctx_mp ); Py_INCREF( const_str_plain_ctx_mp );
    const_str_digest_77cbe1c98d1133a02fdcd6032b35ecc0 = UNSTREAM_STRING( &constant_bin[ 48746 ], 48, 0 );
    const_str_plain_mpi = UNSTREAM_STRING( &constant_bin[ 48794 ], 3, 1 );
    const_str_digest_68e779b074842129991baeb4e329e7d3 = UNSTREAM_STRING( &constant_bin[ 41580 ], 2, 0 );
    const_str_plain_iv = UNSTREAM_STRING( &constant_bin[ 632 ], 2, 1 );
    const_str_plain_ctx_iv = UNSTREAM_STRING( &constant_bin[ 48797 ], 6, 1 );
    const_str_digest_5cffb50e847fa2fa292443490e78c71b = UNSTREAM_STRING( &constant_bin[ 48803 ], 15, 0 );
    const_str_plain__ctx_mp = UNSTREAM_STRING( &constant_bin[ 48818 ], 7, 1 );
    const_list_str_digest_5c38ad7369b75f02738f6999a2f7fd58_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_5c38ad7369b75f02738f6999a2f7fd58_list, 0, const_str_digest_5c38ad7369b75f02738f6999a2f7fd58 ); Py_INCREF( const_str_digest_5c38ad7369b75f02738f6999a2f7fd58 );
    const_str_plain_ctx_fp = UNSTREAM_STRING( &constant_bin[ 48825 ], 6, 1 );
    const_str_digest_12b97a31591c9d83854270dd07619af3 = UNSTREAM_STRING( &constant_bin[ 48831 ], 57, 0 );
    const_tuple_str_plain_runtests_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_runtests_tuple, 0, const_str_plain_runtests ); Py_INCREF( const_str_plain_runtests );
    const_tuple_str_plain_MPIntervalContext_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_MPIntervalContext_tuple, 0, const_str_plain_MPIntervalContext ); Py_INCREF( const_str_plain_MPIntervalContext );
    const_str_digest_9e201a54a40776fc73764baea405bf58 = UNSTREAM_STRING( &constant_bin[ 48888 ], 6, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_mpmath( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_b14a549a5c2bf3fd958201a594a85626;
static PyCodeObject *codeobj_56c1bbe27fad87dd513b20440c36c1d6;
static PyCodeObject *codeobj_b01aaa7d2ba5fcf86b10f06db107690f;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_12b97a31591c9d83854270dd07619af3;
    codeobj_b14a549a5c2bf3fd958201a594a85626 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_5cffb50e847fa2fa292443490e78c71b, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_56c1bbe27fad87dd513b20440c36c1d6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_doctests, 440, const_tuple_c91ec0628b9a363a9aae3627f8f7622e_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b01aaa7d2ba5fcf86b10f06db107690f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_runtests, 429, const_tuple_e816fc61eb1df1cf9ba6173200ce0245_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_mpmath$$$function_1_runtests(  );


static PyObject *MAKE_FUNCTION_mpmath$$$function_2_doctests( PyObject *defaults );


// The module function definitions.
static PyObject *impl_mpmath$$$function_1_runtests( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_getsourcefile = NULL;
    PyObject *var_tests = NULL;
    PyObject *var_os = NULL;
    PyObject *var_importdir = NULL;
    PyObject *var_testdir = NULL;
    struct Nuitka_FrameObject *frame_b01aaa7d2ba5fcf86b10f06db107690f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b01aaa7d2ba5fcf86b10f06db107690f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b01aaa7d2ba5fcf86b10f06db107690f, codeobj_b01aaa7d2ba5fcf86b10f06db107690f, module_mpmath, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b01aaa7d2ba5fcf86b10f06db107690f = cache_frame_b01aaa7d2ba5fcf86b10f06db107690f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b01aaa7d2ba5fcf86b10f06db107690f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b01aaa7d2ba5fcf86b10f06db107690f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_digest_e399ba4554180f37de594a6743234f17;
        tmp_globals_name_1 = (PyObject *)moduledict_mpmath;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        frame_b01aaa7d2ba5fcf86b10f06db107690f->m_frame.f_lineno = 433;
        tmp_assign_source_1 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 433;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_os == NULL );
        var_os = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        tmp_name_name_2 = const_str_plain_inspect;
        tmp_globals_name_2 = (PyObject *)moduledict_mpmath;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_getsourcefile_tuple;
        frame_b01aaa7d2ba5fcf86b10f06db107690f->m_frame.f_lineno = 434;
        tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 434;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_getsourcefile );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 434;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_getsourcefile == NULL );
        var_getsourcefile = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_1;
        tmp_name_name_3 = const_str_plain_tests;
        tmp_globals_name_3 = (PyObject *)moduledict_mpmath;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_runtests_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_b01aaa7d2ba5fcf86b10f06db107690f->m_frame.f_lineno = 435;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_1 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 435;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_runtests );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 435;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_tests == NULL );
        var_tests = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( var_os );
        tmp_source_name_2 = var_os;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_path );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 436;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dirname );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 436;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_os );
        tmp_source_name_4 = var_os;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_path );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 436;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_abspath );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 436;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_getsourcefile );
        tmp_called_name_3 = var_getsourcefile;
        CHECK_OBJECT( var_tests );
        tmp_args_element_name_3 = var_tests;
        frame_b01aaa7d2ba5fcf86b10f06db107690f->m_frame.f_lineno = 436;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 436;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_b01aaa7d2ba5fcf86b10f06db107690f->m_frame.f_lineno = 436;
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
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 436;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_b01aaa7d2ba5fcf86b10f06db107690f->m_frame.f_lineno = 436;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 436;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_testdir == NULL );
        var_testdir = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( var_os );
        tmp_source_name_6 = var_os;
        tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_path );
        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 437;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_abspath );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 437;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_testdir );
        tmp_left_name_1 = var_testdir;
        tmp_right_name_1 = const_str_digest_9e201a54a40776fc73764baea405bf58;
        tmp_args_element_name_4 = BINARY_OPERATION_ADD_OBJECT_STR( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 437;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_b01aaa7d2ba5fcf86b10f06db107690f->m_frame.f_lineno = 437;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 437;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_importdir == NULL );
        var_importdir = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( var_tests );
        tmp_called_instance_1 = var_tests;
        CHECK_OBJECT( var_importdir );
        tmp_args_element_name_5 = var_importdir;
        CHECK_OBJECT( var_testdir );
        tmp_args_element_name_6 = var_testdir;
        frame_b01aaa7d2ba5fcf86b10f06db107690f->m_frame.f_lineno = 438;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_testit, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 438;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b01aaa7d2ba5fcf86b10f06db107690f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b01aaa7d2ba5fcf86b10f06db107690f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b01aaa7d2ba5fcf86b10f06db107690f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b01aaa7d2ba5fcf86b10f06db107690f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b01aaa7d2ba5fcf86b10f06db107690f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b01aaa7d2ba5fcf86b10f06db107690f,
        type_description_1,
        var_getsourcefile,
        var_tests,
        var_os,
        var_importdir,
        var_testdir
    );


    // Release cached frame.
    if ( frame_b01aaa7d2ba5fcf86b10f06db107690f == cache_frame_b01aaa7d2ba5fcf86b10f06db107690f )
    {
        Py_DECREF( frame_b01aaa7d2ba5fcf86b10f06db107690f );
    }
    cache_frame_b01aaa7d2ba5fcf86b10f06db107690f = NULL;

    assertFrameObject( frame_b01aaa7d2ba5fcf86b10f06db107690f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$$$function_1_runtests );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_getsourcefile );
    Py_DECREF( var_getsourcefile );
    var_getsourcefile = NULL;

    CHECK_OBJECT( (PyObject *)var_tests );
    Py_DECREF( var_tests );
    var_tests = NULL;

    CHECK_OBJECT( (PyObject *)var_os );
    Py_DECREF( var_os );
    var_os = NULL;

    CHECK_OBJECT( (PyObject *)var_importdir );
    Py_DECREF( var_importdir );
    var_importdir = NULL;

    CHECK_OBJECT( (PyObject *)var_testdir );
    Py_DECREF( var_testdir );
    var_testdir = NULL;

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

    Py_XDECREF( var_getsourcefile );
    var_getsourcefile = NULL;

    Py_XDECREF( var_tests );
    var_tests = NULL;

    Py_XDECREF( var_os );
    var_os = NULL;

    Py_XDECREF( var_importdir );
    var_importdir = NULL;

    Py_XDECREF( var_testdir );
    var_testdir = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$$$function_1_runtests );
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


static PyObject *impl_mpmath$$$function_2_doctests( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filter = python_pars[ 0 ];
    PyObject *var_sys = NULL;
    PyObject *var_obj = NULL;
    PyObject *var_clock = NULL;
    PyObject *var_i = NULL;
    PyObject *var_t2 = NULL;
    PyObject *var_t1 = NULL;
    PyObject *var_sn = NULL;
    PyObject *var_arg = NULL;
    PyObject *var_pat = NULL;
    PyObject *var_globs = NULL;
    PyObject *var_doctest = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    PyObject *tmp_list_contraction_2__$0 = NULL;
    PyObject *tmp_list_contraction_2__contraction_result = NULL;
    PyObject *tmp_list_contraction_2__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_56c1bbe27fad87dd513b20440c36c1d6;
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
    PyObject *tmp_print_value;
    bool tmp_result;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_56c1bbe27fad87dd513b20440c36c1d6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_plain_sys;
        tmp_globals_name_1 = (PyObject *)moduledict_mpmath;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_assign_source_1 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        assert( !(tmp_assign_source_1 == NULL) );
        assert( var_sys == NULL );
        var_sys = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_56c1bbe27fad87dd513b20440c36c1d6, codeobj_56c1bbe27fad87dd513b20440c36c1d6, module_mpmath, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_56c1bbe27fad87dd513b20440c36c1d6 = cache_frame_56c1bbe27fad87dd513b20440c36c1d6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_56c1bbe27fad87dd513b20440c36c1d6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_56c1bbe27fad87dd513b20440c36c1d6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        tmp_name_name_2 = const_str_plain_timeit;
        tmp_globals_name_2 = (PyObject *)moduledict_mpmath;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_default_timer_tuple;
        frame_56c1bbe27fad87dd513b20440c36c1d6->m_frame.f_lineno = 442;
        tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 442;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_default_timer );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 442;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_clock == NULL );
        var_clock = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_1;
        tmp_called_name_1 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT( var_sys );
        tmp_source_name_1 = var_sys;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_argv );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 443;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_56c1bbe27fad87dd513b20440c36c1d6->m_frame.f_lineno = 443;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 443;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 443;
            type_description_1 = "oooooooooooo";
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
                type_description_1 = "oooooooooooo";
                exception_lineno = 443;
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


            exception_lineno = 443;
            type_description_1 = "oooooooooooo";
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


            type_description_1 = "oooooooooooo";
            exception_lineno = 443;
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


            type_description_1 = "oooooooooooo";
            exception_lineno = 443;
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

                    type_description_1 = "oooooooooooo";
                    exception_lineno = 443;
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

            type_description_1 = "oooooooooooo";
            exception_lineno = 443;
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
            PyObject *old = var_i;
            var_i = tmp_assign_source_8;
            Py_INCREF( var_i );
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
            PyObject *old = var_arg;
            var_arg = tmp_assign_source_9;
            Py_INCREF( var_arg );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = const_str_digest_409868245cb421b4cd0ecede43982749;
        CHECK_OBJECT( var_arg );
        tmp_compexpr_right_1 = var_arg;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 444;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
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
        {
            PyObject *tmp_assign_source_10;
            // Tried code:
            {
                PyObject *tmp_assign_source_11;
                PyObject *tmp_iter_arg_3;
                PyObject *tmp_slice_source_1;
                PyObject *tmp_source_name_2;
                PyObject *tmp_slice_lower_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                CHECK_OBJECT( var_sys );
                tmp_source_name_2 = var_sys;
                tmp_slice_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_argv );
                if ( tmp_slice_source_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 445;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_5;
                }
                CHECK_OBJECT( var_i );
                tmp_left_name_1 = var_i;
                tmp_right_name_1 = const_int_pos_1;
                tmp_slice_lower_1 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_1, tmp_right_name_1 );
                if ( tmp_slice_lower_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_slice_source_1 );

                    exception_lineno = 445;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_5;
                }
                tmp_iter_arg_3 = LOOKUP_SLICE( tmp_slice_source_1, tmp_slice_lower_1, Py_None );
                Py_DECREF( tmp_slice_source_1 );
                Py_DECREF( tmp_slice_lower_1 );
                if ( tmp_iter_arg_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 445;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_5;
                }
                tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_3 );
                Py_DECREF( tmp_iter_arg_3 );
                if ( tmp_assign_source_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 445;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_5;
                }
                assert( tmp_list_contraction_1__$0 == NULL );
                tmp_list_contraction_1__$0 = tmp_assign_source_11;
            }
            {
                PyObject *tmp_assign_source_12;
                tmp_assign_source_12 = PyList_New( 0 );
                assert( tmp_list_contraction_1__contraction_result == NULL );
                tmp_list_contraction_1__contraction_result = tmp_assign_source_12;
            }
            loop_start_2:;
            {
                PyObject *tmp_next_source_2;
                PyObject *tmp_assign_source_13;
                CHECK_OBJECT( tmp_list_contraction_1__$0 );
                tmp_next_source_2 = tmp_list_contraction_1__$0;
                tmp_assign_source_13 = ITERATOR_NEXT( tmp_next_source_2 );
                if ( tmp_assign_source_13 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_2;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "oooooooooooo";
                        exception_lineno = 445;
                        goto try_except_handler_5;
                    }
                }

                {
                    PyObject *old = tmp_list_contraction_1__iter_value_0;
                    tmp_list_contraction_1__iter_value_0 = tmp_assign_source_13;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_14;
                CHECK_OBJECT( tmp_list_contraction_1__iter_value_0 );
                tmp_assign_source_14 = tmp_list_contraction_1__iter_value_0;
                {
                    PyObject *old = var_sn;
                    var_sn = tmp_assign_source_14;
                    Py_INCREF( var_sn );
                    Py_XDECREF( old );
                }

            }
            {
                nuitka_bool tmp_condition_result_2;
                PyObject *tmp_operand_name_1;
                PyObject *tmp_called_instance_1;
                CHECK_OBJECT( var_sn );
                tmp_called_instance_1 = var_sn;
                frame_56c1bbe27fad87dd513b20440c36c1d6->m_frame.f_lineno = 445;
                tmp_operand_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_chr_45_tuple, 0 ) );

                if ( tmp_operand_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 445;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_5;
                }
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
                Py_DECREF( tmp_operand_name_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 445;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_5;
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
                    PyObject *tmp_append_list_1;
                    PyObject *tmp_append_value_1;
                    CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
                    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;
                    CHECK_OBJECT( var_sn );
                    tmp_append_value_1 = var_sn;
                    assert( PyList_Check( tmp_append_list_1 ) );
                    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 445;
                        type_description_1 = "oooooooooooo";
                        goto try_except_handler_5;
                    }
                }
                branch_no_2:;
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 445;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_5;
            }
            goto loop_start_2;
            loop_end_2:;
            CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
            tmp_assign_source_10 = tmp_list_contraction_1__contraction_result;
            Py_INCREF( tmp_assign_source_10 );
            goto try_return_handler_5;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( mpmath$$$function_2_doctests );
            return NULL;
            // Return handler code:
            try_return_handler_5:;
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
            try_except_handler_5:;
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

            goto try_except_handler_2;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( mpmath$$$function_2_doctests );
            return NULL;
            outline_result_1:;
            {
                PyObject *old = par_filter;
                assert( old != NULL );
                par_filter = tmp_assign_source_10;
                Py_DECREF( old );
            }

        }
        goto loop_end_1;
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 443;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
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
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        tmp_name_name_3 = const_str_plain_doctest;
        tmp_globals_name_3 = (PyObject *)moduledict_mpmath;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        frame_56c1bbe27fad87dd513b20440c36c1d6->m_frame.f_lineno = 447;
        tmp_assign_source_15 = IMPORT_MODULE4( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 447;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_doctest == NULL );
        var_doctest = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = (PyObject *)moduledict_mpmath;
        frame_56c1bbe27fad87dd513b20440c36c1d6->m_frame.f_lineno = 448;
        tmp_assign_source_16 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_copy );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 448;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_globs == NULL );
        var_globs = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT( var_globs );
        tmp_iter_arg_4 = var_globs;
        tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_4 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 449;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_2__for_iterator == NULL );
        tmp_for_loop_2__for_iterator = tmp_assign_source_17;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_next_source_3 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_18 = ITERATOR_NEXT( tmp_next_source_3 );
        if ( tmp_assign_source_18 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_3;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooo";
                exception_lineno = 449;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_18;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT( tmp_for_loop_2__iter_value );
        tmp_assign_source_19 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_obj;
            var_obj = tmp_assign_source_19;
            Py_INCREF( var_obj );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_filter );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_filter );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 450;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_operand_name_2;
            PyObject *tmp_sum_sequence_1;
            // Tried code:
            {
                PyObject *tmp_assign_source_20;
                PyObject *tmp_iter_arg_5;
                CHECK_OBJECT( par_filter );
                tmp_iter_arg_5 = par_filter;
                tmp_assign_source_20 = MAKE_ITERATOR( tmp_iter_arg_5 );
                if ( tmp_assign_source_20 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 451;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_7;
                }
                {
                    PyObject *old = tmp_list_contraction_2__$0;
                    tmp_list_contraction_2__$0 = tmp_assign_source_20;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_21;
                tmp_assign_source_21 = PyList_New( 0 );
                {
                    PyObject *old = tmp_list_contraction_2__contraction_result;
                    tmp_list_contraction_2__contraction_result = tmp_assign_source_21;
                    Py_XDECREF( old );
                }

            }
            loop_start_4:;
            {
                PyObject *tmp_next_source_4;
                PyObject *tmp_assign_source_22;
                CHECK_OBJECT( tmp_list_contraction_2__$0 );
                tmp_next_source_4 = tmp_list_contraction_2__$0;
                tmp_assign_source_22 = ITERATOR_NEXT( tmp_next_source_4 );
                if ( tmp_assign_source_22 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_4;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "oooooooooooo";
                        exception_lineno = 451;
                        goto try_except_handler_7;
                    }
                }

                {
                    PyObject *old = tmp_list_contraction_2__iter_value_0;
                    tmp_list_contraction_2__iter_value_0 = tmp_assign_source_22;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_23;
                CHECK_OBJECT( tmp_list_contraction_2__iter_value_0 );
                tmp_assign_source_23 = tmp_list_contraction_2__iter_value_0;
                {
                    PyObject *old = var_pat;
                    var_pat = tmp_assign_source_23;
                    Py_INCREF( var_pat );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_append_list_2;
                PyObject *tmp_append_value_2;
                PyObject *tmp_compexpr_left_2;
                PyObject *tmp_compexpr_right_2;
                CHECK_OBJECT( tmp_list_contraction_2__contraction_result );
                tmp_append_list_2 = tmp_list_contraction_2__contraction_result;
                CHECK_OBJECT( var_pat );
                tmp_compexpr_left_2 = var_pat;
                CHECK_OBJECT( var_obj );
                tmp_compexpr_right_2 = var_obj;
                tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 451;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_7;
                }
                tmp_append_value_2 = ( tmp_res == 1 ) ? Py_True : Py_False;
                assert( PyList_Check( tmp_append_list_2 ) );
                tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 451;
                    type_description_1 = "oooooooooooo";
                    goto try_except_handler_7;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 451;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_7;
            }
            goto loop_start_4;
            loop_end_4:;
            CHECK_OBJECT( tmp_list_contraction_2__contraction_result );
            tmp_sum_sequence_1 = tmp_list_contraction_2__contraction_result;
            Py_INCREF( tmp_sum_sequence_1 );
            goto try_return_handler_7;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( mpmath$$$function_2_doctests );
            return NULL;
            // Return handler code:
            try_return_handler_7:;
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
            try_except_handler_7:;
            exception_keeper_type_5 = exception_type;
            exception_keeper_value_5 = exception_value;
            exception_keeper_tb_5 = exception_tb;
            exception_keeper_lineno_5 = exception_lineno;
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
            exception_type = exception_keeper_type_5;
            exception_value = exception_keeper_value_5;
            exception_tb = exception_keeper_tb_5;
            exception_lineno = exception_keeper_lineno_5;

            goto try_except_handler_6;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( mpmath$$$function_2_doctests );
            return NULL;
            outline_result_2:;
            tmp_operand_name_2 = BUILTIN_SUM1( tmp_sum_sequence_1 );
            Py_DECREF( tmp_sum_sequence_1 );
            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 451;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_6;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 451;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_6;
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
            goto loop_start_3;
            branch_no_4:;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_str_arg_1;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_sys );
        tmp_source_name_4 = var_sys;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_stdout );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 453;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_write );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 453;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( var_obj );
        tmp_str_arg_1 = var_obj;
        tmp_left_name_2 = PyObject_Str( tmp_str_arg_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 453;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        tmp_right_name_2 = const_str_space;
        tmp_args_element_name_2 = BINARY_OPERATION_ADD_OBJECT_STR( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 453;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        frame_56c1bbe27fad87dd513b20440c36c1d6->m_frame.f_lineno = 453;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 453;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT( var_sys );
        tmp_source_name_5 = var_sys;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_stdout );
        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 454;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        frame_56c1bbe27fad87dd513b20440c36c1d6->m_frame.f_lineno = 454;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_flush );
        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 454;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_name_3;
        CHECK_OBJECT( var_clock );
        tmp_called_name_3 = var_clock;
        frame_56c1bbe27fad87dd513b20440c36c1d6->m_frame.f_lineno = 455;
        tmp_assign_source_24 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 455;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_t1;
            var_t1 = tmp_assign_source_24;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_6;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT( var_doctest );
        tmp_source_name_6 = var_doctest;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_run_docstring_examples );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 456;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( var_globs );
        tmp_subscribed_name_1 = var_globs;
        CHECK_OBJECT( var_obj );
        tmp_subscript_name_1 = var_obj;
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 456;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_name_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_tuple_element_1 = PyDict_New();
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_compexpr_left_3 = const_str_digest_68e779b074842129991baeb4e329e7d3;
        CHECK_OBJECT( var_sys );
        tmp_source_name_7 = var_sys;
        tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_argv );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 456;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_3, tmp_compexpr_left_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 456;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        tmp_dict_value_1 = ( tmp_res == 1 ) ? Py_True : Py_False;
        tmp_dict_key_1 = const_str_plain_verbose;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_56c1bbe27fad87dd513b20440c36c1d6->m_frame.f_lineno = 456;
        tmp_call_result_3 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 456;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_name_5;
        CHECK_OBJECT( var_clock );
        tmp_called_name_5 = var_clock;
        frame_56c1bbe27fad87dd513b20440c36c1d6->m_frame.f_lineno = 457;
        tmp_assign_source_25 = CALL_FUNCTION_NO_ARGS( tmp_called_name_5 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 457;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_t2;
            var_t2 = tmp_assign_source_25;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_called_name_6 = LOOKUP_BUILTIN( const_str_plain_round );
        assert( tmp_called_name_6 != NULL );
        CHECK_OBJECT( var_t2 );
        tmp_left_name_3 = var_t2;
        CHECK_OBJECT( var_t1 );
        tmp_right_name_3 = var_t1;
        tmp_args_element_name_3 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 458;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_name_4 = const_int_pos_3;
        frame_56c1bbe27fad87dd513b20440c36c1d6->m_frame.f_lineno = 458;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_print_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_print_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 458;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        tmp_result = PRINT_ITEM( tmp_print_value );
        Py_DECREF( tmp_print_value );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 458;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
    }
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 458;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_6;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 449;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_4;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_56c1bbe27fad87dd513b20440c36c1d6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_56c1bbe27fad87dd513b20440c36c1d6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_56c1bbe27fad87dd513b20440c36c1d6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_56c1bbe27fad87dd513b20440c36c1d6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_56c1bbe27fad87dd513b20440c36c1d6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_56c1bbe27fad87dd513b20440c36c1d6,
        type_description_1,
        par_filter,
        var_sys,
        var_obj,
        var_clock,
        var_i,
        var_t2,
        var_t1,
        var_sn,
        var_arg,
        var_pat,
        var_globs,
        var_doctest
    );


    // Release cached frame.
    if ( frame_56c1bbe27fad87dd513b20440c36c1d6 == cache_frame_56c1bbe27fad87dd513b20440c36c1d6 )
    {
        Py_DECREF( frame_56c1bbe27fad87dd513b20440c36c1d6 );
    }
    cache_frame_56c1bbe27fad87dd513b20440c36c1d6 = NULL;

    assertFrameObject( frame_56c1bbe27fad87dd513b20440c36c1d6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$$$function_2_doctests );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_sys );
    Py_DECREF( var_sys );
    var_sys = NULL;

    Py_XDECREF( var_obj );
    var_obj = NULL;

    CHECK_OBJECT( (PyObject *)var_clock );
    Py_DECREF( var_clock );
    var_clock = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_t2 );
    var_t2 = NULL;

    Py_XDECREF( var_t1 );
    var_t1 = NULL;

    CHECK_OBJECT( (PyObject *)par_filter );
    Py_DECREF( par_filter );
    par_filter = NULL;

    Py_XDECREF( var_sn );
    var_sn = NULL;

    Py_XDECREF( var_arg );
    var_arg = NULL;

    Py_XDECREF( var_pat );
    var_pat = NULL;

    CHECK_OBJECT( (PyObject *)var_globs );
    Py_DECREF( var_globs );
    var_globs = NULL;

    CHECK_OBJECT( (PyObject *)var_doctest );
    Py_DECREF( var_doctest );
    var_doctest = NULL;

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

    CHECK_OBJECT( (PyObject *)var_sys );
    Py_DECREF( var_sys );
    var_sys = NULL;

    Py_XDECREF( var_obj );
    var_obj = NULL;

    Py_XDECREF( var_clock );
    var_clock = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_t2 );
    var_t2 = NULL;

    Py_XDECREF( var_t1 );
    var_t1 = NULL;

    Py_XDECREF( par_filter );
    par_filter = NULL;

    Py_XDECREF( var_sn );
    var_sn = NULL;

    Py_XDECREF( var_arg );
    var_arg = NULL;

    Py_XDECREF( var_pat );
    var_pat = NULL;

    Py_XDECREF( var_globs );
    var_globs = NULL;

    Py_XDECREF( var_doctest );
    var_doctest = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$$$function_2_doctests );
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



static PyObject *MAKE_FUNCTION_mpmath$$$function_1_runtests(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$$$function_1_runtests,
        const_str_plain_runtests,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b01aaa7d2ba5fcf86b10f06db107690f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath,
        const_str_digest_77cbe1c98d1133a02fdcd6032b35ecc0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$$$function_2_doctests( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$$$function_2_doctests,
        const_str_plain_doctests,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_56c1bbe27fad87dd513b20440c36c1d6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_mpmath =
{
    PyModuleDef_HEAD_INIT,
    "mpmath",
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

MOD_INIT_DECL( mpmath )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_mpmath );
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
    puts("mpmath: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("mpmath: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("mpmath: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initmpmath" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_mpmath = Py_InitModule4(
        "mpmath",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_mpmath = PyModule_Create( &mdef_mpmath );
#endif

    moduledict_mpmath = MODULE_DICT( module_mpmath );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_mpmath,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_mpmath,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_mpmath,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_mpmath );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_plain_mpmath, module_mpmath );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_b14a549a5c2bf3fd958201a594a85626;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    bool tmp_result;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_12b97a31591c9d83854270dd07619af3;
        UPDATE_STRING_DICT0( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = LIST_COPY( const_list_str_digest_5c38ad7369b75f02738f6999a2f7fd58_list );
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_str_digest_2f034170825bb6c984aad3fc0b9b467a;
        UPDATE_STRING_DICT0( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_4 );
    }
    // Frame without reuse.
    frame_b14a549a5c2bf3fd958201a594a85626 = MAKE_MODULE_FRAME( codeobj_b14a549a5c2bf3fd958201a594a85626, module_mpmath );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_b14a549a5c2bf3fd958201a594a85626 );
    assert( Py_REFCNT( frame_b14a549a5c2bf3fd958201a594a85626 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_usertools;
        tmp_globals_name_1 = (PyObject *)moduledict_mpmath;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_monitor_str_plain_timing_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_b14a549a5c2bf3fd958201a594a85626->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_monitor );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_monitor, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_timing );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_timing, tmp_assign_source_7 );
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
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_ctx_fp;
        tmp_globals_name_2 = (PyObject *)moduledict_mpmath;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_FPContext_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_b14a549a5c2bf3fd958201a594a85626->m_frame.f_lineno = 5;
        tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_FPContext );
        Py_DECREF( tmp_import_name_from_3 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_FPContext, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_ctx_mp;
        tmp_globals_name_3 = (PyObject *)moduledict_mpmath;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_MPContext_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_b14a549a5c2bf3fd958201a594a85626->m_frame.f_lineno = 6;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_MPContext );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_MPContext, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_ctx_iv;
        tmp_globals_name_4 = (PyObject *)moduledict_mpmath;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_MPIntervalContext_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_b14a549a5c2bf3fd958201a594a85626->m_frame.f_lineno = 7;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_MPIntervalContext );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_MPIntervalContext, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_FPContext );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FPContext );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "FPContext" );
            exception_tb = NULL;

            exception_lineno = 9;

            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_b14a549a5c2bf3fd958201a594a85626->m_frame.f_lineno = 9;
        tmp_assign_source_11 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_fp, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_MPContext );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MPContext );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "MPContext" );
            exception_tb = NULL;

            exception_lineno = 10;

            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        frame_b14a549a5c2bf3fd958201a594a85626->m_frame.f_lineno = 10;
        tmp_assign_source_12 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_MPIntervalContext );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MPIntervalContext );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "MPIntervalContext" );
            exception_tb = NULL;

            exception_lineno = 11;

            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        frame_b14a549a5c2bf3fd958201a594a85626->m_frame.f_lineno = 11;
        tmp_assign_source_13 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_iv, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 13;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_1 = tmp_mvar_value_4;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_fp );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fp );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "fp" );
            exception_tb = NULL;

            exception_lineno = 13;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = tmp_mvar_value_5;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__mp, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 14;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_2 = tmp_mvar_value_6;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 14;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = tmp_mvar_value_7;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__mp, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 15;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_3 = tmp_mvar_value_8;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_iv );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iv );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "iv" );
            exception_tb = NULL;

            exception_lineno = 15;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = tmp_mvar_value_9;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__mp, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_mvar_value_11;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_fp );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fp );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "fp" );
            exception_tb = NULL;

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_4 = tmp_mvar_value_10;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = tmp_mvar_value_11;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__fp, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_mvar_value_13;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_fp );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fp );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "fp" );
            exception_tb = NULL;

            exception_lineno = 17;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_5 = tmp_mvar_value_12;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_fp );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fp );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "fp" );
            exception_tb = NULL;

            exception_lineno = 17;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_5 = tmp_mvar_value_13;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain__fp, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_assattr_target_6;
        PyObject *tmp_mvar_value_15;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_iv );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iv );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "iv" );
            exception_tb = NULL;

            exception_lineno = 18;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_6 = tmp_mvar_value_14;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_15 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 18;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_6 = tmp_mvar_value_15;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain__iv, tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_assattr_target_7;
        PyObject *tmp_mvar_value_17;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_iv );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iv );
        }

        if ( tmp_mvar_value_16 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "iv" );
            exception_tb = NULL;

            exception_lineno = 19;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_7 = tmp_mvar_value_16;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_fp );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fp );
        }

        if ( tmp_mvar_value_17 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "fp" );
            exception_tb = NULL;

            exception_lineno = 19;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_7 = tmp_mvar_value_17;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain__iv, tmp_assattr_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_assattr_target_8;
        PyObject *tmp_mvar_value_19;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_iv );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iv );
        }

        if ( tmp_mvar_value_18 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "iv" );
            exception_tb = NULL;

            exception_lineno = 20;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_8 = tmp_mvar_value_18;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_iv );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iv );
        }

        if ( tmp_mvar_value_19 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "iv" );
            exception_tb = NULL;

            exception_lineno = 20;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_8 = tmp_mvar_value_19;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain__iv, tmp_assattr_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_empty;
        tmp_globals_name_5 = (PyObject *)moduledict_mpmath;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_ctx_mp_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_b14a549a5c2bf3fd958201a594a85626->m_frame.f_lineno = 23;
        tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_ctx_mp );
        Py_DECREF( tmp_import_name_from_6 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain__ctx_mp, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_assattr_target_9;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_21;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_20 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 24;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_20;
        tmp_assattr_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_mpf );
        if ( tmp_assattr_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain__ctx_mp );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ctx_mp );
        }

        if ( tmp_mvar_value_21 == NULL )
        {
            Py_DECREF( tmp_assattr_name_9 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_ctx_mp" );
            exception_tb = NULL;

            exception_lineno = 24;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_21;
        tmp_assattr_target_9 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__mpf_module );
        if ( tmp_assattr_target_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_9 );

            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_mpf, tmp_assattr_name_9 );
        Py_DECREF( tmp_assattr_name_9 );
        Py_DECREF( tmp_assattr_target_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_assattr_target_10;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_23;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_22 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 25;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_22;
        tmp_assattr_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_mpc );
        if ( tmp_assattr_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain__ctx_mp );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ctx_mp );
        }

        if ( tmp_mvar_value_23 == NULL )
        {
            Py_DECREF( tmp_assattr_name_10 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_ctx_mp" );
            exception_tb = NULL;

            exception_lineno = 25;

            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_23;
        tmp_assattr_target_10 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__mpf_module );
        if ( tmp_assattr_target_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_10 );

            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_mpc, tmp_assattr_name_10 );
        Py_DECREF( tmp_assattr_name_10 );
        Py_DECREF( tmp_assattr_target_10 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_24;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_24 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 27;

            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_24;
        tmp_assign_source_15 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_make_mpf );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_make_mpf, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_25;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_25 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 28;

            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_25;
        tmp_assign_source_16 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_make_mpc );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_make_mpc, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_26;
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_26 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_26;
        tmp_assign_source_17 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_extraprec );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_extraprec, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_27;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_27 == NULL ))
        {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_27 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 31;

            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_27;
        tmp_assign_source_18 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_extradps );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_extradps, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_28;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_28 == NULL ))
        {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_28 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 32;

            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_28;
        tmp_assign_source_19 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_workprec );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_workprec, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_29;
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_29 == NULL ))
        {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_29 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_29;
        tmp_assign_source_20 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_workdps );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_workdps, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_30;
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_30 == NULL ))
        {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_30 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 34;

            goto frame_exception_exit_1;
        }

        tmp_source_name_11 = tmp_mvar_value_30;
        tmp_assign_source_21 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_autoprec );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_autoprec, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_31;
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_31 == NULL ))
        {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_31 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }

        tmp_source_name_12 = tmp_mvar_value_31;
        tmp_assign_source_22 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_maxcalls );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_maxcalls, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_32;
        tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_32 == NULL ))
        {
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_32 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }

        tmp_source_name_13 = tmp_mvar_value_32;
        tmp_assign_source_23 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_memoize );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_memoize, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_source_name_14;
        PyObject *tmp_mvar_value_33;
        tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_33 == NULL ))
        {
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_33 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 38;

            goto frame_exception_exit_1;
        }

        tmp_source_name_14 = tmp_mvar_value_33;
        tmp_assign_source_24 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_mag );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mag, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_source_name_15;
        PyObject *tmp_mvar_value_34;
        tmp_mvar_value_34 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_34 == NULL ))
        {
            tmp_mvar_value_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_34 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }

        tmp_source_name_15 = tmp_mvar_value_34;
        tmp_assign_source_25 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_bernfrac );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_bernfrac, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_source_name_16;
        PyObject *tmp_mvar_value_35;
        tmp_mvar_value_35 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_35 == NULL ))
        {
            tmp_mvar_value_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_35 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 42;

            goto frame_exception_exit_1;
        }

        tmp_source_name_16 = tmp_mvar_value_35;
        tmp_assign_source_26 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_qfrom );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_qfrom, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_source_name_17;
        PyObject *tmp_mvar_value_36;
        tmp_mvar_value_36 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_36 == NULL ))
        {
            tmp_mvar_value_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_36 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 43;

            goto frame_exception_exit_1;
        }

        tmp_source_name_17 = tmp_mvar_value_36;
        tmp_assign_source_27 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_mfrom );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mfrom, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_source_name_18;
        PyObject *tmp_mvar_value_37;
        tmp_mvar_value_37 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_37 == NULL ))
        {
            tmp_mvar_value_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_37 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 44;

            goto frame_exception_exit_1;
        }

        tmp_source_name_18 = tmp_mvar_value_37;
        tmp_assign_source_28 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_kfrom );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_kfrom, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_source_name_19;
        PyObject *tmp_mvar_value_38;
        tmp_mvar_value_38 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_38 == NULL ))
        {
            tmp_mvar_value_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_38 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 45;

            goto frame_exception_exit_1;
        }

        tmp_source_name_19 = tmp_mvar_value_38;
        tmp_assign_source_29 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_taufrom );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_taufrom, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_source_name_20;
        PyObject *tmp_mvar_value_39;
        tmp_mvar_value_39 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_39 == NULL ))
        {
            tmp_mvar_value_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_39 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 46;

            goto frame_exception_exit_1;
        }

        tmp_source_name_20 = tmp_mvar_value_39;
        tmp_assign_source_30 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_qbarfrom );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_qbarfrom, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_source_name_21;
        PyObject *tmp_mvar_value_40;
        tmp_mvar_value_40 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_40 == NULL ))
        {
            tmp_mvar_value_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_40 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 47;

            goto frame_exception_exit_1;
        }

        tmp_source_name_21 = tmp_mvar_value_40;
        tmp_assign_source_31 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_ellipfun );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_ellipfun, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_source_name_22;
        PyObject *tmp_mvar_value_41;
        tmp_mvar_value_41 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_41 == NULL ))
        {
            tmp_mvar_value_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_41 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 48;

            goto frame_exception_exit_1;
        }

        tmp_source_name_22 = tmp_mvar_value_41;
        tmp_assign_source_32 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_jtheta );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_jtheta, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_source_name_23;
        PyObject *tmp_mvar_value_42;
        tmp_mvar_value_42 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_42 == NULL ))
        {
            tmp_mvar_value_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_42 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 49;

            goto frame_exception_exit_1;
        }

        tmp_source_name_23 = tmp_mvar_value_42;
        tmp_assign_source_33 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_kleinj );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_kleinj, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_source_name_24;
        PyObject *tmp_mvar_value_43;
        tmp_mvar_value_43 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_43 == NULL ))
        {
            tmp_mvar_value_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_43 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 51;

            goto frame_exception_exit_1;
        }

        tmp_source_name_24 = tmp_mvar_value_43;
        tmp_assign_source_34 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_qp );
        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_qp, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_source_name_25;
        PyObject *tmp_mvar_value_44;
        tmp_mvar_value_44 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_44 == NULL ))
        {
            tmp_mvar_value_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_44 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 52;

            goto frame_exception_exit_1;
        }

        tmp_source_name_25 = tmp_mvar_value_44;
        tmp_assign_source_35 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_qhyper );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_qhyper, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_source_name_26;
        PyObject *tmp_mvar_value_45;
        tmp_mvar_value_45 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_45 == NULL ))
        {
            tmp_mvar_value_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_45 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 53;

            goto frame_exception_exit_1;
        }

        tmp_source_name_26 = tmp_mvar_value_45;
        tmp_assign_source_36 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_qgamma );
        if ( tmp_assign_source_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_qgamma, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_source_name_27;
        PyObject *tmp_mvar_value_46;
        tmp_mvar_value_46 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_46 == NULL ))
        {
            tmp_mvar_value_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_46 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }

        tmp_source_name_27 = tmp_mvar_value_46;
        tmp_assign_source_37 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_qfac );
        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_qfac, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_source_name_28;
        PyObject *tmp_mvar_value_47;
        tmp_mvar_value_47 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_47 == NULL ))
        {
            tmp_mvar_value_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_47 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 56;

            goto frame_exception_exit_1;
        }

        tmp_source_name_28 = tmp_mvar_value_47;
        tmp_assign_source_38 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_nint_distance );
        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_nint_distance, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_source_name_29;
        PyObject *tmp_mvar_value_48;
        tmp_mvar_value_48 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_48 == NULL ))
        {
            tmp_mvar_value_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_48 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 58;

            goto frame_exception_exit_1;
        }

        tmp_source_name_29 = tmp_mvar_value_48;
        tmp_assign_source_39 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_plot );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_plot, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_source_name_30;
        PyObject *tmp_mvar_value_49;
        tmp_mvar_value_49 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_49 == NULL ))
        {
            tmp_mvar_value_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_49 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 59;

            goto frame_exception_exit_1;
        }

        tmp_source_name_30 = tmp_mvar_value_49;
        tmp_assign_source_40 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_cplot );
        if ( tmp_assign_source_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_cplot, tmp_assign_source_40 );
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_source_name_31;
        PyObject *tmp_mvar_value_50;
        tmp_mvar_value_50 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_50 == NULL ))
        {
            tmp_mvar_value_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_50 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 60;

            goto frame_exception_exit_1;
        }

        tmp_source_name_31 = tmp_mvar_value_50;
        tmp_assign_source_41 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_splot );
        if ( tmp_assign_source_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_splot, tmp_assign_source_41 );
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_source_name_32;
        PyObject *tmp_mvar_value_51;
        tmp_mvar_value_51 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_51 == NULL ))
        {
            tmp_mvar_value_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_51 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 62;

            goto frame_exception_exit_1;
        }

        tmp_source_name_32 = tmp_mvar_value_51;
        tmp_assign_source_42 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_odefun );
        if ( tmp_assign_source_42 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_odefun, tmp_assign_source_42 );
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_source_name_33;
        PyObject *tmp_mvar_value_52;
        tmp_mvar_value_52 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_52 == NULL ))
        {
            tmp_mvar_value_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_52 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 64;

            goto frame_exception_exit_1;
        }

        tmp_source_name_33 = tmp_mvar_value_52;
        tmp_assign_source_43 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_jacobian );
        if ( tmp_assign_source_43 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_jacobian, tmp_assign_source_43 );
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_source_name_34;
        PyObject *tmp_mvar_value_53;
        tmp_mvar_value_53 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_53 == NULL ))
        {
            tmp_mvar_value_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_53 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 65;

            goto frame_exception_exit_1;
        }

        tmp_source_name_34 = tmp_mvar_value_53;
        tmp_assign_source_44 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_findroot );
        if ( tmp_assign_source_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_findroot, tmp_assign_source_44 );
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_source_name_35;
        PyObject *tmp_mvar_value_54;
        tmp_mvar_value_54 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_54 == NULL ))
        {
            tmp_mvar_value_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_54 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }

        tmp_source_name_35 = tmp_mvar_value_54;
        tmp_assign_source_45 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_multiplicity );
        if ( tmp_assign_source_45 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_multiplicity, tmp_assign_source_45 );
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_source_name_36;
        PyObject *tmp_mvar_value_55;
        tmp_mvar_value_55 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_55 == NULL ))
        {
            tmp_mvar_value_55 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_55 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }

        tmp_source_name_36 = tmp_mvar_value_55;
        tmp_assign_source_46 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_isinf );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_isinf, tmp_assign_source_46 );
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_source_name_37;
        PyObject *tmp_mvar_value_56;
        tmp_mvar_value_56 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_56 == NULL ))
        {
            tmp_mvar_value_56 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_56 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }

        tmp_source_name_37 = tmp_mvar_value_56;
        tmp_assign_source_47 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_isnan );
        if ( tmp_assign_source_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_isnan, tmp_assign_source_47 );
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_source_name_38;
        PyObject *tmp_mvar_value_57;
        tmp_mvar_value_57 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_57 == NULL ))
        {
            tmp_mvar_value_57 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_57 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 70;

            goto frame_exception_exit_1;
        }

        tmp_source_name_38 = tmp_mvar_value_57;
        tmp_assign_source_48 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_isnormal );
        if ( tmp_assign_source_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_isnormal, tmp_assign_source_48 );
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_source_name_39;
        PyObject *tmp_mvar_value_58;
        tmp_mvar_value_58 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_58 == NULL ))
        {
            tmp_mvar_value_58 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_58 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }

        tmp_source_name_39 = tmp_mvar_value_58;
        tmp_assign_source_49 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_isint );
        if ( tmp_assign_source_49 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_isint, tmp_assign_source_49 );
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_source_name_40;
        PyObject *tmp_mvar_value_59;
        tmp_mvar_value_59 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_59 == NULL ))
        {
            tmp_mvar_value_59 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_59 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 72;

            goto frame_exception_exit_1;
        }

        tmp_source_name_40 = tmp_mvar_value_59;
        tmp_assign_source_50 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_isfinite );
        if ( tmp_assign_source_50 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_isfinite, tmp_assign_source_50 );
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_source_name_41;
        PyObject *tmp_mvar_value_60;
        tmp_mvar_value_60 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_60 == NULL ))
        {
            tmp_mvar_value_60 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_60 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 73;

            goto frame_exception_exit_1;
        }

        tmp_source_name_41 = tmp_mvar_value_60;
        tmp_assign_source_51 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_almosteq );
        if ( tmp_assign_source_51 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_almosteq, tmp_assign_source_51 );
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_source_name_42;
        PyObject *tmp_mvar_value_61;
        tmp_mvar_value_61 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_61 == NULL ))
        {
            tmp_mvar_value_61 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_61 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 74;

            goto frame_exception_exit_1;
        }

        tmp_source_name_42 = tmp_mvar_value_61;
        tmp_assign_source_52 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_nan );
        if ( tmp_assign_source_52 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_nan, tmp_assign_source_52 );
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_source_name_43;
        PyObject *tmp_mvar_value_62;
        tmp_mvar_value_62 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_62 == NULL ))
        {
            tmp_mvar_value_62 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_62 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 75;

            goto frame_exception_exit_1;
        }

        tmp_source_name_43 = tmp_mvar_value_62;
        tmp_assign_source_53 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_rand );
        if ( tmp_assign_source_53 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_rand, tmp_assign_source_53 );
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_source_name_44;
        PyObject *tmp_mvar_value_63;
        tmp_mvar_value_63 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_63 == NULL ))
        {
            tmp_mvar_value_63 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_63 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 77;

            goto frame_exception_exit_1;
        }

        tmp_source_name_44 = tmp_mvar_value_63;
        tmp_assign_source_54 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_absmin );
        if ( tmp_assign_source_54 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_absmin, tmp_assign_source_54 );
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_source_name_45;
        PyObject *tmp_mvar_value_64;
        tmp_mvar_value_64 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_64 == NULL ))
        {
            tmp_mvar_value_64 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_64 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }

        tmp_source_name_45 = tmp_mvar_value_64;
        tmp_assign_source_55 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_absmax );
        if ( tmp_assign_source_55 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_absmax, tmp_assign_source_55 );
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_source_name_46;
        PyObject *tmp_mvar_value_65;
        tmp_mvar_value_65 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_65 == NULL ))
        {
            tmp_mvar_value_65 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_65 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }

        tmp_source_name_46 = tmp_mvar_value_65;
        tmp_assign_source_56 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain_fraction );
        if ( tmp_assign_source_56 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_fraction, tmp_assign_source_56 );
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_source_name_47;
        PyObject *tmp_mvar_value_66;
        tmp_mvar_value_66 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_66 == NULL ))
        {
            tmp_mvar_value_66 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_66 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 82;

            goto frame_exception_exit_1;
        }

        tmp_source_name_47 = tmp_mvar_value_66;
        tmp_assign_source_57 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain_linspace );
        if ( tmp_assign_source_57 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_linspace, tmp_assign_source_57 );
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_source_name_48;
        PyObject *tmp_mvar_value_67;
        tmp_mvar_value_67 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_67 == NULL ))
        {
            tmp_mvar_value_67 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_67 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 83;

            goto frame_exception_exit_1;
        }

        tmp_source_name_48 = tmp_mvar_value_67;
        tmp_assign_source_58 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain_arange );
        if ( tmp_assign_source_58 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_arange, tmp_assign_source_58 );
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_source_name_49;
        PyObject *tmp_mvar_value_68;
        tmp_mvar_value_68 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_68 == NULL ))
        {
            tmp_mvar_value_68 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_68 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 85;

            goto frame_exception_exit_1;
        }

        tmp_source_name_49 = tmp_mvar_value_68;
        tmp_assign_source_59 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain_convert );
        if ( tmp_assign_source_59 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        assert( tmp_assign_unpack_1__assign_source == NULL );
        tmp_assign_unpack_1__assign_source = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
        tmp_assign_source_60 = tmp_assign_unpack_1__assign_source;
        UPDATE_STRING_DICT0( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mpmathify, tmp_assign_source_60 );
    }
    {
        PyObject *tmp_assign_source_61;
        CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
        tmp_assign_source_61 = tmp_assign_unpack_1__assign_source;
        UPDATE_STRING_DICT0( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_convert, tmp_assign_source_61 );
    }
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
    Py_DECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_source_name_50;
        PyObject *tmp_mvar_value_69;
        tmp_mvar_value_69 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_69 == NULL ))
        {
            tmp_mvar_value_69 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_69 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }

        tmp_source_name_50 = tmp_mvar_value_69;
        tmp_assign_source_62 = LOOKUP_ATTRIBUTE( tmp_source_name_50, const_str_plain_mpc );
        if ( tmp_assign_source_62 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mpc, tmp_assign_source_62 );
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_source_name_51;
        PyObject *tmp_mvar_value_70;
        tmp_mvar_value_70 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_iv );

        if (unlikely( tmp_mvar_value_70 == NULL ))
        {
            tmp_mvar_value_70 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iv );
        }

        if ( tmp_mvar_value_70 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "iv" );
            exception_tb = NULL;

            exception_lineno = 88;

            goto frame_exception_exit_1;
        }

        tmp_source_name_51 = tmp_mvar_value_70;
        tmp_assign_source_63 = LOOKUP_ATTRIBUTE( tmp_source_name_51, const_str_plain__mpi );
        if ( tmp_assign_source_63 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mpi, tmp_assign_source_63 );
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_source_name_52;
        PyObject *tmp_mvar_value_71;
        tmp_mvar_value_71 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_71 == NULL ))
        {
            tmp_mvar_value_71 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_71 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 90;

            goto frame_exception_exit_1;
        }

        tmp_source_name_52 = tmp_mvar_value_71;
        tmp_assign_source_64 = LOOKUP_ATTRIBUTE( tmp_source_name_52, const_str_plain_nstr );
        if ( tmp_assign_source_64 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_nstr, tmp_assign_source_64 );
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_source_name_53;
        PyObject *tmp_mvar_value_72;
        tmp_mvar_value_72 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_72 == NULL ))
        {
            tmp_mvar_value_72 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_72 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 91;

            goto frame_exception_exit_1;
        }

        tmp_source_name_53 = tmp_mvar_value_72;
        tmp_assign_source_65 = LOOKUP_ATTRIBUTE( tmp_source_name_53, const_str_plain_nprint );
        if ( tmp_assign_source_65 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_nprint, tmp_assign_source_65 );
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_source_name_54;
        PyObject *tmp_mvar_value_73;
        tmp_mvar_value_73 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_73 == NULL ))
        {
            tmp_mvar_value_73 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_73 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 92;

            goto frame_exception_exit_1;
        }

        tmp_source_name_54 = tmp_mvar_value_73;
        tmp_assign_source_66 = LOOKUP_ATTRIBUTE( tmp_source_name_54, const_str_plain_chop );
        if ( tmp_assign_source_66 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_chop, tmp_assign_source_66 );
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_source_name_55;
        PyObject *tmp_mvar_value_74;
        tmp_mvar_value_74 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_74 == NULL ))
        {
            tmp_mvar_value_74 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_74 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 94;

            goto frame_exception_exit_1;
        }

        tmp_source_name_55 = tmp_mvar_value_74;
        tmp_assign_source_67 = LOOKUP_ATTRIBUTE( tmp_source_name_55, const_str_plain_fneg );
        if ( tmp_assign_source_67 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_fneg, tmp_assign_source_67 );
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_source_name_56;
        PyObject *tmp_mvar_value_75;
        tmp_mvar_value_75 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_75 == NULL ))
        {
            tmp_mvar_value_75 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_75 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 95;

            goto frame_exception_exit_1;
        }

        tmp_source_name_56 = tmp_mvar_value_75;
        tmp_assign_source_68 = LOOKUP_ATTRIBUTE( tmp_source_name_56, const_str_plain_fadd );
        if ( tmp_assign_source_68 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_fadd, tmp_assign_source_68 );
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_source_name_57;
        PyObject *tmp_mvar_value_76;
        tmp_mvar_value_76 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_76 == NULL ))
        {
            tmp_mvar_value_76 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_76 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 96;

            goto frame_exception_exit_1;
        }

        tmp_source_name_57 = tmp_mvar_value_76;
        tmp_assign_source_69 = LOOKUP_ATTRIBUTE( tmp_source_name_57, const_str_plain_fsub );
        if ( tmp_assign_source_69 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_fsub, tmp_assign_source_69 );
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_source_name_58;
        PyObject *tmp_mvar_value_77;
        tmp_mvar_value_77 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_77 == NULL ))
        {
            tmp_mvar_value_77 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_77 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }

        tmp_source_name_58 = tmp_mvar_value_77;
        tmp_assign_source_70 = LOOKUP_ATTRIBUTE( tmp_source_name_58, const_str_plain_fmul );
        if ( tmp_assign_source_70 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_fmul, tmp_assign_source_70 );
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_source_name_59;
        PyObject *tmp_mvar_value_78;
        tmp_mvar_value_78 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_78 == NULL ))
        {
            tmp_mvar_value_78 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_78 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 98;

            goto frame_exception_exit_1;
        }

        tmp_source_name_59 = tmp_mvar_value_78;
        tmp_assign_source_71 = LOOKUP_ATTRIBUTE( tmp_source_name_59, const_str_plain_fdiv );
        if ( tmp_assign_source_71 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_fdiv, tmp_assign_source_71 );
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_source_name_60;
        PyObject *tmp_mvar_value_79;
        tmp_mvar_value_79 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_79 == NULL ))
        {
            tmp_mvar_value_79 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_79 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }

        tmp_source_name_60 = tmp_mvar_value_79;
        tmp_assign_source_72 = LOOKUP_ATTRIBUTE( tmp_source_name_60, const_str_plain_fprod );
        if ( tmp_assign_source_72 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_fprod, tmp_assign_source_72 );
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_source_name_61;
        PyObject *tmp_mvar_value_80;
        tmp_mvar_value_80 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_80 == NULL ))
        {
            tmp_mvar_value_80 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_80 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 101;

            goto frame_exception_exit_1;
        }

        tmp_source_name_61 = tmp_mvar_value_80;
        tmp_assign_source_73 = LOOKUP_ATTRIBUTE( tmp_source_name_61, const_str_plain_quad );
        if ( tmp_assign_source_73 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_quad, tmp_assign_source_73 );
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_source_name_62;
        PyObject *tmp_mvar_value_81;
        tmp_mvar_value_81 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_81 == NULL ))
        {
            tmp_mvar_value_81 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_81 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 102;

            goto frame_exception_exit_1;
        }

        tmp_source_name_62 = tmp_mvar_value_81;
        tmp_assign_source_74 = LOOKUP_ATTRIBUTE( tmp_source_name_62, const_str_plain_quadgl );
        if ( tmp_assign_source_74 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_quadgl, tmp_assign_source_74 );
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_source_name_63;
        PyObject *tmp_mvar_value_82;
        tmp_mvar_value_82 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_82 == NULL ))
        {
            tmp_mvar_value_82 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_82 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 103;

            goto frame_exception_exit_1;
        }

        tmp_source_name_63 = tmp_mvar_value_82;
        tmp_assign_source_75 = LOOKUP_ATTRIBUTE( tmp_source_name_63, const_str_plain_quadts );
        if ( tmp_assign_source_75 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_quadts, tmp_assign_source_75 );
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_source_name_64;
        PyObject *tmp_mvar_value_83;
        tmp_mvar_value_83 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_83 == NULL ))
        {
            tmp_mvar_value_83 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_83 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 104;

            goto frame_exception_exit_1;
        }

        tmp_source_name_64 = tmp_mvar_value_83;
        tmp_assign_source_76 = LOOKUP_ATTRIBUTE( tmp_source_name_64, const_str_plain_quadosc );
        if ( tmp_assign_source_76 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_quadosc, tmp_assign_source_76 );
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_source_name_65;
        PyObject *tmp_mvar_value_84;
        tmp_mvar_value_84 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_84 == NULL ))
        {
            tmp_mvar_value_84 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_84 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 106;

            goto frame_exception_exit_1;
        }

        tmp_source_name_65 = tmp_mvar_value_84;
        tmp_assign_source_77 = LOOKUP_ATTRIBUTE( tmp_source_name_65, const_str_plain_invertlaplace );
        if ( tmp_assign_source_77 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_invertlaplace, tmp_assign_source_77 );
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_source_name_66;
        PyObject *tmp_mvar_value_85;
        tmp_mvar_value_85 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_85 == NULL ))
        {
            tmp_mvar_value_85 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_85 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 107;

            goto frame_exception_exit_1;
        }

        tmp_source_name_66 = tmp_mvar_value_85;
        tmp_assign_source_78 = LOOKUP_ATTRIBUTE( tmp_source_name_66, const_str_plain_invlaptalbot );
        if ( tmp_assign_source_78 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_invlaptalbot, tmp_assign_source_78 );
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_source_name_67;
        PyObject *tmp_mvar_value_86;
        tmp_mvar_value_86 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_86 == NULL ))
        {
            tmp_mvar_value_86 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_86 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }

        tmp_source_name_67 = tmp_mvar_value_86;
        tmp_assign_source_79 = LOOKUP_ATTRIBUTE( tmp_source_name_67, const_str_plain_invlapstehfest );
        if ( tmp_assign_source_79 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_invlapstehfest, tmp_assign_source_79 );
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_source_name_68;
        PyObject *tmp_mvar_value_87;
        tmp_mvar_value_87 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_87 == NULL ))
        {
            tmp_mvar_value_87 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_87 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 109;

            goto frame_exception_exit_1;
        }

        tmp_source_name_68 = tmp_mvar_value_87;
        tmp_assign_source_80 = LOOKUP_ATTRIBUTE( tmp_source_name_68, const_str_plain_invlapdehoog );
        if ( tmp_assign_source_80 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_invlapdehoog, tmp_assign_source_80 );
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_source_name_69;
        PyObject *tmp_mvar_value_88;
        tmp_mvar_value_88 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_88 == NULL ))
        {
            tmp_mvar_value_88 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_88 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 111;

            goto frame_exception_exit_1;
        }

        tmp_source_name_69 = tmp_mvar_value_88;
        tmp_assign_source_81 = LOOKUP_ATTRIBUTE( tmp_source_name_69, const_str_plain_pslq );
        if ( tmp_assign_source_81 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_pslq, tmp_assign_source_81 );
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_source_name_70;
        PyObject *tmp_mvar_value_89;
        tmp_mvar_value_89 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_89 == NULL ))
        {
            tmp_mvar_value_89 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_89 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 112;

            goto frame_exception_exit_1;
        }

        tmp_source_name_70 = tmp_mvar_value_89;
        tmp_assign_source_82 = LOOKUP_ATTRIBUTE( tmp_source_name_70, const_str_plain_identify );
        if ( tmp_assign_source_82 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_identify, tmp_assign_source_82 );
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_source_name_71;
        PyObject *tmp_mvar_value_90;
        tmp_mvar_value_90 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_90 == NULL ))
        {
            tmp_mvar_value_90 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_90 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 113;

            goto frame_exception_exit_1;
        }

        tmp_source_name_71 = tmp_mvar_value_90;
        tmp_assign_source_83 = LOOKUP_ATTRIBUTE( tmp_source_name_71, const_str_plain_findpoly );
        if ( tmp_assign_source_83 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_findpoly, tmp_assign_source_83 );
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_source_name_72;
        PyObject *tmp_mvar_value_91;
        tmp_mvar_value_91 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_91 == NULL ))
        {
            tmp_mvar_value_91 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_91 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 115;

            goto frame_exception_exit_1;
        }

        tmp_source_name_72 = tmp_mvar_value_91;
        tmp_assign_source_84 = LOOKUP_ATTRIBUTE( tmp_source_name_72, const_str_plain_richardson );
        if ( tmp_assign_source_84 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_richardson, tmp_assign_source_84 );
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_source_name_73;
        PyObject *tmp_mvar_value_92;
        tmp_mvar_value_92 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_92 == NULL ))
        {
            tmp_mvar_value_92 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_92 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }

        tmp_source_name_73 = tmp_mvar_value_92;
        tmp_assign_source_85 = LOOKUP_ATTRIBUTE( tmp_source_name_73, const_str_plain_shanks );
        if ( tmp_assign_source_85 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_shanks, tmp_assign_source_85 );
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_source_name_74;
        PyObject *tmp_mvar_value_93;
        tmp_mvar_value_93 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_93 == NULL ))
        {
            tmp_mvar_value_93 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_93 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 117;

            goto frame_exception_exit_1;
        }

        tmp_source_name_74 = tmp_mvar_value_93;
        tmp_assign_source_86 = LOOKUP_ATTRIBUTE( tmp_source_name_74, const_str_plain_levin );
        if ( tmp_assign_source_86 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_levin, tmp_assign_source_86 );
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_source_name_75;
        PyObject *tmp_mvar_value_94;
        tmp_mvar_value_94 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_94 == NULL ))
        {
            tmp_mvar_value_94 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_94 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 118;

            goto frame_exception_exit_1;
        }

        tmp_source_name_75 = tmp_mvar_value_94;
        tmp_assign_source_87 = LOOKUP_ATTRIBUTE( tmp_source_name_75, const_str_plain_cohen_alt );
        if ( tmp_assign_source_87 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_cohen_alt, tmp_assign_source_87 );
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_source_name_76;
        PyObject *tmp_mvar_value_95;
        tmp_mvar_value_95 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_95 == NULL ))
        {
            tmp_mvar_value_95 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_95 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }

        tmp_source_name_76 = tmp_mvar_value_95;
        tmp_assign_source_88 = LOOKUP_ATTRIBUTE( tmp_source_name_76, const_str_plain_nsum );
        if ( tmp_assign_source_88 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_nsum, tmp_assign_source_88 );
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_source_name_77;
        PyObject *tmp_mvar_value_96;
        tmp_mvar_value_96 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_96 == NULL ))
        {
            tmp_mvar_value_96 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_96 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }

        tmp_source_name_77 = tmp_mvar_value_96;
        tmp_assign_source_89 = LOOKUP_ATTRIBUTE( tmp_source_name_77, const_str_plain_nprod );
        if ( tmp_assign_source_89 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_nprod, tmp_assign_source_89 );
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_source_name_78;
        PyObject *tmp_mvar_value_97;
        tmp_mvar_value_97 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_97 == NULL ))
        {
            tmp_mvar_value_97 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_97 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }

        tmp_source_name_78 = tmp_mvar_value_97;
        tmp_assign_source_90 = LOOKUP_ATTRIBUTE( tmp_source_name_78, const_str_plain_difference );
        if ( tmp_assign_source_90 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_difference, tmp_assign_source_90 );
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_source_name_79;
        PyObject *tmp_mvar_value_98;
        tmp_mvar_value_98 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_98 == NULL ))
        {
            tmp_mvar_value_98 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_98 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }

        tmp_source_name_79 = tmp_mvar_value_98;
        tmp_assign_source_91 = LOOKUP_ATTRIBUTE( tmp_source_name_79, const_str_plain_diff );
        if ( tmp_assign_source_91 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_diff, tmp_assign_source_91 );
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_source_name_80;
        PyObject *tmp_mvar_value_99;
        tmp_mvar_value_99 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_99 == NULL ))
        {
            tmp_mvar_value_99 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_99 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }

        tmp_source_name_80 = tmp_mvar_value_99;
        tmp_assign_source_92 = LOOKUP_ATTRIBUTE( tmp_source_name_80, const_str_plain_diffs );
        if ( tmp_assign_source_92 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_diffs, tmp_assign_source_92 );
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_source_name_81;
        PyObject *tmp_mvar_value_100;
        tmp_mvar_value_100 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_100 == NULL ))
        {
            tmp_mvar_value_100 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_100 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }

        tmp_source_name_81 = tmp_mvar_value_100;
        tmp_assign_source_93 = LOOKUP_ATTRIBUTE( tmp_source_name_81, const_str_plain_diffs_prod );
        if ( tmp_assign_source_93 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_diffs_prod, tmp_assign_source_93 );
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_source_name_82;
        PyObject *tmp_mvar_value_101;
        tmp_mvar_value_101 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_101 == NULL ))
        {
            tmp_mvar_value_101 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_101 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }

        tmp_source_name_82 = tmp_mvar_value_101;
        tmp_assign_source_94 = LOOKUP_ATTRIBUTE( tmp_source_name_82, const_str_plain_diffs_exp );
        if ( tmp_assign_source_94 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_diffs_exp, tmp_assign_source_94 );
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_source_name_83;
        PyObject *tmp_mvar_value_102;
        tmp_mvar_value_102 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_102 == NULL ))
        {
            tmp_mvar_value_102 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_102 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }

        tmp_source_name_83 = tmp_mvar_value_102;
        tmp_assign_source_95 = LOOKUP_ATTRIBUTE( tmp_source_name_83, const_str_plain_diffun );
        if ( tmp_assign_source_95 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_diffun, tmp_assign_source_95 );
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_source_name_84;
        PyObject *tmp_mvar_value_103;
        tmp_mvar_value_103 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_103 == NULL ))
        {
            tmp_mvar_value_103 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_103 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 127;

            goto frame_exception_exit_1;
        }

        tmp_source_name_84 = tmp_mvar_value_103;
        tmp_assign_source_96 = LOOKUP_ATTRIBUTE( tmp_source_name_84, const_str_plain_differint );
        if ( tmp_assign_source_96 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_differint, tmp_assign_source_96 );
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_source_name_85;
        PyObject *tmp_mvar_value_104;
        tmp_mvar_value_104 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_104 == NULL ))
        {
            tmp_mvar_value_104 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_104 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }

        tmp_source_name_85 = tmp_mvar_value_104;
        tmp_assign_source_97 = LOOKUP_ATTRIBUTE( tmp_source_name_85, const_str_plain_taylor );
        if ( tmp_assign_source_97 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_taylor, tmp_assign_source_97 );
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_source_name_86;
        PyObject *tmp_mvar_value_105;
        tmp_mvar_value_105 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_105 == NULL ))
        {
            tmp_mvar_value_105 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_105 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }

        tmp_source_name_86 = tmp_mvar_value_105;
        tmp_assign_source_98 = LOOKUP_ATTRIBUTE( tmp_source_name_86, const_str_plain_pade );
        if ( tmp_assign_source_98 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_pade, tmp_assign_source_98 );
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_source_name_87;
        PyObject *tmp_mvar_value_106;
        tmp_mvar_value_106 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_106 == NULL ))
        {
            tmp_mvar_value_106 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_106 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }

        tmp_source_name_87 = tmp_mvar_value_106;
        tmp_assign_source_99 = LOOKUP_ATTRIBUTE( tmp_source_name_87, const_str_plain_polyval );
        if ( tmp_assign_source_99 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_polyval, tmp_assign_source_99 );
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_source_name_88;
        PyObject *tmp_mvar_value_107;
        tmp_mvar_value_107 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_107 == NULL ))
        {
            tmp_mvar_value_107 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_107 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 131;

            goto frame_exception_exit_1;
        }

        tmp_source_name_88 = tmp_mvar_value_107;
        tmp_assign_source_100 = LOOKUP_ATTRIBUTE( tmp_source_name_88, const_str_plain_polyroots );
        if ( tmp_assign_source_100 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_polyroots, tmp_assign_source_100 );
    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_source_name_89;
        PyObject *tmp_mvar_value_108;
        tmp_mvar_value_108 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_108 == NULL ))
        {
            tmp_mvar_value_108 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_108 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 132;

            goto frame_exception_exit_1;
        }

        tmp_source_name_89 = tmp_mvar_value_108;
        tmp_assign_source_101 = LOOKUP_ATTRIBUTE( tmp_source_name_89, const_str_plain_fourier );
        if ( tmp_assign_source_101 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_fourier, tmp_assign_source_101 );
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_source_name_90;
        PyObject *tmp_mvar_value_109;
        tmp_mvar_value_109 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_109 == NULL ))
        {
            tmp_mvar_value_109 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_109 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 133;

            goto frame_exception_exit_1;
        }

        tmp_source_name_90 = tmp_mvar_value_109;
        tmp_assign_source_102 = LOOKUP_ATTRIBUTE( tmp_source_name_90, const_str_plain_fourierval );
        if ( tmp_assign_source_102 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_fourierval, tmp_assign_source_102 );
    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_source_name_91;
        PyObject *tmp_mvar_value_110;
        tmp_mvar_value_110 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_110 == NULL ))
        {
            tmp_mvar_value_110 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_110 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 134;

            goto frame_exception_exit_1;
        }

        tmp_source_name_91 = tmp_mvar_value_110;
        tmp_assign_source_103 = LOOKUP_ATTRIBUTE( tmp_source_name_91, const_str_plain_sumem );
        if ( tmp_assign_source_103 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_sumem, tmp_assign_source_103 );
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_source_name_92;
        PyObject *tmp_mvar_value_111;
        tmp_mvar_value_111 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_111 == NULL ))
        {
            tmp_mvar_value_111 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_111 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }

        tmp_source_name_92 = tmp_mvar_value_111;
        tmp_assign_source_104 = LOOKUP_ATTRIBUTE( tmp_source_name_92, const_str_plain_sumap );
        if ( tmp_assign_source_104 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_sumap, tmp_assign_source_104 );
    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_source_name_93;
        PyObject *tmp_mvar_value_112;
        tmp_mvar_value_112 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_112 == NULL ))
        {
            tmp_mvar_value_112 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_112 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }

        tmp_source_name_93 = tmp_mvar_value_112;
        tmp_assign_source_105 = LOOKUP_ATTRIBUTE( tmp_source_name_93, const_str_plain_chebyfit );
        if ( tmp_assign_source_105 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_chebyfit, tmp_assign_source_105 );
    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_source_name_94;
        PyObject *tmp_mvar_value_113;
        tmp_mvar_value_113 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_113 == NULL ))
        {
            tmp_mvar_value_113 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_113 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 137;

            goto frame_exception_exit_1;
        }

        tmp_source_name_94 = tmp_mvar_value_113;
        tmp_assign_source_106 = LOOKUP_ATTRIBUTE( tmp_source_name_94, const_str_plain_limit );
        if ( tmp_assign_source_106 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_limit, tmp_assign_source_106 );
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_source_name_95;
        PyObject *tmp_mvar_value_114;
        tmp_mvar_value_114 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_114 == NULL ))
        {
            tmp_mvar_value_114 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_114 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 139;

            goto frame_exception_exit_1;
        }

        tmp_source_name_95 = tmp_mvar_value_114;
        tmp_assign_source_107 = LOOKUP_ATTRIBUTE( tmp_source_name_95, const_str_plain_matrix );
        if ( tmp_assign_source_107 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_matrix, tmp_assign_source_107 );
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_source_name_96;
        PyObject *tmp_mvar_value_115;
        tmp_mvar_value_115 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_115 == NULL ))
        {
            tmp_mvar_value_115 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_115 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 140;

            goto frame_exception_exit_1;
        }

        tmp_source_name_96 = tmp_mvar_value_115;
        tmp_assign_source_108 = LOOKUP_ATTRIBUTE( tmp_source_name_96, const_str_plain_eye );
        if ( tmp_assign_source_108 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_eye, tmp_assign_source_108 );
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_source_name_97;
        PyObject *tmp_mvar_value_116;
        tmp_mvar_value_116 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_116 == NULL ))
        {
            tmp_mvar_value_116 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_116 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }

        tmp_source_name_97 = tmp_mvar_value_116;
        tmp_assign_source_109 = LOOKUP_ATTRIBUTE( tmp_source_name_97, const_str_plain_diag );
        if ( tmp_assign_source_109 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_diag, tmp_assign_source_109 );
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_source_name_98;
        PyObject *tmp_mvar_value_117;
        tmp_mvar_value_117 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_117 == NULL ))
        {
            tmp_mvar_value_117 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_117 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 142;

            goto frame_exception_exit_1;
        }

        tmp_source_name_98 = tmp_mvar_value_117;
        tmp_assign_source_110 = LOOKUP_ATTRIBUTE( tmp_source_name_98, const_str_plain_zeros );
        if ( tmp_assign_source_110 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_zeros, tmp_assign_source_110 );
    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_source_name_99;
        PyObject *tmp_mvar_value_118;
        tmp_mvar_value_118 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_118 == NULL ))
        {
            tmp_mvar_value_118 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_118 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 143;

            goto frame_exception_exit_1;
        }

        tmp_source_name_99 = tmp_mvar_value_118;
        tmp_assign_source_111 = LOOKUP_ATTRIBUTE( tmp_source_name_99, const_str_plain_ones );
        if ( tmp_assign_source_111 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_ones, tmp_assign_source_111 );
    }
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_source_name_100;
        PyObject *tmp_mvar_value_119;
        tmp_mvar_value_119 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_119 == NULL ))
        {
            tmp_mvar_value_119 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_119 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }

        tmp_source_name_100 = tmp_mvar_value_119;
        tmp_assign_source_112 = LOOKUP_ATTRIBUTE( tmp_source_name_100, const_str_plain_hilbert );
        if ( tmp_assign_source_112 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_hilbert, tmp_assign_source_112 );
    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_source_name_101;
        PyObject *tmp_mvar_value_120;
        tmp_mvar_value_120 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_120 == NULL ))
        {
            tmp_mvar_value_120 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_120 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 145;

            goto frame_exception_exit_1;
        }

        tmp_source_name_101 = tmp_mvar_value_120;
        tmp_assign_source_113 = LOOKUP_ATTRIBUTE( tmp_source_name_101, const_str_plain_randmatrix );
        if ( tmp_assign_source_113 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_randmatrix, tmp_assign_source_113 );
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_source_name_102;
        PyObject *tmp_mvar_value_121;
        tmp_mvar_value_121 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_121 == NULL ))
        {
            tmp_mvar_value_121 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_121 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 146;

            goto frame_exception_exit_1;
        }

        tmp_source_name_102 = tmp_mvar_value_121;
        tmp_assign_source_114 = LOOKUP_ATTRIBUTE( tmp_source_name_102, const_str_plain_swap_row );
        if ( tmp_assign_source_114 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_swap_row, tmp_assign_source_114 );
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_source_name_103;
        PyObject *tmp_mvar_value_122;
        tmp_mvar_value_122 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_122 == NULL ))
        {
            tmp_mvar_value_122 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_122 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 147;

            goto frame_exception_exit_1;
        }

        tmp_source_name_103 = tmp_mvar_value_122;
        tmp_assign_source_115 = LOOKUP_ATTRIBUTE( tmp_source_name_103, const_str_plain_extend );
        if ( tmp_assign_source_115 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_extend, tmp_assign_source_115 );
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_source_name_104;
        PyObject *tmp_mvar_value_123;
        tmp_mvar_value_123 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_123 == NULL ))
        {
            tmp_mvar_value_123 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_123 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 148;

            goto frame_exception_exit_1;
        }

        tmp_source_name_104 = tmp_mvar_value_123;
        tmp_assign_source_116 = LOOKUP_ATTRIBUTE( tmp_source_name_104, const_str_plain_norm );
        if ( tmp_assign_source_116 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_norm, tmp_assign_source_116 );
    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_source_name_105;
        PyObject *tmp_mvar_value_124;
        tmp_mvar_value_124 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_124 == NULL ))
        {
            tmp_mvar_value_124 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_124 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }

        tmp_source_name_105 = tmp_mvar_value_124;
        tmp_assign_source_117 = LOOKUP_ATTRIBUTE( tmp_source_name_105, const_str_plain_mnorm );
        if ( tmp_assign_source_117 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mnorm, tmp_assign_source_117 );
    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_source_name_106;
        PyObject *tmp_mvar_value_125;
        tmp_mvar_value_125 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_125 == NULL ))
        {
            tmp_mvar_value_125 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_125 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 151;

            goto frame_exception_exit_1;
        }

        tmp_source_name_106 = tmp_mvar_value_125;
        tmp_assign_source_118 = LOOKUP_ATTRIBUTE( tmp_source_name_106, const_str_plain_lu_solve );
        if ( tmp_assign_source_118 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_lu_solve, tmp_assign_source_118 );
    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_source_name_107;
        PyObject *tmp_mvar_value_126;
        tmp_mvar_value_126 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_126 == NULL ))
        {
            tmp_mvar_value_126 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_126 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 152;

            goto frame_exception_exit_1;
        }

        tmp_source_name_107 = tmp_mvar_value_126;
        tmp_assign_source_119 = LOOKUP_ATTRIBUTE( tmp_source_name_107, const_str_plain_lu );
        if ( tmp_assign_source_119 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_lu, tmp_assign_source_119 );
    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_source_name_108;
        PyObject *tmp_mvar_value_127;
        tmp_mvar_value_127 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_127 == NULL ))
        {
            tmp_mvar_value_127 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_127 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 153;

            goto frame_exception_exit_1;
        }

        tmp_source_name_108 = tmp_mvar_value_127;
        tmp_assign_source_120 = LOOKUP_ATTRIBUTE( tmp_source_name_108, const_str_plain_qr );
        if ( tmp_assign_source_120 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_qr, tmp_assign_source_120 );
    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_source_name_109;
        PyObject *tmp_mvar_value_128;
        tmp_mvar_value_128 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_128 == NULL ))
        {
            tmp_mvar_value_128 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_128 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 154;

            goto frame_exception_exit_1;
        }

        tmp_source_name_109 = tmp_mvar_value_128;
        tmp_assign_source_121 = LOOKUP_ATTRIBUTE( tmp_source_name_109, const_str_plain_unitvector );
        if ( tmp_assign_source_121 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_unitvector, tmp_assign_source_121 );
    }
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_source_name_110;
        PyObject *tmp_mvar_value_129;
        tmp_mvar_value_129 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_129 == NULL ))
        {
            tmp_mvar_value_129 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_129 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 155;

            goto frame_exception_exit_1;
        }

        tmp_source_name_110 = tmp_mvar_value_129;
        tmp_assign_source_122 = LOOKUP_ATTRIBUTE( tmp_source_name_110, const_str_plain_inverse );
        if ( tmp_assign_source_122 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_inverse, tmp_assign_source_122 );
    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_source_name_111;
        PyObject *tmp_mvar_value_130;
        tmp_mvar_value_130 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_130 == NULL ))
        {
            tmp_mvar_value_130 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_130 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }

        tmp_source_name_111 = tmp_mvar_value_130;
        tmp_assign_source_123 = LOOKUP_ATTRIBUTE( tmp_source_name_111, const_str_plain_residual );
        if ( tmp_assign_source_123 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_residual, tmp_assign_source_123 );
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_source_name_112;
        PyObject *tmp_mvar_value_131;
        tmp_mvar_value_131 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_131 == NULL ))
        {
            tmp_mvar_value_131 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_131 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }

        tmp_source_name_112 = tmp_mvar_value_131;
        tmp_assign_source_124 = LOOKUP_ATTRIBUTE( tmp_source_name_112, const_str_plain_qr_solve );
        if ( tmp_assign_source_124 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_qr_solve, tmp_assign_source_124 );
    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_source_name_113;
        PyObject *tmp_mvar_value_132;
        tmp_mvar_value_132 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_132 == NULL ))
        {
            tmp_mvar_value_132 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_132 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 158;

            goto frame_exception_exit_1;
        }

        tmp_source_name_113 = tmp_mvar_value_132;
        tmp_assign_source_125 = LOOKUP_ATTRIBUTE( tmp_source_name_113, const_str_plain_cholesky );
        if ( tmp_assign_source_125 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_cholesky, tmp_assign_source_125 );
    }
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_source_name_114;
        PyObject *tmp_mvar_value_133;
        tmp_mvar_value_133 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_133 == NULL ))
        {
            tmp_mvar_value_133 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_133 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 159;

            goto frame_exception_exit_1;
        }

        tmp_source_name_114 = tmp_mvar_value_133;
        tmp_assign_source_126 = LOOKUP_ATTRIBUTE( tmp_source_name_114, const_str_plain_cholesky_solve );
        if ( tmp_assign_source_126 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_cholesky_solve, tmp_assign_source_126 );
    }
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_source_name_115;
        PyObject *tmp_mvar_value_134;
        tmp_mvar_value_134 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_134 == NULL ))
        {
            tmp_mvar_value_134 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_134 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 160;

            goto frame_exception_exit_1;
        }

        tmp_source_name_115 = tmp_mvar_value_134;
        tmp_assign_source_127 = LOOKUP_ATTRIBUTE( tmp_source_name_115, const_str_plain_det );
        if ( tmp_assign_source_127 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_det, tmp_assign_source_127 );
    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_source_name_116;
        PyObject *tmp_mvar_value_135;
        tmp_mvar_value_135 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_135 == NULL ))
        {
            tmp_mvar_value_135 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_135 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 161;

            goto frame_exception_exit_1;
        }

        tmp_source_name_116 = tmp_mvar_value_135;
        tmp_assign_source_128 = LOOKUP_ATTRIBUTE( tmp_source_name_116, const_str_plain_cond );
        if ( tmp_assign_source_128 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_cond, tmp_assign_source_128 );
    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_source_name_117;
        PyObject *tmp_mvar_value_136;
        tmp_mvar_value_136 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_136 == NULL ))
        {
            tmp_mvar_value_136 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_136 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 162;

            goto frame_exception_exit_1;
        }

        tmp_source_name_117 = tmp_mvar_value_136;
        tmp_assign_source_129 = LOOKUP_ATTRIBUTE( tmp_source_name_117, const_str_plain_hessenberg );
        if ( tmp_assign_source_129 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_hessenberg, tmp_assign_source_129 );
    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_source_name_118;
        PyObject *tmp_mvar_value_137;
        tmp_mvar_value_137 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_137 == NULL ))
        {
            tmp_mvar_value_137 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_137 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 163;

            goto frame_exception_exit_1;
        }

        tmp_source_name_118 = tmp_mvar_value_137;
        tmp_assign_source_130 = LOOKUP_ATTRIBUTE( tmp_source_name_118, const_str_plain_schur );
        if ( tmp_assign_source_130 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_schur, tmp_assign_source_130 );
    }
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_source_name_119;
        PyObject *tmp_mvar_value_138;
        tmp_mvar_value_138 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_138 == NULL ))
        {
            tmp_mvar_value_138 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_138 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 164;

            goto frame_exception_exit_1;
        }

        tmp_source_name_119 = tmp_mvar_value_138;
        tmp_assign_source_131 = LOOKUP_ATTRIBUTE( tmp_source_name_119, const_str_plain_eig );
        if ( tmp_assign_source_131 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_eig, tmp_assign_source_131 );
    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_source_name_120;
        PyObject *tmp_mvar_value_139;
        tmp_mvar_value_139 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_139 == NULL ))
        {
            tmp_mvar_value_139 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_139 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 165;

            goto frame_exception_exit_1;
        }

        tmp_source_name_120 = tmp_mvar_value_139;
        tmp_assign_source_132 = LOOKUP_ATTRIBUTE( tmp_source_name_120, const_str_plain_eig_sort );
        if ( tmp_assign_source_132 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_eig_sort, tmp_assign_source_132 );
    }
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_source_name_121;
        PyObject *tmp_mvar_value_140;
        tmp_mvar_value_140 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_140 == NULL ))
        {
            tmp_mvar_value_140 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_140 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 166;

            goto frame_exception_exit_1;
        }

        tmp_source_name_121 = tmp_mvar_value_140;
        tmp_assign_source_133 = LOOKUP_ATTRIBUTE( tmp_source_name_121, const_str_plain_eigsy );
        if ( tmp_assign_source_133 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_eigsy, tmp_assign_source_133 );
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_source_name_122;
        PyObject *tmp_mvar_value_141;
        tmp_mvar_value_141 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_141 == NULL ))
        {
            tmp_mvar_value_141 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_141 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 167;

            goto frame_exception_exit_1;
        }

        tmp_source_name_122 = tmp_mvar_value_141;
        tmp_assign_source_134 = LOOKUP_ATTRIBUTE( tmp_source_name_122, const_str_plain_eighe );
        if ( tmp_assign_source_134 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_eighe, tmp_assign_source_134 );
    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_source_name_123;
        PyObject *tmp_mvar_value_142;
        tmp_mvar_value_142 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_142 == NULL ))
        {
            tmp_mvar_value_142 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_142 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 168;

            goto frame_exception_exit_1;
        }

        tmp_source_name_123 = tmp_mvar_value_142;
        tmp_assign_source_135 = LOOKUP_ATTRIBUTE( tmp_source_name_123, const_str_plain_eigh );
        if ( tmp_assign_source_135 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_eigh, tmp_assign_source_135 );
    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_source_name_124;
        PyObject *tmp_mvar_value_143;
        tmp_mvar_value_143 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_143 == NULL ))
        {
            tmp_mvar_value_143 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_143 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 169;

            goto frame_exception_exit_1;
        }

        tmp_source_name_124 = tmp_mvar_value_143;
        tmp_assign_source_136 = LOOKUP_ATTRIBUTE( tmp_source_name_124, const_str_plain_svd_r );
        if ( tmp_assign_source_136 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_svd_r, tmp_assign_source_136 );
    }
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_source_name_125;
        PyObject *tmp_mvar_value_144;
        tmp_mvar_value_144 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_144 == NULL ))
        {
            tmp_mvar_value_144 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_144 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 170;

            goto frame_exception_exit_1;
        }

        tmp_source_name_125 = tmp_mvar_value_144;
        tmp_assign_source_137 = LOOKUP_ATTRIBUTE( tmp_source_name_125, const_str_plain_svd_c );
        if ( tmp_assign_source_137 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_svd_c, tmp_assign_source_137 );
    }
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_source_name_126;
        PyObject *tmp_mvar_value_145;
        tmp_mvar_value_145 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_145 == NULL ))
        {
            tmp_mvar_value_145 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_145 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }

        tmp_source_name_126 = tmp_mvar_value_145;
        tmp_assign_source_138 = LOOKUP_ATTRIBUTE( tmp_source_name_126, const_str_plain_svd );
        if ( tmp_assign_source_138 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_svd, tmp_assign_source_138 );
    }
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_source_name_127;
        PyObject *tmp_mvar_value_146;
        tmp_mvar_value_146 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_146 == NULL ))
        {
            tmp_mvar_value_146 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_146 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 172;

            goto frame_exception_exit_1;
        }

        tmp_source_name_127 = tmp_mvar_value_146;
        tmp_assign_source_139 = LOOKUP_ATTRIBUTE( tmp_source_name_127, const_str_plain_gauss_quadrature );
        if ( tmp_assign_source_139 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_gauss_quadrature, tmp_assign_source_139 );
    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_source_name_128;
        PyObject *tmp_mvar_value_147;
        tmp_mvar_value_147 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_147 == NULL ))
        {
            tmp_mvar_value_147 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_147 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }

        tmp_source_name_128 = tmp_mvar_value_147;
        tmp_assign_source_140 = LOOKUP_ATTRIBUTE( tmp_source_name_128, const_str_plain_expm );
        if ( tmp_assign_source_140 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_expm, tmp_assign_source_140 );
    }
    {
        PyObject *tmp_assign_source_141;
        PyObject *tmp_source_name_129;
        PyObject *tmp_mvar_value_148;
        tmp_mvar_value_148 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_148 == NULL ))
        {
            tmp_mvar_value_148 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_148 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 175;

            goto frame_exception_exit_1;
        }

        tmp_source_name_129 = tmp_mvar_value_148;
        tmp_assign_source_141 = LOOKUP_ATTRIBUTE( tmp_source_name_129, const_str_plain_sqrtm );
        if ( tmp_assign_source_141 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_sqrtm, tmp_assign_source_141 );
    }
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_source_name_130;
        PyObject *tmp_mvar_value_149;
        tmp_mvar_value_149 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_149 == NULL ))
        {
            tmp_mvar_value_149 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_149 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }

        tmp_source_name_130 = tmp_mvar_value_149;
        tmp_assign_source_142 = LOOKUP_ATTRIBUTE( tmp_source_name_130, const_str_plain_powm );
        if ( tmp_assign_source_142 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_powm, tmp_assign_source_142 );
    }
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_source_name_131;
        PyObject *tmp_mvar_value_150;
        tmp_mvar_value_150 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_150 == NULL ))
        {
            tmp_mvar_value_150 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_150 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }

        tmp_source_name_131 = tmp_mvar_value_150;
        tmp_assign_source_143 = LOOKUP_ATTRIBUTE( tmp_source_name_131, const_str_plain_logm );
        if ( tmp_assign_source_143 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_logm, tmp_assign_source_143 );
    }
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_source_name_132;
        PyObject *tmp_mvar_value_151;
        tmp_mvar_value_151 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_151 == NULL ))
        {
            tmp_mvar_value_151 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_151 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }

        tmp_source_name_132 = tmp_mvar_value_151;
        tmp_assign_source_144 = LOOKUP_ATTRIBUTE( tmp_source_name_132, const_str_plain_sinm );
        if ( tmp_assign_source_144 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_sinm, tmp_assign_source_144 );
    }
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_source_name_133;
        PyObject *tmp_mvar_value_152;
        tmp_mvar_value_152 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_152 == NULL ))
        {
            tmp_mvar_value_152 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_152 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }

        tmp_source_name_133 = tmp_mvar_value_152;
        tmp_assign_source_145 = LOOKUP_ATTRIBUTE( tmp_source_name_133, const_str_plain_cosm );
        if ( tmp_assign_source_145 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_cosm, tmp_assign_source_145 );
    }
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_source_name_134;
        PyObject *tmp_mvar_value_153;
        tmp_mvar_value_153 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_153 == NULL ))
        {
            tmp_mvar_value_153 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_153 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }

        tmp_source_name_134 = tmp_mvar_value_153;
        tmp_assign_source_146 = LOOKUP_ATTRIBUTE( tmp_source_name_134, const_str_plain_mpf );
        if ( tmp_assign_source_146 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mpf, tmp_assign_source_146 );
    }
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_source_name_135;
        PyObject *tmp_mvar_value_154;
        tmp_mvar_value_154 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_154 == NULL ))
        {
            tmp_mvar_value_154 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_154 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }

        tmp_source_name_135 = tmp_mvar_value_154;
        tmp_assign_source_147 = LOOKUP_ATTRIBUTE( tmp_source_name_135, const_str_plain_j );
        if ( tmp_assign_source_147 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_j, tmp_assign_source_147 );
    }
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_source_name_136;
        PyObject *tmp_mvar_value_155;
        tmp_mvar_value_155 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_155 == NULL ))
        {
            tmp_mvar_value_155 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_155 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 183;

            goto frame_exception_exit_1;
        }

        tmp_source_name_136 = tmp_mvar_value_155;
        tmp_assign_source_148 = LOOKUP_ATTRIBUTE( tmp_source_name_136, const_str_plain_exp );
        if ( tmp_assign_source_148 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_exp, tmp_assign_source_148 );
    }
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_source_name_137;
        PyObject *tmp_mvar_value_156;
        tmp_mvar_value_156 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_156 == NULL ))
        {
            tmp_mvar_value_156 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_156 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 184;

            goto frame_exception_exit_1;
        }

        tmp_source_name_137 = tmp_mvar_value_156;
        tmp_assign_source_149 = LOOKUP_ATTRIBUTE( tmp_source_name_137, const_str_plain_expj );
        if ( tmp_assign_source_149 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_expj, tmp_assign_source_149 );
    }
    {
        PyObject *tmp_assign_source_150;
        PyObject *tmp_source_name_138;
        PyObject *tmp_mvar_value_157;
        tmp_mvar_value_157 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_157 == NULL ))
        {
            tmp_mvar_value_157 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_157 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }

        tmp_source_name_138 = tmp_mvar_value_157;
        tmp_assign_source_150 = LOOKUP_ATTRIBUTE( tmp_source_name_138, const_str_plain_expjpi );
        if ( tmp_assign_source_150 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_expjpi, tmp_assign_source_150 );
    }
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_source_name_139;
        PyObject *tmp_mvar_value_158;
        tmp_mvar_value_158 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_158 == NULL ))
        {
            tmp_mvar_value_158 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_158 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }

        tmp_source_name_139 = tmp_mvar_value_158;
        tmp_assign_source_151 = LOOKUP_ATTRIBUTE( tmp_source_name_139, const_str_plain_ln );
        if ( tmp_assign_source_151 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_ln, tmp_assign_source_151 );
    }
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_source_name_140;
        PyObject *tmp_mvar_value_159;
        tmp_mvar_value_159 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_159 == NULL ))
        {
            tmp_mvar_value_159 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_159 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 187;

            goto frame_exception_exit_1;
        }

        tmp_source_name_140 = tmp_mvar_value_159;
        tmp_assign_source_152 = LOOKUP_ATTRIBUTE( tmp_source_name_140, const_str_plain_im );
        if ( tmp_assign_source_152 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_im, tmp_assign_source_152 );
    }
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_source_name_141;
        PyObject *tmp_mvar_value_160;
        tmp_mvar_value_160 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_160 == NULL ))
        {
            tmp_mvar_value_160 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_160 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 188;

            goto frame_exception_exit_1;
        }

        tmp_source_name_141 = tmp_mvar_value_160;
        tmp_assign_source_153 = LOOKUP_ATTRIBUTE( tmp_source_name_141, const_str_plain_re );
        if ( tmp_assign_source_153 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_153 );
    }
    {
        PyObject *tmp_assign_source_154;
        PyObject *tmp_source_name_142;
        PyObject *tmp_mvar_value_161;
        tmp_mvar_value_161 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_161 == NULL ))
        {
            tmp_mvar_value_161 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_161 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 189;

            goto frame_exception_exit_1;
        }

        tmp_source_name_142 = tmp_mvar_value_161;
        tmp_assign_source_154 = LOOKUP_ATTRIBUTE( tmp_source_name_142, const_str_plain_inf );
        if ( tmp_assign_source_154 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_inf, tmp_assign_source_154 );
    }
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_source_name_143;
        PyObject *tmp_mvar_value_162;
        tmp_mvar_value_162 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_162 == NULL ))
        {
            tmp_mvar_value_162 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_162 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 190;

            goto frame_exception_exit_1;
        }

        tmp_source_name_143 = tmp_mvar_value_162;
        tmp_assign_source_155 = LOOKUP_ATTRIBUTE( tmp_source_name_143, const_str_plain_ninf );
        if ( tmp_assign_source_155 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_ninf, tmp_assign_source_155 );
    }
    {
        PyObject *tmp_assign_source_156;
        PyObject *tmp_source_name_144;
        PyObject *tmp_mvar_value_163;
        tmp_mvar_value_163 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_163 == NULL ))
        {
            tmp_mvar_value_163 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_163 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 191;

            goto frame_exception_exit_1;
        }

        tmp_source_name_144 = tmp_mvar_value_163;
        tmp_assign_source_156 = LOOKUP_ATTRIBUTE( tmp_source_name_144, const_str_plain_sign );
        if ( tmp_assign_source_156 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_sign, tmp_assign_source_156 );
    }
    {
        PyObject *tmp_assign_source_157;
        PyObject *tmp_source_name_145;
        PyObject *tmp_mvar_value_164;
        tmp_mvar_value_164 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_164 == NULL ))
        {
            tmp_mvar_value_164 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_164 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 193;

            goto frame_exception_exit_1;
        }

        tmp_source_name_145 = tmp_mvar_value_164;
        tmp_assign_source_157 = LOOKUP_ATTRIBUTE( tmp_source_name_145, const_str_plain_eps );
        if ( tmp_assign_source_157 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_eps, tmp_assign_source_157 );
    }
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_source_name_146;
        PyObject *tmp_mvar_value_165;
        tmp_mvar_value_165 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_165 == NULL ))
        {
            tmp_mvar_value_165 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_165 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 194;

            goto frame_exception_exit_1;
        }

        tmp_source_name_146 = tmp_mvar_value_165;
        tmp_assign_source_158 = LOOKUP_ATTRIBUTE( tmp_source_name_146, const_str_plain_pi );
        if ( tmp_assign_source_158 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_pi, tmp_assign_source_158 );
    }
    {
        PyObject *tmp_assign_source_159;
        PyObject *tmp_source_name_147;
        PyObject *tmp_mvar_value_166;
        tmp_mvar_value_166 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_166 == NULL ))
        {
            tmp_mvar_value_166 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_166 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }

        tmp_source_name_147 = tmp_mvar_value_166;
        tmp_assign_source_159 = LOOKUP_ATTRIBUTE( tmp_source_name_147, const_str_plain_ln2 );
        if ( tmp_assign_source_159 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_ln2, tmp_assign_source_159 );
    }
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_source_name_148;
        PyObject *tmp_mvar_value_167;
        tmp_mvar_value_167 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_167 == NULL ))
        {
            tmp_mvar_value_167 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_167 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 196;

            goto frame_exception_exit_1;
        }

        tmp_source_name_148 = tmp_mvar_value_167;
        tmp_assign_source_160 = LOOKUP_ATTRIBUTE( tmp_source_name_148, const_str_plain_ln10 );
        if ( tmp_assign_source_160 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_ln10, tmp_assign_source_160 );
    }
    {
        PyObject *tmp_assign_source_161;
        PyObject *tmp_source_name_149;
        PyObject *tmp_mvar_value_168;
        tmp_mvar_value_168 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_168 == NULL ))
        {
            tmp_mvar_value_168 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_168 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 197;

            goto frame_exception_exit_1;
        }

        tmp_source_name_149 = tmp_mvar_value_168;
        tmp_assign_source_161 = LOOKUP_ATTRIBUTE( tmp_source_name_149, const_str_plain_phi );
        if ( tmp_assign_source_161 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_phi, tmp_assign_source_161 );
    }
    {
        PyObject *tmp_assign_source_162;
        PyObject *tmp_source_name_150;
        PyObject *tmp_mvar_value_169;
        tmp_mvar_value_169 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_169 == NULL ))
        {
            tmp_mvar_value_169 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_169 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 198;

            goto frame_exception_exit_1;
        }

        tmp_source_name_150 = tmp_mvar_value_169;
        tmp_assign_source_162 = LOOKUP_ATTRIBUTE( tmp_source_name_150, const_str_plain_e );
        if ( tmp_assign_source_162 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_e, tmp_assign_source_162 );
    }
    {
        PyObject *tmp_assign_source_163;
        PyObject *tmp_source_name_151;
        PyObject *tmp_mvar_value_170;
        tmp_mvar_value_170 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_170 == NULL ))
        {
            tmp_mvar_value_170 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_170 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 199;

            goto frame_exception_exit_1;
        }

        tmp_source_name_151 = tmp_mvar_value_170;
        tmp_assign_source_163 = LOOKUP_ATTRIBUTE( tmp_source_name_151, const_str_plain_euler );
        if ( tmp_assign_source_163 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_euler, tmp_assign_source_163 );
    }
    {
        PyObject *tmp_assign_source_164;
        PyObject *tmp_source_name_152;
        PyObject *tmp_mvar_value_171;
        tmp_mvar_value_171 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_171 == NULL ))
        {
            tmp_mvar_value_171 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_171 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }

        tmp_source_name_152 = tmp_mvar_value_171;
        tmp_assign_source_164 = LOOKUP_ATTRIBUTE( tmp_source_name_152, const_str_plain_catalan );
        if ( tmp_assign_source_164 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_catalan, tmp_assign_source_164 );
    }
    {
        PyObject *tmp_assign_source_165;
        PyObject *tmp_source_name_153;
        PyObject *tmp_mvar_value_172;
        tmp_mvar_value_172 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_172 == NULL ))
        {
            tmp_mvar_value_172 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_172 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }

        tmp_source_name_153 = tmp_mvar_value_172;
        tmp_assign_source_165 = LOOKUP_ATTRIBUTE( tmp_source_name_153, const_str_plain_khinchin );
        if ( tmp_assign_source_165 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_khinchin, tmp_assign_source_165 );
    }
    {
        PyObject *tmp_assign_source_166;
        PyObject *tmp_source_name_154;
        PyObject *tmp_mvar_value_173;
        tmp_mvar_value_173 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_173 == NULL ))
        {
            tmp_mvar_value_173 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_173 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 202;

            goto frame_exception_exit_1;
        }

        tmp_source_name_154 = tmp_mvar_value_173;
        tmp_assign_source_166 = LOOKUP_ATTRIBUTE( tmp_source_name_154, const_str_plain_glaisher );
        if ( tmp_assign_source_166 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_glaisher, tmp_assign_source_166 );
    }
    {
        PyObject *tmp_assign_source_167;
        PyObject *tmp_source_name_155;
        PyObject *tmp_mvar_value_174;
        tmp_mvar_value_174 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_174 == NULL ))
        {
            tmp_mvar_value_174 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_174 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 203;

            goto frame_exception_exit_1;
        }

        tmp_source_name_155 = tmp_mvar_value_174;
        tmp_assign_source_167 = LOOKUP_ATTRIBUTE( tmp_source_name_155, const_str_plain_apery );
        if ( tmp_assign_source_167 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_apery, tmp_assign_source_167 );
    }
    {
        PyObject *tmp_assign_source_168;
        PyObject *tmp_source_name_156;
        PyObject *tmp_mvar_value_175;
        tmp_mvar_value_175 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_175 == NULL ))
        {
            tmp_mvar_value_175 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_175 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 204;

            goto frame_exception_exit_1;
        }

        tmp_source_name_156 = tmp_mvar_value_175;
        tmp_assign_source_168 = LOOKUP_ATTRIBUTE( tmp_source_name_156, const_str_plain_degree );
        if ( tmp_assign_source_168 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_degree, tmp_assign_source_168 );
    }
    {
        PyObject *tmp_assign_source_169;
        PyObject *tmp_source_name_157;
        PyObject *tmp_mvar_value_176;
        tmp_mvar_value_176 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_176 == NULL ))
        {
            tmp_mvar_value_176 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_176 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 205;

            goto frame_exception_exit_1;
        }

        tmp_source_name_157 = tmp_mvar_value_176;
        tmp_assign_source_169 = LOOKUP_ATTRIBUTE( tmp_source_name_157, const_str_plain_twinprime );
        if ( tmp_assign_source_169 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_twinprime, tmp_assign_source_169 );
    }
    {
        PyObject *tmp_assign_source_170;
        PyObject *tmp_source_name_158;
        PyObject *tmp_mvar_value_177;
        tmp_mvar_value_177 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_177 == NULL ))
        {
            tmp_mvar_value_177 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_177 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }

        tmp_source_name_158 = tmp_mvar_value_177;
        tmp_assign_source_170 = LOOKUP_ATTRIBUTE( tmp_source_name_158, const_str_plain_mertens );
        if ( tmp_assign_source_170 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mertens, tmp_assign_source_170 );
    }
    {
        PyObject *tmp_assign_source_171;
        PyObject *tmp_source_name_159;
        PyObject *tmp_mvar_value_178;
        tmp_mvar_value_178 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_178 == NULL ))
        {
            tmp_mvar_value_178 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_178 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 208;

            goto frame_exception_exit_1;
        }

        tmp_source_name_159 = tmp_mvar_value_178;
        tmp_assign_source_171 = LOOKUP_ATTRIBUTE( tmp_source_name_159, const_str_plain_ldexp );
        if ( tmp_assign_source_171 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_ldexp, tmp_assign_source_171 );
    }
    {
        PyObject *tmp_assign_source_172;
        PyObject *tmp_source_name_160;
        PyObject *tmp_mvar_value_179;
        tmp_mvar_value_179 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_179 == NULL ))
        {
            tmp_mvar_value_179 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_179 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 209;

            goto frame_exception_exit_1;
        }

        tmp_source_name_160 = tmp_mvar_value_179;
        tmp_assign_source_172 = LOOKUP_ATTRIBUTE( tmp_source_name_160, const_str_plain_frexp );
        if ( tmp_assign_source_172 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_frexp, tmp_assign_source_172 );
    }
    {
        PyObject *tmp_assign_source_173;
        PyObject *tmp_source_name_161;
        PyObject *tmp_mvar_value_180;
        tmp_mvar_value_180 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_180 == NULL ))
        {
            tmp_mvar_value_180 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_180 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 211;

            goto frame_exception_exit_1;
        }

        tmp_source_name_161 = tmp_mvar_value_180;
        tmp_assign_source_173 = LOOKUP_ATTRIBUTE( tmp_source_name_161, const_str_plain_fsum );
        if ( tmp_assign_source_173 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_fsum, tmp_assign_source_173 );
    }
    {
        PyObject *tmp_assign_source_174;
        PyObject *tmp_source_name_162;
        PyObject *tmp_mvar_value_181;
        tmp_mvar_value_181 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_181 == NULL ))
        {
            tmp_mvar_value_181 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_181 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }

        tmp_source_name_162 = tmp_mvar_value_181;
        tmp_assign_source_174 = LOOKUP_ATTRIBUTE( tmp_source_name_162, const_str_plain_fdot );
        if ( tmp_assign_source_174 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_fdot, tmp_assign_source_174 );
    }
    {
        PyObject *tmp_assign_source_175;
        PyObject *tmp_source_name_163;
        PyObject *tmp_mvar_value_182;
        tmp_mvar_value_182 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_182 == NULL ))
        {
            tmp_mvar_value_182 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_182 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 214;

            goto frame_exception_exit_1;
        }

        tmp_source_name_163 = tmp_mvar_value_182;
        tmp_assign_source_175 = LOOKUP_ATTRIBUTE( tmp_source_name_163, const_str_plain_sqrt );
        if ( tmp_assign_source_175 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_sqrt, tmp_assign_source_175 );
    }
    {
        PyObject *tmp_assign_source_176;
        PyObject *tmp_source_name_164;
        PyObject *tmp_mvar_value_183;
        tmp_mvar_value_183 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_183 == NULL ))
        {
            tmp_mvar_value_183 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_183 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 215;

            goto frame_exception_exit_1;
        }

        tmp_source_name_164 = tmp_mvar_value_183;
        tmp_assign_source_176 = LOOKUP_ATTRIBUTE( tmp_source_name_164, const_str_plain_cbrt );
        if ( tmp_assign_source_176 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_cbrt, tmp_assign_source_176 );
    }
    {
        PyObject *tmp_assign_source_177;
        PyObject *tmp_source_name_165;
        PyObject *tmp_mvar_value_184;
        tmp_mvar_value_184 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_184 == NULL ))
        {
            tmp_mvar_value_184 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_184 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 216;

            goto frame_exception_exit_1;
        }

        tmp_source_name_165 = tmp_mvar_value_184;
        tmp_assign_source_177 = LOOKUP_ATTRIBUTE( tmp_source_name_165, const_str_plain_exp );
        if ( tmp_assign_source_177 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_exp, tmp_assign_source_177 );
    }
    {
        PyObject *tmp_assign_source_178;
        PyObject *tmp_source_name_166;
        PyObject *tmp_mvar_value_185;
        tmp_mvar_value_185 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_185 == NULL ))
        {
            tmp_mvar_value_185 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_185 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 217;

            goto frame_exception_exit_1;
        }

        tmp_source_name_166 = tmp_mvar_value_185;
        tmp_assign_source_178 = LOOKUP_ATTRIBUTE( tmp_source_name_166, const_str_plain_ln );
        if ( tmp_assign_source_178 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_ln, tmp_assign_source_178 );
    }
    {
        PyObject *tmp_assign_source_179;
        PyObject *tmp_source_name_167;
        PyObject *tmp_mvar_value_186;
        tmp_mvar_value_186 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_186 == NULL ))
        {
            tmp_mvar_value_186 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_186 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 218;

            goto frame_exception_exit_1;
        }

        tmp_source_name_167 = tmp_mvar_value_186;
        tmp_assign_source_179 = LOOKUP_ATTRIBUTE( tmp_source_name_167, const_str_plain_log );
        if ( tmp_assign_source_179 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_log, tmp_assign_source_179 );
    }
    {
        PyObject *tmp_assign_source_180;
        PyObject *tmp_source_name_168;
        PyObject *tmp_mvar_value_187;
        tmp_mvar_value_187 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_187 == NULL ))
        {
            tmp_mvar_value_187 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_187 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 219;

            goto frame_exception_exit_1;
        }

        tmp_source_name_168 = tmp_mvar_value_187;
        tmp_assign_source_180 = LOOKUP_ATTRIBUTE( tmp_source_name_168, const_str_plain_log10 );
        if ( tmp_assign_source_180 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_log10, tmp_assign_source_180 );
    }
    {
        PyObject *tmp_assign_source_181;
        PyObject *tmp_source_name_169;
        PyObject *tmp_mvar_value_188;
        tmp_mvar_value_188 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_188 == NULL ))
        {
            tmp_mvar_value_188 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_188 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 220;

            goto frame_exception_exit_1;
        }

        tmp_source_name_169 = tmp_mvar_value_188;
        tmp_assign_source_181 = LOOKUP_ATTRIBUTE( tmp_source_name_169, const_str_plain_power );
        if ( tmp_assign_source_181 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_power, tmp_assign_source_181 );
    }
    {
        PyObject *tmp_assign_source_182;
        PyObject *tmp_source_name_170;
        PyObject *tmp_mvar_value_189;
        tmp_mvar_value_189 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_189 == NULL ))
        {
            tmp_mvar_value_189 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_189 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 221;

            goto frame_exception_exit_1;
        }

        tmp_source_name_170 = tmp_mvar_value_189;
        tmp_assign_source_182 = LOOKUP_ATTRIBUTE( tmp_source_name_170, const_str_plain_cos );
        if ( tmp_assign_source_182 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_cos, tmp_assign_source_182 );
    }
    {
        PyObject *tmp_assign_source_183;
        PyObject *tmp_source_name_171;
        PyObject *tmp_mvar_value_190;
        tmp_mvar_value_190 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_190 == NULL ))
        {
            tmp_mvar_value_190 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_190 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 222;

            goto frame_exception_exit_1;
        }

        tmp_source_name_171 = tmp_mvar_value_190;
        tmp_assign_source_183 = LOOKUP_ATTRIBUTE( tmp_source_name_171, const_str_plain_sin );
        if ( tmp_assign_source_183 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_sin, tmp_assign_source_183 );
    }
    {
        PyObject *tmp_assign_source_184;
        PyObject *tmp_source_name_172;
        PyObject *tmp_mvar_value_191;
        tmp_mvar_value_191 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_191 == NULL ))
        {
            tmp_mvar_value_191 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_191 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 223;

            goto frame_exception_exit_1;
        }

        tmp_source_name_172 = tmp_mvar_value_191;
        tmp_assign_source_184 = LOOKUP_ATTRIBUTE( tmp_source_name_172, const_str_plain_tan );
        if ( tmp_assign_source_184 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_tan, tmp_assign_source_184 );
    }
    {
        PyObject *tmp_assign_source_185;
        PyObject *tmp_source_name_173;
        PyObject *tmp_mvar_value_192;
        tmp_mvar_value_192 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_192 == NULL ))
        {
            tmp_mvar_value_192 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_192 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 224;

            goto frame_exception_exit_1;
        }

        tmp_source_name_173 = tmp_mvar_value_192;
        tmp_assign_source_185 = LOOKUP_ATTRIBUTE( tmp_source_name_173, const_str_plain_cosh );
        if ( tmp_assign_source_185 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_cosh, tmp_assign_source_185 );
    }
    {
        PyObject *tmp_assign_source_186;
        PyObject *tmp_source_name_174;
        PyObject *tmp_mvar_value_193;
        tmp_mvar_value_193 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_193 == NULL ))
        {
            tmp_mvar_value_193 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_193 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 225;

            goto frame_exception_exit_1;
        }

        tmp_source_name_174 = tmp_mvar_value_193;
        tmp_assign_source_186 = LOOKUP_ATTRIBUTE( tmp_source_name_174, const_str_plain_sinh );
        if ( tmp_assign_source_186 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_sinh, tmp_assign_source_186 );
    }
    {
        PyObject *tmp_assign_source_187;
        PyObject *tmp_source_name_175;
        PyObject *tmp_mvar_value_194;
        tmp_mvar_value_194 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_194 == NULL ))
        {
            tmp_mvar_value_194 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_194 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 226;

            goto frame_exception_exit_1;
        }

        tmp_source_name_175 = tmp_mvar_value_194;
        tmp_assign_source_187 = LOOKUP_ATTRIBUTE( tmp_source_name_175, const_str_plain_tanh );
        if ( tmp_assign_source_187 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_tanh, tmp_assign_source_187 );
    }
    {
        PyObject *tmp_assign_source_188;
        PyObject *tmp_source_name_176;
        PyObject *tmp_mvar_value_195;
        tmp_mvar_value_195 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_195 == NULL ))
        {
            tmp_mvar_value_195 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_195 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 227;

            goto frame_exception_exit_1;
        }

        tmp_source_name_176 = tmp_mvar_value_195;
        tmp_assign_source_188 = LOOKUP_ATTRIBUTE( tmp_source_name_176, const_str_plain_acos );
        if ( tmp_assign_source_188 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_acos, tmp_assign_source_188 );
    }
    {
        PyObject *tmp_assign_source_189;
        PyObject *tmp_source_name_177;
        PyObject *tmp_mvar_value_196;
        tmp_mvar_value_196 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_196 == NULL ))
        {
            tmp_mvar_value_196 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_196 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 228;

            goto frame_exception_exit_1;
        }

        tmp_source_name_177 = tmp_mvar_value_196;
        tmp_assign_source_189 = LOOKUP_ATTRIBUTE( tmp_source_name_177, const_str_plain_asin );
        if ( tmp_assign_source_189 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_asin, tmp_assign_source_189 );
    }
    {
        PyObject *tmp_assign_source_190;
        PyObject *tmp_source_name_178;
        PyObject *tmp_mvar_value_197;
        tmp_mvar_value_197 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_197 == NULL ))
        {
            tmp_mvar_value_197 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_197 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 229;

            goto frame_exception_exit_1;
        }

        tmp_source_name_178 = tmp_mvar_value_197;
        tmp_assign_source_190 = LOOKUP_ATTRIBUTE( tmp_source_name_178, const_str_plain_atan );
        if ( tmp_assign_source_190 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_atan, tmp_assign_source_190 );
    }
    {
        PyObject *tmp_assign_source_191;
        PyObject *tmp_source_name_179;
        PyObject *tmp_mvar_value_198;
        tmp_mvar_value_198 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_198 == NULL ))
        {
            tmp_mvar_value_198 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_198 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }

        tmp_source_name_179 = tmp_mvar_value_198;
        tmp_assign_source_191 = LOOKUP_ATTRIBUTE( tmp_source_name_179, const_str_plain_asinh );
        if ( tmp_assign_source_191 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_asinh, tmp_assign_source_191 );
    }
    {
        PyObject *tmp_assign_source_192;
        PyObject *tmp_source_name_180;
        PyObject *tmp_mvar_value_199;
        tmp_mvar_value_199 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_199 == NULL ))
        {
            tmp_mvar_value_199 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_199 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 231;

            goto frame_exception_exit_1;
        }

        tmp_source_name_180 = tmp_mvar_value_199;
        tmp_assign_source_192 = LOOKUP_ATTRIBUTE( tmp_source_name_180, const_str_plain_acosh );
        if ( tmp_assign_source_192 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_acosh, tmp_assign_source_192 );
    }
    {
        PyObject *tmp_assign_source_193;
        PyObject *tmp_source_name_181;
        PyObject *tmp_mvar_value_200;
        tmp_mvar_value_200 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_200 == NULL ))
        {
            tmp_mvar_value_200 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_200 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 232;

            goto frame_exception_exit_1;
        }

        tmp_source_name_181 = tmp_mvar_value_200;
        tmp_assign_source_193 = LOOKUP_ATTRIBUTE( tmp_source_name_181, const_str_plain_atanh );
        if ( tmp_assign_source_193 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_atanh, tmp_assign_source_193 );
    }
    {
        PyObject *tmp_assign_source_194;
        PyObject *tmp_source_name_182;
        PyObject *tmp_mvar_value_201;
        tmp_mvar_value_201 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_201 == NULL ))
        {
            tmp_mvar_value_201 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_201 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }

        tmp_source_name_182 = tmp_mvar_value_201;
        tmp_assign_source_194 = LOOKUP_ATTRIBUTE( tmp_source_name_182, const_str_plain_sec );
        if ( tmp_assign_source_194 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_sec, tmp_assign_source_194 );
    }
    {
        PyObject *tmp_assign_source_195;
        PyObject *tmp_source_name_183;
        PyObject *tmp_mvar_value_202;
        tmp_mvar_value_202 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_202 == NULL ))
        {
            tmp_mvar_value_202 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_202 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }

        tmp_source_name_183 = tmp_mvar_value_202;
        tmp_assign_source_195 = LOOKUP_ATTRIBUTE( tmp_source_name_183, const_str_plain_csc );
        if ( tmp_assign_source_195 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_csc, tmp_assign_source_195 );
    }
    {
        PyObject *tmp_assign_source_196;
        PyObject *tmp_source_name_184;
        PyObject *tmp_mvar_value_203;
        tmp_mvar_value_203 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_203 == NULL ))
        {
            tmp_mvar_value_203 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_203 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 235;

            goto frame_exception_exit_1;
        }

        tmp_source_name_184 = tmp_mvar_value_203;
        tmp_assign_source_196 = LOOKUP_ATTRIBUTE( tmp_source_name_184, const_str_plain_cot );
        if ( tmp_assign_source_196 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_cot, tmp_assign_source_196 );
    }
    {
        PyObject *tmp_assign_source_197;
        PyObject *tmp_source_name_185;
        PyObject *tmp_mvar_value_204;
        tmp_mvar_value_204 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_204 == NULL ))
        {
            tmp_mvar_value_204 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_204 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 236;

            goto frame_exception_exit_1;
        }

        tmp_source_name_185 = tmp_mvar_value_204;
        tmp_assign_source_197 = LOOKUP_ATTRIBUTE( tmp_source_name_185, const_str_plain_sech );
        if ( tmp_assign_source_197 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_sech, tmp_assign_source_197 );
    }
    {
        PyObject *tmp_assign_source_198;
        PyObject *tmp_source_name_186;
        PyObject *tmp_mvar_value_205;
        tmp_mvar_value_205 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_205 == NULL ))
        {
            tmp_mvar_value_205 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_205 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 237;

            goto frame_exception_exit_1;
        }

        tmp_source_name_186 = tmp_mvar_value_205;
        tmp_assign_source_198 = LOOKUP_ATTRIBUTE( tmp_source_name_186, const_str_plain_csch );
        if ( tmp_assign_source_198 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_csch, tmp_assign_source_198 );
    }
    {
        PyObject *tmp_assign_source_199;
        PyObject *tmp_source_name_187;
        PyObject *tmp_mvar_value_206;
        tmp_mvar_value_206 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_206 == NULL ))
        {
            tmp_mvar_value_206 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_206 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 238;

            goto frame_exception_exit_1;
        }

        tmp_source_name_187 = tmp_mvar_value_206;
        tmp_assign_source_199 = LOOKUP_ATTRIBUTE( tmp_source_name_187, const_str_plain_coth );
        if ( tmp_assign_source_199 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_coth, tmp_assign_source_199 );
    }
    {
        PyObject *tmp_assign_source_200;
        PyObject *tmp_source_name_188;
        PyObject *tmp_mvar_value_207;
        tmp_mvar_value_207 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_207 == NULL ))
        {
            tmp_mvar_value_207 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_207 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 239;

            goto frame_exception_exit_1;
        }

        tmp_source_name_188 = tmp_mvar_value_207;
        tmp_assign_source_200 = LOOKUP_ATTRIBUTE( tmp_source_name_188, const_str_plain_asec );
        if ( tmp_assign_source_200 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_asec, tmp_assign_source_200 );
    }
    {
        PyObject *tmp_assign_source_201;
        PyObject *tmp_source_name_189;
        PyObject *tmp_mvar_value_208;
        tmp_mvar_value_208 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_208 == NULL ))
        {
            tmp_mvar_value_208 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_208 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 240;

            goto frame_exception_exit_1;
        }

        tmp_source_name_189 = tmp_mvar_value_208;
        tmp_assign_source_201 = LOOKUP_ATTRIBUTE( tmp_source_name_189, const_str_plain_acsc );
        if ( tmp_assign_source_201 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_acsc, tmp_assign_source_201 );
    }
    {
        PyObject *tmp_assign_source_202;
        PyObject *tmp_source_name_190;
        PyObject *tmp_mvar_value_209;
        tmp_mvar_value_209 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_209 == NULL ))
        {
            tmp_mvar_value_209 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_209 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 241;

            goto frame_exception_exit_1;
        }

        tmp_source_name_190 = tmp_mvar_value_209;
        tmp_assign_source_202 = LOOKUP_ATTRIBUTE( tmp_source_name_190, const_str_plain_acot );
        if ( tmp_assign_source_202 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_acot, tmp_assign_source_202 );
    }
    {
        PyObject *tmp_assign_source_203;
        PyObject *tmp_source_name_191;
        PyObject *tmp_mvar_value_210;
        tmp_mvar_value_210 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_210 == NULL ))
        {
            tmp_mvar_value_210 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_210 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 242;

            goto frame_exception_exit_1;
        }

        tmp_source_name_191 = tmp_mvar_value_210;
        tmp_assign_source_203 = LOOKUP_ATTRIBUTE( tmp_source_name_191, const_str_plain_asech );
        if ( tmp_assign_source_203 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_asech, tmp_assign_source_203 );
    }
    {
        PyObject *tmp_assign_source_204;
        PyObject *tmp_source_name_192;
        PyObject *tmp_mvar_value_211;
        tmp_mvar_value_211 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_211 == NULL ))
        {
            tmp_mvar_value_211 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_211 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 243;

            goto frame_exception_exit_1;
        }

        tmp_source_name_192 = tmp_mvar_value_211;
        tmp_assign_source_204 = LOOKUP_ATTRIBUTE( tmp_source_name_192, const_str_plain_acsch );
        if ( tmp_assign_source_204 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_acsch, tmp_assign_source_204 );
    }
    {
        PyObject *tmp_assign_source_205;
        PyObject *tmp_source_name_193;
        PyObject *tmp_mvar_value_212;
        tmp_mvar_value_212 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_212 == NULL ))
        {
            tmp_mvar_value_212 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_212 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 244;

            goto frame_exception_exit_1;
        }

        tmp_source_name_193 = tmp_mvar_value_212;
        tmp_assign_source_205 = LOOKUP_ATTRIBUTE( tmp_source_name_193, const_str_plain_acoth );
        if ( tmp_assign_source_205 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_acoth, tmp_assign_source_205 );
    }
    {
        PyObject *tmp_assign_source_206;
        PyObject *tmp_source_name_194;
        PyObject *tmp_mvar_value_213;
        tmp_mvar_value_213 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_213 == NULL ))
        {
            tmp_mvar_value_213 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_213 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 245;

            goto frame_exception_exit_1;
        }

        tmp_source_name_194 = tmp_mvar_value_213;
        tmp_assign_source_206 = LOOKUP_ATTRIBUTE( tmp_source_name_194, const_str_plain_cospi );
        if ( tmp_assign_source_206 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_cospi, tmp_assign_source_206 );
    }
    {
        PyObject *tmp_assign_source_207;
        PyObject *tmp_source_name_195;
        PyObject *tmp_mvar_value_214;
        tmp_mvar_value_214 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_214 == NULL ))
        {
            tmp_mvar_value_214 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_214 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 246;

            goto frame_exception_exit_1;
        }

        tmp_source_name_195 = tmp_mvar_value_214;
        tmp_assign_source_207 = LOOKUP_ATTRIBUTE( tmp_source_name_195, const_str_plain_sinpi );
        if ( tmp_assign_source_207 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_sinpi, tmp_assign_source_207 );
    }
    {
        PyObject *tmp_assign_source_208;
        PyObject *tmp_source_name_196;
        PyObject *tmp_mvar_value_215;
        tmp_mvar_value_215 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_215 == NULL ))
        {
            tmp_mvar_value_215 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_215 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 247;

            goto frame_exception_exit_1;
        }

        tmp_source_name_196 = tmp_mvar_value_215;
        tmp_assign_source_208 = LOOKUP_ATTRIBUTE( tmp_source_name_196, const_str_plain_sinc );
        if ( tmp_assign_source_208 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_sinc, tmp_assign_source_208 );
    }
    {
        PyObject *tmp_assign_source_209;
        PyObject *tmp_source_name_197;
        PyObject *tmp_mvar_value_216;
        tmp_mvar_value_216 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_216 == NULL ))
        {
            tmp_mvar_value_216 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_216 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 248;

            goto frame_exception_exit_1;
        }

        tmp_source_name_197 = tmp_mvar_value_216;
        tmp_assign_source_209 = LOOKUP_ATTRIBUTE( tmp_source_name_197, const_str_plain_sincpi );
        if ( tmp_assign_source_209 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_sincpi, tmp_assign_source_209 );
    }
    {
        PyObject *tmp_assign_source_210;
        PyObject *tmp_source_name_198;
        PyObject *tmp_mvar_value_217;
        tmp_mvar_value_217 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_217 == NULL ))
        {
            tmp_mvar_value_217 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_217 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 249;

            goto frame_exception_exit_1;
        }

        tmp_source_name_198 = tmp_mvar_value_217;
        tmp_assign_source_210 = LOOKUP_ATTRIBUTE( tmp_source_name_198, const_str_plain_cos_sin );
        if ( tmp_assign_source_210 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_cos_sin, tmp_assign_source_210 );
    }
    {
        PyObject *tmp_assign_source_211;
        PyObject *tmp_source_name_199;
        PyObject *tmp_mvar_value_218;
        tmp_mvar_value_218 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_218 == NULL ))
        {
            tmp_mvar_value_218 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_218 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 250;

            goto frame_exception_exit_1;
        }

        tmp_source_name_199 = tmp_mvar_value_218;
        tmp_assign_source_211 = LOOKUP_ATTRIBUTE( tmp_source_name_199, const_str_plain_cospi_sinpi );
        if ( tmp_assign_source_211 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_cospi_sinpi, tmp_assign_source_211 );
    }
    {
        PyObject *tmp_assign_source_212;
        PyObject *tmp_source_name_200;
        PyObject *tmp_mvar_value_219;
        tmp_mvar_value_219 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_219 == NULL ))
        {
            tmp_mvar_value_219 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_219 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }

        tmp_source_name_200 = tmp_mvar_value_219;
        tmp_assign_source_212 = LOOKUP_ATTRIBUTE( tmp_source_name_200, const_str_plain_fabs );
        if ( tmp_assign_source_212 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_fabs, tmp_assign_source_212 );
    }
    {
        PyObject *tmp_assign_source_213;
        PyObject *tmp_source_name_201;
        PyObject *tmp_mvar_value_220;
        tmp_mvar_value_220 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_220 == NULL ))
        {
            tmp_mvar_value_220 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_220 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 252;

            goto frame_exception_exit_1;
        }

        tmp_source_name_201 = tmp_mvar_value_220;
        tmp_assign_source_213 = LOOKUP_ATTRIBUTE( tmp_source_name_201, const_str_plain_re );
        if ( tmp_assign_source_213 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_213 );
    }
    {
        PyObject *tmp_assign_source_214;
        PyObject *tmp_source_name_202;
        PyObject *tmp_mvar_value_221;
        tmp_mvar_value_221 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_221 == NULL ))
        {
            tmp_mvar_value_221 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_221 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 253;

            goto frame_exception_exit_1;
        }

        tmp_source_name_202 = tmp_mvar_value_221;
        tmp_assign_source_214 = LOOKUP_ATTRIBUTE( tmp_source_name_202, const_str_plain_im );
        if ( tmp_assign_source_214 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_im, tmp_assign_source_214 );
    }
    {
        PyObject *tmp_assign_source_215;
        PyObject *tmp_source_name_203;
        PyObject *tmp_mvar_value_222;
        tmp_mvar_value_222 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_222 == NULL ))
        {
            tmp_mvar_value_222 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_222 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 254;

            goto frame_exception_exit_1;
        }

        tmp_source_name_203 = tmp_mvar_value_222;
        tmp_assign_source_215 = LOOKUP_ATTRIBUTE( tmp_source_name_203, const_str_plain_conj );
        if ( tmp_assign_source_215 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_conj, tmp_assign_source_215 );
    }
    {
        PyObject *tmp_assign_source_216;
        PyObject *tmp_source_name_204;
        PyObject *tmp_mvar_value_223;
        tmp_mvar_value_223 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_223 == NULL ))
        {
            tmp_mvar_value_223 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_223 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 255;

            goto frame_exception_exit_1;
        }

        tmp_source_name_204 = tmp_mvar_value_223;
        tmp_assign_source_216 = LOOKUP_ATTRIBUTE( tmp_source_name_204, const_str_plain_floor );
        if ( tmp_assign_source_216 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_floor, tmp_assign_source_216 );
    }
    {
        PyObject *tmp_assign_source_217;
        PyObject *tmp_source_name_205;
        PyObject *tmp_mvar_value_224;
        tmp_mvar_value_224 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_224 == NULL ))
        {
            tmp_mvar_value_224 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_224 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 256;

            goto frame_exception_exit_1;
        }

        tmp_source_name_205 = tmp_mvar_value_224;
        tmp_assign_source_217 = LOOKUP_ATTRIBUTE( tmp_source_name_205, const_str_plain_ceil );
        if ( tmp_assign_source_217 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_ceil, tmp_assign_source_217 );
    }
    {
        PyObject *tmp_assign_source_218;
        PyObject *tmp_source_name_206;
        PyObject *tmp_mvar_value_225;
        tmp_mvar_value_225 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_225 == NULL ))
        {
            tmp_mvar_value_225 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_225 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 257;

            goto frame_exception_exit_1;
        }

        tmp_source_name_206 = tmp_mvar_value_225;
        tmp_assign_source_218 = LOOKUP_ATTRIBUTE( tmp_source_name_206, const_str_plain_nint );
        if ( tmp_assign_source_218 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_nint, tmp_assign_source_218 );
    }
    {
        PyObject *tmp_assign_source_219;
        PyObject *tmp_source_name_207;
        PyObject *tmp_mvar_value_226;
        tmp_mvar_value_226 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_226 == NULL ))
        {
            tmp_mvar_value_226 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_226 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 258;

            goto frame_exception_exit_1;
        }

        tmp_source_name_207 = tmp_mvar_value_226;
        tmp_assign_source_219 = LOOKUP_ATTRIBUTE( tmp_source_name_207, const_str_plain_frac );
        if ( tmp_assign_source_219 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_frac, tmp_assign_source_219 );
    }
    {
        PyObject *tmp_assign_source_220;
        PyObject *tmp_source_name_208;
        PyObject *tmp_mvar_value_227;
        tmp_mvar_value_227 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_227 == NULL ))
        {
            tmp_mvar_value_227 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_227 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 259;

            goto frame_exception_exit_1;
        }

        tmp_source_name_208 = tmp_mvar_value_227;
        tmp_assign_source_220 = LOOKUP_ATTRIBUTE( tmp_source_name_208, const_str_plain_root );
        if ( tmp_assign_source_220 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 259;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_root, tmp_assign_source_220 );
    }
    {
        PyObject *tmp_assign_source_221;
        PyObject *tmp_source_name_209;
        PyObject *tmp_mvar_value_228;
        tmp_mvar_value_228 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_228 == NULL ))
        {
            tmp_mvar_value_228 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_228 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 260;

            goto frame_exception_exit_1;
        }

        tmp_source_name_209 = tmp_mvar_value_228;
        tmp_assign_source_221 = LOOKUP_ATTRIBUTE( tmp_source_name_209, const_str_plain_nthroot );
        if ( tmp_assign_source_221 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 260;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_nthroot, tmp_assign_source_221 );
    }
    {
        PyObject *tmp_assign_source_222;
        PyObject *tmp_source_name_210;
        PyObject *tmp_mvar_value_229;
        tmp_mvar_value_229 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_229 == NULL ))
        {
            tmp_mvar_value_229 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_229 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 261;

            goto frame_exception_exit_1;
        }

        tmp_source_name_210 = tmp_mvar_value_229;
        tmp_assign_source_222 = LOOKUP_ATTRIBUTE( tmp_source_name_210, const_str_plain_hypot );
        if ( tmp_assign_source_222 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 261;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_hypot, tmp_assign_source_222 );
    }
    {
        PyObject *tmp_assign_source_223;
        PyObject *tmp_source_name_211;
        PyObject *tmp_mvar_value_230;
        tmp_mvar_value_230 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_230 == NULL ))
        {
            tmp_mvar_value_230 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_230 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 262;

            goto frame_exception_exit_1;
        }

        tmp_source_name_211 = tmp_mvar_value_230;
        tmp_assign_source_223 = LOOKUP_ATTRIBUTE( tmp_source_name_211, const_str_plain_fmod );
        if ( tmp_assign_source_223 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_fmod, tmp_assign_source_223 );
    }
    {
        PyObject *tmp_assign_source_224;
        PyObject *tmp_source_name_212;
        PyObject *tmp_mvar_value_231;
        tmp_mvar_value_231 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_231 == NULL ))
        {
            tmp_mvar_value_231 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_231 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 263;

            goto frame_exception_exit_1;
        }

        tmp_source_name_212 = tmp_mvar_value_231;
        tmp_assign_source_224 = LOOKUP_ATTRIBUTE( tmp_source_name_212, const_str_plain_ldexp );
        if ( tmp_assign_source_224 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_ldexp, tmp_assign_source_224 );
    }
    {
        PyObject *tmp_assign_source_225;
        PyObject *tmp_source_name_213;
        PyObject *tmp_mvar_value_232;
        tmp_mvar_value_232 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_232 == NULL ))
        {
            tmp_mvar_value_232 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_232 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 264;

            goto frame_exception_exit_1;
        }

        tmp_source_name_213 = tmp_mvar_value_232;
        tmp_assign_source_225 = LOOKUP_ATTRIBUTE( tmp_source_name_213, const_str_plain_frexp );
        if ( tmp_assign_source_225 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_frexp, tmp_assign_source_225 );
    }
    {
        PyObject *tmp_assign_source_226;
        PyObject *tmp_source_name_214;
        PyObject *tmp_mvar_value_233;
        tmp_mvar_value_233 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_233 == NULL ))
        {
            tmp_mvar_value_233 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_233 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 265;

            goto frame_exception_exit_1;
        }

        tmp_source_name_214 = tmp_mvar_value_233;
        tmp_assign_source_226 = LOOKUP_ATTRIBUTE( tmp_source_name_214, const_str_plain_sign );
        if ( tmp_assign_source_226 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_sign, tmp_assign_source_226 );
    }
    {
        PyObject *tmp_assign_source_227;
        PyObject *tmp_source_name_215;
        PyObject *tmp_mvar_value_234;
        tmp_mvar_value_234 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_234 == NULL ))
        {
            tmp_mvar_value_234 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_234 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 266;

            goto frame_exception_exit_1;
        }

        tmp_source_name_215 = tmp_mvar_value_234;
        tmp_assign_source_227 = LOOKUP_ATTRIBUTE( tmp_source_name_215, const_str_plain_arg );
        if ( tmp_assign_source_227 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_arg, tmp_assign_source_227 );
    }
    {
        PyObject *tmp_assign_source_228;
        PyObject *tmp_source_name_216;
        PyObject *tmp_mvar_value_235;
        tmp_mvar_value_235 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_235 == NULL ))
        {
            tmp_mvar_value_235 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_235 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 267;

            goto frame_exception_exit_1;
        }

        tmp_source_name_216 = tmp_mvar_value_235;
        tmp_assign_source_228 = LOOKUP_ATTRIBUTE( tmp_source_name_216, const_str_plain_phase );
        if ( tmp_assign_source_228 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_phase, tmp_assign_source_228 );
    }
    {
        PyObject *tmp_assign_source_229;
        PyObject *tmp_source_name_217;
        PyObject *tmp_mvar_value_236;
        tmp_mvar_value_236 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_236 == NULL ))
        {
            tmp_mvar_value_236 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_236 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 268;

            goto frame_exception_exit_1;
        }

        tmp_source_name_217 = tmp_mvar_value_236;
        tmp_assign_source_229 = LOOKUP_ATTRIBUTE( tmp_source_name_217, const_str_plain_polar );
        if ( tmp_assign_source_229 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_polar, tmp_assign_source_229 );
    }
    {
        PyObject *tmp_assign_source_230;
        PyObject *tmp_source_name_218;
        PyObject *tmp_mvar_value_237;
        tmp_mvar_value_237 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_237 == NULL ))
        {
            tmp_mvar_value_237 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_237 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 269;

            goto frame_exception_exit_1;
        }

        tmp_source_name_218 = tmp_mvar_value_237;
        tmp_assign_source_230 = LOOKUP_ATTRIBUTE( tmp_source_name_218, const_str_plain_rect );
        if ( tmp_assign_source_230 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_rect, tmp_assign_source_230 );
    }
    {
        PyObject *tmp_assign_source_231;
        PyObject *tmp_source_name_219;
        PyObject *tmp_mvar_value_238;
        tmp_mvar_value_238 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_238 == NULL ))
        {
            tmp_mvar_value_238 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_238 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 270;

            goto frame_exception_exit_1;
        }

        tmp_source_name_219 = tmp_mvar_value_238;
        tmp_assign_source_231 = LOOKUP_ATTRIBUTE( tmp_source_name_219, const_str_plain_degrees );
        if ( tmp_assign_source_231 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_degrees, tmp_assign_source_231 );
    }
    {
        PyObject *tmp_assign_source_232;
        PyObject *tmp_source_name_220;
        PyObject *tmp_mvar_value_239;
        tmp_mvar_value_239 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_239 == NULL ))
        {
            tmp_mvar_value_239 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_239 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 271;

            goto frame_exception_exit_1;
        }

        tmp_source_name_220 = tmp_mvar_value_239;
        tmp_assign_source_232 = LOOKUP_ATTRIBUTE( tmp_source_name_220, const_str_plain_radians );
        if ( tmp_assign_source_232 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 271;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_radians, tmp_assign_source_232 );
    }
    {
        PyObject *tmp_assign_source_233;
        PyObject *tmp_source_name_221;
        PyObject *tmp_mvar_value_240;
        tmp_mvar_value_240 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_240 == NULL ))
        {
            tmp_mvar_value_240 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_240 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 272;

            goto frame_exception_exit_1;
        }

        tmp_source_name_221 = tmp_mvar_value_240;
        tmp_assign_source_233 = LOOKUP_ATTRIBUTE( tmp_source_name_221, const_str_plain_atan2 );
        if ( tmp_assign_source_233 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_atan2, tmp_assign_source_233 );
    }
    {
        PyObject *tmp_assign_source_234;
        PyObject *tmp_source_name_222;
        PyObject *tmp_mvar_value_241;
        tmp_mvar_value_241 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_241 == NULL ))
        {
            tmp_mvar_value_241 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_241 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 273;

            goto frame_exception_exit_1;
        }

        tmp_source_name_222 = tmp_mvar_value_241;
        tmp_assign_source_234 = LOOKUP_ATTRIBUTE( tmp_source_name_222, const_str_plain_fib );
        if ( tmp_assign_source_234 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_fib, tmp_assign_source_234 );
    }
    {
        PyObject *tmp_assign_source_235;
        PyObject *tmp_source_name_223;
        PyObject *tmp_mvar_value_242;
        tmp_mvar_value_242 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_242 == NULL ))
        {
            tmp_mvar_value_242 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_242 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 274;

            goto frame_exception_exit_1;
        }

        tmp_source_name_223 = tmp_mvar_value_242;
        tmp_assign_source_235 = LOOKUP_ATTRIBUTE( tmp_source_name_223, const_str_plain_fibonacci );
        if ( tmp_assign_source_235 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_fibonacci, tmp_assign_source_235 );
    }
    {
        PyObject *tmp_assign_source_236;
        PyObject *tmp_source_name_224;
        PyObject *tmp_mvar_value_243;
        tmp_mvar_value_243 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_243 == NULL ))
        {
            tmp_mvar_value_243 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_243 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 275;

            goto frame_exception_exit_1;
        }

        tmp_source_name_224 = tmp_mvar_value_243;
        tmp_assign_source_236 = LOOKUP_ATTRIBUTE( tmp_source_name_224, const_str_plain_lambertw );
        if ( tmp_assign_source_236 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_lambertw, tmp_assign_source_236 );
    }
    {
        PyObject *tmp_assign_source_237;
        PyObject *tmp_source_name_225;
        PyObject *tmp_mvar_value_244;
        tmp_mvar_value_244 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_244 == NULL ))
        {
            tmp_mvar_value_244 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_244 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 276;

            goto frame_exception_exit_1;
        }

        tmp_source_name_225 = tmp_mvar_value_244;
        tmp_assign_source_237 = LOOKUP_ATTRIBUTE( tmp_source_name_225, const_str_plain_zeta );
        if ( tmp_assign_source_237 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_zeta, tmp_assign_source_237 );
    }
    {
        PyObject *tmp_assign_source_238;
        PyObject *tmp_source_name_226;
        PyObject *tmp_mvar_value_245;
        tmp_mvar_value_245 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_245 == NULL ))
        {
            tmp_mvar_value_245 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_245 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 277;

            goto frame_exception_exit_1;
        }

        tmp_source_name_226 = tmp_mvar_value_245;
        tmp_assign_source_238 = LOOKUP_ATTRIBUTE( tmp_source_name_226, const_str_plain_altzeta );
        if ( tmp_assign_source_238 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_altzeta, tmp_assign_source_238 );
    }
    {
        PyObject *tmp_assign_source_239;
        PyObject *tmp_source_name_227;
        PyObject *tmp_mvar_value_246;
        tmp_mvar_value_246 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_246 == NULL ))
        {
            tmp_mvar_value_246 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_246 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 278;

            goto frame_exception_exit_1;
        }

        tmp_source_name_227 = tmp_mvar_value_246;
        tmp_assign_source_239 = LOOKUP_ATTRIBUTE( tmp_source_name_227, const_str_plain_gamma );
        if ( tmp_assign_source_239 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 278;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_gamma, tmp_assign_source_239 );
    }
    {
        PyObject *tmp_assign_source_240;
        PyObject *tmp_source_name_228;
        PyObject *tmp_mvar_value_247;
        tmp_mvar_value_247 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_247 == NULL ))
        {
            tmp_mvar_value_247 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_247 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 279;

            goto frame_exception_exit_1;
        }

        tmp_source_name_228 = tmp_mvar_value_247;
        tmp_assign_source_240 = LOOKUP_ATTRIBUTE( tmp_source_name_228, const_str_plain_rgamma );
        if ( tmp_assign_source_240 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_rgamma, tmp_assign_source_240 );
    }
    {
        PyObject *tmp_assign_source_241;
        PyObject *tmp_source_name_229;
        PyObject *tmp_mvar_value_248;
        tmp_mvar_value_248 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_248 == NULL ))
        {
            tmp_mvar_value_248 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_248 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 280;

            goto frame_exception_exit_1;
        }

        tmp_source_name_229 = tmp_mvar_value_248;
        tmp_assign_source_241 = LOOKUP_ATTRIBUTE( tmp_source_name_229, const_str_plain_factorial );
        if ( tmp_assign_source_241 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_factorial, tmp_assign_source_241 );
    }
    {
        PyObject *tmp_assign_source_242;
        PyObject *tmp_source_name_230;
        PyObject *tmp_mvar_value_249;
        tmp_mvar_value_249 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_249 == NULL ))
        {
            tmp_mvar_value_249 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_249 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 281;

            goto frame_exception_exit_1;
        }

        tmp_source_name_230 = tmp_mvar_value_249;
        tmp_assign_source_242 = LOOKUP_ATTRIBUTE( tmp_source_name_230, const_str_plain_fac );
        if ( tmp_assign_source_242 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_fac, tmp_assign_source_242 );
    }
    {
        PyObject *tmp_assign_source_243;
        PyObject *tmp_source_name_231;
        PyObject *tmp_mvar_value_250;
        tmp_mvar_value_250 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_250 == NULL ))
        {
            tmp_mvar_value_250 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_250 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 282;

            goto frame_exception_exit_1;
        }

        tmp_source_name_231 = tmp_mvar_value_250;
        tmp_assign_source_243 = LOOKUP_ATTRIBUTE( tmp_source_name_231, const_str_plain_fac2 );
        if ( tmp_assign_source_243 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_fac2, tmp_assign_source_243 );
    }
    {
        PyObject *tmp_assign_source_244;
        PyObject *tmp_source_name_232;
        PyObject *tmp_mvar_value_251;
        tmp_mvar_value_251 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_251 == NULL ))
        {
            tmp_mvar_value_251 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_251 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 283;

            goto frame_exception_exit_1;
        }

        tmp_source_name_232 = tmp_mvar_value_251;
        tmp_assign_source_244 = LOOKUP_ATTRIBUTE( tmp_source_name_232, const_str_plain_beta );
        if ( tmp_assign_source_244 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_beta, tmp_assign_source_244 );
    }
    {
        PyObject *tmp_assign_source_245;
        PyObject *tmp_source_name_233;
        PyObject *tmp_mvar_value_252;
        tmp_mvar_value_252 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_252 == NULL ))
        {
            tmp_mvar_value_252 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_252 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 284;

            goto frame_exception_exit_1;
        }

        tmp_source_name_233 = tmp_mvar_value_252;
        tmp_assign_source_245 = LOOKUP_ATTRIBUTE( tmp_source_name_233, const_str_plain_betainc );
        if ( tmp_assign_source_245 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_betainc, tmp_assign_source_245 );
    }
    {
        PyObject *tmp_assign_source_246;
        PyObject *tmp_source_name_234;
        PyObject *tmp_mvar_value_253;
        tmp_mvar_value_253 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_253 == NULL ))
        {
            tmp_mvar_value_253 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_253 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 285;

            goto frame_exception_exit_1;
        }

        tmp_source_name_234 = tmp_mvar_value_253;
        tmp_assign_source_246 = LOOKUP_ATTRIBUTE( tmp_source_name_234, const_str_plain_psi );
        if ( tmp_assign_source_246 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_psi, tmp_assign_source_246 );
    }
    {
        PyObject *tmp_assign_source_247;
        PyObject *tmp_source_name_235;
        PyObject *tmp_mvar_value_254;
        tmp_mvar_value_254 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_254 == NULL ))
        {
            tmp_mvar_value_254 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_254 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 290;

            goto frame_exception_exit_1;
        }

        tmp_source_name_235 = tmp_mvar_value_254;
        tmp_assign_source_247 = LOOKUP_ATTRIBUTE( tmp_source_name_235, const_str_plain_polygamma );
        if ( tmp_assign_source_247 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_polygamma, tmp_assign_source_247 );
    }
    {
        PyObject *tmp_assign_source_248;
        PyObject *tmp_source_name_236;
        PyObject *tmp_mvar_value_255;
        tmp_mvar_value_255 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_255 == NULL ))
        {
            tmp_mvar_value_255 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_255 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 291;

            goto frame_exception_exit_1;
        }

        tmp_source_name_236 = tmp_mvar_value_255;
        tmp_assign_source_248 = LOOKUP_ATTRIBUTE( tmp_source_name_236, const_str_plain_digamma );
        if ( tmp_assign_source_248 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_digamma, tmp_assign_source_248 );
    }
    {
        PyObject *tmp_assign_source_249;
        PyObject *tmp_source_name_237;
        PyObject *tmp_mvar_value_256;
        tmp_mvar_value_256 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_256 == NULL ))
        {
            tmp_mvar_value_256 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_256 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 295;

            goto frame_exception_exit_1;
        }

        tmp_source_name_237 = tmp_mvar_value_256;
        tmp_assign_source_249 = LOOKUP_ATTRIBUTE( tmp_source_name_237, const_str_plain_harmonic );
        if ( tmp_assign_source_249 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_harmonic, tmp_assign_source_249 );
    }
    {
        PyObject *tmp_assign_source_250;
        PyObject *tmp_source_name_238;
        PyObject *tmp_mvar_value_257;
        tmp_mvar_value_257 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_257 == NULL ))
        {
            tmp_mvar_value_257 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_257 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 296;

            goto frame_exception_exit_1;
        }

        tmp_source_name_238 = tmp_mvar_value_257;
        tmp_assign_source_250 = LOOKUP_ATTRIBUTE( tmp_source_name_238, const_str_plain_bernoulli );
        if ( tmp_assign_source_250 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 296;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_bernoulli, tmp_assign_source_250 );
    }
    {
        PyObject *tmp_assign_source_251;
        PyObject *tmp_source_name_239;
        PyObject *tmp_mvar_value_258;
        tmp_mvar_value_258 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_258 == NULL ))
        {
            tmp_mvar_value_258 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_258 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 297;

            goto frame_exception_exit_1;
        }

        tmp_source_name_239 = tmp_mvar_value_258;
        tmp_assign_source_251 = LOOKUP_ATTRIBUTE( tmp_source_name_239, const_str_plain_bernfrac );
        if ( tmp_assign_source_251 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_bernfrac, tmp_assign_source_251 );
    }
    {
        PyObject *tmp_assign_source_252;
        PyObject *tmp_source_name_240;
        PyObject *tmp_mvar_value_259;
        tmp_mvar_value_259 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_259 == NULL ))
        {
            tmp_mvar_value_259 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_259 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 298;

            goto frame_exception_exit_1;
        }

        tmp_source_name_240 = tmp_mvar_value_259;
        tmp_assign_source_252 = LOOKUP_ATTRIBUTE( tmp_source_name_240, const_str_plain_stieltjes );
        if ( tmp_assign_source_252 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_stieltjes, tmp_assign_source_252 );
    }
    {
        PyObject *tmp_assign_source_253;
        PyObject *tmp_source_name_241;
        PyObject *tmp_mvar_value_260;
        tmp_mvar_value_260 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_260 == NULL ))
        {
            tmp_mvar_value_260 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_260 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 299;

            goto frame_exception_exit_1;
        }

        tmp_source_name_241 = tmp_mvar_value_260;
        tmp_assign_source_253 = LOOKUP_ATTRIBUTE( tmp_source_name_241, const_str_plain_hurwitz );
        if ( tmp_assign_source_253 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_hurwitz, tmp_assign_source_253 );
    }
    {
        PyObject *tmp_assign_source_254;
        PyObject *tmp_source_name_242;
        PyObject *tmp_mvar_value_261;
        tmp_mvar_value_261 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_261 == NULL ))
        {
            tmp_mvar_value_261 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_261 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 300;

            goto frame_exception_exit_1;
        }

        tmp_source_name_242 = tmp_mvar_value_261;
        tmp_assign_source_254 = LOOKUP_ATTRIBUTE( tmp_source_name_242, const_str_plain_dirichlet );
        if ( tmp_assign_source_254 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 300;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_dirichlet, tmp_assign_source_254 );
    }
    {
        PyObject *tmp_assign_source_255;
        PyObject *tmp_source_name_243;
        PyObject *tmp_mvar_value_262;
        tmp_mvar_value_262 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_262 == NULL ))
        {
            tmp_mvar_value_262 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_262 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 301;

            goto frame_exception_exit_1;
        }

        tmp_source_name_243 = tmp_mvar_value_262;
        tmp_assign_source_255 = LOOKUP_ATTRIBUTE( tmp_source_name_243, const_str_plain_bernpoly );
        if ( tmp_assign_source_255 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_bernpoly, tmp_assign_source_255 );
    }
    {
        PyObject *tmp_assign_source_256;
        PyObject *tmp_source_name_244;
        PyObject *tmp_mvar_value_263;
        tmp_mvar_value_263 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_263 == NULL ))
        {
            tmp_mvar_value_263 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_263 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 302;

            goto frame_exception_exit_1;
        }

        tmp_source_name_244 = tmp_mvar_value_263;
        tmp_assign_source_256 = LOOKUP_ATTRIBUTE( tmp_source_name_244, const_str_plain_eulerpoly );
        if ( tmp_assign_source_256 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 302;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_eulerpoly, tmp_assign_source_256 );
    }
    {
        PyObject *tmp_assign_source_257;
        PyObject *tmp_source_name_245;
        PyObject *tmp_mvar_value_264;
        tmp_mvar_value_264 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_264 == NULL ))
        {
            tmp_mvar_value_264 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_264 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 303;

            goto frame_exception_exit_1;
        }

        tmp_source_name_245 = tmp_mvar_value_264;
        tmp_assign_source_257 = LOOKUP_ATTRIBUTE( tmp_source_name_245, const_str_plain_eulernum );
        if ( tmp_assign_source_257 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_eulernum, tmp_assign_source_257 );
    }
    {
        PyObject *tmp_assign_source_258;
        PyObject *tmp_source_name_246;
        PyObject *tmp_mvar_value_265;
        tmp_mvar_value_265 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_265 == NULL ))
        {
            tmp_mvar_value_265 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_265 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 304;

            goto frame_exception_exit_1;
        }

        tmp_source_name_246 = tmp_mvar_value_265;
        tmp_assign_source_258 = LOOKUP_ATTRIBUTE( tmp_source_name_246, const_str_plain_polylog );
        if ( tmp_assign_source_258 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_polylog, tmp_assign_source_258 );
    }
    {
        PyObject *tmp_assign_source_259;
        PyObject *tmp_source_name_247;
        PyObject *tmp_mvar_value_266;
        tmp_mvar_value_266 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_266 == NULL ))
        {
            tmp_mvar_value_266 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_266 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 305;

            goto frame_exception_exit_1;
        }

        tmp_source_name_247 = tmp_mvar_value_266;
        tmp_assign_source_259 = LOOKUP_ATTRIBUTE( tmp_source_name_247, const_str_plain_clsin );
        if ( tmp_assign_source_259 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_clsin, tmp_assign_source_259 );
    }
    {
        PyObject *tmp_assign_source_260;
        PyObject *tmp_source_name_248;
        PyObject *tmp_mvar_value_267;
        tmp_mvar_value_267 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_267 == NULL ))
        {
            tmp_mvar_value_267 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_267 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 306;

            goto frame_exception_exit_1;
        }

        tmp_source_name_248 = tmp_mvar_value_267;
        tmp_assign_source_260 = LOOKUP_ATTRIBUTE( tmp_source_name_248, const_str_plain_clcos );
        if ( tmp_assign_source_260 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_clcos, tmp_assign_source_260 );
    }
    {
        PyObject *tmp_assign_source_261;
        PyObject *tmp_source_name_249;
        PyObject *tmp_mvar_value_268;
        tmp_mvar_value_268 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_268 == NULL ))
        {
            tmp_mvar_value_268 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_268 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 307;

            goto frame_exception_exit_1;
        }

        tmp_source_name_249 = tmp_mvar_value_268;
        tmp_assign_source_261 = LOOKUP_ATTRIBUTE( tmp_source_name_249, const_str_plain_gammainc );
        if ( tmp_assign_source_261 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_gammainc, tmp_assign_source_261 );
    }
    {
        PyObject *tmp_assign_source_262;
        PyObject *tmp_source_name_250;
        PyObject *tmp_mvar_value_269;
        tmp_mvar_value_269 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_269 == NULL ))
        {
            tmp_mvar_value_269 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_269 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 308;

            goto frame_exception_exit_1;
        }

        tmp_source_name_250 = tmp_mvar_value_269;
        tmp_assign_source_262 = LOOKUP_ATTRIBUTE( tmp_source_name_250, const_str_plain_gammaprod );
        if ( tmp_assign_source_262 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_gammaprod, tmp_assign_source_262 );
    }
    {
        PyObject *tmp_assign_source_263;
        PyObject *tmp_source_name_251;
        PyObject *tmp_mvar_value_270;
        tmp_mvar_value_270 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_270 == NULL ))
        {
            tmp_mvar_value_270 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_270 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 309;

            goto frame_exception_exit_1;
        }

        tmp_source_name_251 = tmp_mvar_value_270;
        tmp_assign_source_263 = LOOKUP_ATTRIBUTE( tmp_source_name_251, const_str_plain_binomial );
        if ( tmp_assign_source_263 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_binomial, tmp_assign_source_263 );
    }
    {
        PyObject *tmp_assign_source_264;
        PyObject *tmp_source_name_252;
        PyObject *tmp_mvar_value_271;
        tmp_mvar_value_271 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_271 == NULL ))
        {
            tmp_mvar_value_271 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_271 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 310;

            goto frame_exception_exit_1;
        }

        tmp_source_name_252 = tmp_mvar_value_271;
        tmp_assign_source_264 = LOOKUP_ATTRIBUTE( tmp_source_name_252, const_str_plain_rf );
        if ( tmp_assign_source_264 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_rf, tmp_assign_source_264 );
    }
    {
        PyObject *tmp_assign_source_265;
        PyObject *tmp_source_name_253;
        PyObject *tmp_mvar_value_272;
        tmp_mvar_value_272 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_272 == NULL ))
        {
            tmp_mvar_value_272 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_272 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 311;

            goto frame_exception_exit_1;
        }

        tmp_source_name_253 = tmp_mvar_value_272;
        tmp_assign_source_265 = LOOKUP_ATTRIBUTE( tmp_source_name_253, const_str_plain_ff );
        if ( tmp_assign_source_265 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_ff, tmp_assign_source_265 );
    }
    {
        PyObject *tmp_assign_source_266;
        PyObject *tmp_source_name_254;
        PyObject *tmp_mvar_value_273;
        tmp_mvar_value_273 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_273 == NULL ))
        {
            tmp_mvar_value_273 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_273 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 312;

            goto frame_exception_exit_1;
        }

        tmp_source_name_254 = tmp_mvar_value_273;
        tmp_assign_source_266 = LOOKUP_ATTRIBUTE( tmp_source_name_254, const_str_plain_hyper );
        if ( tmp_assign_source_266 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_hyper, tmp_assign_source_266 );
    }
    {
        PyObject *tmp_assign_source_267;
        PyObject *tmp_source_name_255;
        PyObject *tmp_mvar_value_274;
        tmp_mvar_value_274 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_274 == NULL ))
        {
            tmp_mvar_value_274 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_274 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 313;

            goto frame_exception_exit_1;
        }

        tmp_source_name_255 = tmp_mvar_value_274;
        tmp_assign_source_267 = LOOKUP_ATTRIBUTE( tmp_source_name_255, const_str_plain_hyp0f1 );
        if ( tmp_assign_source_267 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_hyp0f1, tmp_assign_source_267 );
    }
    {
        PyObject *tmp_assign_source_268;
        PyObject *tmp_source_name_256;
        PyObject *tmp_mvar_value_275;
        tmp_mvar_value_275 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_275 == NULL ))
        {
            tmp_mvar_value_275 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_275 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 314;

            goto frame_exception_exit_1;
        }

        tmp_source_name_256 = tmp_mvar_value_275;
        tmp_assign_source_268 = LOOKUP_ATTRIBUTE( tmp_source_name_256, const_str_plain_hyp1f1 );
        if ( tmp_assign_source_268 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_hyp1f1, tmp_assign_source_268 );
    }
    {
        PyObject *tmp_assign_source_269;
        PyObject *tmp_source_name_257;
        PyObject *tmp_mvar_value_276;
        tmp_mvar_value_276 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_276 == NULL ))
        {
            tmp_mvar_value_276 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_276 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 315;

            goto frame_exception_exit_1;
        }

        tmp_source_name_257 = tmp_mvar_value_276;
        tmp_assign_source_269 = LOOKUP_ATTRIBUTE( tmp_source_name_257, const_str_plain_hyp1f2 );
        if ( tmp_assign_source_269 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_hyp1f2, tmp_assign_source_269 );
    }
    {
        PyObject *tmp_assign_source_270;
        PyObject *tmp_source_name_258;
        PyObject *tmp_mvar_value_277;
        tmp_mvar_value_277 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_277 == NULL ))
        {
            tmp_mvar_value_277 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_277 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 316;

            goto frame_exception_exit_1;
        }

        tmp_source_name_258 = tmp_mvar_value_277;
        tmp_assign_source_270 = LOOKUP_ATTRIBUTE( tmp_source_name_258, const_str_plain_hyp2f1 );
        if ( tmp_assign_source_270 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_hyp2f1, tmp_assign_source_270 );
    }
    {
        PyObject *tmp_assign_source_271;
        PyObject *tmp_source_name_259;
        PyObject *tmp_mvar_value_278;
        tmp_mvar_value_278 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_278 == NULL ))
        {
            tmp_mvar_value_278 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_278 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 317;

            goto frame_exception_exit_1;
        }

        tmp_source_name_259 = tmp_mvar_value_278;
        tmp_assign_source_271 = LOOKUP_ATTRIBUTE( tmp_source_name_259, const_str_plain_hyp2f2 );
        if ( tmp_assign_source_271 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_hyp2f2, tmp_assign_source_271 );
    }
    {
        PyObject *tmp_assign_source_272;
        PyObject *tmp_source_name_260;
        PyObject *tmp_mvar_value_279;
        tmp_mvar_value_279 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_279 == NULL ))
        {
            tmp_mvar_value_279 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_279 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 318;

            goto frame_exception_exit_1;
        }

        tmp_source_name_260 = tmp_mvar_value_279;
        tmp_assign_source_272 = LOOKUP_ATTRIBUTE( tmp_source_name_260, const_str_plain_hyp2f0 );
        if ( tmp_assign_source_272 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_hyp2f0, tmp_assign_source_272 );
    }
    {
        PyObject *tmp_assign_source_273;
        PyObject *tmp_source_name_261;
        PyObject *tmp_mvar_value_280;
        tmp_mvar_value_280 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_280 == NULL ))
        {
            tmp_mvar_value_280 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_280 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 319;

            goto frame_exception_exit_1;
        }

        tmp_source_name_261 = tmp_mvar_value_280;
        tmp_assign_source_273 = LOOKUP_ATTRIBUTE( tmp_source_name_261, const_str_plain_hyp2f3 );
        if ( tmp_assign_source_273 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_hyp2f3, tmp_assign_source_273 );
    }
    {
        PyObject *tmp_assign_source_274;
        PyObject *tmp_source_name_262;
        PyObject *tmp_mvar_value_281;
        tmp_mvar_value_281 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_281 == NULL ))
        {
            tmp_mvar_value_281 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_281 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 320;

            goto frame_exception_exit_1;
        }

        tmp_source_name_262 = tmp_mvar_value_281;
        tmp_assign_source_274 = LOOKUP_ATTRIBUTE( tmp_source_name_262, const_str_plain_hyp3f2 );
        if ( tmp_assign_source_274 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_hyp3f2, tmp_assign_source_274 );
    }
    {
        PyObject *tmp_assign_source_275;
        PyObject *tmp_source_name_263;
        PyObject *tmp_mvar_value_282;
        tmp_mvar_value_282 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_282 == NULL ))
        {
            tmp_mvar_value_282 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_282 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 321;

            goto frame_exception_exit_1;
        }

        tmp_source_name_263 = tmp_mvar_value_282;
        tmp_assign_source_275 = LOOKUP_ATTRIBUTE( tmp_source_name_263, const_str_plain_hyperu );
        if ( tmp_assign_source_275 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_hyperu, tmp_assign_source_275 );
    }
    {
        PyObject *tmp_assign_source_276;
        PyObject *tmp_source_name_264;
        PyObject *tmp_mvar_value_283;
        tmp_mvar_value_283 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_283 == NULL ))
        {
            tmp_mvar_value_283 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_283 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 322;

            goto frame_exception_exit_1;
        }

        tmp_source_name_264 = tmp_mvar_value_283;
        tmp_assign_source_276 = LOOKUP_ATTRIBUTE( tmp_source_name_264, const_str_plain_hypercomb );
        if ( tmp_assign_source_276 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_hypercomb, tmp_assign_source_276 );
    }
    {
        PyObject *tmp_assign_source_277;
        PyObject *tmp_source_name_265;
        PyObject *tmp_mvar_value_284;
        tmp_mvar_value_284 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_284 == NULL ))
        {
            tmp_mvar_value_284 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_284 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 323;

            goto frame_exception_exit_1;
        }

        tmp_source_name_265 = tmp_mvar_value_284;
        tmp_assign_source_277 = LOOKUP_ATTRIBUTE( tmp_source_name_265, const_str_plain_meijerg );
        if ( tmp_assign_source_277 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_meijerg, tmp_assign_source_277 );
    }
    {
        PyObject *tmp_assign_source_278;
        PyObject *tmp_source_name_266;
        PyObject *tmp_mvar_value_285;
        tmp_mvar_value_285 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_285 == NULL ))
        {
            tmp_mvar_value_285 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_285 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 324;

            goto frame_exception_exit_1;
        }

        tmp_source_name_266 = tmp_mvar_value_285;
        tmp_assign_source_278 = LOOKUP_ATTRIBUTE( tmp_source_name_266, const_str_plain_appellf1 );
        if ( tmp_assign_source_278 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_appellf1, tmp_assign_source_278 );
    }
    {
        PyObject *tmp_assign_source_279;
        PyObject *tmp_source_name_267;
        PyObject *tmp_mvar_value_286;
        tmp_mvar_value_286 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_286 == NULL ))
        {
            tmp_mvar_value_286 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_286 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 325;

            goto frame_exception_exit_1;
        }

        tmp_source_name_267 = tmp_mvar_value_286;
        tmp_assign_source_279 = LOOKUP_ATTRIBUTE( tmp_source_name_267, const_str_plain_appellf2 );
        if ( tmp_assign_source_279 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_appellf2, tmp_assign_source_279 );
    }
    {
        PyObject *tmp_assign_source_280;
        PyObject *tmp_source_name_268;
        PyObject *tmp_mvar_value_287;
        tmp_mvar_value_287 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_287 == NULL ))
        {
            tmp_mvar_value_287 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_287 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 326;

            goto frame_exception_exit_1;
        }

        tmp_source_name_268 = tmp_mvar_value_287;
        tmp_assign_source_280 = LOOKUP_ATTRIBUTE( tmp_source_name_268, const_str_plain_appellf3 );
        if ( tmp_assign_source_280 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_appellf3, tmp_assign_source_280 );
    }
    {
        PyObject *tmp_assign_source_281;
        PyObject *tmp_source_name_269;
        PyObject *tmp_mvar_value_288;
        tmp_mvar_value_288 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_288 == NULL ))
        {
            tmp_mvar_value_288 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_288 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 327;

            goto frame_exception_exit_1;
        }

        tmp_source_name_269 = tmp_mvar_value_288;
        tmp_assign_source_281 = LOOKUP_ATTRIBUTE( tmp_source_name_269, const_str_plain_appellf4 );
        if ( tmp_assign_source_281 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_appellf4, tmp_assign_source_281 );
    }
    {
        PyObject *tmp_assign_source_282;
        PyObject *tmp_source_name_270;
        PyObject *tmp_mvar_value_289;
        tmp_mvar_value_289 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_289 == NULL ))
        {
            tmp_mvar_value_289 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_289 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 328;

            goto frame_exception_exit_1;
        }

        tmp_source_name_270 = tmp_mvar_value_289;
        tmp_assign_source_282 = LOOKUP_ATTRIBUTE( tmp_source_name_270, const_str_plain_hyper2d );
        if ( tmp_assign_source_282 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_hyper2d, tmp_assign_source_282 );
    }
    {
        PyObject *tmp_assign_source_283;
        PyObject *tmp_source_name_271;
        PyObject *tmp_mvar_value_290;
        tmp_mvar_value_290 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_290 == NULL ))
        {
            tmp_mvar_value_290 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_290 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 329;

            goto frame_exception_exit_1;
        }

        tmp_source_name_271 = tmp_mvar_value_290;
        tmp_assign_source_283 = LOOKUP_ATTRIBUTE( tmp_source_name_271, const_str_plain_bihyper );
        if ( tmp_assign_source_283 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_bihyper, tmp_assign_source_283 );
    }
    {
        PyObject *tmp_assign_source_284;
        PyObject *tmp_source_name_272;
        PyObject *tmp_mvar_value_291;
        tmp_mvar_value_291 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_291 == NULL ))
        {
            tmp_mvar_value_291 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_291 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 330;

            goto frame_exception_exit_1;
        }

        tmp_source_name_272 = tmp_mvar_value_291;
        tmp_assign_source_284 = LOOKUP_ATTRIBUTE( tmp_source_name_272, const_str_plain_erf );
        if ( tmp_assign_source_284 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_erf, tmp_assign_source_284 );
    }
    {
        PyObject *tmp_assign_source_285;
        PyObject *tmp_source_name_273;
        PyObject *tmp_mvar_value_292;
        tmp_mvar_value_292 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_292 == NULL ))
        {
            tmp_mvar_value_292 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_292 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 331;

            goto frame_exception_exit_1;
        }

        tmp_source_name_273 = tmp_mvar_value_292;
        tmp_assign_source_285 = LOOKUP_ATTRIBUTE( tmp_source_name_273, const_str_plain_erfc );
        if ( tmp_assign_source_285 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_erfc, tmp_assign_source_285 );
    }
    {
        PyObject *tmp_assign_source_286;
        PyObject *tmp_source_name_274;
        PyObject *tmp_mvar_value_293;
        tmp_mvar_value_293 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_293 == NULL ))
        {
            tmp_mvar_value_293 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_293 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 332;

            goto frame_exception_exit_1;
        }

        tmp_source_name_274 = tmp_mvar_value_293;
        tmp_assign_source_286 = LOOKUP_ATTRIBUTE( tmp_source_name_274, const_str_plain_erfi );
        if ( tmp_assign_source_286 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_erfi, tmp_assign_source_286 );
    }
    {
        PyObject *tmp_assign_source_287;
        PyObject *tmp_source_name_275;
        PyObject *tmp_mvar_value_294;
        tmp_mvar_value_294 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_294 == NULL ))
        {
            tmp_mvar_value_294 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_294 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 333;

            goto frame_exception_exit_1;
        }

        tmp_source_name_275 = tmp_mvar_value_294;
        tmp_assign_source_287 = LOOKUP_ATTRIBUTE( tmp_source_name_275, const_str_plain_erfinv );
        if ( tmp_assign_source_287 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_erfinv, tmp_assign_source_287 );
    }
    {
        PyObject *tmp_assign_source_288;
        PyObject *tmp_source_name_276;
        PyObject *tmp_mvar_value_295;
        tmp_mvar_value_295 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_295 == NULL ))
        {
            tmp_mvar_value_295 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_295 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 334;

            goto frame_exception_exit_1;
        }

        tmp_source_name_276 = tmp_mvar_value_295;
        tmp_assign_source_288 = LOOKUP_ATTRIBUTE( tmp_source_name_276, const_str_plain_npdf );
        if ( tmp_assign_source_288 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_npdf, tmp_assign_source_288 );
    }
    {
        PyObject *tmp_assign_source_289;
        PyObject *tmp_source_name_277;
        PyObject *tmp_mvar_value_296;
        tmp_mvar_value_296 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_296 == NULL ))
        {
            tmp_mvar_value_296 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_296 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 335;

            goto frame_exception_exit_1;
        }

        tmp_source_name_277 = tmp_mvar_value_296;
        tmp_assign_source_289 = LOOKUP_ATTRIBUTE( tmp_source_name_277, const_str_plain_ncdf );
        if ( tmp_assign_source_289 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_ncdf, tmp_assign_source_289 );
    }
    {
        PyObject *tmp_assign_source_290;
        PyObject *tmp_source_name_278;
        PyObject *tmp_mvar_value_297;
        tmp_mvar_value_297 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_297 == NULL ))
        {
            tmp_mvar_value_297 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_297 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 336;

            goto frame_exception_exit_1;
        }

        tmp_source_name_278 = tmp_mvar_value_297;
        tmp_assign_source_290 = LOOKUP_ATTRIBUTE( tmp_source_name_278, const_str_plain_expint );
        if ( tmp_assign_source_290 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_expint, tmp_assign_source_290 );
    }
    {
        PyObject *tmp_assign_source_291;
        PyObject *tmp_source_name_279;
        PyObject *tmp_mvar_value_298;
        tmp_mvar_value_298 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_298 == NULL ))
        {
            tmp_mvar_value_298 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_298 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 337;

            goto frame_exception_exit_1;
        }

        tmp_source_name_279 = tmp_mvar_value_298;
        tmp_assign_source_291 = LOOKUP_ATTRIBUTE( tmp_source_name_279, const_str_plain_e1 );
        if ( tmp_assign_source_291 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_e1, tmp_assign_source_291 );
    }
    {
        PyObject *tmp_assign_source_292;
        PyObject *tmp_source_name_280;
        PyObject *tmp_mvar_value_299;
        tmp_mvar_value_299 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_299 == NULL ))
        {
            tmp_mvar_value_299 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_299 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 338;

            goto frame_exception_exit_1;
        }

        tmp_source_name_280 = tmp_mvar_value_299;
        tmp_assign_source_292 = LOOKUP_ATTRIBUTE( tmp_source_name_280, const_str_plain_ei );
        if ( tmp_assign_source_292 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 338;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_ei, tmp_assign_source_292 );
    }
    {
        PyObject *tmp_assign_source_293;
        PyObject *tmp_source_name_281;
        PyObject *tmp_mvar_value_300;
        tmp_mvar_value_300 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_300 == NULL ))
        {
            tmp_mvar_value_300 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_300 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 339;

            goto frame_exception_exit_1;
        }

        tmp_source_name_281 = tmp_mvar_value_300;
        tmp_assign_source_293 = LOOKUP_ATTRIBUTE( tmp_source_name_281, const_str_plain_li );
        if ( tmp_assign_source_293 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 339;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_li, tmp_assign_source_293 );
    }
    {
        PyObject *tmp_assign_source_294;
        PyObject *tmp_source_name_282;
        PyObject *tmp_mvar_value_301;
        tmp_mvar_value_301 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_301 == NULL ))
        {
            tmp_mvar_value_301 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_301 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 340;

            goto frame_exception_exit_1;
        }

        tmp_source_name_282 = tmp_mvar_value_301;
        tmp_assign_source_294 = LOOKUP_ATTRIBUTE( tmp_source_name_282, const_str_plain_ci );
        if ( tmp_assign_source_294 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_ci, tmp_assign_source_294 );
    }
    {
        PyObject *tmp_assign_source_295;
        PyObject *tmp_source_name_283;
        PyObject *tmp_mvar_value_302;
        tmp_mvar_value_302 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_302 == NULL ))
        {
            tmp_mvar_value_302 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_302 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 341;

            goto frame_exception_exit_1;
        }

        tmp_source_name_283 = tmp_mvar_value_302;
        tmp_assign_source_295 = LOOKUP_ATTRIBUTE( tmp_source_name_283, const_str_plain_si );
        if ( tmp_assign_source_295 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 341;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_si, tmp_assign_source_295 );
    }
    {
        PyObject *tmp_assign_source_296;
        PyObject *tmp_source_name_284;
        PyObject *tmp_mvar_value_303;
        tmp_mvar_value_303 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_303 == NULL ))
        {
            tmp_mvar_value_303 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_303 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 342;

            goto frame_exception_exit_1;
        }

        tmp_source_name_284 = tmp_mvar_value_303;
        tmp_assign_source_296 = LOOKUP_ATTRIBUTE( tmp_source_name_284, const_str_plain_chi );
        if ( tmp_assign_source_296 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 342;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_chi, tmp_assign_source_296 );
    }
    {
        PyObject *tmp_assign_source_297;
        PyObject *tmp_source_name_285;
        PyObject *tmp_mvar_value_304;
        tmp_mvar_value_304 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_304 == NULL ))
        {
            tmp_mvar_value_304 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_304 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 343;

            goto frame_exception_exit_1;
        }

        tmp_source_name_285 = tmp_mvar_value_304;
        tmp_assign_source_297 = LOOKUP_ATTRIBUTE( tmp_source_name_285, const_str_plain_shi );
        if ( tmp_assign_source_297 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 343;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_shi, tmp_assign_source_297 );
    }
    {
        PyObject *tmp_assign_source_298;
        PyObject *tmp_source_name_286;
        PyObject *tmp_mvar_value_305;
        tmp_mvar_value_305 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_305 == NULL ))
        {
            tmp_mvar_value_305 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_305 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 344;

            goto frame_exception_exit_1;
        }

        tmp_source_name_286 = tmp_mvar_value_305;
        tmp_assign_source_298 = LOOKUP_ATTRIBUTE( tmp_source_name_286, const_str_plain_fresnels );
        if ( tmp_assign_source_298 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_fresnels, tmp_assign_source_298 );
    }
    {
        PyObject *tmp_assign_source_299;
        PyObject *tmp_source_name_287;
        PyObject *tmp_mvar_value_306;
        tmp_mvar_value_306 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_306 == NULL ))
        {
            tmp_mvar_value_306 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_306 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 345;

            goto frame_exception_exit_1;
        }

        tmp_source_name_287 = tmp_mvar_value_306;
        tmp_assign_source_299 = LOOKUP_ATTRIBUTE( tmp_source_name_287, const_str_plain_fresnelc );
        if ( tmp_assign_source_299 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_fresnelc, tmp_assign_source_299 );
    }
    {
        PyObject *tmp_assign_source_300;
        PyObject *tmp_source_name_288;
        PyObject *tmp_mvar_value_307;
        tmp_mvar_value_307 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_307 == NULL ))
        {
            tmp_mvar_value_307 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_307 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 346;

            goto frame_exception_exit_1;
        }

        tmp_source_name_288 = tmp_mvar_value_307;
        tmp_assign_source_300 = LOOKUP_ATTRIBUTE( tmp_source_name_288, const_str_plain_airyai );
        if ( tmp_assign_source_300 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_airyai, tmp_assign_source_300 );
    }
    {
        PyObject *tmp_assign_source_301;
        PyObject *tmp_source_name_289;
        PyObject *tmp_mvar_value_308;
        tmp_mvar_value_308 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_308 == NULL ))
        {
            tmp_mvar_value_308 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_308 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 347;

            goto frame_exception_exit_1;
        }

        tmp_source_name_289 = tmp_mvar_value_308;
        tmp_assign_source_301 = LOOKUP_ATTRIBUTE( tmp_source_name_289, const_str_plain_airybi );
        if ( tmp_assign_source_301 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_airybi, tmp_assign_source_301 );
    }
    {
        PyObject *tmp_assign_source_302;
        PyObject *tmp_source_name_290;
        PyObject *tmp_mvar_value_309;
        tmp_mvar_value_309 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_309 == NULL ))
        {
            tmp_mvar_value_309 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_309 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 348;

            goto frame_exception_exit_1;
        }

        tmp_source_name_290 = tmp_mvar_value_309;
        tmp_assign_source_302 = LOOKUP_ATTRIBUTE( tmp_source_name_290, const_str_plain_airyaizero );
        if ( tmp_assign_source_302 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_airyaizero, tmp_assign_source_302 );
    }
    {
        PyObject *tmp_assign_source_303;
        PyObject *tmp_source_name_291;
        PyObject *tmp_mvar_value_310;
        tmp_mvar_value_310 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_310 == NULL ))
        {
            tmp_mvar_value_310 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_310 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 349;

            goto frame_exception_exit_1;
        }

        tmp_source_name_291 = tmp_mvar_value_310;
        tmp_assign_source_303 = LOOKUP_ATTRIBUTE( tmp_source_name_291, const_str_plain_airybizero );
        if ( tmp_assign_source_303 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_airybizero, tmp_assign_source_303 );
    }
    {
        PyObject *tmp_assign_source_304;
        PyObject *tmp_source_name_292;
        PyObject *tmp_mvar_value_311;
        tmp_mvar_value_311 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_311 == NULL ))
        {
            tmp_mvar_value_311 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_311 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 350;

            goto frame_exception_exit_1;
        }

        tmp_source_name_292 = tmp_mvar_value_311;
        tmp_assign_source_304 = LOOKUP_ATTRIBUTE( tmp_source_name_292, const_str_plain_scorergi );
        if ( tmp_assign_source_304 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_scorergi, tmp_assign_source_304 );
    }
    {
        PyObject *tmp_assign_source_305;
        PyObject *tmp_source_name_293;
        PyObject *tmp_mvar_value_312;
        tmp_mvar_value_312 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_312 == NULL ))
        {
            tmp_mvar_value_312 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_312 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 351;

            goto frame_exception_exit_1;
        }

        tmp_source_name_293 = tmp_mvar_value_312;
        tmp_assign_source_305 = LOOKUP_ATTRIBUTE( tmp_source_name_293, const_str_plain_scorerhi );
        if ( tmp_assign_source_305 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_scorerhi, tmp_assign_source_305 );
    }
    {
        PyObject *tmp_assign_source_306;
        PyObject *tmp_source_name_294;
        PyObject *tmp_mvar_value_313;
        tmp_mvar_value_313 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_313 == NULL ))
        {
            tmp_mvar_value_313 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_313 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 352;

            goto frame_exception_exit_1;
        }

        tmp_source_name_294 = tmp_mvar_value_313;
        tmp_assign_source_306 = LOOKUP_ATTRIBUTE( tmp_source_name_294, const_str_plain_ellipk );
        if ( tmp_assign_source_306 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_ellipk, tmp_assign_source_306 );
    }
    {
        PyObject *tmp_assign_source_307;
        PyObject *tmp_source_name_295;
        PyObject *tmp_mvar_value_314;
        tmp_mvar_value_314 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_314 == NULL ))
        {
            tmp_mvar_value_314 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_314 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 353;

            goto frame_exception_exit_1;
        }

        tmp_source_name_295 = tmp_mvar_value_314;
        tmp_assign_source_307 = LOOKUP_ATTRIBUTE( tmp_source_name_295, const_str_plain_ellipe );
        if ( tmp_assign_source_307 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 353;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_ellipe, tmp_assign_source_307 );
    }
    {
        PyObject *tmp_assign_source_308;
        PyObject *tmp_source_name_296;
        PyObject *tmp_mvar_value_315;
        tmp_mvar_value_315 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_315 == NULL ))
        {
            tmp_mvar_value_315 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_315 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 354;

            goto frame_exception_exit_1;
        }

        tmp_source_name_296 = tmp_mvar_value_315;
        tmp_assign_source_308 = LOOKUP_ATTRIBUTE( tmp_source_name_296, const_str_plain_ellipf );
        if ( tmp_assign_source_308 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_ellipf, tmp_assign_source_308 );
    }
    {
        PyObject *tmp_assign_source_309;
        PyObject *tmp_source_name_297;
        PyObject *tmp_mvar_value_316;
        tmp_mvar_value_316 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_316 == NULL ))
        {
            tmp_mvar_value_316 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_316 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 355;

            goto frame_exception_exit_1;
        }

        tmp_source_name_297 = tmp_mvar_value_316;
        tmp_assign_source_309 = LOOKUP_ATTRIBUTE( tmp_source_name_297, const_str_plain_ellippi );
        if ( tmp_assign_source_309 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_ellippi, tmp_assign_source_309 );
    }
    {
        PyObject *tmp_assign_source_310;
        PyObject *tmp_source_name_298;
        PyObject *tmp_mvar_value_317;
        tmp_mvar_value_317 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_317 == NULL ))
        {
            tmp_mvar_value_317 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_317 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 356;

            goto frame_exception_exit_1;
        }

        tmp_source_name_298 = tmp_mvar_value_317;
        tmp_assign_source_310 = LOOKUP_ATTRIBUTE( tmp_source_name_298, const_str_plain_elliprc );
        if ( tmp_assign_source_310 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 356;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_elliprc, tmp_assign_source_310 );
    }
    {
        PyObject *tmp_assign_source_311;
        PyObject *tmp_source_name_299;
        PyObject *tmp_mvar_value_318;
        tmp_mvar_value_318 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_318 == NULL ))
        {
            tmp_mvar_value_318 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_318 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 357;

            goto frame_exception_exit_1;
        }

        tmp_source_name_299 = tmp_mvar_value_318;
        tmp_assign_source_311 = LOOKUP_ATTRIBUTE( tmp_source_name_299, const_str_plain_elliprj );
        if ( tmp_assign_source_311 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 357;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_elliprj, tmp_assign_source_311 );
    }
    {
        PyObject *tmp_assign_source_312;
        PyObject *tmp_source_name_300;
        PyObject *tmp_mvar_value_319;
        tmp_mvar_value_319 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_319 == NULL ))
        {
            tmp_mvar_value_319 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_319 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 358;

            goto frame_exception_exit_1;
        }

        tmp_source_name_300 = tmp_mvar_value_319;
        tmp_assign_source_312 = LOOKUP_ATTRIBUTE( tmp_source_name_300, const_str_plain_elliprf );
        if ( tmp_assign_source_312 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_elliprf, tmp_assign_source_312 );
    }
    {
        PyObject *tmp_assign_source_313;
        PyObject *tmp_source_name_301;
        PyObject *tmp_mvar_value_320;
        tmp_mvar_value_320 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_320 == NULL ))
        {
            tmp_mvar_value_320 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_320 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 359;

            goto frame_exception_exit_1;
        }

        tmp_source_name_301 = tmp_mvar_value_320;
        tmp_assign_source_313 = LOOKUP_ATTRIBUTE( tmp_source_name_301, const_str_plain_elliprd );
        if ( tmp_assign_source_313 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_elliprd, tmp_assign_source_313 );
    }
    {
        PyObject *tmp_assign_source_314;
        PyObject *tmp_source_name_302;
        PyObject *tmp_mvar_value_321;
        tmp_mvar_value_321 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_321 == NULL ))
        {
            tmp_mvar_value_321 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_321 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 360;

            goto frame_exception_exit_1;
        }

        tmp_source_name_302 = tmp_mvar_value_321;
        tmp_assign_source_314 = LOOKUP_ATTRIBUTE( tmp_source_name_302, const_str_plain_elliprg );
        if ( tmp_assign_source_314 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_elliprg, tmp_assign_source_314 );
    }
    {
        PyObject *tmp_assign_source_315;
        PyObject *tmp_source_name_303;
        PyObject *tmp_mvar_value_322;
        tmp_mvar_value_322 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_322 == NULL ))
        {
            tmp_mvar_value_322 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_322 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 361;

            goto frame_exception_exit_1;
        }

        tmp_source_name_303 = tmp_mvar_value_322;
        tmp_assign_source_315 = LOOKUP_ATTRIBUTE( tmp_source_name_303, const_str_plain_agm );
        if ( tmp_assign_source_315 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_agm, tmp_assign_source_315 );
    }
    {
        PyObject *tmp_assign_source_316;
        PyObject *tmp_source_name_304;
        PyObject *tmp_mvar_value_323;
        tmp_mvar_value_323 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_323 == NULL ))
        {
            tmp_mvar_value_323 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_323 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 362;

            goto frame_exception_exit_1;
        }

        tmp_source_name_304 = tmp_mvar_value_323;
        tmp_assign_source_316 = LOOKUP_ATTRIBUTE( tmp_source_name_304, const_str_plain_jacobi );
        if ( tmp_assign_source_316 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 362;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_jacobi, tmp_assign_source_316 );
    }
    {
        PyObject *tmp_assign_source_317;
        PyObject *tmp_source_name_305;
        PyObject *tmp_mvar_value_324;
        tmp_mvar_value_324 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_324 == NULL ))
        {
            tmp_mvar_value_324 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_324 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 363;

            goto frame_exception_exit_1;
        }

        tmp_source_name_305 = tmp_mvar_value_324;
        tmp_assign_source_317 = LOOKUP_ATTRIBUTE( tmp_source_name_305, const_str_plain_chebyt );
        if ( tmp_assign_source_317 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_chebyt, tmp_assign_source_317 );
    }
    {
        PyObject *tmp_assign_source_318;
        PyObject *tmp_source_name_306;
        PyObject *tmp_mvar_value_325;
        tmp_mvar_value_325 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_325 == NULL ))
        {
            tmp_mvar_value_325 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_325 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 364;

            goto frame_exception_exit_1;
        }

        tmp_source_name_306 = tmp_mvar_value_325;
        tmp_assign_source_318 = LOOKUP_ATTRIBUTE( tmp_source_name_306, const_str_plain_chebyu );
        if ( tmp_assign_source_318 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_chebyu, tmp_assign_source_318 );
    }
    {
        PyObject *tmp_assign_source_319;
        PyObject *tmp_source_name_307;
        PyObject *tmp_mvar_value_326;
        tmp_mvar_value_326 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_326 == NULL ))
        {
            tmp_mvar_value_326 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_326 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 365;

            goto frame_exception_exit_1;
        }

        tmp_source_name_307 = tmp_mvar_value_326;
        tmp_assign_source_319 = LOOKUP_ATTRIBUTE( tmp_source_name_307, const_str_plain_legendre );
        if ( tmp_assign_source_319 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_legendre, tmp_assign_source_319 );
    }
    {
        PyObject *tmp_assign_source_320;
        PyObject *tmp_source_name_308;
        PyObject *tmp_mvar_value_327;
        tmp_mvar_value_327 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_327 == NULL ))
        {
            tmp_mvar_value_327 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_327 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 366;

            goto frame_exception_exit_1;
        }

        tmp_source_name_308 = tmp_mvar_value_327;
        tmp_assign_source_320 = LOOKUP_ATTRIBUTE( tmp_source_name_308, const_str_plain_legenp );
        if ( tmp_assign_source_320 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_legenp, tmp_assign_source_320 );
    }
    {
        PyObject *tmp_assign_source_321;
        PyObject *tmp_source_name_309;
        PyObject *tmp_mvar_value_328;
        tmp_mvar_value_328 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_328 == NULL ))
        {
            tmp_mvar_value_328 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_328 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 367;

            goto frame_exception_exit_1;
        }

        tmp_source_name_309 = tmp_mvar_value_328;
        tmp_assign_source_321 = LOOKUP_ATTRIBUTE( tmp_source_name_309, const_str_plain_legenq );
        if ( tmp_assign_source_321 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_legenq, tmp_assign_source_321 );
    }
    {
        PyObject *tmp_assign_source_322;
        PyObject *tmp_source_name_310;
        PyObject *tmp_mvar_value_329;
        tmp_mvar_value_329 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_329 == NULL ))
        {
            tmp_mvar_value_329 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_329 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 368;

            goto frame_exception_exit_1;
        }

        tmp_source_name_310 = tmp_mvar_value_329;
        tmp_assign_source_322 = LOOKUP_ATTRIBUTE( tmp_source_name_310, const_str_plain_hermite );
        if ( tmp_assign_source_322 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_hermite, tmp_assign_source_322 );
    }
    {
        PyObject *tmp_assign_source_323;
        PyObject *tmp_source_name_311;
        PyObject *tmp_mvar_value_330;
        tmp_mvar_value_330 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_330 == NULL ))
        {
            tmp_mvar_value_330 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_330 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 369;

            goto frame_exception_exit_1;
        }

        tmp_source_name_311 = tmp_mvar_value_330;
        tmp_assign_source_323 = LOOKUP_ATTRIBUTE( tmp_source_name_311, const_str_plain_pcfd );
        if ( tmp_assign_source_323 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 369;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_pcfd, tmp_assign_source_323 );
    }
    {
        PyObject *tmp_assign_source_324;
        PyObject *tmp_source_name_312;
        PyObject *tmp_mvar_value_331;
        tmp_mvar_value_331 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_331 == NULL ))
        {
            tmp_mvar_value_331 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_331 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 370;

            goto frame_exception_exit_1;
        }

        tmp_source_name_312 = tmp_mvar_value_331;
        tmp_assign_source_324 = LOOKUP_ATTRIBUTE( tmp_source_name_312, const_str_plain_pcfu );
        if ( tmp_assign_source_324 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_pcfu, tmp_assign_source_324 );
    }
    {
        PyObject *tmp_assign_source_325;
        PyObject *tmp_source_name_313;
        PyObject *tmp_mvar_value_332;
        tmp_mvar_value_332 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_332 == NULL ))
        {
            tmp_mvar_value_332 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_332 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 371;

            goto frame_exception_exit_1;
        }

        tmp_source_name_313 = tmp_mvar_value_332;
        tmp_assign_source_325 = LOOKUP_ATTRIBUTE( tmp_source_name_313, const_str_plain_pcfv );
        if ( tmp_assign_source_325 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_pcfv, tmp_assign_source_325 );
    }
    {
        PyObject *tmp_assign_source_326;
        PyObject *tmp_source_name_314;
        PyObject *tmp_mvar_value_333;
        tmp_mvar_value_333 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_333 == NULL ))
        {
            tmp_mvar_value_333 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_333 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 372;

            goto frame_exception_exit_1;
        }

        tmp_source_name_314 = tmp_mvar_value_333;
        tmp_assign_source_326 = LOOKUP_ATTRIBUTE( tmp_source_name_314, const_str_plain_pcfw );
        if ( tmp_assign_source_326 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 372;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_pcfw, tmp_assign_source_326 );
    }
    {
        PyObject *tmp_assign_source_327;
        PyObject *tmp_source_name_315;
        PyObject *tmp_mvar_value_334;
        tmp_mvar_value_334 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_334 == NULL ))
        {
            tmp_mvar_value_334 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_334 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 373;

            goto frame_exception_exit_1;
        }

        tmp_source_name_315 = tmp_mvar_value_334;
        tmp_assign_source_327 = LOOKUP_ATTRIBUTE( tmp_source_name_315, const_str_plain_gegenbauer );
        if ( tmp_assign_source_327 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 373;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_gegenbauer, tmp_assign_source_327 );
    }
    {
        PyObject *tmp_assign_source_328;
        PyObject *tmp_source_name_316;
        PyObject *tmp_mvar_value_335;
        tmp_mvar_value_335 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_335 == NULL ))
        {
            tmp_mvar_value_335 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_335 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 374;

            goto frame_exception_exit_1;
        }

        tmp_source_name_316 = tmp_mvar_value_335;
        tmp_assign_source_328 = LOOKUP_ATTRIBUTE( tmp_source_name_316, const_str_plain_laguerre );
        if ( tmp_assign_source_328 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_laguerre, tmp_assign_source_328 );
    }
    {
        PyObject *tmp_assign_source_329;
        PyObject *tmp_source_name_317;
        PyObject *tmp_mvar_value_336;
        tmp_mvar_value_336 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_336 == NULL ))
        {
            tmp_mvar_value_336 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_336 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 375;

            goto frame_exception_exit_1;
        }

        tmp_source_name_317 = tmp_mvar_value_336;
        tmp_assign_source_329 = LOOKUP_ATTRIBUTE( tmp_source_name_317, const_str_plain_spherharm );
        if ( tmp_assign_source_329 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_spherharm, tmp_assign_source_329 );
    }
    {
        PyObject *tmp_assign_source_330;
        PyObject *tmp_source_name_318;
        PyObject *tmp_mvar_value_337;
        tmp_mvar_value_337 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_337 == NULL ))
        {
            tmp_mvar_value_337 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_337 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 376;

            goto frame_exception_exit_1;
        }

        tmp_source_name_318 = tmp_mvar_value_337;
        tmp_assign_source_330 = LOOKUP_ATTRIBUTE( tmp_source_name_318, const_str_plain_besselj );
        if ( tmp_assign_source_330 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_besselj, tmp_assign_source_330 );
    }
    {
        PyObject *tmp_assign_source_331;
        PyObject *tmp_source_name_319;
        PyObject *tmp_mvar_value_338;
        tmp_mvar_value_338 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_338 == NULL ))
        {
            tmp_mvar_value_338 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_338 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 377;

            goto frame_exception_exit_1;
        }

        tmp_source_name_319 = tmp_mvar_value_338;
        tmp_assign_source_331 = LOOKUP_ATTRIBUTE( tmp_source_name_319, const_str_plain_j0 );
        if ( tmp_assign_source_331 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 377;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_j0, tmp_assign_source_331 );
    }
    {
        PyObject *tmp_assign_source_332;
        PyObject *tmp_source_name_320;
        PyObject *tmp_mvar_value_339;
        tmp_mvar_value_339 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_339 == NULL ))
        {
            tmp_mvar_value_339 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_339 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 378;

            goto frame_exception_exit_1;
        }

        tmp_source_name_320 = tmp_mvar_value_339;
        tmp_assign_source_332 = LOOKUP_ATTRIBUTE( tmp_source_name_320, const_str_plain_j1 );
        if ( tmp_assign_source_332 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_j1, tmp_assign_source_332 );
    }
    {
        PyObject *tmp_assign_source_333;
        PyObject *tmp_source_name_321;
        PyObject *tmp_mvar_value_340;
        tmp_mvar_value_340 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_340 == NULL ))
        {
            tmp_mvar_value_340 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_340 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 379;

            goto frame_exception_exit_1;
        }

        tmp_source_name_321 = tmp_mvar_value_340;
        tmp_assign_source_333 = LOOKUP_ATTRIBUTE( tmp_source_name_321, const_str_plain_besseli );
        if ( tmp_assign_source_333 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_besseli, tmp_assign_source_333 );
    }
    {
        PyObject *tmp_assign_source_334;
        PyObject *tmp_source_name_322;
        PyObject *tmp_mvar_value_341;
        tmp_mvar_value_341 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_341 == NULL ))
        {
            tmp_mvar_value_341 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_341 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 380;

            goto frame_exception_exit_1;
        }

        tmp_source_name_322 = tmp_mvar_value_341;
        tmp_assign_source_334 = LOOKUP_ATTRIBUTE( tmp_source_name_322, const_str_plain_bessely );
        if ( tmp_assign_source_334 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 380;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_bessely, tmp_assign_source_334 );
    }
    {
        PyObject *tmp_assign_source_335;
        PyObject *tmp_source_name_323;
        PyObject *tmp_mvar_value_342;
        tmp_mvar_value_342 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_342 == NULL ))
        {
            tmp_mvar_value_342 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_342 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 381;

            goto frame_exception_exit_1;
        }

        tmp_source_name_323 = tmp_mvar_value_342;
        tmp_assign_source_335 = LOOKUP_ATTRIBUTE( tmp_source_name_323, const_str_plain_besselk );
        if ( tmp_assign_source_335 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 381;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_besselk, tmp_assign_source_335 );
    }
    {
        PyObject *tmp_assign_source_336;
        PyObject *tmp_source_name_324;
        PyObject *tmp_mvar_value_343;
        tmp_mvar_value_343 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_343 == NULL ))
        {
            tmp_mvar_value_343 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_343 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 382;

            goto frame_exception_exit_1;
        }

        tmp_source_name_324 = tmp_mvar_value_343;
        tmp_assign_source_336 = LOOKUP_ATTRIBUTE( tmp_source_name_324, const_str_plain_besseljzero );
        if ( tmp_assign_source_336 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_besseljzero, tmp_assign_source_336 );
    }
    {
        PyObject *tmp_assign_source_337;
        PyObject *tmp_source_name_325;
        PyObject *tmp_mvar_value_344;
        tmp_mvar_value_344 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_344 == NULL ))
        {
            tmp_mvar_value_344 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_344 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 383;

            goto frame_exception_exit_1;
        }

        tmp_source_name_325 = tmp_mvar_value_344;
        tmp_assign_source_337 = LOOKUP_ATTRIBUTE( tmp_source_name_325, const_str_plain_besselyzero );
        if ( tmp_assign_source_337 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 383;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_besselyzero, tmp_assign_source_337 );
    }
    {
        PyObject *tmp_assign_source_338;
        PyObject *tmp_source_name_326;
        PyObject *tmp_mvar_value_345;
        tmp_mvar_value_345 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_345 == NULL ))
        {
            tmp_mvar_value_345 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_345 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 384;

            goto frame_exception_exit_1;
        }

        tmp_source_name_326 = tmp_mvar_value_345;
        tmp_assign_source_338 = LOOKUP_ATTRIBUTE( tmp_source_name_326, const_str_plain_hankel1 );
        if ( tmp_assign_source_338 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 384;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_hankel1, tmp_assign_source_338 );
    }
    {
        PyObject *tmp_assign_source_339;
        PyObject *tmp_source_name_327;
        PyObject *tmp_mvar_value_346;
        tmp_mvar_value_346 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_346 == NULL ))
        {
            tmp_mvar_value_346 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_346 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 385;

            goto frame_exception_exit_1;
        }

        tmp_source_name_327 = tmp_mvar_value_346;
        tmp_assign_source_339 = LOOKUP_ATTRIBUTE( tmp_source_name_327, const_str_plain_hankel2 );
        if ( tmp_assign_source_339 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 385;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_hankel2, tmp_assign_source_339 );
    }
    {
        PyObject *tmp_assign_source_340;
        PyObject *tmp_source_name_328;
        PyObject *tmp_mvar_value_347;
        tmp_mvar_value_347 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_347 == NULL ))
        {
            tmp_mvar_value_347 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_347 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 386;

            goto frame_exception_exit_1;
        }

        tmp_source_name_328 = tmp_mvar_value_347;
        tmp_assign_source_340 = LOOKUP_ATTRIBUTE( tmp_source_name_328, const_str_plain_struveh );
        if ( tmp_assign_source_340 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_struveh, tmp_assign_source_340 );
    }
    {
        PyObject *tmp_assign_source_341;
        PyObject *tmp_source_name_329;
        PyObject *tmp_mvar_value_348;
        tmp_mvar_value_348 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_348 == NULL ))
        {
            tmp_mvar_value_348 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_348 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 387;

            goto frame_exception_exit_1;
        }

        tmp_source_name_329 = tmp_mvar_value_348;
        tmp_assign_source_341 = LOOKUP_ATTRIBUTE( tmp_source_name_329, const_str_plain_struvel );
        if ( tmp_assign_source_341 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_struvel, tmp_assign_source_341 );
    }
    {
        PyObject *tmp_assign_source_342;
        PyObject *tmp_source_name_330;
        PyObject *tmp_mvar_value_349;
        tmp_mvar_value_349 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_349 == NULL ))
        {
            tmp_mvar_value_349 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_349 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 388;

            goto frame_exception_exit_1;
        }

        tmp_source_name_330 = tmp_mvar_value_349;
        tmp_assign_source_342 = LOOKUP_ATTRIBUTE( tmp_source_name_330, const_str_plain_angerj );
        if ( tmp_assign_source_342 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_angerj, tmp_assign_source_342 );
    }
    {
        PyObject *tmp_assign_source_343;
        PyObject *tmp_source_name_331;
        PyObject *tmp_mvar_value_350;
        tmp_mvar_value_350 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_350 == NULL ))
        {
            tmp_mvar_value_350 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_350 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 389;

            goto frame_exception_exit_1;
        }

        tmp_source_name_331 = tmp_mvar_value_350;
        tmp_assign_source_343 = LOOKUP_ATTRIBUTE( tmp_source_name_331, const_str_plain_webere );
        if ( tmp_assign_source_343 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 389;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_webere, tmp_assign_source_343 );
    }
    {
        PyObject *tmp_assign_source_344;
        PyObject *tmp_source_name_332;
        PyObject *tmp_mvar_value_351;
        tmp_mvar_value_351 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_351 == NULL ))
        {
            tmp_mvar_value_351 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_351 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 390;

            goto frame_exception_exit_1;
        }

        tmp_source_name_332 = tmp_mvar_value_351;
        tmp_assign_source_344 = LOOKUP_ATTRIBUTE( tmp_source_name_332, const_str_plain_lommels1 );
        if ( tmp_assign_source_344 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 390;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_lommels1, tmp_assign_source_344 );
    }
    {
        PyObject *tmp_assign_source_345;
        PyObject *tmp_source_name_333;
        PyObject *tmp_mvar_value_352;
        tmp_mvar_value_352 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_352 == NULL ))
        {
            tmp_mvar_value_352 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_352 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 391;

            goto frame_exception_exit_1;
        }

        tmp_source_name_333 = tmp_mvar_value_352;
        tmp_assign_source_345 = LOOKUP_ATTRIBUTE( tmp_source_name_333, const_str_plain_lommels2 );
        if ( tmp_assign_source_345 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_lommels2, tmp_assign_source_345 );
    }
    {
        PyObject *tmp_assign_source_346;
        PyObject *tmp_source_name_334;
        PyObject *tmp_mvar_value_353;
        tmp_mvar_value_353 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_353 == NULL ))
        {
            tmp_mvar_value_353 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_353 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 392;

            goto frame_exception_exit_1;
        }

        tmp_source_name_334 = tmp_mvar_value_353;
        tmp_assign_source_346 = LOOKUP_ATTRIBUTE( tmp_source_name_334, const_str_plain_whitm );
        if ( tmp_assign_source_346 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 392;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_whitm, tmp_assign_source_346 );
    }
    {
        PyObject *tmp_assign_source_347;
        PyObject *tmp_source_name_335;
        PyObject *tmp_mvar_value_354;
        tmp_mvar_value_354 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_354 == NULL ))
        {
            tmp_mvar_value_354 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_354 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 393;

            goto frame_exception_exit_1;
        }

        tmp_source_name_335 = tmp_mvar_value_354;
        tmp_assign_source_347 = LOOKUP_ATTRIBUTE( tmp_source_name_335, const_str_plain_whitw );
        if ( tmp_assign_source_347 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 393;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_whitw, tmp_assign_source_347 );
    }
    {
        PyObject *tmp_assign_source_348;
        PyObject *tmp_source_name_336;
        PyObject *tmp_mvar_value_355;
        tmp_mvar_value_355 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_355 == NULL ))
        {
            tmp_mvar_value_355 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_355 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 394;

            goto frame_exception_exit_1;
        }

        tmp_source_name_336 = tmp_mvar_value_355;
        tmp_assign_source_348 = LOOKUP_ATTRIBUTE( tmp_source_name_336, const_str_plain_ber );
        if ( tmp_assign_source_348 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 394;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_ber, tmp_assign_source_348 );
    }
    {
        PyObject *tmp_assign_source_349;
        PyObject *tmp_source_name_337;
        PyObject *tmp_mvar_value_356;
        tmp_mvar_value_356 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_356 == NULL ))
        {
            tmp_mvar_value_356 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_356 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 395;

            goto frame_exception_exit_1;
        }

        tmp_source_name_337 = tmp_mvar_value_356;
        tmp_assign_source_349 = LOOKUP_ATTRIBUTE( tmp_source_name_337, const_str_plain_bei );
        if ( tmp_assign_source_349 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 395;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_bei, tmp_assign_source_349 );
    }
    {
        PyObject *tmp_assign_source_350;
        PyObject *tmp_source_name_338;
        PyObject *tmp_mvar_value_357;
        tmp_mvar_value_357 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_357 == NULL ))
        {
            tmp_mvar_value_357 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_357 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 396;

            goto frame_exception_exit_1;
        }

        tmp_source_name_338 = tmp_mvar_value_357;
        tmp_assign_source_350 = LOOKUP_ATTRIBUTE( tmp_source_name_338, const_str_plain_ker );
        if ( tmp_assign_source_350 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 396;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_ker, tmp_assign_source_350 );
    }
    {
        PyObject *tmp_assign_source_351;
        PyObject *tmp_source_name_339;
        PyObject *tmp_mvar_value_358;
        tmp_mvar_value_358 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_358 == NULL ))
        {
            tmp_mvar_value_358 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_358 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 397;

            goto frame_exception_exit_1;
        }

        tmp_source_name_339 = tmp_mvar_value_358;
        tmp_assign_source_351 = LOOKUP_ATTRIBUTE( tmp_source_name_339, const_str_plain_kei );
        if ( tmp_assign_source_351 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_kei, tmp_assign_source_351 );
    }
    {
        PyObject *tmp_assign_source_352;
        PyObject *tmp_source_name_340;
        PyObject *tmp_mvar_value_359;
        tmp_mvar_value_359 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_359 == NULL ))
        {
            tmp_mvar_value_359 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_359 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 398;

            goto frame_exception_exit_1;
        }

        tmp_source_name_340 = tmp_mvar_value_359;
        tmp_assign_source_352 = LOOKUP_ATTRIBUTE( tmp_source_name_340, const_str_plain_coulombc );
        if ( tmp_assign_source_352 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 398;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_coulombc, tmp_assign_source_352 );
    }
    {
        PyObject *tmp_assign_source_353;
        PyObject *tmp_source_name_341;
        PyObject *tmp_mvar_value_360;
        tmp_mvar_value_360 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_360 == NULL ))
        {
            tmp_mvar_value_360 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_360 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 399;

            goto frame_exception_exit_1;
        }

        tmp_source_name_341 = tmp_mvar_value_360;
        tmp_assign_source_353 = LOOKUP_ATTRIBUTE( tmp_source_name_341, const_str_plain_coulombf );
        if ( tmp_assign_source_353 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 399;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_coulombf, tmp_assign_source_353 );
    }
    {
        PyObject *tmp_assign_source_354;
        PyObject *tmp_source_name_342;
        PyObject *tmp_mvar_value_361;
        tmp_mvar_value_361 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_361 == NULL ))
        {
            tmp_mvar_value_361 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_361 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 400;

            goto frame_exception_exit_1;
        }

        tmp_source_name_342 = tmp_mvar_value_361;
        tmp_assign_source_354 = LOOKUP_ATTRIBUTE( tmp_source_name_342, const_str_plain_coulombg );
        if ( tmp_assign_source_354 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_coulombg, tmp_assign_source_354 );
    }
    {
        PyObject *tmp_assign_source_355;
        PyObject *tmp_source_name_343;
        PyObject *tmp_mvar_value_362;
        tmp_mvar_value_362 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_362 == NULL ))
        {
            tmp_mvar_value_362 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_362 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 401;

            goto frame_exception_exit_1;
        }

        tmp_source_name_343 = tmp_mvar_value_362;
        tmp_assign_source_355 = LOOKUP_ATTRIBUTE( tmp_source_name_343, const_str_plain_barnesg );
        if ( tmp_assign_source_355 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 401;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_barnesg, tmp_assign_source_355 );
    }
    {
        PyObject *tmp_assign_source_356;
        PyObject *tmp_source_name_344;
        PyObject *tmp_mvar_value_363;
        tmp_mvar_value_363 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_363 == NULL ))
        {
            tmp_mvar_value_363 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_363 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 402;

            goto frame_exception_exit_1;
        }

        tmp_source_name_344 = tmp_mvar_value_363;
        tmp_assign_source_356 = LOOKUP_ATTRIBUTE( tmp_source_name_344, const_str_plain_superfac );
        if ( tmp_assign_source_356 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 402;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_superfac, tmp_assign_source_356 );
    }
    {
        PyObject *tmp_assign_source_357;
        PyObject *tmp_source_name_345;
        PyObject *tmp_mvar_value_364;
        tmp_mvar_value_364 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_364 == NULL ))
        {
            tmp_mvar_value_364 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_364 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 403;

            goto frame_exception_exit_1;
        }

        tmp_source_name_345 = tmp_mvar_value_364;
        tmp_assign_source_357 = LOOKUP_ATTRIBUTE( tmp_source_name_345, const_str_plain_hyperfac );
        if ( tmp_assign_source_357 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 403;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_hyperfac, tmp_assign_source_357 );
    }
    {
        PyObject *tmp_assign_source_358;
        PyObject *tmp_source_name_346;
        PyObject *tmp_mvar_value_365;
        tmp_mvar_value_365 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_365 == NULL ))
        {
            tmp_mvar_value_365 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_365 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 404;

            goto frame_exception_exit_1;
        }

        tmp_source_name_346 = tmp_mvar_value_365;
        tmp_assign_source_358 = LOOKUP_ATTRIBUTE( tmp_source_name_346, const_str_plain_loggamma );
        if ( tmp_assign_source_358 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 404;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_loggamma, tmp_assign_source_358 );
    }
    {
        PyObject *tmp_assign_source_359;
        PyObject *tmp_source_name_347;
        PyObject *tmp_mvar_value_366;
        tmp_mvar_value_366 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_366 == NULL ))
        {
            tmp_mvar_value_366 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_366 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 405;

            goto frame_exception_exit_1;
        }

        tmp_source_name_347 = tmp_mvar_value_366;
        tmp_assign_source_359 = LOOKUP_ATTRIBUTE( tmp_source_name_347, const_str_plain_siegeltheta );
        if ( tmp_assign_source_359 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 405;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_siegeltheta, tmp_assign_source_359 );
    }
    {
        PyObject *tmp_assign_source_360;
        PyObject *tmp_source_name_348;
        PyObject *tmp_mvar_value_367;
        tmp_mvar_value_367 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_367 == NULL ))
        {
            tmp_mvar_value_367 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_367 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 406;

            goto frame_exception_exit_1;
        }

        tmp_source_name_348 = tmp_mvar_value_367;
        tmp_assign_source_360 = LOOKUP_ATTRIBUTE( tmp_source_name_348, const_str_plain_siegelz );
        if ( tmp_assign_source_360 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_siegelz, tmp_assign_source_360 );
    }
    {
        PyObject *tmp_assign_source_361;
        PyObject *tmp_source_name_349;
        PyObject *tmp_mvar_value_368;
        tmp_mvar_value_368 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_368 == NULL ))
        {
            tmp_mvar_value_368 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_368 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 407;

            goto frame_exception_exit_1;
        }

        tmp_source_name_349 = tmp_mvar_value_368;
        tmp_assign_source_361 = LOOKUP_ATTRIBUTE( tmp_source_name_349, const_str_plain_grampoint );
        if ( tmp_assign_source_361 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 407;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_grampoint, tmp_assign_source_361 );
    }
    {
        PyObject *tmp_assign_source_362;
        PyObject *tmp_source_name_350;
        PyObject *tmp_mvar_value_369;
        tmp_mvar_value_369 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_369 == NULL ))
        {
            tmp_mvar_value_369 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_369 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 408;

            goto frame_exception_exit_1;
        }

        tmp_source_name_350 = tmp_mvar_value_369;
        tmp_assign_source_362 = LOOKUP_ATTRIBUTE( tmp_source_name_350, const_str_plain_zetazero );
        if ( tmp_assign_source_362 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 408;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_zetazero, tmp_assign_source_362 );
    }
    {
        PyObject *tmp_assign_source_363;
        PyObject *tmp_source_name_351;
        PyObject *tmp_mvar_value_370;
        tmp_mvar_value_370 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_370 == NULL ))
        {
            tmp_mvar_value_370 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_370 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 409;

            goto frame_exception_exit_1;
        }

        tmp_source_name_351 = tmp_mvar_value_370;
        tmp_assign_source_363 = LOOKUP_ATTRIBUTE( tmp_source_name_351, const_str_plain_riemannr );
        if ( tmp_assign_source_363 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 409;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_riemannr, tmp_assign_source_363 );
    }
    {
        PyObject *tmp_assign_source_364;
        PyObject *tmp_source_name_352;
        PyObject *tmp_mvar_value_371;
        tmp_mvar_value_371 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_371 == NULL ))
        {
            tmp_mvar_value_371 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_371 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 410;

            goto frame_exception_exit_1;
        }

        tmp_source_name_352 = tmp_mvar_value_371;
        tmp_assign_source_364 = LOOKUP_ATTRIBUTE( tmp_source_name_352, const_str_plain_primepi );
        if ( tmp_assign_source_364 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 410;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_primepi, tmp_assign_source_364 );
    }
    {
        PyObject *tmp_assign_source_365;
        PyObject *tmp_source_name_353;
        PyObject *tmp_mvar_value_372;
        tmp_mvar_value_372 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_372 == NULL ))
        {
            tmp_mvar_value_372 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_372 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 411;

            goto frame_exception_exit_1;
        }

        tmp_source_name_353 = tmp_mvar_value_372;
        tmp_assign_source_365 = LOOKUP_ATTRIBUTE( tmp_source_name_353, const_str_plain_primepi2 );
        if ( tmp_assign_source_365 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 411;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_primepi2, tmp_assign_source_365 );
    }
    {
        PyObject *tmp_assign_source_366;
        PyObject *tmp_source_name_354;
        PyObject *tmp_mvar_value_373;
        tmp_mvar_value_373 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_373 == NULL ))
        {
            tmp_mvar_value_373 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_373 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 412;

            goto frame_exception_exit_1;
        }

        tmp_source_name_354 = tmp_mvar_value_373;
        tmp_assign_source_366 = LOOKUP_ATTRIBUTE( tmp_source_name_354, const_str_plain_primezeta );
        if ( tmp_assign_source_366 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 412;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_primezeta, tmp_assign_source_366 );
    }
    {
        PyObject *tmp_assign_source_367;
        PyObject *tmp_source_name_355;
        PyObject *tmp_mvar_value_374;
        tmp_mvar_value_374 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_374 == NULL ))
        {
            tmp_mvar_value_374 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_374 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 413;

            goto frame_exception_exit_1;
        }

        tmp_source_name_355 = tmp_mvar_value_374;
        tmp_assign_source_367 = LOOKUP_ATTRIBUTE( tmp_source_name_355, const_str_plain_bell );
        if ( tmp_assign_source_367 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 413;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_bell, tmp_assign_source_367 );
    }
    {
        PyObject *tmp_assign_source_368;
        PyObject *tmp_source_name_356;
        PyObject *tmp_mvar_value_375;
        tmp_mvar_value_375 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_375 == NULL ))
        {
            tmp_mvar_value_375 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_375 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 414;

            goto frame_exception_exit_1;
        }

        tmp_source_name_356 = tmp_mvar_value_375;
        tmp_assign_source_368 = LOOKUP_ATTRIBUTE( tmp_source_name_356, const_str_plain_polyexp );
        if ( tmp_assign_source_368 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 414;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_polyexp, tmp_assign_source_368 );
    }
    {
        PyObject *tmp_assign_source_369;
        PyObject *tmp_source_name_357;
        PyObject *tmp_mvar_value_376;
        tmp_mvar_value_376 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_376 == NULL ))
        {
            tmp_mvar_value_376 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_376 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 415;

            goto frame_exception_exit_1;
        }

        tmp_source_name_357 = tmp_mvar_value_376;
        tmp_assign_source_369 = LOOKUP_ATTRIBUTE( tmp_source_name_357, const_str_plain_expm1 );
        if ( tmp_assign_source_369 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 415;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_expm1, tmp_assign_source_369 );
    }
    {
        PyObject *tmp_assign_source_370;
        PyObject *tmp_source_name_358;
        PyObject *tmp_mvar_value_377;
        tmp_mvar_value_377 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_377 == NULL ))
        {
            tmp_mvar_value_377 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_377 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 416;

            goto frame_exception_exit_1;
        }

        tmp_source_name_358 = tmp_mvar_value_377;
        tmp_assign_source_370 = LOOKUP_ATTRIBUTE( tmp_source_name_358, const_str_plain_log1p );
        if ( tmp_assign_source_370 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_log1p, tmp_assign_source_370 );
    }
    {
        PyObject *tmp_assign_source_371;
        PyObject *tmp_source_name_359;
        PyObject *tmp_mvar_value_378;
        tmp_mvar_value_378 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_378 == NULL ))
        {
            tmp_mvar_value_378 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_378 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 417;

            goto frame_exception_exit_1;
        }

        tmp_source_name_359 = tmp_mvar_value_378;
        tmp_assign_source_371 = LOOKUP_ATTRIBUTE( tmp_source_name_359, const_str_plain_powm1 );
        if ( tmp_assign_source_371 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 417;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_powm1, tmp_assign_source_371 );
    }
    {
        PyObject *tmp_assign_source_372;
        PyObject *tmp_source_name_360;
        PyObject *tmp_mvar_value_379;
        tmp_mvar_value_379 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_379 == NULL ))
        {
            tmp_mvar_value_379 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_379 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 418;

            goto frame_exception_exit_1;
        }

        tmp_source_name_360 = tmp_mvar_value_379;
        tmp_assign_source_372 = LOOKUP_ATTRIBUTE( tmp_source_name_360, const_str_plain_unitroots );
        if ( tmp_assign_source_372 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_unitroots, tmp_assign_source_372 );
    }
    {
        PyObject *tmp_assign_source_373;
        PyObject *tmp_source_name_361;
        PyObject *tmp_mvar_value_380;
        tmp_mvar_value_380 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_380 == NULL ))
        {
            tmp_mvar_value_380 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_380 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 419;

            goto frame_exception_exit_1;
        }

        tmp_source_name_361 = tmp_mvar_value_380;
        tmp_assign_source_373 = LOOKUP_ATTRIBUTE( tmp_source_name_361, const_str_plain_cyclotomic );
        if ( tmp_assign_source_373 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_cyclotomic, tmp_assign_source_373 );
    }
    {
        PyObject *tmp_assign_source_374;
        PyObject *tmp_source_name_362;
        PyObject *tmp_mvar_value_381;
        tmp_mvar_value_381 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_381 == NULL ))
        {
            tmp_mvar_value_381 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_381 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 420;

            goto frame_exception_exit_1;
        }

        tmp_source_name_362 = tmp_mvar_value_381;
        tmp_assign_source_374 = LOOKUP_ATTRIBUTE( tmp_source_name_362, const_str_plain_mangoldt );
        if ( tmp_assign_source_374 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mangoldt, tmp_assign_source_374 );
    }
    {
        PyObject *tmp_assign_source_375;
        PyObject *tmp_source_name_363;
        PyObject *tmp_mvar_value_382;
        tmp_mvar_value_382 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_382 == NULL ))
        {
            tmp_mvar_value_382 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_382 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 421;

            goto frame_exception_exit_1;
        }

        tmp_source_name_363 = tmp_mvar_value_382;
        tmp_assign_source_375 = LOOKUP_ATTRIBUTE( tmp_source_name_363, const_str_plain_secondzeta );
        if ( tmp_assign_source_375 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_secondzeta, tmp_assign_source_375 );
    }
    {
        PyObject *tmp_assign_source_376;
        PyObject *tmp_source_name_364;
        PyObject *tmp_mvar_value_383;
        tmp_mvar_value_383 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_383 == NULL ))
        {
            tmp_mvar_value_383 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_383 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 422;

            goto frame_exception_exit_1;
        }

        tmp_source_name_364 = tmp_mvar_value_383;
        tmp_assign_source_376 = LOOKUP_ATTRIBUTE( tmp_source_name_364, const_str_plain_nzeros );
        if ( tmp_assign_source_376 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_nzeros, tmp_assign_source_376 );
    }
    {
        PyObject *tmp_assign_source_377;
        PyObject *tmp_source_name_365;
        PyObject *tmp_mvar_value_384;
        tmp_mvar_value_384 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_384 == NULL ))
        {
            tmp_mvar_value_384 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_384 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 423;

            goto frame_exception_exit_1;
        }

        tmp_source_name_365 = tmp_mvar_value_384;
        tmp_assign_source_377 = LOOKUP_ATTRIBUTE( tmp_source_name_365, const_str_plain_backlunds );
        if ( tmp_assign_source_377 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 423;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_backlunds, tmp_assign_source_377 );
    }
    {
        PyObject *tmp_assign_source_378;
        PyObject *tmp_source_name_366;
        PyObject *tmp_mvar_value_385;
        tmp_mvar_value_385 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_385 == NULL ))
        {
            tmp_mvar_value_385 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_385 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 424;

            goto frame_exception_exit_1;
        }

        tmp_source_name_366 = tmp_mvar_value_385;
        tmp_assign_source_378 = LOOKUP_ATTRIBUTE( tmp_source_name_366, const_str_plain_lerchphi );
        if ( tmp_assign_source_378 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_lerchphi, tmp_assign_source_378 );
    }
    {
        PyObject *tmp_assign_source_379;
        PyObject *tmp_source_name_367;
        PyObject *tmp_mvar_value_386;
        tmp_mvar_value_386 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_386 == NULL ))
        {
            tmp_mvar_value_386 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_386 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 425;

            goto frame_exception_exit_1;
        }

        tmp_source_name_367 = tmp_mvar_value_386;
        tmp_assign_source_379 = LOOKUP_ATTRIBUTE( tmp_source_name_367, const_str_plain_stirling1 );
        if ( tmp_assign_source_379 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 425;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_stirling1, tmp_assign_source_379 );
    }
    {
        PyObject *tmp_assign_source_380;
        PyObject *tmp_source_name_368;
        PyObject *tmp_mvar_value_387;
        tmp_mvar_value_387 = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_mp );

        if (unlikely( tmp_mvar_value_387 == NULL ))
        {
            tmp_mvar_value_387 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mp );
        }

        if ( tmp_mvar_value_387 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "mp" );
            exception_tb = NULL;

            exception_lineno = 426;

            goto frame_exception_exit_1;
        }

        tmp_source_name_368 = tmp_mvar_value_387;
        tmp_assign_source_380 = LOOKUP_ATTRIBUTE( tmp_source_name_368, const_str_plain_stirling2 );
        if ( tmp_assign_source_380 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_stirling2, tmp_assign_source_380 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b14a549a5c2bf3fd958201a594a85626 );
#endif
    popFrameStack();

    assertFrameObject( frame_b14a549a5c2bf3fd958201a594a85626 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b14a549a5c2bf3fd958201a594a85626 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b14a549a5c2bf3fd958201a594a85626, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b14a549a5c2bf3fd958201a594a85626->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b14a549a5c2bf3fd958201a594a85626, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_381;
        tmp_assign_source_381 = MAKE_FUNCTION_mpmath$$$function_1_runtests(  );



        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_runtests, tmp_assign_source_381 );
    }
    {
        PyObject *tmp_assign_source_382;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = PyList_New( 0 );
        tmp_defaults_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
        tmp_assign_source_382 = MAKE_FUNCTION_mpmath$$$function_2_doctests( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain_doctests, tmp_assign_source_382 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 1 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_mpmath, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_mpmath );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
